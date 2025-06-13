#include <QMargins>
#include <QMarginsF>
#include <qmargins.h>
#include "gen_qmargins.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMargins* QMargins_new() {
	return new (std::nothrow) QMargins();
}

QMargins* QMargins_new2(int left, int top, int right, int bottom) {
	return new (std::nothrow) QMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QMargins_new3(QMargins* param1) {
	return new (std::nothrow) QMargins(*param1);
}

bool QMargins_isNull(const QMargins* self) {
	return self->isNull();
}

int QMargins_left(const QMargins* self) {
	return self->left();
}

int QMargins_top(const QMargins* self) {
	return self->top();
}

int QMargins_right(const QMargins* self) {
	return self->right();
}

int QMargins_bottom(const QMargins* self) {
	return self->bottom();
}

void QMargins_setLeft(QMargins* self, int left) {
	self->setLeft(static_cast<int>(left));
}

void QMargins_setTop(QMargins* self, int top) {
	self->setTop(static_cast<int>(top));
}

void QMargins_setRight(QMargins* self, int right) {
	self->setRight(static_cast<int>(right));
}

void QMargins_setBottom(QMargins* self, int bottom) {
	self->setBottom(static_cast<int>(bottom));
}

QMargins* QMargins_operatorPlusAssign(QMargins* self, QMargins* margins) {
	QMargins& _ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorMinusAssign(QMargins* self, QMargins* margins) {
	QMargins& _ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorPlusAssignWithInt(QMargins* self, int param1) {
	QMargins& _ret = self->operator+=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorMinusAssignWithInt(QMargins* self, int param1) {
	QMargins& _ret = self->operator-=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorMultiplyAssign(QMargins* self, int param1) {
	QMargins& _ret = self->operator*=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorDivideAssign(QMargins* self, int param1) {
	QMargins& _ret = self->operator/=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorMultiplyAssignWithQreal(QMargins* self, double param1) {
	QMargins& _ret = self->operator*=(static_cast<qreal>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorDivideAssignWithQreal(QMargins* self, double param1) {
	QMargins& _ret = self->operator/=(static_cast<qreal>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMargins_toMarginsF(const QMargins* self) {
	return new QMarginsF(self->toMarginsF());
}

void QMargins_delete(QMargins* self) {
	delete self;
}

QMarginsF* QMarginsF_new() {
	return new (std::nothrow) QMarginsF();
}

QMarginsF* QMarginsF_new2(double left, double top, double right, double bottom) {
	return new (std::nothrow) QMarginsF(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

QMarginsF* QMarginsF_new3(QMargins* margins) {
	return new (std::nothrow) QMarginsF(*margins);
}

QMarginsF* QMarginsF_new4(QMarginsF* param1) {
	return new (std::nothrow) QMarginsF(*param1);
}

bool QMarginsF_isNull(const QMarginsF* self) {
	return self->isNull();
}

double QMarginsF_left(const QMarginsF* self) {
	qreal _ret = self->left();
	return static_cast<double>(_ret);
}

double QMarginsF_top(const QMarginsF* self) {
	qreal _ret = self->top();
	return static_cast<double>(_ret);
}

double QMarginsF_right(const QMarginsF* self) {
	qreal _ret = self->right();
	return static_cast<double>(_ret);
}

double QMarginsF_bottom(const QMarginsF* self) {
	qreal _ret = self->bottom();
	return static_cast<double>(_ret);
}

void QMarginsF_setLeft(QMarginsF* self, double aleft) {
	self->setLeft(static_cast<qreal>(aleft));
}

void QMarginsF_setTop(QMarginsF* self, double atop) {
	self->setTop(static_cast<qreal>(atop));
}

void QMarginsF_setRight(QMarginsF* self, double aright) {
	self->setRight(static_cast<qreal>(aright));
}

void QMarginsF_setBottom(QMarginsF* self, double abottom) {
	self->setBottom(static_cast<qreal>(abottom));
}

QMarginsF* QMarginsF_operatorPlusAssign(QMarginsF* self, QMarginsF* margins) {
	QMarginsF& _ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_operatorMinusAssign(QMarginsF* self, QMarginsF* margins) {
	QMarginsF& _ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_operatorPlusAssignWithAddend(QMarginsF* self, double addend) {
	QMarginsF& _ret = self->operator+=(static_cast<qreal>(addend));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_operatorMinusAssignWithSubtrahend(QMarginsF* self, double subtrahend) {
	QMarginsF& _ret = self->operator-=(static_cast<qreal>(subtrahend));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_operatorMultiplyAssign(QMarginsF* self, double factor) {
	QMarginsF& _ret = self->operator*=(static_cast<qreal>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_operatorDivideAssign(QMarginsF* self, double divisor) {
	QMarginsF& _ret = self->operator/=(static_cast<qreal>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMarginsF_toMargins(const QMarginsF* self) {
	return new QMargins(self->toMargins());
}

void QMarginsF_delete(QMarginsF* self) {
	delete self;
}

