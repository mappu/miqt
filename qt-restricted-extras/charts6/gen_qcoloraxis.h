#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCOLORAXIS_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCOLORAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAxis;
class QChildEvent;
class QColorAxis;
class QEvent;
class QLinearGradient;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QColorAxis QColorAxis;
typedef struct QEvent QEvent;
typedef struct QLinearGradient QLinearGradient;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QColorAxis* QColorAxis_new();
QColorAxis* QColorAxis_new2(QObject* parent);
void QColorAxis_virtbase(QColorAxis* src, QAbstractAxis** outptr_QAbstractAxis);
QMetaObject* QColorAxis_metaObject(const QColorAxis* self);
void* QColorAxis_metacast(QColorAxis* self, const char* param1);
struct miqt_string QColorAxis_tr(const char* s);
int QColorAxis_type(const QColorAxis* self);
void QColorAxis_setMin(QColorAxis* self, double min);
double QColorAxis_min(const QColorAxis* self);
void QColorAxis_setMax(QColorAxis* self, double max);
double QColorAxis_max(const QColorAxis* self);
void QColorAxis_setRange(QColorAxis* self, double min, double max);
void QColorAxis_setTickCount(QColorAxis* self, int count);
int QColorAxis_tickCount(const QColorAxis* self);
void QColorAxis_setSize(QColorAxis* self, const double size);
double QColorAxis_size(const QColorAxis* self);
void QColorAxis_setGradient(QColorAxis* self, QLinearGradient* gradient);
QLinearGradient* QColorAxis_gradient(const QColorAxis* self);
void QColorAxis_setAutoRange(QColorAxis* self, bool autoRange);
bool QColorAxis_autoRange(const QColorAxis* self);
void QColorAxis_minChanged(QColorAxis* self, double min);
void QColorAxis_connect_minChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_maxChanged(QColorAxis* self, double max);
void QColorAxis_connect_maxChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_rangeChanged(QColorAxis* self, double min, double max);
void QColorAxis_connect_rangeChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_tickCountChanged(QColorAxis* self, int tickCount);
void QColorAxis_connect_tickCountChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_gradientChanged(QColorAxis* self, QLinearGradient* gradient);
void QColorAxis_connect_gradientChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_sizeChanged(QColorAxis* self, const double size);
void QColorAxis_connect_sizeChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_autoRangeChanged(QColorAxis* self, bool autoRange);
void QColorAxis_connect_autoRangeChanged(QColorAxis* self, intptr_t slot);
struct miqt_string QColorAxis_tr2(const char* s, const char* c);
struct miqt_string QColorAxis_tr3(const char* s, const char* c, int n);
bool QColorAxis_override_virtual_type(void* self, intptr_t slot);
int QColorAxis_virtualbase_type(const void* self);
bool QColorAxis_override_virtual_event(void* self, intptr_t slot);
bool QColorAxis_virtualbase_event(void* self, QEvent* event);
bool QColorAxis_override_virtual_eventFilter(void* self, intptr_t slot);
bool QColorAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QColorAxis_override_virtual_timerEvent(void* self, intptr_t slot);
void QColorAxis_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QColorAxis_override_virtual_childEvent(void* self, intptr_t slot);
void QColorAxis_virtualbase_childEvent(void* self, QChildEvent* event);
bool QColorAxis_override_virtual_customEvent(void* self, intptr_t slot);
void QColorAxis_virtualbase_customEvent(void* self, QEvent* event);
bool QColorAxis_override_virtual_connectNotify(void* self, intptr_t slot);
void QColorAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QColorAxis_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QColorAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QColorAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QColorAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QColorAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QColorAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QColorAxis_delete(QColorAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
