#include <QEasingCurve>
#include <QList>
#include <QPointF>
#include <qeasingcurve.h>
#include "gen_qeasingcurve.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QEasingCurve* QEasingCurve_new() {
	return new QEasingCurve();
}

QEasingCurve* QEasingCurve_new2(QEasingCurve* other) {
	return new QEasingCurve(*other);
}

QEasingCurve* QEasingCurve_new3(int typeVal) {
	return new QEasingCurve(static_cast<QEasingCurve::Type>(typeVal));
}

void QEasingCurve_OperatorAssign(QEasingCurve* self, QEasingCurve* other) {
	self->operator=(*other);
}

void QEasingCurve_Swap(QEasingCurve* self, QEasingCurve* other) {
	self->swap(*other);
}

bool QEasingCurve_OperatorEqual(const QEasingCurve* self, QEasingCurve* other) {
	return (*self == *other);
}

bool QEasingCurve_OperatorNotEqual(const QEasingCurve* self, QEasingCurve* other) {
	return (*self != *other);
}

double QEasingCurve_Amplitude(const QEasingCurve* self) {
	qreal _ret = self->amplitude();
	return static_cast<double>(_ret);
}

void QEasingCurve_SetAmplitude(QEasingCurve* self, double amplitude) {
	self->setAmplitude(static_cast<qreal>(amplitude));
}

double QEasingCurve_Period(const QEasingCurve* self) {
	qreal _ret = self->period();
	return static_cast<double>(_ret);
}

void QEasingCurve_SetPeriod(QEasingCurve* self, double period) {
	self->setPeriod(static_cast<qreal>(period));
}

double QEasingCurve_Overshoot(const QEasingCurve* self) {
	qreal _ret = self->overshoot();
	return static_cast<double>(_ret);
}

void QEasingCurve_SetOvershoot(QEasingCurve* self, double overshoot) {
	self->setOvershoot(static_cast<qreal>(overshoot));
}

void QEasingCurve_AddCubicBezierSegment(QEasingCurve* self, QPointF* c1, QPointF* c2, QPointF* endPoint) {
	self->addCubicBezierSegment(*c1, *c2, *endPoint);
}

void QEasingCurve_AddTCBSegment(QEasingCurve* self, QPointF* nextPoint, double t, double c, double b) {
	self->addTCBSegment(*nextPoint, static_cast<qreal>(t), static_cast<qreal>(c), static_cast<qreal>(b));
}

struct miqt_array /* of QPointF* */  QEasingCurve_ToCubicSpline(const QEasingCurve* self) {
	QList<QPointF> _ret = self->toCubicSpline();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPointF(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QEasingCurve_Type(const QEasingCurve* self) {
	QEasingCurve::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QEasingCurve_SetType(QEasingCurve* self, int typeVal) {
	self->setType(static_cast<QEasingCurve::Type>(typeVal));
}

double QEasingCurve_ValueForProgress(const QEasingCurve* self, double progress) {
	qreal _ret = self->valueForProgress(static_cast<qreal>(progress));
	return static_cast<double>(_ret);
}

void QEasingCurve_Delete(QEasingCurve* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QEasingCurve*>( self );
	} else {
		delete self;
	}
}

