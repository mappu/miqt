#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHBOXPLOTMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHBOXPLOTMODELMAPPER_H

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
class QBoxPlotModelMapper;
class QBoxPlotSeries;
class QChildEvent;
class QEvent;
class QHBoxPlotModelMapper;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QBoxPlotModelMapper QBoxPlotModelMapper;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHBoxPlotModelMapper QHBoxPlotModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QHBoxPlotModelMapper* QHBoxPlotModelMapper_new();
QHBoxPlotModelMapper* QHBoxPlotModelMapper_new2(QObject* parent);
void QHBoxPlotModelMapper_virtbase(QHBoxPlotModelMapper* src, QBoxPlotModelMapper** outptr_QBoxPlotModelMapper);
QMetaObject* QHBoxPlotModelMapper_metaObject(const QHBoxPlotModelMapper* self);
void* QHBoxPlotModelMapper_metacast(QHBoxPlotModelMapper* self, const char* param1);
struct miqt_string QHBoxPlotModelMapper_tr(const char* s);
QAbstractItemModel* QHBoxPlotModelMapper_model(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_setModel(QHBoxPlotModelMapper* self, QAbstractItemModel* model);
QBoxPlotSeries* QHBoxPlotModelMapper_series(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_setSeries(QHBoxPlotModelMapper* self, QBoxPlotSeries* series);
int QHBoxPlotModelMapper_firstBoxSetRow(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_setFirstBoxSetRow(QHBoxPlotModelMapper* self, int firstBoxSetRow);
int QHBoxPlotModelMapper_lastBoxSetRow(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_setLastBoxSetRow(QHBoxPlotModelMapper* self, int lastBoxSetRow);
int QHBoxPlotModelMapper_firstColumn(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_setFirstColumn(QHBoxPlotModelMapper* self, int firstColumn);
int QHBoxPlotModelMapper_columnCount(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_setColumnCount(QHBoxPlotModelMapper* self, int rowCount);
void QHBoxPlotModelMapper_seriesReplaced(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_connect_seriesReplaced(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_modelReplaced(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_connect_modelReplaced(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_firstBoxSetRowChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_connect_firstBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_lastBoxSetRowChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_connect_lastBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_firstColumnChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_connect_firstColumnChanged(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_columnCountChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_connect_columnCountChanged(QHBoxPlotModelMapper* self, intptr_t slot);
struct miqt_string QHBoxPlotModelMapper_tr2(const char* s, const char* c);
struct miqt_string QHBoxPlotModelMapper_tr3(const char* s, const char* c, int n);

bool QHBoxPlotModelMapper_override_virtual_event(void* self, intptr_t slot);
bool QHBoxPlotModelMapper_virtualbase_event(void* self, QEvent* event);
bool QHBoxPlotModelMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QHBoxPlotModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QHBoxPlotModelMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QHBoxPlotModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QHBoxPlotModelMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QHBoxPlotModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QHBoxPlotModelMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QHBoxPlotModelMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QHBoxPlotModelMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QHBoxPlotModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QHBoxPlotModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QHBoxPlotModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

int QHBoxPlotModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
void QHBoxPlotModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
int QHBoxPlotModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
void QHBoxPlotModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
int QHBoxPlotModelMapper_protectedbase_firstBoxSetSection(bool* _dynamic_cast_ok, const void* self);
void QHBoxPlotModelMapper_protectedbase_setFirstBoxSetSection(bool* _dynamic_cast_ok, void* self, int firstBoxSetSection);
int QHBoxPlotModelMapper_protectedbase_lastBoxSetSection(bool* _dynamic_cast_ok, const void* self);
void QHBoxPlotModelMapper_protectedbase_setLastBoxSetSection(bool* _dynamic_cast_ok, void* self, int lastBoxSetSection);
int QHBoxPlotModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
void QHBoxPlotModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
QObject* QHBoxPlotModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QHBoxPlotModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QHBoxPlotModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QHBoxPlotModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QHBoxPlotModelMapper_delete(QHBoxPlotModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
