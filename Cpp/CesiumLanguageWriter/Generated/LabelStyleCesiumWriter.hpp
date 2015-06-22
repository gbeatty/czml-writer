// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>LabelStyle</code> to a <see cref="CesiumOutputStream" />.  A <code>LabelStyle</code> the style of a label.
    /// </summary>
    class LabelStyleCesiumWriter : CesiumPropertyWriter<LabelStyleCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>labelStyle</code> property.
            /// </summary>
            const std::string LabelStylePropertyName = "labelStyle";

            /// <summary>
            /// The name of the <code>reference</code> property.
            /// </summary>
            const std::string ReferencePropertyName = "reference";

        private:
            const ICesiumValuePropertyWriter<CesiumLabelStyle> m_asLabelStyle;
            const ICesiumValuePropertyWriter<Reference> m_asReference;

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            LabelStyleCesiumWriter(string propertyName)
                : base(propertyName)
            {
                m_asLabelStyle = ICesiumValuePropertyWriter<CesiumLabelStyle>(CreateLabelStyleAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            LabelStyleCesiumWriter(const LabelStyleCesiumWriter& existingInstance)
                : base(existingInstance)
            {
                m_asLabelStyle = ICesiumValuePropertyWriter<CesiumLabelStyle>(CreateLabelStyleAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

        /// <summary>
        /// Writes the <code>labelStyle</code> property.  The <code>labelStyle</code> property specifies the label style.  Valid values are "FILL", "OUTLINE", and "FILL_AND_OUTLINE".
        /// </summary>
        /// <param name="value">The label style.</param>
        public void WriteLabelStyle(CesiumLabelStyle value)
        {
            const string PropertyName = LabelStylePropertyName;
            if (ForceInterval)
                OpenIntervalIfNecessary();
            if (IsInterval)
                Output.WritePropertyName(PropertyName);
            Output.WriteValue(CesiumFormattingHelper.LabelStyleToString(value));
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
        /// Returns a wrapper for this instance that implements <see cref="ICesiumValuePropertyWriter{T}" /> to write a value in <code>LabelStyle</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumValuePropertyWriter<CesiumLabelStyle> AsLabelStyle()
        {
            return m_asLabelStyle.Value;
        }

        private ICesiumValuePropertyWriter<CesiumLabelStyle> CreateLabelStyleAdaptor()
        {
            return new CesiumWriterAdaptor<LabelStyleCesiumWriter, CesiumLabelStyle>(
                this, (me, value) => me.WriteLabelStyle(value));
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
            return new CesiumWriterAdaptor<LabelStyleCesiumWriter, Reference>(
                this, (me, value) => me.WriteReference(value));
        }

    }
}
