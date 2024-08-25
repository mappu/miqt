#ifndef GEN_QSTATE_H
#define GEN_QSTATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractState;
class QAbstractTransition;
class QMetaObject;
class QObject;
class QSignalTransition;
class QState;
class QVariant;
#else
typedef struct QAbstractState QAbstractState;
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSignalTransition QSignalTransition;
typedef struct QState QState;
typedef struct QVariant QVariant;
#endif

QState* QState_new();
QState* QState_new2(QState* parent);
QMetaObject* QState_MetaObject(QState* self);
void QState_Tr(char* s, char** _out, int* _out_Strlen);
void QState_TrUtf8(char* s, char** _out, int* _out_Strlen);
QAbstractState* QState_ErrorState(QState* self);
void QState_SetErrorState(QState* self, QAbstractState* state);
void QState_AddTransition(QState* self, QAbstractTransition* transition);
QSignalTransition* QState_AddTransition2(QState* self, QObject* sender, char* signal, QAbstractState* target);
QAbstractTransition* QState_AddTransitionWithTarget(QState* self, QAbstractState* target);
void QState_RemoveTransition(QState* self, QAbstractTransition* transition);
void QState_Transitions(QState* self, QAbstractTransition*** _out, size_t* _out_len);
QAbstractState* QState_InitialState(QState* self);
void QState_SetInitialState(QState* self, QAbstractState* state);
void QState_AssignProperty(QState* self, QObject* object, char* name, QVariant* value);
void QState_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QState_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QState_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QState_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QState_Delete(QState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
