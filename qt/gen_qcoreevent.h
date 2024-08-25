#ifndef GEN_QCOREEVENT_H
#define GEN_QCOREEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QChildEvent;
class QDeferredDeleteEvent;
class QDynamicPropertyChangeEvent;
class QEvent;
class QObject;
class QTimerEvent;
#else
typedef struct QByteArray QByteArray;
typedef struct QChildEvent QChildEvent;
typedef struct QDeferredDeleteEvent QDeferredDeleteEvent;
typedef struct QDynamicPropertyChangeEvent QDynamicPropertyChangeEvent;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QEvent* QEvent_new(QEvent* other);
void QEvent_OperatorAssign(QEvent* self, QEvent* other);
bool QEvent_Spontaneous(QEvent* self);
void QEvent_SetAccepted(QEvent* self, bool accepted);
bool QEvent_IsAccepted(QEvent* self);
void QEvent_Accept(QEvent* self);
void QEvent_Ignore(QEvent* self);
int QEvent_RegisterEventType();
int QEvent_RegisterEventType1(int hint);
void QEvent_Delete(QEvent* self);

QTimerEvent* QTimerEvent_new(int timerId);
QTimerEvent* QTimerEvent_new2(QTimerEvent* param1);
int QTimerEvent_TimerId(QTimerEvent* self);
void QTimerEvent_Delete(QTimerEvent* self);

QChildEvent* QChildEvent_new(QChildEvent* param1);
QObject* QChildEvent_Child(QChildEvent* self);
bool QChildEvent_Added(QChildEvent* self);
bool QChildEvent_Polished(QChildEvent* self);
bool QChildEvent_Removed(QChildEvent* self);
void QChildEvent_Delete(QChildEvent* self);

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(QByteArray* name);
QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new2(QDynamicPropertyChangeEvent* param1);
QByteArray* QDynamicPropertyChangeEvent_PropertyName(QDynamicPropertyChangeEvent* self);
void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self);

QDeferredDeleteEvent* QDeferredDeleteEvent_new();
QDeferredDeleteEvent* QDeferredDeleteEvent_new2(QDeferredDeleteEvent* param1);
int QDeferredDeleteEvent_LoopLevel(QDeferredDeleteEvent* self);
void QDeferredDeleteEvent_Delete(QDeferredDeleteEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
