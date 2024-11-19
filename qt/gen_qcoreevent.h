#pragma once
#ifndef MIQT_QT_GEN_QCOREEVENT_H
#define MIQT_QT_GEN_QCOREEVENT_H

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

void QEvent_new(int typeVal, QEvent** outptr_QEvent);
void QEvent_new2(QEvent* other, QEvent** outptr_QEvent);
void QEvent_OperatorAssign(QEvent* self, QEvent* other);
int QEvent_Type(const QEvent* self);
bool QEvent_Spontaneous(const QEvent* self);
void QEvent_SetAccepted(QEvent* self, bool accepted);
bool QEvent_IsAccepted(const QEvent* self);
void QEvent_Accept(QEvent* self);
void QEvent_Ignore(QEvent* self);
int QEvent_RegisterEventType();
int QEvent_RegisterEventType1(int hint);
void QEvent_Delete(QEvent* self, bool isSubclass);

void QTimerEvent_new(int timerId, QTimerEvent** outptr_QTimerEvent, QEvent** outptr_QEvent);
void QTimerEvent_new2(QTimerEvent* param1, QTimerEvent** outptr_QTimerEvent, QEvent** outptr_QEvent);
int QTimerEvent_TimerId(const QTimerEvent* self);
void QTimerEvent_Delete(QTimerEvent* self, bool isSubclass);

void QChildEvent_new(int typeVal, QObject* child, QChildEvent** outptr_QChildEvent, QEvent** outptr_QEvent);
void QChildEvent_new2(QChildEvent* param1, QChildEvent** outptr_QChildEvent, QEvent** outptr_QEvent);
QObject* QChildEvent_Child(const QChildEvent* self);
bool QChildEvent_Added(const QChildEvent* self);
bool QChildEvent_Polished(const QChildEvent* self);
bool QChildEvent_Removed(const QChildEvent* self);
void QChildEvent_Delete(QChildEvent* self, bool isSubclass);

void QDynamicPropertyChangeEvent_new(struct miqt_string name, QDynamicPropertyChangeEvent** outptr_QDynamicPropertyChangeEvent, QEvent** outptr_QEvent);
void QDynamicPropertyChangeEvent_new2(QDynamicPropertyChangeEvent* param1, QDynamicPropertyChangeEvent** outptr_QDynamicPropertyChangeEvent, QEvent** outptr_QEvent);
struct miqt_string QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self);
void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
