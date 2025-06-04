#pragma once
#ifndef MIQT_QT6_GEN_QCOLLATOR_H
#define MIQT_QT6_GEN_QCOLLATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
void QCollatorSortKey_operatorAssign(QCollatorSortKey* self, QCollatorSortKey* other);
void QCollatorSortKey_swap(QCollatorSortKey* self, QCollatorSortKey* other);
int QCollatorSortKey_compare(const QCollatorSortKey* self, QCollatorSortKey* key);

void QCollatorSortKey_delete(QCollatorSortKey* self);

QCollator* QCollator_new();
QCollator* QCollator_new2(QLocale* locale);
QCollator* QCollator_new3(QCollator* param1);
void QCollator_operatorAssign(QCollator* self, QCollator* param1);
void QCollator_swap(QCollator* self, QCollator* other);
void QCollator_setLocale(QCollator* self, QLocale* locale);
QLocale* QCollator_locale(const QCollator* self);
int QCollator_caseSensitivity(const QCollator* self);
void QCollator_setCaseSensitivity(QCollator* self, int cs);
void QCollator_setNumericMode(QCollator* self, bool on);
bool QCollator_numericMode(const QCollator* self);
void QCollator_setIgnorePunctuation(QCollator* self, bool on);
bool QCollator_ignorePunctuation(const QCollator* self);
int QCollator_compare(const QCollator* self, struct miqt_string s1, struct miqt_string s2);
int QCollator_compare2(const QCollator* self, QChar* s1, ptrdiff_t len1, QChar* s2, ptrdiff_t len2);
bool QCollator_operatorCall(const QCollator* self, struct miqt_string s1, struct miqt_string s2);
QCollatorSortKey* QCollator_sortKey(const QCollator* self, struct miqt_string string);

void QCollator_delete(QCollator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
