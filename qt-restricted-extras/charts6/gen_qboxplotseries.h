#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBOXPLOTSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBOXPLOTSERIES_H

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
class QBoxPlotSeries;
class QBoxSet;
class QBrush;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPen;
class QTimerEvent;
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QBoxSet QBoxSet;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QTimerEvent QTimerEvent;
#endif

QBoxPlotSeries* QBoxPlotSeries_new();
QBoxPlotSeries* QBoxPlotSeries_new2(QObject* parent);
void QBoxPlotSeries_virtbase(QBoxPlotSeries* src, QAbstractSeries** outptr_QAbstractSeries);
QMetaObject* QBoxPlotSeries_metaObject(const QBoxPlotSeries* self);
void* QBoxPlotSeries_metacast(QBoxPlotSeries* self, const char* param1);
struct miqt_string QBoxPlotSeries_tr(const char* s);
bool QBoxPlotSeries_append(QBoxPlotSeries* self, QBoxSet* box);
bool QBoxPlotSeries_remove(QBoxPlotSeries* self, QBoxSet* box);
bool QBoxPlotSeries_take(QBoxPlotSeries* self, QBoxSet* box);
bool QBoxPlotSeries_appendWithBoxes(QBoxPlotSeries* self, struct miqt_array /* of QBoxSet* */  boxes);
bool QBoxPlotSeries_insert(QBoxPlotSeries* self, int index, QBoxSet* box);
int QBoxPlotSeries_count(const QBoxPlotSeries* self);
struct miqt_array /* of QBoxSet* */  QBoxPlotSeries_boxSets(const QBoxPlotSeries* self);
void QBoxPlotSeries_clear(QBoxPlotSeries* self);
int QBoxPlotSeries_type(const QBoxPlotSeries* self);
void QBoxPlotSeries_setBoxOutlineVisible(QBoxPlotSeries* self, bool visible);
bool QBoxPlotSeries_boxOutlineVisible(QBoxPlotSeries* self);
void QBoxPlotSeries_setBoxWidth(QBoxPlotSeries* self, double width);
double QBoxPlotSeries_boxWidth(QBoxPlotSeries* self);
void QBoxPlotSeries_setBrush(QBoxPlotSeries* self, QBrush* brush);
QBrush* QBoxPlotSeries_brush(const QBoxPlotSeries* self);
void QBoxPlotSeries_setPen(QBoxPlotSeries* self, QPen* pen);
QPen* QBoxPlotSeries_pen(const QBoxPlotSeries* self);
void QBoxPlotSeries_clicked(QBoxPlotSeries* self, QBoxSet* boxset);
void QBoxPlotSeries_connect_clicked(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_hovered(QBoxPlotSeries* self, bool status, QBoxSet* boxset);
void QBoxPlotSeries_connect_hovered(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_pressed(QBoxPlotSeries* self, QBoxSet* boxset);
void QBoxPlotSeries_connect_pressed(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_released(QBoxPlotSeries* self, QBoxSet* boxset);
void QBoxPlotSeries_connect_released(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_doubleClicked(QBoxPlotSeries* self, QBoxSet* boxset);
void QBoxPlotSeries_connect_doubleClicked(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_countChanged(QBoxPlotSeries* self);
void QBoxPlotSeries_connect_countChanged(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_penChanged(QBoxPlotSeries* self);
void QBoxPlotSeries_connect_penChanged(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_brushChanged(QBoxPlotSeries* self);
void QBoxPlotSeries_connect_brushChanged(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_boxOutlineVisibilityChanged(QBoxPlotSeries* self);
void QBoxPlotSeries_connect_boxOutlineVisibilityChanged(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_boxWidthChanged(QBoxPlotSeries* self);
void QBoxPlotSeries_connect_boxWidthChanged(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_boxsetsAdded(QBoxPlotSeries* self, struct miqt_array /* of QBoxSet* */  sets);
void QBoxPlotSeries_connect_boxsetsAdded(QBoxPlotSeries* self, intptr_t slot);
void QBoxPlotSeries_boxsetsRemoved(QBoxPlotSeries* self, struct miqt_array /* of QBoxSet* */  sets);
void QBoxPlotSeries_connect_boxsetsRemoved(QBoxPlotSeries* self, intptr_t slot);
struct miqt_string QBoxPlotSeries_tr2(const char* s, const char* c);
struct miqt_string QBoxPlotSeries_tr3(const char* s, const char* c, int n);
bool QBoxPlotSeries_override_virtual_type(void* self, intptr_t slot);
int QBoxPlotSeries_virtualbase_type(const void* self);
bool QBoxPlotSeries_override_virtual_event(void* self, intptr_t slot);
bool QBoxPlotSeries_virtualbase_event(void* self, QEvent* event);
bool QBoxPlotSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QBoxPlotSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QBoxPlotSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QBoxPlotSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QBoxPlotSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QBoxPlotSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QBoxPlotSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QBoxPlotSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QBoxPlotSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QBoxPlotSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QBoxPlotSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QBoxPlotSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QBoxPlotSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QBoxPlotSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QBoxPlotSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QBoxPlotSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QBoxPlotSeries_delete(QBoxPlotSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
