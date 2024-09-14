#include <QMargins>
#include <QMarginsF>
#include "qmargins.h"
#include "gen_qmargins.h"
#include "_cgo_export.h"

QMargins* QMargins_new() {
	return new QMargins();
}

QMargins* QMargins_new2(int left, int top, int right, int bottom) {
	return new QMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QMargins_new3(QMargins* param1) {
	return new QMargins(*param1);
}

bool QMargins_IsNull(const QMargins* self) {
	return self->isNull();
}

int QMargins_Left(const QMargins* self) {
	return self->left();
}

int QMargins_Top(const QMargins* self) {
	return self->top();
}

int QMargins_Right(const QMargins* self) {
	return self->right();
}

int QMargins_Bottom(const QMargins* self) {
	return self->bottom();
}

void QMargins_SetLeft(QMargins* self, int left) {
	self->setLeft(static_cast<int>(left));
}

void QMargins_SetTop(QMargins* self, int top) {
	self->setTop(static_cast<int>(top));
}

void QMargins_SetRight(QMargins* self, int right) {
	self->setRight(static_cast<int>(right));
}

void QMargins_SetBottom(QMargins* self, int bottom) {
	self->setBottom(static_cast<int>(bottom));
}

QMargins* QMargins_OperatorPlusAssign(QMargins* self, QMargins* margins) {
	QMargins& _ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_OperatorMinusAssign(QMargins* self, QMargins* margins) {
	QMargins& _ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_OperatorPlusAssignWithInt(QMargins* self, int param1) {
	QMargins& _ret = self->operator+=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_OperatorMinusAssignWithInt(QMargins* self, int param1) {
	QMargins& _ret = self->operator-=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_OperatorMultiplyAssign(QMargins* self, int param1) {
	QMargins& _ret = self->operator*=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_OperatorDivideAssign(QMargins* self, int param1) {
	QMargins& _ret = self->operator/=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_OperatorMultiplyAssignWithQreal(QMargins* self, double param1) {
	QMargins& _ret = self->operator*=(static_cast<qreal>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_OperatorDivideAssignWithQreal(QMargins* self, double param1) {
	QMargins& _ret = self->operator/=(static_cast<qreal>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

void QMargins_Delete(QMargins* self) {
	delete self;
}

QMarginsF* QMarginsF_new() {
	return new QMarginsF();
}

QMarginsF* QMarginsF_new2(double left, double top, double right, double bottom) {
	return new QMarginsF(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

QMarginsF* QMarginsF_new3(QMargins* margins) {
	return new QMarginsF(*margins);
}

QMarginsF* QMarginsF_new4(QMarginsF* param1) {
	return new QMarginsF(*param1);
}

bool QMarginsF_IsNull(const QMarginsF* self) {
	return self->isNull();
}

double QMarginsF_Left(const QMarginsF* self) {
	return self->left();
}

double QMarginsF_Top(const QMarginsF* self) {
	return self->top();
}

double QMarginsF_Right(const QMarginsF* self) {
	return self->right();
}

double QMarginsF_Bottom(const QMarginsF* self) {
	return self->bottom();
}

void QMarginsF_SetLeft(QMarginsF* self, double left) {
	self->setLeft(static_cast<qreal>(left));
}

void QMarginsF_SetTop(QMarginsF* self, double top) {
	self->setTop(static_cast<qreal>(top));
}

void QMarginsF_SetRight(QMarginsF* self, double right) {
	self->setRight(static_cast<qreal>(right));
}

void QMarginsF_SetBottom(QMarginsF* self, double bottom) {
	self->setBottom(static_cast<qreal>(bottom));
}

QMarginsF* QMarginsF_OperatorPlusAssign(QMarginsF* self, QMarginsF* margins) {
	QMarginsF& _ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_OperatorMinusAssign(QMarginsF* self, QMarginsF* margins) {
	QMarginsF& _ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_OperatorPlusAssignWithAddend(QMarginsF* self, double addend) {
	QMarginsF& _ret = self->operator+=(static_cast<qreal>(addend));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_OperatorMinusAssignWithSubtrahend(QMarginsF* self, double subtrahend) {
	QMarginsF& _ret = self->operator-=(static_cast<qreal>(subtrahend));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_OperatorMultiplyAssign(QMarginsF* self, double factor) {
	QMarginsF& _ret = self->operator*=(static_cast<qreal>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_OperatorDivideAssign(QMarginsF* self, double divisor) {
	QMarginsF& _ret = self->operator/=(static_cast<qreal>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMarginsF_ToMargins(const QMarginsF* self) {
	QMargins _ret = self->toMargins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMargins*>(new QMargins(_ret));
}

void QMarginsF_Delete(QMarginsF* self) {
	delete self;
}

