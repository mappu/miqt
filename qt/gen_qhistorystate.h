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
QHistoryState* QHistoryState_new2(uintptr_t typeVal);
QHistoryState* QHistoryState_new3(QState* parent);
QHistoryState* QHistoryState_new4(uintptr_t typeVal, QState* parent);
QMetaObject* QHistoryState_MetaObject(QHistoryState* self);
void QHistoryState_Tr(const char* s, char** _out, int* _out_Strlen);
void QHistoryState_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QAbstractTransition* QHistoryState_DefaultTransition(QHistoryState* self);
void QHistoryState_SetDefaultTransition(QHistoryState* self, QAbstractTransition* transition);
QAbstractState* QHistoryState_DefaultState(QHistoryState* self);
void QHistoryState_SetDefaultState(QHistoryState* self, QAbstractState* state);
uintptr_t QHistoryState_HistoryType(QHistoryState* self);
void QHistoryState_SetHistoryType(QHistoryState* self, uintptr_t typeVal);
void QHistoryState_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QHistoryState_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QHistoryState_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QHistoryState_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QHistoryState_Delete(QHistoryState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
