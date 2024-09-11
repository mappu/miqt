#include <QLine>
#include <QLineF>
#include <QMatrix>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include "qmatrix.h"

#include "gen_qmatrix.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMatrix* QMatrix_new(uintptr_t param1) {
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

void QMatrix_OperatorAssign(QMatrix* self, QMatrix* param1) {
	self->operator=(*param1);
}

void QMatrix_SetMatrix(QMatrix* self, double m11, double m12, double m21, double m22, double dx, double dy) {
	self->setMatrix(static_cast<qreal>(m11), static_cast<qreal>(m12), static_cast<qreal>(m21), static_cast<qreal>(m22), static_cast<qreal>(dx), static_cast<qreal>(dy));
}

double QMatrix_M11(const QMatrix* self) {
	return self->m11();
}

double QMatrix_M12(const QMatrix* self) {
	return self->m12();
}

double QMatrix_M21(const QMatrix* self) {
	return self->m21();
}

double QMatrix_M22(const QMatrix* self) {
	return self->m22();
}

double QMatrix_Dx(const QMatrix* self) {
	return self->dx();
}

double QMatrix_Dy(const QMatrix* self) {
	return self->dy();
}

void QMatrix_Map(const QMatrix* self, int x, int y, int* tx, int* ty) {
	self->map(static_cast<int>(x), static_cast<int>(y), static_cast<int*>(tx), static_cast<int*>(ty));
}

void QMatrix_Map2(const QMatrix* self, double x, double y, double* tx, double* ty) {
	self->map(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal*>(tx), static_cast<qreal*>(ty));
}

QRect* QMatrix_MapRect(const QMatrix* self, QRect* param1) {
	QRect ret = self->mapRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRectF* QMatrix_MapRectWithQRectF(const QMatrix* self, QRectF* param1) {
	QRectF ret = self->mapRect(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPoint* QMatrix_MapWithQPoint(const QMatrix* self, QPoint* p) {
	QPoint ret = self->map(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QMatrix_MapWithQPointF(const QMatrix* self, QPointF* p) {
	QPointF ret = self->map(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QLine* QMatrix_MapWithQLine(const QMatrix* self, QLine* l) {
	QLine ret = self->map(*l);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLine*>(new QLine(ret));
}

QLineF* QMatrix_MapWithQLineF(const QMatrix* self, QLineF* l) {
	QLineF ret = self->map(*l);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(ret));
}

QRegion* QMatrix_MapWithQRegion(const QMatrix* self, QRegion* r) {
	QRegion ret = self->map(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QPainterPath* QMatrix_MapWithQPainterPath(const QMatrix* self, QPainterPath* p) {
	QPainterPath ret = self->map(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

void QMatrix_Reset(QMatrix* self) {
	self->reset();
}

bool QMatrix_IsIdentity(const QMatrix* self) {
	return self->isIdentity();
}

QMatrix* QMatrix_Translate(QMatrix* self, double dx, double dy) {
	QMatrix& ret = self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Cast returned reference into pointer
	return &ret;
}

QMatrix* QMatrix_Scale(QMatrix* self, double sx, double sy) {
	QMatrix& ret = self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
	// Cast returned reference into pointer
	return &ret;
}

QMatrix* QMatrix_Shear(QMatrix* self, double sh, double sv) {
	QMatrix& ret = self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
	// Cast returned reference into pointer
	return &ret;
}

QMatrix* QMatrix_Rotate(QMatrix* self, double a) {
	QMatrix& ret = self->rotate(static_cast<qreal>(a));
	// Cast returned reference into pointer
	return &ret;
}

bool QMatrix_IsInvertible(const QMatrix* self) {
	return self->isInvertible();
}

double QMatrix_Determinant(const QMatrix* self) {
	return self->determinant();
}

QMatrix* QMatrix_Inverted(const QMatrix* self) {
	QMatrix ret = self->inverted();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

bool QMatrix_OperatorEqual(const QMatrix* self, QMatrix* param1) {
	return self->operator==(*param1);
}

bool QMatrix_OperatorNotEqual(const QMatrix* self, QMatrix* param1) {
	return self->operator!=(*param1);
}

QMatrix* QMatrix_OperatorMultiplyAssign(QMatrix* self, QMatrix* param1) {
	QMatrix& ret = self->operator*=(*param1);
	// Cast returned reference into pointer
	return &ret;
}

QMatrix* QMatrix_OperatorMultiply(const QMatrix* self, QMatrix* o) {
	QMatrix ret = self->operator*(*o);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

QMatrix* QMatrix_Inverted1(const QMatrix* self, bool* invertible) {
	QMatrix ret = self->inverted(invertible);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

void QMatrix_Delete(QMatrix* self) {
	delete self;
}

