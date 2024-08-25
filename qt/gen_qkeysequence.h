#ifndef GEN_QKEYSEQUENCE_H
#define GEN_QKEYSEQUENCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QKeySequence;
#else
typedef struct QKeySequence QKeySequence;
#endif

QKeySequence* QKeySequence_new();
QKeySequence* QKeySequence_new2(int k1);
QKeySequence* QKeySequence_new3(QKeySequence* ks);
QKeySequence* QKeySequence_new4(int k1, int k2);
QKeySequence* QKeySequence_new5(int k1, int k2, int k3);
QKeySequence* QKeySequence_new6(int k1, int k2, int k3, int k4);
int QKeySequence_Count(QKeySequence* self);
bool QKeySequence_IsEmpty(QKeySequence* self);
QKeySequence* QKeySequence_Mnemonic(const char* text, size_t text_Strlen);
int QKeySequence_OperatorSubscript(QKeySequence* self, unsigned int i);
void QKeySequence_OperatorAssign(QKeySequence* self, QKeySequence* other);
void QKeySequence_Swap(QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorEqual(QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorNotEqual(QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorLesser(QKeySequence* self, QKeySequence* ks);
bool QKeySequence_OperatorGreater(QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorLesserOrEqual(QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorGreaterOrEqual(QKeySequence* self, QKeySequence* other);
bool QKeySequence_IsDetached(QKeySequence* self);
void QKeySequence_Delete(QKeySequence* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
