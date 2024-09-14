#ifndef GEN_QCOLLATOR_H
#define GEN_QCOLLATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QCollator;
class QCollatorSortKey;
class QLocale;
#else
typedef struct QChar QChar;
typedef struct QCollator QCollator;
typedef struct QCollatorSortKey QCollatorSortKey;
typedef struct QLocale QLocale;
#endif

QCollatorSortKey* QCollatorSortKey_new(QCollatorSortKey* other);
void QCollatorSortKey_OperatorAssign(QCollatorSortKey* self, QCollatorSortKey* other);
void QCollatorSortKey_Swap(QCollatorSortKey* self, QCollatorSortKey* other);
int QCollatorSortKey_Compare(const QCollatorSortKey* self, QCollatorSortKey* key);
void QCollatorSortKey_Delete(QCollatorSortKey* self);

QCollator* QCollator_new();
QCollator* QCollator_new2(QLocale* locale);
QCollator* QCollator_new3(QCollator* param1);
void QCollator_OperatorAssign(QCollator* self, QCollator* param1);
void QCollator_Swap(QCollator* self, QCollator* other);
void QCollator_SetLocale(QCollator* self, QLocale* locale);
QLocale* QCollator_Locale(const QCollator* self);
uintptr_t QCollator_CaseSensitivity(const QCollator* self);
void QCollator_SetCaseSensitivity(QCollator* self, uintptr_t cs);
void QCollator_SetNumericMode(QCollator* self, bool on);
bool QCollator_NumericMode(const QCollator* self);
void QCollator_SetIgnorePunctuation(QCollator* self, bool on);
bool QCollator_IgnorePunctuation(const QCollator* self);
int QCollator_Compare(const QCollator* self, struct miqt_string* s1, struct miqt_string* s2);
int QCollator_Compare3(const QCollator* self, QChar* s1, int len1, QChar* s2, int len2);
bool QCollator_OperatorCall(const QCollator* self, struct miqt_string* s1, struct miqt_string* s2);
QCollatorSortKey* QCollator_SortKey(const QCollator* self, struct miqt_string* stringVal);
void QCollator_Delete(QCollator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
