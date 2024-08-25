#ifndef GEN_QEVENTTRANSITION_H
#define GEN_QEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEventTransition;
class QMetaObject;
class QObject;
class QState;
#else
typedef struct QEventTransition QEventTransition;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
#endif

QEventTransition* QEventTransition_new();
QEventTransition* QEventTransition_new2(QState* sourceState);
QMetaObject* QEventTransition_MetaObject(QEventTransition* self);
void QEventTransition_Tr(char* s, char** _out, int* _out_Strlen);
void QEventTransition_TrUtf8(char* s, char** _out, int* _out_Strlen);
QObject* QEventTransition_EventSource(QEventTransition* self);
void QEventTransition_SetEventSource(QEventTransition* self, QObject* object);
void QEventTransition_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QEventTransition_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QEventTransition_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QEventTransition_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QEventTransition_Delete(QEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
