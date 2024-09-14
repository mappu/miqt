#ifndef GEN_QMOUSEEVENTTRANSITION_H
#define GEN_QMOUSEEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QMetaObject* QMouseEventTransition_MetaObject(const QMouseEventTransition* self);
struct miqt_string* QMouseEventTransition_Tr(const char* s);
struct miqt_string* QMouseEventTransition_TrUtf8(const char* s);
uintptr_t QMouseEventTransition_Button(const QMouseEventTransition* self);
void QMouseEventTransition_SetButton(QMouseEventTransition* self, uintptr_t button);
int QMouseEventTransition_ModifierMask(const QMouseEventTransition* self);
void QMouseEventTransition_SetModifierMask(QMouseEventTransition* self, int modifiers);
QPainterPath* QMouseEventTransition_HitTestPath(const QMouseEventTransition* self);
void QMouseEventTransition_SetHitTestPath(QMouseEventTransition* self, QPainterPath* path);
struct miqt_string* QMouseEventTransition_Tr2(const char* s, const char* c);
struct miqt_string* QMouseEventTransition_Tr3(const char* s, const char* c, int n);
struct miqt_string* QMouseEventTransition_TrUtf82(const char* s, const char* c);
struct miqt_string* QMouseEventTransition_TrUtf83(const char* s, const char* c, int n);
void QMouseEventTransition_Delete(QMouseEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
