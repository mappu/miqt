#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QLOGVALUEAXIS_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QLOGVALUEAXIS_H

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
class QEvent;
class QLogValueAxis;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLogValueAxis QLogValueAxis;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QLogValueAxis* QLogValueAxis_new();
QLogValueAxis* QLogValueAxis_new2(QObject* parent);
void QLogValueAxis_virtbase(QLogValueAxis* src, QAbstractAxis** outptr_QAbstractAxis);
QMetaObject* QLogValueAxis_metaObject(const QLogValueAxis* self);
void* QLogValueAxis_metacast(QLogValueAxis* self, const char* param1);
struct miqt_string QLogValueAxis_tr(const char* s);
int QLogValueAxis_type(const QLogValueAxis* self);
void QLogValueAxis_setMin(QLogValueAxis* self, double min);
double QLogValueAxis_min(const QLogValueAxis* self);
void QLogValueAxis_setMax(QLogValueAxis* self, double max);
double QLogValueAxis_max(const QLogValueAxis* self);
void QLogValueAxis_setRange(QLogValueAxis* self, double min, double max);
void QLogValueAxis_setLabelFormat(QLogValueAxis* self, struct miqt_string format);
struct miqt_string QLogValueAxis_labelFormat(const QLogValueAxis* self);
void QLogValueAxis_setBase(QLogValueAxis* self, double base);
double QLogValueAxis_base(const QLogValueAxis* self);
int QLogValueAxis_tickCount(const QLogValueAxis* self);
void QLogValueAxis_setMinorTickCount(QLogValueAxis* self, int minorTickCount);
int QLogValueAxis_minorTickCount(const QLogValueAxis* self);
void QLogValueAxis_minChanged(QLogValueAxis* self, double min);
void QLogValueAxis_connect_minChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_maxChanged(QLogValueAxis* self, double max);
void QLogValueAxis_connect_maxChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_rangeChanged(QLogValueAxis* self, double min, double max);
void QLogValueAxis_connect_rangeChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_labelFormatChanged(QLogValueAxis* self, struct miqt_string format);
void QLogValueAxis_connect_labelFormatChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_baseChanged(QLogValueAxis* self, double base);
void QLogValueAxis_connect_baseChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_tickCountChanged(QLogValueAxis* self, int tickCount);
void QLogValueAxis_connect_tickCountChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_minorTickCountChanged(QLogValueAxis* self, int minorTickCount);
void QLogValueAxis_connect_minorTickCountChanged(QLogValueAxis* self, intptr_t slot);
struct miqt_string QLogValueAxis_tr2(const char* s, const char* c);
struct miqt_string QLogValueAxis_tr3(const char* s, const char* c, int n);
bool QLogValueAxis_override_virtual_type(void* self, intptr_t slot);
int QLogValueAxis_virtualbase_type(const void* self);
bool QLogValueAxis_override_virtual_event(void* self, intptr_t slot);
bool QLogValueAxis_virtualbase_event(void* self, QEvent* event);
bool QLogValueAxis_override_virtual_eventFilter(void* self, intptr_t slot);
bool QLogValueAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QLogValueAxis_override_virtual_timerEvent(void* self, intptr_t slot);
void QLogValueAxis_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QLogValueAxis_override_virtual_childEvent(void* self, intptr_t slot);
void QLogValueAxis_virtualbase_childEvent(void* self, QChildEvent* event);
bool QLogValueAxis_override_virtual_customEvent(void* self, intptr_t slot);
void QLogValueAxis_virtualbase_customEvent(void* self, QEvent* event);
bool QLogValueAxis_override_virtual_connectNotify(void* self, intptr_t slot);
void QLogValueAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QLogValueAxis_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QLogValueAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QLogValueAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QLogValueAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QLogValueAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QLogValueAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QLogValueAxis_delete(QLogValueAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
