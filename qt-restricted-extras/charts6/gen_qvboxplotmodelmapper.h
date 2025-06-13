#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVBOXPLOTMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVBOXPLOTMODELMAPPER_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVBoxPlotModelMapper;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QBoxPlotModelMapper QBoxPlotModelMapper;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVBoxPlotModelMapper QVBoxPlotModelMapper;
#endif

QVBoxPlotModelMapper* QVBoxPlotModelMapper_new();
QVBoxPlotModelMapper* QVBoxPlotModelMapper_new2(QObject* parent);
void QVBoxPlotModelMapper_virtbase(QVBoxPlotModelMapper* src, QBoxPlotModelMapper** outptr_QBoxPlotModelMapper);
QMetaObject* QVBoxPlotModelMapper_metaObject(const QVBoxPlotModelMapper* self);
void* QVBoxPlotModelMapper_metacast(QVBoxPlotModelMapper* self, const char* param1);
struct miqt_string QVBoxPlotModelMapper_tr(const char* s);
QAbstractItemModel* QVBoxPlotModelMapper_model(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_setModel(QVBoxPlotModelMapper* self, QAbstractItemModel* model);
QBoxPlotSeries* QVBoxPlotModelMapper_series(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_setSeries(QVBoxPlotModelMapper* self, QBoxPlotSeries* series);
int QVBoxPlotModelMapper_firstBoxSetColumn(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_setFirstBoxSetColumn(QVBoxPlotModelMapper* self, int firstBoxSetColumn);
int QVBoxPlotModelMapper_lastBoxSetColumn(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_setLastBoxSetColumn(QVBoxPlotModelMapper* self, int lastBoxSetColumn);
int QVBoxPlotModelMapper_firstRow(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_setFirstRow(QVBoxPlotModelMapper* self, int firstRow);
int QVBoxPlotModelMapper_rowCount(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_setRowCount(QVBoxPlotModelMapper* self, int rowCount);
void QVBoxPlotModelMapper_seriesReplaced(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_connect_seriesReplaced(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_modelReplaced(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_connect_modelReplaced(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_firstBoxSetColumnChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_connect_firstBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_lastBoxSetColumnChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_connect_lastBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_firstRowChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_connect_firstRowChanged(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_rowCountChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_connect_rowCountChanged(QVBoxPlotModelMapper* self, intptr_t slot);
struct miqt_string QVBoxPlotModelMapper_tr2(const char* s, const char* c);
struct miqt_string QVBoxPlotModelMapper_tr3(const char* s, const char* c, int n);

bool QVBoxPlotModelMapper_override_virtual_event(void* self, intptr_t slot);
bool QVBoxPlotModelMapper_virtualbase_event(void* self, QEvent* event);
bool QVBoxPlotModelMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QVBoxPlotModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QVBoxPlotModelMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QVBoxPlotModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QVBoxPlotModelMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QVBoxPlotModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QVBoxPlotModelMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QVBoxPlotModelMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QVBoxPlotModelMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QVBoxPlotModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QVBoxPlotModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QVBoxPlotModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

int QVBoxPlotModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
void QVBoxPlotModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
int QVBoxPlotModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
void QVBoxPlotModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
int QVBoxPlotModelMapper_protectedbase_firstBoxSetSection(bool* _dynamic_cast_ok, const void* self);
void QVBoxPlotModelMapper_protectedbase_setFirstBoxSetSection(bool* _dynamic_cast_ok, void* self, int firstBoxSetSection);
int QVBoxPlotModelMapper_protectedbase_lastBoxSetSection(bool* _dynamic_cast_ok, const void* self);
void QVBoxPlotModelMapper_protectedbase_setLastBoxSetSection(bool* _dynamic_cast_ok, void* self, int lastBoxSetSection);
int QVBoxPlotModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
void QVBoxPlotModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
QObject* QVBoxPlotModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QVBoxPlotModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QVBoxPlotModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QVBoxPlotModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QVBoxPlotModelMapper_delete(QVBoxPlotModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
