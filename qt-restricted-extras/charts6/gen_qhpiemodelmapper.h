#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHPIEMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHPIEMODELMAPPER_H

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
class QHPieModelMapper;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPieModelMapper;
class QPieSeries;
class QTimerEvent;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHPieModelMapper QHPieModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPieModelMapper QPieModelMapper;
typedef struct QPieSeries QPieSeries;
typedef struct QTimerEvent QTimerEvent;
#endif

QHPieModelMapper* QHPieModelMapper_new();
QHPieModelMapper* QHPieModelMapper_new2(QObject* parent);
void QHPieModelMapper_virtbase(QHPieModelMapper* src, QPieModelMapper** outptr_QPieModelMapper);
QMetaObject* QHPieModelMapper_metaObject(const QHPieModelMapper* self);
void* QHPieModelMapper_metacast(QHPieModelMapper* self, const char* param1);
struct miqt_string QHPieModelMapper_tr(const char* s);
QAbstractItemModel* QHPieModelMapper_model(const QHPieModelMapper* self);
void QHPieModelMapper_setModel(QHPieModelMapper* self, QAbstractItemModel* model);
QPieSeries* QHPieModelMapper_series(const QHPieModelMapper* self);
void QHPieModelMapper_setSeries(QHPieModelMapper* self, QPieSeries* series);
int QHPieModelMapper_valuesRow(const QHPieModelMapper* self);
void QHPieModelMapper_setValuesRow(QHPieModelMapper* self, int valuesRow);
int QHPieModelMapper_labelsRow(const QHPieModelMapper* self);
void QHPieModelMapper_setLabelsRow(QHPieModelMapper* self, int labelsRow);
int QHPieModelMapper_firstColumn(const QHPieModelMapper* self);
void QHPieModelMapper_setFirstColumn(QHPieModelMapper* self, int firstColumn);
int QHPieModelMapper_columnCount(const QHPieModelMapper* self);
void QHPieModelMapper_setColumnCount(QHPieModelMapper* self, int columnCount);
void QHPieModelMapper_seriesReplaced(QHPieModelMapper* self);
void QHPieModelMapper_connect_seriesReplaced(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_modelReplaced(QHPieModelMapper* self);
void QHPieModelMapper_connect_modelReplaced(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_valuesRowChanged(QHPieModelMapper* self);
void QHPieModelMapper_connect_valuesRowChanged(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_labelsRowChanged(QHPieModelMapper* self);
void QHPieModelMapper_connect_labelsRowChanged(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_firstColumnChanged(QHPieModelMapper* self);
void QHPieModelMapper_connect_firstColumnChanged(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_columnCountChanged(QHPieModelMapper* self);
void QHPieModelMapper_connect_columnCountChanged(QHPieModelMapper* self, intptr_t slot);
struct miqt_string QHPieModelMapper_tr2(const char* s, const char* c);
struct miqt_string QHPieModelMapper_tr3(const char* s, const char* c, int n);
bool QHPieModelMapper_override_virtual_event(void* self, intptr_t slot);
bool QHPieModelMapper_virtualbase_event(void* self, QEvent* event);
bool QHPieModelMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QHPieModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QHPieModelMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QHPieModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QHPieModelMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QHPieModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QHPieModelMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QHPieModelMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QHPieModelMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QHPieModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QHPieModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QHPieModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
int QHPieModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
void QHPieModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
int QHPieModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
void QHPieModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
int QHPieModelMapper_protectedbase_valuesSection(bool* _dynamic_cast_ok, const void* self);
void QHPieModelMapper_protectedbase_setValuesSection(bool* _dynamic_cast_ok, void* self, int valuesSection);
int QHPieModelMapper_protectedbase_labelsSection(bool* _dynamic_cast_ok, const void* self);
void QHPieModelMapper_protectedbase_setLabelsSection(bool* _dynamic_cast_ok, void* self, int labelsSection);
int QHPieModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
void QHPieModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
QObject* QHPieModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QHPieModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QHPieModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QHPieModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QHPieModelMapper_delete(QHPieModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
