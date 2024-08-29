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

bool QSize_IsNull(QSize* self) {
	return const_cast<const QSize*>(self)->isNull();
}

bool QSize_IsEmpty(QSize* self) {
	return const_cast<const QSize*>(self)->isEmpty();
}

bool QSize_IsValid(QSize* self) {
	return const_cast<const QSize*>(self)->isValid();
}

int QSize_Width(QSize* self) {
	return const_cast<const QSize*>(self)->width();
}

int QSize_Height(QSize* self) {
	return const_cast<const QSize*>(self)->height();
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
	QSize ret = const_cast<const QSize*>(self)->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSize_Scale(QSize* self, int w, int h, uintptr_t mode) {
	self->scale(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSize_Scale2(QSize* self, QSize* s, uintptr_t mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSize* QSize_Scaled(QSize* self, int w, int h, uintptr_t mode) {
	QSize ret = const_cast<const QSize*>(self)->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_Scaled2(QSize* self, QSize* s, uintptr_t mode) {
	QSize ret = const_cast<const QSize*>(self)->scaled(*s, static_cast<Qt::AspectRatioMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_ExpandedTo(QSize* self, QSize* param1) {
	QSize ret = const_cast<const QSize*>(self)->expandedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_BoundedTo(QSize* self, QSize* param1) {
	QSize ret = const_cast<const QSize*>(self)->boundedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_GrownBy(QSize* self, QMargins* m) {
	QSize ret = const_cast<const QSize*>(self)->grownBy(*m);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSize_ShrunkBy(QSize* self, QMargins* m) {
	QSize ret = const_cast<const QSize*>(self)->shrunkBy(*m);
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
	return const_cast<const QSizeF*>(self)->isNull();
}

bool QSizeF_IsEmpty(QSizeF* self) {
	return const_cast<const QSizeF*>(self)->isEmpty();
}

bool QSizeF_IsValid(QSizeF* self) {
	return const_cast<const QSizeF*>(self)->isValid();
}

double QSizeF_Width(QSizeF* self) {
	return const_cast<const QSizeF*>(self)->width();
}

double QSizeF_Height(QSizeF* self) {
	return const_cast<const QSizeF*>(self)->height();
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
	QSizeF ret = const_cast<const QSizeF*>(self)->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QSizeF_Scale(QSizeF* self, double w, double h, uintptr_t mode) {
	self->scale(static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSizeF_Scale2(QSizeF* self, QSizeF* s, uintptr_t mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSizeF* QSizeF_Scaled(QSizeF* self, double w, double h, uintptr_t mode) {
	QSizeF ret = const_cast<const QSizeF*>(self)->scaled(static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_Scaled2(QSizeF* self, QSizeF* s, uintptr_t mode) {
	QSizeF ret = const_cast<const QSizeF*>(self)->scaled(*s, static_cast<Qt::AspectRatioMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_ExpandedTo(QSizeF* self, QSizeF* param1) {
	QSizeF ret = const_cast<const QSizeF*>(self)->expandedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_BoundedTo(QSizeF* self, QSizeF* param1) {
	QSizeF ret = const_cast<const QSizeF*>(self)->boundedTo(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_GrownBy(QSizeF* self, QMarginsF* m) {
	QSizeF ret = const_cast<const QSizeF*>(self)->grownBy(*m);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QSizeF* QSizeF_ShrunkBy(QSizeF* self, QMarginsF* m) {
	QSizeF ret = const_cast<const QSizeF*>(self)->shrunkBy(*m);
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
	QSize ret = const_cast<const QSizeF*>(self)->toSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSizeF_Delete(QSizeF* self) {
	delete self;
}

