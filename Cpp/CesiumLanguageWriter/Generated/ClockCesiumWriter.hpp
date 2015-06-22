// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>Clock</code> to a <see cref="CesiumOutputStream" />.  A <code>Clock</code> defines a simulated clock.
    /// </summary>
    class ClockCesiumWriter : CesiumPropertyWriter<ClockCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>currentTime</code> property.
            /// </summary>
            const std::string CurrentTimePropertyName = "currentTime";

            /// <summary>
            /// The name of the <code>multiplier</code> property.
            /// </summary>
            const std::string MultiplierPropertyName = "multiplier";

            /// <summary>
            /// The name of the <code>range</code> property.
            /// </summary>
            const std::string RangePropertyName = "range";

            /// <summary>
            /// The name of the <code>step</code> property.
            /// </summary>
            const std::string StepPropertyName = "step";

        private:

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            ClockCesiumWriter(string propertyName)
                : base(propertyName)
            {
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            ClockCesiumWriter(const ClockCesiumWriter& existingInstance)
                : base(existingInstance)
            {
            }

        /// <summary>
        /// Writes the <code>currentTime</code> property.  The <code>currentTime</code> property specifies the current time.
        /// </summary>
        /// <param name="value">The time.</param>
        public void WriteCurrentTime(JulianDate value)
        {
            const string PropertyName = CurrentTimePropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteDate(Output, value);
        }

        /// <summary>
        /// Writes the <code>multiplier</code> property.  The <code>multiplier</code> property specifies the multiplier, which in TICK_DEPENDENT mode is the number of seconds to advance each tick.  In SYSTEM_CLOCK_DEPENDENT mode, it is the multiplier applied to the amount of time elapsed between ticks.  This value is ignored in SYSTEM_CLOCK mode.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteMultiplier(double value)
        {
            const string PropertyName = MultiplierPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            Output.WriteValue(value);
        }

        /// <summary>
        /// Writes the <code>range</code> property.  The <code>range</code> property specifies the behavior of a clock when its current time reaches its start or end points.  Valid values are 'UNBOUNDED', 'CLAMPED', and 'LOOP_STOP'.
        /// </summary>
        /// <param name="value">The clock range.</param>
        public void WriteRange(ClockRange value)
        {
            const string PropertyName = RangePropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            Output.WriteValue(CesiumFormattingHelper.ClockRangeToString(value));
        }

        /// <summary>
        /// Writes the <code>step</code> property.  The <code>step</code> property specifies defines how a clock steps in time.  Valid values are 'SYSTEM_CLOCK', 'SYSTEM_CLOCK_MULTIPLIER', and 'TICK_DEPENDENT'.
        /// </summary>
        /// <param name="value">The clock step.</param>
        public void WriteStep(ClockStep value)
        {
            const string PropertyName = StepPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            Output.WriteValue(CesiumFormattingHelper.ClockStepToString(value));
        }

    }
}
