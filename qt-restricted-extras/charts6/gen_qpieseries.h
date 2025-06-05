#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPIESERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPIESERIES_H

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
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPieSeries;
class QPieSlice;
class QTimerEvent;
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPieSeries QPieSeries;
typedef struct QPieSlice QPieSlice;
typedef struct QTimerEvent QTimerEvent;
#endif

QPieSeries* QPieSeries_new();
QPieSeries* QPieSeries_new2(QObject* parent);
void QPieSeries_virtbase(QPieSeries* src, QAbstractSeries** outptr_QAbstractSeries);
QMetaObject* QPieSeries_metaObject(const QPieSeries* self);
void* QPieSeries_metacast(QPieSeries* self, const char* param1);
struct miqt_string QPieSeries_tr(const char* s);
int QPieSeries_type(const QPieSeries* self);
bool QPieSeries_append(QPieSeries* self, QPieSlice* slice);
bool QPieSeries_appendWithSlices(QPieSeries* self, struct miqt_array /* of QPieSlice* */  slices);
QPieSeries* QPieSeries_operatorShiftLeft(QPieSeries* self, QPieSlice* slice);
QPieSlice* QPieSeries_append2(QPieSeries* self, struct miqt_string label, double value);
bool QPieSeries_insert(QPieSeries* self, int index, QPieSlice* slice);
bool QPieSeries_remove(QPieSeries* self, QPieSlice* slice);
bool QPieSeries_take(QPieSeries* self, QPieSlice* slice);
void QPieSeries_clear(QPieSeries* self);
struct miqt_array /* of QPieSlice* */  QPieSeries_slices(const QPieSeries* self);
int QPieSeries_count(const QPieSeries* self);
bool QPieSeries_isEmpty(const QPieSeries* self);
double QPieSeries_sum(const QPieSeries* self);
void QPieSeries_setHoleSize(QPieSeries* self, double holeSize);
double QPieSeries_holeSize(const QPieSeries* self);
void QPieSeries_setHorizontalPosition(QPieSeries* self, double relativePosition);
double QPieSeries_horizontalPosition(const QPieSeries* self);
void QPieSeries_setVerticalPosition(QPieSeries* self, double relativePosition);
double QPieSeries_verticalPosition(const QPieSeries* self);
void QPieSeries_setPieSize(QPieSeries* self, double relativeSize);
double QPieSeries_pieSize(const QPieSeries* self);
void QPieSeries_setPieStartAngle(QPieSeries* self, double startAngle);
double QPieSeries_pieStartAngle(const QPieSeries* self);
void QPieSeries_setPieEndAngle(QPieSeries* self, double endAngle);
double QPieSeries_pieEndAngle(const QPieSeries* self);
void QPieSeries_setLabelsVisible(QPieSeries* self);
void QPieSeries_setLabelsPosition(QPieSeries* self, int position);
void QPieSeries_added(QPieSeries* self, struct miqt_array /* of QPieSlice* */  slices);
void QPieSeries_connect_added(QPieSeries* self, intptr_t slot);
void QPieSeries_removed(QPieSeries* self, struct miqt_array /* of QPieSlice* */  slices);
void QPieSeries_connect_removed(QPieSeries* self, intptr_t slot);
void QPieSeries_clicked(QPieSeries* self, QPieSlice* slice);
void QPieSeries_connect_clicked(QPieSeries* self, intptr_t slot);
void QPieSeries_hovered(QPieSeries* self, QPieSlice* slice, bool state);
void QPieSeries_connect_hovered(QPieSeries* self, intptr_t slot);
void QPieSeries_pressed(QPieSeries* self, QPieSlice* slice);
void QPieSeries_connect_pressed(QPieSeries* self, intptr_t slot);
void QPieSeries_released(QPieSeries* self, QPieSlice* slice);
void QPieSeries_connect_released(QPieSeries* self, intptr_t slot);
void QPieSeries_doubleClicked(QPieSeries* self, QPieSlice* slice);
void QPieSeries_connect_doubleClicked(QPieSeries* self, intptr_t slot);
void QPieSeries_countChanged(QPieSeries* self);
void QPieSeries_connect_countChanged(QPieSeries* self, intptr_t slot);
void QPieSeries_sumChanged(QPieSeries* self);
void QPieSeries_connect_sumChanged(QPieSeries* self, intptr_t slot);
struct miqt_string QPieSeries_tr2(const char* s, const char* c);
struct miqt_string QPieSeries_tr3(const char* s, const char* c, int n);
void QPieSeries_setLabelsVisibleWithVisible(QPieSeries* self, bool visible);

bool QPieSeries_override_virtual_type(void* self, intptr_t slot);
int QPieSeries_virtualbase_type(const void* self);
bool QPieSeries_override_virtual_event(void* self, intptr_t slot);
bool QPieSeries_virtualbase_event(void* self, QEvent* event);
bool QPieSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPieSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPieSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QPieSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPieSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QPieSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPieSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QPieSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QPieSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QPieSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPieSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPieSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QPieSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPieSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPieSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPieSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QPieSeries_delete(QPieSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
