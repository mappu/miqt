#include <QLine>
#include <QLineF>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QTransform>
#include <qtransform.h>
#include "gen_qtransform.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

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

void QTransform_OperatorAssign(QTransform* self, QTransform* param1) {
	self->operator=(*param1);
}

bool QTransform_IsAffine(const QTransform* self) {
	return self->isAffine();
}

bool QTransform_IsIdentity(const QTransform* self) {
	return self->isIdentity();
}

bool QTransform_IsInvertible(const QTransform* self) {
	return self->isInvertible();
}

bool QTransform_IsScaling(const QTransform* self) {
	return self->isScaling();
}

bool QTransform_IsRotating(const QTransform* self) {
	return self->isRotating();
}

bool QTransform_IsTranslating(const QTransform* self) {
	return self->isTranslating();
}

int QTransform_Type(const QTransform* self) {
	QTransform::TransformationType _ret = self->type();
	return static_cast<int>(_ret);
}

double QTransform_Determinant(const QTransform* self) {
	qreal _ret = self->determinant();
	return static_cast<double>(_ret);
}

double QTransform_M11(const QTransform* self) {
	qreal _ret = self->m11();
	return static_cast<double>(_ret);
}

double QTransform_M12(const QTransform* self) {
	qreal _ret = self->m12();
	return static_cast<double>(_ret);
}

double QTransform_M13(const QTransform* self) {
	qreal _ret = self->m13();
	return static_cast<double>(_ret);
}

double QTransform_M21(const QTransform* self) {
	qreal _ret = self->m21();
	return static_cast<double>(_ret);
}

double QTransform_M22(const QTransform* self) {
	qreal _ret = self->m22();
	return static_cast<double>(_ret);
}

double QTransform_M23(const QTransform* self) {
	qreal _ret = self->m23();
	return static_cast<double>(_ret);
}

double QTransform_M31(const QTransform* self) {
	qreal _ret = self->m31();
	return static_cast<double>(_ret);
}

double QTransform_M32(const QTransform* self) {
	qreal _ret = self->m32();
	return static_cast<double>(_ret);
}

double QTransform_M33(const QTransform* self) {
	qreal _ret = self->m33();
	return static_cast<double>(_ret);
}

double QTransform_Dx(const QTransform* self) {
	qreal _ret = self->dx();
	return static_cast<double>(_ret);
}

double QTransform_Dy(const QTransform* self) {
	qreal _ret = self->dy();
	return static_cast<double>(_ret);
}

void QTransform_SetMatrix(QTransform* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33) {
	self->setMatrix(static_cast<qreal>(m11), static_cast<qreal>(m12), static_cast<qreal>(m13), static_cast<qreal>(m21), static_cast<qreal>(m22), static_cast<qreal>(m23), static_cast<qreal>(m31), static_cast<qreal>(m32), static_cast<qreal>(m33));
}

QTransform* QTransform_Inverted(const QTransform* self) {
	return new QTransform(self->inverted());
}

QTransform* QTransform_Adjoint(const QTransform* self) {
	return new QTransform(self->adjoint());
}

QTransform* QTransform_Transposed(const QTransform* self) {
	return new QTransform(self->transposed());
}

QTransform* QTransform_Translate(QTransform* self, double dx, double dy) {
	QTransform& _ret = self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_Scale(QTransform* self, double sx, double sy) {
	QTransform& _ret = self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_Shear(QTransform* self, double sh, double sv) {
	QTransform& _ret = self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_Rotate(QTransform* self, double a) {
	QTransform& _ret = self->rotate(static_cast<qreal>(a));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_RotateRadians(QTransform* self, double a) {
	QTransform& _ret = self->rotateRadians(static_cast<qreal>(a));
	// Cast returned reference into pointer
	return &_ret;
}

bool QTransform_OperatorEqual(const QTransform* self, QTransform* param1) {
	return (*self == *param1);
}

bool QTransform_OperatorNotEqual(const QTransform* self, QTransform* param1) {
	return (*self != *param1);
}

QTransform* QTransform_OperatorMultiplyAssign(QTransform* self, QTransform* param1) {
	QTransform& _ret = self->operator*=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_OperatorMultiply(const QTransform* self, QTransform* o) {
	return new QTransform(self->operator*(*o));
}

void QTransform_Reset(QTransform* self) {
	self->reset();
}

QPoint* QTransform_Map(const QTransform* self, QPoint* p) {
	return new QPoint(self->map(*p));
}

QPointF* QTransform_MapWithQPointF(const QTransform* self, QPointF* p) {
	return new QPointF(self->map(*p));
}

QLine* QTransform_MapWithQLine(const QTransform* self, QLine* l) {
	return new QLine(self->map(*l));
}

QLineF* QTransform_MapWithQLineF(const QTransform* self, QLineF* l) {
	return new QLineF(self->map(*l));
}

QRegion* QTransform_MapWithQRegion(const QTransform* self, QRegion* r) {
	return new QRegion(self->map(*r));
}

QPainterPath* QTransform_MapWithQPainterPath(const QTransform* self, QPainterPath* p) {
	return new QPainterPath(self->map(*p));
}

QRect* QTransform_MapRect(const QTransform* self, QRect* param1) {
	return new QRect(self->mapRect(*param1));
}

QRectF* QTransform_MapRectWithQRectF(const QTransform* self, QRectF* param1) {
	return new QRectF(self->mapRect(*param1));
}

void QTransform_Map2(const QTransform* self, int x, int y, int* tx, int* ty) {
	self->map(static_cast<int>(x), static_cast<int>(y), static_cast<int*>(tx), static_cast<int*>(ty));
}

void QTransform_Map3(const QTransform* self, double x, double y, double* tx, double* ty) {
	self->map(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal*>(tx), static_cast<qreal*>(ty));
}

QTransform* QTransform_OperatorMultiplyAssignWithDiv(QTransform* self, double div) {
	QTransform& _ret = self->operator*=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_OperatorDivideAssign(QTransform* self, double div) {
	QTransform& _ret = self->operator/=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_OperatorPlusAssign(QTransform* self, double div) {
	QTransform& _ret = self->operator+=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_OperatorMinusAssign(QTransform* self, double div) {
	QTransform& _ret = self->operator-=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_FromTranslate(double dx, double dy) {
	return new QTransform(QTransform::fromTranslate(static_cast<qreal>(dx), static_cast<qreal>(dy)));
}

QTransform* QTransform_FromScale(double dx, double dy) {
	return new QTransform(QTransform::fromScale(static_cast<qreal>(dx), static_cast<qreal>(dy)));
}

QTransform* QTransform_Inverted1(const QTransform* self, bool* invertible) {
	return new QTransform(self->inverted(invertible));
}

QTransform* QTransform_Rotate2(QTransform* self, double a, int axis) {
	QTransform& _ret = self->rotate(static_cast<qreal>(a), static_cast<Qt::Axis>(axis));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_RotateRadians2(QTransform* self, double a, int axis) {
	QTransform& _ret = self->rotateRadians(static_cast<qreal>(a), static_cast<Qt::Axis>(axis));
	// Cast returned reference into pointer
	return &_ret;
}

void QTransform_Delete(QTransform* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTransform*>( self );
	} else {
		delete self;
	}
}

