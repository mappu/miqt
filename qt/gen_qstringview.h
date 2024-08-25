#ifndef GEN_QSTRINGVIEW_H
#define GEN_QSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QChar;
class QStringView;
#else
typedef struct QByteArray QByteArray;
typedef struct QChar QChar;
typedef struct QStringView QStringView;
#endif

QStringView* QStringView_new();
void QStringView_ToString(QStringView* self, char** _out, int* _out_Strlen);
size_t QStringView_Size(QStringView* self);
QChar* QStringView_OperatorSubscript(QStringView* self, size_t n);
QByteArray* QStringView_ToLatin1(QStringView* self);
QByteArray* QStringView_ToUtf8(QStringView* self);
QByteArray* QStringView_ToLocal8Bit(QStringView* self);
void QStringView_ToUcs4(QStringView* self, unsigned int** _out, size_t* _out_len);
QChar* QStringView_At(QStringView* self, size_t n);
void QStringView_Truncate(QStringView* self, size_t n);
void QStringView_Chop(QStringView* self, size_t n);
int QStringView_Compare(QStringView* self, QChar* c);
bool QStringView_StartsWith(QStringView* self, QChar* c);
bool QStringView_EndsWith(QStringView* self, QChar* c);
bool QStringView_IsRightToLeft(QStringView* self);
bool QStringView_IsValidUtf16(QStringView* self);
int16_t QStringView_ToShort(QStringView* self);
uint16_t QStringView_ToUShort(QStringView* self);
int QStringView_ToInt(QStringView* self);
unsigned int QStringView_ToUInt(QStringView* self);
long QStringView_ToLong(QStringView* self);
unsigned long QStringView_ToULong(QStringView* self);
int64_t QStringView_ToLongLong(QStringView* self);
uint64_t QStringView_ToULongLong(QStringView* self);
float QStringView_ToFloat(QStringView* self);
double QStringView_ToDouble(QStringView* self);
bool QStringView_Empty(QStringView* self);
QChar* QStringView_Front(QStringView* self);
QChar* QStringView_Back(QStringView* self);
bool QStringView_IsNull(QStringView* self);
bool QStringView_IsEmpty(QStringView* self);
int QStringView_Length(QStringView* self);
QChar* QStringView_First(QStringView* self);
QChar* QStringView_Last(QStringView* self);
int16_t QStringView_ToShort1(QStringView* self, bool* ok);
int16_t QStringView_ToShort2(QStringView* self, bool* ok, int base);
uint16_t QStringView_ToUShort1(QStringView* self, bool* ok);
uint16_t QStringView_ToUShort2(QStringView* self, bool* ok, int base);
int QStringView_ToInt1(QStringView* self, bool* ok);
int QStringView_ToInt2(QStringView* self, bool* ok, int base);
unsigned int QStringView_ToUInt1(QStringView* self, bool* ok);
unsigned int QStringView_ToUInt2(QStringView* self, bool* ok, int base);
long QStringView_ToLong1(QStringView* self, bool* ok);
long QStringView_ToLong2(QStringView* self, bool* ok, int base);
unsigned long QStringView_ToULong1(QStringView* self, bool* ok);
unsigned long QStringView_ToULong2(QStringView* self, bool* ok, int base);
int64_t QStringView_ToLongLong1(QStringView* self, bool* ok);
int64_t QStringView_ToLongLong2(QStringView* self, bool* ok, int base);
uint64_t QStringView_ToULongLong1(QStringView* self, bool* ok);
uint64_t QStringView_ToULongLong2(QStringView* self, bool* ok, int base);
float QStringView_ToFloat1(QStringView* self, bool* ok);
double QStringView_ToDouble1(QStringView* self, bool* ok);
void QStringView_Delete(QStringView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
