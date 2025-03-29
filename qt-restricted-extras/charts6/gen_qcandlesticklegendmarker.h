#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCANDLESTICKLEGENDMARKER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCANDLESTICKLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCandlestickLegendMarker;
class QCandlestickSeries;
class QChildEvent;
class QEvent;
class QLegend;
class QLegendMarker;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QCandlestickLegendMarker QCandlestickLegendMarker;
typedef struct QCandlestickSeries QCandlestickSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QCandlestickLegendMarker* QCandlestickLegendMarker_new(QCandlestickSeries* series, QLegend* legend);
QCandlestickLegendMarker* QCandlestickLegendMarker_new2(QCandlestickSeries* series, QLegend* legend, QObject* parent);
void QCandlestickLegendMarker_virtbase(QCandlestickLegendMarker* src, QLegendMarker** outptr_QLegendMarker);
QMetaObject* QCandlestickLegendMarker_metaObject(const QCandlestickLegendMarker* self);
void* QCandlestickLegendMarker_metacast(QCandlestickLegendMarker* self, const char* param1);
struct miqt_string QCandlestickLegendMarker_tr(const char* s);
int QCandlestickLegendMarker_type(QCandlestickLegendMarker* self);
QCandlestickSeries* QCandlestickLegendMarker_series(QCandlestickLegendMarker* self);
struct miqt_string QCandlestickLegendMarker_tr2(const char* s, const char* c);
struct miqt_string QCandlestickLegendMarker_tr3(const char* s, const char* c, int n);
bool QCandlestickLegendMarker_override_virtual_type(void* self, intptr_t slot);
int QCandlestickLegendMarker_virtualbase_type(void* self);
bool QCandlestickLegendMarker_override_virtual_series(void* self, intptr_t slot);
QCandlestickSeries* QCandlestickLegendMarker_virtualbase_series(void* self);
bool QCandlestickLegendMarker_override_virtual_event(void* self, intptr_t slot);
bool QCandlestickLegendMarker_virtualbase_event(void* self, QEvent* event);
bool QCandlestickLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCandlestickLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QCandlestickLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot);
void QCandlestickLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QCandlestickLegendMarker_override_virtual_childEvent(void* self, intptr_t slot);
void QCandlestickLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCandlestickLegendMarker_override_virtual_customEvent(void* self, intptr_t slot);
void QCandlestickLegendMarker_virtualbase_customEvent(void* self, QEvent* event);
bool QCandlestickLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot);
void QCandlestickLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCandlestickLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCandlestickLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QCandlestickLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QCandlestickLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QCandlestickLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QCandlestickLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QCandlestickLegendMarker_delete(QCandlestickLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
