#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QAREASERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QAREASERIES_H

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
class QAreaSeries;
class QBrush;
class QChildEvent;
class QColor;
class QEvent;
class QFont;
class QLineSeries;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPen;
class QPointF;
class QTimerEvent;
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QAreaSeries QAreaSeries;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QLineSeries QLineSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QTimerEvent QTimerEvent;
#endif

QAreaSeries* QAreaSeries_new();
QAreaSeries* QAreaSeries_new2(QLineSeries* upperSeries);
QAreaSeries* QAreaSeries_new3(QObject* parent);
QAreaSeries* QAreaSeries_new4(QLineSeries* upperSeries, QLineSeries* lowerSeries);
void QAreaSeries_virtbase(QAreaSeries* src, QAbstractSeries** outptr_QAbstractSeries);
QMetaObject* QAreaSeries_metaObject(const QAreaSeries* self);
void* QAreaSeries_metacast(QAreaSeries* self, const char* param1);
struct miqt_string QAreaSeries_tr(const char* s);
int QAreaSeries_type(const QAreaSeries* self);
void QAreaSeries_setUpperSeries(QAreaSeries* self, QLineSeries* series);
QLineSeries* QAreaSeries_upperSeries(const QAreaSeries* self);
void QAreaSeries_setLowerSeries(QAreaSeries* self, QLineSeries* series);
QLineSeries* QAreaSeries_lowerSeries(const QAreaSeries* self);
void QAreaSeries_setPen(QAreaSeries* self, QPen* pen);
QPen* QAreaSeries_pen(const QAreaSeries* self);
void QAreaSeries_setBrush(QAreaSeries* self, QBrush* brush);
QBrush* QAreaSeries_brush(const QAreaSeries* self);
void QAreaSeries_setColor(QAreaSeries* self, QColor* color);
QColor* QAreaSeries_color(const QAreaSeries* self);
void QAreaSeries_setBorderColor(QAreaSeries* self, QColor* color);
QColor* QAreaSeries_borderColor(const QAreaSeries* self);
void QAreaSeries_setPointsVisible(QAreaSeries* self);
bool QAreaSeries_pointsVisible(const QAreaSeries* self);
void QAreaSeries_setPointLabelsFormat(QAreaSeries* self, struct miqt_string format);
struct miqt_string QAreaSeries_pointLabelsFormat(const QAreaSeries* self);
void QAreaSeries_setPointLabelsVisible(QAreaSeries* self);
bool QAreaSeries_pointLabelsVisible(const QAreaSeries* self);
void QAreaSeries_setPointLabelsFont(QAreaSeries* self, QFont* font);
QFont* QAreaSeries_pointLabelsFont(const QAreaSeries* self);
void QAreaSeries_setPointLabelsColor(QAreaSeries* self, QColor* color);
QColor* QAreaSeries_pointLabelsColor(const QAreaSeries* self);
void QAreaSeries_setPointLabelsClipping(QAreaSeries* self);
bool QAreaSeries_pointLabelsClipping(const QAreaSeries* self);
void QAreaSeries_clicked(QAreaSeries* self, QPointF* point);
void QAreaSeries_connect_clicked(QAreaSeries* self, intptr_t slot);
void QAreaSeries_hovered(QAreaSeries* self, QPointF* point, bool state);
void QAreaSeries_connect_hovered(QAreaSeries* self, intptr_t slot);
void QAreaSeries_pressed(QAreaSeries* self, QPointF* point);
void QAreaSeries_connect_pressed(QAreaSeries* self, intptr_t slot);
void QAreaSeries_released(QAreaSeries* self, QPointF* point);
void QAreaSeries_connect_released(QAreaSeries* self, intptr_t slot);
void QAreaSeries_doubleClicked(QAreaSeries* self, QPointF* point);
void QAreaSeries_connect_doubleClicked(QAreaSeries* self, intptr_t slot);
void QAreaSeries_selected(QAreaSeries* self);
void QAreaSeries_connect_selected(QAreaSeries* self, intptr_t slot);
void QAreaSeries_colorChanged(QAreaSeries* self, QColor* color);
void QAreaSeries_connect_colorChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_borderColorChanged(QAreaSeries* self, QColor* color);
void QAreaSeries_connect_borderColorChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_pointLabelsFormatChanged(QAreaSeries* self, struct miqt_string format);
void QAreaSeries_connect_pointLabelsFormatChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_pointLabelsVisibilityChanged(QAreaSeries* self, bool visible);
void QAreaSeries_connect_pointLabelsVisibilityChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_pointLabelsFontChanged(QAreaSeries* self, QFont* font);
void QAreaSeries_connect_pointLabelsFontChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_pointLabelsColorChanged(QAreaSeries* self, QColor* color);
void QAreaSeries_connect_pointLabelsColorChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_pointLabelsClippingChanged(QAreaSeries* self, bool clipping);
void QAreaSeries_connect_pointLabelsClippingChanged(QAreaSeries* self, intptr_t slot);
struct miqt_string QAreaSeries_tr2(const char* s, const char* c);
struct miqt_string QAreaSeries_tr3(const char* s, const char* c, int n);
void QAreaSeries_setPointsVisibleWithVisible(QAreaSeries* self, bool visible);
void QAreaSeries_setPointLabelsVisibleWithVisible(QAreaSeries* self, bool visible);
void QAreaSeries_setPointLabelsClippingWithEnabled(QAreaSeries* self, bool enabled);

bool QAreaSeries_override_virtual_type(void* self, intptr_t slot);
int QAreaSeries_virtualbase_type(const void* self);
bool QAreaSeries_override_virtual_event(void* self, intptr_t slot);
bool QAreaSeries_virtualbase_event(void* self, QEvent* event);
bool QAreaSeries_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAreaSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAreaSeries_override_virtual_timerEvent(void* self, intptr_t slot);
void QAreaSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAreaSeries_override_virtual_childEvent(void* self, intptr_t slot);
void QAreaSeries_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAreaSeries_override_virtual_customEvent(void* self, intptr_t slot);
void QAreaSeries_virtualbase_customEvent(void* self, QEvent* event);
bool QAreaSeries_override_virtual_connectNotify(void* self, intptr_t slot);
void QAreaSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAreaSeries_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAreaSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QAreaSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAreaSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAreaSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAreaSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAreaSeries_delete(QAreaSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
