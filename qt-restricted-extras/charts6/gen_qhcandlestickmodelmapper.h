#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHCANDLESTICKMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHCANDLESTICKMODELMAPPER_H

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
class QHCandlestickModelMapper;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QCandlestickModelMapper QCandlestickModelMapper;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHCandlestickModelMapper QHCandlestickModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QHCandlestickModelMapper* QHCandlestickModelMapper_new();
QHCandlestickModelMapper* QHCandlestickModelMapper_new2(QObject* parent);
void QHCandlestickModelMapper_virtbase(QHCandlestickModelMapper* src, QCandlestickModelMapper** outptr_QCandlestickModelMapper);
QMetaObject* QHCandlestickModelMapper_metaObject(const QHCandlestickModelMapper* self);
void* QHCandlestickModelMapper_metacast(QHCandlestickModelMapper* self, const char* param1);
struct miqt_string QHCandlestickModelMapper_tr(const char* s);
int QHCandlestickModelMapper_orientation(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_setTimestampColumn(QHCandlestickModelMapper* self, int timestampColumn);
int QHCandlestickModelMapper_timestampColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_setOpenColumn(QHCandlestickModelMapper* self, int openColumn);
int QHCandlestickModelMapper_openColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_setHighColumn(QHCandlestickModelMapper* self, int highColumn);
int QHCandlestickModelMapper_highColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_setLowColumn(QHCandlestickModelMapper* self, int lowColumn);
int QHCandlestickModelMapper_lowColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_setCloseColumn(QHCandlestickModelMapper* self, int closeColumn);
int QHCandlestickModelMapper_closeColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_setFirstSetRow(QHCandlestickModelMapper* self, int firstSetRow);
int QHCandlestickModelMapper_firstSetRow(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_setLastSetRow(QHCandlestickModelMapper* self, int lastSetRow);
int QHCandlestickModelMapper_lastSetRow(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_timestampColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_connect_timestampColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_openColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_connect_openColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_highColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_connect_highColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_lowColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_connect_lowColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_closeColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_connect_closeColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_firstSetRowChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_connect_firstSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_lastSetRowChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_connect_lastSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot);
struct miqt_string QHCandlestickModelMapper_tr2(const char* s, const char* c);
struct miqt_string QHCandlestickModelMapper_tr3(const char* s, const char* c, int n);
bool QHCandlestickModelMapper_override_virtual_orientation(void* self, intptr_t slot);
int QHCandlestickModelMapper_virtualbase_orientation(const void* self);
bool QHCandlestickModelMapper_override_virtual_event(void* self, intptr_t slot);
bool QHCandlestickModelMapper_virtualbase_event(void* self, QEvent* event);
bool QHCandlestickModelMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QHCandlestickModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QHCandlestickModelMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QHCandlestickModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QHCandlestickModelMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QHCandlestickModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QHCandlestickModelMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QHCandlestickModelMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QHCandlestickModelMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QHCandlestickModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QHCandlestickModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QHCandlestickModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QHCandlestickModelMapper_protectedbase_setTimestamp(bool* _dynamic_cast_ok, void* self, int timestamp);
int QHCandlestickModelMapper_protectedbase_timestamp(bool* _dynamic_cast_ok, const void* self);
void QHCandlestickModelMapper_protectedbase_setOpen(bool* _dynamic_cast_ok, void* self, int open);
int QHCandlestickModelMapper_protectedbase_open(bool* _dynamic_cast_ok, const void* self);
void QHCandlestickModelMapper_protectedbase_setHigh(bool* _dynamic_cast_ok, void* self, int high);
int QHCandlestickModelMapper_protectedbase_high(bool* _dynamic_cast_ok, const void* self);
void QHCandlestickModelMapper_protectedbase_setLow(bool* _dynamic_cast_ok, void* self, int low);
int QHCandlestickModelMapper_protectedbase_low(bool* _dynamic_cast_ok, const void* self);
void QHCandlestickModelMapper_protectedbase_setClose(bool* _dynamic_cast_ok, void* self, int close);
int QHCandlestickModelMapper_protectedbase_close(bool* _dynamic_cast_ok, const void* self);
void QHCandlestickModelMapper_protectedbase_setFirstSetSection(bool* _dynamic_cast_ok, void* self, int firstSetSection);
int QHCandlestickModelMapper_protectedbase_firstSetSection(bool* _dynamic_cast_ok, const void* self);
void QHCandlestickModelMapper_protectedbase_setLastSetSection(bool* _dynamic_cast_ok, void* self, int lastSetSection);
int QHCandlestickModelMapper_protectedbase_lastSetSection(bool* _dynamic_cast_ok, const void* self);
QObject* QHCandlestickModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QHCandlestickModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QHCandlestickModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QHCandlestickModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QHCandlestickModelMapper_delete(QHCandlestickModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
