#include <QCameraLocksControl>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameralockscontrol.h>
#include "gen_qcameralockscontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCameraLocksControl_lockStatusChanged(intptr_t, int, int, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QCameraLocksControl_virtbase(QCameraLocksControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraLocksControl_metaObject(const QCameraLocksControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraLocksControl_metacast(QCameraLocksControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraLocksControl_tr(const char* s) {
	QString _ret = QCameraLocksControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraLocksControl_trUtf8(const char* s) {
	QString _ret = QCameraLocksControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCameraLocksControl_supportedLocks(const QCameraLocksControl* self) {
	QCamera::LockTypes _ret = self->supportedLocks();
	return static_cast<int>(_ret);
}

int QCameraLocksControl_lockStatus(const QCameraLocksControl* self, int lock) {
	QCamera::LockStatus _ret = self->lockStatus(static_cast<QCamera::LockType>(lock));
	return static_cast<int>(_ret);
}

void QCameraLocksControl_searchAndLock(QCameraLocksControl* self, int locks) {
	self->searchAndLock(static_cast<QCamera::LockTypes>(locks));
}

void QCameraLocksControl_unlock(QCameraLocksControl* self, int locks) {
	self->unlock(static_cast<QCamera::LockTypes>(locks));
}

void QCameraLocksControl_lockStatusChanged(QCameraLocksControl* self, int type, int status, int reason) {
	self->lockStatusChanged(static_cast<QCamera::LockType>(type), static_cast<QCamera::LockStatus>(status), static_cast<QCamera::LockChangeReason>(reason));
}

void QCameraLocksControl_connect_lockStatusChanged(QCameraLocksControl* self, intptr_t slot) {
	QCameraLocksControl::connect(self, static_cast<void (QCameraLocksControl::*)(QCamera::LockType, QCamera::LockStatus, QCamera::LockChangeReason)>(&QCameraLocksControl::lockStatusChanged), self, [=](QCamera::LockType type, QCamera::LockStatus status, QCamera::LockChangeReason reason) {
		QCamera::LockType type_ret = type;
		int sigval1 = static_cast<int>(type_ret);
		QCamera::LockStatus status_ret = status;
		int sigval2 = static_cast<int>(status_ret);
		QCamera::LockChangeReason reason_ret = reason;
		int sigval3 = static_cast<int>(reason_ret);
		miqt_exec_callback_QCameraLocksControl_lockStatusChanged(slot, sigval1, sigval2, sigval3);
	});
}

struct miqt_string QCameraLocksControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraLocksControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraLocksControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraLocksControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraLocksControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraLocksControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraLocksControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraLocksControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraLocksControl_delete(QCameraLocksControl* self) {
	delete self;
}

