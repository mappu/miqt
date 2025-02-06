#include <QCameraZoomControl>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcamerazoomcontrol.h>
#include "gen_qcamerazoomcontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCameraZoomControl_maximumOpticalZoomChanged(intptr_t, double);
void miqt_exec_callback_QCameraZoomControl_maximumDigitalZoomChanged(intptr_t, double);
void miqt_exec_callback_QCameraZoomControl_requestedOpticalZoomChanged(intptr_t, double);
void miqt_exec_callback_QCameraZoomControl_requestedDigitalZoomChanged(intptr_t, double);
void miqt_exec_callback_QCameraZoomControl_currentOpticalZoomChanged(intptr_t, double);
void miqt_exec_callback_QCameraZoomControl_currentDigitalZoomChanged(intptr_t, double);
#ifdef __cplusplus
} /* extern C */
#endif

void QCameraZoomControl_virtbase(QCameraZoomControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraZoomControl_metaObject(const QCameraZoomControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraZoomControl_metacast(QCameraZoomControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraZoomControl_tr(const char* s) {
	QString _ret = QCameraZoomControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraZoomControl_trUtf8(const char* s) {
	QString _ret = QCameraZoomControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QCameraZoomControl_maximumOpticalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->maximumOpticalZoom();
	return static_cast<double>(_ret);
}

double QCameraZoomControl_maximumDigitalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->maximumDigitalZoom();
	return static_cast<double>(_ret);
}

double QCameraZoomControl_requestedOpticalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->requestedOpticalZoom();
	return static_cast<double>(_ret);
}

double QCameraZoomControl_requestedDigitalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->requestedDigitalZoom();
	return static_cast<double>(_ret);
}

double QCameraZoomControl_currentOpticalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->currentOpticalZoom();
	return static_cast<double>(_ret);
}

double QCameraZoomControl_currentDigitalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->currentDigitalZoom();
	return static_cast<double>(_ret);
}

void QCameraZoomControl_zoomTo(QCameraZoomControl* self, double optical, double digital) {
	self->zoomTo(static_cast<qreal>(optical), static_cast<qreal>(digital));
}

void QCameraZoomControl_maximumOpticalZoomChanged(QCameraZoomControl* self, double param1) {
	self->maximumOpticalZoomChanged(static_cast<qreal>(param1));
}

void QCameraZoomControl_connect_maximumOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::maximumOpticalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraZoomControl_maximumOpticalZoomChanged(slot, sigval1);
	});
}

void QCameraZoomControl_maximumDigitalZoomChanged(QCameraZoomControl* self, double param1) {
	self->maximumDigitalZoomChanged(static_cast<qreal>(param1));
}

void QCameraZoomControl_connect_maximumDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::maximumDigitalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraZoomControl_maximumDigitalZoomChanged(slot, sigval1);
	});
}

void QCameraZoomControl_requestedOpticalZoomChanged(QCameraZoomControl* self, double opticalZoom) {
	self->requestedOpticalZoomChanged(static_cast<qreal>(opticalZoom));
}

void QCameraZoomControl_connect_requestedOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::requestedOpticalZoomChanged), self, [=](qreal opticalZoom) {
		qreal opticalZoom_ret = opticalZoom;
		double sigval1 = static_cast<double>(opticalZoom_ret);
		miqt_exec_callback_QCameraZoomControl_requestedOpticalZoomChanged(slot, sigval1);
	});
}

void QCameraZoomControl_requestedDigitalZoomChanged(QCameraZoomControl* self, double digitalZoom) {
	self->requestedDigitalZoomChanged(static_cast<qreal>(digitalZoom));
}

void QCameraZoomControl_connect_requestedDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::requestedDigitalZoomChanged), self, [=](qreal digitalZoom) {
		qreal digitalZoom_ret = digitalZoom;
		double sigval1 = static_cast<double>(digitalZoom_ret);
		miqt_exec_callback_QCameraZoomControl_requestedDigitalZoomChanged(slot, sigval1);
	});
}

void QCameraZoomControl_currentOpticalZoomChanged(QCameraZoomControl* self, double opticalZoom) {
	self->currentOpticalZoomChanged(static_cast<qreal>(opticalZoom));
}

void QCameraZoomControl_connect_currentOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::currentOpticalZoomChanged), self, [=](qreal opticalZoom) {
		qreal opticalZoom_ret = opticalZoom;
		double sigval1 = static_cast<double>(opticalZoom_ret);
		miqt_exec_callback_QCameraZoomControl_currentOpticalZoomChanged(slot, sigval1);
	});
}

void QCameraZoomControl_currentDigitalZoomChanged(QCameraZoomControl* self, double digitalZoom) {
	self->currentDigitalZoomChanged(static_cast<qreal>(digitalZoom));
}

void QCameraZoomControl_connect_currentDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::currentDigitalZoomChanged), self, [=](qreal digitalZoom) {
		qreal digitalZoom_ret = digitalZoom;
		double sigval1 = static_cast<double>(digitalZoom_ret);
		miqt_exec_callback_QCameraZoomControl_currentDigitalZoomChanged(slot, sigval1);
	});
}

struct miqt_string QCameraZoomControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraZoomControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraZoomControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraZoomControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraZoomControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraZoomControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraZoomControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraZoomControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraZoomControl_delete(QCameraZoomControl* self) {
	delete self;
}

