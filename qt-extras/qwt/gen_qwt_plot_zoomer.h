#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_ZOOMER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_ZOOMER_H

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
class QSizeF;
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
class QwtPlotPicker;
class QwtPlotZoomer;
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
typedef struct QSizeF QSizeF;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtEventPattern QwtEventPattern;
typedef struct QwtEventPattern__KeyPattern QwtEventPattern__KeyPattern;
typedef struct QwtEventPattern__MousePattern QwtEventPattern__MousePattern;
typedef struct QwtPicker QwtPicker;
typedef struct QwtPlotPicker QwtPlotPicker;
typedef struct QwtPlotZoomer QwtPlotZoomer;
typedef struct QwtText QwtText;
typedef struct QwtWidgetOverlay QwtWidgetOverlay;
#endif

QwtPlotZoomer* QwtPlotZoomer_new(QWidget* param1);
QwtPlotZoomer* QwtPlotZoomer_new2(int xAxis, int yAxis, QWidget* param3);
QwtPlotZoomer* QwtPlotZoomer_new3(QWidget* param1, bool doReplot);
QwtPlotZoomer* QwtPlotZoomer_new4(int xAxis, int yAxis, QWidget* param3, bool doReplot);
void QwtPlotZoomer_virtbase(QwtPlotZoomer* src, QwtPlotPicker** outptr_QwtPlotPicker);
QMetaObject* QwtPlotZoomer_metaObject(const QwtPlotZoomer* self);
void* QwtPlotZoomer_metacast(QwtPlotZoomer* self, const char* param1);
struct miqt_string QwtPlotZoomer_tr(const char* s);
struct miqt_string QwtPlotZoomer_trUtf8(const char* s);
void QwtPlotZoomer_setZoomBase(QwtPlotZoomer* self, bool doReplot);
void QwtPlotZoomer_setZoomBaseWithZoomBase(QwtPlotZoomer* self, QRectF* zoomBase);
QRectF* QwtPlotZoomer_zoomBase(const QwtPlotZoomer* self);
QRectF* QwtPlotZoomer_zoomRect(const QwtPlotZoomer* self);
void QwtPlotZoomer_setAxis(QwtPlotZoomer* self, int xAxis, int yAxis);
void QwtPlotZoomer_setMaxStackDepth(QwtPlotZoomer* self, int maxStackDepth);
int QwtPlotZoomer_maxStackDepth(const QwtPlotZoomer* self);
unsigned int QwtPlotZoomer_zoomRectIndex(const QwtPlotZoomer* self);
void QwtPlotZoomer_moveBy(QwtPlotZoomer* self, double dx, double dy);
void QwtPlotZoomer_moveTo(QwtPlotZoomer* self, QPointF* param1);
void QwtPlotZoomer_zoom(QwtPlotZoomer* self, QRectF* param1);
void QwtPlotZoomer_zoomWithOffset(QwtPlotZoomer* self, int offset);
void QwtPlotZoomer_zoomed(QwtPlotZoomer* self, QRectF* rect);
void QwtPlotZoomer_connect_zoomed(QwtPlotZoomer* self, intptr_t slot);
void QwtPlotZoomer_rescale(QwtPlotZoomer* self);
QSizeF* QwtPlotZoomer_minZoomSize(const QwtPlotZoomer* self);
void QwtPlotZoomer_widgetMouseReleaseEvent(QwtPlotZoomer* self, QMouseEvent* param1);
void QwtPlotZoomer_widgetKeyPressEvent(QwtPlotZoomer* self, QKeyEvent* param1);
void QwtPlotZoomer_begin(QwtPlotZoomer* self);
bool QwtPlotZoomer_end(QwtPlotZoomer* self, bool ok);
struct miqt_string QwtPlotZoomer_tr2(const char* s, const char* c);
struct miqt_string QwtPlotZoomer_tr3(const char* s, const char* c, int n);
struct miqt_string QwtPlotZoomer_trUtf82(const char* s, const char* c);
struct miqt_string QwtPlotZoomer_trUtf83(const char* s, const char* c, int n);

bool QwtPlotZoomer_override_virtual_setZoomBase(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_setZoomBase(void* self, bool doReplot);
bool QwtPlotZoomer_override_virtual_setZoomBaseWithZoomBase(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_setZoomBaseWithZoomBase(void* self, QRectF* zoomBase);
bool QwtPlotZoomer_override_virtual_setAxis(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_setAxis(void* self, int xAxis, int yAxis);
bool QwtPlotZoomer_override_virtual_moveTo(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_moveTo(void* self, QPointF* param1);
bool QwtPlotZoomer_override_virtual_zoom(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_zoom(void* self, QRectF* param1);
bool QwtPlotZoomer_override_virtual_zoomWithOffset(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_zoomWithOffset(void* self, int offset);
bool QwtPlotZoomer_override_virtual_rescale(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_rescale(void* self);
bool QwtPlotZoomer_override_virtual_minZoomSize(void* self, intptr_t slot);
QSizeF* QwtPlotZoomer_virtualbase_minZoomSize(const void* self);
bool QwtPlotZoomer_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtPlotZoomer_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);
bool QwtPlotZoomer_override_virtual_begin(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_begin(void* self);
bool QwtPlotZoomer_override_virtual_end(void* self, intptr_t slot);
bool QwtPlotZoomer_virtualbase_end(void* self, bool ok);
bool QwtPlotZoomer_override_virtual_trackerText(void* self, intptr_t slot);
QwtText* QwtPlotZoomer_virtualbase_trackerText(const void* self, QPoint* param1);
bool QwtPlotZoomer_override_virtual_trackerTextF(void* self, intptr_t slot);
QwtText* QwtPlotZoomer_virtualbase_trackerTextF(const void* self, QPointF* param1);
bool QwtPlotZoomer_override_virtual_move(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_move(void* self, QPoint* param1);
bool QwtPlotZoomer_override_virtual_append(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_append(void* self, QPoint* param1);
bool QwtPlotZoomer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtPlotZoomer_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QwtPlotZoomer_override_virtual_pickArea(void* self, intptr_t slot);
QPainterPath* QwtPlotZoomer_virtualbase_pickArea(const void* self);
bool QwtPlotZoomer_override_virtual_drawRubberBand(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_drawRubberBand(const void* self, QPainter* param1);
bool QwtPlotZoomer_override_virtual_drawTracker(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_drawTracker(const void* self, QPainter* param1);
bool QwtPlotZoomer_override_virtual_rubberBandMask(void* self, intptr_t slot);
QRegion* QwtPlotZoomer_virtualbase_rubberBandMask(const void* self);
bool QwtPlotZoomer_override_virtual_trackerRect(void* self, intptr_t slot);
QRect* QwtPlotZoomer_virtualbase_trackerRect(const void* self, QFont* param1);
bool QwtPlotZoomer_override_virtual_transition(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_transition(void* self, QEvent* param1);
bool QwtPlotZoomer_override_virtual_remove(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_remove(void* self);
bool QwtPlotZoomer_override_virtual_reset(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_reset(void* self);
bool QwtPlotZoomer_override_virtual_widgetMousePressEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);
bool QwtPlotZoomer_override_virtual_widgetMouseDoubleClickEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_widgetMouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QwtPlotZoomer_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);
bool QwtPlotZoomer_override_virtual_widgetWheelEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1);
bool QwtPlotZoomer_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);
bool QwtPlotZoomer_override_virtual_widgetEnterEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_widgetEnterEvent(void* self, QEvent* param1);
bool QwtPlotZoomer_override_virtual_widgetLeaveEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_widgetLeaveEvent(void* self, QEvent* param1);
bool QwtPlotZoomer_override_virtual_stretchSelection(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_stretchSelection(void* self, QSize* oldSize, QSize* newSize);
bool QwtPlotZoomer_override_virtual_updateDisplay(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_updateDisplay(void* self);
bool QwtPlotZoomer_override_virtual_event(void* self, intptr_t slot);
bool QwtPlotZoomer_virtualbase_event(void* self, QEvent* event);
bool QwtPlotZoomer_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtPlotZoomer_override_virtual_childEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtPlotZoomer_override_virtual_customEvent(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_customEvent(void* self, QEvent* event);
bool QwtPlotZoomer_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtPlotZoomer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtPlotZoomer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QwtPlotZoomer_override_virtual_mouseMatch2(void* self, intptr_t slot);
bool QwtPlotZoomer_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2);
bool QwtPlotZoomer_override_virtual_keyMatch2(void* self, intptr_t slot);
bool QwtPlotZoomer_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2);

QRectF* QwtPlotZoomer_protectedbase_scaleRect(bool* _dynamic_cast_ok, const void* self);
QRectF* QwtPlotZoomer_protectedbase_invTransform(bool* _dynamic_cast_ok, const void* self, QRect* param1);
QRect* QwtPlotZoomer_protectedbase_transform(bool* _dynamic_cast_ok, const void* self, QRectF* param1);
QwtWidgetOverlay* QwtPlotZoomer_protectedbase_rubberBandOverlay(bool* _dynamic_cast_ok, const void* self);
QwtWidgetOverlay* QwtPlotZoomer_protectedbase_trackerOverlay(bool* _dynamic_cast_ok, const void* self);
QObject* QwtPlotZoomer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtPlotZoomer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtPlotZoomer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtPlotZoomer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtPlotZoomer_delete(QwtPlotZoomer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
