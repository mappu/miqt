#pragma once
#ifndef MIQT_QT6_GEN_QCOREEVENT_H
#define MIQT_QT6_GEN_QCOREEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QChildEvent;
class QDynamicPropertyChangeEvent;
class QEvent;
class QObject;
class QTimerEvent;
#else
typedef struct QByteArray QByteArray;
typedef struct QChildEvent QChildEvent;
typedef struct QDynamicPropertyChangeEvent QDynamicPropertyChangeEvent;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QEvent* QEvent_new(int typeVal);
int QEvent_Type(const QEvent* self);
bool QEvent_Spontaneous(const QEvent* self);
void QEvent_SetAccepted(QEvent* self, bool accepted);
bool QEvent_IsAccepted(const QEvent* self);
void QEvent_Accept(QEvent* self);
void QEvent_Ignore(QEvent* self);
bool QEvent_IsInputEvent(const QEvent* self);
bool QEvent_IsPointerEvent(const QEvent* self);
bool QEvent_IsSinglePointEvent(const QEvent* self);
int QEvent_RegisterEventType();
QEvent* QEvent_Clone(const QEvent* self);
int QEvent_RegisterEventType1(int hint);
void QEvent_Delete(QEvent* self);

QTimerEvent* QTimerEvent_new(int timerId);
QTimerEvent* QTimerEvent_Clone(const QTimerEvent* self);
int QTimerEvent_TimerId(const QTimerEvent* self);
void QTimerEvent_Delete(QTimerEvent* self);

QChildEvent* QChildEvent_new(int typeVal, QObject* child);
QChildEvent* QChildEvent_Clone(const QChildEvent* self);
QObject* QChildEvent_Child(const QChildEvent* self);
bool QChildEvent_Added(const QChildEvent* self);
bool QChildEvent_Polished(const QChildEvent* self);
bool QChildEvent_Removed(const QChildEvent* self);
void QChildEvent_Delete(QChildEvent* self);

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(struct miqt_string name);
QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_Clone(const QDynamicPropertyChangeEvent* self);
struct miqt_string QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self);
void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
