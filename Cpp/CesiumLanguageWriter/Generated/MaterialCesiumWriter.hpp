// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"
#include "System"
#include "System.Drawing"
#include "vector"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>Material</code> to a <see cref="CesiumOutputStream" />.  A <code>Material</code> defines how a surface is colored or shaded.
    /// </summary>
    class MaterialCesiumWriter : CesiumPropertyWriter<MaterialCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>solidColor</code> property.
            /// </summary>
            const std::string SolidColorPropertyName = "solidColor";

            /// <summary>
            /// The name of the <code>image</code> property.
            /// </summary>
            const std::string ImagePropertyName = "image";

            /// <summary>
            /// The name of the <code>grid</code> property.
            /// </summary>
            const std::string GridPropertyName = "grid";

            /// <summary>
            /// The name of the <code>stripe</code> property.
            /// </summary>
            const std::string StripePropertyName = "stripe";

        private:
            const SolidColorMaterialCesiumWriter m_solidColor = SolidColorMaterialCesiumWriter(SolidColorPropertyName);
            const ImageMaterialCesiumWriter m_image = ImageMaterialCesiumWriter(ImagePropertyName);
            const GridMaterialCesiumWriter m_grid = GridMaterialCesiumWriter(GridPropertyName);
            const StripeMaterialCesiumWriter m_stripe = StripeMaterialCesiumWriter(StripePropertyName);

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            MaterialCesiumWriter(string propertyName)
                : base(propertyName)
            {
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            MaterialCesiumWriter(const MaterialCesiumWriter& existingInstance)
                : base(existingInstance)
            {
            }

        /// <summary>
        /// Gets the writer for the <code>solidColor</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>solidColor</code> property defines fills the surface with a solid color, which may be translucent.
        /// </summary>
        public SolidColorMaterialCesiumWriter SolidColorWriter
        {
            get { return m_solidColor.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>solidColor</code> property.  The <code>solidColor</code> property defines fills the surface with a solid color, which may be translucent.
        /// </summary>
        public SolidColorMaterialCesiumWriter OpenSolidColorProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(SolidColorWriter);
        }

        /// <summary>
        /// Gets the writer for the <code>image</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>image</code> property defines fills the surface with an image.
        /// </summary>
        public ImageMaterialCesiumWriter ImageWriter
        {
            get { return m_image.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>image</code> property.  The <code>image</code> property defines fills the surface with an image.
        /// </summary>
        public ImageMaterialCesiumWriter OpenImageProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(ImageWriter);
        }

        /// <summary>
        /// Gets the writer for the <code>grid</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>grid</code> property defines fills the surface with a grid.
        /// </summary>
        public GridMaterialCesiumWriter GridWriter
        {
            get { return m_grid.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>grid</code> property.  The <code>grid</code> property defines fills the surface with a grid.
        /// </summary>
        public GridMaterialCesiumWriter OpenGridProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(GridWriter);
        }

        /// <summary>
        /// Gets the writer for the <code>stripe</code> property.  The returned instance must be opened by calling the <see cref="CesiumElementWriter.Open"/> method before it can be used for writing.  The <code>stripe</code> property defines fills the surface with alternating colors.
        /// </summary>
        public StripeMaterialCesiumWriter StripeWriter
        {
            get { return m_stripe.Value; }
        }

        /// <summary>
        /// Opens and returns the writer for the <code>stripe</code> property.  The <code>stripe</code> property defines fills the surface with alternating colors.
        /// </summary>
        public StripeMaterialCesiumWriter OpenStripeProperty()
        {
            OpenIntervalIfNecessary();
            return OpenAndReturn(StripeWriter);
        }

    }
}
