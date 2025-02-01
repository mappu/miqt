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

bool QPoint_isNull(const QPoint* self) {
	return self->isNull();
}

int QPoint_x(const QPoint* self) {
	return self->x();
}

int QPoint_y(const QPoint* self) {
	return self->y();
}

void QPoint_setX(QPoint* self, int x) {
	self->setX(static_cast<int>(x));
}

void QPoint_setY(QPoint* self, int y) {
	self->setY(static_cast<int>(y));
}

int QPoint_manhattanLength(const QPoint* self) {
	return self->manhattanLength();
}

QPoint* QPoint_transposed(const QPoint* self) {
	return new QPoint(self->transposed());
}

QPoint* QPoint_operatorPlusAssign(QPoint* self, QPoint* p) {
	QPoint& _ret = self->operator+=(*p);
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_operatorMinusAssign(QPoint* self, QPoint* p) {
	QPoint& _ret = self->operator-=(*p);
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

int QPoint_dotProduct(QPoint* p1, QPoint* p2) {
	return QPoint::dotProduct(*p1, *p2);
}

void QPoint_delete(QPoint* self) {
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

double QPointF_manhattanLength(const QPointF* self) {
	qreal _ret = self->manhattanLength();
	return static_cast<double>(_ret);
}

bool QPointF_isNull(const QPointF* self) {
	return self->isNull();
}

double QPointF_x(const QPointF* self) {
	qreal _ret = self->x();
	return static_cast<double>(_ret);
}

double QPointF_y(const QPointF* self) {
	qreal _ret = self->y();
	return static_cast<double>(_ret);
}

void QPointF_setX(QPointF* self, double x) {
	self->setX(static_cast<qreal>(x));
}

void QPointF_setY(QPointF* self, double y) {
	self->setY(static_cast<qreal>(y));
}

QPointF* QPointF_transposed(const QPointF* self) {
	return new QPointF(self->transposed());
}

QPointF* QPointF_operatorPlusAssign(QPointF* self, QPointF* p) {
	QPointF& _ret = self->operator+=(*p);
	// Cast returned reference into pointer
	return &_ret;
}

QPointF* QPointF_operatorMinusAssign(QPointF* self, QPointF* p) {
	QPointF& _ret = self->operator-=(*p);
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

double QPointF_dotProduct(QPointF* p1, QPointF* p2) {
	qreal _ret = QPointF::dotProduct(*p1, *p2);
	return static_cast<double>(_ret);
}

QPoint* QPointF_toPoint(const QPointF* self) {
	return new QPoint(self->toPoint());
}

void QPointF_delete(QPointF* self) {
	delete self;
}

