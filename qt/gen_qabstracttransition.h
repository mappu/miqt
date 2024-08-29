#ifndef GEN_QABSTRACTTRANSITION_H
#define GEN_QABSTRACTTRANSITION_H

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
class QAbstractTransition;
class QMetaObject;
class QState;
class QStateMachine;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAbstractState QAbstractState;
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QMetaObject QMetaObject;
typedef struct QState QState;
typedef struct QStateMachine QStateMachine;
#endif

QMetaObject* QAbstractTransition_MetaObject(QAbstractTransition* self);
void QAbstractTransition_Tr(const char* s, char** _out, int* _out_Strlen);
void QAbstractTransition_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QState* QAbstractTransition_SourceState(QAbstractTransition* self);
QAbstractState* QAbstractTransition_TargetState(QAbstractTransition* self);
void QAbstractTransition_SetTargetState(QAbstractTransition* self, QAbstractState* target);
void QAbstractTransition_TargetStates(QAbstractTransition* self, QAbstractState*** _out, size_t* _out_len);
void QAbstractTransition_SetTargetStates(QAbstractTransition* self, QAbstractState** targets, size_t targets_len);
uintptr_t QAbstractTransition_TransitionType(QAbstractTransition* self);
void QAbstractTransition_SetTransitionType(QAbstractTransition* self, uintptr_t typeVal);
QStateMachine* QAbstractTransition_Machine(QAbstractTransition* self);
void QAbstractTransition_AddAnimation(QAbstractTransition* self, QAbstractAnimation* animation);
void QAbstractTransition_RemoveAnimation(QAbstractTransition* self, QAbstractAnimation* animation);
void QAbstractTransition_Animations(QAbstractTransition* self, QAbstractAnimation*** _out, size_t* _out_len);
void QAbstractTransition_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractTransition_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractTransition_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractTransition_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractTransition_Delete(QAbstractTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
