#ifndef GEN_QSIGNALTRANSITION_H
#define GEN_QSIGNALTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QSignalTransition* QSignalTransition_new2(QObject* sender, char* signal);
QSignalTransition* QSignalTransition_new3(QState* sourceState);
QSignalTransition* QSignalTransition_new4(QObject* sender, char* signal, QState* sourceState);
QMetaObject* QSignalTransition_MetaObject(QSignalTransition* self);
void QSignalTransition_Tr(char* s, char** _out, int* _out_Strlen);
void QSignalTransition_TrUtf8(char* s, char** _out, int* _out_Strlen);
QObject* QSignalTransition_SenderObject(QSignalTransition* self);
void QSignalTransition_SetSenderObject(QSignalTransition* self, QObject* sender);
QByteArray* QSignalTransition_Signal(QSignalTransition* self);
void QSignalTransition_SetSignal(QSignalTransition* self, QByteArray* signal);
void QSignalTransition_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSignalTransition_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSignalTransition_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSignalTransition_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSignalTransition_Delete(QSignalTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
