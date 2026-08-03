#include <qwt_interval.h>
#include "gen_qwt_interval.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtInterval* QwtInterval_new() {
	return new (std::nothrow) QwtInterval();
}

QwtInterval* QwtInterval_new2(double minValue, double maxValue) {
	return new (std::nothrow) QwtInterval(static_cast<double>(minValue), static_cast<double>(maxValue));
}

QwtInterval* QwtInterval_new3(QwtInterval* param1) {
	return new (std::nothrow) QwtInterval(*param1);
}

QwtInterval* QwtInterval_new4(double minValue, double maxValue, int param3) {
	return new (std::nothrow) QwtInterval(static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<QwtInterval::BorderFlags>(param3));
}

void QwtInterval_setInterval(QwtInterval* self, double minValue, double maxValue) {
	self->setInterval(static_cast<double>(minValue), static_cast<double>(maxValue));
}

QwtInterval* QwtInterval_normalized(const QwtInterval* self) {
	return new QwtInterval(self->normalized());
}

QwtInterval* QwtInterval_inverted(const QwtInterval* self) {
	return new QwtInterval(self->inverted());
}

QwtInterval* QwtInterval_limited(const QwtInterval* self, double lowerBound, double upperBound) {
	return new QwtInterval(self->limited(static_cast<double>(lowerBound), static_cast<double>(upperBound)));
}

bool QwtInterval_operatorEqual(const QwtInterval* self, QwtInterval* param1) {
	return (*self == *param1);
}

bool QwtInterval_operatorNotEqual(const QwtInterval* self, QwtInterval* param1) {
	return (*self != *param1);
}

void QwtInterval_setBorderFlags(QwtInterval* self, int borderFlags) {
	self->setBorderFlags(static_cast<QwtInterval::BorderFlags>(borderFlags));
}

int QwtInterval_borderFlags(const QwtInterval* self) {
	QwtInterval::BorderFlags _ret = self->borderFlags();
	return static_cast<int>(_ret);
}

double QwtInterval_minValue(const QwtInterval* self) {
	return self->minValue();
}

double QwtInterval_maxValue(const QwtInterval* self) {
	return self->maxValue();
}

double QwtInterval_width(const QwtInterval* self) {
	return self->width();
}

void QwtInterval_setMinValue(QwtInterval* self, double minValue) {
	self->setMinValue(static_cast<double>(minValue));
}

void QwtInterval_setMaxValue(QwtInterval* self, double maxValue) {
	self->setMaxValue(static_cast<double>(maxValue));
}

bool QwtInterval_contains(const QwtInterval* self, double value) {
	return self->contains(static_cast<double>(value));
}

bool QwtInterval_intersects(const QwtInterval* self, QwtInterval* param1) {
	return self->intersects(*param1);
}

QwtInterval* QwtInterval_intersect(const QwtInterval* self, QwtInterval* param1) {
	return new QwtInterval(self->intersect(*param1));
}

QwtInterval* QwtInterval_unite(const QwtInterval* self, QwtInterval* param1) {
	return new QwtInterval(self->unite(*param1));
}

QwtInterval* QwtInterval_operatorBitwiseOr(const QwtInterval* self, QwtInterval* param1) {
	return new QwtInterval(self->operator|(*param1));
}

QwtInterval* QwtInterval_operatorBitwiseAnd(const QwtInterval* self, QwtInterval* param1) {
	return new QwtInterval(self->operator&(*param1));
}

void QwtInterval_operatorBitwiseOrAssign(QwtInterval* self, QwtInterval* param1) {
	self->operator|=(*param1);
}

void QwtInterval_operatorBitwiseAndAssign(QwtInterval* self, QwtInterval* param1) {
	self->operator&=(*param1);
}

QwtInterval* QwtInterval_extend(const QwtInterval* self, double value) {
	return new QwtInterval(self->extend(static_cast<double>(value)));
}

QwtInterval* QwtInterval_operatorBitwiseOrWithDouble(const QwtInterval* self, double param1) {
	return new QwtInterval(self->operator|(static_cast<double>(param1)));
}

void QwtInterval_operatorBitwiseOrAssignWithDouble(QwtInterval* self, double param1) {
	self->operator|=(static_cast<double>(param1));
}

bool QwtInterval_isValid(const QwtInterval* self) {
	return self->isValid();
}

bool QwtInterval_isNull(const QwtInterval* self) {
	return self->isNull();
}

void QwtInterval_invalidate(QwtInterval* self) {
	self->invalidate();
}

QwtInterval* QwtInterval_symmetrize(const QwtInterval* self, double value) {
	return new QwtInterval(self->symmetrize(static_cast<double>(value)));
}

void QwtInterval_setInterval2(QwtInterval* self, double minValue, double maxValue, int param3) {
	self->setInterval(static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<QwtInterval::BorderFlags>(param3));
}

void QwtInterval_delete(QwtInterval* self) {
	delete self;
}

