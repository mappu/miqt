#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVXYMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVXYMODELMAPPER_H

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
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVXYModelMapper;
class QXYModelMapper;
class QXYSeries;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVXYModelMapper QVXYModelMapper;
typedef struct QXYModelMapper QXYModelMapper;
typedef struct QXYSeries QXYSeries;
#endif

QVXYModelMapper* QVXYModelMapper_new();
QVXYModelMapper* QVXYModelMapper_new2(QObject* parent);
void QVXYModelMapper_virtbase(QVXYModelMapper* src, QXYModelMapper** outptr_QXYModelMapper);
QMetaObject* QVXYModelMapper_metaObject(const QVXYModelMapper* self);
void* QVXYModelMapper_metacast(QVXYModelMapper* self, const char* param1);
struct miqt_string QVXYModelMapper_tr(const char* s);
QAbstractItemModel* QVXYModelMapper_model(const QVXYModelMapper* self);
void QVXYModelMapper_setModel(QVXYModelMapper* self, QAbstractItemModel* model);
QXYSeries* QVXYModelMapper_series(const QVXYModelMapper* self);
void QVXYModelMapper_setSeries(QVXYModelMapper* self, QXYSeries* series);
int QVXYModelMapper_xColumn(const QVXYModelMapper* self);
void QVXYModelMapper_setXColumn(QVXYModelMapper* self, int xColumn);
int QVXYModelMapper_yColumn(const QVXYModelMapper* self);
void QVXYModelMapper_setYColumn(QVXYModelMapper* self, int yColumn);
int QVXYModelMapper_firstRow(const QVXYModelMapper* self);
void QVXYModelMapper_setFirstRow(QVXYModelMapper* self, int firstRow);
int QVXYModelMapper_rowCount(const QVXYModelMapper* self);
void QVXYModelMapper_setRowCount(QVXYModelMapper* self, int rowCount);
void QVXYModelMapper_seriesReplaced(QVXYModelMapper* self);
void QVXYModelMapper_connect_seriesReplaced(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_modelReplaced(QVXYModelMapper* self);
void QVXYModelMapper_connect_modelReplaced(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_xColumnChanged(QVXYModelMapper* self);
void QVXYModelMapper_connect_xColumnChanged(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_yColumnChanged(QVXYModelMapper* self);
void QVXYModelMapper_connect_yColumnChanged(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_firstRowChanged(QVXYModelMapper* self);
void QVXYModelMapper_connect_firstRowChanged(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_rowCountChanged(QVXYModelMapper* self);
void QVXYModelMapper_connect_rowCountChanged(QVXYModelMapper* self, intptr_t slot);
struct miqt_string QVXYModelMapper_tr2(const char* s, const char* c);
struct miqt_string QVXYModelMapper_tr3(const char* s, const char* c, int n);
bool QVXYModelMapper_override_virtual_event(void* self, intptr_t slot);
bool QVXYModelMapper_virtualbase_event(void* self, QEvent* event);
bool QVXYModelMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QVXYModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QVXYModelMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QVXYModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QVXYModelMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QVXYModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QVXYModelMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QVXYModelMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QVXYModelMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QVXYModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QVXYModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QVXYModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
int QVXYModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
void QVXYModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
int QVXYModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
void QVXYModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
int QVXYModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
void QVXYModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
int QVXYModelMapper_protectedbase_xSection(bool* _dynamic_cast_ok, const void* self);
void QVXYModelMapper_protectedbase_setXSection(bool* _dynamic_cast_ok, void* self, int xSection);
int QVXYModelMapper_protectedbase_ySection(bool* _dynamic_cast_ok, const void* self);
void QVXYModelMapper_protectedbase_setYSection(bool* _dynamic_cast_ok, void* self, int ySection);
QObject* QVXYModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QVXYModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QVXYModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QVXYModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QVXYModelMapper_delete(QVXYModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
