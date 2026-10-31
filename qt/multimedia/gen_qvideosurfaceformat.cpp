#include <QByteArray>
#include <QList>
#include <QRect>
#include <QSize>
#include <QVariant>
#include <QVideoSurfaceFormat>
#include <qvideosurfaceformat.h>
#include "gen_qvideosurfaceformat.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QVideoSurfaceFormat* QVideoSurfaceFormat_new() {
	return new (std::nothrow) QVideoSurfaceFormat();
}

QVideoSurfaceFormat* QVideoSurfaceFormat_new2(struct miqt_qsize size, int pixelFormat) {
	return new (std::nothrow) QVideoSurfaceFormat(miqt_from_cabi<QSize>(size), static_cast<QVideoFrame::PixelFormat>(pixelFormat));
}

QVideoSurfaceFormat* QVideoSurfaceFormat_new3(QVideoSurfaceFormat* format) {
	return new (std::nothrow) QVideoSurfaceFormat(*format);
}

QVideoSurfaceFormat* QVideoSurfaceFormat_new4(struct miqt_qsize size, int pixelFormat, int handleType) {
	return new (std::nothrow) QVideoSurfaceFormat(miqt_from_cabi<QSize>(size), static_cast<QVideoFrame::PixelFormat>(pixelFormat), static_cast<QAbstractVideoBuffer::HandleType>(handleType));
}

void QVideoSurfaceFormat_operatorAssign(QVideoSurfaceFormat* self, QVideoSurfaceFormat* format) {
	self->operator=(*format);
}

bool QVideoSurfaceFormat_operatorEqual(const QVideoSurfaceFormat* self, QVideoSurfaceFormat* format) {
	return (*self == *format);
}

bool QVideoSurfaceFormat_operatorNotEqual(const QVideoSurfaceFormat* self, QVideoSurfaceFormat* format) {
	return (*self != *format);
}

bool QVideoSurfaceFormat_isValid(const QVideoSurfaceFormat* self) {
	return self->isValid();
}

int QVideoSurfaceFormat_pixelFormat(const QVideoSurfaceFormat* self) {
	QVideoFrame::PixelFormat _ret = self->pixelFormat();
	return static_cast<int>(_ret);
}

int QVideoSurfaceFormat_handleType(const QVideoSurfaceFormat* self) {
	QAbstractVideoBuffer::HandleType _ret = self->handleType();
	return static_cast<int>(_ret);
}

struct miqt_qsize QVideoSurfaceFormat_frameSize(const QVideoSurfaceFormat* self) {
	return miqt_to_cabi<struct miqt_qsize>(self->frameSize());
}

void QVideoSurfaceFormat_setFrameSize(QVideoSurfaceFormat* self, struct miqt_qsize size) {
	self->setFrameSize(miqt_from_cabi<QSize>(size));
}

void QVideoSurfaceFormat_setFrameSize2(QVideoSurfaceFormat* self, int width, int height) {
	self->setFrameSize(static_cast<int>(width), static_cast<int>(height));
}

int QVideoSurfaceFormat_frameWidth(const QVideoSurfaceFormat* self) {
	return self->frameWidth();
}

int QVideoSurfaceFormat_frameHeight(const QVideoSurfaceFormat* self) {
	return self->frameHeight();
}

struct miqt_qrect QVideoSurfaceFormat_viewport(const QVideoSurfaceFormat* self) {
	return miqt_to_cabi<struct miqt_qrect>(self->viewport());
}

void QVideoSurfaceFormat_setViewport(QVideoSurfaceFormat* self, struct miqt_qrect viewport) {
	self->setViewport(miqt_from_cabi<QRect>(viewport));
}

int QVideoSurfaceFormat_scanLineDirection(const QVideoSurfaceFormat* self) {
	QVideoSurfaceFormat::Direction _ret = self->scanLineDirection();
	return static_cast<int>(_ret);
}

void QVideoSurfaceFormat_setScanLineDirection(QVideoSurfaceFormat* self, int direction) {
	self->setScanLineDirection(static_cast<QVideoSurfaceFormat::Direction>(direction));
}

double QVideoSurfaceFormat_frameRate(const QVideoSurfaceFormat* self) {
	qreal _ret = self->frameRate();
	return static_cast<double>(_ret);
}

void QVideoSurfaceFormat_setFrameRate(QVideoSurfaceFormat* self, double rate) {
	self->setFrameRate(static_cast<qreal>(rate));
}

struct miqt_qsize QVideoSurfaceFormat_pixelAspectRatio(const QVideoSurfaceFormat* self) {
	return miqt_to_cabi<struct miqt_qsize>(self->pixelAspectRatio());
}

void QVideoSurfaceFormat_setPixelAspectRatio(QVideoSurfaceFormat* self, struct miqt_qsize ratio) {
	self->setPixelAspectRatio(miqt_from_cabi<QSize>(ratio));
}

void QVideoSurfaceFormat_setPixelAspectRatio2(QVideoSurfaceFormat* self, int width, int height) {
	self->setPixelAspectRatio(static_cast<int>(width), static_cast<int>(height));
}

int QVideoSurfaceFormat_yCbCrColorSpace(const QVideoSurfaceFormat* self) {
	QVideoSurfaceFormat::YCbCrColorSpace _ret = self->yCbCrColorSpace();
	return static_cast<int>(_ret);
}

void QVideoSurfaceFormat_setYCbCrColorSpace(QVideoSurfaceFormat* self, int colorSpace) {
	self->setYCbCrColorSpace(static_cast<QVideoSurfaceFormat::YCbCrColorSpace>(colorSpace));
}

bool QVideoSurfaceFormat_isMirrored(const QVideoSurfaceFormat* self) {
	return self->isMirrored();
}

void QVideoSurfaceFormat_setMirrored(QVideoSurfaceFormat* self, bool mirrored) {
	self->setMirrored(mirrored);
}

struct miqt_qsize QVideoSurfaceFormat_sizeHint(const QVideoSurfaceFormat* self) {
	return miqt_to_cabi<struct miqt_qsize>(self->sizeHint());
}

struct miqt_array /* of struct miqt_string */  QVideoSurfaceFormat_propertyNames(const QVideoSurfaceFormat* self) {
	QList<QByteArray> _ret = self->propertyNames();
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

QVariant* QVideoSurfaceFormat_property(const QVideoSurfaceFormat* self, const char* name) {
	return new QVariant(self->property(name));
}

void QVideoSurfaceFormat_setProperty(QVideoSurfaceFormat* self, const char* name, QVariant* value) {
	self->setProperty(name, *value);
}

void QVideoSurfaceFormat_delete(QVideoSurfaceFormat* self) {
	delete self;
}

