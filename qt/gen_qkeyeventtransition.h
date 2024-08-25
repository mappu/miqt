#ifndef GEN_QKEYEVENTTRANSITION_H
#define GEN_QKEYEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QKeyEventTransition;
class QMetaObject;
class QState;
#else
typedef struct QKeyEventTransition QKeyEventTransition;
typedef struct QMetaObject QMetaObject;
typedef struct QState QState;
#endif

QKeyEventTransition* QKeyEventTransition_new();
QKeyEventTransition* QKeyEventTransition_new2(QState* sourceState);
QMetaObject* QKeyEventTransition_MetaObject(QKeyEventTransition* self);
void QKeyEventTransition_Tr(char* s, char** _out, int* _out_Strlen);
void QKeyEventTransition_TrUtf8(char* s, char** _out, int* _out_Strlen);
int QKeyEventTransition_Key(QKeyEventTransition* self);
void QKeyEventTransition_SetKey(QKeyEventTransition* self, int key);
void QKeyEventTransition_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QKeyEventTransition_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QKeyEventTransition_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QKeyEventTransition_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QKeyEventTransition_Delete(QKeyEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
