#pragma once

namespace CesiumLanguageWriter
{
	enum class CesiumInterpolationAlgorithm;
	enum class CesiumExtrapolationType;
	class Duration;
}

namespace CesiumLanguageWriterAdvanced
{
	/// <summary>
	/// An interface to a writer that writes information about how to interpolate sampled values.
	/// </summary>
	class ICesiumInterpolationInformationWriter
	{
		/// <summary>
		/// Writes the interpolation algorithm to use to interpolate the sampled data in this interval.
		/// </summary>
		/// <param name="interpolationAlgorithm">The interpolation algorithm.</param>
		virtual void WriteInterpolationAlgorithm(CesiumLanguageWriter::CesiumInterpolationAlgorithm interpolationAlgorithm) = 0;

		/// <summary>
		/// Writes the degree of polynomial to use to interpolate sampled data in this interval.
		/// </summary>
		/// <param name="degree">The degree.</param>
		virtual void WriteInterpolationDegree(int degree) = 0;

		/// <summary>
		/// Writes the type of extrapolation to perform when a value is requested at a time after any available samples.
		/// </summary>
		/// <param name="extrapolationType">The extrapolation type.</param>
		virtual void WriteForwardExtrapolationType(CesiumLanguageWriter::CesiumExtrapolationType extrapolationType) = 0;

		/// <summary>
		/// Writes the amount of time to extrapolate forward before the property becomes undefined.  A value of 0 will extrapolate forever.
		/// </summary>
		/// <param name="duration">The duration.</param>
		virtual void WriteForwardExtrapolationDuration(const CesiumLanguageWriter::Duration& duration) = 0;

		/// <summary>
		/// Writes the type of extrapolation to perform when a value is requested at a time before any available samples.
		/// </summary>
		/// <param name="extrapolationType">The extrapolation type.</param>
		virtual void WriteBackwardExtrapolationType(const CesiumLanguageWriter::CesiumExtrapolationType& extrapolationType) = 0;

		/// <summary>
		/// Writes the amount of time to extrapolate backward before the property becomes undefined.  A value of 0 will extrapolate forever.
		/// </summary>
		/// <param name="duration">The duration.</param>
		virtual void WriteBackwardExtrapolationDuration(const CesiumLanguageWriter::Duration& duration) = 0;
	}
}