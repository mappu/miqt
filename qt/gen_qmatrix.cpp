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
#include "_cgo_export.h"

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

void QMatrix_OperatorAssign(QMatrix* self, QMatrix* param1) {
	self->operator=(*param1);
}

void QMatrix_SetMatrix(QMatrix* self, double m11, double m12, double m21, double m22, double dx, double dy) {
	self->setMatrix(static_cast<qreal>(m11), static_cast<qreal>(m12), static_cast<qreal>(m21), static_cast<qreal>(m22), static_cast<qreal>(dx), static_cast<qreal>(dy));
}

double QMatrix_M11(const QMatrix* self) {
	qreal _ret = self->m11();
	return static_cast<double>(_ret);
}

double QMatrix_M12(const QMatrix* self) {
	qreal _ret = self->m12();
	return static_cast<double>(_ret);
}

double QMatrix_M21(const QMatrix* self) {
	qreal _ret = self->m21();
	return static_cast<double>(_ret);
}

double QMatrix_M22(const QMatrix* self) {
	qreal _ret = self->m22();
	return static_cast<double>(_ret);
}

double QMatrix_Dx(const QMatrix* self) {
	qreal _ret = self->dx();
	return static_cast<double>(_ret);
}

double QMatrix_Dy(const QMatrix* self) {
	qreal _ret = self->dy();
	return static_cast<double>(_ret);
}

void QMatrix_Map(const QMatrix* self, int x, int y, int* tx, int* ty) {
	self->map(static_cast<int>(x), static_cast<int>(y), static_cast<int*>(tx), static_cast<int*>(ty));
}

void QMatrix_Map2(const QMatrix* self, double x, double y, double* tx, double* ty) {
	self->map(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal*>(tx), static_cast<qreal*>(ty));
}

QRect* QMatrix_MapRect(const QMatrix* self, QRect* param1) {
	return new QRect(self->mapRect(*param1));
}

QRectF* QMatrix_MapRectWithQRectF(const QMatrix* self, QRectF* param1) {
	return new QRectF(self->mapRect(*param1));
}

QPoint* QMatrix_MapWithQPoint(const QMatrix* self, QPoint* p) {
	return new QPoint(self->map(*p));
}

QPointF* QMatrix_MapWithQPointF(const QMatrix* self, QPointF* p) {
	return new QPointF(self->map(*p));
}

QLine* QMatrix_MapWithQLine(const QMatrix* self, QLine* l) {
	return new QLine(self->map(*l));
}

QLineF* QMatrix_MapWithQLineF(const QMatrix* self, QLineF* l) {
	return new QLineF(self->map(*l));
}

QRegion* QMatrix_MapWithQRegion(const QMatrix* self, QRegion* r) {
	return new QRegion(self->map(*r));
}

QPainterPath* QMatrix_MapWithQPainterPath(const QMatrix* self, QPainterPath* p) {
	return new QPainterPath(self->map(*p));
}

void QMatrix_Reset(QMatrix* self) {
	self->reset();
}

bool QMatrix_IsIdentity(const QMatrix* self) {
	return self->isIdentity();
}

QMatrix* QMatrix_Translate(QMatrix* self, double dx, double dy) {
	QMatrix& _ret = self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix* QMatrix_Scale(QMatrix* self, double sx, double sy) {
	QMatrix& _ret = self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix* QMatrix_Shear(QMatrix* self, double sh, double sv) {
	QMatrix& _ret = self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix* QMatrix_Rotate(QMatrix* self, double a) {
	QMatrix& _ret = self->rotate(static_cast<qreal>(a));
	// Cast returned reference into pointer
	return &_ret;
}

bool QMatrix_IsInvertible(const QMatrix* self) {
	return self->isInvertible();
}

double QMatrix_Determinant(const QMatrix* self) {
	qreal _ret = self->determinant();
	return static_cast<double>(_ret);
}

QMatrix* QMatrix_Inverted(const QMatrix* self) {
	return new QMatrix(self->inverted());
}

bool QMatrix_OperatorEqual(const QMatrix* self, QMatrix* param1) {
	return self->operator==(*param1);
}

bool QMatrix_OperatorNotEqual(const QMatrix* self, QMatrix* param1) {
	return self->operator!=(*param1);
}

QMatrix* QMatrix_OperatorMultiplyAssign(QMatrix* self, QMatrix* param1) {
	QMatrix& _ret = self->operator*=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix* QMatrix_OperatorMultiply(const QMatrix* self, QMatrix* o) {
	return new QMatrix(self->operator*(*o));
}

QMatrix* QMatrix_Inverted1(const QMatrix* self, bool* invertible) {
	return new QMatrix(self->inverted(invertible));
}

void QMatrix_Delete(QMatrix* self) {
	delete self;
}

