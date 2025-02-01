#pragma once
#ifndef MIQT_QT_GEN_QSTRINGVIEW_H
#define MIQT_QT_GEN_QSTRINGVIEW_H

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
class QStringView;
#else
typedef struct QChar QChar;
typedef struct QStringView QStringView;
#endif

QStringView* QStringView_new();
struct miqt_string QStringView_toString(const QStringView* self);
ptrdiff_t QStringView_size(const QStringView* self);
QChar* QStringView_data(const QStringView* self);
QChar* QStringView_operatorSubscript(const QStringView* self, ptrdiff_t n);
struct miqt_string QStringView_toLatin1(const QStringView* self);
struct miqt_string QStringView_toUtf8(const QStringView* self);
struct miqt_string QStringView_toLocal8Bit(const QStringView* self);
struct miqt_array /* of unsigned int */  QStringView_toUcs4(const QStringView* self);
QChar* QStringView_at(const QStringView* self, ptrdiff_t n);
void QStringView_truncate(QStringView* self, ptrdiff_t n);
void QStringView_chop(QStringView* self, ptrdiff_t n);
int QStringView_compareWithQChar(const QStringView* self, QChar* c);
int QStringView_compare2(const QStringView* self, QChar* c, int cs);
bool QStringView_startsWithWithQChar(const QStringView* self, QChar* c);
bool QStringView_startsWith2(const QStringView* self, QChar* c, int cs);
bool QStringView_endsWithWithQChar(const QStringView* self, QChar* c);
bool QStringView_endsWith2(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_indexOf(const QStringView* self, QChar* c);
bool QStringView_contains(const QStringView* self, QChar* c);
ptrdiff_t QStringView_count(const QStringView* self, QChar* c);
ptrdiff_t QStringView_lastIndexOf(const QStringView* self, QChar* c);
bool QStringView_isRightToLeft(const QStringView* self);
bool QStringView_isValidUtf16(const QStringView* self);
int16_t QStringView_toShort(const QStringView* self);
uint16_t QStringView_toUShort(const QStringView* self);
int QStringView_toInt(const QStringView* self);
unsigned int QStringView_toUInt(const QStringView* self);
long QStringView_toLong(const QStringView* self);
unsigned long QStringView_toULong(const QStringView* self);
long long QStringView_toLongLong(const QStringView* self);
unsigned long long QStringView_toULongLong(const QStringView* self);
float QStringView_toFloat(const QStringView* self);
double QStringView_toDouble(const QStringView* self);
QChar* QStringView_begin(const QStringView* self);
QChar* QStringView_end(const QStringView* self);
QChar* QStringView_cbegin(const QStringView* self);
QChar* QStringView_cend(const QStringView* self);
bool QStringView_empty(const QStringView* self);
QChar* QStringView_front(const QStringView* self);
QChar* QStringView_back(const QStringView* self);
bool QStringView_isNull(const QStringView* self);
bool QStringView_isEmpty(const QStringView* self);
int QStringView_length(const QStringView* self);
QChar* QStringView_first(const QStringView* self);
QChar* QStringView_last(const QStringView* self);
ptrdiff_t QStringView_indexOf2(const QStringView* self, QChar* c, ptrdiff_t from);
ptrdiff_t QStringView_indexOf3(const QStringView* self, QChar* c, ptrdiff_t from, int cs);
bool QStringView_contains2(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_count2(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_lastIndexOf2(const QStringView* self, QChar* c, ptrdiff_t from);
ptrdiff_t QStringView_lastIndexOf3(const QStringView* self, QChar* c, ptrdiff_t from, int cs);
int16_t QStringView_toShort1(const QStringView* self, bool* ok);
int16_t QStringView_toShort2(const QStringView* self, bool* ok, int base);
uint16_t QStringView_toUShort1(const QStringView* self, bool* ok);
uint16_t QStringView_toUShort2(const QStringView* self, bool* ok, int base);
int QStringView_toInt1(const QStringView* self, bool* ok);
int QStringView_toInt2(const QStringView* self, bool* ok, int base);
unsigned int QStringView_toUInt1(const QStringView* self, bool* ok);
unsigned int QStringView_toUInt2(const QStringView* self, bool* ok, int base);
long QStringView_toLong1(const QStringView* self, bool* ok);
long QStringView_toLong2(const QStringView* self, bool* ok, int base);
unsigned long QStringView_toULong1(const QStringView* self, bool* ok);
unsigned long QStringView_toULong2(const QStringView* self, bool* ok, int base);
long long QStringView_toLongLong1(const QStringView* self, bool* ok);
long long QStringView_toLongLong2(const QStringView* self, bool* ok, int base);
unsigned long long QStringView_toULongLong1(const QStringView* self, bool* ok);
unsigned long long QStringView_toULongLong2(const QStringView* self, bool* ok, int base);
float QStringView_toFloat1(const QStringView* self, bool* ok);
double QStringView_toDouble1(const QStringView* self, bool* ok);
void QStringView_delete(QStringView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
