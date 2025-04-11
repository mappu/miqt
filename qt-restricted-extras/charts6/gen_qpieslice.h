#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPIESLICE_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPIESLICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QChildEvent;
class QColor;
class QEvent;
class QFont;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPen;
class QPieSeries;
class QPieSlice;
class QTimerEvent;
#else
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QPieSeries QPieSeries;
typedef struct QPieSlice QPieSlice;
typedef struct QTimerEvent QTimerEvent;
#endif

QPieSlice* QPieSlice_new();
QPieSlice* QPieSlice_new2(struct miqt_string label, double value);
QPieSlice* QPieSlice_new3(QObject* parent);
QPieSlice* QPieSlice_new4(struct miqt_string label, double value, QObject* parent);
void QPieSlice_virtbase(QPieSlice* src, QObject** outptr_QObject);
QMetaObject* QPieSlice_metaObject(const QPieSlice* self);
void* QPieSlice_metacast(QPieSlice* self, const char* param1);
struct miqt_string QPieSlice_tr(const char* s);
void QPieSlice_setLabel(QPieSlice* self, struct miqt_string label);
struct miqt_string QPieSlice_label(const QPieSlice* self);
void QPieSlice_setValue(QPieSlice* self, double value);
double QPieSlice_value(const QPieSlice* self);
void QPieSlice_setLabelVisible(QPieSlice* self);
bool QPieSlice_isLabelVisible(const QPieSlice* self);
int QPieSlice_labelPosition(QPieSlice* self);
void QPieSlice_setLabelPosition(QPieSlice* self, int position);
void QPieSlice_setExploded(QPieSlice* self);
bool QPieSlice_isExploded(const QPieSlice* self);
void QPieSlice_setPen(QPieSlice* self, QPen* pen);
QPen* QPieSlice_pen(const QPieSlice* self);
QColor* QPieSlice_borderColor(QPieSlice* self);
void QPieSlice_setBorderColor(QPieSlice* self, QColor* color);
int QPieSlice_borderWidth(QPieSlice* self);
void QPieSlice_setBorderWidth(QPieSlice* self, int width);
void QPieSlice_setBrush(QPieSlice* self, QBrush* brush);
QBrush* QPieSlice_brush(const QPieSlice* self);
QColor* QPieSlice_color(QPieSlice* self);
void QPieSlice_setColor(QPieSlice* self, QColor* color);
void QPieSlice_setLabelBrush(QPieSlice* self, QBrush* brush);
QBrush* QPieSlice_labelBrush(const QPieSlice* self);
QColor* QPieSlice_labelColor(QPieSlice* self);
void QPieSlice_setLabelColor(QPieSlice* self, QColor* color);
void QPieSlice_setLabelFont(QPieSlice* self, QFont* font);
QFont* QPieSlice_labelFont(const QPieSlice* self);
void QPieSlice_setLabelArmLengthFactor(QPieSlice* self, double factor);
double QPieSlice_labelArmLengthFactor(const QPieSlice* self);
void QPieSlice_setExplodeDistanceFactor(QPieSlice* self, double factor);
double QPieSlice_explodeDistanceFactor(const QPieSlice* self);
double QPieSlice_percentage(const QPieSlice* self);
double QPieSlice_startAngle(const QPieSlice* self);
double QPieSlice_angleSpan(const QPieSlice* self);
QPieSeries* QPieSlice_series(const QPieSlice* self);
void QPieSlice_clicked(QPieSlice* self);
void QPieSlice_connect_clicked(QPieSlice* self, intptr_t slot);
void QPieSlice_hovered(QPieSlice* self, bool state);
void QPieSlice_connect_hovered(QPieSlice* self, intptr_t slot);
void QPieSlice_pressed(QPieSlice* self);
void QPieSlice_connect_pressed(QPieSlice* self, intptr_t slot);
void QPieSlice_released(QPieSlice* self);
void QPieSlice_connect_released(QPieSlice* self, intptr_t slot);
void QPieSlice_doubleClicked(QPieSlice* self);
void QPieSlice_connect_doubleClicked(QPieSlice* self, intptr_t slot);
void QPieSlice_labelChanged(QPieSlice* self);
void QPieSlice_connect_labelChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_valueChanged(QPieSlice* self);
void QPieSlice_connect_valueChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_labelVisibleChanged(QPieSlice* self);
void QPieSlice_connect_labelVisibleChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_penChanged(QPieSlice* self);
void QPieSlice_connect_penChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_brushChanged(QPieSlice* self);
void QPieSlice_connect_brushChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_labelBrushChanged(QPieSlice* self);
void QPieSlice_connect_labelBrushChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_labelFontChanged(QPieSlice* self);
void QPieSlice_connect_labelFontChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_percentageChanged(QPieSlice* self);
void QPieSlice_connect_percentageChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_startAngleChanged(QPieSlice* self);
void QPieSlice_connect_startAngleChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_angleSpanChanged(QPieSlice* self);
void QPieSlice_connect_angleSpanChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_colorChanged(QPieSlice* self);
void QPieSlice_connect_colorChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_borderColorChanged(QPieSlice* self);
void QPieSlice_connect_borderColorChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_borderWidthChanged(QPieSlice* self);
void QPieSlice_connect_borderWidthChanged(QPieSlice* self, intptr_t slot);
void QPieSlice_labelColorChanged(QPieSlice* self);
void QPieSlice_connect_labelColorChanged(QPieSlice* self, intptr_t slot);
struct miqt_string QPieSlice_tr2(const char* s, const char* c);
struct miqt_string QPieSlice_tr3(const char* s, const char* c, int n);
void QPieSlice_setLabelVisibleWithVisible(QPieSlice* self, bool visible);
void QPieSlice_setExplodedWithExploded(QPieSlice* self, bool exploded);
bool QPieSlice_override_virtual_event(void* self, intptr_t slot);
bool QPieSlice_virtualbase_event(void* self, QEvent* event);
bool QPieSlice_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPieSlice_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPieSlice_override_virtual_timerEvent(void* self, intptr_t slot);
void QPieSlice_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPieSlice_override_virtual_childEvent(void* self, intptr_t slot);
void QPieSlice_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPieSlice_override_virtual_customEvent(void* self, intptr_t slot);
void QPieSlice_virtualbase_customEvent(void* self, QEvent* event);
bool QPieSlice_override_virtual_connectNotify(void* self, intptr_t slot);
void QPieSlice_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPieSlice_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPieSlice_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QPieSlice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPieSlice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPieSlice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPieSlice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QPieSlice_delete(QPieSlice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
