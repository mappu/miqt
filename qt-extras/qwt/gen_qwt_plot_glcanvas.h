#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_GLCANVAS_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_GLCANVAS_H

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
class QGLWidget;
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
class QPainterPath;
class QPoint;
class QRect;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QwtPlot;
class QwtPlotGLCanvas;
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
typedef struct QGLWidget QGLWidget;
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
typedef struct QPainterPath QPainterPath;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtPlot QwtPlot;
typedef struct QwtPlotGLCanvas QwtPlotGLCanvas;
#endif

QwtPlotGLCanvas* QwtPlotGLCanvas_new();
QwtPlotGLCanvas* QwtPlotGLCanvas_new2(QwtPlot* param1);
void QwtPlotGLCanvas_virtbase(QwtPlotGLCanvas* src, QGLWidget** outptr_QGLWidget);
QMetaObject* QwtPlotGLCanvas_metaObject(const QwtPlotGLCanvas* self);
void* QwtPlotGLCanvas_metacast(QwtPlotGLCanvas* self, const char* param1);
struct miqt_string QwtPlotGLCanvas_tr(const char* s);
struct miqt_string QwtPlotGLCanvas_trUtf8(const char* s);
void QwtPlotGLCanvas_setFrameStyle(QwtPlotGLCanvas* self, int style);
int QwtPlotGLCanvas_frameStyle(const QwtPlotGLCanvas* self);
void QwtPlotGLCanvas_setFrameShadow(QwtPlotGLCanvas* self, int frameShadow);
int QwtPlotGLCanvas_frameShadow(const QwtPlotGLCanvas* self);
void QwtPlotGLCanvas_setFrameShape(QwtPlotGLCanvas* self, int frameShape);
int QwtPlotGLCanvas_frameShape(const QwtPlotGLCanvas* self);
void QwtPlotGLCanvas_setLineWidth(QwtPlotGLCanvas* self, int lineWidth);
int QwtPlotGLCanvas_lineWidth(const QwtPlotGLCanvas* self);
void QwtPlotGLCanvas_setMidLineWidth(QwtPlotGLCanvas* self, int midLineWidth);
int QwtPlotGLCanvas_midLineWidth(const QwtPlotGLCanvas* self);
int QwtPlotGLCanvas_frameWidth(const QwtPlotGLCanvas* self);
QRect* QwtPlotGLCanvas_frameRect(const QwtPlotGLCanvas* self);
QPainterPath* QwtPlotGLCanvas_borderPath(const QwtPlotGLCanvas* self, QRect* param1);
bool QwtPlotGLCanvas_event(QwtPlotGLCanvas* self, QEvent* param1);
void QwtPlotGLCanvas_replot(QwtPlotGLCanvas* self);
void QwtPlotGLCanvas_paintEvent(QwtPlotGLCanvas* self, QPaintEvent* param1);
void QwtPlotGLCanvas_drawBackground(QwtPlotGLCanvas* self, QPainter* param1);
void QwtPlotGLCanvas_drawBorder(QwtPlotGLCanvas* self, QPainter* param1);
void QwtPlotGLCanvas_drawItems(QwtPlotGLCanvas* self, QPainter* param1);
struct miqt_string QwtPlotGLCanvas_tr2(const char* s, const char* c);
struct miqt_string QwtPlotGLCanvas_tr3(const char* s, const char* c, int n);
struct miqt_string QwtPlotGLCanvas_trUtf82(const char* s, const char* c);
struct miqt_string QwtPlotGLCanvas_trUtf83(const char* s, const char* c, int n);

bool QwtPlotGLCanvas_override_virtual_event(void* self, intptr_t slot);
bool QwtPlotGLCanvas_virtualbase_event(void* self, QEvent* param1);
bool QwtPlotGLCanvas_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtPlotGLCanvas_override_virtual_drawBackground(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_drawBackground(void* self, QPainter* param1);
bool QwtPlotGLCanvas_override_virtual_drawBorder(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_drawBorder(void* self, QPainter* param1);
bool QwtPlotGLCanvas_override_virtual_drawItems(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_drawItems(void* self, QPainter* param1);
bool QwtPlotGLCanvas_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtPlotGLCanvas_virtualbase_paintEngine(const void* self);
bool QwtPlotGLCanvas_override_virtual_updateGL(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_updateGL(void* self);
bool QwtPlotGLCanvas_override_virtual_updateOverlayGL(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_updateOverlayGL(void* self);
bool QwtPlotGLCanvas_override_virtual_initializeGL(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_initializeGL(void* self);
bool QwtPlotGLCanvas_override_virtual_resizeGL(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_resizeGL(void* self, int w, int h);
bool QwtPlotGLCanvas_override_virtual_paintGL(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_paintGL(void* self);
bool QwtPlotGLCanvas_override_virtual_initializeOverlayGL(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_initializeOverlayGL(void* self);
bool QwtPlotGLCanvas_override_virtual_resizeOverlayGL(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_resizeOverlayGL(void* self, int w, int h);
bool QwtPlotGLCanvas_override_virtual_paintOverlayGL(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_paintOverlayGL(void* self);
bool QwtPlotGLCanvas_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QwtPlotGLCanvas_override_virtual_glInit(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_glInit(void* self);
bool QwtPlotGLCanvas_override_virtual_glDraw(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_glDraw(void* self);
bool QwtPlotGLCanvas_override_virtual_devType(void* self, intptr_t slot);
int QwtPlotGLCanvas_virtualbase_devType(const void* self);
bool QwtPlotGLCanvas_override_virtual_setVisible(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_setVisible(void* self, bool visible);
bool QwtPlotGLCanvas_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtPlotGLCanvas_virtualbase_sizeHint(const void* self);
bool QwtPlotGLCanvas_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtPlotGLCanvas_virtualbase_minimumSizeHint(const void* self);
bool QwtPlotGLCanvas_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtPlotGLCanvas_virtualbase_heightForWidth(const void* self, int param1);
bool QwtPlotGLCanvas_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtPlotGLCanvas_virtualbase_hasHeightForWidth(const void* self);
bool QwtPlotGLCanvas_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QwtPlotGLCanvas_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QwtPlotGLCanvas_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtPlotGLCanvas_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QwtPlotGLCanvas_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QwtPlotGLCanvas_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QwtPlotGLCanvas_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtPlotGLCanvas_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtPlotGLCanvas_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtPlotGLCanvas_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtPlotGLCanvas_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtPlotGLCanvas_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtPlotGLCanvas_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtPlotGLCanvas_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtPlotGLCanvas_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtPlotGLCanvas_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtPlotGLCanvas_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtPlotGLCanvas_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtPlotGLCanvas_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtPlotGLCanvas_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtPlotGLCanvas_override_virtual_showEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtPlotGLCanvas_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtPlotGLCanvas_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtPlotGLCanvas_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtPlotGLCanvas_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtPlotGLCanvas_override_virtual_metric(void* self, intptr_t slot);
int QwtPlotGLCanvas_virtualbase_metric(const void* self, int param1);
bool QwtPlotGLCanvas_override_virtual_initPainter(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtPlotGLCanvas_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtPlotGLCanvas_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtPlotGLCanvas_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtPlotGLCanvas_virtualbase_sharedPainter(const void* self);
bool QwtPlotGLCanvas_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtPlotGLCanvas_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtPlotGLCanvas_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtPlotGLCanvas_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtPlotGLCanvas_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtPlotGLCanvas_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtPlotGLCanvas_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtPlotGLCanvas_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtPlotGLCanvas_override_virtual_childEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtPlotGLCanvas_override_virtual_customEvent(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_customEvent(void* self, QEvent* event);
bool QwtPlotGLCanvas_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtPlotGLCanvas_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtPlotGLCanvas_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtPlotGLCanvas_protectedbase_setAutoBufferSwap(bool* _dynamic_cast_ok, void* self, bool on);
bool QwtPlotGLCanvas_protectedbase_autoBufferSwap(bool* _dynamic_cast_ok, const void* self);
void QwtPlotGLCanvas_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtPlotGLCanvas_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtPlotGLCanvas_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtPlotGLCanvas_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtPlotGLCanvas_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtPlotGLCanvas_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtPlotGLCanvas_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtPlotGLCanvas_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtPlotGLCanvas_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtPlotGLCanvas_delete(QwtPlotGLCanvas* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
