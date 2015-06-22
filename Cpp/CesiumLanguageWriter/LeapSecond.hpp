#pragma once

#include "JulianDate.hpp"
#include "TimeStandard.hpp"

#include <string>

namespace CesiumLanguageWriter
{
	/// <summary>
	/// Describes a single leap second.
	/// </summary>
	/// <remarks>
	/// The International Earth Rotation Service (IERS) periodically introduces an intercalary adjustment
	/// to the Coordinated Universal Time (UTC) time scale in order to keep it in close agreement with the
	/// Universal Time (UT1) time scale.  This adjustment amounts to a one second discontinuity, a leap second,
	/// in the UTC time scale that, in addition to the UT1 time scales, also affects transformations to
	/// other continuous time scales.  Since the inception of leap seconds, all adjustments have been
	/// performed either at the end of 30 June or 31 December UTC though a leap second could, by rule,
	/// be applied at the end of any month.
	/// </remarks>
	class LeapSecond
	{
	public:

		/// <summary>
		/// Initializes a new instance of a Leap Second.
		/// </summary>
		/// <param name="date">The Julian date of the leap second, in Coordinated Universal Time (UTC).</param>
		/// <param name="totalTaiOffsetFromUtc">The offset of TAI from UTC after this leap second.</param>
		LeapSecond(double date, double totalTaiOffsetFromUtc) :
			LeapSecond(new JulianDate(date, TimeStandard::CoordinatedUniversalTime), totalTaiOffsetFromUtc)
		{
		}

		/// <summary>
		/// Initializes a new instance of a Leap Second.
		/// </summary>
		/// <param name="date">The date of the leap second.  This will be assumed to be Coordinated Universal Time (UTC) regardless of the actual time standard associated with the date.</param>
		/// <param name="totalTaiOffsetFromUtc">The offset of TAI from UTC after this leap second.</param>
		LeapSecond(JulianDate date, double totalTaiOffsetFromUtc)
		{
			// Force the time standard to be UTC.
			m_date = JulianDate(date.Day(), date.SecondsOfDay(), TimeStandard::CoordinatedUniversalTime);
			m_totalTaiOffsetFromUtc = totalTaiOffsetFromUtc;
		}

		/// <summary>
		/// Gets the date of the leap second.
		/// </summary>
		JulianDate Date()
		{
			return m_date;
		}

		/// <summary>
		/// Gets the total difference TAI - UTC after this leap second, in seconds.
		/// </summary>
		double TotalTaiOffsetFromUtc()
		{
			return m_totalTaiOffsetFromUtc;
		}

		/// <summary>
		/// Indicates whether another instance of this type is exactly equal to this instance.
		/// </summary>
		/// <param name="other">The instance to compare to this instance.</param>
		/// <returns><see langword="true"/> if <paramref name="other"/> represents the same value as this instance; otherwise, <see langword="false"/>.</returns>
		bool operator ==(const LeapSecond& other) const
		{
			return m_date.IsIdentical(other.Date) &&
				TotalTaiOffsetFromUtc == other.TotalTaiOffsetFromUtc;
		}

		/// <summary>
		/// Returns the date of this LeapSecond and offset from UTC as a string.
		/// </summary>
		/// <returns>The string.</returns>
		std::string ToString()
		{
			return String.Format(CultureInfo.CurrentCulture, "{0}, {1}", Date, TotalTaiOffsetFromUtc);
		}

		/// <summary>
		/// Returns a hash code for this instance, which is suitable for use in hashing algorithms and data structures like a hash table.
		/// </summary>
		/// <returns>A hash code for the current object.</returns>
		int GetHashCode()
		{
			return Date.GetHashCode() ^ TotalTaiOffsetFromUtc.GetHashCode();
		}

		/// <summary>
		/// Returns <see langword="true"/> if the two instances are exactly equal.
		/// </summary>
		/// <param name="left">The instance to compare to <paramref name="right"/>.</param>
		/// <param name="right">The instance to compare to <paramref name="left"/>.</param>
		/// <returns>
		/// <see langword="true"/> if <paramref name="left"/> represents the same value as <paramref name="right"/>; otherwise, <see langword="false"/>.
		/// </returns>
		static bool operator ==(const LeapSecond& left, const LeapSecond& right)
		{
			return left == right;
		}

		/// <summary>
		/// Returns <see langword="true"/> if the two instances are not exactly equal.
		/// </summary>
		/// <param name="left">The instance to compare to <paramref name="right"/>.</param>
		/// <param name="right">The instance to compare to <paramref name="left"/>.</param>
		/// <returns>
		/// <see langword="true"/> if <paramref name="left"/> does not represent the same value as <paramref name="right"/>; otherwise, <see langword="false"/>.
		/// </returns>
		static bool operator !=(const LeapSecond& left, const LeapSecond& right)
		{
			return !(left == right);
		}


	private:
		
		JulianDate m_date;
		double m_totalTaiOffsetFromUtc;
	};
}