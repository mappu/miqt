#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCANDLESTICKSET_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCANDLESTICKSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QCandlestickSet;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPen;
class QTimerEvent;
#else
typedef struct QBrush QBrush;
typedef struct QCandlestickSet QCandlestickSet;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QTimerEvent QTimerEvent;
#endif

QCandlestickSet* QCandlestickSet_new();
QCandlestickSet* QCandlestickSet_new2(double open, double high, double low, double close);
QCandlestickSet* QCandlestickSet_new3(double timestamp);
QCandlestickSet* QCandlestickSet_new4(double timestamp, QObject* parent);
QCandlestickSet* QCandlestickSet_new5(double open, double high, double low, double close, double timestamp);
QCandlestickSet* QCandlestickSet_new6(double open, double high, double low, double close, double timestamp, QObject* parent);
void QCandlestickSet_virtbase(QCandlestickSet* src, QObject** outptr_QObject);
QMetaObject* QCandlestickSet_metaObject(const QCandlestickSet* self);
void* QCandlestickSet_metacast(QCandlestickSet* self, const char* param1);
struct miqt_string QCandlestickSet_tr(const char* s);
void QCandlestickSet_setTimestamp(QCandlestickSet* self, double timestamp);
double QCandlestickSet_timestamp(const QCandlestickSet* self);
void QCandlestickSet_setOpen(QCandlestickSet* self, double open);
double QCandlestickSet_open(const QCandlestickSet* self);
void QCandlestickSet_setHigh(QCandlestickSet* self, double high);
double QCandlestickSet_high(const QCandlestickSet* self);
void QCandlestickSet_setLow(QCandlestickSet* self, double low);
double QCandlestickSet_low(const QCandlestickSet* self);
void QCandlestickSet_setClose(QCandlestickSet* self, double close);
double QCandlestickSet_close(const QCandlestickSet* self);
void QCandlestickSet_setBrush(QCandlestickSet* self, QBrush* brush);
QBrush* QCandlestickSet_brush(const QCandlestickSet* self);
void QCandlestickSet_setPen(QCandlestickSet* self, QPen* pen);
QPen* QCandlestickSet_pen(const QCandlestickSet* self);
void QCandlestickSet_clicked(QCandlestickSet* self);
void QCandlestickSet_connect_clicked(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_hovered(QCandlestickSet* self, bool status);
void QCandlestickSet_connect_hovered(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_pressed(QCandlestickSet* self);
void QCandlestickSet_connect_pressed(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_released(QCandlestickSet* self);
void QCandlestickSet_connect_released(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_doubleClicked(QCandlestickSet* self);
void QCandlestickSet_connect_doubleClicked(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_timestampChanged(QCandlestickSet* self);
void QCandlestickSet_connect_timestampChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_openChanged(QCandlestickSet* self);
void QCandlestickSet_connect_openChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_highChanged(QCandlestickSet* self);
void QCandlestickSet_connect_highChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_lowChanged(QCandlestickSet* self);
void QCandlestickSet_connect_lowChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_closeChanged(QCandlestickSet* self);
void QCandlestickSet_connect_closeChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_brushChanged(QCandlestickSet* self);
void QCandlestickSet_connect_brushChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_penChanged(QCandlestickSet* self);
void QCandlestickSet_connect_penChanged(QCandlestickSet* self, intptr_t slot);
struct miqt_string QCandlestickSet_tr2(const char* s, const char* c);
struct miqt_string QCandlestickSet_tr3(const char* s, const char* c, int n);

bool QCandlestickSet_override_virtual_event(void* self, intptr_t slot);
bool QCandlestickSet_virtualbase_event(void* self, QEvent* event);
bool QCandlestickSet_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCandlestickSet_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QCandlestickSet_override_virtual_timerEvent(void* self, intptr_t slot);
void QCandlestickSet_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QCandlestickSet_override_virtual_childEvent(void* self, intptr_t slot);
void QCandlestickSet_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCandlestickSet_override_virtual_customEvent(void* self, intptr_t slot);
void QCandlestickSet_virtualbase_customEvent(void* self, QEvent* event);
bool QCandlestickSet_override_virtual_connectNotify(void* self, intptr_t slot);
void QCandlestickSet_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCandlestickSet_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCandlestickSet_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QCandlestickSet_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QCandlestickSet_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QCandlestickSet_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QCandlestickSet_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QCandlestickSet_delete(QCandlestickSet* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
