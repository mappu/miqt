#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBOXSET_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBOXSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
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

QBoxSet* QBoxSet_new();
QBoxSet* QBoxSet_new2(const double le, const double lq, const double m, const double uq, const double ue);
QBoxSet* QBoxSet_new3(struct miqt_string label);
QBoxSet* QBoxSet_new4(struct miqt_string label, QObject* parent);
QBoxSet* QBoxSet_new5(const double le, const double lq, const double m, const double uq, const double ue, struct miqt_string label);
QBoxSet* QBoxSet_new6(const double le, const double lq, const double m, const double uq, const double ue, struct miqt_string label, QObject* parent);
void QBoxSet_virtbase(QBoxSet* src, QObject** outptr_QObject);
QMetaObject* QBoxSet_metaObject(const QBoxSet* self);
void* QBoxSet_metacast(QBoxSet* self, const char* param1);
struct miqt_string QBoxSet_tr(const char* s);
void QBoxSet_append(QBoxSet* self, const double value);
void QBoxSet_appendWithValues(QBoxSet* self, struct miqt_array /* of double */  values);
void QBoxSet_clear(QBoxSet* self);
void QBoxSet_setLabel(QBoxSet* self, struct miqt_string label);
struct miqt_string QBoxSet_label(const QBoxSet* self);
QBoxSet* QBoxSet_operatorShiftLeft(QBoxSet* self, const double* value);
void QBoxSet_setValue(QBoxSet* self, const int index, const double value);
double QBoxSet_at(const QBoxSet* self, const int index);
double QBoxSet_operatorSubscript(const QBoxSet* self, const int index);
int QBoxSet_count(const QBoxSet* self);
void QBoxSet_setPen(QBoxSet* self, QPen* pen);
QPen* QBoxSet_pen(const QBoxSet* self);
void QBoxSet_setBrush(QBoxSet* self, QBrush* brush);
QBrush* QBoxSet_brush(const QBoxSet* self);
void QBoxSet_clicked(QBoxSet* self);
void QBoxSet_connect_clicked(QBoxSet* self, intptr_t slot);
void QBoxSet_hovered(QBoxSet* self, bool status);
void QBoxSet_connect_hovered(QBoxSet* self, intptr_t slot);
void QBoxSet_pressed(QBoxSet* self);
void QBoxSet_connect_pressed(QBoxSet* self, intptr_t slot);
void QBoxSet_released(QBoxSet* self);
void QBoxSet_connect_released(QBoxSet* self, intptr_t slot);
void QBoxSet_doubleClicked(QBoxSet* self);
void QBoxSet_connect_doubleClicked(QBoxSet* self, intptr_t slot);
void QBoxSet_penChanged(QBoxSet* self);
void QBoxSet_connect_penChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_brushChanged(QBoxSet* self);
void QBoxSet_connect_brushChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_valuesChanged(QBoxSet* self);
void QBoxSet_connect_valuesChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_valueChanged(QBoxSet* self, int index);
void QBoxSet_connect_valueChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_cleared(QBoxSet* self);
void QBoxSet_connect_cleared(QBoxSet* self, intptr_t slot);
struct miqt_string QBoxSet_tr2(const char* s, const char* c);
struct miqt_string QBoxSet_tr3(const char* s, const char* c, int n);

bool QBoxSet_override_virtual_event(void* self, intptr_t slot);
bool QBoxSet_virtualbase_event(void* self, QEvent* event);
bool QBoxSet_override_virtual_eventFilter(void* self, intptr_t slot);
bool QBoxSet_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QBoxSet_override_virtual_timerEvent(void* self, intptr_t slot);
void QBoxSet_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QBoxSet_override_virtual_childEvent(void* self, intptr_t slot);
void QBoxSet_virtualbase_childEvent(void* self, QChildEvent* event);
bool QBoxSet_override_virtual_customEvent(void* self, intptr_t slot);
void QBoxSet_virtualbase_customEvent(void* self, QEvent* event);
bool QBoxSet_override_virtual_connectNotify(void* self, intptr_t slot);
void QBoxSet_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QBoxSet_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QBoxSet_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QBoxSet_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QBoxSet_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QBoxSet_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QBoxSet_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QBoxSet_delete(QBoxSet* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
