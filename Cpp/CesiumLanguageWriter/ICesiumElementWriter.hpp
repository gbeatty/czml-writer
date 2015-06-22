#pragma once

#include <memory>

namespace CesiumLanguageWriter
{
	class CesiumOutputStream;
}

namespace CesiumLanguageWriterAdvanced
{
	/// <summary>
	/// An interface to an instance that can write elements of CZML.
	/// </summary>
	class ICesiumElementWriter
	{
	public:
		virtual ~ICesiumElementWriter() = 0;

		/// <summary>
		/// Gets <see langword="true" /> if the writer is open; otherwise, <see langword="false" />.
		/// </summary>
		virtual bool IsOpen() const = 0;

		/// <summary>
		/// Gets the <see cref="CesiumOutputStream"/> on which this writer is currently open.  If the writer is
		/// not open, accessing this property will throw an exception.
		/// </summary>
		/// <exception cref="InvalidOperationException">The writer is not currently open on a stream.</exception>
		virtual std::shared_ptr<CesiumLanguageWriter::CesiumOutputStream> Output() const = 0;

		/// <summary>
		/// Opens this writer on a given <see cref="CesiumOutputStream"/>.  A single writer can write to multiple
		/// streams over its lifetime.  Opening a writer on a stream may cause data to be written to the stream.
		/// </summary>
		/// <param name="output">The stream to which to write.</param>
		/// <exception cref="InvalidOperationException">The writer is already open on a stream.</exception>
		virtual void Open(std::shared_ptr<CesiumLanguageWriter::CesiumOutputStream> output) = 0;

		/// <summary>
		/// Closes this writer on a given stream, but does not close the underlying stream.  Closing a writer
		/// on a stream may cause data to be written to the stream.
		/// </summary>
		/// <exception cref="InvalidOperationException">The writer is not open on a stream.</exception>
		virtual void Close() = 0;
	};
}