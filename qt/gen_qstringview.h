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
struct miqt_string QStringView_ToString(const QStringView* self);
ptrdiff_t QStringView_Size(const QStringView* self);
QChar* QStringView_Data(const QStringView* self);
QChar* QStringView_OperatorSubscript(const QStringView* self, ptrdiff_t n);
struct miqt_string QStringView_ToLatin1(const QStringView* self);
struct miqt_string QStringView_ToUtf8(const QStringView* self);
struct miqt_string QStringView_ToLocal8Bit(const QStringView* self);
struct miqt_array /* of unsigned int */  QStringView_ToUcs4(const QStringView* self);
QChar* QStringView_At(const QStringView* self, ptrdiff_t n);
void QStringView_Truncate(QStringView* self, ptrdiff_t n);
void QStringView_Chop(QStringView* self, ptrdiff_t n);
int QStringView_CompareWithQChar(const QStringView* self, QChar* c);
int QStringView_Compare2(const QStringView* self, QChar* c, int cs);
bool QStringView_StartsWithWithQChar(const QStringView* self, QChar* c);
bool QStringView_StartsWith2(const QStringView* self, QChar* c, int cs);
bool QStringView_EndsWithWithQChar(const QStringView* self, QChar* c);
bool QStringView_EndsWith2(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_IndexOf(const QStringView* self, QChar* c);
bool QStringView_Contains(const QStringView* self, QChar* c);
ptrdiff_t QStringView_Count(const QStringView* self, QChar* c);
ptrdiff_t QStringView_LastIndexOf(const QStringView* self, QChar* c);
bool QStringView_IsRightToLeft(const QStringView* self);
bool QStringView_IsValidUtf16(const QStringView* self);
int16_t QStringView_ToShort(const QStringView* self);
uint16_t QStringView_ToUShort(const QStringView* self);
int QStringView_ToInt(const QStringView* self);
unsigned int QStringView_ToUInt(const QStringView* self);
long QStringView_ToLong(const QStringView* self);
unsigned long QStringView_ToULong(const QStringView* self);
long long QStringView_ToLongLong(const QStringView* self);
unsigned long long QStringView_ToULongLong(const QStringView* self);
float QStringView_ToFloat(const QStringView* self);
double QStringView_ToDouble(const QStringView* self);
QChar* QStringView_Begin(const QStringView* self);
QChar* QStringView_End(const QStringView* self);
QChar* QStringView_Cbegin(const QStringView* self);
QChar* QStringView_Cend(const QStringView* self);
bool QStringView_Empty(const QStringView* self);
QChar* QStringView_Front(const QStringView* self);
QChar* QStringView_Back(const QStringView* self);
bool QStringView_IsNull(const QStringView* self);
bool QStringView_IsEmpty(const QStringView* self);
int QStringView_Length(const QStringView* self);
QChar* QStringView_First(const QStringView* self);
QChar* QStringView_Last(const QStringView* self);
ptrdiff_t QStringView_IndexOf2(const QStringView* self, QChar* c, ptrdiff_t from);
ptrdiff_t QStringView_IndexOf3(const QStringView* self, QChar* c, ptrdiff_t from, int cs);
bool QStringView_Contains2(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_Count2(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_LastIndexOf2(const QStringView* self, QChar* c, ptrdiff_t from);
ptrdiff_t QStringView_LastIndexOf3(const QStringView* self, QChar* c, ptrdiff_t from, int cs);
int16_t QStringView_ToShort1(const QStringView* self, bool* ok);
int16_t QStringView_ToShort2(const QStringView* self, bool* ok, int base);
uint16_t QStringView_ToUShort1(const QStringView* self, bool* ok);
uint16_t QStringView_ToUShort2(const QStringView* self, bool* ok, int base);
int QStringView_ToInt1(const QStringView* self, bool* ok);
int QStringView_ToInt2(const QStringView* self, bool* ok, int base);
unsigned int QStringView_ToUInt1(const QStringView* self, bool* ok);
unsigned int QStringView_ToUInt2(const QStringView* self, bool* ok, int base);
long QStringView_ToLong1(const QStringView* self, bool* ok);
long QStringView_ToLong2(const QStringView* self, bool* ok, int base);
unsigned long QStringView_ToULong1(const QStringView* self, bool* ok);
unsigned long QStringView_ToULong2(const QStringView* self, bool* ok, int base);
long long QStringView_ToLongLong1(const QStringView* self, bool* ok);
long long QStringView_ToLongLong2(const QStringView* self, bool* ok, int base);
unsigned long long QStringView_ToULongLong1(const QStringView* self, bool* ok);
unsigned long long QStringView_ToULongLong2(const QStringView* self, bool* ok, int base);
float QStringView_ToFloat1(const QStringView* self, bool* ok);
double QStringView_ToDouble1(const QStringView* self, bool* ok);
void QStringView_Delete(QStringView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
