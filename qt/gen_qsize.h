#pragma once
#ifndef MIQT_QT_GEN_QSIZE_H
#define MIQT_QT_GEN_QSIZE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMargins;
class QMarginsF;
class QSize;
class QSizeF;
#else
typedef struct QMargins QMargins;
typedef struct QMarginsF QMarginsF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
#endif

struct miqt_qsize QSize_new();
struct miqt_qsize QSize_new2(int w, int h);
struct miqt_qsize QSize_new3(struct miqt_qsize param1);
bool QSize_isNull(struct miqt_qsize self_cabi);
bool QSize_isEmpty(struct miqt_qsize self_cabi);
bool QSize_isValid(struct miqt_qsize self_cabi);
int QSize_width(struct miqt_qsize self_cabi);
int QSize_height(struct miqt_qsize self_cabi);
void QSize_setWidth(QSize* self, int w);
void QSize_setHeight(QSize* self, int h);
void QSize_transpose(QSize* self);
struct miqt_qsize QSize_transposed(struct miqt_qsize self_cabi);
void QSize_scale(QSize* self, int w, int h, int mode);
void QSize_scale2(QSize* self, struct miqt_qsize s, int mode);
struct miqt_qsize QSize_scaled(struct miqt_qsize self_cabi, int w, int h, int mode);
struct miqt_qsize QSize_scaled2(struct miqt_qsize self_cabi, struct miqt_qsize s, int mode);
struct miqt_qsize QSize_expandedTo(struct miqt_qsize self_cabi, struct miqt_qsize param1);
struct miqt_qsize QSize_boundedTo(struct miqt_qsize self_cabi, struct miqt_qsize param1);
struct miqt_qsize QSize_grownBy(struct miqt_qsize self_cabi, struct miqt_qmargins m);
struct miqt_qsize QSize_shrunkBy(struct miqt_qsize self_cabi, struct miqt_qmargins m);
QSize* QSize_operatorPlusAssign(QSize* self, struct miqt_qsize param1);
QSize* QSize_operatorMinusAssign(QSize* self, struct miqt_qsize param1);
QSize* QSize_operatorMultiplyAssign(QSize* self, double c);
QSize* QSize_operatorDivideAssign(QSize* self, double c);
void QSize_operatorAssign(QSize* self, struct miqt_qsize param1);


struct miqt_qsizef QSizeF_new();
struct miqt_qsizef QSizeF_new2(struct miqt_qsize sz);
struct miqt_qsizef QSizeF_new3(double w, double h);
struct miqt_qsizef QSizeF_new4(struct miqt_qsizef param1);
bool QSizeF_isNull(struct miqt_qsizef self_cabi);
bool QSizeF_isEmpty(struct miqt_qsizef self_cabi);
bool QSizeF_isValid(struct miqt_qsizef self_cabi);
double QSizeF_width(struct miqt_qsizef self_cabi);
double QSizeF_height(struct miqt_qsizef self_cabi);
void QSizeF_setWidth(QSizeF* self, double w);
void QSizeF_setHeight(QSizeF* self, double h);
void QSizeF_transpose(QSizeF* self);
struct miqt_qsizef QSizeF_transposed(struct miqt_qsizef self_cabi);
void QSizeF_scale(QSizeF* self, double w, double h, int mode);
void QSizeF_scale2(QSizeF* self, struct miqt_qsizef s, int mode);
struct miqt_qsizef QSizeF_scaled(struct miqt_qsizef self_cabi, double w, double h, int mode);
struct miqt_qsizef QSizeF_scaled2(struct miqt_qsizef self_cabi, struct miqt_qsizef s, int mode);
struct miqt_qsizef QSizeF_expandedTo(struct miqt_qsizef self_cabi, struct miqt_qsizef param1);
struct miqt_qsizef QSizeF_boundedTo(struct miqt_qsizef self_cabi, struct miqt_qsizef param1);
struct miqt_qsizef QSizeF_grownBy(struct miqt_qsizef self_cabi, struct miqt_qmarginsf m);
struct miqt_qsizef QSizeF_shrunkBy(struct miqt_qsizef self_cabi, struct miqt_qmarginsf m);
QSizeF* QSizeF_operatorPlusAssign(QSizeF* self, struct miqt_qsizef param1);
QSizeF* QSizeF_operatorMinusAssign(QSizeF* self, struct miqt_qsizef param1);
QSizeF* QSizeF_operatorMultiplyAssign(QSizeF* self, double c);
QSizeF* QSizeF_operatorDivideAssign(QSizeF* self, double c);
struct miqt_qsize QSizeF_toSize(struct miqt_qsizef self_cabi);
void QSizeF_operatorAssign(QSizeF* self, struct miqt_qsizef param1);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
