#pragma once
#ifndef MIQT_QT_GEN_QDEBUG_H
#define MIQT_QT_GEN_QDEBUG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QChar;
class QDebug;
class QDebugStateSaver;
class QIODevice;
class QNoDebug;
#else
typedef struct QByteArray QByteArray;
typedef struct QChar QChar;
typedef struct QDebug QDebug;
typedef struct QDebugStateSaver QDebugStateSaver;
typedef struct QIODevice QIODevice;
typedef struct QNoDebug QNoDebug;
#endif

QDebug* QDebug_new(QIODevice* device);
QDebug* QDebug_new2(QDebug* o);
void QDebug_OperatorAssign(QDebug* self, QDebug* other);
void QDebug_Swap(QDebug* self, QDebug* other);
QDebug* QDebug_ResetFormat(QDebug* self);
QDebug* QDebug_Space(QDebug* self);
QDebug* QDebug_Nospace(QDebug* self);
QDebug* QDebug_MaybeSpace(QDebug* self);
QDebug* QDebug_Verbosity(QDebug* self, int verbosityLevel);
int QDebug_Verbosity2(const QDebug* self);
void QDebug_SetVerbosity(QDebug* self, int verbosityLevel);
bool QDebug_AutoInsertSpaces(const QDebug* self);
void QDebug_SetAutoInsertSpaces(QDebug* self, bool b);
QDebug* QDebug_Quote(QDebug* self);
QDebug* QDebug_Noquote(QDebug* self);
QDebug* QDebug_MaybeQuote(QDebug* self);
QDebug* QDebug_OperatorShiftLeft(QDebug* self, QChar* t);
QDebug* QDebug_OperatorShiftLeftWithBool(QDebug* self, bool t);
QDebug* QDebug_OperatorShiftLeftWithChar(QDebug* self, char t);
QDebug* QDebug_OperatorShiftLeftWithShort(QDebug* self, int16_t t);
QDebug* QDebug_OperatorShiftLeftWithUnsignedshort(QDebug* self, uint16_t t);
QDebug* QDebug_OperatorShiftLeftWithInt(QDebug* self, int t);
QDebug* QDebug_OperatorShiftLeftWithUnsignedint(QDebug* self, unsigned int t);
QDebug* QDebug_OperatorShiftLeftWithLong(QDebug* self, long t);
QDebug* QDebug_OperatorShiftLeftWithUnsignedlong(QDebug* self, unsigned long t);
QDebug* QDebug_OperatorShiftLeftWithQint64(QDebug* self, long long t);
QDebug* QDebug_OperatorShiftLeftWithQuint64(QDebug* self, unsigned long long t);
QDebug* QDebug_OperatorShiftLeftWithFloat(QDebug* self, float t);
QDebug* QDebug_OperatorShiftLeftWithDouble(QDebug* self, double t);
QDebug* QDebug_OperatorShiftLeft2(QDebug* self, const char* t);
QDebug* QDebug_OperatorShiftLeftWithQString(QDebug* self, struct miqt_string t);
QDebug* QDebug_OperatorShiftLeftWithQByteArray(QDebug* self, struct miqt_string t);
QDebug* QDebug_OperatorShiftLeftWithVoid(QDebug* self, const void* t);
QDebug* QDebug_MaybeQuote1(QDebug* self, char c);
void QDebug_Delete(QDebug* self);

QDebugStateSaver* QDebugStateSaver_new(QDebug* dbg);
void QDebugStateSaver_Delete(QDebugStateSaver* self);

QNoDebug* QNoDebug_Space(QNoDebug* self);
QNoDebug* QNoDebug_Nospace(QNoDebug* self);
QNoDebug* QNoDebug_MaybeSpace(QNoDebug* self);
QNoDebug* QNoDebug_Quote(QNoDebug* self);
QNoDebug* QNoDebug_Noquote(QNoDebug* self);
QNoDebug* QNoDebug_MaybeQuote(QNoDebug* self);
QNoDebug* QNoDebug_Verbosity(QNoDebug* self, int param1);
QNoDebug* QNoDebug_MaybeQuote1(QNoDebug* self, const char param1);
void QNoDebug_Delete(QNoDebug* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
