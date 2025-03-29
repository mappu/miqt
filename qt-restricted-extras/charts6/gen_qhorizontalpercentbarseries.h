#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHORIZONTALPERCENTBARSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHORIZONTALPERCENTBARSERIES_H

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
class QHorizontalPercentBarSeries;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHorizontalPercentBarSeries QHorizontalPercentBarSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new();
QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new2(QObject* parent);
void QHorizontalPercentBarSeries_virtbase(QHorizontalPercentBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries);
QMetaObject* QHorizontalPercentBarSeries_metaObject(const QHorizontalPercentBarSeries* self);
void* QHorizontalPercentBarSeries_metacast(QHorizontalPercentBarSeries* self, const char* param1);
struct miqt_string QHorizontalPercentBarSeries_tr(const char* s);
int QHorizontalPercentBarSeries_type(const QHorizontalPercentBarSeries* self);
struct miqt_string QHorizontalPercentBarSeries_tr2(const char* s, const char* c);
struct miqt_string QHorizontalPercentBarSeries_tr3(const char* s, const char* c, int n);
bool QHorizontalPercentBarSeries_override_virtual_type(void* self, intptr_t slot);
int QHorizontalPercentBarSeries_virtualbase_type(const void* self);
bool QHorizontalPercentBarSeries_override_virtual_event(void* self, intptr_t slot);
bool QHorizontalPercentBarSeries_virtualbase_event(void* self, QEvent* event);
bool QHorizontalPercentBarSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QHorizontalPercentBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QHorizontalPercentBarSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QHorizontalPercentBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QHorizontalPercentBarSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QHorizontalPercentBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QHorizontalPercentBarSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QHorizontalPercentBarSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QHorizontalPercentBarSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QHorizontalPercentBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QHorizontalPercentBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QHorizontalPercentBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QHorizontalPercentBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QHorizontalPercentBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QHorizontalPercentBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QHorizontalPercentBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QHorizontalPercentBarSeries_delete(QHorizontalPercentBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
