#ifndef GEN_QFINALSTATE_H
#define GEN_QFINALSTATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFinalState;
class QMetaObject;
class QState;
#else
typedef struct QFinalState QFinalState;
typedef struct QMetaObject QMetaObject;
typedef struct QState QState;
#endif

QFinalState* QFinalState_new();
QFinalState* QFinalState_new2(QState* parent);
QMetaObject* QFinalState_MetaObject(QFinalState* self);
void QFinalState_Tr(char* s, char** _out, int* _out_Strlen);
void QFinalState_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QFinalState_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QFinalState_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFinalState_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QFinalState_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFinalState_Delete(QFinalState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
