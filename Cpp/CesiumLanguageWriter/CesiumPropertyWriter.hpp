#pragma once

#include "ICesiumPropertyWriter.hpp"
#include "TimeInterval.hpp"

#include <string>
#include <memory>
#include "Iso8601Format.hpp"

namespace CesiumLanguageWriterAdvanced
{
	/// <summary>
	/// A CZML writer for a property.  The property may be defined over a
	/// single interval or over multiple intervals.
	/// </summary>
	/// <typeparam name="TDerived">The type of the class derived from this one.</typeparam>
	template <typename TDerived>
	class CesiumPropertyWriter : public CesiumElementWriter, ICesiumPropertyWriter
	{
	public:

		/// <summary>
		/// Initializes a new instance.
		/// </summary>
		/// <param name="propertyName">The name of the property.</param>
		CesiumPropertyWriter(std::string propertyName)
		{
			m_propertyName = propertyName;
			m_multipleIntervals = new Lazy<CesiumIntervalListWriter<TDerived>>(CreateIntervalListWriter, false);
			m_interval = new Lazy<TDerived>(CopyForInterval, false);
		}

		/// <summary>
		/// Initializes a new instance as a copy of an existing instance.
		/// </summary>
		/// <param name="existingInstance">The existing instance to copy.</param>
		CesiumPropertyWriter<TDerived> CesiumPropertyWriter(const CesiumPropertyWriter<TDerived>& existingInstance)
			: this(existingInstance.m_propertyName)
		{
		}

		/// <summary>
		/// Gets the name of the property written by this instance.
		/// </summary>
		std::string PropertyName() const
		{
			return m_propertyName;
		}

		/// <summary>
		/// Gets a value indicating whether this instance represents an open interval.
		/// </summary>
		bool IsInterval() const
		{
			return m_elementType == ElementType::Interval || m_elementType == ElementType::PropertyConvertedToInterval;
		}

		/// <summary>
		/// Gets a writer for intervals of this property.  The returned instance must be opened by calling
		/// the <see cref="ICesiumElementWriter.Open"/> method before it can be used for writing.  Consider
		/// calling the <see cref="OpenInterval(JulianDate,JulianDate)"/> or <see cref="OpenMultipleIntervals"/> method, which will automatically
		/// open the writer, instead of accessing this property directly.
		/// </summary>
		std::shared_ptr<TDerived> IntervalWriter() const
		{
			return m_interval.Value;
		}

		/// <summary>
		/// Gets a value indicating whether this instance should always open an interval.
		/// </summary>
		virtual bool ForceInterval() const override
		{
			return m_forceInterval;
		}

		/// <summary>
		/// Sets a value indicating whether this instance should always open an interval.
		/// </summary>
		virtual void ForceInterval(bool force_interval) override
		{
			m_forceInterval = force_interval;
		}

		/// <summary>
		/// Copies this instance and returns the copy.
		/// </summary>
		/// <returns>The copy.</returns>
		virtual std::shared_ptr<TDerived> Clone() = 0;

		/// <summary>
		/// Opens a writer that is used to write information about this property for a single interval.
		/// </summary>
		/// <returns>The writer.</returns>
		virtual std::shared_ptr<TDerived> OpenInterval() override
		{
			std::shared_ptr<TDerived> result = OpenAndReturn(m_interval.Value);
			return result;
		}

		/// <summary>
		/// Opens a writer that is used to write information about this property for a single interval.
		/// </summary>
		/// <param name="start">The start of the interval of time covered by this interval element.</param>
		/// <param name="stop">The end of the interval of time covered by this interval element.</param>
		/// <returns>The writer.</returns>
		std::shared_ptr<TDerived> OpenInterval(const CesiumLanguageWriter::JulianDate& start, const CesiumLanguageWriter::JulianDate& stop)
		{
			std::shared_ptr<TDerived> result = OpenAndReturn(m_interval.Value);
			result->WriteInterval(start, stop);
			return result;
		}

		/// <summary>
		/// Opens a writer that is used to write information about this property for multiple discrete intervals.
		/// </summary>
		/// <returns>The writer.</returns>
		std::shared_ptr< CesiumIntervalListWriter<TDerived> > OpenMultipleIntervals()
		{
			return OpenAndReturn(m_multipleIntervals.Value);
		}

		/// <summary>
		/// Writes the actual interval of time covered by this CZML interval.
		/// </summary>
		/// <param name="start">The first date of the interval.</param>
		/// <param name="stop">The last date of the interval.</param>
		virtual void WriteInterval(const CesiumLanguageWriter::JulianDate& start, const CesiumLanguageWriter::JulianDate& stop) override
		{
			WriteInterval(std::make_shared<TimeInterval>(start, stop));
		}

		/// <summary>
		/// Writes the actual interval of time covered by this CZML interval.
		/// </summary>
		/// <param name="interval">The interval.</param>
		void WriteInterval(std::shared_ptr<TimeInterval> interval)
		{
			OpenIntervalIfNecessary();
			Output()->WritePropertyName("interval");
			Output()->WriteValue(CesiumFormattingHelper.ToIso8601Interval(interval->Start(), interval->Stop(), 
				Output()->PrettyFormatting ? CesiumLanguageWriter::Iso8601Format::Extended : CesiumLanguageWriter::Iso8601Format::Compact));
		}


	protected:

		/// <inheritdoc />
		virtual void OnOpen() override
		{
			if (m_elementType == ElementType::Interval || m_elementType == ElementType::PropertyConvertedToInterval)
				Output()->WriteStartObject();
			else
				Output()->WritePropertyName(m_propertyName);
		}

		/// <inheritdoc />
		virtual void OnClose() override
		{
			if (m_elementType == ElementType::Interval || m_elementType == ElementType::PropertyConvertedToInterval)
			{
				Output()->WriteEndObject();
				if (m_elementType == ElementType::PropertyConvertedToInterval)
					m_elementType = ElementType::Property;
			}
		}

		/// <summary>
		/// Opens an interval for this property if one is not already open.  This method should be called by
		/// derived-class <filter name="DotNet,Silverlight"><code>Open...</code></filter>
		/// <filter name="Java"><code>open...</code></filter> methods prior to opening the nested property.
		/// </summary>
		void OpenIntervalIfNecessary()
		{
			if (m_elementType == ElementType::Property)
			{
				m_elementType = ElementType::PropertyConvertedToInterval;
				OnOpen();
			}
		}


	private:

		enum ElementType
		{
			Property,
			Interval,
			PropertyConvertedToInterval
		};

		CesiumIntervalListWriter<TDerived> CreateIntervalListWriter()
		{
			return new CesiumIntervalListWriter<TDerived>(this);
		}

		TDerived CopyForInterval()
		{
			TDerived result = Clone();
			result.m_elementType = ElementType::Interval;
			return result;
		}
			
		std::string m_propertyName;
		bool m_forceInterval;
		CesiumIntervalListWriter<TDerived> m_multipleIntervals;
		TDerived m_interval;
		ElementType m_elementType = ElementType::Property;



			

			

			
		virtual std::shared_ptr<ICesiumPropertyWriter> OpenInterval()
		{
			return OpenInterval;
		}
		ICesiumPropertyWriter ICesiumPropertyWriter.OpenInterval()
		{
			return OpenInterval();
		}

		ICesiumIntervalListWriter ICesiumPropertyWriter.OpenMultipleIntervals()
		{
			return OpenMultipleIntervals();
		}

		ICesiumPropertyWriter ICesiumPropertyWriter.IntervalWriter
		{
			get{ return IntervalWriter; }
		}
	};
}


