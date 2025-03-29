#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QXYLEGENDMARKER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QXYLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QLegend;
class QLegendMarker;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QXYLegendMarker;
class QXYSeries;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QXYLegendMarker QXYLegendMarker;
typedef struct QXYSeries QXYSeries;
#endif

QXYLegendMarker* QXYLegendMarker_new(QXYSeries* series, QLegend* legend);
QXYLegendMarker* QXYLegendMarker_new2(QXYSeries* series, QLegend* legend, QObject* parent);
void QXYLegendMarker_virtbase(QXYLegendMarker* src, QLegendMarker** outptr_QLegendMarker);
QMetaObject* QXYLegendMarker_metaObject(const QXYLegendMarker* self);
void* QXYLegendMarker_metacast(QXYLegendMarker* self, const char* param1);
struct miqt_string QXYLegendMarker_tr(const char* s);
int QXYLegendMarker_type(QXYLegendMarker* self);
QXYSeries* QXYLegendMarker_series(QXYLegendMarker* self);
struct miqt_string QXYLegendMarker_tr2(const char* s, const char* c);
struct miqt_string QXYLegendMarker_tr3(const char* s, const char* c, int n);
bool QXYLegendMarker_override_virtual_type(void* self, intptr_t slot);
int QXYLegendMarker_virtualbase_type(void* self);
bool QXYLegendMarker_override_virtual_series(void* self, intptr_t slot);
QXYSeries* QXYLegendMarker_virtualbase_series(void* self);
bool QXYLegendMarker_override_virtual_event(void* self, intptr_t slot);
bool QXYLegendMarker_virtualbase_event(void* self, QEvent* event);
bool QXYLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot);
bool QXYLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QXYLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot);
void QXYLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QXYLegendMarker_override_virtual_childEvent(void* self, intptr_t slot);
void QXYLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);
bool QXYLegendMarker_override_virtual_customEvent(void* self, intptr_t slot);
void QXYLegendMarker_virtualbase_customEvent(void* self, QEvent* event);
bool QXYLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot);
void QXYLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QXYLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QXYLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QXYLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QXYLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QXYLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QXYLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QXYLegendMarker_delete(QXYLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
