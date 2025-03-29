#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHORIZONTALBARSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHORIZONTALBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractBarSeries;
class QAbstractSeries;
class QChildEvent;
class QEvent;
class QHorizontalBarSeries;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHorizontalBarSeries QHorizontalBarSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QHorizontalBarSeries* QHorizontalBarSeries_new();
QHorizontalBarSeries* QHorizontalBarSeries_new2(QObject* parent);
void QHorizontalBarSeries_virtbase(QHorizontalBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries);
QMetaObject* QHorizontalBarSeries_metaObject(const QHorizontalBarSeries* self);
void* QHorizontalBarSeries_metacast(QHorizontalBarSeries* self, const char* param1);
struct miqt_string QHorizontalBarSeries_tr(const char* s);
int QHorizontalBarSeries_type(const QHorizontalBarSeries* self);
struct miqt_string QHorizontalBarSeries_tr2(const char* s, const char* c);
struct miqt_string QHorizontalBarSeries_tr3(const char* s, const char* c, int n);
bool QHorizontalBarSeries_override_virtual_type(void* self, intptr_t slot);
int QHorizontalBarSeries_virtualbase_type(const void* self);
bool QHorizontalBarSeries_override_virtual_event(void* self, intptr_t slot);
bool QHorizontalBarSeries_virtualbase_event(void* self, QEvent* event);
bool QHorizontalBarSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QHorizontalBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QHorizontalBarSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QHorizontalBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QHorizontalBarSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QHorizontalBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QHorizontalBarSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QHorizontalBarSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QHorizontalBarSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QHorizontalBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QHorizontalBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QHorizontalBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QHorizontalBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QHorizontalBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QHorizontalBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QHorizontalBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QHorizontalBarSeries_delete(QHorizontalBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
