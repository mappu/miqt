#include <QMargins>
#include <QMarginsF>
#include <QSize>
#include <QSizeF>
#include <qsize.h>
#include "gen_qsize.h"
#include "_cgo_export.h"

void QSize_new(QSize** outptr_QSize) {
	QSize* ret = new QSize();
	*outptr_QSize = ret;
}

void QSize_new2(int w, int h, QSize** outptr_QSize) {
	QSize* ret = new QSize(static_cast<int>(w), static_cast<int>(h));
	*outptr_QSize = ret;
}

void QSize_new3(QSize* param1, QSize** outptr_QSize) {
	QSize* ret = new QSize(*param1);
	*outptr_QSize = ret;
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
	return new QSize(self->transposed());
}

void QSize_Scale(QSize* self, int w, int h, int mode) {
	self->scale(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSize_Scale2(QSize* self, QSize* s, int mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSize* QSize_Scaled(const QSize* self, int w, int h, int mode) {
	return new QSize(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode)));
}

QSize* QSize_Scaled2(const QSize* self, QSize* s, int mode) {
	return new QSize(self->scaled(*s, static_cast<Qt::AspectRatioMode>(mode)));
}

QSize* QSize_ExpandedTo(const QSize* self, QSize* param1) {
	return new QSize(self->expandedTo(*param1));
}

QSize* QSize_BoundedTo(const QSize* self, QSize* param1) {
	return new QSize(self->boundedTo(*param1));
}

QSize* QSize_GrownBy(const QSize* self, QMargins* m) {
	return new QSize(self->grownBy(*m));
}

QSize* QSize_ShrunkBy(const QSize* self, QMargins* m) {
	return new QSize(self->shrunkBy(*m));
}

QSize* QSize_OperatorPlusAssign(QSize* self, QSize* param1) {
	QSize& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSize_OperatorMinusAssign(QSize* self, QSize* param1) {
	QSize& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSize_OperatorMultiplyAssign(QSize* self, double c) {
	QSize& _ret = self->operator*=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSize_OperatorDivideAssign(QSize* self, double c) {
	QSize& _ret = self->operator/=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

void QSize_Delete(QSize* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSize*>( self );
	} else {
		delete self;
	}
}

void QSizeF_new(QSizeF** outptr_QSizeF) {
	QSizeF* ret = new QSizeF();
	*outptr_QSizeF = ret;
}

void QSizeF_new2(QSize* sz, QSizeF** outptr_QSizeF) {
	QSizeF* ret = new QSizeF(*sz);
	*outptr_QSizeF = ret;
}

void QSizeF_new3(double w, double h, QSizeF** outptr_QSizeF) {
	QSizeF* ret = new QSizeF(static_cast<qreal>(w), static_cast<qreal>(h));
	*outptr_QSizeF = ret;
}

void QSizeF_new4(QSizeF* param1, QSizeF** outptr_QSizeF) {
	QSizeF* ret = new QSizeF(*param1);
	*outptr_QSizeF = ret;
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
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

double QSizeF_Height(const QSizeF* self) {
	qreal _ret = self->height();
	return static_cast<double>(_ret);
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
	return new QSizeF(self->transposed());
}

void QSizeF_Scale(QSizeF* self, double w, double h, int mode) {
	self->scale(static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSizeF_Scale2(QSizeF* self, QSizeF* s, int mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSizeF* QSizeF_Scaled(const QSizeF* self, double w, double h, int mode) {
	return new QSizeF(self->scaled(static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(mode)));
}

QSizeF* QSizeF_Scaled2(const QSizeF* self, QSizeF* s, int mode) {
	return new QSizeF(self->scaled(*s, static_cast<Qt::AspectRatioMode>(mode)));
}

QSizeF* QSizeF_ExpandedTo(const QSizeF* self, QSizeF* param1) {
	return new QSizeF(self->expandedTo(*param1));
}

QSizeF* QSizeF_BoundedTo(const QSizeF* self, QSizeF* param1) {
	return new QSizeF(self->boundedTo(*param1));
}

QSizeF* QSizeF_GrownBy(const QSizeF* self, QMarginsF* m) {
	return new QSizeF(self->grownBy(*m));
}

QSizeF* QSizeF_ShrunkBy(const QSizeF* self, QMarginsF* m) {
	return new QSizeF(self->shrunkBy(*m));
}

QSizeF* QSizeF_OperatorPlusAssign(QSizeF* self, QSizeF* param1) {
	QSizeF& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSizeF_OperatorMinusAssign(QSizeF* self, QSizeF* param1) {
	QSizeF& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSizeF_OperatorMultiplyAssign(QSizeF* self, double c) {
	QSizeF& _ret = self->operator*=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSizeF_OperatorDivideAssign(QSizeF* self, double c) {
	QSizeF& _ret = self->operator/=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSizeF_ToSize(const QSizeF* self) {
	return new QSize(self->toSize());
}

void QSizeF_Delete(QSizeF* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSizeF*>( self );
	} else {
		delete self;
	}
}

