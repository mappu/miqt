#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPIELEGENDMARKER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPIELEGENDMARKER_H

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
class QPieLegendMarker;
class QPieSeries;
class QPieSlice;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPieLegendMarker QPieLegendMarker;
typedef struct QPieSeries QPieSeries;
typedef struct QPieSlice QPieSlice;
typedef struct QTimerEvent QTimerEvent;
#endif

QPieLegendMarker* QPieLegendMarker_new(QPieSeries* series, QPieSlice* slice, QLegend* legend);
QPieLegendMarker* QPieLegendMarker_new2(QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent);
void QPieLegendMarker_virtbase(QPieLegendMarker* src, QLegendMarker** outptr_QLegendMarker);
QMetaObject* QPieLegendMarker_metaObject(const QPieLegendMarker* self);
void* QPieLegendMarker_metacast(QPieLegendMarker* self, const char* param1);
struct miqt_string QPieLegendMarker_tr(const char* s);
int QPieLegendMarker_type(QPieLegendMarker* self);
QPieSeries* QPieLegendMarker_series(QPieLegendMarker* self);
QPieSlice* QPieLegendMarker_slice(QPieLegendMarker* self);
struct miqt_string QPieLegendMarker_tr2(const char* s, const char* c);
struct miqt_string QPieLegendMarker_tr3(const char* s, const char* c, int n);
bool QPieLegendMarker_override_virtual_type(void* self, intptr_t slot);
int QPieLegendMarker_virtualbase_type(void* self);
bool QPieLegendMarker_override_virtual_series(void* self, intptr_t slot);
QPieSeries* QPieLegendMarker_virtualbase_series(void* self);
bool QPieLegendMarker_override_virtual_event(void* self, intptr_t slot);
bool QPieLegendMarker_virtualbase_event(void* self, QEvent* event);
bool QPieLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPieLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPieLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot);
void QPieLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPieLegendMarker_override_virtual_childEvent(void* self, intptr_t slot);
void QPieLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPieLegendMarker_override_virtual_customEvent(void* self, intptr_t slot);
void QPieLegendMarker_virtualbase_customEvent(void* self, QEvent* event);
bool QPieLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot);
void QPieLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPieLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPieLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QPieLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPieLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPieLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPieLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QPieLegendMarker_delete(QPieLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
