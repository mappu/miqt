#include <QByteArray>
#include <QCameraDevice>
#include <QCameraFormat>
#include <QList>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameradevice.h>
#include "gen_qcameradevice.h"
#include "_cgo_export.h"

QCameraFormat* QCameraFormat_new() {
	return new QCameraFormat();
}

QCameraFormat* QCameraFormat_new2(QCameraFormat* other) {
	return new QCameraFormat(*other);
}

void QCameraFormat_OperatorAssign(QCameraFormat* self, QCameraFormat* other) {
	self->operator=(*other);
}

int QCameraFormat_PixelFormat(const QCameraFormat* self) {
	QVideoFrameFormat::PixelFormat _ret = self->pixelFormat();
	return static_cast<int>(_ret);
}

QSize* QCameraFormat_Resolution(const QCameraFormat* self) {
	return new QSize(self->resolution());
}

float QCameraFormat_MinFrameRate(const QCameraFormat* self) {
	return self->minFrameRate();
}

float QCameraFormat_MaxFrameRate(const QCameraFormat* self) {
	return self->maxFrameRate();
}

bool QCameraFormat_IsNull(const QCameraFormat* self) {
	return self->isNull();
}

bool QCameraFormat_OperatorEqual(const QCameraFormat* self, QCameraFormat* other) {
	return self->operator==(*other);
}

bool QCameraFormat_OperatorNotEqual(const QCameraFormat* self, QCameraFormat* other) {
	return self->operator!=(*other);
}

void QCameraFormat_Delete(QCameraFormat* self) {
	delete self;
}

QCameraDevice* QCameraDevice_new() {
	return new QCameraDevice();
}

QCameraDevice* QCameraDevice_new2(QCameraDevice* other) {
	return new QCameraDevice(*other);
}

void QCameraDevice_OperatorAssign(QCameraDevice* self, QCameraDevice* other) {
	self->operator=(*other);
}

bool QCameraDevice_OperatorEqual(const QCameraDevice* self, QCameraDevice* other) {
	return self->operator==(*other);
}

bool QCameraDevice_OperatorNotEqual(const QCameraDevice* self, QCameraDevice* other) {
	return self->operator!=(*other);
}

bool QCameraDevice_IsNull(const QCameraDevice* self) {
	return self->isNull();
}

struct miqt_string QCameraDevice_Id(const QCameraDevice* self) {
	QByteArray _qb = self->id();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraDevice_Description(const QCameraDevice* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraDevice_IsDefault(const QCameraDevice* self) {
	return self->isDefault();
}

int QCameraDevice_Position(const QCameraDevice* self) {
	QCameraDevice::Position _ret = self->position();
	return static_cast<int>(_ret);
}

struct miqt_array /* of QSize* */  QCameraDevice_PhotoResolutions(const QCameraDevice* self) {
	QList<QSize> _ret = self->photoResolutions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QCameraFormat* */  QCameraDevice_VideoFormats(const QCameraDevice* self) {
	QList<QCameraFormat> _ret = self->videoFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCameraFormat** _arr = static_cast<QCameraFormat**>(malloc(sizeof(QCameraFormat*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCameraFormat(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QCameraDevice_Delete(QCameraDevice* self) {
	delete self;
}

