#ifndef GEN_QCOLLATOR_H
#define GEN_QCOLLATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
int QCollatorSortKey_Compare(QCollatorSortKey* self, QCollatorSortKey* key);
void QCollatorSortKey_Delete(QCollatorSortKey* self);

QCollator* QCollator_new();
QCollator* QCollator_new2(QLocale* locale);
QCollator* QCollator_new3(QCollator* param1);
void QCollator_OperatorAssign(QCollator* self, QCollator* param1);
void QCollator_Swap(QCollator* self, QCollator* other);
void QCollator_SetLocale(QCollator* self, QLocale* locale);
QLocale* QCollator_Locale(QCollator* self);
uintptr_t QCollator_CaseSensitivity(QCollator* self);
void QCollator_SetCaseSensitivity(QCollator* self, uintptr_t cs);
void QCollator_SetNumericMode(QCollator* self, bool on);
bool QCollator_NumericMode(QCollator* self);
void QCollator_SetIgnorePunctuation(QCollator* self, bool on);
bool QCollator_IgnorePunctuation(QCollator* self);
int QCollator_Compare(QCollator* self, const char* s1, size_t s1_Strlen, const char* s2, size_t s2_Strlen);
int QCollator_Compare3(QCollator* self, QChar* s1, int len1, QChar* s2, int len2);
bool QCollator_OperatorCall(QCollator* self, const char* s1, size_t s1_Strlen, const char* s2, size_t s2_Strlen);
QCollatorSortKey* QCollator_SortKey(QCollator* self, const char* stringVal, size_t stringVal_Strlen);
void QCollator_Delete(QCollator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
