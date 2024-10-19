#ifndef GEN_QKEYEVENTTRANSITION_H
#define GEN_QKEYEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QKeyEventTransition;
class QMetaObject;
class QObject;
class QState;
#else
typedef struct QKeyEventTransition QKeyEventTransition;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
#endif

QKeyEventTransition* QKeyEventTransition_new();
QKeyEventTransition* QKeyEventTransition_new2(QObject* object, int typeVal, int key);
QKeyEventTransition* QKeyEventTransition_new3(QState* sourceState);
QKeyEventTransition* QKeyEventTransition_new4(QObject* object, int typeVal, int key, QState* sourceState);
QMetaObject* QKeyEventTransition_MetaObject(const QKeyEventTransition* self);
void* QKeyEventTransition_Metacast(QKeyEventTransition* self, const char* param1);
struct miqt_string QKeyEventTransition_Tr(const char* s);
struct miqt_string QKeyEventTransition_TrUtf8(const char* s);
int QKeyEventTransition_Key(const QKeyEventTransition* self);
void QKeyEventTransition_SetKey(QKeyEventTransition* self, int key);
int QKeyEventTransition_ModifierMask(const QKeyEventTransition* self);
void QKeyEventTransition_SetModifierMask(QKeyEventTransition* self, int modifiers);
struct miqt_string QKeyEventTransition_Tr2(const char* s, const char* c);
struct miqt_string QKeyEventTransition_Tr3(const char* s, const char* c, int n);
struct miqt_string QKeyEventTransition_TrUtf82(const char* s, const char* c);
struct miqt_string QKeyEventTransition_TrUtf83(const char* s, const char* c, int n);
void QKeyEventTransition_Delete(QKeyEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
