// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>SensorVolumePortionToDisplay</code> to a <see cref="CesiumOutputStream" />.  A <code>SensorVolumePortionToDisplay</code> indicates what part of a sensor should be displayed.  Valid values are "COMPLETE", "BELOW_ELLIPSOID_HORIZON", "ABOVE_ELLIPSOID_HORIZON".
    /// </summary>
    class SensorVolumePortionToDisplayCesiumWriter : CesiumPropertyWriter<SensorVolumePortionToDisplayCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>portionToDisplay</code> property.
            /// </summary>
            const std::string PortionToDisplayPropertyName = "portionToDisplay";

            /// <summary>
            /// The name of the <code>reference</code> property.
            /// </summary>
            const std::string ReferencePropertyName = "reference";

        private:
            const ICesiumValuePropertyWriter<CesiumSensorVolumePortionToDisplay> m_asPortionToDisplay;
            const ICesiumValuePropertyWriter<Reference> m_asReference;

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            SensorVolumePortionToDisplayCesiumWriter(string propertyName)
                : base(propertyName)
            {
                m_asPortionToDisplay = ICesiumValuePropertyWriter<CesiumSensorVolumePortionToDisplay>(CreatePortionToDisplayAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            SensorVolumePortionToDisplayCesiumWriter(const SensorVolumePortionToDisplayCesiumWriter& existingInstance)
                : base(existingInstance)
            {
                m_asPortionToDisplay = ICesiumValuePropertyWriter<CesiumSensorVolumePortionToDisplay>(CreatePortionToDisplayAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

        /// <summary>
        /// Writes the <code>portionToDisplay</code> property.  The <code>portionToDisplay</code> property specifies indicates what part of a sensor should be displayed.  Valid values are "COMPLETE", "BELOW_ELLIPSOID_HORIZON", "ABOVE_ELLIPSOID_HORIZON".
        /// </summary>
        /// <param name="value">The portion of the sensor to display.</param>
        public void WritePortionToDisplay(CesiumSensorVolumePortionToDisplay value)
        {
            const string PropertyName = PortionToDisplayPropertyName;
            if (ForceInterval)
                OpenIntervalIfNecessary();
            if (IsInterval)
                Output.WritePropertyName(PropertyName);
            Output.WriteValue(CesiumFormattingHelper.SensorVolumePortionToDisplayToString(value));
        }

        /// <summary>
        /// Writes the <code>reference</code> property.  The <code>reference</code> property specifies a reference property.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteReference(Reference value)
        {
            const string PropertyName = ReferencePropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteReference(Output, value);
        }

        /// <summary>
        /// Writes the <code>reference</code> property.  The <code>reference</code> property specifies a reference property.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteReference(string value)
        {
            const string PropertyName = ReferencePropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteReference(Output, value);
        }

        /// <summary>
        /// Writes the <code>reference</code> property.  The <code>reference</code> property specifies a reference property.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteReference(string identifier, string propertyName)
        {
            const string PropertyName = ReferencePropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteReference(Output, identifier, propertyName);
        }

        /// <summary>
        /// Writes the <code>reference</code> property.  The <code>reference</code> property specifies a reference property.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteReference(string identifier, string[] propertyNames)
        {
            const string PropertyName = ReferencePropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteReference(Output, identifier, propertyNames);
        }

        /// <summary>
        /// Returns a wrapper for this instance that implements <see cref="ICesiumValuePropertyWriter{T}" /> to write a value in <code>PortionToDisplay</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumValuePropertyWriter<CesiumSensorVolumePortionToDisplay> AsPortionToDisplay()
        {
            return m_asPortionToDisplay.Value;
        }

        private ICesiumValuePropertyWriter<CesiumSensorVolumePortionToDisplay> CreatePortionToDisplayAdaptor()
        {
            return new CesiumWriterAdaptor<SensorVolumePortionToDisplayCesiumWriter, CesiumSensorVolumePortionToDisplay>(
                this, (me, value) => me.WritePortionToDisplay(value));
        }

        /// <summary>
        /// Returns a wrapper for this instance that implements <see cref="ICesiumValuePropertyWriter{T}" /> to write a value in <code>Reference</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumValuePropertyWriter<Reference> AsReference()
        {
            return m_asReference.Value;
        }

        private ICesiumValuePropertyWriter<Reference> CreateReferenceAdaptor()
        {
            return new CesiumWriterAdaptor<SensorVolumePortionToDisplayCesiumWriter, Reference>(
                this, (me, value) => me.WriteReference(value));
        }

    }
}
