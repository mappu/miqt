#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPERCENTBARSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPERCENTBARSERIES_H

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
class QPercentBarSeries;
class QTimerEvent;
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPercentBarSeries QPercentBarSeries;
typedef struct QTimerEvent QTimerEvent;
#endif

QPercentBarSeries* QPercentBarSeries_new();
QPercentBarSeries* QPercentBarSeries_new2(QObject* parent);
void QPercentBarSeries_virtbase(QPercentBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries);
QMetaObject* QPercentBarSeries_metaObject(const QPercentBarSeries* self);
void* QPercentBarSeries_metacast(QPercentBarSeries* self, const char* param1);
struct miqt_string QPercentBarSeries_tr(const char* s);
int QPercentBarSeries_type(const QPercentBarSeries* self);
struct miqt_string QPercentBarSeries_tr2(const char* s, const char* c);
struct miqt_string QPercentBarSeries_tr3(const char* s, const char* c, int n);

bool QPercentBarSeries_override_virtual_type(void* self, intptr_t slot);
int QPercentBarSeries_virtualbase_type(const void* self);
bool QPercentBarSeries_override_virtual_event(void* self, intptr_t slot);
bool QPercentBarSeries_virtualbase_event(void* self, QEvent* event);
bool QPercentBarSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPercentBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPercentBarSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QPercentBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPercentBarSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QPercentBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPercentBarSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QPercentBarSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QPercentBarSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QPercentBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPercentBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPercentBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QPercentBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPercentBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPercentBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPercentBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QPercentBarSeries_delete(QPercentBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
