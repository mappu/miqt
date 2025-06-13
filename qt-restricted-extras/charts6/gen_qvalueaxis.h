#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVALUEAXIS_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVALUEAXIS_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QValueAxis;
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValueAxis QValueAxis;
#endif

QValueAxis* QValueAxis_new();
QValueAxis* QValueAxis_new2(QObject* parent);
void QValueAxis_virtbase(QValueAxis* src, QAbstractAxis** outptr_QAbstractAxis);
QMetaObject* QValueAxis_metaObject(const QValueAxis* self);
void* QValueAxis_metacast(QValueAxis* self, const char* param1);
struct miqt_string QValueAxis_tr(const char* s);
int QValueAxis_type(const QValueAxis* self);
void QValueAxis_setMin(QValueAxis* self, double min);
double QValueAxis_min(const QValueAxis* self);
void QValueAxis_setMax(QValueAxis* self, double max);
double QValueAxis_max(const QValueAxis* self);
void QValueAxis_setRange(QValueAxis* self, double min, double max);
void QValueAxis_setTickCount(QValueAxis* self, int count);
int QValueAxis_tickCount(const QValueAxis* self);
void QValueAxis_setMinorTickCount(QValueAxis* self, int count);
int QValueAxis_minorTickCount(const QValueAxis* self);
void QValueAxis_setTickAnchor(QValueAxis* self, double anchor);
double QValueAxis_tickAnchor(const QValueAxis* self);
void QValueAxis_setTickInterval(QValueAxis* self, double insterval);
double QValueAxis_tickInterval(const QValueAxis* self);
void QValueAxis_setTickType(QValueAxis* self, int type);
int QValueAxis_tickType(const QValueAxis* self);
void QValueAxis_setLabelFormat(QValueAxis* self, struct miqt_string format);
struct miqt_string QValueAxis_labelFormat(const QValueAxis* self);
void QValueAxis_applyNiceNumbers(QValueAxis* self);
void QValueAxis_minChanged(QValueAxis* self, double min);
void QValueAxis_connect_minChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_maxChanged(QValueAxis* self, double max);
void QValueAxis_connect_maxChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_rangeChanged(QValueAxis* self, double min, double max);
void QValueAxis_connect_rangeChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_tickCountChanged(QValueAxis* self, int tickCount);
void QValueAxis_connect_tickCountChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_minorTickCountChanged(QValueAxis* self, int tickCount);
void QValueAxis_connect_minorTickCountChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_labelFormatChanged(QValueAxis* self, struct miqt_string format);
void QValueAxis_connect_labelFormatChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_tickIntervalChanged(QValueAxis* self, double interval);
void QValueAxis_connect_tickIntervalChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_tickAnchorChanged(QValueAxis* self, double anchor);
void QValueAxis_connect_tickAnchorChanged(QValueAxis* self, intptr_t slot);
void QValueAxis_tickTypeChanged(QValueAxis* self, int type);
void QValueAxis_connect_tickTypeChanged(QValueAxis* self, intptr_t slot);
struct miqt_string QValueAxis_tr2(const char* s, const char* c);
struct miqt_string QValueAxis_tr3(const char* s, const char* c, int n);

bool QValueAxis_override_virtual_type(void* self, intptr_t slot);
int QValueAxis_virtualbase_type(const void* self);
bool QValueAxis_override_virtual_event(void* self, intptr_t slot);
bool QValueAxis_virtualbase_event(void* self, QEvent* event);
bool QValueAxis_override_virtual_eventFilter(void* self, intptr_t slot);
bool QValueAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QValueAxis_override_virtual_timerEvent(void* self, intptr_t slot);
void QValueAxis_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QValueAxis_override_virtual_childEvent(void* self, intptr_t slot);
void QValueAxis_virtualbase_childEvent(void* self, QChildEvent* event);
bool QValueAxis_override_virtual_customEvent(void* self, intptr_t slot);
void QValueAxis_virtualbase_customEvent(void* self, QEvent* event);
bool QValueAxis_override_virtual_connectNotify(void* self, intptr_t slot);
void QValueAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QValueAxis_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QValueAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QValueAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QValueAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QValueAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QValueAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QValueAxis_delete(QValueAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
