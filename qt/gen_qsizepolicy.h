#ifndef GEN_QSIZEPOLICY_H
#define GEN_QSIZEPOLICY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSizePolicy;
#else
typedef struct QSizePolicy QSizePolicy;
#endif

QSizePolicy* QSizePolicy_new();
QSizePolicy* QSizePolicy_new2(uintptr_t horizontal, uintptr_t vertical);
QSizePolicy* QSizePolicy_new3(QSizePolicy* param1);
QSizePolicy* QSizePolicy_new4(uintptr_t horizontal, uintptr_t vertical, uintptr_t typeVal);
uintptr_t QSizePolicy_HorizontalPolicy(const QSizePolicy* self);
uintptr_t QSizePolicy_VerticalPolicy(const QSizePolicy* self);
uintptr_t QSizePolicy_ControlType(const QSizePolicy* self);
void QSizePolicy_SetHorizontalPolicy(QSizePolicy* self, uintptr_t d);
void QSizePolicy_SetVerticalPolicy(QSizePolicy* self, uintptr_t d);
void QSizePolicy_SetControlType(QSizePolicy* self, uintptr_t typeVal);
int QSizePolicy_ExpandingDirections(const QSizePolicy* self);
void QSizePolicy_SetHeightForWidth(QSizePolicy* self, bool b);
bool QSizePolicy_HasHeightForWidth(const QSizePolicy* self);
void QSizePolicy_SetWidthForHeight(QSizePolicy* self, bool b);
bool QSizePolicy_HasWidthForHeight(const QSizePolicy* self);
bool QSizePolicy_OperatorEqual(const QSizePolicy* self, QSizePolicy* s);
bool QSizePolicy_OperatorNotEqual(const QSizePolicy* self, QSizePolicy* s);
int QSizePolicy_HorizontalStretch(const QSizePolicy* self);
int QSizePolicy_VerticalStretch(const QSizePolicy* self);
void QSizePolicy_SetHorizontalStretch(QSizePolicy* self, int stretchFactor);
void QSizePolicy_SetVerticalStretch(QSizePolicy* self, int stretchFactor);
bool QSizePolicy_RetainSizeWhenHidden(const QSizePolicy* self);
void QSizePolicy_SetRetainSizeWhenHidden(QSizePolicy* self, bool retainSize);
void QSizePolicy_Transpose(QSizePolicy* self);
QSizePolicy* QSizePolicy_Transposed(const QSizePolicy* self);
void QSizePolicy_Delete(QSizePolicy* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
