#pragma once

#include "JulianDate.hpp"
#include "CesiumInterpolatablePropertyWriter.hpp"

namespace CesiumLanguageWriter
{
	/// <summary>
	/// An interval defined by a start date and a stop date.  The end points are optionally included
	/// in the interval.
	/// </summary>
	class TimeInterval
	{
	public:

		/// <summary>
		/// Initializes a new interval with the specified start date and stop date.
		/// The new interval is closed, meaning that both end points are included.
		/// </summary>
		/// <param name="start">The first date in the interval.</param>
		/// <param name="stop">The last date in the interval.</param>
		TimeInterval(JulianDate start, JulianDate stop)
		{
			m_start = start;
			m_stop = stop;
		}

		/// <summary>
		/// Gets the start date of the interval.
		/// </summary>
		JulianDate Start() const
		{
			return m_start;
		}

		/// <summary>
		/// Gets the stop date of the interval.
		/// </summary>
		JulianDate Stop() const
		{
			return m_stop;
		}

		/// <summary>
		/// Gets a value indicating whether or not the interval is empty.
		/// </summary>
		bool IsEmpty()
		{
			return m_start >= m_stop;
		}

		/// <summary>
		/// Returns a <see cref="Duration"/> representing the span of time between the
		/// <see cref="Start"/> and <see cref="Stop"/> of the interval.
		/// </summary>
		/// <returns>The duration.</returns>
		Duration ToDuration()
		{
			return m_stop - m_start;
		}

		/// <summary>
		/// Returns a <see cref="TimeInterval"/> equivalent to this one where the time standard
		/// of the start and end dates has been converted to the specified standard.
		/// </summary>
		/// <param name="timeStandard">The time standard of the new interval.</param>
		/// <returns>An equivalent interval with the new time standard.</returns>
		TimeInterval ToTimeStandard(TimeStandard timeStandard)
		{
			if (m_start.Standard == timeStandard &&
				m_stop.Standard == timeStandard)
			{
				return this;
			}

			return new TimeInterval(m_start.ToTimeStandard(timeStandard), m_stop.ToTimeStandard(timeStandard));
		}

		/// <summary>
		/// Determines if the interval contains a specified date.
		/// </summary>
		/// <param name="date">The date to test.</param>
		/// <returns>true if the interval contains the date, otherwise false.</returns>
		bool Contains(JulianDate date)
		{
			if (IsEmpty)
				return false;

			int startComparedToDate = m_start.CompareTo(date);
			int dateComparedToStop = date.CompareTo(m_stop);

			// return start < date && date < stop
			return startComparedToDate <= 0 && dateComparedToStop <= 0;
		}

		/// <summary>
		/// Determines if this time interval is equal to another time interval, using an epsilon to compare
		/// the <see cref="Start"/> and <see cref="Stop"/> properties of the
		/// two intervals.  The dates are considered equal if they are within <paramref name="epsilon"/>
		/// seconds of each other.  All other properties must be identical.
		/// </summary>
		/// <param name="other">The time interval to compare to this time interval.</param>
		/// <param name="epsilon">The smallest difference between the <see cref="Start"/> and <see cref="Stop"/> dates, in seconds, such that they will NOT be considered equal.</param>
		/// <returns>true if the <see cref="Start"/> and <see cref="Stop"/> dates of the intervals are equal as defined by the epsilon value and all other properties are identical.</returns>
		bool EqualsEpsilon(TimeInterval other, double epsilon)
		{
			if (ReferenceEquals(other, null))
				return false;

			if (IsEmpty && other.IsEmpty)
				return true;

			return m_start.EqualsEpsilon(other.m_start, epsilon) &&
				m_stop.EqualsEpsilon(other.m_stop, epsilon);
		}

		/// <summary>
		/// Indicates whether another instance of this type is exactly equal to this instance.
		/// </summary>
		/// <param name="other">The instance to compare to this instance.</param>
		/// <returns><see langword="true"/> if <paramref name="other"/> represents the same value as this instance; otherwise, <see langword="false"/>.</returns>
		bool Equals(TimeInterval other)
		{
			if (ReferenceEquals(null, other))
				return false;

			if (ReferenceEquals(this, other))
				return true;

			if (IsEmpty && other.IsEmpty)
				return true;

			return m_start.Equals(other.m_start) &&
				m_stop.Equals(other.m_stop);
		}

		/// <summary>
		/// Indicates whether another object is exactly equal to this instance.
		/// </summary>
		/// <param name="obj">The object to compare to this instance.</param>
		/// <returns><see langword="true"/> if <paramref name="obj"/> is an instance of this type and represents the same value as this instance; otherwise, <see langword="false"/>.</returns>
		override bool Equals(object obj)
		{
			return Equals(obj as TimeInterval);
		}

		/// <summary>
		/// Returns a string with interval in the format "[Start, Stop)".  Square brackets indicate
		/// that the end point of the interval is included in the intervals.  Parenthesis indicate that the
		/// end point is not included.
		/// </summary>
		/// <returns>The string.</returns>
		override string ToString()
		{
			return string.Format(CultureInfo.CurrentCulture, "[{0}, {1}]", m_start, m_stop);
		}

		/// <summary>
		/// Returns a hash code for this instance, which is suitable for use in hashing algorithms and data structures like a hash table.
		/// </summary>
		/// <returns>A hash code for the current object.</returns>
		override int GetHashCode()
		{
			return m_start.GetHashCode() ^
				m_stop.GetHashCode();
		}

		/// <summary>
		/// Returns <see langword="true"/> if the two instances are exactly equal.
		/// </summary>
		/// <param name="left">The instance to compare to <paramref name="right"/>.</param>
		/// <param name="right">The instance to compare to <paramref name="left"/>.</param>
		/// <returns>
		/// <see langword="true"/> if <paramref name="left"/> represents the same value as <paramref name="right"/>; otherwise, <see langword="false"/>.
		/// </returns>
		static bool operator ==(TimeInterval left, TimeInterval right)
		{
			if (ReferenceEquals(left, right))
				return true;

			if (ReferenceEquals(left, null))
				return false;

			return left.Equals(right);
		}

		/// <summary>
		/// Returns <see langword="true"/> if the two instances are not exactly equal.
		/// </summary>
		/// <param name="left">The instance to compare to <paramref name="right"/>.</param>
		/// <param name="right">The instance to compare to <paramref name="left"/>.</param>
		/// <returns>
		/// <see langword="true"/> if <paramref name="left"/> does not represent the same value as <paramref name="right"/>; otherwise, <see langword="false"/>.
		/// </returns>
		static bool operator !=(TimeInterval left, TimeInterval right)
		{
			return !(left == right);
		}

		/// <summary>
		/// Gets an empty interval.
		/// </summary>
		static TimeInterval Empty
		{
			get{ return s_empty; }
		}


	private:

		private static readonly TimeInterval s_empty = new TimeInterval(new JulianDate(0.0), new JulianDate(0.0));

		JulianDate m_start;
		JulianDate m_stop;
	}
}