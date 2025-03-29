#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QDATETIMEAXIS_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QDATETIMEAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAxis;
class QChildEvent;
class QDateTime;
class QDateTimeAxis;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QDateTimeAxis QDateTimeAxis;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QDateTimeAxis* QDateTimeAxis_new();
QDateTimeAxis* QDateTimeAxis_new2(QObject* parent);
void QDateTimeAxis_virtbase(QDateTimeAxis* src, QAbstractAxis** outptr_QAbstractAxis);
QMetaObject* QDateTimeAxis_metaObject(const QDateTimeAxis* self);
void* QDateTimeAxis_metacast(QDateTimeAxis* self, const char* param1);
struct miqt_string QDateTimeAxis_tr(const char* s);
int QDateTimeAxis_type(const QDateTimeAxis* self);
void QDateTimeAxis_setMin(QDateTimeAxis* self, QDateTime* min);
QDateTime* QDateTimeAxis_min(const QDateTimeAxis* self);
void QDateTimeAxis_setMax(QDateTimeAxis* self, QDateTime* max);
QDateTime* QDateTimeAxis_max(const QDateTimeAxis* self);
void QDateTimeAxis_setRange(QDateTimeAxis* self, QDateTime* min, QDateTime* max);
void QDateTimeAxis_setFormat(QDateTimeAxis* self, struct miqt_string format);
struct miqt_string QDateTimeAxis_format(const QDateTimeAxis* self);
void QDateTimeAxis_setTickCount(QDateTimeAxis* self, int count);
int QDateTimeAxis_tickCount(const QDateTimeAxis* self);
void QDateTimeAxis_minChanged(QDateTimeAxis* self, QDateTime* min);
void QDateTimeAxis_connect_minChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_maxChanged(QDateTimeAxis* self, QDateTime* max);
void QDateTimeAxis_connect_maxChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_rangeChanged(QDateTimeAxis* self, QDateTime* min, QDateTime* max);
void QDateTimeAxis_connect_rangeChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_formatChanged(QDateTimeAxis* self, struct miqt_string format);
void QDateTimeAxis_connect_formatChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_tickCountChanged(QDateTimeAxis* self, int tick);
void QDateTimeAxis_connect_tickCountChanged(QDateTimeAxis* self, intptr_t slot);
struct miqt_string QDateTimeAxis_tr2(const char* s, const char* c);
struct miqt_string QDateTimeAxis_tr3(const char* s, const char* c, int n);
bool QDateTimeAxis_override_virtual_type(void* self, intptr_t slot);
int QDateTimeAxis_virtualbase_type(const void* self);
bool QDateTimeAxis_override_virtual_event(void* self, intptr_t slot);
bool QDateTimeAxis_virtualbase_event(void* self, QEvent* event);
bool QDateTimeAxis_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDateTimeAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDateTimeAxis_override_virtual_timerEvent(void* self, intptr_t slot);
void QDateTimeAxis_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDateTimeAxis_override_virtual_childEvent(void* self, intptr_t slot);
void QDateTimeAxis_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDateTimeAxis_override_virtual_customEvent(void* self, intptr_t slot);
void QDateTimeAxis_virtualbase_customEvent(void* self, QEvent* event);
bool QDateTimeAxis_override_virtual_connectNotify(void* self, intptr_t slot);
void QDateTimeAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDateTimeAxis_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDateTimeAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QDateTimeAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDateTimeAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDateTimeAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDateTimeAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QDateTimeAxis_delete(QDateTimeAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
