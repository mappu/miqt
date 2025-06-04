#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBARSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBARSERIES_H

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
class QBarSeries;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBarSeries QBarSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBarSeries* QBarSeries_new();
QBarSeries* QBarSeries_new2(QObject* parent);
void QBarSeries_virtbase(QBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries);
QMetaObject* QBarSeries_metaObject(const QBarSeries* self);
void* QBarSeries_metacast(QBarSeries* self, const char* param1);
struct miqt_string QBarSeries_tr(const char* s);
int QBarSeries_type(const QBarSeries* self);
struct miqt_string QBarSeries_tr2(const char* s, const char* c);
struct miqt_string QBarSeries_tr3(const char* s, const char* c, int n);

bool QBarSeries_override_virtual_type(void* self, intptr_t slot);
int QBarSeries_virtualbase_type(const void* self);
bool QBarSeries_override_virtual_event(void* self, intptr_t slot);
bool QBarSeries_virtualbase_event(void* self, QEvent* event);
bool QBarSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QBarSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QBarSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QBarSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QBarSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QBarSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QBarSeries_delete(QBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
