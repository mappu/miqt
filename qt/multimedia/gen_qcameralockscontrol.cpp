#include <QCameraLocksControl>
#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameralockscontrol.h>
#include "gen_qcameralockscontrol.h"
#include "_cgo_export.h"

QMetaObject* QCameraLocksControl_MetaObject(const QCameraLocksControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraLocksControl_Metacast(QCameraLocksControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraLocksControl_Tr(const char* s) {
	QString _ret = QCameraLocksControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraLocksControl_TrUtf8(const char* s) {
	QString _ret = QCameraLocksControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCameraLocksControl_SupportedLocks(const QCameraLocksControl* self) {
	QCamera::LockTypes _ret = self->supportedLocks();
	return static_cast<int>(_ret);
}

int QCameraLocksControl_LockStatus(const QCameraLocksControl* self, int lock) {
	QCamera::LockStatus _ret = self->lockStatus(static_cast<QCamera::LockType>(lock));
	return static_cast<int>(_ret);
}

void QCameraLocksControl_SearchAndLock(QCameraLocksControl* self, int locks) {
	self->searchAndLock(static_cast<QCamera::LockTypes>(locks));
}

void QCameraLocksControl_Unlock(QCameraLocksControl* self, int locks) {
	self->unlock(static_cast<QCamera::LockTypes>(locks));
}

void QCameraLocksControl_LockStatusChanged(QCameraLocksControl* self, int typeVal, int status, int reason) {
	self->lockStatusChanged(static_cast<QCamera::LockType>(typeVal), static_cast<QCamera::LockStatus>(status), static_cast<QCamera::LockChangeReason>(reason));
}

void QCameraLocksControl_connect_LockStatusChanged(QCameraLocksControl* self, intptr_t slot) {
	QCameraLocksControl::connect(self, static_cast<void (QCameraLocksControl::*)(QCamera::LockType, QCamera::LockStatus, QCamera::LockChangeReason)>(&QCameraLocksControl::lockStatusChanged), self, [=](QCamera::LockType typeVal, QCamera::LockStatus status, QCamera::LockChangeReason reason) {
		QCamera::LockType typeVal_ret = typeVal;
		int sigval1 = static_cast<int>(typeVal_ret);
		QCamera::LockStatus status_ret = status;
		int sigval2 = static_cast<int>(status_ret);
		QCamera::LockChangeReason reason_ret = reason;
		int sigval3 = static_cast<int>(reason_ret);
		miqt_exec_callback_QCameraLocksControl_LockStatusChanged(slot, sigval1, sigval2, sigval3);
	});
}

struct miqt_string QCameraLocksControl_Tr2(const char* s, const char* c) {
	QString _ret = QCameraLocksControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraLocksControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraLocksControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraLocksControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraLocksControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraLocksControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraLocksControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraLocksControl_Delete(QCameraLocksControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCameraLocksControl*>( self );
	} else {
		delete self;
	}
}

