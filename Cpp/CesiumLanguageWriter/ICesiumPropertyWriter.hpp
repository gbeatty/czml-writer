#pragma once

#include "ICesiumElementWriter.hpp"
#include <memory>

namespace CesiumLanguageWriter
{
	class JulianDate;
}

namespace CesiumLanguageWriterAdvanced
{
	class ICesiumIntervalListWriter;


	/// <summary>
	/// An interface to an object that writes the values of a CZML
	/// property over one or more intervals.
	/// </summary>
	class ICesiumPropertyWriter : public ICesiumElementWriter
	{
	public:

		/// <summary>
		/// Writes the actual interval of time covered by this CZML interval.
		/// </summary>
		/// <param name="start">The start of the interval.</param>
		/// <param name="stop">The end of the interval.</param>
		virtual void WriteInterval(const CesiumLanguageWriter::JulianDate& start, const CesiumLanguageWriter::JulianDate& stop) = 0;

		/// <summary>
		/// Opens a writer that is used to write information about this property for a single interval.
		/// </summary>
		/// <returns>The writer.</returns>
		virtual std::shared_ptr<ICesiumPropertyWriter> OpenInterval() = 0;

		/// <summary>
		/// Opens a writer that is used to write information about this property for multiple discrete intervals.
		/// </summary>
		/// <returns>The writer.</returns>
		virtual std::shared_ptr<ICesiumIntervalListWriter> OpenMultipleIntervals() = 0;

		/// <summary>
		/// Gets a writer for intervals of this property.  The returned instance must be opened by calling
		/// the <see cref="ICesiumElementWriter.Open"/> method before it can be used for writing.  Consider
		/// calling the <see cref="OpenInterval"/> or <see cref="OpenMultipleIntervals"/> method, which will automatically
		/// open the writer, instead of accessing this property directly.
		/// </summary>
		virtual std::shared_ptr<ICesiumPropertyWriter> IntervalWriter() = 0;

		/// <summary>
		/// Gets a value indicating whether this instance should always open an interval.
		/// </summary>
		virtual bool ForceInterval() const = 0;

		/// <summary>
		/// Sets a value indicating whether this instance should always open an interval.
		/// </summary>
		virtual void ForceInterval(bool forceInterval) = 0;
	};
}