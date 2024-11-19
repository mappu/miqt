#include <QMargins>
#include <QMarginsF>
#include <qmargins.h>
#include "gen_qmargins.h"
#include "_cgo_export.h"

void QMargins_new(QMargins** outptr_QMargins) {
	QMargins* ret = new QMargins();
	*outptr_QMargins = ret;
}

void QMargins_new2(int left, int top, int right, int bottom, QMargins** outptr_QMargins) {
	QMargins* ret = new QMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
	*outptr_QMargins = ret;
}

void QMargins_new3(QMargins* param1, QMargins** outptr_QMargins) {
	QMargins* ret = new QMargins(*param1);
	*outptr_QMargins = ret;
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

QMarginsF* QMargins_ToMarginsF(const QMargins* self) {
	return new QMarginsF(self->toMarginsF());
}

void QMargins_Delete(QMargins* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMargins*>( self );
	} else {
		delete self;
	}
}

void QMarginsF_new(QMarginsF** outptr_QMarginsF) {
	QMarginsF* ret = new QMarginsF();
	*outptr_QMarginsF = ret;
}

void QMarginsF_new2(double left, double top, double right, double bottom, QMarginsF** outptr_QMarginsF) {
	QMarginsF* ret = new QMarginsF(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
	*outptr_QMarginsF = ret;
}

void QMarginsF_new3(QMargins* margins, QMarginsF** outptr_QMarginsF) {
	QMarginsF* ret = new QMarginsF(*margins);
	*outptr_QMarginsF = ret;
}

void QMarginsF_new4(QMarginsF* param1, QMarginsF** outptr_QMarginsF) {
	QMarginsF* ret = new QMarginsF(*param1);
	*outptr_QMarginsF = ret;
}

bool QMarginsF_IsNull(const QMarginsF* self) {
	return self->isNull();
}

double QMarginsF_Left(const QMarginsF* self) {
	qreal _ret = self->left();
	return static_cast<double>(_ret);
}

double QMarginsF_Top(const QMarginsF* self) {
	qreal _ret = self->top();
	return static_cast<double>(_ret);
}

double QMarginsF_Right(const QMarginsF* self) {
	qreal _ret = self->right();
	return static_cast<double>(_ret);
}

double QMarginsF_Bottom(const QMarginsF* self) {
	qreal _ret = self->bottom();
	return static_cast<double>(_ret);
}

void QMarginsF_SetLeft(QMarginsF* self, double aleft) {
	self->setLeft(static_cast<qreal>(aleft));
}

void QMarginsF_SetTop(QMarginsF* self, double atop) {
	self->setTop(static_cast<qreal>(atop));
}

void QMarginsF_SetRight(QMarginsF* self, double aright) {
	self->setRight(static_cast<qreal>(aright));
}

void QMarginsF_SetBottom(QMarginsF* self, double abottom) {
	self->setBottom(static_cast<qreal>(abottom));
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
	return new QMargins(self->toMargins());
}

void QMarginsF_Delete(QMarginsF* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMarginsF*>( self );
	} else {
		delete self;
	}
}

