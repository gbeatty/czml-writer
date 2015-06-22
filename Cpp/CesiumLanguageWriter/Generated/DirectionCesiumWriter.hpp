// This file was generated automatically by GenerateFromSchema.  Do NOT edit it.
// https://github.com/AnalyticalGraphicsInc/czml-writer

#pragma once

#include "CesiumWriterIncludes.hpp"
#include "string"
#include "vector"

namespace CesiumLanguageWriter
{
    /// <summary>
    /// Writes a <code>Direction</code> to a <see cref="CesiumOutputStream" />.  A <code>Direction</code> defines a direction.  The direction can optionally vary over time.
    /// </summary>
    class DirectionCesiumWriter : CesiumInterpolatablePropertyWriter<DirectionCesiumWriter>
    {
        public:
            /// <summary>
            /// The name of the <code>axes</code> property.
            /// </summary>
            const std::string AxesPropertyName = "axes";

            /// <summary>
            /// The name of the <code>spherical</code> property.
            /// </summary>
            const std::string SphericalPropertyName = "spherical";

            /// <summary>
            /// The name of the <code>unitSpherical</code> property.
            /// </summary>
            const std::string UnitSphericalPropertyName = "unitSpherical";

            /// <summary>
            /// The name of the <code>cartesian</code> property.
            /// </summary>
            const std::string CartesianPropertyName = "cartesian";

            /// <summary>
            /// The name of the <code>unitCartesian</code> property.
            /// </summary>
            const std::string UnitCartesianPropertyName = "unitCartesian";

            /// <summary>
            /// The name of the <code>reference</code> property.
            /// </summary>
            const std::string ReferencePropertyName = "reference";

        private:
            const ICesiumInterpolatableValuePropertyWriter<Spherical> m_asSpherical;
            const ICesiumInterpolatableValuePropertyWriter<UnitSpherical> m_asUnitSpherical;
            const ICesiumInterpolatableValuePropertyWriter<Cartesian> m_asCartesian;
            const ICesiumInterpolatableValuePropertyWriter<UnitCartesian> m_asUnitCartesian;
            const ICesiumValuePropertyWriter<Reference> m_asReference;

        public:
            /// <summary>
            /// Initializes a new instance.
            /// </summary>
            DirectionCesiumWriter(string propertyName)
                : base(propertyName)
            {
                m_asSpherical = ICesiumInterpolatableValuePropertyWriter<Spherical>(CreateSphericalAdaptor, false);
                m_asUnitSpherical = ICesiumInterpolatableValuePropertyWriter<UnitSpherical>(CreateUnitSphericalAdaptor, false);
                m_asCartesian = ICesiumInterpolatableValuePropertyWriter<Cartesian>(CreateCartesianAdaptor, false);
                m_asUnitCartesian = ICesiumInterpolatableValuePropertyWriter<UnitCartesian>(CreateUnitCartesianAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

            /// <summary>
            /// Initializes a new instance as a copy of an existing instance.
            /// </summary>
            /// <param name="existingInstance">The existing instance to copy.</param>
            DirectionCesiumWriter(const DirectionCesiumWriter& existingInstance)
                : base(existingInstance)
            {
                m_asSpherical = ICesiumInterpolatableValuePropertyWriter<Spherical>(CreateSphericalAdaptor, false);
                m_asUnitSpherical = ICesiumInterpolatableValuePropertyWriter<UnitSpherical>(CreateUnitSphericalAdaptor, false);
                m_asCartesian = ICesiumInterpolatableValuePropertyWriter<Cartesian>(CreateCartesianAdaptor, false);
                m_asUnitCartesian = ICesiumInterpolatableValuePropertyWriter<UnitCartesian>(CreateUnitCartesianAdaptor, false);
                m_asReference = ICesiumValuePropertyWriter<Reference>(CreateReferenceAdaptor, false);
            }

        /// <summary>
        /// Writes the <code>axes</code> property.  The <code>axes</code> property specifies tODO
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteAxes(string value)
        {
            const string PropertyName = AxesPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            Output.WriteValue(value);
        }

        /// <summary>
        /// Writes the <code>spherical</code> property.  The <code>spherical</code> property specifies a direction specified as a spherical [Clock, Cone, Magnitude] angles in radians, distance in meters. If the array has three elements, the direction is constant. If it has four or more elements, they are time-tagged samples arranged as [Time, Clock, Cone, Magnitude, Time, Clock, Cone, Magnitude, Time, Clock, Cone, Magnitude, ...], where Time is an ISO 8601 date and time string or seconds since epoch.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteSpherical(Spherical value)
        {
            const string PropertyName = SphericalPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteSpherical(Output, value);
        }

        /// <summary>
        /// Writes the <code>spherical</code> property.  The <code>spherical</code> property specifies a direction specified as a spherical [Clock, Cone, Magnitude] angles in radians, distance in meters. If the array has three elements, the direction is constant. If it has four or more elements, they are time-tagged samples arranged as [Time, Clock, Cone, Magnitude, Time, Clock, Cone, Magnitude, Time, Clock, Cone, Magnitude, ...], where Time is an ISO 8601 date and time string or seconds since epoch.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        public void WriteSpherical(IList<JulianDate> dates, IList<Spherical> values)
        {
            WriteSpherical(dates, values, 0, dates.Count);
        }

        /// <summary>
        /// Writes the <code>spherical</code> property.  The <code>spherical</code> property specifies a direction specified as a spherical [Clock, Cone, Magnitude] angles in radians, distance in meters. If the array has three elements, the direction is constant. If it has four or more elements, they are time-tagged samples arranged as [Time, Clock, Cone, Magnitude, Time, Clock, Cone, Magnitude, Time, Clock, Cone, Magnitude, ...], where Time is an ISO 8601 date and time string or seconds since epoch.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteSpherical(IList<JulianDate> dates, IList<Spherical> values, int startIndex, int length)
        {
            const string PropertyName = SphericalPropertyName;
            OpenIntervalIfNecessary();
            CesiumWritingHelper.WriteSpherical(Output, PropertyName, dates, values, startIndex, length);
        }

        /// <summary>
        /// Writes the <code>unitSpherical</code> property.  The <code>unitSpherical</code> property specifies a direction specified as a unit spherical [Clock, Cone] angles in radians. If the array has two elements, the direction is constant. If it has three or more elements, they are time-tagged samples arranged as [Time, Clock, Cone, Time, Clock, Cone, Time, Clock, Cone, ...], where Time is an ISO 8601 date and time string or seconds since epoch.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteUnitSpherical(UnitSpherical value)
        {
            const string PropertyName = UnitSphericalPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteUnitSpherical(Output, value);
        }

        /// <summary>
        /// Writes the <code>unitSpherical</code> property.  The <code>unitSpherical</code> property specifies a direction specified as a unit spherical [Clock, Cone] angles in radians. If the array has two elements, the direction is constant. If it has three or more elements, they are time-tagged samples arranged as [Time, Clock, Cone, Time, Clock, Cone, Time, Clock, Cone, ...], where Time is an ISO 8601 date and time string or seconds since epoch.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        public void WriteUnitSpherical(IList<JulianDate> dates, IList<UnitSpherical> values)
        {
            WriteUnitSpherical(dates, values, 0, dates.Count);
        }

        /// <summary>
        /// Writes the <code>unitSpherical</code> property.  The <code>unitSpherical</code> property specifies a direction specified as a unit spherical [Clock, Cone] angles in radians. If the array has two elements, the direction is constant. If it has three or more elements, they are time-tagged samples arranged as [Time, Clock, Cone, Time, Clock, Cone, Time, Clock, Cone, ...], where Time is an ISO 8601 date and time string or seconds since epoch.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteUnitSpherical(IList<JulianDate> dates, IList<UnitSpherical> values, int startIndex, int length)
        {
            const string PropertyName = UnitSphericalPropertyName;
            OpenIntervalIfNecessary();
            CesiumWritingHelper.WriteUnitSpherical(Output, PropertyName, dates, values, startIndex, length);
        }

        /// <summary>
        /// Writes the <code>cartesian</code> property.  The <code>cartesian</code> property specifies the direction represented as a unit Cartesian `[X, Y, Z]`. If the array has three elements, the position is constant. If it has four or more elements, they are time-tagged samples arranged as `[Time, X, Y, Z, Time, X, Y, Z, Time, X, Y, Z, ...]`, where Time is an ISO 8601 date and time string or seconds since `epoch`.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteCartesian(Cartesian value)
        {
            const string PropertyName = CartesianPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteCartesian3(Output, value);
        }

        /// <summary>
        /// Writes the <code>cartesian</code> property.  The <code>cartesian</code> property specifies the direction represented as a unit Cartesian `[X, Y, Z]`. If the array has three elements, the position is constant. If it has four or more elements, they are time-tagged samples arranged as `[Time, X, Y, Z, Time, X, Y, Z, Time, X, Y, Z, ...]`, where Time is an ISO 8601 date and time string or seconds since `epoch`.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        public void WriteCartesian(IList<JulianDate> dates, IList<Cartesian> values)
        {
            WriteCartesian(dates, values, 0, dates.Count);
        }

        /// <summary>
        /// Writes the <code>cartesian</code> property.  The <code>cartesian</code> property specifies the direction represented as a unit Cartesian `[X, Y, Z]`. If the array has three elements, the position is constant. If it has four or more elements, they are time-tagged samples arranged as `[Time, X, Y, Z, Time, X, Y, Z, Time, X, Y, Z, ...]`, where Time is an ISO 8601 date and time string or seconds since `epoch`.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteCartesian(IList<JulianDate> dates, IList<Cartesian> values, int startIndex, int length)
        {
            const string PropertyName = CartesianPropertyName;
            OpenIntervalIfNecessary();
            CesiumWritingHelper.WriteCartesian3(Output, PropertyName, dates, values, startIndex, length);
        }

        /// <summary>
        /// Writes the <code>unitCartesian</code> property.  The <code>unitCartesian</code> property specifies the direction represented as a unit Cartesian `[X, Y, Z]`. If the array has three elements, the position is constant. If it has four or more elements, they are time-tagged samples arranged as `[Time, X, Y, Z, Time, X, Y, Z, Time, X, Y, Z, ...]`, where Time is an ISO 8601 date and time string or seconds since `epoch`.
        /// </summary>
        /// <param name="value">The value.</param>
        public void WriteUnitCartesian(UnitCartesian value)
        {
            const string PropertyName = UnitCartesianPropertyName;
            OpenIntervalIfNecessary();
            Output.WritePropertyName(PropertyName);
            CesiumWritingHelper.WriteUnitCartesian3(Output, value);
        }

        /// <summary>
        /// Writes the <code>unitCartesian</code> property.  The <code>unitCartesian</code> property specifies the direction represented as a unit Cartesian `[X, Y, Z]`. If the array has three elements, the position is constant. If it has four or more elements, they are time-tagged samples arranged as `[Time, X, Y, Z, Time, X, Y, Z, Time, X, Y, Z, ...]`, where Time is an ISO 8601 date and time string or seconds since `epoch`.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        public void WriteUnitCartesian(IList<JulianDate> dates, IList<UnitCartesian> values)
        {
            WriteUnitCartesian(dates, values, 0, dates.Count);
        }

        /// <summary>
        /// Writes the <code>unitCartesian</code> property.  The <code>unitCartesian</code> property specifies the direction represented as a unit Cartesian `[X, Y, Z]`. If the array has three elements, the position is constant. If it has four or more elements, they are time-tagged samples arranged as `[Time, X, Y, Z, Time, X, Y, Z, Time, X, Y, Z, ...]`, where Time is an ISO 8601 date and time string or seconds since `epoch`.
        /// </summary>
        /// <param name="dates">The dates at which the vector is specified.</param>
        /// <param name="values">The values corresponding to each date.</param>
        /// <param name="startIndex">The index of the first element to use in the `values` collection.</param>
        /// <param name="length">The number of elements to use from the `values` collection.</param>
        public void WriteUnitCartesian(IList<JulianDate> dates, IList<UnitCartesian> values, int startIndex, int length)
        {
            const string PropertyName = UnitCartesianPropertyName;
            OpenIntervalIfNecessary();
            CesiumWritingHelper.WriteUnitCartesian3(Output, PropertyName, dates, values, startIndex, length);
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
        /// Returns a wrapper for this instance that implements <see cref="ICesiumInterpolatableValuePropertyWriter{T}" /> to write a value in <code>Spherical</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumInterpolatableValuePropertyWriter<Spherical> AsSpherical()
        {
            return m_asSpherical.Value;
        }

        private ICesiumInterpolatableValuePropertyWriter<Spherical> CreateSphericalAdaptor()
        {
            return new CesiumInterpolatableWriterAdaptor<DirectionCesiumWriter, Spherical>(
                this, (me, value) => me.WriteSpherical(value), (DirectionCesiumWriter me, IList<JulianDate> dates, IList<Spherical> values, int startIndex, int length) => me.WriteSpherical(dates, values, startIndex, length));
        }

        /// <summary>
        /// Returns a wrapper for this instance that implements <see cref="ICesiumInterpolatableValuePropertyWriter{T}" /> to write a value in <code>UnitSpherical</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumInterpolatableValuePropertyWriter<UnitSpherical> AsUnitSpherical()
        {
            return m_asUnitSpherical.Value;
        }

        private ICesiumInterpolatableValuePropertyWriter<UnitSpherical> CreateUnitSphericalAdaptor()
        {
            return new CesiumInterpolatableWriterAdaptor<DirectionCesiumWriter, UnitSpherical>(
                this, (me, value) => me.WriteUnitSpherical(value), (DirectionCesiumWriter me, IList<JulianDate> dates, IList<UnitSpherical> values, int startIndex, int length) => me.WriteUnitSpherical(dates, values, startIndex, length));
        }

        /// <summary>
        /// Returns a wrapper for this instance that implements <see cref="ICesiumInterpolatableValuePropertyWriter{T}" /> to write a value in <code>Cartesian</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumInterpolatableValuePropertyWriter<Cartesian> AsCartesian()
        {
            return m_asCartesian.Value;
        }

        private ICesiumInterpolatableValuePropertyWriter<Cartesian> CreateCartesianAdaptor()
        {
            return new CesiumInterpolatableWriterAdaptor<DirectionCesiumWriter, Cartesian>(
                this, (me, value) => me.WriteCartesian(value), (DirectionCesiumWriter me, IList<JulianDate> dates, IList<Cartesian> values, int startIndex, int length) => me.WriteCartesian(dates, values, startIndex, length));
        }

        /// <summary>
        /// Returns a wrapper for this instance that implements <see cref="ICesiumInterpolatableValuePropertyWriter{T}" /> to write a value in <code>UnitCartesian</code> format.  Because the returned instance is a wrapper for this instance, you may call <see cref="ICesiumElementWriter.Close" /> on either this instance or the wrapper, but you must not call it on both.
        /// </summary>
        /// <returns>The wrapper.</returns>
        public ICesiumInterpolatableValuePropertyWriter<UnitCartesian> AsUnitCartesian()
        {
            return m_asUnitCartesian.Value;
        }

        private ICesiumInterpolatableValuePropertyWriter<UnitCartesian> CreateUnitCartesianAdaptor()
        {
            return new CesiumInterpolatableWriterAdaptor<DirectionCesiumWriter, UnitCartesian>(
                this, (me, value) => me.WriteUnitCartesian(value), (DirectionCesiumWriter me, IList<JulianDate> dates, IList<UnitCartesian> values, int startIndex, int length) => me.WriteUnitCartesian(dates, values, startIndex, length));
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
            return new CesiumWriterAdaptor<DirectionCesiumWriter, Reference>(
                this, (me, value) => me.WriteReference(value));
        }

    }
}
