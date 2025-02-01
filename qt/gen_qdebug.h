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
class QChar;
class QDebug;
class QDebugStateSaver;
class QIODevice;
class QNoDebug;
#else
typedef struct QChar QChar;
typedef struct QDebug QDebug;
typedef struct QDebugStateSaver QDebugStateSaver;
typedef struct QIODevice QIODevice;
typedef struct QNoDebug QNoDebug;
#endif

QDebug* QDebug_new(QIODevice* device);
QDebug* QDebug_new2(QDebug* o);
void QDebug_operatorAssign(QDebug* self, QDebug* other);
void QDebug_swap(QDebug* self, QDebug* other);
QDebug* QDebug_resetFormat(QDebug* self);
QDebug* QDebug_space(QDebug* self);
QDebug* QDebug_nospace(QDebug* self);
QDebug* QDebug_maybeSpace(QDebug* self);
QDebug* QDebug_verbosity(QDebug* self, int verbosityLevel);
int QDebug_verbosity2(const QDebug* self);
void QDebug_setVerbosity(QDebug* self, int verbosityLevel);
bool QDebug_autoInsertSpaces(const QDebug* self);
void QDebug_setAutoInsertSpaces(QDebug* self, bool b);
QDebug* QDebug_quote(QDebug* self);
QDebug* QDebug_noquote(QDebug* self);
QDebug* QDebug_maybeQuote(QDebug* self);
QDebug* QDebug_operatorShiftLeft(QDebug* self, QChar* t);
QDebug* QDebug_operatorShiftLeftWithBool(QDebug* self, bool t);
QDebug* QDebug_operatorShiftLeftWithChar(QDebug* self, char t);
QDebug* QDebug_operatorShiftLeftWithShort(QDebug* self, int16_t t);
QDebug* QDebug_operatorShiftLeftWithUnsignedshort(QDebug* self, uint16_t t);
QDebug* QDebug_operatorShiftLeftWithInt(QDebug* self, int t);
QDebug* QDebug_operatorShiftLeftWithUnsignedint(QDebug* self, unsigned int t);
QDebug* QDebug_operatorShiftLeftWithLong(QDebug* self, long t);
QDebug* QDebug_operatorShiftLeftWithUnsignedlong(QDebug* self, unsigned long t);
QDebug* QDebug_operatorShiftLeftWithQint64(QDebug* self, long long t);
QDebug* QDebug_operatorShiftLeftWithQuint64(QDebug* self, unsigned long long t);
QDebug* QDebug_operatorShiftLeftWithFloat(QDebug* self, float t);
QDebug* QDebug_operatorShiftLeftWithDouble(QDebug* self, double t);
QDebug* QDebug_operatorShiftLeft2(QDebug* self, const char* t);
QDebug* QDebug_operatorShiftLeftWithQString(QDebug* self, struct miqt_string t);
QDebug* QDebug_operatorShiftLeftWithQByteArray(QDebug* self, struct miqt_string t);
QDebug* QDebug_operatorShiftLeftWithVoid(QDebug* self, const void* t);
QDebug* QDebug_maybeQuote1(QDebug* self, char c);
void QDebug_delete(QDebug* self);

QDebugStateSaver* QDebugStateSaver_new(QDebug* dbg);
void QDebugStateSaver_delete(QDebugStateSaver* self);

QNoDebug* QNoDebug_space(QNoDebug* self);
QNoDebug* QNoDebug_nospace(QNoDebug* self);
QNoDebug* QNoDebug_maybeSpace(QNoDebug* self);
QNoDebug* QNoDebug_quote(QNoDebug* self);
QNoDebug* QNoDebug_noquote(QNoDebug* self);
QNoDebug* QNoDebug_maybeQuote(QNoDebug* self);
QNoDebug* QNoDebug_verbosity(QNoDebug* self, int param1);
QNoDebug* QNoDebug_maybeQuote1(QNoDebug* self, const char param1);
void QNoDebug_delete(QNoDebug* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
