#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHBARMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHBARMODELMAPPER_H

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
class QAbstractItemModel;
class QBarModelMapper;
class QChildEvent;
class QEvent;
class QHBarModelMapper;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QBarModelMapper QBarModelMapper;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHBarModelMapper QHBarModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QHBarModelMapper* QHBarModelMapper_new();
QHBarModelMapper* QHBarModelMapper_new2(QObject* parent);
void QHBarModelMapper_virtbase(QHBarModelMapper* src, QBarModelMapper** outptr_QBarModelMapper);
QMetaObject* QHBarModelMapper_metaObject(const QHBarModelMapper* self);
void* QHBarModelMapper_metacast(QHBarModelMapper* self, const char* param1);
struct miqt_string QHBarModelMapper_tr(const char* s);
QAbstractItemModel* QHBarModelMapper_model(const QHBarModelMapper* self);
void QHBarModelMapper_setModel(QHBarModelMapper* self, QAbstractItemModel* model);
QAbstractBarSeries* QHBarModelMapper_series(const QHBarModelMapper* self);
void QHBarModelMapper_setSeries(QHBarModelMapper* self, QAbstractBarSeries* series);
int QHBarModelMapper_firstBarSetRow(const QHBarModelMapper* self);
void QHBarModelMapper_setFirstBarSetRow(QHBarModelMapper* self, int firstBarSetRow);
int QHBarModelMapper_lastBarSetRow(const QHBarModelMapper* self);
void QHBarModelMapper_setLastBarSetRow(QHBarModelMapper* self, int lastBarSetRow);
int QHBarModelMapper_firstColumn(const QHBarModelMapper* self);
void QHBarModelMapper_setFirstColumn(QHBarModelMapper* self, int firstColumn);
int QHBarModelMapper_columnCount(const QHBarModelMapper* self);
void QHBarModelMapper_setColumnCount(QHBarModelMapper* self, int columnCount);
void QHBarModelMapper_seriesReplaced(QHBarModelMapper* self);
void QHBarModelMapper_connect_seriesReplaced(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_modelReplaced(QHBarModelMapper* self);
void QHBarModelMapper_connect_modelReplaced(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_firstBarSetRowChanged(QHBarModelMapper* self);
void QHBarModelMapper_connect_firstBarSetRowChanged(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_lastBarSetRowChanged(QHBarModelMapper* self);
void QHBarModelMapper_connect_lastBarSetRowChanged(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_firstColumnChanged(QHBarModelMapper* self);
void QHBarModelMapper_connect_firstColumnChanged(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_columnCountChanged(QHBarModelMapper* self);
void QHBarModelMapper_connect_columnCountChanged(QHBarModelMapper* self, intptr_t slot);
struct miqt_string QHBarModelMapper_tr2(const char* s, const char* c);
struct miqt_string QHBarModelMapper_tr3(const char* s, const char* c, int n);

bool QHBarModelMapper_override_virtual_event(void* self, intptr_t slot);
bool QHBarModelMapper_virtualbase_event(void* self, QEvent* event);
bool QHBarModelMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QHBarModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QHBarModelMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QHBarModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QHBarModelMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QHBarModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QHBarModelMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QHBarModelMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QHBarModelMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QHBarModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QHBarModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QHBarModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

int QHBarModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
void QHBarModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
int QHBarModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
void QHBarModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
int QHBarModelMapper_protectedbase_firstBarSetSection(bool* _dynamic_cast_ok, const void* self);
void QHBarModelMapper_protectedbase_setFirstBarSetSection(bool* _dynamic_cast_ok, void* self, int firstBarSetSection);
int QHBarModelMapper_protectedbase_lastBarSetSection(bool* _dynamic_cast_ok, const void* self);
void QHBarModelMapper_protectedbase_setLastBarSetSection(bool* _dynamic_cast_ok, void* self, int lastBarSetSection);
int QHBarModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
void QHBarModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
QObject* QHBarModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QHBarModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QHBarModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QHBarModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QHBarModelMapper_delete(QHBarModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
