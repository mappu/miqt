#ifndef GEN_QKEYSEQUENCE_H
#define GEN_QKEYSEQUENCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QKeyCombination;
class QKeySequence;
#else
typedef struct QKeyCombination QKeyCombination;
typedef struct QKeySequence QKeySequence;
#endif

QKeySequence* QKeySequence_new();
QKeySequence* QKeySequence_new2(struct miqt_string key);
QKeySequence* QKeySequence_new3(int k1);
QKeySequence* QKeySequence_new4(QKeyCombination* k1);
QKeySequence* QKeySequence_new5(QKeySequence* ks);
QKeySequence* QKeySequence_new6(int key);
QKeySequence* QKeySequence_new7(struct miqt_string key, int format);
QKeySequence* QKeySequence_new8(int k1, int k2);
QKeySequence* QKeySequence_new9(int k1, int k2, int k3);
QKeySequence* QKeySequence_new10(int k1, int k2, int k3, int k4);
QKeySequence* QKeySequence_new11(QKeyCombination* k1, QKeyCombination* k2);
QKeySequence* QKeySequence_new12(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3);
QKeySequence* QKeySequence_new13(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3, QKeyCombination* k4);
int QKeySequence_Count(const QKeySequence* self);
bool QKeySequence_IsEmpty(const QKeySequence* self);
struct miqt_string QKeySequence_ToString(const QKeySequence* self);
QKeySequence* QKeySequence_FromString(struct miqt_string str);
struct miqt_array QKeySequence_ListFromString(struct miqt_string str);
struct miqt_string QKeySequence_ListToString(struct miqt_array /* of QKeySequence* */ list);
int QKeySequence_Matches(const QKeySequence* self, QKeySequence* seq);
QKeySequence* QKeySequence_Mnemonic(struct miqt_string text);
struct miqt_array QKeySequence_KeyBindings(int key);
QKeyCombination* QKeySequence_OperatorSubscript(const QKeySequence* self, unsigned int i);
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
struct miqt_array QKeySequence_ListFromString2(struct miqt_string str, int format);
struct miqt_string QKeySequence_ListToString2(struct miqt_array /* of QKeySequence* */ list, int format);
void QKeySequence_Delete(QKeySequence* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
