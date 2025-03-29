#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBARLEGENDMARKER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBARLEGENDMARKER_H

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
class QBarLegendMarker;
class QBarSet;
class QChildEvent;
class QEvent;
class QLegend;
class QLegendMarker;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QBarLegendMarker QBarLegendMarker;
typedef struct QBarSet QBarSet;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBarLegendMarker* QBarLegendMarker_new(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend);
QBarLegendMarker* QBarLegendMarker_new2(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent);
void QBarLegendMarker_virtbase(QBarLegendMarker* src, QLegendMarker** outptr_QLegendMarker);
QMetaObject* QBarLegendMarker_metaObject(const QBarLegendMarker* self);
void* QBarLegendMarker_metacast(QBarLegendMarker* self, const char* param1);
struct miqt_string QBarLegendMarker_tr(const char* s);
int QBarLegendMarker_type(QBarLegendMarker* self);
QAbstractBarSeries* QBarLegendMarker_series(QBarLegendMarker* self);
QBarSet* QBarLegendMarker_barset(QBarLegendMarker* self);
struct miqt_string QBarLegendMarker_tr2(const char* s, const char* c);
struct miqt_string QBarLegendMarker_tr3(const char* s, const char* c, int n);
bool QBarLegendMarker_override_virtual_type(void* self, intptr_t slot);
int QBarLegendMarker_virtualbase_type(void* self);
bool QBarLegendMarker_override_virtual_series(void* self, intptr_t slot);
QAbstractBarSeries* QBarLegendMarker_virtualbase_series(void* self);
bool QBarLegendMarker_override_virtual_event(void* self, intptr_t slot);
bool QBarLegendMarker_virtualbase_event(void* self, QEvent* event);
bool QBarLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot);
bool QBarLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QBarLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot);
void QBarLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QBarLegendMarker_override_virtual_childEvent(void* self, intptr_t slot);
void QBarLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);
bool QBarLegendMarker_override_virtual_customEvent(void* self, intptr_t slot);
void QBarLegendMarker_virtualbase_customEvent(void* self, QEvent* event);
bool QBarLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot);
void QBarLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QBarLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QBarLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QBarLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QBarLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QBarLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QBarLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QBarLegendMarker_delete(QBarLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
