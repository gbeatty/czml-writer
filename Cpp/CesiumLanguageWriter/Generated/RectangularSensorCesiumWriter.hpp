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
    /// Writes a <code>RectangularSensor</code> to a <see cref="CesiumOutputStream" />.  A <code>RectangularSensor</code> a rectangular pyramid sensor volume taking into account occlusion of an ellipsoid, i.e., the globe.
    /// </summary>
    class RectangularSensorCesiumWriter : CesiumPropertyWriter<RectangularSensorCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>show</code> property.
            /// </summary>
            const std::string ShowPropertyName = "show";

            /// <summary>
            /// The name of the <code>xHalfAngle</code> property.
            /// </summary>
            const std::string XHalfAnglePropertyName = "xHalfAngle";

            /// <summary>
            /// The name of the <code>yHalfAngle</code> property.
            /// </summary>
            const std::string YHalfAnglePropertyName = "yHalfAngle";

            /// <summary>
            /// The name of the <code>radius</code> property.
            /// </summary>
            const std::string RadiusPropertyName = "radius";

            /// <summary>
            /// The name of the <code>showIntersection</code> property.
            /// </summary>
            const std::string ShowIntersectionPropertyName = "showIntersection";

            /// <summary>
            /// The name of the <code>intersectionColor</code> property.
            /// </summary>
            const std::string IntersectionColorPropertyName = "intersectionColor";

            /// <summary>
            /// The name of the <code>intersectionWidth</code> property.
            /// </summary>
            const std::string IntersectionWidthPropertyName = "intersectionWidth";

            /// <summary>
            /// The name of the <code>showLateralSurfaces</code> property.
            /// </summary>
            const std::string ShowLateralSurfacesPropertyName = "showLateralSurfaces";

            /// <summary>
            /// The name of the <code>lateralSurfaceMaterial</code> property.
            /// </summary>
            const std::string LateralSurfaceMaterialPropertyName = "lateralSurfaceMaterial";

            /// <summary>
            /// The name of the <code>showEllipsoidSurfaces</code> property.
            /// </summary>
            const std::string ShowEllipsoidSurfacesPropertyName = "showEllipsoidSurfaces";

            /// <summary>
            /// The name of the <code>ellipsoidSurfaceMaterial</code> property.
            /// </summary>
            const std::string EllipsoidSurfaceMaterialPropertyName = "ellipsoidSurfaceMaterial";

            /// <summary>
            /// The name of the <code>showEllipsoidHorizonSurfaces</code> property.
            /// </summary>
            const std::string ShowEllipsoidHorizonSurfacesPropertyName = "showEllipsoidHorizonSurfaces";

            /// <summary>
            /// The name of the <code>ellipsoidHorizonSurfaceMaterial</code> property.
            /// </summary>
            const std::string EllipsoidHorizonSurfaceMaterialPropertyName = "ellipsoidHorizonSurfaceMaterial";

            /// <summary>
            /// The name of the <code>showDomeSurfaces</code> property.
            /// </summary>
            const std::string ShowDomeSurfacesPropertyName = "showDomeSurfaces";

            /// <summary>
            /// The name of the <code>domeSurfaceMaterial</code> property.
            /// </summary>
            const std::string DomeSurfaceMaterialPropertyName = "domeSurfaceMaterial";

            /// <summary>
            /// The name of the <code>portionToDisplay</code> property.
            /// </summary>
            const std::string PortionToDisplayPropertyName = "portionToDisplay";

        private:
            const BooleanCesiumWriter m_show = BooleanCesiumWriter(ShowPropertyName);
            const DoubleCesiumWriter m_xHalfAngle = DoubleCesiumWriter(XHalfAnglePropertyName);
            const DoubleCesiumWriter m_yHalfAngle = DoubleCesiumWriter(YHalfAnglePropertyName);
            const DoubleCesiumWriter m_radius = DoubleCesiumWriter(RadiusPropertyName);
            const BooleanCesiumWriter m_showIntersection = BooleanCesiumWriter(ShowIntersectionPropertyName);
            const ColorCesiumWriter m_intersectionColor = ColorCesiumWriter(IntersectionColorPropertyName);
            const DoubleCesiumWriter m_intersectionWidth = DoubleCesiumWriter(IntersectionWidthPropertyName);
            const BooleanCesiumWriter m_showLateralSurfaces = BooleanCesiumWriter(ShowLateralSurfacesPropertyName);
            const MaterialCesiumWriter m_lateralSurfaceMaterial = MaterialCesiumWriter(LateralSurfaceMaterialPropertyName);
            const BooleanCesiumWriter m_showEllipsoidSurfaces = BooleanCesiumWriter(ShowEllipsoidSurfacesPropertyName);
            const MaterialCesiumWriter m_ellipsoidSurfaceMaterial = MaterialCesiumWriter(EllipsoidSurfaceMaterialPropertyName);
            const BooleanCesiumWriter m_showEllipsoidHorizonSurfaces = BooleanCesiumWriter(ShowEllipsoidHorizonSurfacesPropertyName);
            const MaterialCesiumWriter m_ellipsoidHorizonSurfaceMaterial = MaterialCesiumWriter(EllipsoidHorizonSurfaceMaterialPropertyName);
            const BooleanCesiumWriter m_showDomeSurfaces = BooleanCesiumWriter(ShowDomeSurfacesPropertyName);
            const MaterialCesiumWriter m_domeSurfaceMaterial = MaterialCesiumWriter(DomeSurfaceMaterialPropertyName);
            const SensorVolumePortionToDisplayCesiumWriter m_portionToDisplay = SensorVolumePortionToDisplayCesiumWriter(PortionToDisplayPropertyName);

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            RectangularSensorCesiumWriter(string propertyName)
                : base(propertyName)
            {
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            RectangularSensorCesiumWriter(const RectangularSensorCesiumWriter& existingInstance)
                : base(existingInstance)
            {
            }

        /// <summary>
        /// Gets the writer for the <code>show</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>show</code> property defines whether or not the pyramid is shown.
        /// </summary>
        public BooleanCesiumWriter ShowWriter
        {
            get { return m_show.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>show</code> property.  The <code>show</code> property defines whether or not the pyramid is shown.
        /// </summary>
        public BooleanCesiumWriter OpenShowProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ShowWriter);
        }

        /// <summary>
        /// Writes a value for the <code>show</code> property as a <code>boolean</code> value.  The <code>show</code> property specifies whether or not the pyramid is shown.
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
        /// Gets the writer for the <code>xHalfAngle</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>xHalfAngle</code> property defines the X half angle.
        /// </summary>
        public DoubleCesiumWriter XHalfAngleWriter
        {
            get { return m_xHalfAngle.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>xHalfAngle</code> property.  The <code>xHalfAngle</code> property defines the X half angle.
        /// </summary>
        public DoubleCesiumWriter OpenXHalfAngleProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(XHalfAngleWriter);
        }

        /// <summary>
        /// Writes a value for the <code>xHalfAngle</code> property as a <code>number</code> value.  The <code>xHalfAngle</code> property specifies the X half angle.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteXHalfAngleProperty(double value)
        {
            using (var writer = OpenXHalfAngleProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>xHalfAngle</code> property as a <code>number</code> value.  The <code>xHalfAngle</code> property specifies the X half angle.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteXHalfAngleProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenXHalfAngleProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>xHalfAngle</code> property as a <code>reference</code> value.  The <code>xHalfAngle</code> property specifies the X half angle.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteXHalfAnglePropertyReference(Reference value)
        {
            using (var writer = OpenXHalfAngleProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>xHalfAngle</code> property as a <code>reference</code> value.  The <code>xHalfAngle</code> property specifies the X half angle.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteXHalfAnglePropertyReference(string value)
        {
            using (var writer = OpenXHalfAngleProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>xHalfAngle</code> property as a <code>reference</code> value.  The <code>xHalfAngle</code> property specifies the X half angle.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteXHalfAnglePropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenXHalfAngleProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>xHalfAngle</code> property as a <code>reference</code> value.  The <code>xHalfAngle</code> property specifies the X half angle.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteXHalfAnglePropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenXHalfAngleProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>yHalfAngle</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>yHalfAngle</code> property defines the Y half angle.
        /// </summary>
        public DoubleCesiumWriter YHalfAngleWriter
        {
            get { return m_yHalfAngle.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>yHalfAngle</code> property.  The <code>yHalfAngle</code> property defines the Y half angle.
        /// </summary>
        public DoubleCesiumWriter OpenYHalfAngleProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(YHalfAngleWriter);
        }

        /// <summary>
        /// Writes a value for the <code>yHalfAngle</code> property as a <code>number</code> value.  The <code>yHalfAngle</code> property specifies the Y half angle.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteYHalfAngleProperty(double value)
        {
            using (var writer = OpenYHalfAngleProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>yHalfAngle</code> property as a <code>number</code> value.  The <code>yHalfAngle</code> property specifies the Y half angle.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteYHalfAngleProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenYHalfAngleProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>yHalfAngle</code> property as a <code>reference</code> value.  The <code>yHalfAngle</code> property specifies the Y half angle.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteYHalfAnglePropertyReference(Reference value)
        {
            using (var writer = OpenYHalfAngleProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>yHalfAngle</code> property as a <code>reference</code> value.  The <code>yHalfAngle</code> property specifies the Y half angle.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteYHalfAnglePropertyReference(string value)
        {
            using (var writer = OpenYHalfAngleProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>yHalfAngle</code> property as a <code>reference</code> value.  The <code>yHalfAngle</code> property specifies the Y half angle.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteYHalfAnglePropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenYHalfAngleProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>yHalfAngle</code> property as a <code>reference</code> value.  The <code>yHalfAngle</code> property specifies the Y half angle.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteYHalfAnglePropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenYHalfAngleProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>radius</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>radius</code> property defines the radial limit of the pyramid.
        /// </summary>
        public DoubleCesiumWriter RadiusWriter
        {
            get { return m_radius.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>radius</code> property.  The <code>radius</code> property defines the radial limit of the pyramid.
        /// </summary>
        public DoubleCesiumWriter OpenRadiusProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(RadiusWriter);
        }

        /// <summary>
        /// Writes a value for the <code>radius</code> property as a <code>number</code> value.  The <code>radius</code> property specifies the radial limit of the pyramid.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteRadiusProperty(double value)
        {
            using (var writer = OpenRadiusProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>radius</code> property as a <code>number</code> value.  The <code>radius</code> property specifies the radial limit of the pyramid.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteRadiusProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenRadiusProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>radius</code> property as a <code>reference</code> value.  The <code>radius</code> property specifies the radial limit of the pyramid.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteRadiusPropertyReference(Reference value)
        {
            using (var writer = OpenRadiusProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>radius</code> property as a <code>reference</code> value.  The <code>radius</code> property specifies the radial limit of the pyramid.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteRadiusPropertyReference(string value)
        {
            using (var writer = OpenRadiusProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>radius</code> property as a <code>reference</code> value.  The <code>radius</code> property specifies the radial limit of the pyramid.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteRadiusPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenRadiusProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>radius</code> property as a <code>reference</code> value.  The <code>radius</code> property specifies the radial limit of the pyramid.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteRadiusPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenRadiusProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>showIntersection</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>showIntersection</code> property defines whether or not the intersection of the pyramid with the Earth is shown.
        /// </summary>
        public BooleanCesiumWriter ShowIntersectionWriter
        {
            get { return m_showIntersection.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>showIntersection</code> property.  The <code>showIntersection</code> property defines whether or not the intersection of the pyramid with the Earth is shown.
        /// </summary>
        public BooleanCesiumWriter OpenShowIntersectionProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ShowIntersectionWriter);
        }

        /// <summary>
        /// Writes a value for the <code>showIntersection</code> property as a <code>boolean</code> value.  The <code>showIntersection</code> property specifies whether or not the intersection of the pyramid with the Earth is shown.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteShowIntersectionProperty(bool value)
        {
            using (var writer = OpenShowIntersectionProperty())
            {
                writer.WriteBoolean(value);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>intersectionColor</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>intersectionColor</code> property defines the color of the intersection of the pyramid with the Earth.
        /// </summary>
        public ColorCesiumWriter IntersectionColorWriter
        {
            get { return m_intersectionColor.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>intersectionColor</code> property.  The <code>intersectionColor</code> property defines the color of the intersection of the pyramid with the Earth.
        /// </summary>
        public ColorCesiumWriter OpenIntersectionColorProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(IntersectionColorWriter);
        }

        /// <summary>
        /// Writes a value for the <code>intersectionColor</code> property as a <code>rgba</code> value.  The <code>intersectionColor</code> property specifies the color of the intersection of the pyramid with the Earth.
        /// </summary>
        /// <param name="color">The color.</param>
        public void WriteIntersectionColorProperty(Color color)
        {
            using (var writer = OpenIntersectionColorProperty())
            {
                writer.WriteRgba(color);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionColor</code> property as a <code>rgba</code> value.  The <code>intersectionColor</code> property specifies the color of the intersection of the pyramid with the Earth.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 255.</param>
        /// <param name="green">The green component in the range 0 to 255.</param>
        /// <param name="blue">The blue component in the range 0 to 255.</param>
        /// <param name="alpha">The alpha component in the range 0 to 255.</param>
        public void WriteIntersectionColorProperty(int red, int green, int blue, int alpha)
        {
            using (var writer = OpenIntersectionColorProperty())
            {
                writer.WriteRgba(red, green, blue, alpha);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionColor</code> property as a <code>rgba</code> value.  The <code>intersectionColor</code> property specifies the color of the intersection of the pyramid with the Earth.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="colors">The color corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `colors` collection.</param>
        /// <param name="length">The number of elements to use from the `colors` collection.</param>
        public void WriteIntersectionColorProperty(IList<JulianDate> dates, IList<Color> colors, int startIndex, int length)
        {
            using (var writer = OpenIntersectionColorProperty())
            {
                writer.WriteRgba(dates, colors, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionColor</code> property as a <code>rgbaf</code> value.  The <code>intersectionColor</code> property specifies the color of the intersection of the pyramid with the Earth.
        /// </summary>
        /// <param name="red">The red component in the range 0 to 1.0.</param>
        /// <param name="green">The green component in the range 0 to 1.0.</param>
        /// <param name="blue">The blue component in the range 0 to 1.0.</param>
        /// <param name="alpha">The alpha component in the range 0 to 1.0.</param>
        public void WriteIntersectionColorPropertyRgbaf(float red, float green, float blue, float alpha)
        {
            using (var writer = OpenIntersectionColorProperty())
            {
                writer.WriteRgbaf(red, green, blue, alpha);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionColor</code> property as a <code>reference</code> value.  The <code>intersectionColor</code> property specifies the color of the intersection of the pyramid with the Earth.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteIntersectionColorPropertyReference(Reference value)
        {
            using (var writer = OpenIntersectionColorProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionColor</code> property as a <code>reference</code> value.  The <code>intersectionColor</code> property specifies the color of the intersection of the pyramid with the Earth.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteIntersectionColorPropertyReference(string value)
        {
            using (var writer = OpenIntersectionColorProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionColor</code> property as a <code>reference</code> value.  The <code>intersectionColor</code> property specifies the color of the intersection of the pyramid with the Earth.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteIntersectionColorPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenIntersectionColorProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionColor</code> property as a <code>reference</code> value.  The <code>intersectionColor</code> property specifies the color of the intersection of the pyramid with the Earth.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteIntersectionColorPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenIntersectionColorProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>intersectionWidth</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>intersectionWidth</code> property defines the width of the intersection in pixels.
        /// </summary>
        public DoubleCesiumWriter IntersectionWidthWriter
        {
            get { return m_intersectionWidth.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>intersectionWidth</code> property.  The <code>intersectionWidth</code> property defines the width of the intersection in pixels.
        /// </summary>
        public DoubleCesiumWriter OpenIntersectionWidthProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(IntersectionWidthWriter);
        }

        /// <summary>
        /// Writes a value for the <code>intersectionWidth</code> property as a <code>number</code> value.  The <code>intersectionWidth</code> property specifies the width of the intersection in pixels.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteIntersectionWidthProperty(double value)
        {
            using (var writer = OpenIntersectionWidthProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionWidth</code> property as a <code>number</code> value.  The <code>intersectionWidth</code> property specifies the width of the intersection in pixels.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteIntersectionWidthProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenIntersectionWidthProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionWidth</code> property as a <code>reference</code> value.  The <code>intersectionWidth</code> property specifies the width of the intersection in pixels.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteIntersectionWidthPropertyReference(Reference value)
        {
            using (var writer = OpenIntersectionWidthProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionWidth</code> property as a <code>reference</code> value.  The <code>intersectionWidth</code> property specifies the width of the intersection in pixels.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteIntersectionWidthPropertyReference(string value)
        {
            using (var writer = OpenIntersectionWidthProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionWidth</code> property as a <code>reference</code> value.  The <code>intersectionWidth</code> property specifies the width of the intersection in pixels.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteIntersectionWidthPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenIntersectionWidthProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>intersectionWidth</code> property as a <code>reference</code> value.  The <code>intersectionWidth</code> property specifies the width of the intersection in pixels.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteIntersectionWidthPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenIntersectionWidthProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>showLateralSurfaces</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>showLateralSurfaces</code> property defines whether or not the intersections of the pyramid with the earth are shown.
        /// </summary>
        public BooleanCesiumWriter ShowLateralSurfacesWriter
        {
            get { return m_showLateralSurfaces.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>showLateralSurfaces</code> property.  The <code>showLateralSurfaces</code> property defines whether or not the intersections of the pyramid with the earth are shown.
        /// </summary>
        public BooleanCesiumWriter OpenShowLateralSurfacesProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ShowLateralSurfacesWriter);
        }

        /// <summary>
        /// Writes a value for the <code>showLateralSurfaces</code> property as a <code>boolean</code> value.  The <code>showLateralSurfaces</code> property specifies whether or not the intersections of the pyramid with the earth are shown.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteShowLateralSurfacesProperty(bool value)
        {
            using (var writer = OpenShowLateralSurfacesProperty())
            {
                writer.WriteBoolean(value);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>lateralSurfaceMaterial</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>lateralSurfaceMaterial</code> property defines whether or not lateral surfaces are shown.
        /// </summary>
        public MaterialCesiumWriter LateralSurfaceMaterialWriter
        {
            get { return m_lateralSurfaceMaterial.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>lateralSurfaceMaterial</code> property.  The <code>lateralSurfaceMaterial</code> property defines whether or not lateral surfaces are shown.
        /// </summary>
        public MaterialCesiumWriter OpenLateralSurfaceMaterialProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(LateralSurfaceMaterialWriter);
        }

        /// <summary>
        /// Gets the writer for the <code>showEllipsoidSurfaces</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>showEllipsoidSurfaces</code> property defines whether or not ellipsoid surfaces are shown.
        /// </summary>
        public BooleanCesiumWriter ShowEllipsoidSurfacesWriter
        {
            get { return m_showEllipsoidSurfaces.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>showEllipsoidSurfaces</code> property.  The <code>showEllipsoidSurfaces</code> property defines whether or not ellipsoid surfaces are shown.
        /// </summary>
        public BooleanCesiumWriter OpenShowEllipsoidSurfacesProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ShowEllipsoidSurfacesWriter);
        }

        /// <summary>
        /// Writes a value for the <code>showEllipsoidSurfaces</code> property as a <code>boolean</code> value.  The <code>showEllipsoidSurfaces</code> property specifies whether or not ellipsoid surfaces are shown.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteShowEllipsoidSurfacesProperty(bool value)
        {
            using (var writer = OpenShowEllipsoidSurfacesProperty())
            {
                writer.WriteBoolean(value);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>ellipsoidSurfaceMaterial</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>ellipsoidSurfaceMaterial</code> property defines the material to use for the pyramid's ellipsoid surface.
        /// </summary>
        public MaterialCesiumWriter EllipsoidSurfaceMaterialWriter
        {
            get { return m_ellipsoidSurfaceMaterial.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>ellipsoidSurfaceMaterial</code> property.  The <code>ellipsoidSurfaceMaterial</code> property defines the material to use for the pyramid's ellipsoid surface.
        /// </summary>
        public MaterialCesiumWriter OpenEllipsoidSurfaceMaterialProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(EllipsoidSurfaceMaterialWriter);
        }

        /// <summary>
        /// Gets the writer for the <code>showEllipsoidHorizonSurfaces</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>showEllipsoidHorizonSurfaces</code> property defines whether or not ellipsoid horizon surfaces are shown.
        /// </summary>
        public BooleanCesiumWriter ShowEllipsoidHorizonSurfacesWriter
        {
            get { return m_showEllipsoidHorizonSurfaces.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>showEllipsoidHorizonSurfaces</code> property.  The <code>showEllipsoidHorizonSurfaces</code> property defines whether or not ellipsoid horizon surfaces are shown.
        /// </summary>
        public BooleanCesiumWriter OpenShowEllipsoidHorizonSurfacesProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ShowEllipsoidHorizonSurfacesWriter);
        }

        /// <summary>
        /// Writes a value for the <code>showEllipsoidHorizonSurfaces</code> property as a <code>boolean</code> value.  The <code>showEllipsoidHorizonSurfaces</code> property specifies whether or not ellipsoid horizon surfaces are shown.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteShowEllipsoidHorizonSurfacesProperty(bool value)
        {
            using (var writer = OpenShowEllipsoidHorizonSurfacesProperty())
            {
                writer.WriteBoolean(value);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>ellipsoidHorizonSurfaceMaterial</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>ellipsoidHorizonSurfaceMaterial</code> property defines the material to use for the pyramid's ellipsoid horizon surface.
        /// </summary>
        public MaterialCesiumWriter EllipsoidHorizonSurfaceMaterialWriter
        {
            get { return m_ellipsoidHorizonSurfaceMaterial.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>ellipsoidHorizonSurfaceMaterial</code> property.  The <code>ellipsoidHorizonSurfaceMaterial</code> property defines the material to use for the pyramid's ellipsoid horizon surface.
        /// </summary>
        public MaterialCesiumWriter OpenEllipsoidHorizonSurfaceMaterialProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(EllipsoidHorizonSurfaceMaterialWriter);
        }

        /// <summary>
        /// Gets the writer for the <code>showDomeSurfaces</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>showDomeSurfaces</code> property defines whether or not dome surfaces are shown.
        /// </summary>
        public BooleanCesiumWriter ShowDomeSurfacesWriter
        {
            get { return m_showDomeSurfaces.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>showDomeSurfaces</code> property.  The <code>showDomeSurfaces</code> property defines whether or not dome surfaces are shown.
        /// </summary>
        public BooleanCesiumWriter OpenShowDomeSurfacesProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ShowDomeSurfacesWriter);
        }

        /// <summary>
        /// Writes a value for the <code>showDomeSurfaces</code> property as a <code>boolean</code> value.  The <code>showDomeSurfaces</code> property specifies whether or not dome surfaces are shown.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteShowDomeSurfacesProperty(bool value)
        {
            using (var writer = OpenShowDomeSurfacesProperty())
            {
                writer.WriteBoolean(value);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>domeSurfaceMaterial</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>domeSurfaceMaterial</code> property defines the material to use for the pyramid's dome.
        /// </summary>
        public MaterialCesiumWriter DomeSurfaceMaterialWriter
        {
            get { return m_domeSurfaceMaterial.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>domeSurfaceMaterial</code> property.  The <code>domeSurfaceMaterial</code> property defines the material to use for the pyramid's dome.
        /// </summary>
        public MaterialCesiumWriter OpenDomeSurfaceMaterialProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(DomeSurfaceMaterialWriter);
        }

        /// <summary>
        /// Gets the writer for the <code>portionToDisplay</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>portionToDisplay</code> property defines indicates what part of a sensor should be displayed.
        /// </summary>
        public SensorVolumePortionToDisplayCesiumWriter PortionToDisplayWriter
        {
            get { return m_portionToDisplay.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>portionToDisplay</code> property.  The <code>portionToDisplay</code> property defines indicates what part of a sensor should be displayed.
        /// </summary>
        public SensorVolumePortionToDisplayCesiumWriter OpenPortionToDisplayProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(PortionToDisplayWriter);
        }

        /// <summary>
        /// Writes a value for the <code>portionToDisplay</code> property as a <code>portionToDisplay</code> value.  The <code>portionToDisplay</code> property specifies indicates what part of a sensor should be displayed.
        /// </summary>
        /// <param name="value">The portion of the sensor to display.</param>
        public void WritePortionToDisplayProperty(CesiumSensorVolumePortionToDisplay value)
        {
            using (var writer = OpenPortionToDisplayProperty())
            {
                writer.WritePortionToDisplay(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>portionToDisplay</code> property as a <code>reference</code> value.  The <code>portionToDisplay</code> property specifies indicates what part of a sensor should be displayed.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WritePortionToDisplayPropertyReference(Reference value)
        {
            using (var writer = OpenPortionToDisplayProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>portionToDisplay</code> property as a <code>reference</code> value.  The <code>portionToDisplay</code> property specifies indicates what part of a sensor should be displayed.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WritePortionToDisplayPropertyReference(string value)
        {
            using (var writer = OpenPortionToDisplayProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>portionToDisplay</code> property as a <code>reference</code> value.  The <code>portionToDisplay</code> property specifies indicates what part of a sensor should be displayed.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WritePortionToDisplayPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenPortionToDisplayProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>portionToDisplay</code> property as a <code>reference</code> value.  The <code>portionToDisplay</code> property specifies indicates what part of a sensor should be displayed.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WritePortionToDisplayPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenPortionToDisplayProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

    }
}
