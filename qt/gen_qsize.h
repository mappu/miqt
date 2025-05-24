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

QSize* QSize_new();
QSize* QSize_new2(int w, int h);
QSize* QSize_new3(QSize* param1);
bool QSize_isNull(const QSize* self);
bool QSize_isEmpty(const QSize* self);
bool QSize_isValid(const QSize* self);
int QSize_width(const QSize* self);
int QSize_height(const QSize* self);
void QSize_setWidth(QSize* self, int w);
void QSize_setHeight(QSize* self, int h);
void QSize_transpose(QSize* self);
QSize* QSize_transposed(const QSize* self);
void QSize_scale(QSize* self, int w, int h, int mode);
void QSize_scale2(QSize* self, QSize* s, int mode);
QSize* QSize_scaled(const QSize* self, int w, int h, int mode);
QSize* QSize_scaled2(const QSize* self, QSize* s, int mode);
QSize* QSize_expandedTo(const QSize* self, QSize* param1);
QSize* QSize_boundedTo(const QSize* self, QSize* param1);
QSize* QSize_grownBy(const QSize* self, QMargins* m);
QSize* QSize_shrunkBy(const QSize* self, QMargins* m);
QSize* QSize_operatorPlusAssign(QSize* self, QSize* param1);
QSize* QSize_operatorMinusAssign(QSize* self, QSize* param1);
QSize* QSize_operatorMultiplyAssign(QSize* self, double c);
QSize* QSize_operatorDivideAssign(QSize* self, double c);
void QSize_operatorAssign(QSize* self, QSize* param1);

void QSize_delete(QSize* self);

QSizeF* QSizeF_new();
QSizeF* QSizeF_new2(QSize* sz);
QSizeF* QSizeF_new3(double w, double h);
QSizeF* QSizeF_new4(QSizeF* param1);
bool QSizeF_isNull(const QSizeF* self);
bool QSizeF_isEmpty(const QSizeF* self);
bool QSizeF_isValid(const QSizeF* self);
double QSizeF_width(const QSizeF* self);
double QSizeF_height(const QSizeF* self);
void QSizeF_setWidth(QSizeF* self, double w);
void QSizeF_setHeight(QSizeF* self, double h);
void QSizeF_transpose(QSizeF* self);
QSizeF* QSizeF_transposed(const QSizeF* self);
void QSizeF_scale(QSizeF* self, double w, double h, int mode);
void QSizeF_scale2(QSizeF* self, QSizeF* s, int mode);
QSizeF* QSizeF_scaled(const QSizeF* self, double w, double h, int mode);
QSizeF* QSizeF_scaled2(const QSizeF* self, QSizeF* s, int mode);
QSizeF* QSizeF_expandedTo(const QSizeF* self, QSizeF* param1);
QSizeF* QSizeF_boundedTo(const QSizeF* self, QSizeF* param1);
QSizeF* QSizeF_grownBy(const QSizeF* self, QMarginsF* m);
QSizeF* QSizeF_shrunkBy(const QSizeF* self, QMarginsF* m);
QSizeF* QSizeF_operatorPlusAssign(QSizeF* self, QSizeF* param1);
QSizeF* QSizeF_operatorMinusAssign(QSizeF* self, QSizeF* param1);
QSizeF* QSizeF_operatorMultiplyAssign(QSizeF* self, double c);
QSizeF* QSizeF_operatorDivideAssign(QSizeF* self, double c);
QSize* QSizeF_toSize(const QSizeF* self);
void QSizeF_operatorAssign(QSizeF* self, QSizeF* param1);

void QSizeF_delete(QSizeF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
