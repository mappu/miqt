#include <QCameraFocus>
#include <QCameraFocusZone>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcamerafocus.h>
#include "gen_qcamerafocus.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCameraFocus_opticalZoomChanged(intptr_t, double);
void miqt_exec_callback_QCameraFocus_digitalZoomChanged(intptr_t, double);
void miqt_exec_callback_QCameraFocus_focusZonesChanged(intptr_t);
void miqt_exec_callback_QCameraFocus_maximumOpticalZoomChanged(intptr_t, double);
void miqt_exec_callback_QCameraFocus_maximumDigitalZoomChanged(intptr_t, double);
#ifdef __cplusplus
} /* extern C */
#endif

QCameraFocusZone* QCameraFocusZone_new() {
	return new QCameraFocusZone();
}

QCameraFocusZone* QCameraFocusZone_new2(QRectF* area) {
	return new QCameraFocusZone(*area);
}

QCameraFocusZone* QCameraFocusZone_new3(QCameraFocusZone* other) {
	return new QCameraFocusZone(*other);
}

QCameraFocusZone* QCameraFocusZone_new4(QRectF* area, int status) {
	return new QCameraFocusZone(*area, static_cast<QCameraFocusZone::FocusZoneStatus>(status));
}

void QCameraFocusZone_operatorAssign(QCameraFocusZone* self, QCameraFocusZone* other) {
	self->operator=(*other);
}

bool QCameraFocusZone_operatorEqual(const QCameraFocusZone* self, QCameraFocusZone* other) {
	return (*self == *other);
}

bool QCameraFocusZone_operatorNotEqual(const QCameraFocusZone* self, QCameraFocusZone* other) {
	return (*self != *other);
}

bool QCameraFocusZone_isValid(const QCameraFocusZone* self) {
	return self->isValid();
}

QRectF* QCameraFocusZone_area(const QCameraFocusZone* self) {
	return new QRectF(self->area());
}

int QCameraFocusZone_status(const QCameraFocusZone* self) {
	QCameraFocusZone::FocusZoneStatus _ret = self->status();
	return static_cast<int>(_ret);
}

void QCameraFocusZone_setStatus(QCameraFocusZone* self, int status) {
	self->setStatus(static_cast<QCameraFocusZone::FocusZoneStatus>(status));
}

void QCameraFocusZone_delete(QCameraFocusZone* self) {
	delete self;
}

void QCameraFocus_virtbase(QCameraFocus* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QCameraFocus_metaObject(const QCameraFocus* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraFocus_metacast(QCameraFocus* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraFocus_tr(const char* s) {
	QString _ret = QCameraFocus::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocus_trUtf8(const char* s) {
	QString _ret = QCameraFocus::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraFocus_isAvailable(const QCameraFocus* self) {
	return self->isAvailable();
}

int QCameraFocus_focusMode(const QCameraFocus* self) {
	QCameraFocus::FocusModes _ret = self->focusMode();
	return static_cast<int>(_ret);
}

void QCameraFocus_setFocusMode(QCameraFocus* self, int mode) {
	self->setFocusMode(static_cast<QCameraFocus::FocusModes>(mode));
}

bool QCameraFocus_isFocusModeSupported(const QCameraFocus* self, int mode) {
	return self->isFocusModeSupported(static_cast<QCameraFocus::FocusModes>(mode));
}

int QCameraFocus_focusPointMode(const QCameraFocus* self) {
	QCameraFocus::FocusPointMode _ret = self->focusPointMode();
	return static_cast<int>(_ret);
}

void QCameraFocus_setFocusPointMode(QCameraFocus* self, int mode) {
	self->setFocusPointMode(static_cast<QCameraFocus::FocusPointMode>(mode));
}

bool QCameraFocus_isFocusPointModeSupported(const QCameraFocus* self, int param1) {
	return self->isFocusPointModeSupported(static_cast<QCameraFocus::FocusPointMode>(param1));
}

QPointF* QCameraFocus_customFocusPoint(const QCameraFocus* self) {
	return new QPointF(self->customFocusPoint());
}

void QCameraFocus_setCustomFocusPoint(QCameraFocus* self, QPointF* point) {
	self->setCustomFocusPoint(*point);
}

struct miqt_array /* of QCameraFocusZone* */  QCameraFocus_focusZones(const QCameraFocus* self) {
	QCameraFocusZoneList _ret = self->focusZones();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCameraFocusZone** _arr = static_cast<QCameraFocusZone**>(malloc(sizeof(QCameraFocusZone*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCameraFocusZone(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

double QCameraFocus_maximumOpticalZoom(const QCameraFocus* self) {
	qreal _ret = self->maximumOpticalZoom();
	return static_cast<double>(_ret);
}

double QCameraFocus_maximumDigitalZoom(const QCameraFocus* self) {
	qreal _ret = self->maximumDigitalZoom();
	return static_cast<double>(_ret);
}

double QCameraFocus_opticalZoom(const QCameraFocus* self) {
	qreal _ret = self->opticalZoom();
	return static_cast<double>(_ret);
}

double QCameraFocus_digitalZoom(const QCameraFocus* self) {
	qreal _ret = self->digitalZoom();
	return static_cast<double>(_ret);
}

void QCameraFocus_zoomTo(QCameraFocus* self, double opticalZoom, double digitalZoom) {
	self->zoomTo(static_cast<qreal>(opticalZoom), static_cast<qreal>(digitalZoom));
}

void QCameraFocus_opticalZoomChanged(QCameraFocus* self, double param1) {
	self->opticalZoomChanged(static_cast<qreal>(param1));
}

void QCameraFocus_connect_opticalZoomChanged(QCameraFocus* self, intptr_t slot) {
	QCameraFocus::connect(self, static_cast<void (QCameraFocus::*)(qreal)>(&QCameraFocus::opticalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraFocus_opticalZoomChanged(slot, sigval1);
	});
}

void QCameraFocus_digitalZoomChanged(QCameraFocus* self, double param1) {
	self->digitalZoomChanged(static_cast<qreal>(param1));
}

void QCameraFocus_connect_digitalZoomChanged(QCameraFocus* self, intptr_t slot) {
	QCameraFocus::connect(self, static_cast<void (QCameraFocus::*)(qreal)>(&QCameraFocus::digitalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraFocus_digitalZoomChanged(slot, sigval1);
	});
}

void QCameraFocus_focusZonesChanged(QCameraFocus* self) {
	self->focusZonesChanged();
}

void QCameraFocus_connect_focusZonesChanged(QCameraFocus* self, intptr_t slot) {
	QCameraFocus::connect(self, static_cast<void (QCameraFocus::*)()>(&QCameraFocus::focusZonesChanged), self, [=]() {
		miqt_exec_callback_QCameraFocus_focusZonesChanged(slot);
	});
}

void QCameraFocus_maximumOpticalZoomChanged(QCameraFocus* self, double param1) {
	self->maximumOpticalZoomChanged(static_cast<qreal>(param1));
}

void QCameraFocus_connect_maximumOpticalZoomChanged(QCameraFocus* self, intptr_t slot) {
	QCameraFocus::connect(self, static_cast<void (QCameraFocus::*)(qreal)>(&QCameraFocus::maximumOpticalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraFocus_maximumOpticalZoomChanged(slot, sigval1);
	});
}

void QCameraFocus_maximumDigitalZoomChanged(QCameraFocus* self, double param1) {
	self->maximumDigitalZoomChanged(static_cast<qreal>(param1));
}

void QCameraFocus_connect_maximumDigitalZoomChanged(QCameraFocus* self, intptr_t slot) {
	QCameraFocus::connect(self, static_cast<void (QCameraFocus::*)(qreal)>(&QCameraFocus::maximumDigitalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraFocus_maximumDigitalZoomChanged(slot, sigval1);
	});
}

struct miqt_string QCameraFocus_tr2(const char* s, const char* c) {
	QString _ret = QCameraFocus::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocus_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraFocus::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocus_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraFocus::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocus_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraFocus::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

