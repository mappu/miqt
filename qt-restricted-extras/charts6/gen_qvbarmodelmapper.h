#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVBARMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVBARMODELMAPPER_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVBarModelMapper;
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QBarModelMapper QBarModelMapper;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVBarModelMapper QVBarModelMapper;
#endif

QVBarModelMapper* QVBarModelMapper_new();
QVBarModelMapper* QVBarModelMapper_new2(QObject* parent);
void QVBarModelMapper_virtbase(QVBarModelMapper* src, QBarModelMapper** outptr_QBarModelMapper);
QMetaObject* QVBarModelMapper_metaObject(const QVBarModelMapper* self);
void* QVBarModelMapper_metacast(QVBarModelMapper* self, const char* param1);
struct miqt_string QVBarModelMapper_tr(const char* s);
QAbstractItemModel* QVBarModelMapper_model(const QVBarModelMapper* self);
void QVBarModelMapper_setModel(QVBarModelMapper* self, QAbstractItemModel* model);
QAbstractBarSeries* QVBarModelMapper_series(const QVBarModelMapper* self);
void QVBarModelMapper_setSeries(QVBarModelMapper* self, QAbstractBarSeries* series);
int QVBarModelMapper_firstBarSetColumn(const QVBarModelMapper* self);
void QVBarModelMapper_setFirstBarSetColumn(QVBarModelMapper* self, int firstBarSetColumn);
int QVBarModelMapper_lastBarSetColumn(const QVBarModelMapper* self);
void QVBarModelMapper_setLastBarSetColumn(QVBarModelMapper* self, int lastBarSetColumn);
int QVBarModelMapper_firstRow(const QVBarModelMapper* self);
void QVBarModelMapper_setFirstRow(QVBarModelMapper* self, int firstRow);
int QVBarModelMapper_rowCount(const QVBarModelMapper* self);
void QVBarModelMapper_setRowCount(QVBarModelMapper* self, int rowCount);
void QVBarModelMapper_seriesReplaced(QVBarModelMapper* self);
void QVBarModelMapper_connect_seriesReplaced(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_modelReplaced(QVBarModelMapper* self);
void QVBarModelMapper_connect_modelReplaced(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_firstBarSetColumnChanged(QVBarModelMapper* self);
void QVBarModelMapper_connect_firstBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_lastBarSetColumnChanged(QVBarModelMapper* self);
void QVBarModelMapper_connect_lastBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_firstRowChanged(QVBarModelMapper* self);
void QVBarModelMapper_connect_firstRowChanged(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_rowCountChanged(QVBarModelMapper* self);
void QVBarModelMapper_connect_rowCountChanged(QVBarModelMapper* self, intptr_t slot);
struct miqt_string QVBarModelMapper_tr2(const char* s, const char* c);
struct miqt_string QVBarModelMapper_tr3(const char* s, const char* c, int n);

bool QVBarModelMapper_override_virtual_event(void* self, intptr_t slot);
bool QVBarModelMapper_virtualbase_event(void* self, QEvent* event);
bool QVBarModelMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QVBarModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QVBarModelMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QVBarModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QVBarModelMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QVBarModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QVBarModelMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QVBarModelMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QVBarModelMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QVBarModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QVBarModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QVBarModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

int QVBarModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
void QVBarModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
int QVBarModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
void QVBarModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
int QVBarModelMapper_protectedbase_firstBarSetSection(bool* _dynamic_cast_ok, const void* self);
void QVBarModelMapper_protectedbase_setFirstBarSetSection(bool* _dynamic_cast_ok, void* self, int firstBarSetSection);
int QVBarModelMapper_protectedbase_lastBarSetSection(bool* _dynamic_cast_ok, const void* self);
void QVBarModelMapper_protectedbase_setLastBarSetSection(bool* _dynamic_cast_ok, void* self, int lastBarSetSection);
int QVBarModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
void QVBarModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
QObject* QVBarModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QVBarModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QVBarModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QVBarModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QVBarModelMapper_delete(QVBarModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
