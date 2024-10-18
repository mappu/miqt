#include <QGraphicsRotation>
#include <QGraphicsScale>
#include <QGraphicsTransform>
#include <QMatrix4x4>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVector3D>
#include <qgraphicstransform.h>
#include "gen_qgraphicstransform.h"
#include "_cgo_export.h"

QMetaObject* QGraphicsTransform_MetaObject(const QGraphicsTransform* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsTransform_Metacast(QGraphicsTransform* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsTransform_Tr(const char* s) {
	QString _ret = QGraphicsTransform::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_TrUtf8(const char* s) {
	QString _ret = QGraphicsTransform::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTransform_ApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

struct miqt_string QGraphicsTransform_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsTransform::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTransform::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsTransform::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTransform::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTransform_Delete(QGraphicsTransform* self) {
	delete self;
}

QGraphicsScale* QGraphicsScale_new() {
	return new QGraphicsScale();
}

QGraphicsScale* QGraphicsScale_new2(QObject* parent) {
	return new QGraphicsScale(parent);
}

QMetaObject* QGraphicsScale_MetaObject(const QGraphicsScale* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsScale_Metacast(QGraphicsScale* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsScale_Tr(const char* s) {
	QString _ret = QGraphicsScale::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_TrUtf8(const char* s) {
	QString _ret = QGraphicsScale::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVector3D* QGraphicsScale_Origin(const QGraphicsScale* self) {
	return new QVector3D(self->origin());
}

void QGraphicsScale_SetOrigin(QGraphicsScale* self, QVector3D* point) {
	self->setOrigin(*point);
}

double QGraphicsScale_XScale(const QGraphicsScale* self) {
	qreal _ret = self->xScale();
	return static_cast<double>(_ret);
}

void QGraphicsScale_SetXScale(QGraphicsScale* self, double xScale) {
	self->setXScale(static_cast<qreal>(xScale));
}

double QGraphicsScale_YScale(const QGraphicsScale* self) {
	qreal _ret = self->yScale();
	return static_cast<double>(_ret);
}

void QGraphicsScale_SetYScale(QGraphicsScale* self, double yScale) {
	self->setYScale(static_cast<qreal>(yScale));
}

double QGraphicsScale_ZScale(const QGraphicsScale* self) {
	qreal _ret = self->zScale();
	return static_cast<double>(_ret);
}

void QGraphicsScale_SetZScale(QGraphicsScale* self, double zScale) {
	self->setZScale(static_cast<qreal>(zScale));
}

void QGraphicsScale_ApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

void QGraphicsScale_OriginChanged(QGraphicsScale* self) {
	self->originChanged();
}

void QGraphicsScale_connect_OriginChanged(QGraphicsScale* self, intptr_t slot) {
	QGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::originChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScale_OriginChanged(slot);
	});
}

void QGraphicsScale_XScaleChanged(QGraphicsScale* self) {
	self->xScaleChanged();
}

void QGraphicsScale_connect_XScaleChanged(QGraphicsScale* self, intptr_t slot) {
	QGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::xScaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScale_XScaleChanged(slot);
	});
}

void QGraphicsScale_YScaleChanged(QGraphicsScale* self) {
	self->yScaleChanged();
}

void QGraphicsScale_connect_YScaleChanged(QGraphicsScale* self, intptr_t slot) {
	QGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::yScaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScale_YScaleChanged(slot);
	});
}

void QGraphicsScale_ZScaleChanged(QGraphicsScale* self) {
	self->zScaleChanged();
}

void QGraphicsScale_connect_ZScaleChanged(QGraphicsScale* self, intptr_t slot) {
	QGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::zScaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScale_ZScaleChanged(slot);
	});
}

void QGraphicsScale_ScaleChanged(QGraphicsScale* self) {
	self->scaleChanged();
}

void QGraphicsScale_connect_ScaleChanged(QGraphicsScale* self, intptr_t slot) {
	QGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::scaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScale_ScaleChanged(slot);
	});
}

struct miqt_string QGraphicsScale_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsScale::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsScale::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsScale::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsScale::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsScale_Delete(QGraphicsScale* self) {
	delete self;
}

QGraphicsRotation* QGraphicsRotation_new() {
	return new QGraphicsRotation();
}

QGraphicsRotation* QGraphicsRotation_new2(QObject* parent) {
	return new QGraphicsRotation(parent);
}

QMetaObject* QGraphicsRotation_MetaObject(const QGraphicsRotation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsRotation_Metacast(QGraphicsRotation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsRotation_Tr(const char* s) {
	QString _ret = QGraphicsRotation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_TrUtf8(const char* s) {
	QString _ret = QGraphicsRotation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVector3D* QGraphicsRotation_Origin(const QGraphicsRotation* self) {
	return new QVector3D(self->origin());
}

void QGraphicsRotation_SetOrigin(QGraphicsRotation* self, QVector3D* point) {
	self->setOrigin(*point);
}

double QGraphicsRotation_Angle(const QGraphicsRotation* self) {
	qreal _ret = self->angle();
	return static_cast<double>(_ret);
}

void QGraphicsRotation_SetAngle(QGraphicsRotation* self, double angle) {
	self->setAngle(static_cast<qreal>(angle));
}

QVector3D* QGraphicsRotation_Axis(const QGraphicsRotation* self) {
	return new QVector3D(self->axis());
}

void QGraphicsRotation_SetAxis(QGraphicsRotation* self, QVector3D* axis) {
	self->setAxis(*axis);
}

void QGraphicsRotation_SetAxisWithAxis(QGraphicsRotation* self, int axis) {
	self->setAxis(static_cast<Qt::Axis>(axis));
}

void QGraphicsRotation_ApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

void QGraphicsRotation_OriginChanged(QGraphicsRotation* self) {
	self->originChanged();
}

void QGraphicsRotation_connect_OriginChanged(QGraphicsRotation* self, intptr_t slot) {
	QGraphicsRotation::connect(self, static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::originChanged), self, [=]() {
		miqt_exec_callback_QGraphicsRotation_OriginChanged(slot);
	});
}

void QGraphicsRotation_AngleChanged(QGraphicsRotation* self) {
	self->angleChanged();
}

void QGraphicsRotation_connect_AngleChanged(QGraphicsRotation* self, intptr_t slot) {
	QGraphicsRotation::connect(self, static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::angleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsRotation_AngleChanged(slot);
	});
}

void QGraphicsRotation_AxisChanged(QGraphicsRotation* self) {
	self->axisChanged();
}

void QGraphicsRotation_connect_AxisChanged(QGraphicsRotation* self, intptr_t slot) {
	QGraphicsRotation::connect(self, static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::axisChanged), self, [=]() {
		miqt_exec_callback_QGraphicsRotation_AxisChanged(slot);
	});
}

struct miqt_string QGraphicsRotation_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsRotation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsRotation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsRotation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsRotation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsRotation_Delete(QGraphicsRotation* self) {
	delete self;
}

