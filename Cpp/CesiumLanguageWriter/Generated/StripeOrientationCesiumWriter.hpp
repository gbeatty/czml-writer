// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>StripeOrientation</code> to a <see cref="CesiumOutputStream" />.  A <code>StripeOrientation</code> defines the orientation of stripes in the stripe material.
    /// </summary>
    class StripeOrientationCesiumWriter : CesiumPropertyWriter<StripeOrientationCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>StripeOrientation</code> property.
            /// </summary>
            const std::string StripeOrientationPropertyName = "StripeOrientation";

            /// <summary>
            /// The name of the <code>reference</code> property.
            /// </summary>
            const std::string ReferencePropertyName = "reference";

        private:
            const ICesiumValuePropertyWriter<CesiumStripeOrientation> m_asStripeOrientation;
            const ICesiumValuePropertyWriter<Reference> m_asReference;

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            StripeOrientationCesiumWriter(string propertyName)
                : base(propertyName)
            {
                m_asStripeOrientation = ICesiumValuePropertyWriter<CesiumStripeOrientation>(CreateStripeOrientationAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            StripeOrientationCesiumWriter(const StripeOrientationCesiumWriter& existingInstance)
                : base(existingInstance)
            {
                m_asStripeOrientation = ICesiumValuePropertyWriter<CesiumStripeOrientation>(CreateStripeOrientationAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

        /// <summary>
        /// Writes the <code>StripeOrientation</code> property.  The <code>StripeOrientation</code> property specifies the orientation of stripes in the stripe material. Valid values are "HORIZONTAL" or "VERTICAL".
        /// </summary>
        /// <param name="value">The orientation.</param>
        public void WriteStripeOrientation(CesiumStripeOrientation value)
        {
            const string PropertyName = StripeOrientationPropertyName;
            if (ForceInterval)
                OpenIntervalIfNecessary();
            if (IsInterval)
                Output.WritePropertyName(PropertyName);
            Output.WriteValue(CesiumFormattingHelper.StripeOrientationToString(value));
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
        /// Returns a wrapper for this instance that implements <see cref="ICesiumValuePropertyWriter{T}" /> to write a value in <code>StripeOrientation</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumValuePropertyWriter<CesiumStripeOrientation> AsStripeOrientation()
        {
            return m_asStripeOrientation.Value;
        }

        private ICesiumValuePropertyWriter<CesiumStripeOrientation> CreateStripeOrientationAdaptor()
        {
            return new CesiumWriterAdaptor<StripeOrientationCesiumWriter, CesiumStripeOrientation>(
                this, (me, value) => me.WriteStripeOrientation(value));
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
            return new CesiumWriterAdaptor<StripeOrientationCesiumWriter, Reference>(
                this, (me, value) => me.WriteReference(value));
        }

    }
}
