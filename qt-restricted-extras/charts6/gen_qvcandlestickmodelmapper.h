#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVCANDLESTICKMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCandlestickModelMapper;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVCandlestickModelMapper;
#else
typedef struct QCandlestickModelMapper QCandlestickModelMapper;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVCandlestickModelMapper QVCandlestickModelMapper;
#endif

QVCandlestickModelMapper* QVCandlestickModelMapper_new();
QVCandlestickModelMapper* QVCandlestickModelMapper_new2(QObject* parent);
void QVCandlestickModelMapper_virtbase(QVCandlestickModelMapper* src, QCandlestickModelMapper** outptr_QCandlestickModelMapper);
QMetaObject* QVCandlestickModelMapper_metaObject(const QVCandlestickModelMapper* self);
void* QVCandlestickModelMapper_metacast(QVCandlestickModelMapper* self, const char* param1);
struct miqt_string QVCandlestickModelMapper_tr(const char* s);
int QVCandlestickModelMapper_orientation(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_setTimestampRow(QVCandlestickModelMapper* self, int timestampRow);
int QVCandlestickModelMapper_timestampRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_setOpenRow(QVCandlestickModelMapper* self, int openRow);
int QVCandlestickModelMapper_openRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_setHighRow(QVCandlestickModelMapper* self, int highRow);
int QVCandlestickModelMapper_highRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_setLowRow(QVCandlestickModelMapper* self, int lowRow);
int QVCandlestickModelMapper_lowRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_setCloseRow(QVCandlestickModelMapper* self, int closeRow);
int QVCandlestickModelMapper_closeRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_setFirstSetColumn(QVCandlestickModelMapper* self, int firstSetColumn);
int QVCandlestickModelMapper_firstSetColumn(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_setLastSetColumn(QVCandlestickModelMapper* self, int lastSetColumn);
int QVCandlestickModelMapper_lastSetColumn(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_timestampRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_connect_timestampRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_openRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_connect_openRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_highRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_connect_highRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_lowRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_connect_lowRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_closeRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_connect_closeRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_firstSetColumnChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_connect_firstSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_lastSetColumnChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_connect_lastSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot);
struct miqt_string QVCandlestickModelMapper_tr2(const char* s, const char* c);
struct miqt_string QVCandlestickModelMapper_tr3(const char* s, const char* c, int n);
bool QVCandlestickModelMapper_override_virtual_orientation(void* self, intptr_t slot);
int QVCandlestickModelMapper_virtualbase_orientation(const void* self);
bool QVCandlestickModelMapper_override_virtual_event(void* self, intptr_t slot);
bool QVCandlestickModelMapper_virtualbase_event(void* self, QEvent* event);
bool QVCandlestickModelMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QVCandlestickModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QVCandlestickModelMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QVCandlestickModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QVCandlestickModelMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QVCandlestickModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QVCandlestickModelMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QVCandlestickModelMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QVCandlestickModelMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QVCandlestickModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QVCandlestickModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QVCandlestickModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QVCandlestickModelMapper_protectedbase_setTimestamp(bool* _dynamic_cast_ok, void* self, int timestamp);
int QVCandlestickModelMapper_protectedbase_timestamp(bool* _dynamic_cast_ok, const void* self);
void QVCandlestickModelMapper_protectedbase_setOpen(bool* _dynamic_cast_ok, void* self, int open);
int QVCandlestickModelMapper_protectedbase_open(bool* _dynamic_cast_ok, const void* self);
void QVCandlestickModelMapper_protectedbase_setHigh(bool* _dynamic_cast_ok, void* self, int high);
int QVCandlestickModelMapper_protectedbase_high(bool* _dynamic_cast_ok, const void* self);
void QVCandlestickModelMapper_protectedbase_setLow(bool* _dynamic_cast_ok, void* self, int low);
int QVCandlestickModelMapper_protectedbase_low(bool* _dynamic_cast_ok, const void* self);
void QVCandlestickModelMapper_protectedbase_setClose(bool* _dynamic_cast_ok, void* self, int close);
int QVCandlestickModelMapper_protectedbase_close(bool* _dynamic_cast_ok, const void* self);
void QVCandlestickModelMapper_protectedbase_setFirstSetSection(bool* _dynamic_cast_ok, void* self, int firstSetSection);
int QVCandlestickModelMapper_protectedbase_firstSetSection(bool* _dynamic_cast_ok, const void* self);
void QVCandlestickModelMapper_protectedbase_setLastSetSection(bool* _dynamic_cast_ok, void* self, int lastSetSection);
int QVCandlestickModelMapper_protectedbase_lastSetSection(bool* _dynamic_cast_ok, const void* self);
QObject* QVCandlestickModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QVCandlestickModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QVCandlestickModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QVCandlestickModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QVCandlestickModelMapper_delete(QVCandlestickModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
