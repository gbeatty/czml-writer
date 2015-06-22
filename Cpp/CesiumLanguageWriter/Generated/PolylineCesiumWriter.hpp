// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"
#include "vector"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>Polyline</code> to a <see cref="CesiumOutputStream" />.  A <code>Polyline</code> a polyline, which is a line in the scene composed of multiple segments.
    /// </summary>
    class PolylineCesiumWriter : CesiumPropertyWriter<PolylineCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>positions</code> property.
            /// </summary>
            const std::string PositionsPropertyName = "positions";

            /// <summary>
            /// The name of the <code>show</code> property.
            /// </summary>
            const std::string ShowPropertyName = "show";

            /// <summary>
            /// The name of the <code>material</code> property.
            /// </summary>
            const std::string MaterialPropertyName = "material";

            /// <summary>
            /// The name of the <code>width</code> property.
            /// </summary>
            const std::string WidthPropertyName = "width";

            /// <summary>
            /// The name of the <code>followSurface</code> property.
            /// </summary>
            const std::string FollowSurfacePropertyName = "followSurface";

        private:
            const PositionListCesiumWriter m_positions = PositionListCesiumWriter(PositionsPropertyName);
            const BooleanCesiumWriter m_show = BooleanCesiumWriter(ShowPropertyName);
            const PolylineMaterialCesiumWriter m_material = PolylineMaterialCesiumWriter(MaterialPropertyName);
            const DoubleCesiumWriter m_width = DoubleCesiumWriter(WidthPropertyName);
            const BooleanCesiumWriter m_followSurface = BooleanCesiumWriter(FollowSurfacePropertyName);

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            PolylineCesiumWriter(string propertyName)
                : base(propertyName)
            {
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            PolylineCesiumWriter(const PolylineCesiumWriter& existingInstance)
                : base(existingInstance)
            {
            }

        /// <summary>
        /// Gets the writer for the <code>positions</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>positions</code> property defines the array of positions defining the polyline as a line strip.
        /// </summary>
        public PositionListCesiumWriter PositionsWriter
        {
            get { return m_positions.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>positions</code> property.  The <code>positions</code> property defines the array of positions defining the polyline as a line strip.
        /// </summary>
        public PositionListCesiumWriter OpenPositionsProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(PositionsWriter);
        }

        /// <summary>
        /// Writes a value for the <code>positions</code> property as a <code>cartesian</code> value.  The <code>positions</code> property specifies the array of positions defining the polyline as a line strip.
        /// </summary>
        /// <param name="values">The values.</param>
        public void WritePositionsProperty(IEnumerable<Cartesian> values)
        {
            using (var writer = OpenPositionsProperty())
            {
                writer.WriteCartesian(values);
            }
        }

        /// <summary>
        /// Writes a value for the <code>positions</code> property as a <code>cartographicRadians</code> value.  The <code>positions</code> property specifies the array of positions defining the polyline as a line strip.
        /// </summary>
        /// <param name="values">The values.</param>
        public void WritePositionsPropertyCartographicRadians(IEnumerable<Cartographic> values)
        {
            using (var writer = OpenPositionsProperty())
            {
                writer.WriteCartographicRadians(values);
            }
        }

        /// <summary>
        /// Writes a value for the <code>positions</code> property as a <code>cartographicDegrees</code> value.  The <code>positions</code> property specifies the array of positions defining the polyline as a line strip.
        /// </summary>
        /// <param name="values">The values.</param>
        public void WritePositionsPropertyCartographicDegrees(IEnumerable<Cartographic> values)
        {
            using (var writer = OpenPositionsProperty())
            {
                writer.WriteCartographicDegrees(values);
            }
        }

        /// <summary>
        /// Writes a value for the <code>positions</code> property as a <code>references</code> value.  The <code>positions</code> property specifies the array of positions defining the polyline as a line strip.
        /// </summary>
        /// <param name="references">The list of references.</param>
        public void WritePositionsPropertyReferences(IEnumerable<Reference> references)
        {
            using (var writer = OpenPositionsProperty())
            {
                writer.WriteReferences(references);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>show</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>show</code> property defines whether or not the polyline is shown.
        /// </summary>
        public BooleanCesiumWriter ShowWriter
        {
            get { return m_show.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>show</code> property.  The <code>show</code> property defines whether or not the polyline is shown.
        /// </summary>
        public BooleanCesiumWriter OpenShowProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ShowWriter);
        }

        /// <summary>
        /// Writes a value for the <code>show</code> property as a <code>boolean</code> value.  The <code>show</code> property specifies whether or not the polyline is shown.
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
        /// Gets the writer for the <code>material</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>material</code> property defines the material to use to draw the polyline.
        /// </summary>
        public PolylineMaterialCesiumWriter MaterialWriter
        {
            get { return m_material.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>material</code> property.  The <code>material</code> property defines the material to use to draw the polyline.
        /// </summary>
        public PolylineMaterialCesiumWriter OpenMaterialProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(MaterialWriter);
        }

        /// <summary>
        /// Gets the writer for the <code>width</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>width</code> property defines the width of the polyline.
        /// </summary>
        public DoubleCesiumWriter WidthWriter
        {
            get { return m_width.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>width</code> property.  The <code>width</code> property defines the width of the polyline.
        /// </summary>
        public DoubleCesiumWriter OpenWidthProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(WidthWriter);
        }

        /// <summary>
        /// Writes a value for the <code>width</code> property as a <code>number</code> value.  The <code>width</code> property specifies the width of the polyline.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteWidthProperty(double value)
        {
            using (var writer = OpenWidthProperty())
            {
                writer.WriteNumber(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>width</code> property as a <code>number</code> value.  The <code>width</code> property specifies the width of the polyline.
        /// </summary>
        /// <param name="dates">The dates at which the value is specified.</param>
        /// <param name="values">The value corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteWidthProperty(IList<JulianDate> dates, IList<double> values, int startIndex, int length)
        {
            using (var writer = OpenWidthProperty())
            {
                writer.WriteNumber(dates, values, startIndex, length);
            }
        }

        /// <summary>
        /// Writes a value for the <code>width</code> property as a <code>reference</code> value.  The <code>width</code> property specifies the width of the polyline.
        /// </summary>
        /// <param name="value">The reference.</param>
        public void WriteWidthPropertyReference(Reference value)
        {
            using (var writer = OpenWidthProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>width</code> property as a <code>reference</code> value.  The <code>width</code> property specifies the width of the polyline.
        /// </summary>
        /// <param name="value">The earliest date of the interval.</param>
        public void WriteWidthPropertyReference(string value)
        {
            using (var writer = OpenWidthProperty())
            {
                writer.WriteReference(value);
            }
        }

        /// <summary>
        /// Writes a value for the <code>width</code> property as a <code>reference</code> value.  The <code>width</code> property specifies the width of the polyline.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyName">The property on the referenced object.</param>
        public void WriteWidthPropertyReference(string identifier, string propertyName)
        {
            using (var writer = OpenWidthProperty())
            {
                writer.WriteReference(identifier, propertyName);
            }
        }

        /// <summary>
        /// Writes a value for the <code>width</code> property as a <code>reference</code> value.  The <code>width</code> property specifies the width of the polyline.
        /// </summary>
        /// <param name="identifier">The identifier of the object which contains the referenced property.</param>
        /// <param name="propertyNames">The hierarchy of properties to be indexed on the referenced object.</param>
        public void WriteWidthPropertyReference(string identifier, string[] propertyNames)
        {
            using (var writer = OpenWidthProperty())
            {
                writer.WriteReference(identifier, propertyNames);
            }
        }

        /// <summary>
        /// Gets the writer for the <code>followSurface</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>followSurface</code> property defines whether or not the positions are connected as great arcs (the default) or as straight lines.
        /// </summary>
        public BooleanCesiumWriter FollowSurfaceWriter
        {
            get { return m_followSurface.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>followSurface</code> property.  The <code>followSurface</code> property defines whether or not the positions are connected as great arcs (the default) or as straight lines.
        /// </summary>
        public BooleanCesiumWriter OpenFollowSurfaceProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(FollowSurfaceWriter);
        }

        /// <summary>
        /// Writes a value for the <code>followSurface</code> property as a <code>boolean</code> value.  The <code>followSurface</code> property specifies whether or not the positions are connected as great arcs (the default) or as straight lines.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteFollowSurfaceProperty(bool value)
        {
            using (var writer = OpenFollowSurfaceProperty())
            {
                writer.WriteBoolean(value);
            }
        }

    }
}
