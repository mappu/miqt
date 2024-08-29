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
QState* QState_new2(uintptr_t childMode);
QState* QState_new3(QState* parent);
QState* QState_new4(uintptr_t childMode, QState* parent);
QMetaObject* QState_MetaObject(QState* self);
void QState_Tr(const char* s, char** _out, int* _out_Strlen);
void QState_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QAbstractState* QState_ErrorState(QState* self);
void QState_SetErrorState(QState* self, QAbstractState* state);
void QState_AddTransition(QState* self, QAbstractTransition* transition);
QSignalTransition* QState_AddTransition2(QState* self, QObject* sender, const char* signal, QAbstractState* target);
QAbstractTransition* QState_AddTransitionWithTarget(QState* self, QAbstractState* target);
void QState_RemoveTransition(QState* self, QAbstractTransition* transition);
void QState_Transitions(QState* self, QAbstractTransition*** _out, size_t* _out_len);
QAbstractState* QState_InitialState(QState* self);
void QState_SetInitialState(QState* self, QAbstractState* state);
uintptr_t QState_ChildMode(QState* self);
void QState_SetChildMode(QState* self, uintptr_t mode);
void QState_AssignProperty(QState* self, QObject* object, const char* name, QVariant* value);
void QState_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QState_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QState_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QState_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QState_Delete(QState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
