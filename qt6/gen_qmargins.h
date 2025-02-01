#pragma once
#ifndef MIQT_QT6_GEN_QMARGINS_H
#define MIQT_QT6_GEN_QMARGINS_H

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
#else
typedef struct QMargins QMargins;
typedef struct QMarginsF QMarginsF;
#endif

QMargins* QMargins_new();
QMargins* QMargins_new2(int left, int top, int right, int bottom);
QMargins* QMargins_new3(QMargins* param1);
bool QMargins_isNull(const QMargins* self);
int QMargins_left(const QMargins* self);
int QMargins_top(const QMargins* self);
int QMargins_right(const QMargins* self);
int QMargins_bottom(const QMargins* self);
void QMargins_setLeft(QMargins* self, int left);
void QMargins_setTop(QMargins* self, int top);
void QMargins_setRight(QMargins* self, int right);
void QMargins_setBottom(QMargins* self, int bottom);
QMargins* QMargins_operatorPlusAssign(QMargins* self, QMargins* margins);
QMargins* QMargins_operatorMinusAssign(QMargins* self, QMargins* margins);
QMargins* QMargins_operatorPlusAssignWithInt(QMargins* self, int param1);
QMargins* QMargins_operatorMinusAssignWithInt(QMargins* self, int param1);
QMargins* QMargins_operatorMultiplyAssign(QMargins* self, int param1);
QMargins* QMargins_operatorDivideAssign(QMargins* self, int param1);
QMargins* QMargins_operatorMultiplyAssignWithQreal(QMargins* self, double param1);
QMargins* QMargins_operatorDivideAssignWithQreal(QMargins* self, double param1);
QMarginsF* QMargins_toMarginsF(const QMargins* self);
void QMargins_delete(QMargins* self);

QMarginsF* QMarginsF_new();
QMarginsF* QMarginsF_new2(double left, double top, double right, double bottom);
QMarginsF* QMarginsF_new3(QMargins* margins);
QMarginsF* QMarginsF_new4(QMarginsF* param1);
bool QMarginsF_isNull(const QMarginsF* self);
double QMarginsF_left(const QMarginsF* self);
double QMarginsF_top(const QMarginsF* self);
double QMarginsF_right(const QMarginsF* self);
double QMarginsF_bottom(const QMarginsF* self);
void QMarginsF_setLeft(QMarginsF* self, double aleft);
void QMarginsF_setTop(QMarginsF* self, double atop);
void QMarginsF_setRight(QMarginsF* self, double aright);
void QMarginsF_setBottom(QMarginsF* self, double abottom);
QMarginsF* QMarginsF_operatorPlusAssign(QMarginsF* self, QMarginsF* margins);
QMarginsF* QMarginsF_operatorMinusAssign(QMarginsF* self, QMarginsF* margins);
QMarginsF* QMarginsF_operatorPlusAssignWithAddend(QMarginsF* self, double addend);
QMarginsF* QMarginsF_operatorMinusAssignWithSubtrahend(QMarginsF* self, double subtrahend);
QMarginsF* QMarginsF_operatorMultiplyAssign(QMarginsF* self, double factor);
QMarginsF* QMarginsF_operatorDivideAssign(QMarginsF* self, double divisor);
QMargins* QMarginsF_toMargins(const QMarginsF* self);
void QMarginsF_delete(QMarginsF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
