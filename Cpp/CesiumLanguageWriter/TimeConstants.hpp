#pragma once

namespace CesiumLanguageWriter
{
	/// <summary>
	/// Contains time-related constants.
	/// </summary>
	class TimeConstants
	{
	public:

		/// <summary>
		/// The number of seconds in a minute.
		/// </summary>
		static const double SecondsPerMinute;

		/// <summary>
		/// The number of minutes in an hour.
		/// </summary>
		static const double MinutesPerHour;

		/// <summary>
		/// The number of hours in a day.
		/// </summary>
		static const double HoursPerDay;

		/// <summary>
		/// The number of seconds in an hour.
		/// </summary>
		static const double SecondsPerHour;

		/// <summary>
		/// The number of minutes in a day.
		/// </summary>
		static const double MinutesPerDay;

		/// <summary>
		/// The number of seconds in a standard day that does not have leap seconds.
		/// </summary>
		static const double SecondsPerDay;

		/// <summary>
		/// The number of standard days in a Julian century.
		/// </summary>
		static const double DaysPerJulianCentury;

		/// <summary>
		/// One picosecond
		/// </summary>
		static const double PicoSecond;

		/// <summary>
		/// The difference between a Julian date and a modified Julian date.
		/// </summary>
		static const double ModifiedJulianDateDifference;

		/// <summary>
		/// The next representable 64-bit double before 86400.0.  This is useful for normalizing
		/// times that must be less than a day (for example, the <see cref="JulianDate.SecondsOfDay"/> property
		/// of <see cref="JulianDate"/>).
		/// </summary>
		static const double NextBefore86400;
	};
}


