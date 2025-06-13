#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QSTACKEDBARSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QSTACKEDBARSERIES_H

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
class QAbstractSeries;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QStackedBarSeries;
class QTimerEvent;
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QStackedBarSeries QStackedBarSeries;
typedef struct QTimerEvent QTimerEvent;
#endif

QStackedBarSeries* QStackedBarSeries_new();
QStackedBarSeries* QStackedBarSeries_new2(QObject* parent);
void QStackedBarSeries_virtbase(QStackedBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries);
QMetaObject* QStackedBarSeries_metaObject(const QStackedBarSeries* self);
void* QStackedBarSeries_metacast(QStackedBarSeries* self, const char* param1);
struct miqt_string QStackedBarSeries_tr(const char* s);
int QStackedBarSeries_type(const QStackedBarSeries* self);
struct miqt_string QStackedBarSeries_tr2(const char* s, const char* c);
struct miqt_string QStackedBarSeries_tr3(const char* s, const char* c, int n);

bool QStackedBarSeries_override_virtual_type(void* self, intptr_t slot);
int QStackedBarSeries_virtualbase_type(const void* self);
bool QStackedBarSeries_override_virtual_event(void* self, intptr_t slot);
bool QStackedBarSeries_virtualbase_event(void* self, QEvent* event);
bool QStackedBarSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QStackedBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QStackedBarSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QStackedBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QStackedBarSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QStackedBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QStackedBarSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QStackedBarSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QStackedBarSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QStackedBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QStackedBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QStackedBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QStackedBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QStackedBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QStackedBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QStackedBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QStackedBarSeries_delete(QStackedBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
