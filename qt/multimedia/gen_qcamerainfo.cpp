#include <QByteArray>
#include <QCamera>
#include <QCameraInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcamerainfo.h>
#include "gen_qcamerainfo.h"
#include "_cgo_export.h"

void QCameraInfo_new(QCameraInfo** outptr_QCameraInfo) {
	QCameraInfo* ret = new QCameraInfo();
	*outptr_QCameraInfo = ret;
}

void QCameraInfo_new2(QCamera* camera, QCameraInfo** outptr_QCameraInfo) {
	QCameraInfo* ret = new QCameraInfo(*camera);
	*outptr_QCameraInfo = ret;
}

void QCameraInfo_new3(QCameraInfo* other, QCameraInfo** outptr_QCameraInfo) {
	QCameraInfo* ret = new QCameraInfo(*other);
	*outptr_QCameraInfo = ret;
}

void QCameraInfo_new4(struct miqt_string name, QCameraInfo** outptr_QCameraInfo) {
	QByteArray name_QByteArray(name.data, name.len);
	QCameraInfo* ret = new QCameraInfo(name_QByteArray);
	*outptr_QCameraInfo = ret;
}

void QCameraInfo_OperatorAssign(QCameraInfo* self, QCameraInfo* other) {
	self->operator=(*other);
}

bool QCameraInfo_OperatorEqual(const QCameraInfo* self, QCameraInfo* other) {
	return (*self == *other);
}

bool QCameraInfo_OperatorNotEqual(const QCameraInfo* self, QCameraInfo* other) {
	return (*self != *other);
}

bool QCameraInfo_IsNull(const QCameraInfo* self) {
	return self->isNull();
}

struct miqt_string QCameraInfo_DeviceName(const QCameraInfo* self) {
	QString _ret = self->deviceName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraInfo_Description(const QCameraInfo* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCameraInfo_Position(const QCameraInfo* self) {
	QCamera::Position _ret = self->position();
	return static_cast<int>(_ret);
}

int QCameraInfo_Orientation(const QCameraInfo* self) {
	return self->orientation();
}

QCameraInfo* QCameraInfo_DefaultCamera() {
	return new QCameraInfo(QCameraInfo::defaultCamera());
}

struct miqt_array /* of QCameraInfo* */  QCameraInfo_AvailableCameras() {
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

struct miqt_array /* of QCameraInfo* */  QCameraInfo_AvailableCameras1(int position) {
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

void QCameraInfo_Delete(QCameraInfo* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCameraInfo*>( self );
	} else {
		delete self;
	}
}

