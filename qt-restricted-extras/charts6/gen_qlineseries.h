#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QLINESERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QLINESERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSeries;
class QBrush;
class QChildEvent;
class QColor;
class QEvent;
class QLineSeries;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPen;
class QTimerEvent;
class QXYSeries;
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QLineSeries QLineSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QTimerEvent QTimerEvent;
typedef struct QXYSeries QXYSeries;
#endif

QLineSeries* QLineSeries_new();
QLineSeries* QLineSeries_new2(QObject* parent);
void QLineSeries_virtbase(QLineSeries* src, QXYSeries** outptr_QXYSeries);
QMetaObject* QLineSeries_metaObject(const QLineSeries* self);
void* QLineSeries_metacast(QLineSeries* self, const char* param1);
struct miqt_string QLineSeries_tr(const char* s);
int QLineSeries_type(const QLineSeries* self);
struct miqt_string QLineSeries_tr2(const char* s, const char* c);
struct miqt_string QLineSeries_tr3(const char* s, const char* c, int n);

bool QLineSeries_override_virtual_type(void* self, intptr_t slot);
int QLineSeries_virtualbase_type(const void* self);
bool QLineSeries_override_virtual_setPen(void* self, intptr_t slot);
void QLineSeries_virtualbase_setPen(void* self, QPen* pen);
bool QLineSeries_override_virtual_setBrush(void* self, intptr_t slot);
void QLineSeries_virtualbase_setBrush(void* self, QBrush* brush);
bool QLineSeries_override_virtual_setColor(void* self, intptr_t slot);
void QLineSeries_virtualbase_setColor(void* self, QColor* color);
bool QLineSeries_override_virtual_color(void* self, intptr_t slot);
QColor* QLineSeries_virtualbase_color(const void* self);
bool QLineSeries_override_virtual_event(void* self, intptr_t slot);
bool QLineSeries_virtualbase_event(void* self, QEvent* event);
bool QLineSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QLineSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QLineSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QLineSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QLineSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QLineSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QLineSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QLineSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QLineSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QLineSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QLineSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QLineSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QLineSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QLineSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QLineSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QLineSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QLineSeries_delete(QLineSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
