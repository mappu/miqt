#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVPIEMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QVPIEMODELMAPPER_H

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
class QPieModelMapper;
class QPieSeries;
class QTimerEvent;
class QVPieModelMapper;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPieModelMapper QPieModelMapper;
typedef struct QPieSeries QPieSeries;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVPieModelMapper QVPieModelMapper;
#endif

QVPieModelMapper* QVPieModelMapper_new();
QVPieModelMapper* QVPieModelMapper_new2(QObject* parent);
void QVPieModelMapper_virtbase(QVPieModelMapper* src, QPieModelMapper** outptr_QPieModelMapper);
QMetaObject* QVPieModelMapper_metaObject(const QVPieModelMapper* self);
void* QVPieModelMapper_metacast(QVPieModelMapper* self, const char* param1);
struct miqt_string QVPieModelMapper_tr(const char* s);
QAbstractItemModel* QVPieModelMapper_model(const QVPieModelMapper* self);
void QVPieModelMapper_setModel(QVPieModelMapper* self, QAbstractItemModel* model);
QPieSeries* QVPieModelMapper_series(const QVPieModelMapper* self);
void QVPieModelMapper_setSeries(QVPieModelMapper* self, QPieSeries* series);
int QVPieModelMapper_valuesColumn(const QVPieModelMapper* self);
void QVPieModelMapper_setValuesColumn(QVPieModelMapper* self, int valuesColumn);
int QVPieModelMapper_labelsColumn(const QVPieModelMapper* self);
void QVPieModelMapper_setLabelsColumn(QVPieModelMapper* self, int labelsColumn);
int QVPieModelMapper_firstRow(const QVPieModelMapper* self);
void QVPieModelMapper_setFirstRow(QVPieModelMapper* self, int firstRow);
int QVPieModelMapper_rowCount(const QVPieModelMapper* self);
void QVPieModelMapper_setRowCount(QVPieModelMapper* self, int rowCount);
void QVPieModelMapper_seriesReplaced(QVPieModelMapper* self);
void QVPieModelMapper_connect_seriesReplaced(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_modelReplaced(QVPieModelMapper* self);
void QVPieModelMapper_connect_modelReplaced(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_valuesColumnChanged(QVPieModelMapper* self);
void QVPieModelMapper_connect_valuesColumnChanged(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_labelsColumnChanged(QVPieModelMapper* self);
void QVPieModelMapper_connect_labelsColumnChanged(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_firstRowChanged(QVPieModelMapper* self);
void QVPieModelMapper_connect_firstRowChanged(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_rowCountChanged(QVPieModelMapper* self);
void QVPieModelMapper_connect_rowCountChanged(QVPieModelMapper* self, intptr_t slot);
struct miqt_string QVPieModelMapper_tr2(const char* s, const char* c);
struct miqt_string QVPieModelMapper_tr3(const char* s, const char* c, int n);

bool QVPieModelMapper_override_virtual_event(void* self, intptr_t slot);
bool QVPieModelMapper_virtualbase_event(void* self, QEvent* event);
bool QVPieModelMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QVPieModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QVPieModelMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QVPieModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QVPieModelMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QVPieModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QVPieModelMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QVPieModelMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QVPieModelMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QVPieModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QVPieModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QVPieModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

int QVPieModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
void QVPieModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
int QVPieModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
void QVPieModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
int QVPieModelMapper_protectedbase_valuesSection(bool* _dynamic_cast_ok, const void* self);
void QVPieModelMapper_protectedbase_setValuesSection(bool* _dynamic_cast_ok, void* self, int valuesSection);
int QVPieModelMapper_protectedbase_labelsSection(bool* _dynamic_cast_ok, const void* self);
void QVPieModelMapper_protectedbase_setLabelsSection(bool* _dynamic_cast_ok, void* self, int labelsSection);
int QVPieModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
void QVPieModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
QObject* QVPieModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QVPieModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QVPieModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QVPieModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QVPieModelMapper_delete(QVPieModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
