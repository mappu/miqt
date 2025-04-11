#pragma once
#ifndef MIQT_QT6_GEN_QTEXTSTREAM_H
#define MIQT_QT6_GEN_QTEXTSTREAM_H

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
class QIODevice;
class QIODeviceBase;
class QLocale;
class QTextStream;
#else
typedef struct QChar QChar;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QLocale QLocale;
typedef struct QTextStream QTextStream;
#endif

QTextStream* QTextStream_new();
QTextStream* QTextStream_new2(QIODevice* device);
QTextStream* QTextStream_new3(struct miqt_string array);
QTextStream* QTextStream_new4(struct miqt_string array, int openMode);
void QTextStream_virtbase(QTextStream* src, QIODeviceBase** outptr_QIODeviceBase);
void QTextStream_setEncoding(QTextStream* self, int encoding);
int QTextStream_encoding(const QTextStream* self);
void QTextStream_setAutoDetectUnicode(QTextStream* self, bool enabled);
bool QTextStream_autoDetectUnicode(const QTextStream* self);
void QTextStream_setGenerateByteOrderMark(QTextStream* self, bool generate);
bool QTextStream_generateByteOrderMark(const QTextStream* self);
void QTextStream_setLocale(QTextStream* self, QLocale* locale);
QLocale* QTextStream_locale(const QTextStream* self);
void QTextStream_setDevice(QTextStream* self, QIODevice* device);
QIODevice* QTextStream_device(const QTextStream* self);
struct miqt_string QTextStream_string(const QTextStream* self);
int QTextStream_status(const QTextStream* self);
void QTextStream_setStatus(QTextStream* self, int status);
void QTextStream_resetStatus(QTextStream* self);
bool QTextStream_atEnd(const QTextStream* self);
void QTextStream_reset(QTextStream* self);
void QTextStream_flush(QTextStream* self);
bool QTextStream_seek(QTextStream* self, long long pos);
long long QTextStream_pos(const QTextStream* self);
void QTextStream_skipWhiteSpace(QTextStream* self);
struct miqt_string QTextStream_readLine(QTextStream* self);
struct miqt_string QTextStream_readAll(QTextStream* self);
struct miqt_string QTextStream_read(QTextStream* self, long long maxlen);
void QTextStream_setFieldAlignment(QTextStream* self, int alignment);
int QTextStream_fieldAlignment(const QTextStream* self);
void QTextStream_setPadChar(QTextStream* self, QChar* ch);
QChar* QTextStream_padChar(const QTextStream* self);
void QTextStream_setFieldWidth(QTextStream* self, int width);
int QTextStream_fieldWidth(const QTextStream* self);
void QTextStream_setNumberFlags(QTextStream* self, int flags);
int QTextStream_numberFlags(const QTextStream* self);
void QTextStream_setIntegerBase(QTextStream* self, int base);
int QTextStream_integerBase(const QTextStream* self);
void QTextStream_setRealNumberNotation(QTextStream* self, int notation);
int QTextStream_realNumberNotation(const QTextStream* self);
void QTextStream_setRealNumberPrecision(QTextStream* self, int precision);
int QTextStream_realNumberPrecision(const QTextStream* self);
QTextStream* QTextStream_operatorShiftRight(QTextStream* self, QChar* ch);
QTextStream* QTextStream_operatorShiftRightWithCh(QTextStream* self, char* ch);
QTextStream* QTextStream_operatorShiftRightWithShort(QTextStream* self, short* i);
QTextStream* QTextStream_operatorShiftRightWithUnsignedshort(QTextStream* self, unsigned short* i);
QTextStream* QTextStream_operatorShiftRightWithInt(QTextStream* self, int* i);
QTextStream* QTextStream_operatorShiftRightWithUnsignedint(QTextStream* self, unsigned int* i);
QTextStream* QTextStream_operatorShiftRightWithLong(QTextStream* self, long* i);
QTextStream* QTextStream_operatorShiftRightWithUnsignedlong(QTextStream* self, unsigned long* i);
QTextStream* QTextStream_operatorShiftRightWithQlonglong(QTextStream* self, long long* i);
QTextStream* QTextStream_operatorShiftRightWithQulonglong(QTextStream* self, unsigned long long* i);
QTextStream* QTextStream_operatorShiftRightWithFloat(QTextStream* self, float* f);
QTextStream* QTextStream_operatorShiftRightWithDouble(QTextStream* self, double* f);
QTextStream* QTextStream_operatorShiftRightWithQString(QTextStream* self, struct miqt_string s);
QTextStream* QTextStream_operatorShiftRightWithArray(QTextStream* self, struct miqt_string array);
QTextStream* QTextStream_operatorShiftRightWithChar(QTextStream* self, char* c);
QTextStream* QTextStream_operatorShiftLeft(QTextStream* self, QChar* ch);
QTextStream* QTextStream_operatorShiftLeftWithCh(QTextStream* self, char ch);
QTextStream* QTextStream_operatorShiftLeftWithShort(QTextStream* self, short i);
QTextStream* QTextStream_operatorShiftLeftWithUnsignedshort(QTextStream* self, unsigned short i);
QTextStream* QTextStream_operatorShiftLeftWithInt(QTextStream* self, int i);
QTextStream* QTextStream_operatorShiftLeftWithUnsignedint(QTextStream* self, unsigned int i);
QTextStream* QTextStream_operatorShiftLeftWithLong(QTextStream* self, long i);
QTextStream* QTextStream_operatorShiftLeftWithUnsignedlong(QTextStream* self, unsigned long i);
QTextStream* QTextStream_operatorShiftLeftWithQlonglong(QTextStream* self, long long i);
QTextStream* QTextStream_operatorShiftLeftWithQulonglong(QTextStream* self, unsigned long long i);
QTextStream* QTextStream_operatorShiftLeftWithFloat(QTextStream* self, float f);
QTextStream* QTextStream_operatorShiftLeftWithDouble(QTextStream* self, double f);
QTextStream* QTextStream_operatorShiftLeftWithQString(QTextStream* self, struct miqt_string s);
QTextStream* QTextStream_operatorShiftLeftWithArray(QTextStream* self, struct miqt_string array);
QTextStream* QTextStream_operatorShiftLeftWithChar(QTextStream* self, const char* c);
QTextStream* QTextStream_operatorShiftLeftWithPtr(QTextStream* self, const void* ptr);
struct miqt_string QTextStream_readLineWithMaxlen(QTextStream* self, long long maxlen);
void QTextStream_delete(QTextStream* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
