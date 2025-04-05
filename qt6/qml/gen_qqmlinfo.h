#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLINFO_H
#define MIQT_QT6_QML_GEN_QQMLINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QDebug;
class QIODeviceBase;
class QQmlInfo;
class QUrl;
#else
typedef struct QChar QChar;
typedef struct QDebug QDebug;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QQmlInfo QQmlInfo;
typedef struct QUrl QUrl;
#endif

QQmlInfo* QQmlInfo_new(QQmlInfo* param1);
void QQmlInfo_virtbase(QQmlInfo* src, QDebug** outptr_QDebug);
QQmlInfo* QQmlInfo_operatorShiftLeft(QQmlInfo* self, QChar* t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithBool(QQmlInfo* self, bool t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithChar(QQmlInfo* self, char t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithShort(QQmlInfo* self, int16_t t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithUnsignedshort(QQmlInfo* self, uint16_t t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithInt(QQmlInfo* self, int t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithUnsignedint(QQmlInfo* self, unsigned int t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithLong(QQmlInfo* self, long t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithUnsignedlong(QQmlInfo* self, unsigned long t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithQint64(QQmlInfo* self, long long t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithQuint64(QQmlInfo* self, unsigned long long t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithFloat(QQmlInfo* self, float t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithDouble(QQmlInfo* self, double t);
QQmlInfo* QQmlInfo_operatorShiftLeft2(QQmlInfo* self, const char* t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithQString(QQmlInfo* self, struct miqt_string t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithQByteArray(QQmlInfo* self, struct miqt_string t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithVoid(QQmlInfo* self, const void* t);
QQmlInfo* QQmlInfo_operatorShiftLeftWithQUrl(QQmlInfo* self, QUrl* t);
void QQmlInfo_delete(QQmlInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
