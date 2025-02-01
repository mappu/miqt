#include <QMargins>
#include <QMarginsF>
#include <QSize>
#include <QSizeF>
#include <qsize.h>
#include "gen_qsize.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSize* QSize_new() {
	return new QSize();
}

QSize* QSize_new2(int w, int h) {
	return new QSize(static_cast<int>(w), static_cast<int>(h));
}

QSize* QSize_new3(QSize* param1) {
	return new QSize(*param1);
}

bool QSize_isNull(const QSize* self) {
	return self->isNull();
}

bool QSize_isEmpty(const QSize* self) {
	return self->isEmpty();
}

bool QSize_isValid(const QSize* self) {
	return self->isValid();
}

int QSize_width(const QSize* self) {
	return self->width();
}

int QSize_height(const QSize* self) {
	return self->height();
}

void QSize_setWidth(QSize* self, int w) {
	self->setWidth(static_cast<int>(w));
}

void QSize_setHeight(QSize* self, int h) {
	self->setHeight(static_cast<int>(h));
}

void QSize_transpose(QSize* self) {
	self->transpose();
}

QSize* QSize_transposed(const QSize* self) {
	return new QSize(self->transposed());
}

void QSize_scale(QSize* self, int w, int h, int mode) {
	self->scale(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSize_scale2(QSize* self, QSize* s, int mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSize* QSize_scaled(const QSize* self, int w, int h, int mode) {
	return new QSize(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode)));
}

QSize* QSize_scaled2(const QSize* self, QSize* s, int mode) {
	return new QSize(self->scaled(*s, static_cast<Qt::AspectRatioMode>(mode)));
}

QSize* QSize_expandedTo(const QSize* self, QSize* param1) {
	return new QSize(self->expandedTo(*param1));
}

QSize* QSize_boundedTo(const QSize* self, QSize* param1) {
	return new QSize(self->boundedTo(*param1));
}

QSize* QSize_grownBy(const QSize* self, QMargins* m) {
	return new QSize(self->grownBy(*m));
}

QSize* QSize_shrunkBy(const QSize* self, QMargins* m) {
	return new QSize(self->shrunkBy(*m));
}

QSize* QSize_operatorPlusAssign(QSize* self, QSize* param1) {
	QSize& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSize_operatorMinusAssign(QSize* self, QSize* param1) {
	QSize& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSize_operatorMultiplyAssign(QSize* self, double c) {
	QSize& _ret = self->operator*=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSize_operatorDivideAssign(QSize* self, double c) {
	QSize& _ret = self->operator/=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSize_toSizeF(const QSize* self) {
	return new QSizeF(self->toSizeF());
}

void QSize_delete(QSize* self) {
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

bool QSizeF_isNull(const QSizeF* self) {
	return self->isNull();
}

bool QSizeF_isEmpty(const QSizeF* self) {
	return self->isEmpty();
}

bool QSizeF_isValid(const QSizeF* self) {
	return self->isValid();
}

double QSizeF_width(const QSizeF* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

double QSizeF_height(const QSizeF* self) {
	qreal _ret = self->height();
	return static_cast<double>(_ret);
}

void QSizeF_setWidth(QSizeF* self, double w) {
	self->setWidth(static_cast<qreal>(w));
}

void QSizeF_setHeight(QSizeF* self, double h) {
	self->setHeight(static_cast<qreal>(h));
}

void QSizeF_transpose(QSizeF* self) {
	self->transpose();
}

QSizeF* QSizeF_transposed(const QSizeF* self) {
	return new QSizeF(self->transposed());
}

void QSizeF_scale(QSizeF* self, double w, double h, int mode) {
	self->scale(static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSizeF_scale2(QSizeF* self, QSizeF* s, int mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSizeF* QSizeF_scaled(const QSizeF* self, double w, double h, int mode) {
	return new QSizeF(self->scaled(static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(mode)));
}

QSizeF* QSizeF_scaled2(const QSizeF* self, QSizeF* s, int mode) {
	return new QSizeF(self->scaled(*s, static_cast<Qt::AspectRatioMode>(mode)));
}

QSizeF* QSizeF_expandedTo(const QSizeF* self, QSizeF* param1) {
	return new QSizeF(self->expandedTo(*param1));
}

QSizeF* QSizeF_boundedTo(const QSizeF* self, QSizeF* param1) {
	return new QSizeF(self->boundedTo(*param1));
}

QSizeF* QSizeF_grownBy(const QSizeF* self, QMarginsF* m) {
	return new QSizeF(self->grownBy(*m));
}

QSizeF* QSizeF_shrunkBy(const QSizeF* self, QMarginsF* m) {
	return new QSizeF(self->shrunkBy(*m));
}

QSizeF* QSizeF_operatorPlusAssign(QSizeF* self, QSizeF* param1) {
	QSizeF& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSizeF_operatorMinusAssign(QSizeF* self, QSizeF* param1) {
	QSizeF& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSizeF_operatorMultiplyAssign(QSizeF* self, double c) {
	QSizeF& _ret = self->operator*=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSizeF_operatorDivideAssign(QSizeF* self, double c) {
	QSizeF& _ret = self->operator/=(static_cast<qreal>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSizeF_toSize(const QSizeF* self) {
	return new QSize(self->toSize());
}

void QSizeF_delete(QSizeF* self) {
	delete self;
}

