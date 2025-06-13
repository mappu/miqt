#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBOXPLOTLEGENDMARKER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBOXPLOTLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBoxPlotLegendMarker;
class QBoxPlotSeries;
class QChildEvent;
class QEvent;
class QLegend;
class QLegendMarker;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QBoxPlotLegendMarker QBoxPlotLegendMarker;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBoxPlotLegendMarker* QBoxPlotLegendMarker_new(QBoxPlotSeries* series, QLegend* legend);
QBoxPlotLegendMarker* QBoxPlotLegendMarker_new2(QBoxPlotSeries* series, QLegend* legend, QObject* parent);
void QBoxPlotLegendMarker_virtbase(QBoxPlotLegendMarker* src, QLegendMarker** outptr_QLegendMarker);
QMetaObject* QBoxPlotLegendMarker_metaObject(const QBoxPlotLegendMarker* self);
void* QBoxPlotLegendMarker_metacast(QBoxPlotLegendMarker* self, const char* param1);
struct miqt_string QBoxPlotLegendMarker_tr(const char* s);
int QBoxPlotLegendMarker_type(QBoxPlotLegendMarker* self);
QBoxPlotSeries* QBoxPlotLegendMarker_series(QBoxPlotLegendMarker* self);
struct miqt_string QBoxPlotLegendMarker_tr2(const char* s, const char* c);
struct miqt_string QBoxPlotLegendMarker_tr3(const char* s, const char* c, int n);

bool QBoxPlotLegendMarker_override_virtual_type(void* self, intptr_t slot);
int QBoxPlotLegendMarker_virtualbase_type(void* self);
bool QBoxPlotLegendMarker_override_virtual_series(void* self, intptr_t slot);
QBoxPlotSeries* QBoxPlotLegendMarker_virtualbase_series(void* self);
bool QBoxPlotLegendMarker_override_virtual_event(void* self, intptr_t slot);
bool QBoxPlotLegendMarker_virtualbase_event(void* self, QEvent* event);
bool QBoxPlotLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot);
bool QBoxPlotLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QBoxPlotLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot);
void QBoxPlotLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QBoxPlotLegendMarker_override_virtual_childEvent(void* self, intptr_t slot);
void QBoxPlotLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);
bool QBoxPlotLegendMarker_override_virtual_customEvent(void* self, intptr_t slot);
void QBoxPlotLegendMarker_virtualbase_customEvent(void* self, QEvent* event);
bool QBoxPlotLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot);
void QBoxPlotLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QBoxPlotLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QBoxPlotLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QBoxPlotLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QBoxPlotLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QBoxPlotLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QBoxPlotLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QBoxPlotLegendMarker_delete(QBoxPlotLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
