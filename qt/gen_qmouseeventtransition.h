#ifndef GEN_QMOUSEEVENTTRANSITION_H
#define GEN_QMOUSEEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QMouseEventTransition;
class QPainterPath;
class QState;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEventTransition QMouseEventTransition;
typedef struct QPainterPath QPainterPath;
typedef struct QState QState;
#endif

QMouseEventTransition* QMouseEventTransition_new();
QMouseEventTransition* QMouseEventTransition_new2(QState* sourceState);
QMetaObject* QMouseEventTransition_MetaObject(QMouseEventTransition* self);
void QMouseEventTransition_Tr(char* s, char** _out, int* _out_Strlen);
void QMouseEventTransition_TrUtf8(char* s, char** _out, int* _out_Strlen);
QPainterPath* QMouseEventTransition_HitTestPath(QMouseEventTransition* self);
void QMouseEventTransition_SetHitTestPath(QMouseEventTransition* self, QPainterPath* path);
void QMouseEventTransition_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QMouseEventTransition_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QMouseEventTransition_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QMouseEventTransition_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QMouseEventTransition_Delete(QMouseEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
