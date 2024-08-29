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
class QObject;
class QPainterPath;
class QState;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEventTransition QMouseEventTransition;
typedef struct QObject QObject;
typedef struct QPainterPath QPainterPath;
typedef struct QState QState;
#endif

QMouseEventTransition* QMouseEventTransition_new();
QMouseEventTransition* QMouseEventTransition_new2(QObject* object, uintptr_t typeVal, uintptr_t button);
QMouseEventTransition* QMouseEventTransition_new3(QState* sourceState);
QMouseEventTransition* QMouseEventTransition_new4(QObject* object, uintptr_t typeVal, uintptr_t button, QState* sourceState);
QMetaObject* QMouseEventTransition_MetaObject(QMouseEventTransition* self);
void QMouseEventTransition_Tr(const char* s, char** _out, int* _out_Strlen);
void QMouseEventTransition_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QMouseEventTransition_Button(QMouseEventTransition* self);
void QMouseEventTransition_SetButton(QMouseEventTransition* self, uintptr_t button);
int QMouseEventTransition_ModifierMask(QMouseEventTransition* self);
void QMouseEventTransition_SetModifierMask(QMouseEventTransition* self, int modifiers);
QPainterPath* QMouseEventTransition_HitTestPath(QMouseEventTransition* self);
void QMouseEventTransition_SetHitTestPath(QMouseEventTransition* self, QPainterPath* path);
void QMouseEventTransition_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMouseEventTransition_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMouseEventTransition_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMouseEventTransition_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMouseEventTransition_Delete(QMouseEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
