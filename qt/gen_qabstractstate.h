#ifndef GEN_QABSTRACTSTATE_H
#define GEN_QABSTRACTSTATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractState;
class QMetaObject;
class QState;
class QStateMachine;
#else
typedef struct QAbstractState QAbstractState;
typedef struct QMetaObject QMetaObject;
typedef struct QState QState;
typedef struct QStateMachine QStateMachine;
#endif

QMetaObject* QAbstractState_MetaObject(QAbstractState* self);
void QAbstractState_Tr(char* s, char** _out, int* _out_Strlen);
void QAbstractState_TrUtf8(char* s, char** _out, int* _out_Strlen);
QState* QAbstractState_ParentState(QAbstractState* self);
QStateMachine* QAbstractState_Machine(QAbstractState* self);
bool QAbstractState_Active(QAbstractState* self);
void QAbstractState_ActiveChanged(QAbstractState* self, bool active);
void QAbstractState_connect_ActiveChanged(QAbstractState* self, void* slot);
void QAbstractState_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractState_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAbstractState_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractState_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAbstractState_Delete(QAbstractState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
