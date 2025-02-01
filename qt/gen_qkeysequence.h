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
int QKeySequence_count(const QKeySequence* self);
bool QKeySequence_isEmpty(const QKeySequence* self);
struct miqt_string QKeySequence_toString(const QKeySequence* self);
QKeySequence* QKeySequence_fromString(struct miqt_string str);
struct miqt_array /* of QKeySequence* */  QKeySequence_listFromString(struct miqt_string str);
struct miqt_string QKeySequence_listToString(struct miqt_array /* of QKeySequence* */  list);
int QKeySequence_matches(const QKeySequence* self, QKeySequence* seq);
QKeySequence* QKeySequence_mnemonic(struct miqt_string text);
struct miqt_array /* of QKeySequence* */  QKeySequence_keyBindings(int key);
QVariant* QKeySequence_ToQVariant(const QKeySequence* self);
int QKeySequence_operatorSubscript(const QKeySequence* self, unsigned int i);
void QKeySequence_operatorAssign(QKeySequence* self, QKeySequence* other);
void QKeySequence_swap(QKeySequence* self, QKeySequence* other);
bool QKeySequence_operatorEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_operatorNotEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_operatorLesser(const QKeySequence* self, QKeySequence* ks);
bool QKeySequence_operatorGreater(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_operatorLesserOrEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_operatorGreaterOrEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_isDetached(const QKeySequence* self);
struct miqt_string QKeySequence_toString1(const QKeySequence* self, int format);
QKeySequence* QKeySequence_fromString2(struct miqt_string str, int format);
struct miqt_array /* of QKeySequence* */  QKeySequence_listFromString2(struct miqt_string str, int format);
struct miqt_string QKeySequence_listToString2(struct miqt_array /* of QKeySequence* */  list, int format);
void QKeySequence_delete(QKeySequence* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
