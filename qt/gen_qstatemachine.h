#ifndef GEN_QSTATEMACHINE_H
#define GEN_QSTATEMACHINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAnimation;
class QAbstractState;
class QEvent;
class QMetaObject;
class QObject;
class QStateMachine;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAbstractState QAbstractState;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QStateMachine QStateMachine;
#endif

QStateMachine* QStateMachine_new();
QStateMachine* QStateMachine_new2(QObject* parent);
QMetaObject* QStateMachine_MetaObject(QStateMachine* self);
void QStateMachine_Tr(char* s, char** _out, int* _out_Strlen);
void QStateMachine_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QStateMachine_AddState(QStateMachine* self, QAbstractState* state);
void QStateMachine_RemoveState(QStateMachine* self, QAbstractState* state);
void QStateMachine_ErrorString(QStateMachine* self, char** _out, int* _out_Strlen);
void QStateMachine_ClearError(QStateMachine* self);
bool QStateMachine_IsRunning(QStateMachine* self);
bool QStateMachine_IsAnimated(QStateMachine* self);
void QStateMachine_SetAnimated(QStateMachine* self, bool enabled);
void QStateMachine_AddDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation);
void QStateMachine_DefaultAnimations(QStateMachine* self, QAbstractAnimation*** _out, size_t* _out_len);
void QStateMachine_RemoveDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation);
int QStateMachine_PostDelayedEvent(QStateMachine* self, QEvent* event, int delay);
bool QStateMachine_CancelDelayedEvent(QStateMachine* self, int id);
bool QStateMachine_EventFilter(QStateMachine* self, QObject* watched, QEvent* event);
void QStateMachine_Start(QStateMachine* self);
void QStateMachine_Stop(QStateMachine* self);
void QStateMachine_SetRunning(QStateMachine* self, bool running);
void QStateMachine_RunningChanged(QStateMachine* self, bool running);
void QStateMachine_connect_RunningChanged(QStateMachine* self, void* slot);
void QStateMachine_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QStateMachine_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QStateMachine_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QStateMachine_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QStateMachine_Delete(QStateMachine* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
