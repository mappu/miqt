#pragma once
#ifndef MIQT_QT_GEN_QSIZEPOLICY_H
#define MIQT_QT_GEN_QSIZEPOLICY_H

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
QSizePolicy* QSizePolicy_new4(int horizontal, int vertical, int type);
int QSizePolicy_horizontalPolicy(const QSizePolicy* self);
int QSizePolicy_verticalPolicy(const QSizePolicy* self);
int QSizePolicy_controlType(const QSizePolicy* self);
void QSizePolicy_setHorizontalPolicy(QSizePolicy* self, int d);
void QSizePolicy_setVerticalPolicy(QSizePolicy* self, int d);
void QSizePolicy_setControlType(QSizePolicy* self, int type);
int QSizePolicy_expandingDirections(const QSizePolicy* self);
void QSizePolicy_setHeightForWidth(QSizePolicy* self, bool b);
bool QSizePolicy_hasHeightForWidth(const QSizePolicy* self);
void QSizePolicy_setWidthForHeight(QSizePolicy* self, bool b);
bool QSizePolicy_hasWidthForHeight(const QSizePolicy* self);
bool QSizePolicy_operatorEqual(const QSizePolicy* self, QSizePolicy* s);
bool QSizePolicy_operatorNotEqual(const QSizePolicy* self, QSizePolicy* s);
QVariant* QSizePolicy_ToQVariant(const QSizePolicy* self);
int QSizePolicy_horizontalStretch(const QSizePolicy* self);
int QSizePolicy_verticalStretch(const QSizePolicy* self);
void QSizePolicy_setHorizontalStretch(QSizePolicy* self, int stretchFactor);
void QSizePolicy_setVerticalStretch(QSizePolicy* self, int stretchFactor);
bool QSizePolicy_retainSizeWhenHidden(const QSizePolicy* self);
void QSizePolicy_setRetainSizeWhenHidden(QSizePolicy* self, bool retainSize);
void QSizePolicy_transpose(QSizePolicy* self);
QSizePolicy* QSizePolicy_transposed(const QSizePolicy* self);

void QSizePolicy_delete(QSizePolicy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
