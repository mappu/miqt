#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QAREALEGENDMARKER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QAREALEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAreaLegendMarker;
class QAreaSeries;
class QChildEvent;
class QEvent;
class QLegend;
class QLegendMarker;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAreaLegendMarker QAreaLegendMarker;
typedef struct QAreaSeries QAreaSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAreaLegendMarker* QAreaLegendMarker_new(QAreaSeries* series, QLegend* legend);
QAreaLegendMarker* QAreaLegendMarker_new2(QAreaSeries* series, QLegend* legend, QObject* parent);
void QAreaLegendMarker_virtbase(QAreaLegendMarker* src, QLegendMarker** outptr_QLegendMarker);
QMetaObject* QAreaLegendMarker_metaObject(const QAreaLegendMarker* self);
void* QAreaLegendMarker_metacast(QAreaLegendMarker* self, const char* param1);
struct miqt_string QAreaLegendMarker_tr(const char* s);
int QAreaLegendMarker_type(QAreaLegendMarker* self);
QAreaSeries* QAreaLegendMarker_series(QAreaLegendMarker* self);
struct miqt_string QAreaLegendMarker_tr2(const char* s, const char* c);
struct miqt_string QAreaLegendMarker_tr3(const char* s, const char* c, int n);
bool QAreaLegendMarker_override_virtual_type(void* self, intptr_t slot);
int QAreaLegendMarker_virtualbase_type(void* self);
bool QAreaLegendMarker_override_virtual_series(void* self, intptr_t slot);
QAreaSeries* QAreaLegendMarker_virtualbase_series(void* self);
bool QAreaLegendMarker_override_virtual_event(void* self, intptr_t slot);
bool QAreaLegendMarker_virtualbase_event(void* self, QEvent* event);
bool QAreaLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAreaLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAreaLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot);
void QAreaLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAreaLegendMarker_override_virtual_childEvent(void* self, intptr_t slot);
void QAreaLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAreaLegendMarker_override_virtual_customEvent(void* self, intptr_t slot);
void QAreaLegendMarker_virtualbase_customEvent(void* self, QEvent* event);
bool QAreaLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot);
void QAreaLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAreaLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAreaLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QAreaLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAreaLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAreaLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAreaLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QAreaLegendMarker_delete(QAreaLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
