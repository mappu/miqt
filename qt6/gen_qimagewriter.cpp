#include <QByteArray>
#include <QIODevice>
#include <QImage>
#include <QImageWriter>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qimagewriter.h>
#include "gen_qimagewriter.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QImageWriter* QImageWriter_new() {
	return new QImageWriter();
}

QImageWriter* QImageWriter_new2(QIODevice* device, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	return new QImageWriter(device, format_QByteArray);
}

QImageWriter* QImageWriter_new3(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QImageWriter(fileName_QString);
}

QImageWriter* QImageWriter_new4(struct miqt_string fileName, struct miqt_string format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray format_QByteArray(format.data, format.len);
	return new QImageWriter(fileName_QString, format_QByteArray);
}

struct miqt_string QImageWriter_tr(const char* sourceText) {
	QString _ret = QImageWriter::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageWriter_setFormat(QImageWriter* self, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	self->setFormat(format_QByteArray);
}

struct miqt_string QImageWriter_format(const QImageWriter* self) {
	QByteArray _qb = self->format();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QImageWriter_setDevice(QImageWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageWriter_device(const QImageWriter* self) {
	return self->device();
}

void QImageWriter_setFileName(QImageWriter* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

struct miqt_string QImageWriter_fileName(const QImageWriter* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageWriter_setQuality(QImageWriter* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

int QImageWriter_quality(const QImageWriter* self) {
	return self->quality();
}

void QImageWriter_setCompression(QImageWriter* self, int compression) {
	self->setCompression(static_cast<int>(compression));
}

int QImageWriter_compression(const QImageWriter* self) {
	return self->compression();
}

void QImageWriter_setSubType(QImageWriter* self, struct miqt_string type) {
	QByteArray type_QByteArray(type.data, type.len);
	self->setSubType(type_QByteArray);
}

struct miqt_string QImageWriter_subType(const QImageWriter* self) {
	QByteArray _qb = self->subType();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QImageWriter_supportedSubTypes(const QImageWriter* self) {
	QList<QByteArray> _ret = self->supportedSubTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QImageWriter_setOptimizedWrite(QImageWriter* self, bool optimize) {
	self->setOptimizedWrite(optimize);
}

bool QImageWriter_optimizedWrite(const QImageWriter* self) {
	return self->optimizedWrite();
}

void QImageWriter_setProgressiveScanWrite(QImageWriter* self, bool progressive) {
	self->setProgressiveScanWrite(progressive);
}

bool QImageWriter_progressiveScanWrite(const QImageWriter* self) {
	return self->progressiveScanWrite();
}

int QImageWriter_transformation(const QImageWriter* self) {
	QImageIOHandler::Transformations _ret = self->transformation();
	return static_cast<int>(_ret);
}

void QImageWriter_setTransformation(QImageWriter* self, int orientation) {
	self->setTransformation(static_cast<QImageIOHandler::Transformations>(orientation));
}

void QImageWriter_setText(QImageWriter* self, struct miqt_string key, struct miqt_string text) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(key_QString, text_QString);
}

bool QImageWriter_canWrite(const QImageWriter* self) {
	return self->canWrite();
}

bool QImageWriter_write(QImageWriter* self, QImage* image) {
	return self->write(*image);
}

int QImageWriter_error(const QImageWriter* self) {
	QImageWriter::ImageWriterError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QImageWriter_errorString(const QImageWriter* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QImageWriter_supportsOption(const QImageWriter* self, int option) {
	return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

struct miqt_array /* of struct miqt_string */  QImageWriter_supportedImageFormats() {
	QList<QByteArray> _ret = QImageWriter::supportedImageFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QImageWriter_supportedMimeTypes() {
	QList<QByteArray> _ret = QImageWriter::supportedMimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QImageWriter_imageFormatsForMimeType(struct miqt_string mimeType) {
	QByteArray mimeType_QByteArray(mimeType.data, mimeType.len);
	QList<QByteArray> _ret = QImageWriter::imageFormatsForMimeType(mimeType_QByteArray);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QImageWriter_tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QImageWriter::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageWriter_tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QImageWriter::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageWriter_delete(QImageWriter* self) {
	delete self;
}

