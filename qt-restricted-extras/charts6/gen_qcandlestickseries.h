#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCANDLESTICKSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCANDLESTICKSERIES_H

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
class QCandlestickSeries;
class QCandlestickSet;
class QChildEvent;
class QColor;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPen;
class QTimerEvent;
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBrush QBrush;
typedef struct QCandlestickSeries QCandlestickSeries;
typedef struct QCandlestickSet QCandlestickSet;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QTimerEvent QTimerEvent;
#endif

QCandlestickSeries* QCandlestickSeries_new();
QCandlestickSeries* QCandlestickSeries_new2(QObject* parent);
void QCandlestickSeries_virtbase(QCandlestickSeries* src, QAbstractSeries** outptr_QAbstractSeries);
QMetaObject* QCandlestickSeries_metaObject(const QCandlestickSeries* self);
void* QCandlestickSeries_metacast(QCandlestickSeries* self, const char* param1);
struct miqt_string QCandlestickSeries_tr(const char* s);
bool QCandlestickSeries_append(QCandlestickSeries* self, QCandlestickSet* set);
bool QCandlestickSeries_remove(QCandlestickSeries* self, QCandlestickSet* set);
bool QCandlestickSeries_appendWithSets(QCandlestickSeries* self, struct miqt_array /* of QCandlestickSet* */  sets);
bool QCandlestickSeries_removeWithSets(QCandlestickSeries* self, struct miqt_array /* of QCandlestickSet* */  sets);
bool QCandlestickSeries_insert(QCandlestickSeries* self, int index, QCandlestickSet* set);
bool QCandlestickSeries_take(QCandlestickSeries* self, QCandlestickSet* set);
void QCandlestickSeries_clear(QCandlestickSeries* self);
struct miqt_array /* of QCandlestickSet* */  QCandlestickSeries_sets(const QCandlestickSeries* self);
int QCandlestickSeries_count(const QCandlestickSeries* self);
int QCandlestickSeries_type(const QCandlestickSeries* self);
void QCandlestickSeries_setMaximumColumnWidth(QCandlestickSeries* self, double maximumColumnWidth);
double QCandlestickSeries_maximumColumnWidth(const QCandlestickSeries* self);
void QCandlestickSeries_setMinimumColumnWidth(QCandlestickSeries* self, double minimumColumnWidth);
double QCandlestickSeries_minimumColumnWidth(const QCandlestickSeries* self);
void QCandlestickSeries_setBodyWidth(QCandlestickSeries* self, double bodyWidth);
double QCandlestickSeries_bodyWidth(const QCandlestickSeries* self);
void QCandlestickSeries_setBodyOutlineVisible(QCandlestickSeries* self, bool bodyOutlineVisible);
bool QCandlestickSeries_bodyOutlineVisible(const QCandlestickSeries* self);
void QCandlestickSeries_setCapsWidth(QCandlestickSeries* self, double capsWidth);
double QCandlestickSeries_capsWidth(const QCandlestickSeries* self);
void QCandlestickSeries_setCapsVisible(QCandlestickSeries* self, bool capsVisible);
bool QCandlestickSeries_capsVisible(const QCandlestickSeries* self);
void QCandlestickSeries_setIncreasingColor(QCandlestickSeries* self, QColor* increasingColor);
QColor* QCandlestickSeries_increasingColor(const QCandlestickSeries* self);
void QCandlestickSeries_setDecreasingColor(QCandlestickSeries* self, QColor* decreasingColor);
QColor* QCandlestickSeries_decreasingColor(const QCandlestickSeries* self);
void QCandlestickSeries_setBrush(QCandlestickSeries* self, QBrush* brush);
QBrush* QCandlestickSeries_brush(const QCandlestickSeries* self);
void QCandlestickSeries_setPen(QCandlestickSeries* self, QPen* pen);
QPen* QCandlestickSeries_pen(const QCandlestickSeries* self);
void QCandlestickSeries_clicked(QCandlestickSeries* self, QCandlestickSet* set);
void QCandlestickSeries_connect_clicked(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_hovered(QCandlestickSeries* self, bool status, QCandlestickSet* set);
void QCandlestickSeries_connect_hovered(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_pressed(QCandlestickSeries* self, QCandlestickSet* set);
void QCandlestickSeries_connect_pressed(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_released(QCandlestickSeries* self, QCandlestickSet* set);
void QCandlestickSeries_connect_released(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_doubleClicked(QCandlestickSeries* self, QCandlestickSet* set);
void QCandlestickSeries_connect_doubleClicked(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_candlestickSetsAdded(QCandlestickSeries* self, struct miqt_array /* of QCandlestickSet* */  sets);
void QCandlestickSeries_connect_candlestickSetsAdded(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_candlestickSetsRemoved(QCandlestickSeries* self, struct miqt_array /* of QCandlestickSet* */  sets);
void QCandlestickSeries_connect_candlestickSetsRemoved(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_countChanged(QCandlestickSeries* self);
void QCandlestickSeries_connect_countChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_maximumColumnWidthChanged(QCandlestickSeries* self);
void QCandlestickSeries_connect_maximumColumnWidthChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_minimumColumnWidthChanged(QCandlestickSeries* self);
void QCandlestickSeries_connect_minimumColumnWidthChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_bodyWidthChanged(QCandlestickSeries* self);
void QCandlestickSeries_connect_bodyWidthChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_bodyOutlineVisibilityChanged(QCandlestickSeries* self);
void QCandlestickSeries_connect_bodyOutlineVisibilityChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_capsWidthChanged(QCandlestickSeries* self);
void QCandlestickSeries_connect_capsWidthChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_capsVisibilityChanged(QCandlestickSeries* self);
void QCandlestickSeries_connect_capsVisibilityChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_increasingColorChanged(QCandlestickSeries* self);
void QCandlestickSeries_connect_increasingColorChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_decreasingColorChanged(QCandlestickSeries* self);
void QCandlestickSeries_connect_decreasingColorChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_brushChanged(QCandlestickSeries* self);
void QCandlestickSeries_connect_brushChanged(QCandlestickSeries* self, intptr_t slot);
void QCandlestickSeries_penChanged(QCandlestickSeries* self);
void QCandlestickSeries_connect_penChanged(QCandlestickSeries* self, intptr_t slot);
struct miqt_string QCandlestickSeries_tr2(const char* s, const char* c);
struct miqt_string QCandlestickSeries_tr3(const char* s, const char* c, int n);
bool QCandlestickSeries_override_virtual_type(void* self, intptr_t slot);
int QCandlestickSeries_virtualbase_type(const void* self);
bool QCandlestickSeries_override_virtual_event(void* self, intptr_t slot);
bool QCandlestickSeries_virtualbase_event(void* self, QEvent* event);
bool QCandlestickSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCandlestickSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QCandlestickSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QCandlestickSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QCandlestickSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QCandlestickSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCandlestickSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QCandlestickSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QCandlestickSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QCandlestickSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCandlestickSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCandlestickSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QCandlestickSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QCandlestickSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QCandlestickSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QCandlestickSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QCandlestickSeries_delete(QCandlestickSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
