// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"
#include "System"
#include "System.Drawing"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>Uri</code> to a <see cref="CesiumOutputStream" />.  A <code>Uri</code> a URI value.  The URI can optionally vary with time.
    /// </summary>
    class UriCesiumWriter : CesiumPropertyWriter<UriCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>uri</code> property.
            /// </summary>
            const std::string UriPropertyName = "uri";

            /// <summary>
            /// The name of the <code>reference</code> property.
            /// </summary>
            const std::string ReferencePropertyName = "reference";

        private:
            const ICesiumValuePropertyWriter<CesiumResource> m_asUri;
            const ICesiumValuePropertyWriter<Reference> m_asReference;

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            UriCesiumWriter(string propertyName)
                : base(propertyName)
            {
                m_asUri = ICesiumValuePropertyWriter<CesiumResource>(CreateUriAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            UriCesiumWriter(const UriCesiumWriter& existingInstance)
                : base(existingInstance)
            {
                m_asUri = ICesiumValuePropertyWriter<CesiumResource>(CreateUriAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

        /// <summary>
        /// Writes the <code>uri</code> property.  The <code>uri</code> property specifies the URI value.
        /// </summary>
        /// <param name="resource">A resource object describing external data.</param>
        public void WriteUri(CesiumResource resource)
        {
            WriteUri(resource.Uri, resource.Behavior);
        }

        /// <summary>
        /// Writes the <code>uri</code> property.  The <code>uri</code> property specifies the URI value.
        /// </summary>
        /// <param name="uri">The URI of the data.</param>
        /// <param name="resourceBehavior">An enumeration describing how to include the URI in the document. For even more control, use the overload that takes a ICesiumUriResolver.</param>
        public void WriteUri(Uri uri, CesiumResourceBehavior resourceBehavior)
        {
            const string PropertyName = UriPropertyName;
            if (ForceInterval)
                OpenIntervalIfNecessary();
            if (IsInterval)
                Output.WritePropertyName(PropertyName);
            Output.WriteValue(CesiumFormattingHelper.GetResourceUri(uri, resourceBehavior));
        }

        /// <summary>
        /// Writes the <code>uri</code> property.  The <code>uri</code> property specifies the URI value.
        /// </summary>
        /// <param name="uri">The URI of the data.  The provided ICesiumUriResolver will be used to build the final URI embedded in the document.</param>
        /// <param name="resolver">An ICesiumUriResolver used to build the final URI that will be embedded in the document.</param>
        public void WriteUri(Uri uri, ICesiumUriResolver resolver)
        {
            const string PropertyName = UriPropertyName;
            if (ForceInterval)
                OpenIntervalIfNecessary();
            if (IsInterval)
                Output.WritePropertyName(PropertyName);
            Output.WriteValue(resolver.ResolveUri(uri));
        }

        /// <summary>
        /// Writes the <code>uri</code> property.  The <code>uri</code> property specifies the URI value.
        /// </summary>
        /// <param name="image">The image.  A data URI will be created for this image, using PNG encoding.</param>
        public void WriteUri(Image image)
        {
            WriteUri(image, CesiumImageFormat.Png);
        }

        /// <summary>
        /// Writes the <code>uri</code> property.  The <code>uri</code> property specifies the URI value.
        /// </summary>
        /// <param name="image">The image.  A data URI will be created for this image.</param>
        /// <param name="imageFormat">The image format to use to encode the image in the data URI.</param>
        public void WriteUri(Image image, CesiumImageFormat imageFormat)
        {
            const string PropertyName = UriPropertyName;
            if (ForceInterval)
                OpenIntervalIfNecessary();
            if (IsInterval)
                Output.WritePropertyName(PropertyName);
            Output.WriteValue(CesiumFormattingHelper.ImageToDataUri(image, imageFormat));
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
        /// Returns a wrapper for this instance that implements <see cref="ICesiumValuePropertyWriter{T}" /> to write a value in <code>Uri</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumValuePropertyWriter<CesiumResource> AsUri()
        {
            return m_asUri.Value;
        }

        private ICesiumValuePropertyWriter<CesiumResource> CreateUriAdaptor()
        {
            return new CesiumWriterAdaptor<UriCesiumWriter, CesiumResource>(
                this, (me, value) => me.WriteUri(value));
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
            return new CesiumWriterAdaptor<UriCesiumWriter, Reference>(
                this, (me, value) => me.WriteReference(value));
        }

    }
}
