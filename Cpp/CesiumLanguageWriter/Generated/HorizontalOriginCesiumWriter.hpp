// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>HorizontalOrigin</code> to a <see cref="CesiumOutputStream" />.  A <code>HorizontalOrigin</code> defines the horizontal origin of an element, which can optionally vary over time.  It controls whether the element is left-, center-, or right-aligned with the `position`.
    /// </summary>
    class HorizontalOriginCesiumWriter : CesiumPropertyWriter<HorizontalOriginCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>horizontalOrigin</code> property.
            /// </summary>
            const std::string HorizontalOriginPropertyName = "horizontalOrigin";

            /// <summary>
            /// The name of the <code>reference</code> property.
            /// </summary>
            const std::string ReferencePropertyName = "reference";

        private:
            const ICesiumValuePropertyWriter<CesiumHorizontalOrigin> m_asHorizontalOrigin;
            const ICesiumValuePropertyWriter<Reference> m_asReference;

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            HorizontalOriginCesiumWriter(string propertyName)
                : base(propertyName)
            {
                m_asHorizontalOrigin = ICesiumValuePropertyWriter<CesiumHorizontalOrigin>(CreateHorizontalOriginAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            HorizontalOriginCesiumWriter(const HorizontalOriginCesiumWriter& existingInstance)
                : base(existingInstance)
            {
                m_asHorizontalOrigin = ICesiumValuePropertyWriter<CesiumHorizontalOrigin>(CreateHorizontalOriginAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

        /// <summary>
        /// Writes the <code>horizontalOrigin</code> property.  The <code>horizontalOrigin</code> property specifies the horizontal origin.  Valid values are "LEFT", "CENTER", and "RIGHT".
        /// </summary>
        /// <param name="value">The horizontal origin.</param>
        public void WriteHorizontalOrigin(CesiumHorizontalOrigin value)
        {
            const string PropertyName = HorizontalOriginPropertyName;
            if (ForceInterval)
                OpenIntervalIfNecessary();
            if (IsInterval)
                Output.WritePropertyName(PropertyName);
            Output.WriteValue(CesiumFormattingHelper.HorizontalOriginToString(value));
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
        /// Returns a wrapper for this instance that implements <see cref="ICesiumValuePropertyWriter{T}" /> to write a value in <code>HorizontalOrigin</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumValuePropertyWriter<CesiumHorizontalOrigin> AsHorizontalOrigin()
        {
            return m_asHorizontalOrigin.Value;
        }

        private ICesiumValuePropertyWriter<CesiumHorizontalOrigin> CreateHorizontalOriginAdaptor()
        {
            return new CesiumWriterAdaptor<HorizontalOriginCesiumWriter, CesiumHorizontalOrigin>(
                this, (me, value) => me.WriteHorizontalOrigin(value));
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
            return new CesiumWriterAdaptor<HorizontalOriginCesiumWriter, Reference>(
                this, (me, value) => me.WriteReference(value));
        }

    }
}
