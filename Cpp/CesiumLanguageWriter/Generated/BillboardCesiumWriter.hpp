// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"
#include "System.Drawing"
#include "vector"
#include "System"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>Billboard</code> to a <see cref="CesiumOutputStream" />.  A <code>Billboard</code> specifies a billboard, or viewport-aligned image. The billboard is positioned in the scene by the `position` property. A billboard is sometimes called a marker.
    /// </summary>
    class BillboardCesiumWriter : CesiumPropertyWriter<BillboardCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>color</code> property.
            /// </summary>
            const std::string ColorPropertyName = "color";

            /// <summary>
            /// The name of the <code>eyeOffset</code> property.
            /// </summary>
            const std::string EyeOffsetPropertyName = "eyeOffset";

            /// <summary>
            /// The name of the <code>horizontalOrigin</code> property.
            /// </summary>
            const std::string HorizontalOriginPropertyName = "horizontalOrigin";

            /// <summary>
            /// The name of the <code>image</code> property.
            /// </summary>
            const std::string ImagePropertyName = "image";

            /// <summary>
            /// The name of the <code>pixelOffset</code> property.
            /// </summary>
            const std::string PixelOffsetPropertyName = "pixelOffset";

            /// <summary>
            /// The name of the <code>scale</code> property.
            /// </summary>
            const std::string ScalePropertyName = "scale";

            /// <summary>
            /// The name of the <code>rotation</code> property.
            /// </summary>
            const std::string RotationPropertyName = "rotation";

            /// <summary>
            /// The name of the <code>alignedAxis</code> property.
            /// </summary>
            const std::string AlignedAxisPropertyName = "alignedAxis";

            /// <summary>
            /// The name of the <code>show</code> property.
            /// </summary>
            const std::string ShowPropertyName = "show";

            /// <summary>
            /// The name of the <code>verticalOrigin</code> property.
            /// </summary>
            const std::string VerticalOriginPropertyName = "verticalOrigin";

        private:
            const ColorCesiumWriter m_color = ColorCesiumWriter(ColorPropertyName);
            const EyeOffsetCesiumWriter m_eyeOffset = EyeOffsetCesiumWriter(EyeOffsetPropertyName);
            const HorizontalOriginCesiumWriter m_horizontalOrigin = HorizontalOriginCesiumWriter(HorizontalOriginPropertyName);
            const UriCesiumWriter m_image = UriCesiumWriter(ImagePropertyName);
            const PixelOffsetCesiumWriter m_pixelOffset = PixelOffsetCesiumWriter(PixelOffsetPropertyName);
            const DoubleCesiumWriter m_scale = DoubleCesiumWriter(ScalePropertyName);
            const DoubleCesiumWriter m_rotation = DoubleCesiumWriter(RotationPropertyName);
            const AlignedAxisCesiumWriter m_alignedAxis = AlignedAxisCesiumWriter(AlignedAxisPropertyName);
            const BooleanCesiumWriter m_show = BooleanCesiumWriter(ShowPropertyName);
            const VerticalOriginCesiumWriter m_verticalOrigin = VerticalOriginCesiumWriter(VerticalOriginPropertyName);

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            BillboardCesiumWriter(string propertyName)
                : base(propertyName)
            {
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            BillboardCesiumWriter(const BillboardCesiumWriter& existingInstance)
                : base(existingInstance)
            {
            }

        /// <summary>
        /// Gets the writer for the <code>color</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>color</code> property defines the color of the billboard.  This color value is multiplied with the values of the billboard's "image" to produce the final color.
        /// </summary>
        public ColorCesiumWriter ColorWriter
        {
            get { return m_color.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>color</code> property.  The <code>color</code> property defines the color of the billboard.  This color value is multiplied with the values of the billboard's "image" to produce the final color.
        /// </summary>
        public ColorCesiumWriter OpenColorProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ColorWriter);
        }

        /// <summary>
        /// Writes a value for the <code>color</code> property as a <code>rgba</code> value.  The <code>color</code> property specifies the color of the billboard.  This color value is multiplied with the values of the billboard's "image" to produce the final color.
        /// </summary>
        /// <param name="color">The color.</param>
        public void WriteColorProperty(Color color)
        {
            using (var writer = OpenColorProperty())
            {
                writer.WriteRgba(color);
            }
        }

        /// <summary>
        /// Writes a value for the <code>color</code> property as a <code>rgba</code> value.  The <code>color</code> property specifies the color of the billboard.  This color value is multiplied with the values of the billboard's "image" to produce the final color.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 255.</param>
        /// <param name="green">The green component in the range 0 to 255.</param>
        /// <param name="blue">The blue component in the range 0 to 255.</param>
        /// <param name="alpha">The alpha component in the range 0 to 255.</param>
        public void WriteColorProperty(int red, int green, int blue, int alpha)
        {
            using (var writer = OpenColorProperty())
            {
                writer.WriteRgba(red, green, blue, alpha);
            }
        }

        /// <summary>
        /// Writes a value for the <code>color</code> property as a <code>rgba</code> value.  The <code>color</code> property specifies the color of the billboard.  This color value is multiplied with the values of the billboard's "image" to produce the final color.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="colors">The color corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `colors` collection.</param>
        /// <param name="length">The number of elements to use from the `colors` collection.</param>
        public void WriteColorProperty(IList<JulianDate> dates, IList<Color> colors, int startIndex, int length)
        {
            using (var writer = OpenColorProperty())
            {
                writer.WriteRgba(dates, colors, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>color</code> property as a <code>rgbaf</code> value.  The <code>color</code> property specifies the color of the billboard.  This color value is multiplied with the values of the billboard's "image" to produce the final color.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 1.0.</param>
        /// <param name="green">The green component in the range 0 to 1.0.</param>
        /// <param name="blue">The blue component in the range 0 to 1.0.</param>
        /// <param name="alpha">The alpha component in the range 0 to 1.0.</param>
        public void WriteColorPropertyRgbaf(float red, float green, float blue, float alpha)
        {
            using (var writer = OpenColorProperty())
            {
                writer.WriteRgbaf(red, green, blue, alpha);
            }
        }

        /// <summary>
        /// Writes a value for the <code>color</code> property as a <code>reference</code> value.  The <code>color</code> property specifies the color of the billboard.  This color value is multiplied with the values of the billboard's "image" to produce the final color.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteColorPropertyReference(Reference value)
        {
            using (var writer = OpenColorProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>color</code> property as a <code>reference</code> value.  The <code>color</code> property specifies the color of the billboard.  This color value is multiplied with the values of the billboard's "image" to produce the final color.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteColorPropertyReference(string value)
        {
            using (var writer = OpenColorProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>color</code> property as a <code>reference</code> value.  The <code>color</code> property specifies the color of the billboard.  This color value is multiplied with the values of the billboard's "image" to produce the final color.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteColorPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenColorProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>color</code> property as a <code>reference</code> value.  The <code>color</code> property specifies the color of the billboard.  This color value is multiplied with the values of the billboard's "image" to produce the final color.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteColorPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenColorProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>eyeOffset</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>eyeOffset</code> property defines the eye offset of the billboard, which is the offset in eye coordinates at which to place the billboard relative to the `position` property.  Eye coordinates are a left-handed coordinate system where the X-axis points toward the viewer's right, the Y-axis points up, and the Z-axis points into the screen.
        /// </summary>
        public EyeOffsetCesiumWriter EyeOffsetWriter
        {
            get { return m_eyeOffset.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>eyeOffset</code> property.  The <code>eyeOffset</code> property defines the eye offset of the billboard, which is the offset in eye coordinates at which to place the billboard relative to the `position` property.  Eye coordinates are a left-handed coordinate system where the X-axis points toward the viewer's right, the Y-axis points up, and the Z-axis points into the screen.
        /// </summary>
        public EyeOffsetCesiumWriter OpenEyeOffsetProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(EyeOffsetWriter);
        }

        /// <summary>
        /// Writes a value for the <code>eyeOffset</code> property as a <code>cartesian</code> value.  The <code>eyeOffset</code> property specifies the eye offset of the billboard, which is the offset in eye coordinates at which to place the billboard relative to the `position` property.  Eye coordinates are a left-handed coordinate system where the X-axis points toward the viewer's right, the Y-axis points up, and the Z-axis points into the screen.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteEyeOffsetProperty(Cartesian value)
        {
            using (var writer = OpenEyeOffsetProperty())
            {
                writer.WriteCartesian(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>eyeOffset</code> property as a <code>cartesian</code> value.  The <code>eyeOffset</code> property specifies the eye offset of the billboard, which is the offset in eye coordinates at which to place the billboard relative to the `position` property.  Eye coordinates are a left-handed coordinate system where the X-axis points toward the viewer's right, the Y-axis points up, and the Z-axis points into the screen.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        public void WriteEyeOffsetProperty(IList<JulianDate> dates, IList<Cartesian> values)
        {
            using (var writer = OpenEyeOffsetProperty())
            {
                writer.WriteCartesian(dates, values);
            }
        }

        /// <summary>
        /// Writes a value for the <code>eyeOffset</code> property as a <code>cartesian</code> value.  The <code>eyeOffset</code> property specifies the eye offset of the billboard, which is the offset in eye coordinates at which to place the billboard relative to the `position` property.  Eye coordinates are a left-handed coordinate system where the X-axis points toward the viewer's right, the Y-axis points up, and the Z-axis points into the screen.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteEyeOffsetProperty(IList<JulianDate> dates, IList<Cartesian> values, int startIndex, int length)
        {
            using (var writer = OpenEyeOffsetProperty())
            {
                writer.WriteCartesian(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>eyeOffset</code> property as a <code>reference</code> value.  The <code>eyeOffset</code> property specifies the eye offset of the billboard, which is the offset in eye coordinates at which to place the billboard relative to the `position` property.  Eye coordinates are a left-handed coordinate system where the X-axis points toward the viewer's right, the Y-axis points up, and the Z-axis points into the screen.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteEyeOffsetPropertyReference(Reference value)
        {
            using (var writer = OpenEyeOffsetProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>eyeOffset</code> property as a <code>reference</code> value.  The <code>eyeOffset</code> property specifies the eye offset of the billboard, which is the offset in eye coordinates at which to place the billboard relative to the `position` property.  Eye coordinates are a left-handed coordinate system where the X-axis points toward the viewer's right, the Y-axis points up, and the Z-axis points into the screen.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteEyeOffsetPropertyReference(string value)
        {
            using (var writer = OpenEyeOffsetProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>eyeOffset</code> property as a <code>reference</code> value.  The <code>eyeOffset</code> property specifies the eye offset of the billboard, which is the offset in eye coordinates at which to place the billboard relative to the `position` property.  Eye coordinates are a left-handed coordinate system where the X-axis points toward the viewer's right, the Y-axis points up, and the Z-axis points into the screen.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteEyeOffsetPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenEyeOffsetProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>eyeOffset</code> property as a <code>reference</code> value.  The <code>eyeOffset</code> property specifies the eye offset of the billboard, which is the offset in eye coordinates at which to place the billboard relative to the `position` property.  Eye coordinates are a left-handed coordinate system where the X-axis points toward the viewer's right, the Y-axis points up, and the Z-axis points into the screen.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteEyeOffsetPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenEyeOffsetProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>horizontalOrigin</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>horizontalOrigin</code> property defines the horizontal origin of the billboard.  It controls whether the billboard image is left-, center-, or right-aligned with the `position`.
        /// </summary>
        public HorizontalOriginCesiumWriter HorizontalOriginWriter
        {
            get { return m_horizontalOrigin.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>horizontalOrigin</code> property.  The <code>horizontalOrigin</code> property defines the horizontal origin of the billboard.  It controls whether the billboard image is left-, center-, or right-aligned with the `position`.
        /// </summary>
        public HorizontalOriginCesiumWriter OpenHorizontalOriginProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(HorizontalOriginWriter);
        }

        /// <summary>
        /// Writes a value for the <code>horizontalOrigin</code> property as a <code>horizontalOrigin</code> value.  The <code>horizontalOrigin</code> property specifies the horizontal origin of the billboard.  It controls whether the billboard image is left-, center-, or right-aligned with the `position`.
        /// </summary>
        /// <param name="value">The horizontal origin.</param>
        public void WriteHorizontalOriginProperty(CesiumHorizontalOrigin value)
        {
            using (var writer = OpenHorizontalOriginProperty())
            {
                writer.WriteHorizontalOrigin(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>horizontalOrigin</code> property as a <code>reference</code> value.  The <code>horizontalOrigin</code> property specifies the horizontal origin of the billboard.  It controls whether the billboard image is left-, center-, or right-aligned with the `position`.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteHorizontalOriginPropertyReference(Reference value)
        {
            using (var writer = OpenHorizontalOriginProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>horizontalOrigin</code> property as a <code>reference</code> value.  The <code>horizontalOrigin</code> property specifies the horizontal origin of the billboard.  It controls whether the billboard image is left-, center-, or right-aligned with the `position`.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteHorizontalOriginPropertyReference(string value)
        {
            using (var writer = OpenHorizontalOriginProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>horizontalOrigin</code> property as a <code>reference</code> value.  The <code>horizontalOrigin</code> property specifies the horizontal origin of the billboard.  It controls whether the billboard image is left-, center-, or right-aligned with the `position`.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteHorizontalOriginPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenHorizontalOriginProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>horizontalOrigin</code> property as a <code>reference</code> value.  The <code>horizontalOrigin</code> property specifies the horizontal origin of the billboard.  It controls whether the billboard image is left-, center-, or right-aligned with the `position`.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteHorizontalOriginPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenHorizontalOriginProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>image</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>image</code> property defines the image displayed on the billboard, expressed as a URI.  For broadest client compatibility, the URI should be accessible via Cross-Origin Resource Sharing (CORS).  The URI may also be a <a href="https://developer.mozilla.org/en/data_URIs">data URI</a>.
        /// </summary>
        public UriCesiumWriter ImageWriter
        {
            get { return m_image.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>image</code> property.  The <code>image</code> property defines the image displayed on the billboard, expressed as a URI.  For broadest client compatibility, the URI should be accessible via Cross-Origin Resource Sharing (CORS).  The URI may also be a <a href="https://developer.mozilla.org/en/data_URIs">data URI</a>.
        /// </summary>
        public UriCesiumWriter OpenImageProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ImageWriter);
        }

        /// <summary>
        /// Writes a value for the <code>image</code> property as a <code>uri</code> value.  The <code>image</code> property specifies the image displayed on the billboard, expressed as a URI.  For broadest client compatibility, the URI should be accessible via Cross-Origin Resource Sharing (CORS).  The URI may also be a <a href="https://developer.mozilla.org/en/data_URIs">data URI</a>.
        /// </summary>
        /// <param name="resource">A resource object describing external data.</param>
        public void WriteImageProperty(CesiumResource resource)
        {
            using (var writer = OpenImageProperty())
            {
                writer.WriteUri(resource);
            }
        }

        /// <summary>
        /// Writes a value for the <code>image</code> property as a <code>uri</code> value.  The <code>image</code> property specifies the image displayed on the billboard, expressed as a URI.  For broadest client compatibility, the URI should be accessible via Cross-Origin Resource Sharing (CORS).  The URI may also be a <a href="https://developer.mozilla.org/en/data_URIs">data URI</a>.
        /// </summary>
        /// <param name="uri">The URI of the data.</param>
        /// <param name="resourceBehavior">An enumeration describing how to include the URI in the document. For even more control, use the overload that takes a ICesiumUriResolver.</param>
        public void WriteImageProperty(Uri uri, CesiumResourceBehavior resourceBehavior)
        {
            using (var writer = OpenImageProperty())
            {
                writer.WriteUri(uri, resourceBehavior);
            }
        }

        /// <summary>
        /// Writes a value for the <code>image</code> property as a <code>uri</code> value.  The <code>image</code> property specifies the image displayed on the billboard, expressed as a URI.  For broadest client compatibility, the URI should be accessible via Cross-Origin Resource Sharing (CORS).  The URI may also be a <a href="https://developer.mozilla.org/en/data_URIs">data URI</a>.
        /// </summary>
        /// <param name="uri">The URI of the data.  The provided ICesiumUriResolver will be used to build the final URI embedded in the document.</param>
        /// <param name="resolver">An ICesiumUriResolver used to build the final URI that will be embedded in the document.</param>
        public void WriteImageProperty(Uri uri, ICesiumUriResolver resolver)
        {
            using (var writer = OpenImageProperty())
            {
                writer.WriteUri(uri, resolver);
            }
        }

        /// <summary>
        /// Writes a value for the <code>image</code> property as a <code>uri</code> value.  The <code>image</code> property specifies the image displayed on the billboard, expressed as a URI.  For broadest client compatibility, the URI should be accessible via Cross-Origin Resource Sharing (CORS).  The URI may also be a <a href="https://developer.mozilla.org/en/data_URIs">data URI</a>.
        /// </summary>
        /// <param name="image">The image.  A data URI will be created for this image, using PNG encoding.</param>
        public void WriteImageProperty(Image image)
        {
            using (var writer = OpenImageProperty())
            {
                writer.WriteUri(image);
            }
        }

        /// <summary>
        /// Writes a value for the <code>image</code> property as a <code>uri</code> value.  The <code>image</code> property specifies the image displayed on the billboard, expressed as a URI.  For broadest client compatibility, the URI should be accessible via Cross-Origin Resource Sharing (CORS).  The URI may also be a <a href="https://developer.mozilla.org/en/data_URIs">data URI</a>.
        /// </summary>
        /// <param name="image">The image.  A data URI will be created for this image.</param>
        /// <param name="imageFormat">The image format to use to encode the image in the data URI.</param>
        public void WriteImageProperty(Image image, CesiumImageFormat imageFormat)
        {
            using (var writer = OpenImageProperty())
            {
                writer.WriteUri(image, imageFormat);
            }
        }

        /// <summary>
        /// Writes a value for the <code>image</code> property as a <code>reference</code> value.  The <code>image</code> property specifies the image displayed on the billboard, expressed as a URI.  For broadest client compatibility, the URI should be accessible via Cross-Origin Resource Sharing (CORS).  The URI may also be a <a href="https://developer.mozilla.org/en/data_URIs">data URI</a>.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteImagePropertyReference(Reference value)
        {
            using (var writer = OpenImageProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>image</code> property as a <code>reference</code> value.  The <code>image</code> property specifies the image displayed on the billboard, expressed as a URI.  For broadest client compatibility, the URI should be accessible via Cross-Origin Resource Sharing (CORS).  The URI may also be a <a href="https://developer.mozilla.org/en/data_URIs">data URI</a>.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteImagePropertyReference(string value)
        {
            using (var writer = OpenImageProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>image</code> property as a <code>reference</code> value.  The <code>image</code> property specifies the image displayed on the billboard, expressed as a URI.  For broadest client compatibility, the URI should be accessible via Cross-Origin Resource Sharing (CORS).  The URI may also be a <a href="https://developer.mozilla.org/en/data_URIs">data URI</a>.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteImagePropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenImageProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>image</code> property as a <code>reference</code> value.  The <code>image</code> property specifies the image displayed on the billboard, expressed as a URI.  For broadest client compatibility, the URI should be accessible via Cross-Origin Resource Sharing (CORS).  The URI may also be a <a href="https://developer.mozilla.org/en/data_URIs">data URI</a>.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteImagePropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenImageProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>pixelOffset</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>pixelOffset</code> property defines the offset, in viewport pixels, of the billboard origin from the `position`.  A pixel offset is the number of pixels up and to the right to place the billboard, relative to the `position`.
        /// </summary>
        public PixelOffsetCesiumWriter PixelOffsetWriter
        {
            get { return m_pixelOffset.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>pixelOffset</code> property.  The <code>pixelOffset</code> property defines the offset, in viewport pixels, of the billboard origin from the `position`.  A pixel offset is the number of pixels up and to the right to place the billboard, relative to the `position`.
        /// </summary>
        public PixelOffsetCesiumWriter OpenPixelOffsetProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(PixelOffsetWriter);
        }

        /// <summary>
        /// Writes a value for the <code>pixelOffset</code> property as a <code>cartesian2</code> value.  The <code>pixelOffset</code> property specifies the offset, in viewport pixels, of the billboard origin from the `position`.  A pixel offset is the number of pixels up and to the right to place the billboard, relative to the `position`.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WritePixelOffsetProperty(Rectangular value)
        {
            using (var writer = OpenPixelOffsetProperty())
            {
                writer.WriteCartesian2(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>pixelOffset</code> property as a <code>cartesian2</code> value.  The <code>pixelOffset</code> property specifies the offset, in viewport pixels, of the billboard origin from the `position`.  A pixel offset is the number of pixels up and to the right to place the billboard, relative to the `position`.
        /// </summary>
        /// <param name="x">The X component.</param>
        /// <param name="y">The Y component.</param>
        public void WritePixelOffsetProperty(double x, double y)
        {
            using (var writer = OpenPixelOffsetProperty())
            {
                writer.WriteCartesian2(x, y);
            }
        }

        /// <summary>
        /// Writes a value for the <code>pixelOffset</code> property as a <code>cartesian2</code> value.  The <code>pixelOffset</code> property specifies the offset, in viewport pixels, of the billboard origin from the `position`.  A pixel offset is the number of pixels up and to the right to place the billboard, relative to the `position`.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        public void WritePixelOffsetProperty(IList<JulianDate> dates, IList<Rectangular> values)
        {
            using (var writer = OpenPixelOffsetProperty())
            {
                writer.WriteCartesian2(dates, values);
            }
        }

        /// <summary>
        /// Writes a value for the <code>pixelOffset</code> property as a <code>cartesian2</code> value.  The <code>pixelOffset</code> property specifies the offset, in viewport pixels, of the billboard origin from the `position`.  A pixel offset is the number of pixels up and to the right to place the billboard, relative to the `position`.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WritePixelOffsetProperty(IList<JulianDate> dates, IList<Rectangular> values, int startIndex, int length)
        {
            using (var writer = OpenPixelOffsetProperty())
            {
                writer.WriteCartesian2(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>pixelOffset</code> property as a <code>reference</code> value.  The <code>pixelOffset</code> property specifies the offset, in viewport pixels, of the billboard origin from the `position`.  A pixel offset is the number of pixels up and to the right to place the billboard, relative to the `position`.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WritePixelOffsetPropertyReference(Reference value)
        {
            using (var writer = OpenPixelOffsetProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>pixelOffset</code> property as a <code>reference</code> value.  The <code>pixelOffset</code> property specifies the offset, in viewport pixels, of the billboard origin from the `position`.  A pixel offset is the number of pixels up and to the right to place the billboard, relative to the `position`.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WritePixelOffsetPropertyReference(string value)
        {
            using (var writer = OpenPixelOffsetProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>pixelOffset</code> property as a <code>reference</code> value.  The <code>pixelOffset</code> property specifies the offset, in viewport pixels, of the billboard origin from the `position`.  A pixel offset is the number of pixels up and to the right to place the billboard, relative to the `position`.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WritePixelOffsetPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenPixelOffsetProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>pixelOffset</code> property as a <code>reference</code> value.  The <code>pixelOffset</code> property specifies the offset, in viewport pixels, of the billboard origin from the `position`.  A pixel offset is the number of pixels up and to the right to place the billboard, relative to the `position`.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WritePixelOffsetPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenPixelOffsetProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>scale</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>scale</code> property defines the scale of the billboard.  The scale is multiplied with the pixel size of the billboard's `image`.  For example, if the scale is 2.0, the billboard will be rendered with twice the number of pixels, in each direction, of the `image`.
        /// </summary>
        public DoubleCesiumWriter ScaleWriter
        {
            get { return m_scale.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>scale</code> property.  The <code>scale</code> property defines the scale of the billboard.  The scale is multiplied with the pixel size of the billboard's `image`.  For example, if the scale is 2.0, the billboard will be rendered with twice the number of pixels, in each direction, of the `image`.
        /// </summary>
        public DoubleCesiumWriter OpenScaleProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ScaleWriter);
        }

        /// <summary>
        /// Writes a value for the <code>scale</code> property as a <code>number</code> value.  The <code>scale</code> property specifies the scale of the billboard.  The scale is multiplied with the pixel size of the billboard's `image`.  For example, if the scale is 2.0, the billboard will be rendered with twice the number of pixels, in each direction, of the `image`.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteScaleProperty(double value)
        {
            using (var writer = OpenScaleProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>scale</code> property as a <code>number</code> value.  The <code>scale</code> property specifies the scale of the billboard.  The scale is multiplied with the pixel size of the billboard's `image`.  For example, if the scale is 2.0, the billboard will be rendered with twice the number of pixels, in each direction, of the `image`.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteScaleProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenScaleProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>scale</code> property as a <code>reference</code> value.  The <code>scale</code> property specifies the scale of the billboard.  The scale is multiplied with the pixel size of the billboard's `image`.  For example, if the scale is 2.0, the billboard will be rendered with twice the number of pixels, in each direction, of the `image`.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteScalePropertyReference(Reference value)
        {
            using (var writer = OpenScaleProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>scale</code> property as a <code>reference</code> value.  The <code>scale</code> property specifies the scale of the billboard.  The scale is multiplied with the pixel size of the billboard's `image`.  For example, if the scale is 2.0, the billboard will be rendered with twice the number of pixels, in each direction, of the `image`.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteScalePropertyReference(string value)
        {
            using (var writer = OpenScaleProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>scale</code> property as a <code>reference</code> value.  The <code>scale</code> property specifies the scale of the billboard.  The scale is multiplied with the pixel size of the billboard's `image`.  For example, if the scale is 2.0, the billboard will be rendered with twice the number of pixels, in each direction, of the `image`.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteScalePropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenScaleProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>scale</code> property as a <code>reference</code> value.  The <code>scale</code> property specifies the scale of the billboard.  The scale is multiplied with the pixel size of the billboard's `image`.  For example, if the scale is 2.0, the billboard will be rendered with twice the number of pixels, in each direction, of the `image`.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteScalePropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenScaleProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>rotation</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>rotation</code> property defines the rotation of the billboard offset from the alignedAxes.
        /// </summary>
        public DoubleCesiumWriter RotationWriter
        {
            get { return m_rotation.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>rotation</code> property.  The <code>rotation</code> property defines the rotation of the billboard offset from the alignedAxes.
        /// </summary>
        public DoubleCesiumWriter OpenRotationProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(RotationWriter);
        }

        /// <summary>
        /// Writes a value for the <code>rotation</code> property as a <code>number</code> value.  The <code>rotation</code> property specifies the rotation of the billboard offset from the alignedAxes.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteRotationProperty(double value)
        {
            using (var writer = OpenRotationProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>rotation</code> property as a <code>number</code> value.  The <code>rotation</code> property specifies the rotation of the billboard offset from the alignedAxes.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteRotationProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenRotationProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>rotation</code> property as a <code>reference</code> value.  The <code>rotation</code> property specifies the rotation of the billboard offset from the alignedAxes.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteRotationPropertyReference(Reference value)
        {
            using (var writer = OpenRotationProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>rotation</code> property as a <code>reference</code> value.  The <code>rotation</code> property specifies the rotation of the billboard offset from the alignedAxes.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteRotationPropertyReference(string value)
        {
            using (var writer = OpenRotationProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>rotation</code> property as a <code>reference</code> value.  The <code>rotation</code> property specifies the rotation of the billboard offset from the alignedAxes.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteRotationPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenRotationProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>rotation</code> property as a <code>reference</code> value.  The <code>rotation</code> property specifies the rotation of the billboard offset from the alignedAxes.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteRotationPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenRotationProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>alignedAxis</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>alignedAxis</code> property defines the aligned axis is the unit vector, in world coordinates, that the billboard up vector points towards. The default is the zero vector, which means the billboard is aligned to the screen up vector.
        /// </summary>
        public AlignedAxisCesiumWriter AlignedAxisWriter
        {
            get { return m_alignedAxis.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>alignedAxis</code> property.  The <code>alignedAxis</code> property defines the aligned axis is the unit vector, in world coordinates, that the billboard up vector points towards. The default is the zero vector, which means the billboard is aligned to the screen up vector.
        /// </summary>
        public AlignedAxisCesiumWriter OpenAlignedAxisProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(AlignedAxisWriter);
        }

        /// <summary>
        /// Writes a value for the <code>alignedAxis</code> property as a <code>cartesian</code> value.  The <code>alignedAxis</code> property specifies the aligned axis is the unit vector, in world coordinates, that the billboard up vector points towards. The default is the zero vector, which means the billboard is aligned to the screen up vector.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteAlignedAxisProperty(Cartesian value)
        {
            using (var writer = OpenAlignedAxisProperty())
            {
                writer.WriteCartesian(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>alignedAxis</code> property as a <code>cartesian</code> value.  The <code>alignedAxis</code> property specifies the aligned axis is the unit vector, in world coordinates, that the billboard up vector points towards. The default is the zero vector, which means the billboard is aligned to the screen up vector.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        public void WriteAlignedAxisProperty(IList<JulianDate> dates, IList<Cartesian> values)
        {
            using (var writer = OpenAlignedAxisProperty())
            {
                writer.WriteCartesian(dates, values);
            }
        }

        /// <summary>
        /// Writes a value for the <code>alignedAxis</code> property as a <code>cartesian</code> value.  The <code>alignedAxis</code> property specifies the aligned axis is the unit vector, in world coordinates, that the billboard up vector points towards. The default is the zero vector, which means the billboard is aligned to the screen up vector.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteAlignedAxisProperty(IList<JulianDate> dates, IList<Cartesian> values, int startIndex, int length)
        {
            using (var writer = OpenAlignedAxisProperty())
            {
                writer.WriteCartesian(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>alignedAxis</code> property as a <code>reference</code> value.  The <code>alignedAxis</code> property specifies the aligned axis is the unit vector, in world coordinates, that the billboard up vector points towards. The default is the zero vector, which means the billboard is aligned to the screen up vector.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteAlignedAxisPropertyReference(Reference value)
        {
            using (var writer = OpenAlignedAxisProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>alignedAxis</code> property as a <code>reference</code> value.  The <code>alignedAxis</code> property specifies the aligned axis is the unit vector, in world coordinates, that the billboard up vector points towards. The default is the zero vector, which means the billboard is aligned to the screen up vector.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteAlignedAxisPropertyReference(string value)
        {
            using (var writer = OpenAlignedAxisProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>alignedAxis</code> property as a <code>reference</code> value.  The <code>alignedAxis</code> property specifies the aligned axis is the unit vector, in world coordinates, that the billboard up vector points towards. The default is the zero vector, which means the billboard is aligned to the screen up vector.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteAlignedAxisPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenAlignedAxisProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>alignedAxis</code> property as a <code>reference</code> value.  The <code>alignedAxis</code> property specifies the aligned axis is the unit vector, in world coordinates, that the billboard up vector points towards. The default is the zero vector, which means the billboard is aligned to the screen up vector.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteAlignedAxisPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenAlignedAxisProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>show</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>show</code> property defines whether or not the billboard is shown.
        /// </summary>
        public BooleanCesiumWriter ShowWriter
        {
            get { return m_show.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>show</code> property.  The <code>show</code> property defines whether or not the billboard is shown.
        /// </summary>
        public BooleanCesiumWriter OpenShowProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ShowWriter);
        }

        /// <summary>
        /// Writes a value for the <code>show</code> property as a <code>boolean</code> value.  The <code>show</code> property specifies whether or not the billboard is shown.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteShowProperty(bool value)
        {
            using (var writer = OpenShowProperty())
            {
                writer.WriteBoolean(value);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>verticalOrigin</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>verticalOrigin</code> property defines the vertical origin of the billboard.  It controls whether the billboard image is bottom-, center-, or top-aligned with the `position`.
        /// </summary>
        public VerticalOriginCesiumWriter VerticalOriginWriter
        {
            get { return m_verticalOrigin.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>verticalOrigin</code> property.  The <code>verticalOrigin</code> property defines the vertical origin of the billboard.  It controls whether the billboard image is bottom-, center-, or top-aligned with the `position`.
        /// </summary>
        public VerticalOriginCesiumWriter OpenVerticalOriginProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(VerticalOriginWriter);
        }

        /// <summary>
        /// Writes a value for the <code>verticalOrigin</code> property as a <code>verticalOrigin</code> value.  The <code>verticalOrigin</code> property specifies the vertical origin of the billboard.  It controls whether the billboard image is bottom-, center-, or top-aligned with the `position`.
        /// </summary>
        /// <param name="value">The vertical origin.</param>
        public void WriteVerticalOriginProperty(CesiumVerticalOrigin value)
        {
            using (var writer = OpenVerticalOriginProperty())
            {
                writer.WriteVerticalOrigin(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>verticalOrigin</code> property as a <code>reference</code> value.  The <code>verticalOrigin</code> property specifies the vertical origin of the billboard.  It controls whether the billboard image is bottom-, center-, or top-aligned with the `position`.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteVerticalOriginPropertyReference(Reference value)
        {
            using (var writer = OpenVerticalOriginProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>verticalOrigin</code> property as a <code>reference</code> value.  The <code>verticalOrigin</code> property specifies the vertical origin of the billboard.  It controls whether the billboard image is bottom-, center-, or top-aligned with the `position`.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteVerticalOriginPropertyReference(string value)
        {
            using (var writer = OpenVerticalOriginProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>verticalOrigin</code> property as a <code>reference</code> value.  The <code>verticalOrigin</code> property specifies the vertical origin of the billboard.  It controls whether the billboard image is bottom-, center-, or top-aligned with the `position`.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteVerticalOriginPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenVerticalOriginProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>verticalOrigin</code> property as a <code>reference</code> value.  The <code>verticalOrigin</code> property specifies the vertical origin of the billboard.  It controls whether the billboard image is bottom-, center-, or top-aligned with the `position`.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteVerticalOriginPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenVerticalOriginProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

    }
}
