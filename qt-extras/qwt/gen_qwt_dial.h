#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_DIAL_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_DIAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QPointF;
class QRect;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QwtAbstractScale;
class QwtAbstractScaleDraw;
class QwtAbstractSlider;
class QwtDial;
class QwtDialNeedle;
class QwtRoundScaleDraw;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtAbstractScale QwtAbstractScale;
typedef struct QwtAbstractScaleDraw QwtAbstractScaleDraw;
typedef struct QwtAbstractSlider QwtAbstractSlider;
typedef struct QwtDial QwtDial;
typedef struct QwtDialNeedle QwtDialNeedle;
typedef struct QwtRoundScaleDraw QwtRoundScaleDraw;
#endif

QwtDial* QwtDial_new(QWidget* parent);
QwtDial* QwtDial_new2();
void QwtDial_virtbase(QwtDial* src, QwtAbstractSlider** outptr_QwtAbstractSlider);
QMetaObject* QwtDial_metaObject(const QwtDial* self);
void* QwtDial_metacast(QwtDial* self, const char* param1);
struct miqt_string QwtDial_tr(const char* s);
struct miqt_string QwtDial_trUtf8(const char* s);
void QwtDial_setFrameShadow(QwtDial* self, int frameShadow);
int QwtDial_frameShadow(const QwtDial* self);
void QwtDial_setLineWidth(QwtDial* self, int lineWidth);
int QwtDial_lineWidth(const QwtDial* self);
void QwtDial_setMode(QwtDial* self, int mode);
int QwtDial_mode(const QwtDial* self);
void QwtDial_setScaleArc(QwtDial* self, double minArc, double maxArc);
void QwtDial_setMinScaleArc(QwtDial* self, double minScaleArc);
double QwtDial_minScaleArc(const QwtDial* self);
void QwtDial_setMaxScaleArc(QwtDial* self, double maxScaleArc);
double QwtDial_maxScaleArc(const QwtDial* self);
void QwtDial_setOrigin(QwtDial* self, double origin);
double QwtDial_origin(const QwtDial* self);
void QwtDial_setNeedle(QwtDial* self, QwtDialNeedle* needle);
QwtDialNeedle* QwtDial_needle(const QwtDial* self);
QwtDialNeedle* QwtDial_needle2(QwtDial* self);
QRect* QwtDial_boundingRect(const QwtDial* self);
QRect* QwtDial_innerRect(const QwtDial* self);
QRect* QwtDial_scaleInnerRect(const QwtDial* self);
QSize* QwtDial_sizeHint(const QwtDial* self);
QSize* QwtDial_minimumSizeHint(const QwtDial* self);
void QwtDial_setScaleDraw(QwtDial* self, QwtRoundScaleDraw* scaleDraw);
QwtRoundScaleDraw* QwtDial_scaleDraw(QwtDial* self);
QwtRoundScaleDraw* QwtDial_scaleDraw2(const QwtDial* self);
void QwtDial_wheelEvent(QwtDial* self, QWheelEvent* param1);
void QwtDial_paintEvent(QwtDial* self, QPaintEvent* param1);
void QwtDial_changeEvent(QwtDial* self, QEvent* param1);
void QwtDial_drawFrame(QwtDial* self, QPainter* param1);
void QwtDial_drawContents(const QwtDial* self, QPainter* param1);
void QwtDial_drawFocusIndicator(const QwtDial* self, QPainter* param1);
void QwtDial_drawScale(const QwtDial* self, QPainter* param1, QPointF* center, double radius);
void QwtDial_drawScaleContents(const QwtDial* self, QPainter* painter, QPointF* center, double radius);
void QwtDial_drawNeedle(const QwtDial* self, QPainter* param1, QPointF* param2, double radius, double direction, int param5);
double QwtDial_scrolledTo(const QwtDial* self, QPoint* param1);
bool QwtDial_isScrollPosition(const QwtDial* self, QPoint* param1);
void QwtDial_sliderChange(QwtDial* self);
void QwtDial_scaleChange(QwtDial* self);
struct miqt_string QwtDial_tr2(const char* s, const char* c);
struct miqt_string QwtDial_tr3(const char* s, const char* c, int n);
struct miqt_string QwtDial_trUtf82(const char* s, const char* c);
struct miqt_string QwtDial_trUtf83(const char* s, const char* c, int n);

bool QwtDial_override_virtual_setOrigin(void* self, intptr_t slot);
void QwtDial_virtualbase_setOrigin(void* self, double origin);
bool QwtDial_override_virtual_scaleInnerRect(void* self, intptr_t slot);
QRect* QwtDial_virtualbase_scaleInnerRect(const void* self);
bool QwtDial_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtDial_virtualbase_sizeHint(const void* self);
bool QwtDial_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtDial_virtualbase_minimumSizeHint(const void* self);
bool QwtDial_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QwtDial_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtDial_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtDial_override_virtual_drawFrame(void* self, intptr_t slot);
void QwtDial_virtualbase_drawFrame(void* self, QPainter* param1);
bool QwtDial_override_virtual_drawContents(void* self, intptr_t slot);
void QwtDial_virtualbase_drawContents(const void* self, QPainter* param1);
bool QwtDial_override_virtual_drawFocusIndicator(void* self, intptr_t slot);
void QwtDial_virtualbase_drawFocusIndicator(const void* self, QPainter* param1);
bool QwtDial_override_virtual_drawScale(void* self, intptr_t slot);
void QwtDial_virtualbase_drawScale(const void* self, QPainter* param1, QPointF* center, double radius);
bool QwtDial_override_virtual_drawScaleContents(void* self, intptr_t slot);
void QwtDial_virtualbase_drawScaleContents(const void* self, QPainter* painter, QPointF* center, double radius);
bool QwtDial_override_virtual_drawNeedle(void* self, intptr_t slot);
void QwtDial_virtualbase_drawNeedle(const void* self, QPainter* param1, QPointF* param2, double radius, double direction, int param5);
bool QwtDial_override_virtual_scrolledTo(void* self, intptr_t slot);
double QwtDial_virtualbase_scrolledTo(const void* self, QPoint* param1);
bool QwtDial_override_virtual_isScrollPosition(void* self, intptr_t slot);
bool QwtDial_virtualbase_isScrollPosition(const void* self, QPoint* param1);
bool QwtDial_override_virtual_sliderChange(void* self, intptr_t slot);
void QwtDial_virtualbase_sliderChange(void* self);
bool QwtDial_override_virtual_scaleChange(void* self, intptr_t slot);
void QwtDial_virtualbase_scaleChange(void* self);
bool QwtDial_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QwtDial_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtDial_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QwtDial_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QwtDial_override_virtual_devType(void* self, intptr_t slot);
int QwtDial_virtualbase_devType(const void* self);
bool QwtDial_override_virtual_setVisible(void* self, intptr_t slot);
void QwtDial_virtualbase_setVisible(void* self, bool visible);
bool QwtDial_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtDial_virtualbase_heightForWidth(const void* self, int param1);
bool QwtDial_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtDial_virtualbase_hasHeightForWidth(const void* self);
bool QwtDial_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtDial_virtualbase_paintEngine(const void* self);
bool QwtDial_override_virtual_event(void* self, intptr_t slot);
bool QwtDial_virtualbase_event(void* self, QEvent* event);
bool QwtDial_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtDial_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtDial_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtDial_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtDial_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtDial_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtDial_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtDial_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtDial_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtDial_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtDial_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtDial_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtDial_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtDial_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtDial_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtDial_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtDial_override_virtual_showEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtDial_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtDial_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtDial_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtDial_override_virtual_metric(void* self, intptr_t slot);
int QwtDial_virtualbase_metric(const void* self, int param1);
bool QwtDial_override_virtual_initPainter(void* self, intptr_t slot);
void QwtDial_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtDial_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtDial_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtDial_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtDial_virtualbase_sharedPainter(const void* self);
bool QwtDial_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtDial_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtDial_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtDial_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtDial_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtDial_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtDial_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtDial_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtDial_override_virtual_childEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtDial_override_virtual_customEvent(void* self, intptr_t slot);
void QwtDial_virtualbase_customEvent(void* self, QEvent* event);
bool QwtDial_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtDial_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtDial_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtDial_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtDial_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
void QwtDial_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount);
double QwtDial_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount);
void QwtDial_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
void QwtDial_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
QwtAbstractScaleDraw* QwtDial_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
void QwtDial_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtDial_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtDial_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtDial_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtDial_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtDial_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtDial_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtDial_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtDial_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtDial_delete(QwtDial* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
