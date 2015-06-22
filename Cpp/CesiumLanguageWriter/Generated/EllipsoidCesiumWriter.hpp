// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"
#include "vector"
#include "System.Drawing"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>Ellipsoid</code> to a <see cref="CesiumOutputStream" />.  A <code>Ellipsoid</code> defines a closed quadric surface that is a three dimensional analogue of an ellipse.
    /// </summary>
    class EllipsoidCesiumWriter : CesiumPropertyWriter<EllipsoidCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>show</code> property.
            /// </summary>
            const std::string ShowPropertyName = "show";

            /// <summary>
            /// The name of the <code>radii</code> property.
            /// </summary>
            const std::string RadiiPropertyName = "radii";

            /// <summary>
            /// The name of the <code>fill</code> property.
            /// </summary>
            const std::string FillPropertyName = "fill";

            /// <summary>
            /// The name of the <code>material</code> property.
            /// </summary>
            const std::string MaterialPropertyName = "material";

            /// <summary>
            /// The name of the <code>outline</code> property.
            /// </summary>
            const std::string OutlinePropertyName = "outline";

            /// <summary>
            /// The name of the <code>outlineColor</code> property.
            /// </summary>
            const std::string OutlineColorPropertyName = "outlineColor";

            /// <summary>
            /// The name of the <code>outlineWidth</code> property.
            /// </summary>
            const std::string OutlineWidthPropertyName = "outlineWidth";

            /// <summary>
            /// The name of the <code>stackPartitions</code> property.
            /// </summary>
            const std::string StackPartitionsPropertyName = "stackPartitions";

            /// <summary>
            /// The name of the <code>slicePartitions</code> property.
            /// </summary>
            const std::string SlicePartitionsPropertyName = "slicePartitions";

            /// <summary>
            /// The name of the <code>subdivisions</code> property.
            /// </summary>
            const std::string SubdivisionsPropertyName = "subdivisions";

        private:
            const BooleanCesiumWriter m_show = BooleanCesiumWriter(ShowPropertyName);
            const EllipsoidRadiiCesiumWriter m_radii = EllipsoidRadiiCesiumWriter(RadiiPropertyName);
            const BooleanCesiumWriter m_fill = BooleanCesiumWriter(FillPropertyName);
            const MaterialCesiumWriter m_material = MaterialCesiumWriter(MaterialPropertyName);
            const BooleanCesiumWriter m_outline = BooleanCesiumWriter(OutlinePropertyName);
            const ColorCesiumWriter m_outlineColor = ColorCesiumWriter(OutlineColorPropertyName);
            const DoubleCesiumWriter m_outlineWidth = DoubleCesiumWriter(OutlineWidthPropertyName);
            const DoubleCesiumWriter m_stackPartitions = DoubleCesiumWriter(StackPartitionsPropertyName);
            const DoubleCesiumWriter m_slicePartitions = DoubleCesiumWriter(SlicePartitionsPropertyName);
            const DoubleCesiumWriter m_subdivisions = DoubleCesiumWriter(SubdivisionsPropertyName);

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            EllipsoidCesiumWriter(string propertyName)
                : base(propertyName)
            {
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            EllipsoidCesiumWriter(const EllipsoidCesiumWriter& existingInstance)
                : base(existingInstance)
            {
            }

        /// <summary>
        /// Gets the writer for the <code>show</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>show</code> property defines whether or not the ellipsoid is shown.
        /// </summary>
        public BooleanCesiumWriter ShowWriter
        {
            get { return m_show.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>show</code> property.  The <code>show</code> property defines whether or not the ellipsoid is shown.
        /// </summary>
        public BooleanCesiumWriter OpenShowProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ShowWriter);
        }

        /// <summary>
        /// Writes a value for the <code>show</code> property as a <code>boolean</code> value.  The <code>show</code> property specifies whether or not the ellipsoid is shown.
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
        /// Gets the writer for the <code>radii</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>radii</code> property defines the dimensions of the ellipsoid.
        /// </summary>
        public EllipsoidRadiiCesiumWriter RadiiWriter
        {
            get { return m_radii.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>radii</code> property.  The <code>radii</code> property defines the dimensions of the ellipsoid.
        /// </summary>
        public EllipsoidRadiiCesiumWriter OpenRadiiProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(RadiiWriter);
        }

        /// <summary>
        /// Writes a value for the <code>radii</code> property as a <code>cartesian</code> value.  The <code>radii</code> property specifies the dimensions of the ellipsoid.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteRadiiProperty(Cartesian value)
        {
            using (var writer = OpenRadiiProperty())
            {
                writer.WriteCartesian(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>radii</code> property as a <code>cartesian</code> value.  The <code>radii</code> property specifies the dimensions of the ellipsoid.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        public void WriteRadiiProperty(IList<JulianDate> dates, IList<Cartesian> values)
        {
            using (var writer = OpenRadiiProperty())
            {
                writer.WriteCartesian(dates, values);
            }
        }

        /// <summary>
        /// Writes a value for the <code>radii</code> property as a <code>cartesian</code> value.  The <code>radii</code> property specifies the dimensions of the ellipsoid.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteRadiiProperty(IList<JulianDate> dates, IList<Cartesian> values, int startIndex, int length)
        {
            using (var writer = OpenRadiiProperty())
            {
                writer.WriteCartesian(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>radii</code> property as a <code>reference</code> value.  The <code>radii</code> property specifies the dimensions of the ellipsoid.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteRadiiPropertyReference(Reference value)
        {
            using (var writer = OpenRadiiProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>radii</code> property as a <code>reference</code> value.  The <code>radii</code> property specifies the dimensions of the ellipsoid.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteRadiiPropertyReference(string value)
        {
            using (var writer = OpenRadiiProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>radii</code> property as a <code>reference</code> value.  The <code>radii</code> property specifies the dimensions of the ellipsoid.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteRadiiPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenRadiiProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>radii</code> property as a <code>reference</code> value.  The <code>radii</code> property specifies the dimensions of the ellipsoid.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteRadiiPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenRadiiProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>fill</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>fill</code> property defines whether or not the ellipsoid is filled.
        /// </summary>
        public BooleanCesiumWriter FillWriter
        {
            get { return m_fill.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>fill</code> property.  The <code>fill</code> property defines whether or not the ellipsoid is filled.
        /// </summary>
        public BooleanCesiumWriter OpenFillProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(FillWriter);
        }

        /// <summary>
        /// Writes a value for the <code>fill</code> property as a <code>boolean</code> value.  The <code>fill</code> property specifies whether or not the ellipsoid is filled.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteFillProperty(bool value)
        {
            using (var writer = OpenFillProperty())
            {
                writer.WriteBoolean(value);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>material</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>material</code> property defines the material to display on the surface of the ellipsoid.
        /// </summary>
        public MaterialCesiumWriter MaterialWriter
        {
            get { return m_material.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>material</code> property.  The <code>material</code> property defines the material to display on the surface of the ellipsoid.
        /// </summary>
        public MaterialCesiumWriter OpenMaterialProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(MaterialWriter);
        }

        /// <summary>
        /// Gets the writer for the <code>outline</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>outline</code> property defines whether or not the ellipsoid is outlined.
        /// </summary>
        public BooleanCesiumWriter OutlineWriter
        {
            get { return m_outline.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>outline</code> property.  The <code>outline</code> property defines whether or not the ellipsoid is outlined.
        /// </summary>
        public BooleanCesiumWriter OpenOutlineProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(OutlineWriter);
        }

        /// <summary>
        /// Writes a value for the <code>outline</code> property as a <code>boolean</code> value.  The <code>outline</code> property specifies whether or not the ellipsoid is outlined.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteOutlineProperty(bool value)
        {
            using (var writer = OpenOutlineProperty())
            {
                writer.WriteBoolean(value);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>outlineColor</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>outlineColor</code> property defines the color of the ellipsoid outline.
        /// </summary>
        public ColorCesiumWriter OutlineColorWriter
        {
            get { return m_outlineColor.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>outlineColor</code> property.  The <code>outlineColor</code> property defines the color of the ellipsoid outline.
        /// </summary>
        public ColorCesiumWriter OpenOutlineColorProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(OutlineColorWriter);
        }

        /// <summary>
        /// Writes a value for the <code>outlineColor</code> property as a <code>rgba</code> value.  The <code>outlineColor</code> property specifies the color of the ellipsoid outline.
        /// </summary>
        /// <param name="color">The color.</param>
        public void WriteOutlineColorProperty(Color color)
        {
            using (var writer = OpenOutlineColorProperty())
            {
                writer.WriteRgba(color);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineColor</code> property as a <code>rgba</code> value.  The <code>outlineColor</code> property specifies the color of the ellipsoid outline.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 255.</param>
        /// <param name="green">The green component in the range 0 to 255.</param>
        /// <param name="blue">The blue component in the range 0 to 255.</param>
        /// <param name="alpha">The alpha component in the range 0 to 255.</param>
        public void WriteOutlineColorProperty(int red, int green, int blue, int alpha)
        {
            using (var writer = OpenOutlineColorProperty())
            {
                writer.WriteRgba(red, green, blue, alpha);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineColor</code> property as a <code>rgba</code> value.  The <code>outlineColor</code> property specifies the color of the ellipsoid outline.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="colors">The color corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `colors` collection.</param>
        /// <param name="length">The number of elements to use from the `colors` collection.</param>
        public void WriteOutlineColorProperty(IList<JulianDate> dates, IList<Color> colors, int startIndex, int length)
        {
            using (var writer = OpenOutlineColorProperty())
            {
                writer.WriteRgba(dates, colors, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineColor</code> property as a <code>rgbaf</code> value.  The <code>outlineColor</code> property specifies the color of the ellipsoid outline.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 1.0.</param>
        /// <param name="green">The green component in the range 0 to 1.0.</param>
        /// <param name="blue">The blue component in the range 0 to 1.0.</param>
        /// <param name="alpha">The alpha component in the range 0 to 1.0.</param>
        public void WriteOutlineColorPropertyRgbaf(float red, float green, float blue, float alpha)
        {
            using (var writer = OpenOutlineColorProperty())
            {
                writer.WriteRgbaf(red, green, blue, alpha);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineColor</code> property as a <code>reference</code> value.  The <code>outlineColor</code> property specifies the color of the ellipsoid outline.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteOutlineColorPropertyReference(Reference value)
        {
            using (var writer = OpenOutlineColorProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineColor</code> property as a <code>reference</code> value.  The <code>outlineColor</code> property specifies the color of the ellipsoid outline.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteOutlineColorPropertyReference(string value)
        {
            using (var writer = OpenOutlineColorProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineColor</code> property as a <code>reference</code> value.  The <code>outlineColor</code> property specifies the color of the ellipsoid outline.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteOutlineColorPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenOutlineColorProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineColor</code> property as a <code>reference</code> value.  The <code>outlineColor</code> property specifies the color of the ellipsoid outline.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteOutlineColorPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenOutlineColorProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>outlineWidth</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>outlineWidth</code> property defines the width of the ellipsoid outline.
        /// </summary>
        public DoubleCesiumWriter OutlineWidthWriter
        {
            get { return m_outlineWidth.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>outlineWidth</code> property.  The <code>outlineWidth</code> property defines the width of the ellipsoid outline.
        /// </summary>
        public DoubleCesiumWriter OpenOutlineWidthProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(OutlineWidthWriter);
        }

        /// <summary>
        /// Writes a value for the <code>outlineWidth</code> property as a <code>number</code> value.  The <code>outlineWidth</code> property specifies the width of the ellipsoid outline.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteOutlineWidthProperty(double value)
        {
            using (var writer = OpenOutlineWidthProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineWidth</code> property as a <code>number</code> value.  The <code>outlineWidth</code> property specifies the width of the ellipsoid outline.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteOutlineWidthProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenOutlineWidthProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineWidth</code> property as a <code>reference</code> value.  The <code>outlineWidth</code> property specifies the width of the ellipsoid outline.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteOutlineWidthPropertyReference(Reference value)
        {
            using (var writer = OpenOutlineWidthProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineWidth</code> property as a <code>reference</code> value.  The <code>outlineWidth</code> property specifies the width of the ellipsoid outline.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteOutlineWidthPropertyReference(string value)
        {
            using (var writer = OpenOutlineWidthProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineWidth</code> property as a <code>reference</code> value.  The <code>outlineWidth</code> property specifies the width of the ellipsoid outline.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteOutlineWidthPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenOutlineWidthProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>outlineWidth</code> property as a <code>reference</code> value.  The <code>outlineWidth</code> property specifies the width of the ellipsoid outline.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteOutlineWidthPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenOutlineWidthProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>stackPartitions</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>stackPartitions</code> property defines the number of times to partition the ellipsoid into stacks.
        /// </summary>
        public DoubleCesiumWriter StackPartitionsWriter
        {
            get { return m_stackPartitions.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>stackPartitions</code> property.  The <code>stackPartitions</code> property defines the number of times to partition the ellipsoid into stacks.
        /// </summary>
        public DoubleCesiumWriter OpenStackPartitionsProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(StackPartitionsWriter);
        }

        /// <summary>
        /// Writes a value for the <code>stackPartitions</code> property as a <code>number</code> value.  The <code>stackPartitions</code> property specifies the number of times to partition the ellipsoid into stacks.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteStackPartitionsProperty(double value)
        {
            using (var writer = OpenStackPartitionsProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>stackPartitions</code> property as a <code>number</code> value.  The <code>stackPartitions</code> property specifies the number of times to partition the ellipsoid into stacks.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteStackPartitionsProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenStackPartitionsProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>stackPartitions</code> property as a <code>reference</code> value.  The <code>stackPartitions</code> property specifies the number of times to partition the ellipsoid into stacks.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteStackPartitionsPropertyReference(Reference value)
        {
            using (var writer = OpenStackPartitionsProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>stackPartitions</code> property as a <code>reference</code> value.  The <code>stackPartitions</code> property specifies the number of times to partition the ellipsoid into stacks.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteStackPartitionsPropertyReference(string value)
        {
            using (var writer = OpenStackPartitionsProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>stackPartitions</code> property as a <code>reference</code> value.  The <code>stackPartitions</code> property specifies the number of times to partition the ellipsoid into stacks.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteStackPartitionsPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenStackPartitionsProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>stackPartitions</code> property as a <code>reference</code> value.  The <code>stackPartitions</code> property specifies the number of times to partition the ellipsoid into stacks.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteStackPartitionsPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenStackPartitionsProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>slicePartitions</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>slicePartitions</code> property defines the number of times to partition the ellipsoid into radial slices.
        /// </summary>
        public DoubleCesiumWriter SlicePartitionsWriter
        {
            get { return m_slicePartitions.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>slicePartitions</code> property.  The <code>slicePartitions</code> property defines the number of times to partition the ellipsoid into radial slices.
        /// </summary>
        public DoubleCesiumWriter OpenSlicePartitionsProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(SlicePartitionsWriter);
        }

        /// <summary>
        /// Writes a value for the <code>slicePartitions</code> property as a <code>number</code> value.  The <code>slicePartitions</code> property specifies the number of times to partition the ellipsoid into radial slices.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteSlicePartitionsProperty(double value)
        {
            using (var writer = OpenSlicePartitionsProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>slicePartitions</code> property as a <code>number</code> value.  The <code>slicePartitions</code> property specifies the number of times to partition the ellipsoid into radial slices.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteSlicePartitionsProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenSlicePartitionsProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>slicePartitions</code> property as a <code>reference</code> value.  The <code>slicePartitions</code> property specifies the number of times to partition the ellipsoid into radial slices.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteSlicePartitionsPropertyReference(Reference value)
        {
            using (var writer = OpenSlicePartitionsProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>slicePartitions</code> property as a <code>reference</code> value.  The <code>slicePartitions</code> property specifies the number of times to partition the ellipsoid into radial slices.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteSlicePartitionsPropertyReference(string value)
        {
            using (var writer = OpenSlicePartitionsProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>slicePartitions</code> property as a <code>reference</code> value.  The <code>slicePartitions</code> property specifies the number of times to partition the ellipsoid into radial slices.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteSlicePartitionsPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenSlicePartitionsProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>slicePartitions</code> property as a <code>reference</code> value.  The <code>slicePartitions</code> property specifies the number of times to partition the ellipsoid into radial slices.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteSlicePartitionsPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenSlicePartitionsProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>subdivisions</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>subdivisions</code> property defines the number of points per outline line, determining the granularity of the curvature.
        /// </summary>
        public DoubleCesiumWriter SubdivisionsWriter
        {
            get { return m_subdivisions.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>subdivisions</code> property.  The <code>subdivisions</code> property defines the number of points per outline line, determining the granularity of the curvature.
        /// </summary>
        public DoubleCesiumWriter OpenSubdivisionsProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(SubdivisionsWriter);
        }

        /// <summary>
        /// Writes a value for the <code>subdivisions</code> property as a <code>number</code> value.  The <code>subdivisions</code> property specifies the number of points per outline line, determining the granularity of the curvature.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteSubdivisionsProperty(double value)
        {
            using (var writer = OpenSubdivisionsProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>subdivisions</code> property as a <code>number</code> value.  The <code>subdivisions</code> property specifies the number of points per outline line, determining the granularity of the curvature.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteSubdivisionsProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenSubdivisionsProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>subdivisions</code> property as a <code>reference</code> value.  The <code>subdivisions</code> property specifies the number of points per outline line, determining the granularity of the curvature.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteSubdivisionsPropertyReference(Reference value)
        {
            using (var writer = OpenSubdivisionsProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>subdivisions</code> property as a <code>reference</code> value.  The <code>subdivisions</code> property specifies the number of points per outline line, determining the granularity of the curvature.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteSubdivisionsPropertyReference(string value)
        {
            using (var writer = OpenSubdivisionsProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>subdivisions</code> property as a <code>reference</code> value.  The <code>subdivisions</code> property specifies the number of points per outline line, determining the granularity of the curvature.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteSubdivisionsPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenSubdivisionsProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>subdivisions</code> property as a <code>reference</code> value.  The <code>subdivisions</code> property specifies the number of points per outline line, determining the granularity of the curvature.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteSubdivisionsPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenSubdivisionsProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

    }
}
