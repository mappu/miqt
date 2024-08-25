#ifndef GEN_QTEXTSTREAM_H
#define GEN_QTEXTSTREAM_H

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
class QIODevice;
class QLocale;
class QTextCodec;
class QTextStream;
#else
typedef struct QByteArray QByteArray;
typedef struct QChar QChar;
typedef struct QIODevice QIODevice;
typedef struct QLocale QLocale;
typedef struct QTextCodec QTextCodec;
typedef struct QTextStream QTextStream;
#endif

QTextStream* QTextStream_new();
QTextStream* QTextStream_new2(QIODevice* device);
void QTextStream_SetCodec(QTextStream* self, QTextCodec* codec);
void QTextStream_SetCodecWithCodecName(QTextStream* self, char* codecName);
QTextCodec* QTextStream_Codec(QTextStream* self);
void QTextStream_SetAutoDetectUnicode(QTextStream* self, bool enabled);
bool QTextStream_AutoDetectUnicode(QTextStream* self);
void QTextStream_SetGenerateByteOrderMark(QTextStream* self, bool generate);
bool QTextStream_GenerateByteOrderMark(QTextStream* self);
void QTextStream_SetLocale(QTextStream* self, QLocale* locale);
QLocale* QTextStream_Locale(QTextStream* self);
void QTextStream_SetDevice(QTextStream* self, QIODevice* device);
QIODevice* QTextStream_Device(QTextStream* self);
void QTextStream_String(QTextStream* self, char** _out, int* _out_Strlen);
void QTextStream_ResetStatus(QTextStream* self);
bool QTextStream_AtEnd(QTextStream* self);
void QTextStream_Reset(QTextStream* self);
void QTextStream_Flush(QTextStream* self);
bool QTextStream_Seek(QTextStream* self, int64_t pos);
int64_t QTextStream_Pos(QTextStream* self);
void QTextStream_SkipWhiteSpace(QTextStream* self);
void QTextStream_ReadLine(QTextStream* self, char** _out, int* _out_Strlen);
void QTextStream_ReadAll(QTextStream* self, char** _out, int* _out_Strlen);
void QTextStream_Read(QTextStream* self, int64_t maxlen, char** _out, int* _out_Strlen);
void QTextStream_SetPadChar(QTextStream* self, QChar* ch);
QChar* QTextStream_PadChar(QTextStream* self);
void QTextStream_SetFieldWidth(QTextStream* self, int width);
int QTextStream_FieldWidth(QTextStream* self);
void QTextStream_SetIntegerBase(QTextStream* self, int base);
int QTextStream_IntegerBase(QTextStream* self);
void QTextStream_SetRealNumberPrecision(QTextStream* self, int precision);
int QTextStream_RealNumberPrecision(QTextStream* self);
QTextStream* QTextStream_OperatorShiftRight(QTextStream* self, QChar* ch);
QTextStream* QTextStream_OperatorShiftRightWithCh(QTextStream* self, char* ch);
QTextStream* QTextStream_OperatorShiftRightWithShort(QTextStream* self, int16_t* i);
QTextStream* QTextStream_OperatorShiftRightWithUnsignedshort(QTextStream* self, uint16_t* i);
QTextStream* QTextStream_OperatorShiftRightWithInt(QTextStream* self, int* i);
QTextStream* QTextStream_OperatorShiftRightWithUnsignedint(QTextStream* self, unsigned int* i);
QTextStream* QTextStream_OperatorShiftRightWithLong(QTextStream* self, long* i);
QTextStream* QTextStream_OperatorShiftRightWithUnsignedlong(QTextStream* self, unsigned long* i);
QTextStream* QTextStream_OperatorShiftRightWithQlonglong(QTextStream* self, int64_t* i);
QTextStream* QTextStream_OperatorShiftRightWithQulonglong(QTextStream* self, uint64_t* i);
QTextStream* QTextStream_OperatorShiftRightWithFloat(QTextStream* self, float* f);
QTextStream* QTextStream_OperatorShiftRightWithDouble(QTextStream* self, double* f);
QTextStream* QTextStream_OperatorShiftRightWithQString(QTextStream* self, const char* s, size_t s_Strlen);
QTextStream* QTextStream_OperatorShiftRightWithArray(QTextStream* self, QByteArray* array);
QTextStream* QTextStream_OperatorShiftRightWithChar(QTextStream* self, char* c);
QTextStream* QTextStream_OperatorShiftLeft(QTextStream* self, QChar* ch);
QTextStream* QTextStream_OperatorShiftLeftWithCh(QTextStream* self, char ch);
QTextStream* QTextStream_OperatorShiftLeftWithShort(QTextStream* self, int16_t i);
QTextStream* QTextStream_OperatorShiftLeftWithUnsignedshort(QTextStream* self, uint16_t i);
QTextStream* QTextStream_OperatorShiftLeftWithInt(QTextStream* self, int i);
QTextStream* QTextStream_OperatorShiftLeftWithUnsignedint(QTextStream* self, unsigned int i);
QTextStream* QTextStream_OperatorShiftLeftWithLong(QTextStream* self, long i);
QTextStream* QTextStream_OperatorShiftLeftWithUnsignedlong(QTextStream* self, unsigned long i);
QTextStream* QTextStream_OperatorShiftLeftWithQlonglong(QTextStream* self, int64_t i);
QTextStream* QTextStream_OperatorShiftLeftWithQulonglong(QTextStream* self, uint64_t i);
QTextStream* QTextStream_OperatorShiftLeftWithFloat(QTextStream* self, float f);
QTextStream* QTextStream_OperatorShiftLeftWithDouble(QTextStream* self, double f);
QTextStream* QTextStream_OperatorShiftLeftWithQString(QTextStream* self, const char* s, size_t s_Strlen);
QTextStream* QTextStream_OperatorShiftLeftWithArray(QTextStream* self, QByteArray* array);
QTextStream* QTextStream_OperatorShiftLeftWithChar(QTextStream* self, char* c);
void QTextStream_ReadLine1(QTextStream* self, int64_t maxlen, char** _out, int* _out_Strlen);
void QTextStream_Delete(QTextStream* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
