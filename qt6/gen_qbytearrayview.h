#pragma once
#ifndef MIQT_QT6_GEN_QBYTEARRAYVIEW_H
#define MIQT_QT6_GEN_QBYTEARRAYVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArrayView;
#else
typedef struct QByteArrayView QByteArrayView;
#endif

QByteArrayView* QByteArrayView_new();
QByteArrayView* QByteArrayView_new2(QByteArrayView* param1);
struct miqt_string QByteArrayView_toByteArray(const QByteArrayView* self);
ptrdiff_t QByteArrayView_size(const QByteArrayView* self);
const char* QByteArrayView_data(const QByteArrayView* self);
const char* QByteArrayView_constData(const QByteArrayView* self);
char QByteArrayView_operatorSubscript(const QByteArrayView* self, ptrdiff_t n);
char QByteArrayView_at(const QByteArrayView* self, ptrdiff_t n);
QByteArrayView* QByteArrayView_first(const QByteArrayView* self, ptrdiff_t n);
QByteArrayView* QByteArrayView_last(const QByteArrayView* self, ptrdiff_t n);
QByteArrayView* QByteArrayView_sliced(const QByteArrayView* self, ptrdiff_t pos);
QByteArrayView* QByteArrayView_sliced2(const QByteArrayView* self, ptrdiff_t pos, ptrdiff_t n);
QByteArrayView* QByteArrayView_chopped(const QByteArrayView* self, ptrdiff_t len);
void QByteArrayView_truncate(QByteArrayView* self, ptrdiff_t n);
void QByteArrayView_chop(QByteArrayView* self, ptrdiff_t n);
QByteArrayView* QByteArrayView_trimmed(const QByteArrayView* self);
int16_t QByteArrayView_toShort(const QByteArrayView* self);
uint16_t QByteArrayView_toUShort(const QByteArrayView* self);
int QByteArrayView_toInt(const QByteArrayView* self);
unsigned int QByteArrayView_toUInt(const QByteArrayView* self);
long QByteArrayView_toLong(const QByteArrayView* self);
unsigned long QByteArrayView_toULong(const QByteArrayView* self);
long long QByteArrayView_toLongLong(const QByteArrayView* self);
unsigned long long QByteArrayView_toULongLong(const QByteArrayView* self);
float QByteArrayView_toFloat(const QByteArrayView* self);
double QByteArrayView_toDouble(const QByteArrayView* self);
bool QByteArrayView_startsWith(const QByteArrayView* self, QByteArrayView* other);
bool QByteArrayView_startsWithWithChar(const QByteArrayView* self, char c);
bool QByteArrayView_endsWith(const QByteArrayView* self, QByteArrayView* other);
bool QByteArrayView_endsWithWithChar(const QByteArrayView* self, char c);
ptrdiff_t QByteArrayView_indexOf(const QByteArrayView* self, QByteArrayView* a);
ptrdiff_t QByteArrayView_indexOfWithCh(const QByteArrayView* self, char ch);
bool QByteArrayView_contains(const QByteArrayView* self, QByteArrayView* a);
bool QByteArrayView_containsWithChar(const QByteArrayView* self, char c);
ptrdiff_t QByteArrayView_lastIndexOf(const QByteArrayView* self, QByteArrayView* a);
ptrdiff_t QByteArrayView_lastIndexOf2(const QByteArrayView* self, QByteArrayView* a, ptrdiff_t from);
ptrdiff_t QByteArrayView_lastIndexOfWithCh(const QByteArrayView* self, char ch);
ptrdiff_t QByteArrayView_count(const QByteArrayView* self, QByteArrayView* a);
ptrdiff_t QByteArrayView_countWithCh(const QByteArrayView* self, char ch);
int QByteArrayView_compare(const QByteArrayView* self, QByteArrayView* a);
bool QByteArrayView_isValidUtf8(const QByteArrayView* self);
const char* QByteArrayView_begin(const QByteArrayView* self);
const char* QByteArrayView_end(const QByteArrayView* self);
const char* QByteArrayView_cbegin(const QByteArrayView* self);
const char* QByteArrayView_cend(const QByteArrayView* self);
bool QByteArrayView_empty(const QByteArrayView* self);
char QByteArrayView_front(const QByteArrayView* self);
char QByteArrayView_back(const QByteArrayView* self);
bool QByteArrayView_isNull(const QByteArrayView* self);
bool QByteArrayView_isEmpty(const QByteArrayView* self);
ptrdiff_t QByteArrayView_length(const QByteArrayView* self);
char QByteArrayView_first2(const QByteArrayView* self);
char QByteArrayView_last2(const QByteArrayView* self);
int16_t QByteArrayView_toShort1(const QByteArrayView* self, bool* ok);
int16_t QByteArrayView_toShort2(const QByteArrayView* self, bool* ok, int base);
uint16_t QByteArrayView_toUShort1(const QByteArrayView* self, bool* ok);
uint16_t QByteArrayView_toUShort2(const QByteArrayView* self, bool* ok, int base);
int QByteArrayView_toInt1(const QByteArrayView* self, bool* ok);
int QByteArrayView_toInt2(const QByteArrayView* self, bool* ok, int base);
unsigned int QByteArrayView_toUInt1(const QByteArrayView* self, bool* ok);
unsigned int QByteArrayView_toUInt2(const QByteArrayView* self, bool* ok, int base);
long QByteArrayView_toLong1(const QByteArrayView* self, bool* ok);
long QByteArrayView_toLong2(const QByteArrayView* self, bool* ok, int base);
unsigned long QByteArrayView_toULong1(const QByteArrayView* self, bool* ok);
unsigned long QByteArrayView_toULong2(const QByteArrayView* self, bool* ok, int base);
long long QByteArrayView_toLongLong1(const QByteArrayView* self, bool* ok);
long long QByteArrayView_toLongLong2(const QByteArrayView* self, bool* ok, int base);
unsigned long long QByteArrayView_toULongLong1(const QByteArrayView* self, bool* ok);
unsigned long long QByteArrayView_toULongLong2(const QByteArrayView* self, bool* ok, int base);
float QByteArrayView_toFloat1(const QByteArrayView* self, bool* ok);
double QByteArrayView_toDouble1(const QByteArrayView* self, bool* ok);
ptrdiff_t QByteArrayView_indexOf2(const QByteArrayView* self, QByteArrayView* a, ptrdiff_t from);
ptrdiff_t QByteArrayView_indexOf22(const QByteArrayView* self, char ch, ptrdiff_t from);
ptrdiff_t QByteArrayView_lastIndexOf22(const QByteArrayView* self, char ch, ptrdiff_t from);
int QByteArrayView_compare2(const QByteArrayView* self, QByteArrayView* a, int cs);
void QByteArrayView_delete(QByteArrayView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
