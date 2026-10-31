#include <QPoint>
#include <QPointF>
#include <qpoint.h>
#include "gen_qpoint.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_qpoint QPoint_new() {
	return miqt_to_cabi<struct miqt_qpoint>(QPoint());
}

struct miqt_qpoint QPoint_new2(int xpos, int ypos) {
	return miqt_to_cabi<struct miqt_qpoint>(QPoint(static_cast<int>(xpos), static_cast<int>(ypos)));
}

struct miqt_qpoint QPoint_new3(struct miqt_qpoint param1) {
	return miqt_to_cabi<struct miqt_qpoint>(QPoint(miqt_from_cabi<QPoint>(param1)));
}

bool QPoint_isNull(struct miqt_qpoint self_cabi) {
	const QPoint self_val = miqt_from_cabi<QPoint>(self_cabi);
	const QPoint* self = &self_val;
	return self->isNull();
}

int QPoint_x(struct miqt_qpoint self_cabi) {
	const QPoint self_val = miqt_from_cabi<QPoint>(self_cabi);
	const QPoint* self = &self_val;
	return self->x();
}

int QPoint_y(struct miqt_qpoint self_cabi) {
	const QPoint self_val = miqt_from_cabi<QPoint>(self_cabi);
	const QPoint* self = &self_val;
	return self->y();
}

void QPoint_setX(QPoint* self, int x) {
	self->setX(static_cast<int>(x));
}

void QPoint_setY(QPoint* self, int y) {
	self->setY(static_cast<int>(y));
}

int QPoint_manhattanLength(struct miqt_qpoint self_cabi) {
	const QPoint self_val = miqt_from_cabi<QPoint>(self_cabi);
	const QPoint* self = &self_val;
	return self->manhattanLength();
}

struct miqt_qpoint QPoint_transposed(struct miqt_qpoint self_cabi) {
	const QPoint self_val = miqt_from_cabi<QPoint>(self_cabi);
	const QPoint* self = &self_val;
	return miqt_to_cabi<struct miqt_qpoint>(self->transposed());
}

QPoint* QPoint_operatorPlusAssign(QPoint* self, struct miqt_qpoint p) {
	QPoint& _ret = self->operator+=(miqt_from_cabi<QPoint>(p));
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_operatorMinusAssign(QPoint* self, struct miqt_qpoint p) {
	QPoint& _ret = self->operator-=(miqt_from_cabi<QPoint>(p));
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_operatorMultiplyAssign(QPoint* self, float factor) {
	QPoint& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_operatorMultiplyAssignWithFactor(QPoint* self, double factor) {
	QPoint& _ret = self->operator*=(static_cast<double>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_operatorMultiplyAssign2(QPoint* self, int factor) {
	QPoint& _ret = self->operator*=(static_cast<int>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_operatorDivideAssign(QPoint* self, double divisor) {
	QPoint& _ret = self->operator/=(static_cast<qreal>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

int QPoint_dotProduct(struct miqt_qpoint p1, struct miqt_qpoint p2) {
	return QPoint::dotProduct(miqt_from_cabi<QPoint>(p1), miqt_from_cabi<QPoint>(p2));
}

struct miqt_qpointf QPointF_new() {
	return miqt_to_cabi<struct miqt_qpointf>(QPointF());
}

struct miqt_qpointf QPointF_new2(struct miqt_qpoint p) {
	return miqt_to_cabi<struct miqt_qpointf>(QPointF(miqt_from_cabi<QPoint>(p)));
}

struct miqt_qpointf QPointF_new3(double xpos, double ypos) {
	return miqt_to_cabi<struct miqt_qpointf>(QPointF(static_cast<qreal>(xpos), static_cast<qreal>(ypos)));
}

struct miqt_qpointf QPointF_new4(struct miqt_qpointf param1) {
	return miqt_to_cabi<struct miqt_qpointf>(QPointF(miqt_from_cabi<QPointF>(param1)));
}

double QPointF_manhattanLength(struct miqt_qpointf self_cabi) {
	const QPointF self_val = miqt_from_cabi<QPointF>(self_cabi);
	const QPointF* self = &self_val;
	qreal _ret = self->manhattanLength();
	return static_cast<double>(_ret);
}

bool QPointF_isNull(struct miqt_qpointf self_cabi) {
	const QPointF self_val = miqt_from_cabi<QPointF>(self_cabi);
	const QPointF* self = &self_val;
	return self->isNull();
}

double QPointF_x(struct miqt_qpointf self_cabi) {
	const QPointF self_val = miqt_from_cabi<QPointF>(self_cabi);
	const QPointF* self = &self_val;
	qreal _ret = self->x();
	return static_cast<double>(_ret);
}

double QPointF_y(struct miqt_qpointf self_cabi) {
	const QPointF self_val = miqt_from_cabi<QPointF>(self_cabi);
	const QPointF* self = &self_val;
	qreal _ret = self->y();
	return static_cast<double>(_ret);
}

void QPointF_setX(QPointF* self, double x) {
	self->setX(static_cast<qreal>(x));
}

void QPointF_setY(QPointF* self, double y) {
	self->setY(static_cast<qreal>(y));
}

struct miqt_qpointf QPointF_transposed(struct miqt_qpointf self_cabi) {
	const QPointF self_val = miqt_from_cabi<QPointF>(self_cabi);
	const QPointF* self = &self_val;
	return miqt_to_cabi<struct miqt_qpointf>(self->transposed());
}

QPointF* QPointF_operatorPlusAssign(QPointF* self, struct miqt_qpointf p) {
	QPointF& _ret = self->operator+=(miqt_from_cabi<QPointF>(p));
	// Cast returned reference into pointer
	return &_ret;
}

QPointF* QPointF_operatorMinusAssign(QPointF* self, struct miqt_qpointf p) {
	QPointF& _ret = self->operator-=(miqt_from_cabi<QPointF>(p));
	// Cast returned reference into pointer
	return &_ret;
}

QPointF* QPointF_operatorMultiplyAssign(QPointF* self, double c) {
	QPointF& _ret = self->operator*=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QPointF* QPointF_operatorDivideAssign(QPointF* self, double c) {
	QPointF& _ret = self->operator/=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

double QPointF_dotProduct(struct miqt_qpointf p1, struct miqt_qpointf p2) {
	qreal _ret = QPointF::dotProduct(miqt_from_cabi<QPointF>(p1), miqt_from_cabi<QPointF>(p2));
	return static_cast<double>(_ret);
}

struct miqt_qpoint QPointF_toPoint(struct miqt_qpointf self_cabi) {
	const QPointF self_val = miqt_from_cabi<QPointF>(self_cabi);
	const QPointF* self = &self_val;
	return miqt_to_cabi<struct miqt_qpoint>(self->toPoint());
}

