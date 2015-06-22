#pragma once

namespace CesiumLanguageWriter
{
	/// <summary>
	/// Defines the representation of the ISO8601 date string generated by <see cref="GregorianDate.ToIso8601String(Iso8601Format)"/>.
	/// </summary>
	enum class Iso8601Format
	{
		/// <summary>
		/// A complete ISO8601 date and time in the extended format, which omits the dash and colon seperators used between time and date components.
		/// </summary>
		Basic,

		/// <summary>
		/// A complete ISO8601 date and time in the extended format, which uses dash and colon seperators between time and date components.
		/// </summary>
		Extended,

		/// <summary>
		/// The shortest possible way to accurately represent an ISO8601 date and time.
		/// </summary>
		Compact
	};
}