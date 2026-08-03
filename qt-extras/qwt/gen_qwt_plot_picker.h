#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_PICKER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_PICKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QFont;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPainter;
class QPainterPath;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QRegion;
class QSize;
class QTimerEvent;
class QWheelEvent;
class QWidget;
class QwtEventPattern;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__KeyPattern)
typedef QwtEventPattern::KeyPattern QwtEventPattern__KeyPattern;
#else
class QwtEventPattern__KeyPattern;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__MousePattern)
typedef QwtEventPattern::MousePattern QwtEventPattern__MousePattern;
#else
class QwtEventPattern__MousePattern;
#endif
class QwtPicker;
class QwtPlot;
class QwtPlotPicker;
class QwtText;
class QwtWidgetOverlay;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtEventPattern QwtEventPattern;
typedef struct QwtEventPattern__KeyPattern QwtEventPattern__KeyPattern;
typedef struct QwtEventPattern__MousePattern QwtEventPattern__MousePattern;
typedef struct QwtPicker QwtPicker;
typedef struct QwtPlot QwtPlot;
typedef struct QwtPlotPicker QwtPlotPicker;
typedef struct QwtText QwtText;
typedef struct QwtWidgetOverlay QwtWidgetOverlay;
#endif

QwtPlotPicker* QwtPlotPicker_new(QWidget* canvas);
QwtPlotPicker* QwtPlotPicker_new2(int xAxis, int yAxis, QWidget* param3);
QwtPlotPicker* QwtPlotPicker_new3(int xAxis, int yAxis, int rubberBand, int trackerMode, QWidget* param5);
void QwtPlotPicker_virtbase(QwtPlotPicker* src, QwtPicker** outptr_QwtPicker);
QMetaObject* QwtPlotPicker_metaObject(const QwtPlotPicker* self);
void* QwtPlotPicker_metacast(QwtPlotPicker* self, const char* param1);
struct miqt_string QwtPlotPicker_tr(const char* s);
struct miqt_string QwtPlotPicker_trUtf8(const char* s);
void QwtPlotPicker_setAxis(QwtPlotPicker* self, int xAxis, int yAxis);
int QwtPlotPicker_xAxis(const QwtPlotPicker* self);
int QwtPlotPicker_yAxis(const QwtPlotPicker* self);
QwtPlot* QwtPlotPicker_plot(QwtPlotPicker* self);
QwtPlot* QwtPlotPicker_plot2(const QwtPlotPicker* self);
QWidget* QwtPlotPicker_canvas(QwtPlotPicker* self);
QWidget* QwtPlotPicker_canvas2(const QwtPlotPicker* self);
void QwtPlotPicker_selected(QwtPlotPicker* self, QPointF* pos);
void QwtPlotPicker_connect_selected(QwtPlotPicker* self, intptr_t slot);
void QwtPlotPicker_selectedWithRect(QwtPlotPicker* self, QRectF* rect);
void QwtPlotPicker_connect_selectedWithRect(QwtPlotPicker* self, intptr_t slot);
void QwtPlotPicker_selectedWithPa(QwtPlotPicker* self, struct miqt_array /* of QPointF* */  pa);
void QwtPlotPicker_connect_selectedWithPa(QwtPlotPicker* self, intptr_t slot);
void QwtPlotPicker_appended(QwtPlotPicker* self, QPointF* pos);
void QwtPlotPicker_connect_appended(QwtPlotPicker* self, intptr_t slot);
void QwtPlotPicker_moved(QwtPlotPicker* self, QPointF* pos);
void QwtPlotPicker_connect_moved(QwtPlotPicker* self, intptr_t slot);
QwtText* QwtPlotPicker_trackerText(const QwtPlotPicker* self, QPoint* param1);
QwtText* QwtPlotPicker_trackerTextF(const QwtPlotPicker* self, QPointF* param1);
void QwtPlotPicker_move(QwtPlotPicker* self, QPoint* param1);
void QwtPlotPicker_append(QwtPlotPicker* self, QPoint* param1);
bool QwtPlotPicker_end(QwtPlotPicker* self, bool ok);
struct miqt_string QwtPlotPicker_tr2(const char* s, const char* c);
struct miqt_string QwtPlotPicker_tr3(const char* s, const char* c, int n);
struct miqt_string QwtPlotPicker_trUtf82(const char* s, const char* c);
struct miqt_string QwtPlotPicker_trUtf83(const char* s, const char* c, int n);

bool QwtPlotPicker_override_virtual_setAxis(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_setAxis(void* self, int xAxis, int yAxis);
bool QwtPlotPicker_override_virtual_trackerText(void* self, intptr_t slot);
QwtText* QwtPlotPicker_virtualbase_trackerText(const void* self, QPoint* param1);
bool QwtPlotPicker_override_virtual_trackerTextF(void* self, intptr_t slot);
QwtText* QwtPlotPicker_virtualbase_trackerTextF(const void* self, QPointF* param1);
bool QwtPlotPicker_override_virtual_move(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_move(void* self, QPoint* param1);
bool QwtPlotPicker_override_virtual_append(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_append(void* self, QPoint* param1);
bool QwtPlotPicker_override_virtual_end(void* self, intptr_t slot);
bool QwtPlotPicker_virtualbase_end(void* self, bool ok);
bool QwtPlotPicker_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtPlotPicker_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QwtPlotPicker_override_virtual_pickArea(void* self, intptr_t slot);
QPainterPath* QwtPlotPicker_virtualbase_pickArea(const void* self);
bool QwtPlotPicker_override_virtual_drawRubberBand(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_drawRubberBand(const void* self, QPainter* param1);
bool QwtPlotPicker_override_virtual_drawTracker(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_drawTracker(const void* self, QPainter* param1);
bool QwtPlotPicker_override_virtual_rubberBandMask(void* self, intptr_t slot);
QRegion* QwtPlotPicker_virtualbase_rubberBandMask(const void* self);
bool QwtPlotPicker_override_virtual_trackerRect(void* self, intptr_t slot);
QRect* QwtPlotPicker_virtualbase_trackerRect(const void* self, QFont* param1);
bool QwtPlotPicker_override_virtual_transition(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_transition(void* self, QEvent* param1);
bool QwtPlotPicker_override_virtual_begin(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_begin(void* self);
bool QwtPlotPicker_override_virtual_remove(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_remove(void* self);
bool QwtPlotPicker_override_virtual_reset(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_reset(void* self);
bool QwtPlotPicker_override_virtual_widgetMousePressEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);
bool QwtPlotPicker_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtPlotPicker_override_virtual_widgetMouseDoubleClickEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_widgetMouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QwtPlotPicker_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);
bool QwtPlotPicker_override_virtual_widgetWheelEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1);
bool QwtPlotPicker_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);
bool QwtPlotPicker_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);
bool QwtPlotPicker_override_virtual_widgetEnterEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_widgetEnterEvent(void* self, QEvent* param1);
bool QwtPlotPicker_override_virtual_widgetLeaveEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_widgetLeaveEvent(void* self, QEvent* param1);
bool QwtPlotPicker_override_virtual_stretchSelection(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_stretchSelection(void* self, QSize* oldSize, QSize* newSize);
bool QwtPlotPicker_override_virtual_updateDisplay(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_updateDisplay(void* self);
bool QwtPlotPicker_override_virtual_event(void* self, intptr_t slot);
bool QwtPlotPicker_virtualbase_event(void* self, QEvent* event);
bool QwtPlotPicker_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtPlotPicker_override_virtual_childEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtPlotPicker_override_virtual_customEvent(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_customEvent(void* self, QEvent* event);
bool QwtPlotPicker_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtPlotPicker_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtPlotPicker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QwtPlotPicker_override_virtual_mouseMatch2(void* self, intptr_t slot);
bool QwtPlotPicker_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2);
bool QwtPlotPicker_override_virtual_keyMatch2(void* self, intptr_t slot);
bool QwtPlotPicker_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2);

QRectF* QwtPlotPicker_protectedbase_scaleRect(bool* _dynamic_cast_ok, const void* self);
QRectF* QwtPlotPicker_protectedbase_invTransform(bool* _dynamic_cast_ok, const void* self, QRect* param1);
QRect* QwtPlotPicker_protectedbase_transform(bool* _dynamic_cast_ok, const void* self, QRectF* param1);
QPointF* QwtPlotPicker_protectedbase_invTransformWithQPoint(bool* _dynamic_cast_ok, const void* self, QPoint* param1);
QPoint* QwtPlotPicker_protectedbase_transformWithQPointF(bool* _dynamic_cast_ok, const void* self, QPointF* param1);
QwtWidgetOverlay* QwtPlotPicker_protectedbase_rubberBandOverlay(bool* _dynamic_cast_ok, const void* self);
QwtWidgetOverlay* QwtPlotPicker_protectedbase_trackerOverlay(bool* _dynamic_cast_ok, const void* self);
QObject* QwtPlotPicker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtPlotPicker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtPlotPicker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtPlotPicker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtPlotPicker_delete(QwtPlotPicker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
