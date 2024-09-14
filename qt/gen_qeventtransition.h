#ifndef GEN_QEVENTTRANSITION_H
#define GEN_QEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEventTransition;
class QMetaObject;
class QObject;
class QState;
#else
typedef struct QEventTransition QEventTransition;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QState QState;
#endif

QEventTransition* QEventTransition_new();
QEventTransition* QEventTransition_new2(QObject* object, uintptr_t typeVal);
QEventTransition* QEventTransition_new3(QState* sourceState);
QEventTransition* QEventTransition_new4(QObject* object, uintptr_t typeVal, QState* sourceState);
QMetaObject* QEventTransition_MetaObject(const QEventTransition* self);
struct miqt_string* QEventTransition_Tr(const char* s);
struct miqt_string* QEventTransition_TrUtf8(const char* s);
QObject* QEventTransition_EventSource(const QEventTransition* self);
void QEventTransition_SetEventSource(QEventTransition* self, QObject* object);
uintptr_t QEventTransition_EventType(const QEventTransition* self);
void QEventTransition_SetEventType(QEventTransition* self, uintptr_t typeVal);
struct miqt_string* QEventTransition_Tr2(const char* s, const char* c);
struct miqt_string* QEventTransition_Tr3(const char* s, const char* c, int n);
struct miqt_string* QEventTransition_TrUtf82(const char* s, const char* c);
struct miqt_string* QEventTransition_TrUtf83(const char* s, const char* c, int n);
void QEventTransition_Delete(QEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
