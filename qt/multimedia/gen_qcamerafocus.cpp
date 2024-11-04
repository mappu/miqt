#include <QCameraFocus>
#include <QCameraFocusZone>
#include <QList>
#include <QMetaObject>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcamerafocus.h>
#include "gen_qcamerafocus.h"
#include "_cgo_export.h"

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

void QCameraFocusZone_OperatorAssign(QCameraFocusZone* self, QCameraFocusZone* other) {
	self->operator=(*other);
}

bool QCameraFocusZone_OperatorEqual(const QCameraFocusZone* self, QCameraFocusZone* other) {
	return self->operator==(*other);
}

bool QCameraFocusZone_OperatorNotEqual(const QCameraFocusZone* self, QCameraFocusZone* other) {
	return self->operator!=(*other);
}

bool QCameraFocusZone_IsValid(const QCameraFocusZone* self) {
	return self->isValid();
}

QRectF* QCameraFocusZone_Area(const QCameraFocusZone* self) {
	return new QRectF(self->area());
}

int QCameraFocusZone_Status(const QCameraFocusZone* self) {
	QCameraFocusZone::FocusZoneStatus _ret = self->status();
	return static_cast<int>(_ret);
}

void QCameraFocusZone_SetStatus(QCameraFocusZone* self, int status) {
	self->setStatus(static_cast<QCameraFocusZone::FocusZoneStatus>(status));
}

void QCameraFocusZone_Delete(QCameraFocusZone* self) {
	delete self;
}

QMetaObject* QCameraFocus_MetaObject(const QCameraFocus* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraFocus_Metacast(QCameraFocus* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraFocus_Tr(const char* s) {
	QString _ret = QCameraFocus::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocus_TrUtf8(const char* s) {
	QString _ret = QCameraFocus::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraFocus_IsAvailable(const QCameraFocus* self) {
	return self->isAvailable();
}

int QCameraFocus_FocusMode(const QCameraFocus* self) {
	QCameraFocus::FocusModes _ret = self->focusMode();
	return static_cast<int>(_ret);
}

void QCameraFocus_SetFocusMode(QCameraFocus* self, int mode) {
	self->setFocusMode(static_cast<QCameraFocus::FocusModes>(mode));
}

bool QCameraFocus_IsFocusModeSupported(const QCameraFocus* self, int mode) {
	return self->isFocusModeSupported(static_cast<QCameraFocus::FocusModes>(mode));
}

int QCameraFocus_FocusPointMode(const QCameraFocus* self) {
	QCameraFocus::FocusPointMode _ret = self->focusPointMode();
	return static_cast<int>(_ret);
}

void QCameraFocus_SetFocusPointMode(QCameraFocus* self, int mode) {
	self->setFocusPointMode(static_cast<QCameraFocus::FocusPointMode>(mode));
}

bool QCameraFocus_IsFocusPointModeSupported(const QCameraFocus* self, int param1) {
	return self->isFocusPointModeSupported(static_cast<QCameraFocus::FocusPointMode>(param1));
}

QPointF* QCameraFocus_CustomFocusPoint(const QCameraFocus* self) {
	return new QPointF(self->customFocusPoint());
}

void QCameraFocus_SetCustomFocusPoint(QCameraFocus* self, QPointF* point) {
	self->setCustomFocusPoint(*point);
}

struct miqt_array QCameraFocus_FocusZones(const QCameraFocus* self) {
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

double QCameraFocus_MaximumOpticalZoom(const QCameraFocus* self) {
	qreal _ret = self->maximumOpticalZoom();
	return static_cast<double>(_ret);
}

double QCameraFocus_MaximumDigitalZoom(const QCameraFocus* self) {
	qreal _ret = self->maximumDigitalZoom();
	return static_cast<double>(_ret);
}

double QCameraFocus_OpticalZoom(const QCameraFocus* self) {
	qreal _ret = self->opticalZoom();
	return static_cast<double>(_ret);
}

double QCameraFocus_DigitalZoom(const QCameraFocus* self) {
	qreal _ret = self->digitalZoom();
	return static_cast<double>(_ret);
}

void QCameraFocus_ZoomTo(QCameraFocus* self, double opticalZoom, double digitalZoom) {
	self->zoomTo(static_cast<qreal>(opticalZoom), static_cast<qreal>(digitalZoom));
}

void QCameraFocus_OpticalZoomChanged(QCameraFocus* self, double param1) {
	self->opticalZoomChanged(static_cast<qreal>(param1));
}

void QCameraFocus_connect_OpticalZoomChanged(QCameraFocus* self, intptr_t slot) {
	QCameraFocus::connect(self, static_cast<void (QCameraFocus::*)(qreal)>(&QCameraFocus::opticalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraFocus_OpticalZoomChanged(slot, sigval1);
	});
}

void QCameraFocus_DigitalZoomChanged(QCameraFocus* self, double param1) {
	self->digitalZoomChanged(static_cast<qreal>(param1));
}

void QCameraFocus_connect_DigitalZoomChanged(QCameraFocus* self, intptr_t slot) {
	QCameraFocus::connect(self, static_cast<void (QCameraFocus::*)(qreal)>(&QCameraFocus::digitalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraFocus_DigitalZoomChanged(slot, sigval1);
	});
}

void QCameraFocus_FocusZonesChanged(QCameraFocus* self) {
	self->focusZonesChanged();
}

void QCameraFocus_connect_FocusZonesChanged(QCameraFocus* self, intptr_t slot) {
	QCameraFocus::connect(self, static_cast<void (QCameraFocus::*)()>(&QCameraFocus::focusZonesChanged), self, [=]() {
		miqt_exec_callback_QCameraFocus_FocusZonesChanged(slot);
	});
}

void QCameraFocus_MaximumOpticalZoomChanged(QCameraFocus* self, double param1) {
	self->maximumOpticalZoomChanged(static_cast<qreal>(param1));
}

void QCameraFocus_connect_MaximumOpticalZoomChanged(QCameraFocus* self, intptr_t slot) {
	QCameraFocus::connect(self, static_cast<void (QCameraFocus::*)(qreal)>(&QCameraFocus::maximumOpticalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraFocus_MaximumOpticalZoomChanged(slot, sigval1);
	});
}

void QCameraFocus_MaximumDigitalZoomChanged(QCameraFocus* self, double param1) {
	self->maximumDigitalZoomChanged(static_cast<qreal>(param1));
}

void QCameraFocus_connect_MaximumDigitalZoomChanged(QCameraFocus* self, intptr_t slot) {
	QCameraFocus::connect(self, static_cast<void (QCameraFocus::*)(qreal)>(&QCameraFocus::maximumDigitalZoomChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QCameraFocus_MaximumDigitalZoomChanged(slot, sigval1);
	});
}

struct miqt_string QCameraFocus_Tr2(const char* s, const char* c) {
	QString _ret = QCameraFocus::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocus_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraFocus::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocus_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraFocus::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocus_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraFocus::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

