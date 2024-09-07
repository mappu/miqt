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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

bool QTransform_IsAffine(QTransform* self) {
	return const_cast<const QTransform*>(self)->isAffine();
}

bool QTransform_IsIdentity(QTransform* self) {
	return const_cast<const QTransform*>(self)->isIdentity();
}

bool QTransform_IsInvertible(QTransform* self) {
	return const_cast<const QTransform*>(self)->isInvertible();
}

bool QTransform_IsScaling(QTransform* self) {
	return const_cast<const QTransform*>(self)->isScaling();
}

bool QTransform_IsRotating(QTransform* self) {
	return const_cast<const QTransform*>(self)->isRotating();
}

bool QTransform_IsTranslating(QTransform* self) {
	return const_cast<const QTransform*>(self)->isTranslating();
}

uintptr_t QTransform_Type(QTransform* self) {
	QTransform::TransformationType ret = const_cast<const QTransform*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

double QTransform_Determinant(QTransform* self) {
	return const_cast<const QTransform*>(self)->determinant();
}

double QTransform_Det(QTransform* self) {
	return const_cast<const QTransform*>(self)->det();
}

double QTransform_M11(QTransform* self) {
	return const_cast<const QTransform*>(self)->m11();
}

double QTransform_M12(QTransform* self) {
	return const_cast<const QTransform*>(self)->m12();
}

double QTransform_M13(QTransform* self) {
	return const_cast<const QTransform*>(self)->m13();
}

double QTransform_M21(QTransform* self) {
	return const_cast<const QTransform*>(self)->m21();
}

double QTransform_M22(QTransform* self) {
	return const_cast<const QTransform*>(self)->m22();
}

double QTransform_M23(QTransform* self) {
	return const_cast<const QTransform*>(self)->m23();
}

double QTransform_M31(QTransform* self) {
	return const_cast<const QTransform*>(self)->m31();
}

double QTransform_M32(QTransform* self) {
	return const_cast<const QTransform*>(self)->m32();
}

double QTransform_M33(QTransform* self) {
	return const_cast<const QTransform*>(self)->m33();
}

double QTransform_Dx(QTransform* self) {
	return const_cast<const QTransform*>(self)->dx();
}

double QTransform_Dy(QTransform* self) {
	return const_cast<const QTransform*>(self)->dy();
}

void QTransform_SetMatrix(QTransform* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33) {
	self->setMatrix(static_cast<qreal>(m11), static_cast<qreal>(m12), static_cast<qreal>(m13), static_cast<qreal>(m21), static_cast<qreal>(m22), static_cast<qreal>(m23), static_cast<qreal>(m31), static_cast<qreal>(m32), static_cast<qreal>(m33));
}

QTransform* QTransform_Inverted(QTransform* self) {
	QTransform ret = const_cast<const QTransform*>(self)->inverted();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QTransform* QTransform_Adjoint(QTransform* self) {
	QTransform ret = const_cast<const QTransform*>(self)->adjoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QTransform* QTransform_Transposed(QTransform* self) {
	QTransform ret = const_cast<const QTransform*>(self)->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QTransform* QTransform_Translate(QTransform* self, double dx, double dy) {
	QTransform& ret = self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Cast returned reference into pointer
	return &ret;
}

QTransform* QTransform_Scale(QTransform* self, double sx, double sy) {
	QTransform& ret = self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
	// Cast returned reference into pointer
	return &ret;
}

QTransform* QTransform_Shear(QTransform* self, double sh, double sv) {
	QTransform& ret = self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
	// Cast returned reference into pointer
	return &ret;
}

QTransform* QTransform_Rotate(QTransform* self, double a) {
	QTransform& ret = self->rotate(static_cast<qreal>(a));
	// Cast returned reference into pointer
	return &ret;
}

QTransform* QTransform_RotateRadians(QTransform* self, double a) {
	QTransform& ret = self->rotateRadians(static_cast<qreal>(a));
	// Cast returned reference into pointer
	return &ret;
}

bool QTransform_OperatorEqual(QTransform* self, QTransform* param1) {
	return const_cast<const QTransform*>(self)->operator==(*param1);
}

bool QTransform_OperatorNotEqual(QTransform* self, QTransform* param1) {
	return const_cast<const QTransform*>(self)->operator!=(*param1);
}

QTransform* QTransform_OperatorMultiplyAssign(QTransform* self, QTransform* param1) {
	QTransform& ret = self->operator*=(*param1);
	// Cast returned reference into pointer
	return &ret;
}

QTransform* QTransform_OperatorMultiply(QTransform* self, QTransform* o) {
	QTransform ret = const_cast<const QTransform*>(self)->operator*(*o);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

void QTransform_Reset(QTransform* self) {
	self->reset();
}

QPoint* QTransform_Map(QTransform* self, QPoint* p) {
	QPoint ret = const_cast<const QTransform*>(self)->map(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QTransform_MapWithQPointF(QTransform* self, QPointF* p) {
	QPointF ret = const_cast<const QTransform*>(self)->map(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QLine* QTransform_MapWithQLine(QTransform* self, QLine* l) {
	QLine ret = const_cast<const QTransform*>(self)->map(*l);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLine*>(new QLine(ret));
}

QLineF* QTransform_MapWithQLineF(QTransform* self, QLineF* l) {
	QLineF ret = const_cast<const QTransform*>(self)->map(*l);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(ret));
}

QRegion* QTransform_MapWithQRegion(QTransform* self, QRegion* r) {
	QRegion ret = const_cast<const QTransform*>(self)->map(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QPainterPath* QTransform_MapWithQPainterPath(QTransform* self, QPainterPath* p) {
	QPainterPath ret = const_cast<const QTransform*>(self)->map(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QRect* QTransform_MapRect(QTransform* self, QRect* param1) {
	QRect ret = const_cast<const QTransform*>(self)->mapRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRectF* QTransform_MapRectWithQRectF(QTransform* self, QRectF* param1) {
	QRectF ret = const_cast<const QTransform*>(self)->mapRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QTransform_Map2(QTransform* self, int x, int y, int* tx, int* ty) {
	const_cast<const QTransform*>(self)->map(static_cast<int>(x), static_cast<int>(y), static_cast<int*>(tx), static_cast<int*>(ty));
}

void QTransform_Map3(QTransform* self, double x, double y, double* tx, double* ty) {
	const_cast<const QTransform*>(self)->map(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal*>(tx), static_cast<qreal*>(ty));
}

QMatrix* QTransform_ToAffine(QTransform* self) {
	const QMatrix& ret = const_cast<const QTransform*>(self)->toAffine();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&ret);
}

QTransform* QTransform_OperatorMultiplyAssignWithDiv(QTransform* self, double div) {
	QTransform& ret = self->operator*=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &ret;
}

QTransform* QTransform_OperatorDivideAssign(QTransform* self, double div) {
	QTransform& ret = self->operator/=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &ret;
}

QTransform* QTransform_OperatorPlusAssign(QTransform* self, double div) {
	QTransform& ret = self->operator+=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &ret;
}

QTransform* QTransform_OperatorMinusAssign(QTransform* self, double div) {
	QTransform& ret = self->operator-=(static_cast<qreal>(div));
	// Cast returned reference into pointer
	return &ret;
}

QTransform* QTransform_FromTranslate(double dx, double dy) {
	QTransform ret = QTransform::fromTranslate(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QTransform* QTransform_FromScale(double dx, double dy) {
	QTransform ret = QTransform::fromScale(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QTransform* QTransform_Inverted1(QTransform* self, bool* invertible) {
	QTransform ret = const_cast<const QTransform*>(self)->inverted(invertible);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QTransform* QTransform_Rotate2(QTransform* self, double a, uintptr_t axis) {
	QTransform& ret = self->rotate(static_cast<qreal>(a), static_cast<Qt::Axis>(axis));
	// Cast returned reference into pointer
	return &ret;
}

QTransform* QTransform_RotateRadians2(QTransform* self, double a, uintptr_t axis) {
	QTransform& ret = self->rotateRadians(static_cast<qreal>(a), static_cast<Qt::Axis>(axis));
	// Cast returned reference into pointer
	return &ret;
}

void QTransform_Delete(QTransform* self) {
	delete self;
}

