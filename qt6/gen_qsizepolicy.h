#pragma once
#ifndef MIQT_QT6_GEN_QSIZEPOLICY_H
#define MIQT_QT6_GEN_QSIZEPOLICY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSizePolicy;
class QVariant;
#else
typedef struct QSizePolicy QSizePolicy;
typedef struct QVariant QVariant;
#endif

QSizePolicy* QSizePolicy_new();
QSizePolicy* QSizePolicy_new2(int horizontal, int vertical);
QSizePolicy* QSizePolicy_new3(QSizePolicy* param1);
QSizePolicy* QSizePolicy_new4(int horizontal, int vertical, int typeVal);
int QSizePolicy_HorizontalPolicy(const QSizePolicy* self);
int QSizePolicy_VerticalPolicy(const QSizePolicy* self);
int QSizePolicy_ControlType(const QSizePolicy* self);
void QSizePolicy_SetHorizontalPolicy(QSizePolicy* self, int d);
void QSizePolicy_SetVerticalPolicy(QSizePolicy* self, int d);
void QSizePolicy_SetControlType(QSizePolicy* self, int typeVal);
int QSizePolicy_ExpandingDirections(const QSizePolicy* self);
void QSizePolicy_SetHeightForWidth(QSizePolicy* self, bool b);
bool QSizePolicy_HasHeightForWidth(const QSizePolicy* self);
void QSizePolicy_SetWidthForHeight(QSizePolicy* self, bool b);
bool QSizePolicy_HasWidthForHeight(const QSizePolicy* self);
bool QSizePolicy_OperatorEqual(const QSizePolicy* self, QSizePolicy* s);
bool QSizePolicy_OperatorNotEqual(const QSizePolicy* self, QSizePolicy* s);
QVariant* QSizePolicy_ToQVariant(const QSizePolicy* self);
int QSizePolicy_HorizontalStretch(const QSizePolicy* self);
int QSizePolicy_VerticalStretch(const QSizePolicy* self);
void QSizePolicy_SetHorizontalStretch(QSizePolicy* self, int stretchFactor);
void QSizePolicy_SetVerticalStretch(QSizePolicy* self, int stretchFactor);
bool QSizePolicy_RetainSizeWhenHidden(const QSizePolicy* self);
void QSizePolicy_SetRetainSizeWhenHidden(QSizePolicy* self, bool retainSize);
void QSizePolicy_Transpose(QSizePolicy* self);
QSizePolicy* QSizePolicy_Transposed(const QSizePolicy* self);
void QSizePolicy_Delete(QSizePolicy* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
