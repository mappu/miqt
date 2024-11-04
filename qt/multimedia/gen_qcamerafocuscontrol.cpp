#include <QCameraFocusControl>
#include <QCameraFocusZone>
#include <QList>
#include <QMetaObject>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcamerafocuscontrol.h>
#include "gen_qcamerafocuscontrol.h"
#include "_cgo_export.h"

QMetaObject* QCameraFocusControl_MetaObject(const QCameraFocusControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraFocusControl_Metacast(QCameraFocusControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraFocusControl_Tr(const char* s) {
	QString _ret = QCameraFocusControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocusControl_TrUtf8(const char* s) {
	QString _ret = QCameraFocusControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCameraFocusControl_FocusMode(const QCameraFocusControl* self) {
	QCameraFocus::FocusModes _ret = self->focusMode();
	return static_cast<int>(_ret);
}

void QCameraFocusControl_SetFocusMode(QCameraFocusControl* self, int mode) {
	self->setFocusMode(static_cast<QCameraFocus::FocusModes>(mode));
}

bool QCameraFocusControl_IsFocusModeSupported(const QCameraFocusControl* self, int mode) {
	return self->isFocusModeSupported(static_cast<QCameraFocus::FocusModes>(mode));
}

int QCameraFocusControl_FocusPointMode(const QCameraFocusControl* self) {
	QCameraFocus::FocusPointMode _ret = self->focusPointMode();
	return static_cast<int>(_ret);
}

void QCameraFocusControl_SetFocusPointMode(QCameraFocusControl* self, int mode) {
	self->setFocusPointMode(static_cast<QCameraFocus::FocusPointMode>(mode));
}

bool QCameraFocusControl_IsFocusPointModeSupported(const QCameraFocusControl* self, int mode) {
	return self->isFocusPointModeSupported(static_cast<QCameraFocus::FocusPointMode>(mode));
}

QPointF* QCameraFocusControl_CustomFocusPoint(const QCameraFocusControl* self) {
	return new QPointF(self->customFocusPoint());
}

void QCameraFocusControl_SetCustomFocusPoint(QCameraFocusControl* self, QPointF* point) {
	self->setCustomFocusPoint(*point);
}

struct miqt_array QCameraFocusControl_FocusZones(const QCameraFocusControl* self) {
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

void QCameraFocusControl_FocusModeChanged(QCameraFocusControl* self, int mode) {
	self->focusModeChanged(static_cast<QCameraFocus::FocusModes>(mode));
}

void QCameraFocusControl_connect_FocusModeChanged(QCameraFocusControl* self, intptr_t slot) {
	QCameraFocusControl::connect(self, static_cast<void (QCameraFocusControl::*)(QCameraFocus::FocusModes)>(&QCameraFocusControl::focusModeChanged), self, [=](QCameraFocus::FocusModes mode) {
		QCameraFocus::FocusModes mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QCameraFocusControl_FocusModeChanged(slot, sigval1);
	});
}

void QCameraFocusControl_FocusPointModeChanged(QCameraFocusControl* self, int mode) {
	self->focusPointModeChanged(static_cast<QCameraFocus::FocusPointMode>(mode));
}

void QCameraFocusControl_connect_FocusPointModeChanged(QCameraFocusControl* self, intptr_t slot) {
	QCameraFocusControl::connect(self, static_cast<void (QCameraFocusControl::*)(QCameraFocus::FocusPointMode)>(&QCameraFocusControl::focusPointModeChanged), self, [=](QCameraFocus::FocusPointMode mode) {
		QCameraFocus::FocusPointMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QCameraFocusControl_FocusPointModeChanged(slot, sigval1);
	});
}

void QCameraFocusControl_CustomFocusPointChanged(QCameraFocusControl* self, QPointF* point) {
	self->customFocusPointChanged(*point);
}

void QCameraFocusControl_connect_CustomFocusPointChanged(QCameraFocusControl* self, intptr_t slot) {
	QCameraFocusControl::connect(self, static_cast<void (QCameraFocusControl::*)(const QPointF&)>(&QCameraFocusControl::customFocusPointChanged), self, [=](const QPointF& point) {
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		miqt_exec_callback_QCameraFocusControl_CustomFocusPointChanged(slot, sigval1);
	});
}

void QCameraFocusControl_FocusZonesChanged(QCameraFocusControl* self) {
	self->focusZonesChanged();
}

void QCameraFocusControl_connect_FocusZonesChanged(QCameraFocusControl* self, intptr_t slot) {
	QCameraFocusControl::connect(self, static_cast<void (QCameraFocusControl::*)()>(&QCameraFocusControl::focusZonesChanged), self, [=]() {
		miqt_exec_callback_QCameraFocusControl_FocusZonesChanged(slot);
	});
}

struct miqt_string QCameraFocusControl_Tr2(const char* s, const char* c) {
	QString _ret = QCameraFocusControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocusControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraFocusControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocusControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraFocusControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFocusControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraFocusControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraFocusControl_Delete(QCameraFocusControl* self) {
	delete self;
}

