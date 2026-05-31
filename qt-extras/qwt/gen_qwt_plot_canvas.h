#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_CANVAS_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_CANVAS_H

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
class QFrame;
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
class QPixmap;
class QPoint;
class QRect;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QwtPlot;
class QwtPlotCanvas;
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
typedef struct QFrame QFrame;
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
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtPlot QwtPlot;
typedef struct QwtPlotCanvas QwtPlotCanvas;
#endif

QwtPlotCanvas* QwtPlotCanvas_new();
QwtPlotCanvas* QwtPlotCanvas_new2(QwtPlot* param1);
void QwtPlotCanvas_virtbase(QwtPlotCanvas* src, QFrame** outptr_QFrame);
QMetaObject* QwtPlotCanvas_metaObject(const QwtPlotCanvas* self);
void* QwtPlotCanvas_metacast(QwtPlotCanvas* self, const char* param1);
struct miqt_string QwtPlotCanvas_tr(const char* s);
struct miqt_string QwtPlotCanvas_trUtf8(const char* s);
QwtPlot* QwtPlotCanvas_plot(QwtPlotCanvas* self);
QwtPlot* QwtPlotCanvas_plot2(const QwtPlotCanvas* self);
void QwtPlotCanvas_setFocusIndicator(QwtPlotCanvas* self, int focusIndicator);
int QwtPlotCanvas_focusIndicator(const QwtPlotCanvas* self);
void QwtPlotCanvas_setBorderRadius(QwtPlotCanvas* self, double borderRadius);
double QwtPlotCanvas_borderRadius(const QwtPlotCanvas* self);
void QwtPlotCanvas_setPaintAttribute(QwtPlotCanvas* self, int param1);
bool QwtPlotCanvas_testPaintAttribute(const QwtPlotCanvas* self, int param1);
QPixmap* QwtPlotCanvas_backingStore(const QwtPlotCanvas* self);
void QwtPlotCanvas_invalidateBackingStore(QwtPlotCanvas* self);
bool QwtPlotCanvas_event(QwtPlotCanvas* self, QEvent* param1);
QPainterPath* QwtPlotCanvas_borderPath(const QwtPlotCanvas* self, QRect* param1);
void QwtPlotCanvas_replot(QwtPlotCanvas* self);
void QwtPlotCanvas_paintEvent(QwtPlotCanvas* self, QPaintEvent* param1);
void QwtPlotCanvas_resizeEvent(QwtPlotCanvas* self, QResizeEvent* param1);
void QwtPlotCanvas_drawFocusIndicator(QwtPlotCanvas* self, QPainter* param1);
void QwtPlotCanvas_drawBorder(QwtPlotCanvas* self, QPainter* param1);
struct miqt_string QwtPlotCanvas_tr2(const char* s, const char* c);
struct miqt_string QwtPlotCanvas_tr3(const char* s, const char* c, int n);
struct miqt_string QwtPlotCanvas_trUtf82(const char* s, const char* c);
struct miqt_string QwtPlotCanvas_trUtf83(const char* s, const char* c, int n);
void QwtPlotCanvas_setPaintAttribute2(QwtPlotCanvas* self, int param1, bool on);

bool QwtPlotCanvas_override_virtual_event(void* self, intptr_t slot);
bool QwtPlotCanvas_virtualbase_event(void* self, QEvent* param1);
bool QwtPlotCanvas_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtPlotCanvas_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QwtPlotCanvas_override_virtual_drawFocusIndicator(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_drawFocusIndicator(void* self, QPainter* param1);
bool QwtPlotCanvas_override_virtual_drawBorder(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_drawBorder(void* self, QPainter* param1);
bool QwtPlotCanvas_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtPlotCanvas_virtualbase_sizeHint(const void* self);
bool QwtPlotCanvas_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtPlotCanvas_override_virtual_devType(void* self, intptr_t slot);
int QwtPlotCanvas_virtualbase_devType(const void* self);
bool QwtPlotCanvas_override_virtual_setVisible(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_setVisible(void* self, bool visible);
bool QwtPlotCanvas_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtPlotCanvas_virtualbase_minimumSizeHint(const void* self);
bool QwtPlotCanvas_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtPlotCanvas_virtualbase_heightForWidth(const void* self, int param1);
bool QwtPlotCanvas_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtPlotCanvas_virtualbase_hasHeightForWidth(const void* self);
bool QwtPlotCanvas_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtPlotCanvas_virtualbase_paintEngine(const void* self);
bool QwtPlotCanvas_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QwtPlotCanvas_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QwtPlotCanvas_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtPlotCanvas_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QwtPlotCanvas_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QwtPlotCanvas_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QwtPlotCanvas_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtPlotCanvas_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtPlotCanvas_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtPlotCanvas_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtPlotCanvas_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtPlotCanvas_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtPlotCanvas_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtPlotCanvas_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtPlotCanvas_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtPlotCanvas_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtPlotCanvas_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtPlotCanvas_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtPlotCanvas_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtPlotCanvas_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtPlotCanvas_override_virtual_showEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtPlotCanvas_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtPlotCanvas_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtPlotCanvas_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtPlotCanvas_override_virtual_metric(void* self, intptr_t slot);
int QwtPlotCanvas_virtualbase_metric(const void* self, int param1);
bool QwtPlotCanvas_override_virtual_initPainter(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtPlotCanvas_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtPlotCanvas_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtPlotCanvas_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtPlotCanvas_virtualbase_sharedPainter(const void* self);
bool QwtPlotCanvas_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtPlotCanvas_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtPlotCanvas_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtPlotCanvas_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtPlotCanvas_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtPlotCanvas_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtPlotCanvas_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtPlotCanvas_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtPlotCanvas_override_virtual_childEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtPlotCanvas_override_virtual_customEvent(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_customEvent(void* self, QEvent* event);
bool QwtPlotCanvas_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtPlotCanvas_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtPlotCanvas_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtPlotCanvas_protectedbase_updateStyleSheetInfo(bool* _dynamic_cast_ok, void* self);
void QwtPlotCanvas_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QwtPlotCanvas_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void QwtPlotCanvas_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtPlotCanvas_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtPlotCanvas_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtPlotCanvas_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtPlotCanvas_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtPlotCanvas_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtPlotCanvas_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtPlotCanvas_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtPlotCanvas_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtPlotCanvas_delete(QwtPlotCanvas* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
