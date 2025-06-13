#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCANDLESTICKMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QCandlestickModelMapper;
class QCandlestickSeries;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QCandlestickModelMapper QCandlestickModelMapper;
typedef struct QCandlestickSeries QCandlestickSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QCandlestickModelMapper* QCandlestickModelMapper_new();
QCandlestickModelMapper* QCandlestickModelMapper_new2(QObject* parent);
void QCandlestickModelMapper_virtbase(QCandlestickModelMapper* src, QObject** outptr_QObject);
QMetaObject* QCandlestickModelMapper_metaObject(const QCandlestickModelMapper* self);
void* QCandlestickModelMapper_metacast(QCandlestickModelMapper* self, const char* param1);
struct miqt_string QCandlestickModelMapper_tr(const char* s);
void QCandlestickModelMapper_setModel(QCandlestickModelMapper* self, QAbstractItemModel* model);
QAbstractItemModel* QCandlestickModelMapper_model(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_setSeries(QCandlestickModelMapper* self, QCandlestickSeries* series);
QCandlestickSeries* QCandlestickModelMapper_series(const QCandlestickModelMapper* self);
int QCandlestickModelMapper_orientation(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_modelReplaced(QCandlestickModelMapper* self);
void QCandlestickModelMapper_connect_modelReplaced(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_seriesReplaced(QCandlestickModelMapper* self);
void QCandlestickModelMapper_connect_seriesReplaced(QCandlestickModelMapper* self, intptr_t slot);
struct miqt_string QCandlestickModelMapper_tr2(const char* s, const char* c);
struct miqt_string QCandlestickModelMapper_tr3(const char* s, const char* c, int n);

bool QCandlestickModelMapper_override_virtual_orientation(void* self, intptr_t slot);
int QCandlestickModelMapper_virtualbase_orientation(const void* self);
bool QCandlestickModelMapper_override_virtual_event(void* self, intptr_t slot);
bool QCandlestickModelMapper_virtualbase_event(void* self, QEvent* event);
bool QCandlestickModelMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCandlestickModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QCandlestickModelMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QCandlestickModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QCandlestickModelMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QCandlestickModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCandlestickModelMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QCandlestickModelMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QCandlestickModelMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QCandlestickModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCandlestickModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCandlestickModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QCandlestickModelMapper_protectedbase_setTimestamp(bool* _dynamic_cast_ok, void* self, int timestamp);
int QCandlestickModelMapper_protectedbase_timestamp(bool* _dynamic_cast_ok, const void* self);
void QCandlestickModelMapper_protectedbase_setOpen(bool* _dynamic_cast_ok, void* self, int open);
int QCandlestickModelMapper_protectedbase_open(bool* _dynamic_cast_ok, const void* self);
void QCandlestickModelMapper_protectedbase_setHigh(bool* _dynamic_cast_ok, void* self, int high);
int QCandlestickModelMapper_protectedbase_high(bool* _dynamic_cast_ok, const void* self);
void QCandlestickModelMapper_protectedbase_setLow(bool* _dynamic_cast_ok, void* self, int low);
int QCandlestickModelMapper_protectedbase_low(bool* _dynamic_cast_ok, const void* self);
void QCandlestickModelMapper_protectedbase_setClose(bool* _dynamic_cast_ok, void* self, int close);
int QCandlestickModelMapper_protectedbase_close(bool* _dynamic_cast_ok, const void* self);
void QCandlestickModelMapper_protectedbase_setFirstSetSection(bool* _dynamic_cast_ok, void* self, int firstSetSection);
int QCandlestickModelMapper_protectedbase_firstSetSection(bool* _dynamic_cast_ok, const void* self);
void QCandlestickModelMapper_protectedbase_setLastSetSection(bool* _dynamic_cast_ok, void* self, int lastSetSection);
int QCandlestickModelMapper_protectedbase_lastSetSection(bool* _dynamic_cast_ok, const void* self);
QObject* QCandlestickModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QCandlestickModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QCandlestickModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QCandlestickModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QCandlestickModelMapper_delete(QCandlestickModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
