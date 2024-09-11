#include <QMargins>
#include <QMarginsF>
#include <QSize>
#include <QSizeF>
#include "qsize.h"

#include "gen_qsize.h"

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

bool QSize_IsNull(const QSize* self) {
	return self->isNull();
}

bool QSize_IsEmpty(const QSize* self) {
	return self->isEmpty();
}

bool QSize_IsValid(const QSize* self) {
	return self->isValid();
}

int QSize_Width(const QSize* self) {
	return self->width();
}

int QSize_Height(const QSize* self) {
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

QSize* QSize_Transposed(const QSize* self) {
	QSize ret = self->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSize_Scale(QSize* self, int w, int h, uintptr_t mode) {
	self->scale(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSize_Scale2(QSize* self, QSize* s, uintptr_t mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSize* QSize_Scaled(const QSize* self, int w, int h, uintptr_t mode) {
	QSize ret = self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_Scaled2(const QSize* self, QSize* s, uintptr_t mode) {
	QSize ret = self->scaled(*s, static_cast<Qt::AspectRatioMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_ExpandedTo(const QSize* self, QSize* param1) {
	QSize ret = self->expandedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_BoundedTo(const QSize* self, QSize* param1) {
	QSize ret = self->boundedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_GrownBy(const QSize* self, QMargins* m) {
	QSize ret = self->grownBy(*m);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_ShrunkBy(const QSize* self, QMargins* m) {
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

bool QSizeF_IsNull(const QSizeF* self) {
	return self->isNull();
}

bool QSizeF_IsEmpty(const QSizeF* self) {
	return self->isEmpty();
}

bool QSizeF_IsValid(const QSizeF* self) {
	return self->isValid();
}

double QSizeF_Width(const QSizeF* self) {
	return self->width();
}

double QSizeF_Height(const QSizeF* self) {
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

QSizeF* QSizeF_Transposed(const QSizeF* self) {
	QSizeF ret = self->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QSizeF_Scale(QSizeF* self, double w, double h, uintptr_t mode) {
	self->scale(static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSizeF_Scale2(QSizeF* self, QSizeF* s, uintptr_t mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSizeF* QSizeF_Scaled(const QSizeF* self, double w, double h, uintptr_t mode) {
	QSizeF ret = self->scaled(static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_Scaled2(const QSizeF* self, QSizeF* s, uintptr_t mode) {
	QSizeF ret = self->scaled(*s, static_cast<Qt::AspectRatioMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_ExpandedTo(const QSizeF* self, QSizeF* param1) {
	QSizeF ret = self->expandedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_BoundedTo(const QSizeF* self, QSizeF* param1) {
	QSizeF ret = self->boundedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_GrownBy(const QSizeF* self, QMarginsF* m) {
	QSizeF ret = self->grownBy(*m);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_ShrunkBy(const QSizeF* self, QMarginsF* m) {
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

QSize* QSizeF_ToSize(const QSizeF* self) {
	QSize ret = self->toSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSizeF_Delete(QSizeF* self) {
	delete self;
}

