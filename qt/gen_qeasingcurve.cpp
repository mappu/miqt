#include <QEasingCurve>
#include <QPointF>
#include <QVector>
#include <qeasingcurve.h>
#include "gen_qeasingcurve.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QEasingCurve* QEasingCurve_new() {
	return new (std::nothrow) QEasingCurve();
}

QEasingCurve* QEasingCurve_new2(QEasingCurve* other) {
	return new (std::nothrow) QEasingCurve(*other);
}

QEasingCurve* QEasingCurve_new3(int type) {
	return new (std::nothrow) QEasingCurve(static_cast<QEasingCurve::Type>(type));
}

void QEasingCurve_operatorAssign(QEasingCurve* self, QEasingCurve* other) {
	self->operator=(*other);
}

void QEasingCurve_swap(QEasingCurve* self, QEasingCurve* other) {
	self->swap(*other);
}

bool QEasingCurve_operatorEqual(const QEasingCurve* self, QEasingCurve* other) {
	return (*self == *other);
}

bool QEasingCurve_operatorNotEqual(const QEasingCurve* self, QEasingCurve* other) {
	return (*self != *other);
}

double QEasingCurve_amplitude(const QEasingCurve* self) {
	qreal _ret = self->amplitude();
	return static_cast<double>(_ret);
}

void QEasingCurve_setAmplitude(QEasingCurve* self, double amplitude) {
	self->setAmplitude(static_cast<qreal>(amplitude));
}

double QEasingCurve_period(const QEasingCurve* self) {
	qreal _ret = self->period();
	return static_cast<double>(_ret);
}

void QEasingCurve_setPeriod(QEasingCurve* self, double period) {
	self->setPeriod(static_cast<qreal>(period));
}

double QEasingCurve_overshoot(const QEasingCurve* self) {
	qreal _ret = self->overshoot();
	return static_cast<double>(_ret);
}

void QEasingCurve_setOvershoot(QEasingCurve* self, double overshoot) {
	self->setOvershoot(static_cast<qreal>(overshoot));
}

void QEasingCurve_addCubicBezierSegment(QEasingCurve* self, struct miqt_qpointf c1, struct miqt_qpointf c2, struct miqt_qpointf endPoint) {
	self->addCubicBezierSegment(miqt_from_cabi<QPointF>(c1), miqt_from_cabi<QPointF>(c2), miqt_from_cabi<QPointF>(endPoint));
}

void QEasingCurve_addTCBSegment(QEasingCurve* self, struct miqt_qpointf nextPoint, double t, double c, double b) {
	self->addTCBSegment(miqt_from_cabi<QPointF>(nextPoint), static_cast<qreal>(t), static_cast<qreal>(c), static_cast<qreal>(b));
}

struct miqt_array /* of struct miqt_qpointf */  QEasingCurve_toCubicSpline(const QEasingCurve* self) {
	QVector<QPointF> _ret = self->toCubicSpline();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_qpointf* _arr = static_cast<struct miqt_qpointf*>(malloc(sizeof(struct miqt_qpointf) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = miqt_to_cabi<struct miqt_qpointf>(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QEasingCurve_type(const QEasingCurve* self) {
	QEasingCurve::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QEasingCurve_setType(QEasingCurve* self, int type) {
	self->setType(static_cast<QEasingCurve::Type>(type));
}

double QEasingCurve_valueForProgress(const QEasingCurve* self, double progress) {
	qreal _ret = self->valueForProgress(static_cast<qreal>(progress));
	return static_cast<double>(_ret);
}

void QEasingCurve_delete(QEasingCurve* self) {
	delete self;
}

