#ifndef GEN_QSIGNALTRANSITION_H
#define GEN_QSIGNALTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QMetaObject;
class QObject;
class QSignalTransition;
class QState;
#else
typedef struct QByteArray QByteArray;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSignalTransition QSignalTransition;
typedef struct QState QState;
#endif

QSignalTransition* QSignalTransition_new();
QSignalTransition* QSignalTransition_new2(QObject* sender, const char* signal);
QSignalTransition* QSignalTransition_new3(QState* sourceState);
QSignalTransition* QSignalTransition_new4(QObject* sender, const char* signal, QState* sourceState);
QMetaObject* QSignalTransition_MetaObject(const QSignalTransition* self);
void* QSignalTransition_Metacast(QSignalTransition* self, const char* param1);
struct miqt_string* QSignalTransition_Tr(const char* s);
struct miqt_string* QSignalTransition_TrUtf8(const char* s);
QObject* QSignalTransition_SenderObject(const QSignalTransition* self);
void QSignalTransition_SetSenderObject(QSignalTransition* self, QObject* sender);
QByteArray* QSignalTransition_Signal(const QSignalTransition* self);
void QSignalTransition_SetSignal(QSignalTransition* self, QByteArray* signal);
struct miqt_string* QSignalTransition_Tr2(const char* s, const char* c);
struct miqt_string* QSignalTransition_Tr3(const char* s, const char* c, int n);
struct miqt_string* QSignalTransition_TrUtf82(const char* s, const char* c);
struct miqt_string* QSignalTransition_TrUtf83(const char* s, const char* c, int n);
void QSignalTransition_Delete(QSignalTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
