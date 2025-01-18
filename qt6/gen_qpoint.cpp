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

QPoint* QPoint_new() {
	return new QPoint();
}

QPoint* QPoint_new2(int xpos, int ypos) {
	return new QPoint(static_cast<int>(xpos), static_cast<int>(ypos));
}

QPoint* QPoint_new3(QPoint* param1) {
	return new QPoint(*param1);
}

bool QPoint_IsNull(const QPoint* self) {
	return self->isNull();
}

int QPoint_X(const QPoint* self) {
	return self->x();
}

int QPoint_Y(const QPoint* self) {
	return self->y();
}

void QPoint_SetX(QPoint* self, int x) {
	self->setX(static_cast<int>(x));
}

void QPoint_SetY(QPoint* self, int y) {
	self->setY(static_cast<int>(y));
}

int QPoint_ManhattanLength(const QPoint* self) {
	return self->manhattanLength();
}

QPoint* QPoint_Transposed(const QPoint* self) {
	return new QPoint(self->transposed());
}

QPoint* QPoint_OperatorPlusAssign(QPoint* self, QPoint* p) {
	QPoint& _ret = self->operator+=(*p);
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_OperatorMinusAssign(QPoint* self, QPoint* p) {
	QPoint& _ret = self->operator-=(*p);
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_OperatorMultiplyAssign(QPoint* self, float factor) {
	QPoint& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_OperatorMultiplyAssignWithFactor(QPoint* self, double factor) {
	QPoint& _ret = self->operator*=(static_cast<double>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_OperatorMultiplyAssign2(QPoint* self, int factor) {
	QPoint& _ret = self->operator*=(static_cast<int>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_OperatorDivideAssign(QPoint* self, double divisor) {
	QPoint& _ret = self->operator/=(static_cast<qreal>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

int QPoint_DotProduct(QPoint* p1, QPoint* p2) {
	return QPoint::dotProduct(*p1, *p2);
}

QPointF* QPoint_ToPointF(const QPoint* self) {
	return new QPointF(self->toPointF());
}

void QPoint_Delete(QPoint* self) {
	delete self;
}

QPointF* QPointF_new() {
	return new QPointF();
}

QPointF* QPointF_new2(QPoint* p) {
	return new QPointF(*p);
}

QPointF* QPointF_new3(double xpos, double ypos) {
	return new QPointF(static_cast<qreal>(xpos), static_cast<qreal>(ypos));
}

QPointF* QPointF_new4(QPointF* param1) {
	return new QPointF(*param1);
}

double QPointF_ManhattanLength(const QPointF* self) {
	qreal _ret = self->manhattanLength();
	return static_cast<double>(_ret);
}

bool QPointF_IsNull(const QPointF* self) {
	return self->isNull();
}

double QPointF_X(const QPointF* self) {
	qreal _ret = self->x();
	return static_cast<double>(_ret);
}

double QPointF_Y(const QPointF* self) {
	qreal _ret = self->y();
	return static_cast<double>(_ret);
}

void QPointF_SetX(QPointF* self, double x) {
	self->setX(static_cast<qreal>(x));
}

void QPointF_SetY(QPointF* self, double y) {
	self->setY(static_cast<qreal>(y));
}

QPointF* QPointF_Transposed(const QPointF* self) {
	return new QPointF(self->transposed());
}

QPointF* QPointF_OperatorPlusAssign(QPointF* self, QPointF* p) {
	QPointF& _ret = self->operator+=(*p);
	// Cast returned reference into pointer
	return &_ret;
}

QPointF* QPointF_OperatorMinusAssign(QPointF* self, QPointF* p) {
	QPointF& _ret = self->operator-=(*p);
	// Cast returned reference into pointer
	return &_ret;
}

QPointF* QPointF_OperatorMultiplyAssign(QPointF* self, double c) {
	QPointF& _ret = self->operator*=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QPointF* QPointF_OperatorDivideAssign(QPointF* self, double c) {
	QPointF& _ret = self->operator/=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

double QPointF_DotProduct(QPointF* p1, QPointF* p2) {
	qreal _ret = QPointF::dotProduct(*p1, *p2);
	return static_cast<double>(_ret);
}

QPoint* QPointF_ToPoint(const QPointF* self) {
	return new QPoint(self->toPoint());
}

void QPointF_Delete(QPointF* self) {
	delete self;
}

