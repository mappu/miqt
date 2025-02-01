#include <QLine>
#include <QLineF>
#include <QMatrix>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QVariant>
#include <qmatrix.h>
#include "gen_qmatrix.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMatrix* QMatrix_new(int param1) {
	return new QMatrix(static_cast<Qt::Initialization>(param1));
}

QMatrix* QMatrix_new2() {
	return new QMatrix();
}

QMatrix* QMatrix_new3(double m11, double m12, double m21, double m22, double dx, double dy) {
	return new QMatrix(static_cast<qreal>(m11), static_cast<qreal>(m12), static_cast<qreal>(m21), static_cast<qreal>(m22), static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QMatrix* QMatrix_new4(QMatrix* other) {
	return new QMatrix(*other);
}

void QMatrix_operatorAssign(QMatrix* self, QMatrix* param1) {
	self->operator=(*param1);
}

void QMatrix_setMatrix(QMatrix* self, double m11, double m12, double m21, double m22, double dx, double dy) {
	self->setMatrix(static_cast<qreal>(m11), static_cast<qreal>(m12), static_cast<qreal>(m21), static_cast<qreal>(m22), static_cast<qreal>(dx), static_cast<qreal>(dy));
}

double QMatrix_m11(const QMatrix* self) {
	qreal _ret = self->m11();
	return static_cast<double>(_ret);
}

double QMatrix_m12(const QMatrix* self) {
	qreal _ret = self->m12();
	return static_cast<double>(_ret);
}

double QMatrix_m21(const QMatrix* self) {
	qreal _ret = self->m21();
	return static_cast<double>(_ret);
}

double QMatrix_m22(const QMatrix* self) {
	qreal _ret = self->m22();
	return static_cast<double>(_ret);
}

double QMatrix_dx(const QMatrix* self) {
	qreal _ret = self->dx();
	return static_cast<double>(_ret);
}

double QMatrix_dy(const QMatrix* self) {
	qreal _ret = self->dy();
	return static_cast<double>(_ret);
}

void QMatrix_map(const QMatrix* self, int x, int y, int* tx, int* ty) {
	self->map(static_cast<int>(x), static_cast<int>(y), static_cast<int*>(tx), static_cast<int*>(ty));
}

void QMatrix_map2(const QMatrix* self, double x, double y, double* tx, double* ty) {
	self->map(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal*>(tx), static_cast<qreal*>(ty));
}

QRect* QMatrix_mapRect(const QMatrix* self, QRect* param1) {
	return new QRect(self->mapRect(*param1));
}

QRectF* QMatrix_mapRectWithQRectF(const QMatrix* self, QRectF* param1) {
	return new QRectF(self->mapRect(*param1));
}

QPoint* QMatrix_mapWithQPoint(const QMatrix* self, QPoint* p) {
	return new QPoint(self->map(*p));
}

QPointF* QMatrix_mapWithQPointF(const QMatrix* self, QPointF* p) {
	return new QPointF(self->map(*p));
}

QLine* QMatrix_mapWithQLine(const QMatrix* self, QLine* l) {
	return new QLine(self->map(*l));
}

QLineF* QMatrix_mapWithQLineF(const QMatrix* self, QLineF* l) {
	return new QLineF(self->map(*l));
}

QRegion* QMatrix_mapWithQRegion(const QMatrix* self, QRegion* r) {
	return new QRegion(self->map(*r));
}

QPainterPath* QMatrix_mapWithQPainterPath(const QMatrix* self, QPainterPath* p) {
	return new QPainterPath(self->map(*p));
}

void QMatrix_reset(QMatrix* self) {
	self->reset();
}

bool QMatrix_isIdentity(const QMatrix* self) {
	return self->isIdentity();
}

QMatrix* QMatrix_translate(QMatrix* self, double dx, double dy) {
	QMatrix& _ret = self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix* QMatrix_scale(QMatrix* self, double sx, double sy) {
	QMatrix& _ret = self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix* QMatrix_shear(QMatrix* self, double sh, double sv) {
	QMatrix& _ret = self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix* QMatrix_rotate(QMatrix* self, double a) {
	QMatrix& _ret = self->rotate(static_cast<qreal>(a));
	// Cast returned reference into pointer
	return &_ret;
}

bool QMatrix_isInvertible(const QMatrix* self) {
	return self->isInvertible();
}

double QMatrix_determinant(const QMatrix* self) {
	qreal _ret = self->determinant();
	return static_cast<double>(_ret);
}

QMatrix* QMatrix_inverted(const QMatrix* self) {
	return new QMatrix(self->inverted());
}

bool QMatrix_operatorEqual(const QMatrix* self, QMatrix* param1) {
	return (*self == *param1);
}

bool QMatrix_operatorNotEqual(const QMatrix* self, QMatrix* param1) {
	return (*self != *param1);
}

QMatrix* QMatrix_operatorMultiplyAssign(QMatrix* self, QMatrix* param1) {
	QMatrix& _ret = self->operator*=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix* QMatrix_operatorMultiply(const QMatrix* self, QMatrix* o) {
	return new QMatrix(self->operator*(*o));
}

QVariant* QMatrix_ToQVariant(const QMatrix* self) {
	return new QVariant(self->operator QVariant());
}

QMatrix* QMatrix_inverted1(const QMatrix* self, bool* invertible) {
	return new QMatrix(self->inverted(invertible));
}

void QMatrix_delete(QMatrix* self) {
	delete self;
}

