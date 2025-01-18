#pragma once
#ifndef MIQT_QT_GEN_QMARGINS_H
#define MIQT_QT_GEN_QMARGINS_H

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
bool QMargins_IsNull(const QMargins* self);
int QMargins_Left(const QMargins* self);
int QMargins_Top(const QMargins* self);
int QMargins_Right(const QMargins* self);
int QMargins_Bottom(const QMargins* self);
void QMargins_SetLeft(QMargins* self, int left);
void QMargins_SetTop(QMargins* self, int top);
void QMargins_SetRight(QMargins* self, int right);
void QMargins_SetBottom(QMargins* self, int bottom);
QMargins* QMargins_OperatorPlusAssign(QMargins* self, QMargins* margins);
QMargins* QMargins_OperatorMinusAssign(QMargins* self, QMargins* margins);
QMargins* QMargins_OperatorPlusAssignWithInt(QMargins* self, int param1);
QMargins* QMargins_OperatorMinusAssignWithInt(QMargins* self, int param1);
QMargins* QMargins_OperatorMultiplyAssign(QMargins* self, int param1);
QMargins* QMargins_OperatorDivideAssign(QMargins* self, int param1);
QMargins* QMargins_OperatorMultiplyAssignWithQreal(QMargins* self, double param1);
QMargins* QMargins_OperatorDivideAssignWithQreal(QMargins* self, double param1);
void QMargins_Delete(QMargins* self);

QMarginsF* QMarginsF_new();
QMarginsF* QMarginsF_new2(double left, double top, double right, double bottom);
QMarginsF* QMarginsF_new3(QMargins* margins);
QMarginsF* QMarginsF_new4(QMarginsF* param1);
bool QMarginsF_IsNull(const QMarginsF* self);
double QMarginsF_Left(const QMarginsF* self);
double QMarginsF_Top(const QMarginsF* self);
double QMarginsF_Right(const QMarginsF* self);
double QMarginsF_Bottom(const QMarginsF* self);
void QMarginsF_SetLeft(QMarginsF* self, double left);
void QMarginsF_SetTop(QMarginsF* self, double top);
void QMarginsF_SetRight(QMarginsF* self, double right);
void QMarginsF_SetBottom(QMarginsF* self, double bottom);
QMarginsF* QMarginsF_OperatorPlusAssign(QMarginsF* self, QMarginsF* margins);
QMarginsF* QMarginsF_OperatorMinusAssign(QMarginsF* self, QMarginsF* margins);
QMarginsF* QMarginsF_OperatorPlusAssignWithAddend(QMarginsF* self, double addend);
QMarginsF* QMarginsF_OperatorMinusAssignWithSubtrahend(QMarginsF* self, double subtrahend);
QMarginsF* QMarginsF_OperatorMultiplyAssign(QMarginsF* self, double factor);
QMarginsF* QMarginsF_OperatorDivideAssign(QMarginsF* self, double divisor);
QMargins* QMarginsF_ToMargins(const QMarginsF* self);
void QMarginsF_Delete(QMarginsF* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
