#pragma once
#ifndef MIQT_QT_GEN_QKEYSEQUENCE_H
#define MIQT_QT_GEN_QKEYSEQUENCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QKeySequence;
class QVariant;
#else
typedef struct QKeySequence QKeySequence;
typedef struct QVariant QVariant;
#endif

QKeySequence* QKeySequence_new();
QKeySequence* QKeySequence_new2(struct miqt_string key);
QKeySequence* QKeySequence_new3(int k1);
QKeySequence* QKeySequence_new4(QKeySequence* ks);
QKeySequence* QKeySequence_new5(int key);
QKeySequence* QKeySequence_new6(struct miqt_string key, int format);
QKeySequence* QKeySequence_new7(int k1, int k2);
QKeySequence* QKeySequence_new8(int k1, int k2, int k3);
QKeySequence* QKeySequence_new9(int k1, int k2, int k3, int k4);
int QKeySequence_Count(const QKeySequence* self);
bool QKeySequence_IsEmpty(const QKeySequence* self);
struct miqt_string QKeySequence_ToString(const QKeySequence* self);
QKeySequence* QKeySequence_FromString(struct miqt_string str);
struct miqt_array /* of QKeySequence* */  QKeySequence_ListFromString(struct miqt_string str);
struct miqt_string QKeySequence_ListToString(struct miqt_array /* of QKeySequence* */  list);
int QKeySequence_Matches(const QKeySequence* self, QKeySequence* seq);
QKeySequence* QKeySequence_Mnemonic(struct miqt_string text);
struct miqt_array /* of QKeySequence* */  QKeySequence_KeyBindings(int key);
QVariant* QKeySequence_ToQVariant(const QKeySequence* self);
int QKeySequence_OperatorSubscript(const QKeySequence* self, unsigned int i);
void QKeySequence_OperatorAssign(QKeySequence* self, QKeySequence* other);
void QKeySequence_Swap(QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorNotEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorLesser(const QKeySequence* self, QKeySequence* ks);
bool QKeySequence_OperatorGreater(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorLesserOrEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorGreaterOrEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_IsDetached(const QKeySequence* self);
struct miqt_string QKeySequence_ToString1(const QKeySequence* self, int format);
QKeySequence* QKeySequence_FromString2(struct miqt_string str, int format);
struct miqt_array /* of QKeySequence* */  QKeySequence_ListFromString2(struct miqt_string str, int format);
struct miqt_string QKeySequence_ListToString2(struct miqt_array /* of QKeySequence* */  list, int format);
void QKeySequence_Delete(QKeySequence* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
