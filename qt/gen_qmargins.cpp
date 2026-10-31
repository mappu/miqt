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

struct miqt_qmargins QMargins_new() {
	return miqt_to_cabi<struct miqt_qmargins>(QMargins());
}

struct miqt_qmargins QMargins_new2(int left, int top, int right, int bottom) {
	return miqt_to_cabi<struct miqt_qmargins>(QMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom)));
}

struct miqt_qmargins QMargins_new3(struct miqt_qmargins param1) {
	return miqt_to_cabi<struct miqt_qmargins>(QMargins(miqt_from_cabi<QMargins>(param1)));
}

bool QMargins_isNull(struct miqt_qmargins self_cabi) {
	const QMargins self_val = miqt_from_cabi<QMargins>(self_cabi);
	const QMargins* self = &self_val;
	return self->isNull();
}

int QMargins_left(struct miqt_qmargins self_cabi) {
	const QMargins self_val = miqt_from_cabi<QMargins>(self_cabi);
	const QMargins* self = &self_val;
	return self->left();
}

int QMargins_top(struct miqt_qmargins self_cabi) {
	const QMargins self_val = miqt_from_cabi<QMargins>(self_cabi);
	const QMargins* self = &self_val;
	return self->top();
}

int QMargins_right(struct miqt_qmargins self_cabi) {
	const QMargins self_val = miqt_from_cabi<QMargins>(self_cabi);
	const QMargins* self = &self_val;
	return self->right();
}

int QMargins_bottom(struct miqt_qmargins self_cabi) {
	const QMargins self_val = miqt_from_cabi<QMargins>(self_cabi);
	const QMargins* self = &self_val;
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

QMargins* QMargins_operatorPlusAssign(QMargins* self, struct miqt_qmargins margins) {
	QMargins& _ret = self->operator+=(miqt_from_cabi<QMargins>(margins));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorMinusAssign(QMargins* self, struct miqt_qmargins margins) {
	QMargins& _ret = self->operator-=(miqt_from_cabi<QMargins>(margins));
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

void QMargins_operatorAssign(QMargins* self, struct miqt_qmargins param1) {
	self->operator=(miqt_from_cabi<QMargins>(param1));
}

struct miqt_qmarginsf QMarginsF_new() {
	return miqt_to_cabi<struct miqt_qmarginsf>(QMarginsF());
}

struct miqt_qmarginsf QMarginsF_new2(double left, double top, double right, double bottom) {
	return miqt_to_cabi<struct miqt_qmarginsf>(QMarginsF(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom)));
}

struct miqt_qmarginsf QMarginsF_new3(struct miqt_qmargins margins) {
	return miqt_to_cabi<struct miqt_qmarginsf>(QMarginsF(miqt_from_cabi<QMargins>(margins)));
}

struct miqt_qmarginsf QMarginsF_new4(struct miqt_qmarginsf param1) {
	return miqt_to_cabi<struct miqt_qmarginsf>(QMarginsF(miqt_from_cabi<QMarginsF>(param1)));
}

bool QMarginsF_isNull(struct miqt_qmarginsf self_cabi) {
	const QMarginsF self_val = miqt_from_cabi<QMarginsF>(self_cabi);
	const QMarginsF* self = &self_val;
	return self->isNull();
}

double QMarginsF_left(struct miqt_qmarginsf self_cabi) {
	const QMarginsF self_val = miqt_from_cabi<QMarginsF>(self_cabi);
	const QMarginsF* self = &self_val;
	qreal _ret = self->left();
	return static_cast<double>(_ret);
}

double QMarginsF_top(struct miqt_qmarginsf self_cabi) {
	const QMarginsF self_val = miqt_from_cabi<QMarginsF>(self_cabi);
	const QMarginsF* self = &self_val;
	qreal _ret = self->top();
	return static_cast<double>(_ret);
}

double QMarginsF_right(struct miqt_qmarginsf self_cabi) {
	const QMarginsF self_val = miqt_from_cabi<QMarginsF>(self_cabi);
	const QMarginsF* self = &self_val;
	qreal _ret = self->right();
	return static_cast<double>(_ret);
}

double QMarginsF_bottom(struct miqt_qmarginsf self_cabi) {
	const QMarginsF self_val = miqt_from_cabi<QMarginsF>(self_cabi);
	const QMarginsF* self = &self_val;
	qreal _ret = self->bottom();
	return static_cast<double>(_ret);
}

void QMarginsF_setLeft(QMarginsF* self, double left) {
	self->setLeft(static_cast<qreal>(left));
}

void QMarginsF_setTop(QMarginsF* self, double top) {
	self->setTop(static_cast<qreal>(top));
}

void QMarginsF_setRight(QMarginsF* self, double right) {
	self->setRight(static_cast<qreal>(right));
}

void QMarginsF_setBottom(QMarginsF* self, double bottom) {
	self->setBottom(static_cast<qreal>(bottom));
}

QMarginsF* QMarginsF_operatorPlusAssign(QMarginsF* self, struct miqt_qmarginsf margins) {
	QMarginsF& _ret = self->operator+=(miqt_from_cabi<QMarginsF>(margins));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_operatorMinusAssign(QMarginsF* self, struct miqt_qmarginsf margins) {
	QMarginsF& _ret = self->operator-=(miqt_from_cabi<QMarginsF>(margins));
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

struct miqt_qmargins QMarginsF_toMargins(struct miqt_qmarginsf self_cabi) {
	const QMarginsF self_val = miqt_from_cabi<QMarginsF>(self_cabi);
	const QMarginsF* self = &self_val;
	return miqt_to_cabi<struct miqt_qmargins>(self->toMargins());
}

void QMarginsF_operatorAssign(QMarginsF* self, struct miqt_qmarginsf param1) {
	self->operator=(miqt_from_cabi<QMarginsF>(param1));
}

