#include <QCameraZoomControl>
#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcamerazoomcontrol.h>
#include "gen_qcamerazoomcontrol.h"
#include "_cgo_export.h"

void QCameraZoomControl_virtbase(QCameraZoomControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraZoomControl_MetaObject(const QCameraZoomControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraZoomControl_Metacast(QCameraZoomControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraZoomControl_Tr(const char* s) {
	QString _ret = QCameraZoomControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraZoomControl_TrUtf8(const char* s) {
	QString _ret = QCameraZoomControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QCameraZoomControl_MaximumOpticalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->maximumOpticalZoom();
	return static_cast<double>(_ret);
}

double QCameraZoomControl_MaximumDigitalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->maximumDigitalZoom();
	return static_cast<double>(_ret);
}

double QCameraZoomControl_RequestedOpticalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->requestedOpticalZoom();
	return static_cast<double>(_ret);
}

double QCameraZoomControl_RequestedDigitalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->requestedDigitalZoom();
	return static_cast<double>(_ret);
}

double QCameraZoomControl_CurrentOpticalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->currentOpticalZoom();
	return static_cast<double>(_ret);
}

double QCameraZoomControl_CurrentDigitalZoom(const QCameraZoomControl* self) {
	qreal _ret = self->currentDigitalZoom();
	return static_cast<double>(_ret);
}

void QCameraZoomControl_ZoomTo(QCameraZoomControl* self, double optical, double digital) {
	self->zoomTo(static_cast<qreal>(optical), static_cast<qreal>(digital));
}

void QCameraZoomControl_MaximumOpticalZoomChanged(QCameraZoomControl* self, double param1) {
	self->maximumOpticalZoomChanged(static_cast<qreal>(param1));
}

void QCameraZoomControl_connect_MaximumOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::maximumOpticalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraZoomControl_MaximumOpticalZoomChanged(slot, sigval1);
	});
}

void QCameraZoomControl_MaximumDigitalZoomChanged(QCameraZoomControl* self, double param1) {
	self->maximumDigitalZoomChanged(static_cast<qreal>(param1));
}

void QCameraZoomControl_connect_MaximumDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::maximumDigitalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraZoomControl_MaximumDigitalZoomChanged(slot, sigval1);
	});
}

void QCameraZoomControl_RequestedOpticalZoomChanged(QCameraZoomControl* self, double opticalZoom) {
	self->requestedOpticalZoomChanged(static_cast<qreal>(opticalZoom));
}

void QCameraZoomControl_connect_RequestedOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::requestedOpticalZoomChanged), self, [=](qreal opticalZoom) {
		qreal opticalZoom_ret = opticalZoom;
		double sigval1 = static_cast<double>(opticalZoom_ret);
		miqt_exec_callback_QCameraZoomControl_RequestedOpticalZoomChanged(slot, sigval1);
	});
}

void QCameraZoomControl_RequestedDigitalZoomChanged(QCameraZoomControl* self, double digitalZoom) {
	self->requestedDigitalZoomChanged(static_cast<qreal>(digitalZoom));
}

void QCameraZoomControl_connect_RequestedDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::requestedDigitalZoomChanged), self, [=](qreal digitalZoom) {
		qreal digitalZoom_ret = digitalZoom;
		double sigval1 = static_cast<double>(digitalZoom_ret);
		miqt_exec_callback_QCameraZoomControl_RequestedDigitalZoomChanged(slot, sigval1);
	});
}

void QCameraZoomControl_CurrentOpticalZoomChanged(QCameraZoomControl* self, double opticalZoom) {
	self->currentOpticalZoomChanged(static_cast<qreal>(opticalZoom));
}

void QCameraZoomControl_connect_CurrentOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::currentOpticalZoomChanged), self, [=](qreal opticalZoom) {
		qreal opticalZoom_ret = opticalZoom;
		double sigval1 = static_cast<double>(opticalZoom_ret);
		miqt_exec_callback_QCameraZoomControl_CurrentOpticalZoomChanged(slot, sigval1);
	});
}

void QCameraZoomControl_CurrentDigitalZoomChanged(QCameraZoomControl* self, double digitalZoom) {
	self->currentDigitalZoomChanged(static_cast<qreal>(digitalZoom));
}

void QCameraZoomControl_connect_CurrentDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot) {
	QCameraZoomControl::connect(self, static_cast<void (QCameraZoomControl::*)(qreal)>(&QCameraZoomControl::currentDigitalZoomChanged), self, [=](qreal digitalZoom) {
		qreal digitalZoom_ret = digitalZoom;
		double sigval1 = static_cast<double>(digitalZoom_ret);
		miqt_exec_callback_QCameraZoomControl_CurrentDigitalZoomChanged(slot, sigval1);
	});
}

struct miqt_string QCameraZoomControl_Tr2(const char* s, const char* c) {
	QString _ret = QCameraZoomControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraZoomControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraZoomControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraZoomControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraZoomControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraZoomControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraZoomControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraZoomControl_Delete(QCameraZoomControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCameraZoomControl*>( self );
	} else {
		delete self;
	}
}

