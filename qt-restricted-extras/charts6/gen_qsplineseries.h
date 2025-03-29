#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QSPLINESERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QSPLINESERIES_H

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
class QSplineSeries;
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
typedef struct QSplineSeries QSplineSeries;
typedef struct QTimerEvent QTimerEvent;
typedef struct QXYSeries QXYSeries;
#endif

QSplineSeries* QSplineSeries_new();
QSplineSeries* QSplineSeries_new2(QObject* parent);
void QSplineSeries_virtbase(QSplineSeries* src, QLineSeries** outptr_QLineSeries);
QMetaObject* QSplineSeries_metaObject(const QSplineSeries* self);
void* QSplineSeries_metacast(QSplineSeries* self, const char* param1);
struct miqt_string QSplineSeries_tr(const char* s);
int QSplineSeries_type(const QSplineSeries* self);
struct miqt_string QSplineSeries_tr2(const char* s, const char* c);
struct miqt_string QSplineSeries_tr3(const char* s, const char* c, int n);
bool QSplineSeries_override_virtual_type(void* self, intptr_t slot);
int QSplineSeries_virtualbase_type(const void* self);
bool QSplineSeries_override_virtual_setPen(void* self, intptr_t slot);
void QSplineSeries_virtualbase_setPen(void* self, QPen* pen);
bool QSplineSeries_override_virtual_setBrush(void* self, intptr_t slot);
void QSplineSeries_virtualbase_setBrush(void* self, QBrush* brush);
bool QSplineSeries_override_virtual_setColor(void* self, intptr_t slot);
void QSplineSeries_virtualbase_setColor(void* self, QColor* color);
bool QSplineSeries_override_virtual_color(void* self, intptr_t slot);
QColor* QSplineSeries_virtualbase_color(const void* self);
bool QSplineSeries_override_virtual_event(void* self, intptr_t slot);
bool QSplineSeries_virtualbase_event(void* self, QEvent* event);
bool QSplineSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSplineSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSplineSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QSplineSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSplineSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QSplineSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSplineSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QSplineSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QSplineSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QSplineSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSplineSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSplineSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QSplineSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSplineSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSplineSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSplineSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QSplineSeries_delete(QSplineSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
