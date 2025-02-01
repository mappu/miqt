#include <QImage>
#include <QMap>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QVideoFrame>
#include <qvideoframe.h>
#include "gen_qvideoframe.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QVideoFrame* QVideoFrame_new() {
	return new QVideoFrame();
}

QVideoFrame* QVideoFrame_new2(int bytes, QSize* size, int bytesPerLine, int format) {
	return new QVideoFrame(static_cast<int>(bytes), *size, static_cast<int>(bytesPerLine), static_cast<QVideoFrame::PixelFormat>(format));
}

QVideoFrame* QVideoFrame_new3(QImage* image) {
	return new QVideoFrame(*image);
}

QVideoFrame* QVideoFrame_new4(QVideoFrame* other) {
	return new QVideoFrame(*other);
}

void QVideoFrame_operatorAssign(QVideoFrame* self, QVideoFrame* other) {
	self->operator=(*other);
}

bool QVideoFrame_operatorEqual(const QVideoFrame* self, QVideoFrame* other) {
	return (*self == *other);
}

bool QVideoFrame_operatorNotEqual(const QVideoFrame* self, QVideoFrame* other) {
	return (*self != *other);
}

bool QVideoFrame_isValid(const QVideoFrame* self) {
	return self->isValid();
}

int QVideoFrame_pixelFormat(const QVideoFrame* self) {
	QVideoFrame::PixelFormat _ret = self->pixelFormat();
	return static_cast<int>(_ret);
}

int QVideoFrame_handleType(const QVideoFrame* self) {
	QAbstractVideoBuffer::HandleType _ret = self->handleType();
	return static_cast<int>(_ret);
}

QSize* QVideoFrame_size(const QVideoFrame* self) {
	return new QSize(self->size());
}

int QVideoFrame_width(const QVideoFrame* self) {
	return self->width();
}

int QVideoFrame_height(const QVideoFrame* self) {
	return self->height();
}

int QVideoFrame_fieldType(const QVideoFrame* self) {
	QVideoFrame::FieldType _ret = self->fieldType();
	return static_cast<int>(_ret);
}

void QVideoFrame_setFieldType(QVideoFrame* self, int fieldType) {
	self->setFieldType(static_cast<QVideoFrame::FieldType>(fieldType));
}

bool QVideoFrame_isMapped(const QVideoFrame* self) {
	return self->isMapped();
}

bool QVideoFrame_isReadable(const QVideoFrame* self) {
	return self->isReadable();
}

bool QVideoFrame_isWritable(const QVideoFrame* self) {
	return self->isWritable();
}

int QVideoFrame_mapMode(const QVideoFrame* self) {
	QAbstractVideoBuffer::MapMode _ret = self->mapMode();
	return static_cast<int>(_ret);
}

bool QVideoFrame_map(QVideoFrame* self, int mode) {
	return self->map(static_cast<QAbstractVideoBuffer::MapMode>(mode));
}

void QVideoFrame_unmap(QVideoFrame* self) {
	self->unmap();
}

int QVideoFrame_bytesPerLine(const QVideoFrame* self) {
	return self->bytesPerLine();
}

int QVideoFrame_bytesPerLineWithPlane(const QVideoFrame* self, int plane) {
	return self->bytesPerLine(static_cast<int>(plane));
}

unsigned char* QVideoFrame_bits(QVideoFrame* self) {
	uchar* _ret = self->bits();
	return static_cast<unsigned char*>(_ret);
}

unsigned char* QVideoFrame_bitsWithPlane(QVideoFrame* self, int plane) {
	uchar* _ret = self->bits(static_cast<int>(plane));
	return static_cast<unsigned char*>(_ret);
}

const unsigned char* QVideoFrame_bits2(const QVideoFrame* self) {
	const uchar* _ret = self->bits();
	return static_cast<const unsigned char*>(_ret);
}

const unsigned char* QVideoFrame_bits3(const QVideoFrame* self, int plane) {
	const uchar* _ret = self->bits(static_cast<int>(plane));
	return static_cast<const unsigned char*>(_ret);
}

int QVideoFrame_mappedBytes(const QVideoFrame* self) {
	return self->mappedBytes();
}

int QVideoFrame_planeCount(const QVideoFrame* self) {
	return self->planeCount();
}

QVariant* QVideoFrame_handle(const QVideoFrame* self) {
	return new QVariant(self->handle());
}

long long QVideoFrame_startTime(const QVideoFrame* self) {
	qint64 _ret = self->startTime();
	return static_cast<long long>(_ret);
}

void QVideoFrame_setStartTime(QVideoFrame* self, long long time) {
	self->setStartTime(static_cast<qint64>(time));
}

long long QVideoFrame_endTime(const QVideoFrame* self) {
	qint64 _ret = self->endTime();
	return static_cast<long long>(_ret);
}

void QVideoFrame_setEndTime(QVideoFrame* self, long long time) {
	self->setEndTime(static_cast<qint64>(time));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QVideoFrame_availableMetaData(const QVideoFrame* self) {
	QVariantMap _ret = self->availableMetaData();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

QVariant* QVideoFrame_metaData(const QVideoFrame* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->metaData(key_QString));
}

void QVideoFrame_setMetaData(QVideoFrame* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setMetaData(key_QString, *value);
}

QImage* QVideoFrame_image(const QVideoFrame* self) {
	return new QImage(self->image());
}

int QVideoFrame_pixelFormatFromImageFormat(int format) {
	QVideoFrame::PixelFormat _ret = QVideoFrame::pixelFormatFromImageFormat(static_cast<QImage::Format>(format));
	return static_cast<int>(_ret);
}

int QVideoFrame_imageFormatFromPixelFormat(int format) {
	QImage::Format _ret = QVideoFrame::imageFormatFromPixelFormat(static_cast<QVideoFrame::PixelFormat>(format));
	return static_cast<int>(_ret);
}

void QVideoFrame_delete(QVideoFrame* self) {
	delete self;
}

