#include "gen_qsize.h"
#include "qsize.h"

#include <QMargins>
#include <QMarginsF>
#include <QSize>
#include <QSizeF>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSize* QSize_new() {
	return new QSize();
}

QSize* QSize_new2(int w, int h) {
	return new QSize(static_cast<int>(w), static_cast<int>(h));
}

QSize* QSize_new3(QSize* param1) {
	return new QSize(*param1);
}

bool QSize_IsNull(QSize* self) {
	return self->isNull();
}

bool QSize_IsEmpty(QSize* self) {
	return self->isEmpty();
}

bool QSize_IsValid(QSize* self) {
	return self->isValid();
}

int QSize_Width(QSize* self) {
	return self->width();
}

int QSize_Height(QSize* self) {
	return self->height();
}

void QSize_SetWidth(QSize* self, int w) {
	self->setWidth(static_cast<int>(w));
}

void QSize_SetHeight(QSize* self, int h) {
	self->setHeight(static_cast<int>(h));
}

void QSize_Transpose(QSize* self) {
	self->transpose();
}

QSize* QSize_Transposed(QSize* self) {
	QSize ret = self->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_ExpandedTo(QSize* self, QSize* param1) {
	QSize ret = self->expandedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_BoundedTo(QSize* self, QSize* param1) {
	QSize ret = self->boundedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_GrownBy(QSize* self, QMargins* m) {
	QSize ret = self->grownBy(*m);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_ShrunkBy(QSize* self, QMargins* m) {
	QSize ret = self->shrunkBy(*m);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_OperatorPlusAssign(QSize* self, QSize* param1) {
	QSize& ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &ret;
}

QSize* QSize_OperatorMinusAssign(QSize* self, QSize* param1) {
	QSize& ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &ret;
}

QSize* QSize_OperatorMultiplyAssign(QSize* self, double c) {
	QSize& ret = self->operator*=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &ret;
}

QSize* QSize_OperatorDivideAssign(QSize* self, double c) {
	QSize& ret = self->operator/=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &ret;
}

void QSize_Delete(QSize* self) {
	delete self;
}

QSizeF* QSizeF_new() {
	return new QSizeF();
}

QSizeF* QSizeF_new2(QSize* sz) {
	return new QSizeF(*sz);
}

QSizeF* QSizeF_new3(double w, double h) {
	return new QSizeF(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QSizeF_new4(QSizeF* param1) {
	return new QSizeF(*param1);
}

bool QSizeF_IsNull(QSizeF* self) {
	return self->isNull();
}

bool QSizeF_IsEmpty(QSizeF* self) {
	return self->isEmpty();
}

bool QSizeF_IsValid(QSizeF* self) {
	return self->isValid();
}

double QSizeF_Width(QSizeF* self) {
	return self->width();
}

double QSizeF_Height(QSizeF* self) {
	return self->height();
}

void QSizeF_SetWidth(QSizeF* self, double w) {
	self->setWidth(static_cast<qreal>(w));
}

void QSizeF_SetHeight(QSizeF* self, double h) {
	self->setHeight(static_cast<qreal>(h));
}

void QSizeF_Transpose(QSizeF* self) {
	self->transpose();
}

QSizeF* QSizeF_Transposed(QSizeF* self) {
	QSizeF ret = self->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_ExpandedTo(QSizeF* self, QSizeF* param1) {
	QSizeF ret = self->expandedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_BoundedTo(QSizeF* self, QSizeF* param1) {
	QSizeF ret = self->boundedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_GrownBy(QSizeF* self, QMarginsF* m) {
	QSizeF ret = self->grownBy(*m);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_ShrunkBy(QSizeF* self, QMarginsF* m) {
	QSizeF ret = self->shrunkBy(*m);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_OperatorPlusAssign(QSizeF* self, QSizeF* param1) {
	QSizeF& ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &ret;
}

QSizeF* QSizeF_OperatorMinusAssign(QSizeF* self, QSizeF* param1) {
	QSizeF& ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &ret;
}

QSizeF* QSizeF_OperatorMultiplyAssign(QSizeF* self, double c) {
	QSizeF& ret = self->operator*=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &ret;
}

QSizeF* QSizeF_OperatorDivideAssign(QSizeF* self, double c) {
	QSizeF& ret = self->operator/=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &ret;
}

QSize* QSizeF_ToSize(QSizeF* self) {
	QSize ret = self->toSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSizeF_Delete(QSizeF* self) {
	delete self;
}

