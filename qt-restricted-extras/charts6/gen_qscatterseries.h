#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QSCATTERSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QSCATTERSERIES_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QPen;
class QScatterSeries;
class QTimerEvent;
class QXYSeries;
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QScatterSeries QScatterSeries;
typedef struct QTimerEvent QTimerEvent;
typedef struct QXYSeries QXYSeries;
#endif

QScatterSeries* QScatterSeries_new();
QScatterSeries* QScatterSeries_new2(QObject* parent);
void QScatterSeries_virtbase(QScatterSeries* src, QXYSeries** outptr_QXYSeries);
QMetaObject* QScatterSeries_metaObject(const QScatterSeries* self);
void* QScatterSeries_metacast(QScatterSeries* self, const char* param1);
struct miqt_string QScatterSeries_tr(const char* s);
int QScatterSeries_type(const QScatterSeries* self);
void QScatterSeries_setPen(QScatterSeries* self, QPen* pen);
void QScatterSeries_setBrush(QScatterSeries* self, QBrush* brush);
QBrush* QScatterSeries_brush(const QScatterSeries* self);
void QScatterSeries_setColor(QScatterSeries* self, QColor* color);
QColor* QScatterSeries_color(const QScatterSeries* self);
void QScatterSeries_setBorderColor(QScatterSeries* self, QColor* color);
QColor* QScatterSeries_borderColor(const QScatterSeries* self);
int QScatterSeries_markerShape(const QScatterSeries* self);
void QScatterSeries_setMarkerShape(QScatterSeries* self, int shape);
double QScatterSeries_markerSize(const QScatterSeries* self);
void QScatterSeries_setMarkerSize(QScatterSeries* self, double size);
void QScatterSeries_colorChanged(QScatterSeries* self, QColor* color);
void QScatterSeries_connect_colorChanged(QScatterSeries* self, intptr_t slot);
void QScatterSeries_borderColorChanged(QScatterSeries* self, QColor* color);
void QScatterSeries_connect_borderColorChanged(QScatterSeries* self, intptr_t slot);
void QScatterSeries_markerShapeChanged(QScatterSeries* self, int shape);
void QScatterSeries_connect_markerShapeChanged(QScatterSeries* self, intptr_t slot);
void QScatterSeries_markerSizeChanged(QScatterSeries* self, double size);
void QScatterSeries_connect_markerSizeChanged(QScatterSeries* self, intptr_t slot);
struct miqt_string QScatterSeries_tr2(const char* s, const char* c);
struct miqt_string QScatterSeries_tr3(const char* s, const char* c, int n);
bool QScatterSeries_override_virtual_type(void* self, intptr_t slot);
int QScatterSeries_virtualbase_type(const void* self);
bool QScatterSeries_override_virtual_setPen(void* self, intptr_t slot);
void QScatterSeries_virtualbase_setPen(void* self, QPen* pen);
bool QScatterSeries_override_virtual_setBrush(void* self, intptr_t slot);
void QScatterSeries_virtualbase_setBrush(void* self, QBrush* brush);
bool QScatterSeries_override_virtual_setColor(void* self, intptr_t slot);
void QScatterSeries_virtualbase_setColor(void* self, QColor* color);
bool QScatterSeries_override_virtual_color(void* self, intptr_t slot);
QColor* QScatterSeries_virtualbase_color(const void* self);
bool QScatterSeries_override_virtual_event(void* self, intptr_t slot);
bool QScatterSeries_virtualbase_event(void* self, QEvent* event);
bool QScatterSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QScatterSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QScatterSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QScatterSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QScatterSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QScatterSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QScatterSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QScatterSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QScatterSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QScatterSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QScatterSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QScatterSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QScatterSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QScatterSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QScatterSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QScatterSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QScatterSeries_delete(QScatterSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
