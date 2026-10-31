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

struct miqt_qsize QSize_new() {
	return miqt_to_cabi<struct miqt_qsize>(QSize());
}

struct miqt_qsize QSize_new2(int w, int h) {
	return miqt_to_cabi<struct miqt_qsize>(QSize(static_cast<int>(w), static_cast<int>(h)));
}

struct miqt_qsize QSize_new3(struct miqt_qsize param1) {
	return miqt_to_cabi<struct miqt_qsize>(QSize(miqt_from_cabi<QSize>(param1)));
}

bool QSize_isNull(struct miqt_qsize self_cabi) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
	return self->isNull();
}

bool QSize_isEmpty(struct miqt_qsize self_cabi) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
	return self->isEmpty();
}

bool QSize_isValid(struct miqt_qsize self_cabi) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
	return self->isValid();
}

int QSize_width(struct miqt_qsize self_cabi) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
	return self->width();
}

int QSize_height(struct miqt_qsize self_cabi) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
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

struct miqt_qsize QSize_transposed(struct miqt_qsize self_cabi) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
	return miqt_to_cabi<struct miqt_qsize>(self->transposed());
}

void QSize_scale(QSize* self, int w, int h, int mode) {
	self->scale(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSize_scale2(QSize* self, struct miqt_qsize s, int mode) {
	self->scale(miqt_from_cabi<QSize>(s), static_cast<Qt::AspectRatioMode>(mode));
}

struct miqt_qsize QSize_scaled(struct miqt_qsize self_cabi, int w, int h, int mode) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
	return miqt_to_cabi<struct miqt_qsize>(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode)));
}

struct miqt_qsize QSize_scaled2(struct miqt_qsize self_cabi, struct miqt_qsize s, int mode) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
	return miqt_to_cabi<struct miqt_qsize>(self->scaled(miqt_from_cabi<QSize>(s), static_cast<Qt::AspectRatioMode>(mode)));
}

struct miqt_qsize QSize_expandedTo(struct miqt_qsize self_cabi, struct miqt_qsize param1) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
	return miqt_to_cabi<struct miqt_qsize>(self->expandedTo(miqt_from_cabi<QSize>(param1)));
}

struct miqt_qsize QSize_boundedTo(struct miqt_qsize self_cabi, struct miqt_qsize param1) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
	return miqt_to_cabi<struct miqt_qsize>(self->boundedTo(miqt_from_cabi<QSize>(param1)));
}

struct miqt_qsize QSize_grownBy(struct miqt_qsize self_cabi, struct miqt_qmargins m) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
	return miqt_to_cabi<struct miqt_qsize>(self->grownBy(miqt_from_cabi<QMargins>(m)));
}

struct miqt_qsize QSize_shrunkBy(struct miqt_qsize self_cabi, struct miqt_qmargins m) {
	const QSize self_val = miqt_from_cabi<QSize>(self_cabi);
	const QSize* self = &self_val;
	return miqt_to_cabi<struct miqt_qsize>(self->shrunkBy(miqt_from_cabi<QMargins>(m)));
}

QSize* QSize_operatorPlusAssign(QSize* self, struct miqt_qsize param1) {
	QSize& _ret = self->operator+=(miqt_from_cabi<QSize>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSize_operatorMinusAssign(QSize* self, struct miqt_qsize param1) {
	QSize& _ret = self->operator-=(miqt_from_cabi<QSize>(param1));
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

void QSize_operatorAssign(QSize* self, struct miqt_qsize param1) {
	self->operator=(miqt_from_cabi<QSize>(param1));
}

struct miqt_qsizef QSizeF_new() {
	return miqt_to_cabi<struct miqt_qsizef>(QSizeF());
}

struct miqt_qsizef QSizeF_new2(struct miqt_qsize sz) {
	return miqt_to_cabi<struct miqt_qsizef>(QSizeF(miqt_from_cabi<QSize>(sz)));
}

struct miqt_qsizef QSizeF_new3(double w, double h) {
	return miqt_to_cabi<struct miqt_qsizef>(QSizeF(static_cast<qreal>(w), static_cast<qreal>(h)));
}

struct miqt_qsizef QSizeF_new4(struct miqt_qsizef param1) {
	return miqt_to_cabi<struct miqt_qsizef>(QSizeF(miqt_from_cabi<QSizeF>(param1)));
}

bool QSizeF_isNull(struct miqt_qsizef self_cabi) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	return self->isNull();
}

bool QSizeF_isEmpty(struct miqt_qsizef self_cabi) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	return self->isEmpty();
}

bool QSizeF_isValid(struct miqt_qsizef self_cabi) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	return self->isValid();
}

double QSizeF_width(struct miqt_qsizef self_cabi) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

double QSizeF_height(struct miqt_qsizef self_cabi) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
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

struct miqt_qsizef QSizeF_transposed(struct miqt_qsizef self_cabi) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	return miqt_to_cabi<struct miqt_qsizef>(self->transposed());
}

void QSizeF_scale(QSizeF* self, double w, double h, int mode) {
	self->scale(static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSizeF_scale2(QSizeF* self, struct miqt_qsizef s, int mode) {
	self->scale(miqt_from_cabi<QSizeF>(s), static_cast<Qt::AspectRatioMode>(mode));
}

struct miqt_qsizef QSizeF_scaled(struct miqt_qsizef self_cabi, double w, double h, int mode) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	return miqt_to_cabi<struct miqt_qsizef>(self->scaled(static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(mode)));
}

struct miqt_qsizef QSizeF_scaled2(struct miqt_qsizef self_cabi, struct miqt_qsizef s, int mode) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	return miqt_to_cabi<struct miqt_qsizef>(self->scaled(miqt_from_cabi<QSizeF>(s), static_cast<Qt::AspectRatioMode>(mode)));
}

struct miqt_qsizef QSizeF_expandedTo(struct miqt_qsizef self_cabi, struct miqt_qsizef param1) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	return miqt_to_cabi<struct miqt_qsizef>(self->expandedTo(miqt_from_cabi<QSizeF>(param1)));
}

struct miqt_qsizef QSizeF_boundedTo(struct miqt_qsizef self_cabi, struct miqt_qsizef param1) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	return miqt_to_cabi<struct miqt_qsizef>(self->boundedTo(miqt_from_cabi<QSizeF>(param1)));
}

struct miqt_qsizef QSizeF_grownBy(struct miqt_qsizef self_cabi, struct miqt_qmarginsf m) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	return miqt_to_cabi<struct miqt_qsizef>(self->grownBy(miqt_from_cabi<QMarginsF>(m)));
}

struct miqt_qsizef QSizeF_shrunkBy(struct miqt_qsizef self_cabi, struct miqt_qmarginsf m) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	return miqt_to_cabi<struct miqt_qsizef>(self->shrunkBy(miqt_from_cabi<QMarginsF>(m)));
}

QSizeF* QSizeF_operatorPlusAssign(QSizeF* self, struct miqt_qsizef param1) {
	QSizeF& _ret = self->operator+=(miqt_from_cabi<QSizeF>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSizeF_operatorMinusAssign(QSizeF* self, struct miqt_qsizef param1) {
	QSizeF& _ret = self->operator-=(miqt_from_cabi<QSizeF>(param1));
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

struct miqt_qsize QSizeF_toSize(struct miqt_qsizef self_cabi) {
	const QSizeF self_val = miqt_from_cabi<QSizeF>(self_cabi);
	const QSizeF* self = &self_val;
	return miqt_to_cabi<struct miqt_qsize>(self->toSize());
}

void QSizeF_operatorAssign(QSizeF* self, struct miqt_qsizef param1) {
	self->operator=(miqt_from_cabi<QSizeF>(param1));
}

