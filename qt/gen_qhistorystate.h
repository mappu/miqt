#ifndef GEN_QHISTORYSTATE_H
#define GEN_QHISTORYSTATE_H

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
class QHistoryState;
class QMetaObject;
class QState;
#else
typedef struct QAbstractState QAbstractState;
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QHistoryState QHistoryState;
typedef struct QMetaObject QMetaObject;
typedef struct QState QState;
#endif

QHistoryState* QHistoryState_new();
QHistoryState* QHistoryState_new2(QState* parent);
QMetaObject* QHistoryState_MetaObject(QHistoryState* self);
void QHistoryState_Tr(char* s, char** _out, int* _out_Strlen);
void QHistoryState_TrUtf8(char* s, char** _out, int* _out_Strlen);
QAbstractTransition* QHistoryState_DefaultTransition(QHistoryState* self);
void QHistoryState_SetDefaultTransition(QHistoryState* self, QAbstractTransition* transition);
QAbstractState* QHistoryState_DefaultState(QHistoryState* self);
void QHistoryState_SetDefaultState(QHistoryState* self, QAbstractState* state);
void QHistoryState_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QHistoryState_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QHistoryState_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QHistoryState_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QHistoryState_Delete(QHistoryState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
