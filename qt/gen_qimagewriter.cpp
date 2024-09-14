#include <QByteArray>
#include <QIODevice>
#include <QImage>
#include <QImageWriter>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qimagewriter.h"
#include "gen_qimagewriter.h"
#include "_cgo_export.h"

QImageWriter* QImageWriter_new() {
	return new QImageWriter();
}

QImageWriter* QImageWriter_new2(QIODevice* device, QByteArray* format) {
	return new QImageWriter(device, *format);
}

QImageWriter* QImageWriter_new3(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QImageWriter(fileName_QString);
}

QImageWriter* QImageWriter_new4(struct miqt_string* fileName, QByteArray* format) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QImageWriter(fileName_QString, *format);
}

struct miqt_string* QImageWriter_Tr(const char* sourceText) {
	QString _ret = QImageWriter::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QImageWriter_TrUtf8(const char* sourceText) {
	QString _ret = QImageWriter::trUtf8(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QImageWriter_SetFormat(QImageWriter* self, QByteArray* format) {
	self->setFormat(*format);
}

QByteArray* QImageWriter_Format(const QImageWriter* self) {
	QByteArray _ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

void QImageWriter_SetDevice(QImageWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageWriter_Device(const QImageWriter* self) {
	return self->device();
}

void QImageWriter_SetFileName(QImageWriter* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	self->setFileName(fileName_QString);
}

struct miqt_string* QImageWriter_FileName(const QImageWriter* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QImageWriter_SetQuality(QImageWriter* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

int QImageWriter_Quality(const QImageWriter* self) {
	return self->quality();
}

void QImageWriter_SetCompression(QImageWriter* self, int compression) {
	self->setCompression(static_cast<int>(compression));
}

int QImageWriter_Compression(const QImageWriter* self) {
	return self->compression();
}

void QImageWriter_SetGamma(QImageWriter* self, float gamma) {
	self->setGamma(static_cast<float>(gamma));
}

float QImageWriter_Gamma(const QImageWriter* self) {
	return self->gamma();
}

void QImageWriter_SetSubType(QImageWriter* self, QByteArray* typeVal) {
	self->setSubType(*typeVal);
}

QByteArray* QImageWriter_SubType(const QImageWriter* self) {
	QByteArray _ret = self->subType();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_array* QImageWriter_SupportedSubTypes(const QImageWriter* self) {
	QList<QByteArray> _ret = self->supportedSubTypes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QImageWriter_SetOptimizedWrite(QImageWriter* self, bool optimize) {
	self->setOptimizedWrite(optimize);
}

bool QImageWriter_OptimizedWrite(const QImageWriter* self) {
	return self->optimizedWrite();
}

void QImageWriter_SetProgressiveScanWrite(QImageWriter* self, bool progressive) {
	self->setProgressiveScanWrite(progressive);
}

bool QImageWriter_ProgressiveScanWrite(const QImageWriter* self) {
	return self->progressiveScanWrite();
}

int QImageWriter_Transformation(const QImageWriter* self) {
	QImageIOHandler::Transformations _ret = self->transformation();
	return static_cast<int>(_ret);
}

void QImageWriter_SetTransformation(QImageWriter* self, int orientation) {
	self->setTransformation(static_cast<QImageIOHandler::Transformations>(orientation));
}

void QImageWriter_SetDescription(QImageWriter* self, struct miqt_string* description) {
	QString description_QString = QString::fromUtf8(&description->data, description->len);
	self->setDescription(description_QString);
}

struct miqt_string* QImageWriter_Description(const QImageWriter* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QImageWriter_SetText(QImageWriter* self, struct miqt_string* key, struct miqt_string* text) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setText(key_QString, text_QString);
}

bool QImageWriter_CanWrite(const QImageWriter* self) {
	return self->canWrite();
}

bool QImageWriter_Write(QImageWriter* self, QImage* image) {
	return self->write(*image);
}

uintptr_t QImageWriter_Error(const QImageWriter* self) {
	QImageWriter::ImageWriterError _ret = self->error();
	return static_cast<uintptr_t>(_ret);
}

struct miqt_string* QImageWriter_ErrorString(const QImageWriter* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QImageWriter_SupportsOption(const QImageWriter* self, uintptr_t option) {
	return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

struct miqt_array* QImageWriter_SupportedImageFormats() {
	QList<QByteArray> _ret = QImageWriter::supportedImageFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QImageWriter_SupportedMimeTypes() {
	QList<QByteArray> _ret = QImageWriter::supportedMimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QImageWriter_ImageFormatsForMimeType(QByteArray* mimeType) {
	QList<QByteArray> _ret = QImageWriter::imageFormatsForMimeType(*mimeType);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QImageWriter_Tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QImageWriter::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QImageWriter_Tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QImageWriter::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QImageWriter_TrUtf82(const char* sourceText, const char* disambiguation) {
	QString _ret = QImageWriter::trUtf8(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QImageWriter_TrUtf83(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QImageWriter::trUtf8(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QImageWriter_Delete(QImageWriter* self) {
	delete self;
}

