#include <QLine>
#include <QLineF>
#include <QMatrix>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QTransform>
#include "qtransform.h"
#include "gen_qtransform.h"
#include "_cgo_export.h"

QTransform* QTransform_new(uintptr_t param1) {
	return new QTransform(static_cast<Qt::Initialization>(param1));
}

QTransform* QTransform_new2() {
	return new QTransform();
}

QTransform* QTransform_new3(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32) {
	return new QTransform(static_cast<qreal>(h11), static_cast<qreal>(h12), static_cast<qreal>(h13), static_cast<qreal>(h21), static_cast<qreal>(h22), static_cast<qreal>(h23), static_cast<qreal>(h31), static_cast<qreal>(h32));
}

QTransform* QTransform_new4(double h11, double h12, double h21, double h22, double dx, double dy) {
	return new QTransform(static_cast<qreal>(h11), static_cast<qreal>(h12), static_cast<qreal>(h21), static_cast<qreal>(h22), static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QTransform* QTransform_new5(QMatrix* mtx) {
	return new QTransform(*mtx);
}

QTransform* QTransform_new6(QTransform* other) {
	return new QTransform(*other);
}

QTransform* QTransform_new7(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33) {
	return new QTransform(static_cast<qreal>(h11), static_cast<qreal>(h12), static_cast<qreal>(h13), static_cast<qreal>(h21), static_cast<qreal>(h22), static_cast<qreal>(h23), static_cast<qreal>(h31), static_cast<qreal>(h32), static_cast<qreal>(h33));
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

uintptr_t QTransform_Type(const QTransform* self) {
	QTransform::TransformationType _ret = self->type();
	return static_cast<uintptr_t>(_ret);
}

double QTransform_Determinant(const QTransform* self) {
	return self->determinant();
}

double QTransform_Det(const QTransform* self) {
	return self->det();
}

double QTransform_M11(const QTransform* self) {
	return self->m11();
}

double QTransform_M12(const QTransform* self) {
	return self->m12();
}

double QTransform_M13(const QTransform* self) {
	return self->m13();
}

double QTransform_M21(const QTransform* self) {
	return self->m21();
}

double QTransform_M22(const QTransform* self) {
	return self->m22();
}

double QTransform_M23(const QTransform* self) {
	return self->m23();
}

double QTransform_M31(const QTransform* self) {
	return self->m31();
}

double QTransform_M32(const QTransform* self) {
	return self->m32();
}

double QTransform_M33(const QTransform* self) {
	return self->m33();
}

double QTransform_Dx(const QTransform* self) {
	return self->dx();
}

double QTransform_Dy(const QTransform* self) {
	return self->dy();
}

void QTransform_SetMatrix(QTransform* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33) {
	self->setMatrix(static_cast<qreal>(m11), static_cast<qreal>(m12), static_cast<qreal>(m13), static_cast<qreal>(m21), static_cast<qreal>(m22), static_cast<qreal>(m23), static_cast<qreal>(m31), static_cast<qreal>(m32), static_cast<qreal>(m33));
}

QTransform* QTransform_Inverted(const QTransform* self) {
	QTransform _ret = self->inverted();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

QTransform* QTransform_Adjoint(const QTransform* self) {
	QTransform _ret = self->adjoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

QTransform* QTransform_Transposed(const QTransform* self) {
	QTransform _ret = self->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
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
	return self->operator==(*param1);
}

bool QTransform_OperatorNotEqual(const QTransform* self, QTransform* param1) {
	return self->operator!=(*param1);
}

QTransform* QTransform_OperatorMultiplyAssign(QTransform* self, QTransform* param1) {
	QTransform& _ret = self->operator*=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_OperatorMultiply(const QTransform* self, QTransform* o) {
	QTransform _ret = self->operator*(*o);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

void QTransform_Reset(QTransform* self) {
	self->reset();
}

QPoint* QTransform_Map(const QTransform* self, QPoint* p) {
	QPoint _ret = self->map(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(_ret));
}

QPointF* QTransform_MapWithQPointF(const QTransform* self, QPointF* p) {
	QPointF _ret = self->map(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

QLine* QTransform_MapWithQLine(const QTransform* self, QLine* l) {
	QLine _ret = self->map(*l);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLine*>(new QLine(_ret));
}

QLineF* QTransform_MapWithQLineF(const QTransform* self, QLineF* l) {
	QLineF _ret = self->map(*l);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(_ret));
}

QRegion* QTransform_MapWithQRegion(const QTransform* self, QRegion* r) {
	QRegion _ret = self->map(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QPainterPath* QTransform_MapWithQPainterPath(const QTransform* self, QPainterPath* p) {
	QPainterPath _ret = self->map(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

QRect* QTransform_MapRect(const QTransform* self, QRect* param1) {
	QRect _ret = self->mapRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRectF* QTransform_MapRectWithQRectF(const QTransform* self, QRectF* param1) {
	QRectF _ret = self->mapRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

void QTransform_Map2(const QTransform* self, int x, int y, int* tx, int* ty) {
	self->map(static_cast<int>(x), static_cast<int>(y), static_cast<int*>(tx), static_cast<int*>(ty));
}

void QTransform_Map3(const QTransform* self, double x, double y, double* tx, double* ty) {
	self->map(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal*>(tx), static_cast<qreal*>(ty));
}

QMatrix* QTransform_ToAffine(const QTransform* self) {
	const QMatrix& _ret = self->toAffine();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&_ret);
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
	QTransform _ret = QTransform::fromTranslate(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

QTransform* QTransform_FromScale(double dx, double dy) {
	QTransform _ret = QTransform::fromScale(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

QTransform* QTransform_Inverted1(const QTransform* self, bool* invertible) {
	QTransform _ret = self->inverted(invertible);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

QTransform* QTransform_Rotate2(QTransform* self, double a, uintptr_t axis) {
	QTransform& _ret = self->rotate(static_cast<qreal>(a), static_cast<Qt::Axis>(axis));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_RotateRadians2(QTransform* self, double a, uintptr_t axis) {
	QTransform& _ret = self->rotateRadians(static_cast<qreal>(a), static_cast<Qt::Axis>(axis));
	// Cast returned reference into pointer
	return &_ret;
}

void QTransform_Delete(QTransform* self) {
	delete self;
}

