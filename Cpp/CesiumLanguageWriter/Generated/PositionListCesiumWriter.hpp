// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"
#include "vector"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>PositionList</code> to a <see cref="CesiumOutputStream" />.  A <code>PositionList</code> a list of positions.
    /// </summary>
    class PositionListCesiumWriter : CesiumPropertyWriter<PositionListCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>referenceFrame</code> property.
            /// </summary>
            const std::string ReferenceFramePropertyName = "referenceFrame";

            /// <summary>
            /// The name of the <code>cartesian</code> property.
            /// </summary>
            const std::string CartesianPropertyName = "cartesian";

            /// <summary>
            /// The name of the <code>cartographicRadians</code> property.
            /// </summary>
            const std::string CartographicRadiansPropertyName = "cartographicRadians";

            /// <summary>
            /// The name of the <code>cartographicDegrees</code> property.
            /// </summary>
            const std::string CartographicDegreesPropertyName = "cartographicDegrees";

            /// <summary>
            /// The name of the <code>references</code> property.
            /// </summary>
            const std::string ReferencesPropertyName = "references";

        private:
            const ICesiumValuePropertyWriter<IEnumerable<Cartesian>> m_asCartesian;
            const ICesiumValuePropertyWriter<IEnumerable<Cartographic>> m_asCartographicRadians;
            const ICesiumValuePropertyWriter<IEnumerable<Cartographic>> m_asCartographicDegrees;
            const ICesiumValuePropertyWriter<IEnumerable<Reference>> m_asReferences;

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            PositionListCesiumWriter(string propertyName)
                : base(propertyName)
            {
                m_asCartesian = ICesiumValuePropertyWriter<IEnumerable<Cartesian>>(CreateCartesianAdaptor, false);
                m_asCartographicRadians = ICesiumValuePropertyWriter<IEnumerable<Cartographic>>(CreateCartographicRadiansAdaptor, false);
                m_asCartographicDegrees = ICesiumValuePropertyWriter<IEnumerable<Cartographic>>(CreateCartographicDegreesAdaptor, false);
                m_asReferences = ICesiumValuePropertyWriter<IEnumerable<Reference>>(CreateReferencesAdaptor, false);
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            PositionListCesiumWriter(const PositionListCesiumWriter& existingInstance)
                : base(existingInstance)
            {
                m_asCartesian = ICesiumValuePropertyWriter<IEnumerable<Cartesian>>(CreateCartesianAdaptor, false);
                m_asCartographicRadians = ICesiumValuePropertyWriter<IEnumerable<Cartographic>>(CreateCartographicRadiansAdaptor, false);
                m_asCartographicDegrees = ICesiumValuePropertyWriter<IEnumerable<Cartographic>>(CreateCartographicDegreesAdaptor, false);
                m_asReferences = ICesiumValuePropertyWriter<IEnumerable<Reference>>(CreateReferencesAdaptor, false);
            }

        /// <summary>
        /// Writes the <code>referenceFrame</code> property.  The <code>referenceFrame</code> property specifies the reference frame in which cartesian positions are specified. Possible values are "FIXED" and "INERTIAL". In addition, the value of this property can be a hash (#) symbol followed by the ID of another object in the same scope whose "position" and "orientation" properties define the reference frame in which this position is defined.  This property is ignored when specifying position with any type other than cartesian. If this property is not specified, the default reference frame is "FIXED".
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteReferenceFrame(string value)
        {
            const string PropertyName = ReferenceFramePropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            Output.WriteValue(value);
        }

        /// <summary>
        /// Writes the <code>cartesian</code> property.  The <code>cartesian</code> property specifies the list of positions represented as Cartesian `[X, Y, Z, X, Y, Z, ...]` in the meters relative to the `referenceFrame`.
        /// </summary>
        /// <param name="values">The values.</param>
        public void WriteCartesian(IEnumerable<Cartesian> values)
        {
            const string PropertyName = CartesianPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteCartesian3List(Output, values);
        }

        /// <summary>
        /// Writes the <code>cartographicRadians</code> property.  The <code>cartographicRadians</code> property specifies the list of positions represented as WGS 84 `[Longitude, Latitude, Height, Longitude, Latitude, Height, ...]` where longitude and latitude are in radians and height is in meters.
        /// </summary>
        /// <param name="values">The values.</param>
        public void WriteCartographicRadians(IEnumerable<Cartographic> values)
        {
            const string PropertyName = CartographicRadiansPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteCartographicList(Output, values);
        }

        /// <summary>
        /// Writes the <code>cartographicDegrees</code> property.  The <code>cartographicDegrees</code> property specifies the list of positions represented as WGS 84 `[Longitude, Latitude, Height, Longitude, Latitude, Height, ...]` where longitude and latitude are in degrees and height is in meters.
        /// </summary>
        /// <param name="values">The values.</param>
        public void WriteCartographicDegrees(IEnumerable<Cartographic> values)
        {
            const string PropertyName = CartographicDegreesPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteCartographicList(Output, values);
        }

        /// <summary>
        /// Writes the <code>references</code> property.  The <code>references</code> property specifies the list of positions specified as references.  Each reference is to a property that defines a single position, possible as it changes with time.
        /// </summary>
        /// <param name="references">The list of references.</param>
        public void WriteReferences(IEnumerable<Reference> references)
        {
            const string PropertyName = ReferencesPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteReferences(Output, references);
        }

        /// <summary>
        /// Returns a wrapper for this instance that implements <see cref="ICesiumValuePropertyWriter{T}" /> to write a value in <code>Cartesian</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumValuePropertyWriter<IEnumerable<Cartesian>> AsCartesian()
        {
            return m_asCartesian.Value;
        }

        private ICesiumValuePropertyWriter<IEnumerable<Cartesian>> CreateCartesianAdaptor()
        {
            return new CesiumWriterAdaptor<PositionListCesiumWriter, IEnumerable<Cartesian>>(
                this, (me, value) => me.WriteCartesian(value));
        }

        /// <summary>
        /// Returns a wrapper for this instance that implements <see cref="ICesiumValuePropertyWriter{T}" /> to write a value in <code>CartographicRadians</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumValuePropertyWriter<IEnumerable<Cartographic>> AsCartographicRadians()
        {
            return m_asCartographicRadians.Value;
        }

        private ICesiumValuePropertyWriter<IEnumerable<Cartographic>> CreateCartographicRadiansAdaptor()
        {
            return new CesiumWriterAdaptor<PositionListCesiumWriter, IEnumerable<Cartographic>>(
                this, (me, value) => me.WriteCartographicRadians(value));
        }

        /// <summary>
        /// Returns a wrapper for this instance that implements <see cref="ICesiumValuePropertyWriter{T}" /> to write a value in <code>CartographicDegrees</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumValuePropertyWriter<IEnumerable<Cartographic>> AsCartographicDegrees()
        {
            return m_asCartographicDegrees.Value;
        }

        private ICesiumValuePropertyWriter<IEnumerable<Cartographic>> CreateCartographicDegreesAdaptor()
        {
            return new CesiumWriterAdaptor<PositionListCesiumWriter, IEnumerable<Cartographic>>(
                this, (me, value) => me.WriteCartographicDegrees(value));
        }

        /// <summary>
        /// Returns a wrapper for this instance that implements <see cref="ICesiumValuePropertyWriter{T}" /> to write a value in <code>References</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumValuePropertyWriter<IEnumerable<Reference>> AsReferences()
        {
            return m_asReferences.Value;
        }

        private ICesiumValuePropertyWriter<IEnumerable<Reference>> CreateReferencesAdaptor()
        {
            return new CesiumWriterAdaptor<PositionListCesiumWriter, IEnumerable<Reference>>(
                this, (me, value) => me.WriteReferences(value));
        }

    }
}
