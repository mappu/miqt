#include <QByteArray>
#include <QCamera>
#include <QCameraInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcamerainfo.h>
#include "gen_qcamerainfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCameraInfo* QCameraInfo_new() {
	return new QCameraInfo();
}

QCameraInfo* QCameraInfo_new2(QCamera* camera) {
	return new QCameraInfo(*camera);
}

QCameraInfo* QCameraInfo_new3(QCameraInfo* other) {
	return new QCameraInfo(*other);
}

QCameraInfo* QCameraInfo_new4(struct miqt_string name) {
	QByteArray name_QByteArray(name.data, name.len);
	return new QCameraInfo(name_QByteArray);
}

void QCameraInfo_operatorAssign(QCameraInfo* self, QCameraInfo* other) {
	self->operator=(*other);
}

bool QCameraInfo_operatorEqual(const QCameraInfo* self, QCameraInfo* other) {
	return (*self == *other);
}

bool QCameraInfo_operatorNotEqual(const QCameraInfo* self, QCameraInfo* other) {
	return (*self != *other);
}

bool QCameraInfo_isNull(const QCameraInfo* self) {
	return self->isNull();
}

struct miqt_string QCameraInfo_deviceName(const QCameraInfo* self) {
	QString _ret = self->deviceName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraInfo_description(const QCameraInfo* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCameraInfo_position(const QCameraInfo* self) {
	QCamera::Position _ret = self->position();
	return static_cast<int>(_ret);
}

int QCameraInfo_orientation(const QCameraInfo* self) {
	return self->orientation();
}

QCameraInfo* QCameraInfo_defaultCamera() {
	return new QCameraInfo(QCameraInfo::defaultCamera());
}

struct miqt_array /* of QCameraInfo* */  QCameraInfo_availableCameras() {
	QList<QCameraInfo> _ret = QCameraInfo::availableCameras();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCameraInfo** _arr = static_cast<QCameraInfo**>(malloc(sizeof(QCameraInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCameraInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QCameraInfo* */  QCameraInfo_availableCameras1(int position) {
	QList<QCameraInfo> _ret = QCameraInfo::availableCameras(static_cast<QCamera::Position>(position));
	// Convert QList<> from C++ memory to manually-managed C memory
	QCameraInfo** _arr = static_cast<QCameraInfo**>(malloc(sizeof(QCameraInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCameraInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QCameraInfo_delete(QCameraInfo* self) {
	delete self;
}

