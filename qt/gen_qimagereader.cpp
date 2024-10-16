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
#include "_cgo_export.h"

QImageReader* QImageReader_new() {
	return new QImageReader();
}

QImageReader* QImageReader_new2(QIODevice* device) {
	return new QImageReader(device);
}

QImageReader* QImageReader_new3(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QImageReader(fileName_QString);
}

QImageReader* QImageReader_new4(QIODevice* device, QByteArray* format) {
	return new QImageReader(device, *format);
}

QImageReader* QImageReader_new5(struct miqt_string* fileName, QByteArray* format) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QImageReader(fileName_QString, *format);
}

struct miqt_string* QImageReader_Tr(const char* sourceText) {
	QString _ret = QImageReader::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QImageReader_TrUtf8(const char* sourceText) {
	QString _ret = QImageReader::trUtf8(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QImageReader_SetFormat(QImageReader* self, QByteArray* format) {
	self->setFormat(*format);
}

QByteArray* QImageReader_Format(const QImageReader* self) {
	return new QByteArray(self->format());
}

void QImageReader_SetAutoDetectImageFormat(QImageReader* self, bool enabled) {
	self->setAutoDetectImageFormat(enabled);
}

bool QImageReader_AutoDetectImageFormat(const QImageReader* self) {
	return self->autoDetectImageFormat();
}

void QImageReader_SetDecideFormatFromContent(QImageReader* self, bool ignored) {
	self->setDecideFormatFromContent(ignored);
}

bool QImageReader_DecideFormatFromContent(const QImageReader* self) {
	return self->decideFormatFromContent();
}

void QImageReader_SetDevice(QImageReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageReader_Device(const QImageReader* self) {
	return self->device();
}

void QImageReader_SetFileName(QImageReader* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	self->setFileName(fileName_QString);
}

struct miqt_string* QImageReader_FileName(const QImageReader* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QSize* QImageReader_Size(const QImageReader* self) {
	return new QSize(self->size());
}

int QImageReader_ImageFormat(const QImageReader* self) {
	QImage::Format _ret = self->imageFormat();
	return static_cast<int>(_ret);
}

struct miqt_array* QImageReader_TextKeys(const QImageReader* self) {
	QStringList _ret = self->textKeys();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QImageReader_Text(const QImageReader* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QString _ret = self->text(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QImageReader_SetClipRect(QImageReader* self, QRect* rect) {
	self->setClipRect(*rect);
}

QRect* QImageReader_ClipRect(const QImageReader* self) {
	return new QRect(self->clipRect());
}

void QImageReader_SetScaledSize(QImageReader* self, QSize* size) {
	self->setScaledSize(*size);
}

QSize* QImageReader_ScaledSize(const QImageReader* self) {
	return new QSize(self->scaledSize());
}

void QImageReader_SetQuality(QImageReader* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

int QImageReader_Quality(const QImageReader* self) {
	return self->quality();
}

void QImageReader_SetScaledClipRect(QImageReader* self, QRect* rect) {
	self->setScaledClipRect(*rect);
}

QRect* QImageReader_ScaledClipRect(const QImageReader* self) {
	return new QRect(self->scaledClipRect());
}

void QImageReader_SetBackgroundColor(QImageReader* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QColor* QImageReader_BackgroundColor(const QImageReader* self) {
	return new QColor(self->backgroundColor());
}

bool QImageReader_SupportsAnimation(const QImageReader* self) {
	return self->supportsAnimation();
}

int QImageReader_Transformation(const QImageReader* self) {
	QImageIOHandler::Transformations _ret = self->transformation();
	return static_cast<int>(_ret);
}

void QImageReader_SetAutoTransform(QImageReader* self, bool enabled) {
	self->setAutoTransform(enabled);
}

bool QImageReader_AutoTransform(const QImageReader* self) {
	return self->autoTransform();
}

void QImageReader_SetGamma(QImageReader* self, float gamma) {
	self->setGamma(static_cast<float>(gamma));
}

float QImageReader_Gamma(const QImageReader* self) {
	return self->gamma();
}

QByteArray* QImageReader_SubType(const QImageReader* self) {
	return new QByteArray(self->subType());
}

struct miqt_array* QImageReader_SupportedSubTypes(const QImageReader* self) {
	QList<QByteArray> _ret = self->supportedSubTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

bool QImageReader_CanRead(const QImageReader* self) {
	return self->canRead();
}

QImage* QImageReader_Read(QImageReader* self) {
	return new QImage(self->read());
}

bool QImageReader_ReadWithImage(QImageReader* self, QImage* image) {
	return self->read(image);
}

bool QImageReader_JumpToNextImage(QImageReader* self) {
	return self->jumpToNextImage();
}

bool QImageReader_JumpToImage(QImageReader* self, int imageNumber) {
	return self->jumpToImage(static_cast<int>(imageNumber));
}

int QImageReader_LoopCount(const QImageReader* self) {
	return self->loopCount();
}

int QImageReader_ImageCount(const QImageReader* self) {
	return self->imageCount();
}

int QImageReader_NextImageDelay(const QImageReader* self) {
	return self->nextImageDelay();
}

int QImageReader_CurrentImageNumber(const QImageReader* self) {
	return self->currentImageNumber();
}

QRect* QImageReader_CurrentImageRect(const QImageReader* self) {
	return new QRect(self->currentImageRect());
}

int QImageReader_Error(const QImageReader* self) {
	QImageReader::ImageReaderError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string* QImageReader_ErrorString(const QImageReader* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QImageReader_SupportsOption(const QImageReader* self, int option) {
	return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

QByteArray* QImageReader_ImageFormatWithFileName(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QByteArray(QImageReader::imageFormat(fileName_QString));
}

QByteArray* QImageReader_ImageFormatWithDevice(QIODevice* device) {
	return new QByteArray(QImageReader::imageFormat(device));
}

struct miqt_array* QImageReader_SupportedImageFormats() {
	QList<QByteArray> _ret = QImageReader::supportedImageFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QImageReader_SupportedMimeTypes() {
	QList<QByteArray> _ret = QImageReader::supportedMimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QImageReader_ImageFormatsForMimeType(QByteArray* mimeType) {
	QList<QByteArray> _ret = QImageReader::imageFormatsForMimeType(*mimeType);
	// Convert QList<> from C++ memory to manually-managed C memory
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QImageReader_Tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QImageReader::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QImageReader_Tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QImageReader::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QImageReader_TrUtf82(const char* sourceText, const char* disambiguation) {
	QString _ret = QImageReader::trUtf8(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QImageReader_TrUtf83(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QImageReader::trUtf8(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QImageReader_Delete(QImageReader* self) {
	delete self;
}

