#ifndef GEN_QSIZEPOLICY_H
#define GEN_QSIZEPOLICY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSizePolicy;
#else
typedef struct QSizePolicy QSizePolicy;
#endif

QSizePolicy* QSizePolicy_new();
QSizePolicy* QSizePolicy_new2(QSizePolicy* param1);
void QSizePolicy_SetHeightForWidth(QSizePolicy* self, bool b);
bool QSizePolicy_HasHeightForWidth(QSizePolicy* self);
void QSizePolicy_SetWidthForHeight(QSizePolicy* self, bool b);
bool QSizePolicy_HasWidthForHeight(QSizePolicy* self);
bool QSizePolicy_OperatorEqual(QSizePolicy* self, QSizePolicy* s);
bool QSizePolicy_OperatorNotEqual(QSizePolicy* self, QSizePolicy* s);
int QSizePolicy_HorizontalStretch(QSizePolicy* self);
int QSizePolicy_VerticalStretch(QSizePolicy* self);
void QSizePolicy_SetHorizontalStretch(QSizePolicy* self, int stretchFactor);
void QSizePolicy_SetVerticalStretch(QSizePolicy* self, int stretchFactor);
bool QSizePolicy_RetainSizeWhenHidden(QSizePolicy* self);
void QSizePolicy_SetRetainSizeWhenHidden(QSizePolicy* self, bool retainSize);
void QSizePolicy_Transpose(QSizePolicy* self);
QSizePolicy* QSizePolicy_Transposed(QSizePolicy* self);
void QSizePolicy_Delete(QSizePolicy* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
