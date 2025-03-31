#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBARSET_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBARSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBarSet;
class QBrush;
class QChildEvent;
class QColor;
class QEvent;
class QFont;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPen;
class QTimerEvent;
#else
typedef struct QBarSet QBarSet;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QTimerEvent QTimerEvent;
#endif

QBarSet* QBarSet_new(struct miqt_string label);
QBarSet* QBarSet_new2(struct miqt_string label, QObject* parent);
void QBarSet_virtbase(QBarSet* src, QObject** outptr_QObject);
QMetaObject* QBarSet_metaObject(const QBarSet* self);
void* QBarSet_metacast(QBarSet* self, const char* param1);
struct miqt_string QBarSet_tr(const char* s);
void QBarSet_setLabel(QBarSet* self, struct miqt_string label);
struct miqt_string QBarSet_label(const QBarSet* self);
void QBarSet_append(QBarSet* self, const double value);
void QBarSet_appendWithValues(QBarSet* self, struct miqt_array /* of double */  values);
QBarSet* QBarSet_operatorShiftLeft(QBarSet* self, const double* value);
void QBarSet_insert(QBarSet* self, const int index, const double value);
void QBarSet_remove(QBarSet* self, const int index);
void QBarSet_replace(QBarSet* self, const int index, const double value);
double QBarSet_at(const QBarSet* self, const int index);
double QBarSet_operatorSubscript(const QBarSet* self, const int index);
int QBarSet_count(const QBarSet* self);
double QBarSet_sum(const QBarSet* self);
void QBarSet_setPen(QBarSet* self, QPen* pen);
QPen* QBarSet_pen(const QBarSet* self);
void QBarSet_setBrush(QBarSet* self, QBrush* brush);
QBrush* QBarSet_brush(const QBarSet* self);
void QBarSet_setLabelBrush(QBarSet* self, QBrush* brush);
QBrush* QBarSet_labelBrush(const QBarSet* self);
void QBarSet_setLabelFont(QBarSet* self, QFont* font);
QFont* QBarSet_labelFont(const QBarSet* self);
QColor* QBarSet_color(QBarSet* self);
void QBarSet_setColor(QBarSet* self, QColor* color);
QColor* QBarSet_borderColor(QBarSet* self);
void QBarSet_setBorderColor(QBarSet* self, QColor* color);
QColor* QBarSet_labelColor(QBarSet* self);
void QBarSet_setLabelColor(QBarSet* self, QColor* color);
QColor* QBarSet_selectedColor(const QBarSet* self);
void QBarSet_setSelectedColor(QBarSet* self, QColor* color);
bool QBarSet_isBarSelected(const QBarSet* self, int index);
void QBarSet_selectBar(QBarSet* self, int index);
void QBarSet_deselectBar(QBarSet* self, int index);
void QBarSet_setBarSelected(QBarSet* self, int index, bool selected);
void QBarSet_selectAllBars(QBarSet* self);
void QBarSet_deselectAllBars(QBarSet* self);
void QBarSet_selectBars(QBarSet* self, struct miqt_array /* of int */  indexes);
void QBarSet_deselectBars(QBarSet* self, struct miqt_array /* of int */  indexes);
void QBarSet_toggleSelection(QBarSet* self, struct miqt_array /* of int */  indexes);
struct miqt_array /* of int */  QBarSet_selectedBars(const QBarSet* self);
void QBarSet_clicked(QBarSet* self, int index);
void QBarSet_connect_clicked(QBarSet* self, intptr_t slot);
void QBarSet_hovered(QBarSet* self, bool status, int index);
void QBarSet_connect_hovered(QBarSet* self, intptr_t slot);
void QBarSet_pressed(QBarSet* self, int index);
void QBarSet_connect_pressed(QBarSet* self, intptr_t slot);
void QBarSet_released(QBarSet* self, int index);
void QBarSet_connect_released(QBarSet* self, intptr_t slot);
void QBarSet_doubleClicked(QBarSet* self, int index);
void QBarSet_connect_doubleClicked(QBarSet* self, intptr_t slot);
void QBarSet_penChanged(QBarSet* self);
void QBarSet_connect_penChanged(QBarSet* self, intptr_t slot);
void QBarSet_brushChanged(QBarSet* self);
void QBarSet_connect_brushChanged(QBarSet* self, intptr_t slot);
void QBarSet_labelChanged(QBarSet* self);
void QBarSet_connect_labelChanged(QBarSet* self, intptr_t slot);
void QBarSet_labelBrushChanged(QBarSet* self);
void QBarSet_connect_labelBrushChanged(QBarSet* self, intptr_t slot);
void QBarSet_labelFontChanged(QBarSet* self);
void QBarSet_connect_labelFontChanged(QBarSet* self, intptr_t slot);
void QBarSet_colorChanged(QBarSet* self, QColor* color);
void QBarSet_connect_colorChanged(QBarSet* self, intptr_t slot);
void QBarSet_borderColorChanged(QBarSet* self, QColor* color);
void QBarSet_connect_borderColorChanged(QBarSet* self, intptr_t slot);
void QBarSet_labelColorChanged(QBarSet* self, QColor* color);
void QBarSet_connect_labelColorChanged(QBarSet* self, intptr_t slot);
void QBarSet_selectedColorChanged(QBarSet* self, QColor* color);
void QBarSet_connect_selectedColorChanged(QBarSet* self, intptr_t slot);
void QBarSet_valuesAdded(QBarSet* self, int index, int count);
void QBarSet_connect_valuesAdded(QBarSet* self, intptr_t slot);
void QBarSet_valuesRemoved(QBarSet* self, int index, int count);
void QBarSet_connect_valuesRemoved(QBarSet* self, intptr_t slot);
void QBarSet_valueChanged(QBarSet* self, int index);
void QBarSet_connect_valueChanged(QBarSet* self, intptr_t slot);
void QBarSet_selectedBarsChanged(QBarSet* self, struct miqt_array /* of int */  indexes);
void QBarSet_connect_selectedBarsChanged(QBarSet* self, intptr_t slot);
struct miqt_string QBarSet_tr2(const char* s, const char* c);
struct miqt_string QBarSet_tr3(const char* s, const char* c, int n);
void QBarSet_remove2(QBarSet* self, const int index, const int count);
bool QBarSet_override_virtual_event(void* self, intptr_t slot);
bool QBarSet_virtualbase_event(void* self, QEvent* event);
bool QBarSet_override_virtual_eventFilter(void* self, intptr_t slot);
bool QBarSet_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QBarSet_override_virtual_timerEvent(void* self, intptr_t slot);
void QBarSet_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QBarSet_override_virtual_childEvent(void* self, intptr_t slot);
void QBarSet_virtualbase_childEvent(void* self, QChildEvent* event);
bool QBarSet_override_virtual_customEvent(void* self, intptr_t slot);
void QBarSet_virtualbase_customEvent(void* self, QEvent* event);
bool QBarSet_override_virtual_connectNotify(void* self, intptr_t slot);
void QBarSet_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QBarSet_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QBarSet_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QBarSet_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QBarSet_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QBarSet_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QBarSet_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QBarSet_delete(QBarSet* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
