// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"
#include "vector"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>PolylineMaterial</code> to a <see cref="CesiumOutputStream" />.  A <code>PolylineMaterial</code> defines how a polyline is colored or shaded.
    /// </summary>
    class PolylineMaterialCesiumWriter : CesiumPropertyWriter<PolylineMaterialCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>solidColor</code> property.
            /// </summary>
            const std::string SolidColorPropertyName = "solidColor";

            /// <summary>
            /// The name of the <code>polylineOutline</code> property.
            /// </summary>
            const std::string PolylineOutlinePropertyName = "polylineOutline";

            /// <summary>
            /// The name of the <code>polylineGlow</code> property.
            /// </summary>
            const std::string PolylineGlowPropertyName = "polylineGlow";

        private:
            const SolidColorMaterialCesiumWriter m_solidColor = SolidColorMaterialCesiumWriter(SolidColorPropertyName);
            const PolylineOutlineMaterialCesiumWriter m_polylineOutline = PolylineOutlineMaterialCesiumWriter(PolylineOutlinePropertyName);
            const PolylineGlowMaterialCesiumWriter m_polylineGlow = PolylineGlowMaterialCesiumWriter(PolylineGlowPropertyName);

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            PolylineMaterialCesiumWriter(string propertyName)
                : base(propertyName)
            {
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            PolylineMaterialCesiumWriter(const PolylineMaterialCesiumWriter& existingInstance)
                : base(existingInstance)
            {
            }

        /// <summary>
        /// Gets the writer for the <code>solidColor</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>solidColor</code> property defines colors the line with a solid color, which may be translucent.
        /// </summary>
        public SolidColorMaterialCesiumWriter SolidColorWriter
        {
            get { return m_solidColor.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>solidColor</code> property.  The <code>solidColor</code> property defines colors the line with a solid color, which may be translucent.
        /// </summary>
        public SolidColorMaterialCesiumWriter OpenSolidColorProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(SolidColorWriter);
        }

        /// <summary>
        /// Gets the writer for the <code>polylineOutline</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>polylineOutline</code> property defines colors the line with a color and outline.
        /// </summary>
        public PolylineOutlineMaterialCesiumWriter PolylineOutlineWriter
        {
            get { return m_polylineOutline.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>polylineOutline</code> property.  The <code>polylineOutline</code> property defines colors the line with a color and outline.
        /// </summary>
        public PolylineOutlineMaterialCesiumWriter OpenPolylineOutlineProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(PolylineOutlineWriter);
        }

        /// <summary>
        /// Gets the writer for the <code>polylineGlow</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>polylineGlow</code> property defines colors the line with a glowing color.
        /// </summary>
        public PolylineGlowMaterialCesiumWriter PolylineGlowWriter
        {
            get { return m_polylineGlow.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>polylineGlow</code> property.  The <code>polylineGlow</code> property defines colors the line with a glowing color.
        /// </summary>
        public PolylineGlowMaterialCesiumWriter OpenPolylineGlowProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(PolylineGlowWriter);
        }

    }
}
