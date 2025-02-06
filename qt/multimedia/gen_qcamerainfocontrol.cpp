#include <QCameraInfoControl>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcamerainfocontrol.h>
#include "gen_qcamerainfocontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QCameraInfoControl_virtbase(QCameraInfoControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraInfoControl_metaObject(const QCameraInfoControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraInfoControl_metacast(QCameraInfoControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraInfoControl_tr(const char* s) {
	QString _ret = QCameraInfoControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraInfoControl_trUtf8(const char* s) {
	QString _ret = QCameraInfoControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCameraInfoControl_cameraPosition(const QCameraInfoControl* self, struct miqt_string deviceName) {
	QString deviceName_QString = QString::fromUtf8(deviceName.data, deviceName.len);
	QCamera::Position _ret = self->cameraPosition(deviceName_QString);
	return static_cast<int>(_ret);
}

int QCameraInfoControl_cameraOrientation(const QCameraInfoControl* self, struct miqt_string deviceName) {
	QString deviceName_QString = QString::fromUtf8(deviceName.data, deviceName.len);
	return self->cameraOrientation(deviceName_QString);
}

struct miqt_string QCameraInfoControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraInfoControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraInfoControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraInfoControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraInfoControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraInfoControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraInfoControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraInfoControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraInfoControl_delete(QCameraInfoControl* self) {
	delete self;
}

