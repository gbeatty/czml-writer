// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"
#include "System.Drawing"
#include "vector"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>StripeMaterial</code> to a <see cref="CesiumOutputStream" />.  A <code>StripeMaterial</code> fills the surface with alternating colors.
    /// </summary>
    class StripeMaterialCesiumWriter : CesiumPropertyWriter<StripeMaterialCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>orientation</code> property.
            /// </summary>
            const std::string OrientationPropertyName = "orientation";

            /// <summary>
            /// The name of the <code>evenColor</code> property.
            /// </summary>
            const std::string EvenColorPropertyName = "evenColor";

            /// <summary>
            /// The name of the <code>oddColor</code> property.
            /// </summary>
            const std::string OddColorPropertyName = "oddColor";

            /// <summary>
            /// The name of the <code>offset</code> property.
            /// </summary>
            const std::string OffsetPropertyName = "offset";

            /// <summary>
            /// The name of the <code>repeat</code> property.
            /// </summary>
            const std::string RepeatPropertyName = "repeat";

        private:
            const StripeOrientationCesiumWriter m_orientation = StripeOrientationCesiumWriter(OrientationPropertyName);
            const ColorCesiumWriter m_evenColor = ColorCesiumWriter(EvenColorPropertyName);
            const ColorCesiumWriter m_oddColor = ColorCesiumWriter(OddColorPropertyName);
            const DoubleCesiumWriter m_offset = DoubleCesiumWriter(OffsetPropertyName);
            const DoubleCesiumWriter m_repeat = DoubleCesiumWriter(RepeatPropertyName);

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            StripeMaterialCesiumWriter(string propertyName)
                : base(propertyName)
            {
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            StripeMaterialCesiumWriter(const StripeMaterialCesiumWriter& existingInstance)
                : base(existingInstance)
            {
            }

        /// <summary>
        /// Gets the writer for the <code>orientation</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>orientation</code> property defines the value indicating if the stripes are horizontal or vertical.
        /// </summary>
        public StripeOrientationCesiumWriter OrientationWriter
        {
            get { return m_orientation.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>orientation</code> property.  The <code>orientation</code> property defines the value indicating if the stripes are horizontal or vertical.
        /// </summary>
        public StripeOrientationCesiumWriter OpenOrientationProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(OrientationWriter);
        }

        /// <summary>
        /// Writes a value for the <code>orientation</code> property as a <code>StripeOrientation</code> value.  The <code>orientation</code> property specifies the value indicating if the stripes are horizontal or vertical.
        /// </summary>
        /// <param name="value">The orientation.</param>
        public void WriteOrientationProperty(CesiumStripeOrientation value)
        {
            using (var writer = OpenOrientationProperty())
            {
                writer.WriteStripeOrientation(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>orientation</code> property as a <code>reference</code> value.  The <code>orientation</code> property specifies the value indicating if the stripes are horizontal or vertical.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteOrientationPropertyReference(Reference value)
        {
            using (var writer = OpenOrientationProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>orientation</code> property as a <code>reference</code> value.  The <code>orientation</code> property specifies the value indicating if the stripes are horizontal or vertical.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteOrientationPropertyReference(string value)
        {
            using (var writer = OpenOrientationProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>orientation</code> property as a <code>reference</code> value.  The <code>orientation</code> property specifies the value indicating if the stripes are horizontal or vertical.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteOrientationPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenOrientationProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>orientation</code> property as a <code>reference</code> value.  The <code>orientation</code> property specifies the value indicating if the stripes are horizontal or vertical.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteOrientationPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenOrientationProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>evenColor</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>evenColor</code> property defines the even color.
        /// </summary>
        public ColorCesiumWriter EvenColorWriter
        {
            get { return m_evenColor.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>evenColor</code> property.  The <code>evenColor</code> property defines the even color.
        /// </summary>
        public ColorCesiumWriter OpenEvenColorProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(EvenColorWriter);
        }

        /// <summary>
        /// Writes a value for the <code>evenColor</code> property as a <code>rgba</code> value.  The <code>evenColor</code> property specifies the even color.
        /// </summary>
        /// <param name="color">The color.</param>
        public void WriteEvenColorProperty(Color color)
        {
            using (var writer = OpenEvenColorProperty())
            {
                writer.WriteRgba(color);
            }
        }

        /// <summary>
        /// Writes a value for the <code>evenColor</code> property as a <code>rgba</code> value.  The <code>evenColor</code> property specifies the even color.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 255.</param>
        /// <param name="green">The green component in the range 0 to 255.</param>
        /// <param name="blue">The blue component in the range 0 to 255.</param>
        /// <param name="alpha">The alpha component in the range 0 to 255.</param>
        public void WriteEvenColorProperty(int red, int green, int blue, int alpha)
        {
            using (var writer = OpenEvenColorProperty())
            {
                writer.WriteRgba(red, green, blue, alpha);
            }
        }

        /// <summary>
        /// Writes a value for the <code>evenColor</code> property as a <code>rgba</code> value.  The <code>evenColor</code> property specifies the even color.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="colors">The color corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `colors` collection.</param>
        /// <param name="length">The number of elements to use from the `colors` collection.</param>
        public void WriteEvenColorProperty(IList<JulianDate> dates, IList<Color> colors, int startIndex, int length)
        {
            using (var writer = OpenEvenColorProperty())
            {
                writer.WriteRgba(dates, colors, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>evenColor</code> property as a <code>rgbaf</code> value.  The <code>evenColor</code> property specifies the even color.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 1.0.</param>
        /// <param name="green">The green component in the range 0 to 1.0.</param>
        /// <param name="blue">The blue component in the range 0 to 1.0.</param>
        /// <param name="alpha">The alpha component in the range 0 to 1.0.</param>
        public void WriteEvenColorPropertyRgbaf(float red, float green, float blue, float alpha)
        {
            using (var writer = OpenEvenColorProperty())
            {
                writer.WriteRgbaf(red, green, blue, alpha);
            }
        }

        /// <summary>
        /// Writes a value for the <code>evenColor</code> property as a <code>reference</code> value.  The <code>evenColor</code> property specifies the even color.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteEvenColorPropertyReference(Reference value)
        {
            using (var writer = OpenEvenColorProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>evenColor</code> property as a <code>reference</code> value.  The <code>evenColor</code> property specifies the even color.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteEvenColorPropertyReference(string value)
        {
            using (var writer = OpenEvenColorProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>evenColor</code> property as a <code>reference</code> value.  The <code>evenColor</code> property specifies the even color.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteEvenColorPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenEvenColorProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>evenColor</code> property as a <code>reference</code> value.  The <code>evenColor</code> property specifies the even color.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteEvenColorPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenEvenColorProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>oddColor</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>oddColor</code> property defines the odd color.
        /// </summary>
        public ColorCesiumWriter OddColorWriter
        {
            get { return m_oddColor.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>oddColor</code> property.  The <code>oddColor</code> property defines the odd color.
        /// </summary>
        public ColorCesiumWriter OpenOddColorProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(OddColorWriter);
        }

        /// <summary>
        /// Writes a value for the <code>oddColor</code> property as a <code>rgba</code> value.  The <code>oddColor</code> property specifies the odd color.
        /// </summary>
        /// <param name="color">The color.</param>
        public void WriteOddColorProperty(Color color)
        {
            using (var writer = OpenOddColorProperty())
            {
                writer.WriteRgba(color);
            }
        }

        /// <summary>
        /// Writes a value for the <code>oddColor</code> property as a <code>rgba</code> value.  The <code>oddColor</code> property specifies the odd color.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 255.</param>
        /// <param name="green">The green component in the range 0 to 255.</param>
        /// <param name="blue">The blue component in the range 0 to 255.</param>
        /// <param name="alpha">The alpha component in the range 0 to 255.</param>
        public void WriteOddColorProperty(int red, int green, int blue, int alpha)
        {
            using (var writer = OpenOddColorProperty())
            {
                writer.WriteRgba(red, green, blue, alpha);
            }
        }

        /// <summary>
        /// Writes a value for the <code>oddColor</code> property as a <code>rgba</code> value.  The <code>oddColor</code> property specifies the odd color.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="colors">The color corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `colors` collection.</param>
        /// <param name="length">The number of elements to use from the `colors` collection.</param>
        public void WriteOddColorProperty(IList<JulianDate> dates, IList<Color> colors, int startIndex, int length)
        {
            using (var writer = OpenOddColorProperty())
            {
                writer.WriteRgba(dates, colors, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>oddColor</code> property as a <code>rgbaf</code> value.  The <code>oddColor</code> property specifies the odd color.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 1.0.</param>
        /// <param name="green">The green component in the range 0 to 1.0.</param>
        /// <param name="blue">The blue component in the range 0 to 1.0.</param>
        /// <param name="alpha">The alpha component in the range 0 to 1.0.</param>
        public void WriteOddColorPropertyRgbaf(float red, float green, float blue, float alpha)
        {
            using (var writer = OpenOddColorProperty())
            {
                writer.WriteRgbaf(red, green, blue, alpha);
            }
        }

        /// <summary>
        /// Writes a value for the <code>oddColor</code> property as a <code>reference</code> value.  The <code>oddColor</code> property specifies the odd color.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteOddColorPropertyReference(Reference value)
        {
            using (var writer = OpenOddColorProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>oddColor</code> property as a <code>reference</code> value.  The <code>oddColor</code> property specifies the odd color.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteOddColorPropertyReference(string value)
        {
            using (var writer = OpenOddColorProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>oddColor</code> property as a <code>reference</code> value.  The <code>oddColor</code> property specifies the odd color.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteOddColorPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenOddColorProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>oddColor</code> property as a <code>reference</code> value.  The <code>oddColor</code> property specifies the odd color.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteOddColorPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenOddColorProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>offset</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>offset</code> property defines the value indicating where in the pattern to begin drawing; with 0.0 being the beginning of the even color, 1.0 the beginning of the odd color, 2.0 being the even color again, and any multiple or fractional values being in between.
        /// </summary>
        public DoubleCesiumWriter OffsetWriter
        {
            get { return m_offset.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>offset</code> property.  The <code>offset</code> property defines the value indicating where in the pattern to begin drawing; with 0.0 being the beginning of the even color, 1.0 the beginning of the odd color, 2.0 being the even color again, and any multiple or fractional values being in between.
        /// </summary>
        public DoubleCesiumWriter OpenOffsetProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(OffsetWriter);
        }

        /// <summary>
        /// Writes a value for the <code>offset</code> property as a <code>number</code> value.  The <code>offset</code> property specifies the value indicating where in the pattern to begin drawing; with 0.0 being the beginning of the even color, 1.0 the beginning of the odd color, 2.0 being the even color again, and any multiple or fractional values being in between.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteOffsetProperty(double value)
        {
            using (var writer = OpenOffsetProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>offset</code> property as a <code>number</code> value.  The <code>offset</code> property specifies the value indicating where in the pattern to begin drawing; with 0.0 being the beginning of the even color, 1.0 the beginning of the odd color, 2.0 being the even color again, and any multiple or fractional values being in between.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteOffsetProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenOffsetProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>offset</code> property as a <code>reference</code> value.  The <code>offset</code> property specifies the value indicating where in the pattern to begin drawing; with 0.0 being the beginning of the even color, 1.0 the beginning of the odd color, 2.0 being the even color again, and any multiple or fractional values being in between.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteOffsetPropertyReference(Reference value)
        {
            using (var writer = OpenOffsetProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>offset</code> property as a <code>reference</code> value.  The <code>offset</code> property specifies the value indicating where in the pattern to begin drawing; with 0.0 being the beginning of the even color, 1.0 the beginning of the odd color, 2.0 being the even color again, and any multiple or fractional values being in between.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteOffsetPropertyReference(string value)
        {
            using (var writer = OpenOffsetProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>offset</code> property as a <code>reference</code> value.  The <code>offset</code> property specifies the value indicating where in the pattern to begin drawing; with 0.0 being the beginning of the even color, 1.0 the beginning of the odd color, 2.0 being the even color again, and any multiple or fractional values being in between.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteOffsetPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenOffsetProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>offset</code> property as a <code>reference</code> value.  The <code>offset</code> property specifies the value indicating where in the pattern to begin drawing; with 0.0 being the beginning of the even color, 1.0 the beginning of the odd color, 2.0 being the even color again, and any multiple or fractional values being in between.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteOffsetPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenOffsetProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>repeat</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>repeat</code> property defines the number of time the stripes repeat.
        /// </summary>
        public DoubleCesiumWriter RepeatWriter
        {
            get { return m_repeat.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>repeat</code> property.  The <code>repeat</code> property defines the number of time the stripes repeat.
        /// </summary>
        public DoubleCesiumWriter OpenRepeatProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(RepeatWriter);
        }

        /// <summary>
        /// Writes a value for the <code>repeat</code> property as a <code>number</code> value.  The <code>repeat</code> property specifies the number of time the stripes repeat.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteRepeatProperty(double value)
        {
            using (var writer = OpenRepeatProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>repeat</code> property as a <code>number</code> value.  The <code>repeat</code> property specifies the number of time the stripes repeat.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteRepeatProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenRepeatProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>repeat</code> property as a <code>reference</code> value.  The <code>repeat</code> property specifies the number of time the stripes repeat.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteRepeatPropertyReference(Reference value)
        {
            using (var writer = OpenRepeatProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>repeat</code> property as a <code>reference</code> value.  The <code>repeat</code> property specifies the number of time the stripes repeat.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteRepeatPropertyReference(string value)
        {
            using (var writer = OpenRepeatProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>repeat</code> property as a <code>reference</code> value.  The <code>repeat</code> property specifies the number of time the stripes repeat.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteRepeatPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenRepeatProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>repeat</code> property as a <code>reference</code> value.  The <code>repeat</code> property specifies the number of time the stripes repeat.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteRepeatPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenRepeatProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

    }
}
