#include <QLine>
#include <QLineF>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QTransform>
#include <QVariant>
#include <qtransform.h>
#include "gen_qtransform.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTransform* QTransform_new(int param1) {
	return new QTransform(static_cast<Qt::Initialization>(param1));
}

QTransform* QTransform_new2() {
	return new QTransform();
}

QTransform* QTransform_new3(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33) {
	return new QTransform(static_cast<qreal>(h11), static_cast<qreal>(h12), static_cast<qreal>(h13), static_cast<qreal>(h21), static_cast<qreal>(h22), static_cast<qreal>(h23), static_cast<qreal>(h31), static_cast<qreal>(h32), static_cast<qreal>(h33));
}

QTransform* QTransform_new4(double h11, double h12, double h21, double h22, double dx, double dy) {
	return new QTransform(static_cast<qreal>(h11), static_cast<qreal>(h12), static_cast<qreal>(h21), static_cast<qreal>(h22), static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QTransform* QTransform_new5(QTransform* other) {
	return new QTransform(*other);
}

void QTransform_operatorAssign(QTransform* self, QTransform* param1) {
	self->operator=(*param1);
}

bool QTransform_isAffine(const QTransform* self) {
	return self->isAffine();
}

bool QTransform_isIdentity(const QTransform* self) {
	return self->isIdentity();
}

bool QTransform_isInvertible(const QTransform* self) {
	return self->isInvertible();
}

bool QTransform_isScaling(const QTransform* self) {
	return self->isScaling();
}

bool QTransform_isRotating(const QTransform* self) {
	return self->isRotating();
}

bool QTransform_isTranslating(const QTransform* self) {
	return self->isTranslating();
}

int QTransform_type(const QTransform* self) {
	QTransform::TransformationType _ret = self->type();
	return static_cast<int>(_ret);
}

double QTransform_determinant(const QTransform* self) {
	qreal _ret = self->determinant();
	return static_cast<double>(_ret);
}

double QTransform_m11(const QTransform* self) {
	qreal _ret = self->m11();
	return static_cast<double>(_ret);
}

double QTransform_m12(const QTransform* self) {
	qreal _ret = self->m12();
	return static_cast<double>(_ret);
}

double QTransform_m13(const QTransform* self) {
	qreal _ret = self->m13();
	return static_cast<double>(_ret);
}

double QTransform_m21(const QTransform* self) {
	qreal _ret = self->m21();
	return static_cast<double>(_ret);
}

double QTransform_m22(const QTransform* self) {
	qreal _ret = self->m22();
	return static_cast<double>(_ret);
}

double QTransform_m23(const QTransform* self) {
	qreal _ret = self->m23();
	return static_cast<double>(_ret);
}

double QTransform_m31(const QTransform* self) {
	qreal _ret = self->m31();
	return static_cast<double>(_ret);
}

double QTransform_m32(const QTransform* self) {
	qreal _ret = self->m32();
	return static_cast<double>(_ret);
}

double QTransform_m33(const QTransform* self) {
	qreal _ret = self->m33();
	return static_cast<double>(_ret);
}

double QTransform_dx(const QTransform* self) {
	qreal _ret = self->dx();
	return static_cast<double>(_ret);
}

double QTransform_dy(const QTransform* self) {
	qreal _ret = self->dy();
	return static_cast<double>(_ret);
}

void QTransform_setMatrix(QTransform* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33) {
	self->setMatrix(static_cast<qreal>(m11), static_cast<qreal>(m12), static_cast<qreal>(m13), static_cast<qreal>(m21), static_cast<qreal>(m22), static_cast<qreal>(m23), static_cast<qreal>(m31), static_cast<qreal>(m32), static_cast<qreal>(m33));
}

QTransform* QTransform_inverted(const QTransform* self) {
	return new QTransform(self->inverted());
}

QTransform* QTransform_adjoint(const QTransform* self) {
	return new QTransform(self->adjoint());
}

QTransform* QTransform_transposed(const QTransform* self) {
	return new QTransform(self->transposed());
}

QTransform* QTransform_translate(QTransform* self, double dx, double dy) {
	QTransform& _ret = self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_scale(QTransform* self, double sx, double sy) {
	QTransform& _ret = self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_shear(QTransform* self, double sh, double sv) {
	QTransform& _ret = self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_rotate(QTransform* self, double a) {
	QTransform& _ret = self->rotate(static_cast<qreal>(a));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_rotateRadians(QTransform* self, double a) {
	QTransform& _ret = self->rotateRadians(static_cast<qreal>(a));
	// Cast returned reference into pointer
	return &_ret;
}

bool QTransform_operatorEqual(const QTransform* self, QTransform* param1) {
	return (*self == *param1);
}

bool QTransform_operatorNotEqual(const QTransform* self, QTransform* param1) {
	return (*self != *param1);
}

QTransform* QTransform_operatorMultiplyAssign(QTransform* self, QTransform* param1) {
	QTransform& _ret = self->operator*=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_operatorMultiply(const QTransform* self, QTransform* o) {
	return new QTransform(self->operator*(*o));
}

QVariant* QTransform_ToQVariant(const QTransform* self) {
	return new QVariant(self->operator QVariant());
}

void QTransform_reset(QTransform* self) {
	self->reset();
}

QPoint* QTransform_map(const QTransform* self, QPoint* p) {
	return new QPoint(self->map(*p));
}

QPointF* QTransform_mapWithQPointF(const QTransform* self, QPointF* p) {
	return new QPointF(self->map(*p));
}

QLine* QTransform_mapWithQLine(const QTransform* self, QLine* l) {
	return new QLine(self->map(*l));
}

QLineF* QTransform_mapWithQLineF(const QTransform* self, QLineF* l) {
	return new QLineF(self->map(*l));
}

QRegion* QTransform_mapWithQRegion(const QTransform* self, QRegion* r) {
	return new QRegion(self->map(*r));
}

QPainterPath* QTransform_mapWithQPainterPath(const QTransform* self, QPainterPath* p) {
	return new QPainterPath(self->map(*p));
}

QRect* QTransform_mapRect(const QTransform* self, QRect* param1) {
	return new QRect(self->mapRect(*param1));
}

QRectF* QTransform_mapRectWithQRectF(const QTransform* self, QRectF* param1) {
	return new QRectF(self->mapRect(*param1));
}

void QTransform_map2(const QTransform* self, int x, int y, int* tx, int* ty) {
	self->map(static_cast<int>(x), static_cast<int>(y), static_cast<int*>(tx), static_cast<int*>(ty));
}

void QTransform_map3(const QTransform* self, double x, double y, double* tx, double* ty) {
	self->map(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal*>(tx), static_cast<qreal*>(ty));
}

QTransform* QTransform_operatorMultiplyAssignWithDiv(QTransform* self, double div) {
	QTransform& _ret = self->operator*=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_operatorDivideAssign(QTransform* self, double div) {
	QTransform& _ret = self->operator/=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_operatorPlusAssign(QTransform* self, double div) {
	QTransform& _ret = self->operator+=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_operatorMinusAssign(QTransform* self, double div) {
	QTransform& _ret = self->operator-=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_fromTranslate(double dx, double dy) {
	return new QTransform(QTransform::fromTranslate(static_cast<qreal>(dx), static_cast<qreal>(dy)));
}

QTransform* QTransform_fromScale(double dx, double dy) {
	return new QTransform(QTransform::fromScale(static_cast<qreal>(dx), static_cast<qreal>(dy)));
}

QTransform* QTransform_inverted1(const QTransform* self, bool* invertible) {
	return new QTransform(self->inverted(invertible));
}

QTransform* QTransform_rotate2(QTransform* self, double a, int axis) {
	QTransform& _ret = self->rotate(static_cast<qreal>(a), static_cast<Qt::Axis>(axis));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_rotateRadians2(QTransform* self, double a, int axis) {
	QTransform& _ret = self->rotateRadians(static_cast<qreal>(a), static_cast<Qt::Axis>(axis));
	// Cast returned reference into pointer
	return &_ret;
}

void QTransform_delete(QTransform* self) {
	delete self;
}

