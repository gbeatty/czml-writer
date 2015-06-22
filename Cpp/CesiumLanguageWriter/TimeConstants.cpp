#include "TimeConstants.hpp"

namespace CesiumLanguageWriter
{
	const double TimeConstants::MinutesPerHour = 60.0;
	const double TimeConstants::HoursPerDay = 24.0;
	const double TimeConstants::SecondsPerHour = TimeConstants::SecondsPerMinute * TimeConstants::MinutesPerHour;
	const double TimeConstants::MinutesPerDay = TimeConstants::HoursPerDay * TimeConstants::MinutesPerHour;
	const double TimeConstants::SecondsPerDay = TimeConstants::HoursPerDay * TimeConstants::MinutesPerHour * TimeConstants::SecondsPerMinute;
	const double TimeConstants::DaysPerJulianCentury = 36525.0;
	const double TimeConstants::PicoSecond = .000000001;
	const double TimeConstants::ModifiedJulianDateDifference = 2400000.5;
	const double TimeConstants::NextBefore86400 = 86399.999999999985;
}