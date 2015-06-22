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
    /// Writes a <code>Color</code> to a <see cref="CesiumOutputStream" />.  A <code>Color</code> defines a a color.  The color can optionally vary over time.
    /// </summary>
    class ColorCesiumWriter : CesiumInterpolatablePropertyWriter<ColorCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>rgba</code> property.
            /// </summary>
            const std::string RgbaPropertyName = "rgba";

            /// <summary>
            /// The name of the <code>rgbaf</code> property.
            /// </summary>
            const std::string RgbafPropertyName = "rgbaf";

            /// <summary>
            /// The name of the <code>reference</code> property.
            /// </summary>
            const std::string ReferencePropertyName = "reference";

        private:
            const ICesiumInterpolatableValuePropertyWriter<Color> m_asRgba;
            const ICesiumValuePropertyWriter<Reference> m_asReference;

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            ColorCesiumWriter(string propertyName)
                : base(propertyName)
            {
                m_asRgba = ICesiumInterpolatableValuePropertyWriter<Color>(CreateRgbaAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            ColorCesiumWriter(const ColorCesiumWriter& existingInstance)
                : base(existingInstance)
            {
                m_asRgba = ICesiumInterpolatableValuePropertyWriter<Color>(CreateRgbaAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

        /// <summary>
        /// Writes the <code>rgba</code> property.  The <code>rgba</code> property specifies the color specified as an array of color components [Red, Green, Blue, Alpha] where each component is in the range 0-255. If the array has four elements, the color is constant. If it has five or more elements, they are time-tagged samples arranged as [Time, Red, Green, Blue, Alpha, Time, Red, Green, Blue, Alpha, ...], where Time is an ISO 8601 date and time string or seconds since epoch.
        /// </summary>
        /// <param name="color">The color.</param>
        public void WriteRgba(Color color)
        {
            const string PropertyName = RgbaPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteRgba(Output, color);
        }

        /// <summary>
        /// Writes the <code>rgba</code> property.  The <code>rgba</code> property specifies the color specified as an array of color components [Red, Green, Blue, Alpha] where each component is in the range 0-255. If the array has four elements, the color is constant. If it has five or more elements, they are time-tagged samples arranged as [Time, Red, Green, Blue, Alpha, Time, Red, Green, Blue, Alpha, ...], where Time is an ISO 8601 date and time string or seconds since epoch.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 255.</param>
        /// <param name="green">The green component in the range 0 to 255.</param>
        /// <param name="blue">The blue component in the range 0 to 255.</param>
        /// <param name="alpha">The alpha component in the range 0 to 255.</param>
        public void WriteRgba(int red, int green, int blue, int alpha)
        {
            const string PropertyName = RgbaPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteRgba(Output, red, green, blue, alpha);
        }

        /// <summary>
        /// Writes the <code>rgba</code> property.  The <code>rgba</code> property specifies the color specified as an array of color components [Red, Green, Blue, Alpha] where each component is in the range 0-255. If the array has four elements, the color is constant. If it has five or more elements, they are time-tagged samples arranged as [Time, Red, Green, Blue, Alpha, Time, Red, Green, Blue, Alpha, ...], where Time is an ISO 8601 date and time string or seconds since epoch.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="colors">The color corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `colors` collection.</param>
        /// <param name="length">The number of elements to use from the `colors` collection.</param>
        public void WriteRgba(IList<JulianDate> dates, IList<Color> colors, int startIndex, int length)
        {
            const string PropertyName = RgbaPropertyName;
            OpenIntervalIfNecessary();
            CesiumWritingHelper.WriteRgba(Output, PropertyName, dates, colors, startIndex, length);
        }

        /// <summary>
        /// Writes the <code>rgbaf</code> property.  The <code>rgbaf</code> property specifies the color specified as an array of color components [Red, Green, Blue, Alpha] where each component is in the range 0.0-1.0. If the array has four elements, the color is constant. If it has five or more elements, they are time-tagged samples arranged as [Time, Red, Green, Blue, Alpha, Time, Red, Green, Blue, Alpha, ...], where Time is an ISO 8601 date and time string or seconds since epoch.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 1.0.</param>
        /// <param name="green">The green component in the range 0 to 1.0.</param>
        /// <param name="blue">The blue component in the range 0 to 1.0.</param>
        /// <param name="alpha">The alpha component in the range 0 to 1.0.</param>
        public void WriteRgbaf(float red, float green, float blue, float alpha)
        {
            const string PropertyName = RgbafPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteRgbaf(Output, red, green, blue, alpha);
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
        /// Returns a wrapper for this instance that implements <see cref="ICesiumInterpolatableValuePropertyWriter{T}" /> to write a value in <code>Rgba</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumInterpolatableValuePropertyWriter<Color> AsRgba()
        {
            return m_asRgba.Value;
        }

        private ICesiumInterpolatableValuePropertyWriter<Color> CreateRgbaAdaptor()
        {
            return new CesiumInterpolatableWriterAdaptor<ColorCesiumWriter, Color>(
                this, (me, value) => me.WriteRgba(value), (ColorCesiumWriter me, IList<JulianDate> dates, IList<Color> values, int startIndex, int length) => me.WriteRgba(dates, values, startIndex, length));
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
            return new CesiumWriterAdaptor<ColorCesiumWriter, Reference>(
                this, (me, value) => me.WriteReference(value));
        }

    }
}
