#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QImageReader>
#include <QList>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qimagereader.h>
#include "gen_qimagereader.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QImageReader* QImageReader_new() {
	return new QImageReader();
}

QImageReader* QImageReader_new2(QIODevice* device) {
	return new QImageReader(device);
}

QImageReader* QImageReader_new3(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QImageReader(fileName_QString);
}

QImageReader* QImageReader_new4(QIODevice* device, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	return new QImageReader(device, format_QByteArray);
}

QImageReader* QImageReader_new5(struct miqt_string fileName, struct miqt_string format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray format_QByteArray(format.data, format.len);
	return new QImageReader(fileName_QString, format_QByteArray);
}

struct miqt_string QImageReader_tr(const char* sourceText) {
	QString _ret = QImageReader::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageReader_setFormat(QImageReader* self, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	self->setFormat(format_QByteArray);
}

struct miqt_string QImageReader_format(const QImageReader* self) {
	QByteArray _qb = self->format();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QImageReader_setAutoDetectImageFormat(QImageReader* self, bool enabled) {
	self->setAutoDetectImageFormat(enabled);
}

bool QImageReader_autoDetectImageFormat(const QImageReader* self) {
	return self->autoDetectImageFormat();
}

void QImageReader_setDecideFormatFromContent(QImageReader* self, bool ignored) {
	self->setDecideFormatFromContent(ignored);
}

bool QImageReader_decideFormatFromContent(const QImageReader* self) {
	return self->decideFormatFromContent();
}

void QImageReader_setDevice(QImageReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageReader_device(const QImageReader* self) {
	return self->device();
}

void QImageReader_setFileName(QImageReader* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

struct miqt_string QImageReader_fileName(const QImageReader* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QImageReader_size(const QImageReader* self) {
	return new QSize(self->size());
}

int QImageReader_imageFormat(const QImageReader* self) {
	QImage::Format _ret = self->imageFormat();
	return static_cast<int>(_ret);
}

struct miqt_array /* of struct miqt_string */  QImageReader_textKeys(const QImageReader* self) {
	QStringList _ret = self->textKeys();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QImageReader_text(const QImageReader* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString _ret = self->text(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageReader_setClipRect(QImageReader* self, QRect* rect) {
	self->setClipRect(*rect);
}

QRect* QImageReader_clipRect(const QImageReader* self) {
	return new QRect(self->clipRect());
}

void QImageReader_setScaledSize(QImageReader* self, QSize* size) {
	self->setScaledSize(*size);
}

QSize* QImageReader_scaledSize(const QImageReader* self) {
	return new QSize(self->scaledSize());
}

void QImageReader_setQuality(QImageReader* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

int QImageReader_quality(const QImageReader* self) {
	return self->quality();
}

void QImageReader_setScaledClipRect(QImageReader* self, QRect* rect) {
	self->setScaledClipRect(*rect);
}

QRect* QImageReader_scaledClipRect(const QImageReader* self) {
	return new QRect(self->scaledClipRect());
}

void QImageReader_setBackgroundColor(QImageReader* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QColor* QImageReader_backgroundColor(const QImageReader* self) {
	return new QColor(self->backgroundColor());
}

bool QImageReader_supportsAnimation(const QImageReader* self) {
	return self->supportsAnimation();
}

int QImageReader_transformation(const QImageReader* self) {
	QImageIOHandler::Transformations _ret = self->transformation();
	return static_cast<int>(_ret);
}

void QImageReader_setAutoTransform(QImageReader* self, bool enabled) {
	self->setAutoTransform(enabled);
}

bool QImageReader_autoTransform(const QImageReader* self) {
	return self->autoTransform();
}

struct miqt_string QImageReader_subType(const QImageReader* self) {
	QByteArray _qb = self->subType();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QImageReader_supportedSubTypes(const QImageReader* self) {
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

bool QImageReader_canRead(const QImageReader* self) {
	return self->canRead();
}

QImage* QImageReader_read(QImageReader* self) {
	return new QImage(self->read());
}

bool QImageReader_readWithImage(QImageReader* self, QImage* image) {
	return self->read(image);
}

bool QImageReader_jumpToNextImage(QImageReader* self) {
	return self->jumpToNextImage();
}

bool QImageReader_jumpToImage(QImageReader* self, int imageNumber) {
	return self->jumpToImage(static_cast<int>(imageNumber));
}

int QImageReader_loopCount(const QImageReader* self) {
	return self->loopCount();
}

int QImageReader_imageCount(const QImageReader* self) {
	return self->imageCount();
}

int QImageReader_nextImageDelay(const QImageReader* self) {
	return self->nextImageDelay();
}

int QImageReader_currentImageNumber(const QImageReader* self) {
	return self->currentImageNumber();
}

QRect* QImageReader_currentImageRect(const QImageReader* self) {
	return new QRect(self->currentImageRect());
}

int QImageReader_error(const QImageReader* self) {
	QImageReader::ImageReaderError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QImageReader_errorString(const QImageReader* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QImageReader_supportsOption(const QImageReader* self, int option) {
	return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

struct miqt_string QImageReader_imageFormatWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray _qb = QImageReader::imageFormat(fileName_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageReader_imageFormatWithDevice(QIODevice* device) {
	QByteArray _qb = QImageReader::imageFormat(device);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QImageReader_supportedImageFormats() {
	QList<QByteArray> _ret = QImageReader::supportedImageFormats();
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

struct miqt_array /* of struct miqt_string */  QImageReader_supportedMimeTypes() {
	QList<QByteArray> _ret = QImageReader::supportedMimeTypes();
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

struct miqt_array /* of struct miqt_string */  QImageReader_imageFormatsForMimeType(struct miqt_string mimeType) {
	QByteArray mimeType_QByteArray(mimeType.data, mimeType.len);
	QList<QByteArray> _ret = QImageReader::imageFormatsForMimeType(mimeType_QByteArray);
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

int QImageReader_allocationLimit() {
	return QImageReader::allocationLimit();
}

void QImageReader_setAllocationLimit(int mbLimit) {
	QImageReader::setAllocationLimit(static_cast<int>(mbLimit));
}

struct miqt_string QImageReader_tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QImageReader::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageReader_tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QImageReader::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageReader_delete(QImageReader* self) {
	delete self;
}

