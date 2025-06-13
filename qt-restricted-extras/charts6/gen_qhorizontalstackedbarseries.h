#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHORIZONTALSTACKEDBARSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHORIZONTALSTACKEDBARSERIES_H

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
class QHorizontalStackedBarSeries;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHorizontalStackedBarSeries QHorizontalStackedBarSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new();
QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new2(QObject* parent);
void QHorizontalStackedBarSeries_virtbase(QHorizontalStackedBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries);
QMetaObject* QHorizontalStackedBarSeries_metaObject(const QHorizontalStackedBarSeries* self);
void* QHorizontalStackedBarSeries_metacast(QHorizontalStackedBarSeries* self, const char* param1);
struct miqt_string QHorizontalStackedBarSeries_tr(const char* s);
int QHorizontalStackedBarSeries_type(const QHorizontalStackedBarSeries* self);
struct miqt_string QHorizontalStackedBarSeries_tr2(const char* s, const char* c);
struct miqt_string QHorizontalStackedBarSeries_tr3(const char* s, const char* c, int n);

bool QHorizontalStackedBarSeries_override_virtual_type(void* self, intptr_t slot);
int QHorizontalStackedBarSeries_virtualbase_type(const void* self);
bool QHorizontalStackedBarSeries_override_virtual_event(void* self, intptr_t slot);
bool QHorizontalStackedBarSeries_virtualbase_event(void* self, QEvent* event);
bool QHorizontalStackedBarSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QHorizontalStackedBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QHorizontalStackedBarSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QHorizontalStackedBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QHorizontalStackedBarSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QHorizontalStackedBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QHorizontalStackedBarSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QHorizontalStackedBarSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QHorizontalStackedBarSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QHorizontalStackedBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QHorizontalStackedBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QHorizontalStackedBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QHorizontalStackedBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QHorizontalStackedBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QHorizontalStackedBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QHorizontalStackedBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QHorizontalStackedBarSeries_delete(QHorizontalStackedBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
