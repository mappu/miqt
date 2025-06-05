#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHXYMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QHXYMODELMAPPER_H

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
class QHXYModelMapper;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QXYModelMapper;
class QXYSeries;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHXYModelMapper QHXYModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QXYModelMapper QXYModelMapper;
typedef struct QXYSeries QXYSeries;
#endif

QHXYModelMapper* QHXYModelMapper_new();
QHXYModelMapper* QHXYModelMapper_new2(QObject* parent);
void QHXYModelMapper_virtbase(QHXYModelMapper* src, QXYModelMapper** outptr_QXYModelMapper);
QMetaObject* QHXYModelMapper_metaObject(const QHXYModelMapper* self);
void* QHXYModelMapper_metacast(QHXYModelMapper* self, const char* param1);
struct miqt_string QHXYModelMapper_tr(const char* s);
QAbstractItemModel* QHXYModelMapper_model(const QHXYModelMapper* self);
void QHXYModelMapper_setModel(QHXYModelMapper* self, QAbstractItemModel* model);
QXYSeries* QHXYModelMapper_series(const QHXYModelMapper* self);
void QHXYModelMapper_setSeries(QHXYModelMapper* self, QXYSeries* series);
int QHXYModelMapper_xRow(const QHXYModelMapper* self);
void QHXYModelMapper_setXRow(QHXYModelMapper* self, int xRow);
int QHXYModelMapper_yRow(const QHXYModelMapper* self);
void QHXYModelMapper_setYRow(QHXYModelMapper* self, int yRow);
int QHXYModelMapper_firstColumn(const QHXYModelMapper* self);
void QHXYModelMapper_setFirstColumn(QHXYModelMapper* self, int firstColumn);
int QHXYModelMapper_columnCount(const QHXYModelMapper* self);
void QHXYModelMapper_setColumnCount(QHXYModelMapper* self, int columnCount);
void QHXYModelMapper_seriesReplaced(QHXYModelMapper* self);
void QHXYModelMapper_connect_seriesReplaced(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_modelReplaced(QHXYModelMapper* self);
void QHXYModelMapper_connect_modelReplaced(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_xRowChanged(QHXYModelMapper* self);
void QHXYModelMapper_connect_xRowChanged(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_yRowChanged(QHXYModelMapper* self);
void QHXYModelMapper_connect_yRowChanged(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_firstColumnChanged(QHXYModelMapper* self);
void QHXYModelMapper_connect_firstColumnChanged(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_columnCountChanged(QHXYModelMapper* self);
void QHXYModelMapper_connect_columnCountChanged(QHXYModelMapper* self, intptr_t slot);
struct miqt_string QHXYModelMapper_tr2(const char* s, const char* c);
struct miqt_string QHXYModelMapper_tr3(const char* s, const char* c, int n);

bool QHXYModelMapper_override_virtual_event(void* self, intptr_t slot);
bool QHXYModelMapper_virtualbase_event(void* self, QEvent* event);
bool QHXYModelMapper_override_virtual_eventFilter(void* self, intptr_t slot);
bool QHXYModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QHXYModelMapper_override_virtual_timerEvent(void* self, intptr_t slot);
void QHXYModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QHXYModelMapper_override_virtual_childEvent(void* self, intptr_t slot);
void QHXYModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);
bool QHXYModelMapper_override_virtual_customEvent(void* self, intptr_t slot);
void QHXYModelMapper_virtualbase_customEvent(void* self, QEvent* event);
bool QHXYModelMapper_override_virtual_connectNotify(void* self, intptr_t slot);
void QHXYModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QHXYModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QHXYModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

int QHXYModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
void QHXYModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
int QHXYModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
void QHXYModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
int QHXYModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
void QHXYModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
int QHXYModelMapper_protectedbase_xSection(bool* _dynamic_cast_ok, const void* self);
void QHXYModelMapper_protectedbase_setXSection(bool* _dynamic_cast_ok, void* self, int xSection);
int QHXYModelMapper_protectedbase_ySection(bool* _dynamic_cast_ok, const void* self);
void QHXYModelMapper_protectedbase_setYSection(bool* _dynamic_cast_ok, void* self, int ySection);
QObject* QHXYModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QHXYModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QHXYModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QHXYModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QHXYModelMapper_delete(QHXYModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
