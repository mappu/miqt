#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCHARTVIEW_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QCHARTVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
class QActionEvent;
class QChart;
class QChartView;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QGraphicsView;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMargins;
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
class QRectF;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QChart QChart;
typedef struct QChartView QChartView;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QGraphicsView QGraphicsView;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
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
typedef struct QRectF QRectF;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QChartView* QChartView_new(QWidget* parent);
QChartView* QChartView_new2();
QChartView* QChartView_new3(QChart* chart);
QChartView* QChartView_new4(QChart* chart, QWidget* parent);
void QChartView_virtbase(QChartView* src, QGraphicsView** outptr_QGraphicsView);
QMetaObject* QChartView_metaObject(const QChartView* self);
void* QChartView_metacast(QChartView* self, const char* param1);
struct miqt_string QChartView_tr(const char* s);
void QChartView_setRubberBand(QChartView* self, int* rubberBands);
int QChartView_rubberBand(const QChartView* self);
QChart* QChartView_chart(const QChartView* self);
void QChartView_setChart(QChartView* self, QChart* chart);
void QChartView_resizeEvent(QChartView* self, QResizeEvent* event);
void QChartView_mousePressEvent(QChartView* self, QMouseEvent* event);
void QChartView_mouseMoveEvent(QChartView* self, QMouseEvent* event);
void QChartView_mouseReleaseEvent(QChartView* self, QMouseEvent* event);
struct miqt_string QChartView_tr2(const char* s, const char* c);
struct miqt_string QChartView_tr3(const char* s, const char* c, int n);
bool QChartView_override_virtual_resizeEvent(void* self, intptr_t slot);
void QChartView_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QChartView_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QChartView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QChartView_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QChartView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QChartView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QChartView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QChartView_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QChartView_virtualbase_sizeHint(const void* self);
bool QChartView_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QChartView_virtualbase_inputMethodQuery(const void* self, int query);
bool QChartView_override_virtual_setupViewport(void* self, intptr_t slot);
void QChartView_virtualbase_setupViewport(void* self, QWidget* widget);
bool QChartView_override_virtual_event(void* self, intptr_t slot);
bool QChartView_virtualbase_event(void* self, QEvent* event);
bool QChartView_override_virtual_viewportEvent(void* self, intptr_t slot);
bool QChartView_virtualbase_viewportEvent(void* self, QEvent* event);
bool QChartView_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QChartView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QChartView_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QChartView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QChartView_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QChartView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QChartView_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QChartView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QChartView_override_virtual_dropEvent(void* self, intptr_t slot);
void QChartView_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QChartView_override_virtual_focusInEvent(void* self, intptr_t slot);
void QChartView_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QChartView_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QChartView_virtualbase_focusNextPrevChild(void* self, bool next);
bool QChartView_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QChartView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QChartView_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QChartView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QChartView_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QChartView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QChartView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QChartView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QChartView_override_virtual_wheelEvent(void* self, intptr_t slot);
void QChartView_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QChartView_override_virtual_paintEvent(void* self, intptr_t slot);
void QChartView_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QChartView_override_virtual_scrollContentsBy(void* self, intptr_t slot);
void QChartView_virtualbase_scrollContentsBy(void* self, int dx, int dy);
bool QChartView_override_virtual_showEvent(void* self, intptr_t slot);
void QChartView_virtualbase_showEvent(void* self, QShowEvent* event);
bool QChartView_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QChartView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QChartView_override_virtual_drawBackground(void* self, intptr_t slot);
void QChartView_virtualbase_drawBackground(void* self, QPainter* painter, QRectF* rect);
bool QChartView_override_virtual_drawForeground(void* self, intptr_t slot);
void QChartView_virtualbase_drawForeground(void* self, QPainter* painter, QRectF* rect);
bool QChartView_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QChartView_virtualbase_minimumSizeHint(const void* self);
bool QChartView_override_virtual_eventFilter(void* self, intptr_t slot);
bool QChartView_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QChartView_override_virtual_viewportSizeHint(void* self, intptr_t slot);
QSize* QChartView_virtualbase_viewportSizeHint(const void* self);
bool QChartView_override_virtual_changeEvent(void* self, intptr_t slot);
void QChartView_virtualbase_changeEvent(void* self, QEvent* param1);
bool QChartView_override_virtual_initStyleOption(void* self, intptr_t slot);
void QChartView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
bool QChartView_override_virtual_devType(void* self, intptr_t slot);
int QChartView_virtualbase_devType(const void* self);
bool QChartView_override_virtual_setVisible(void* self, intptr_t slot);
void QChartView_virtualbase_setVisible(void* self, bool visible);
bool QChartView_override_virtual_heightForWidth(void* self, intptr_t slot);
int QChartView_virtualbase_heightForWidth(const void* self, int param1);
bool QChartView_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QChartView_virtualbase_hasHeightForWidth(const void* self);
bool QChartView_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QChartView_virtualbase_paintEngine(const void* self);
bool QChartView_override_virtual_enterEvent(void* self, intptr_t slot);
void QChartView_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QChartView_override_virtual_leaveEvent(void* self, intptr_t slot);
void QChartView_virtualbase_leaveEvent(void* self, QEvent* event);
bool QChartView_override_virtual_moveEvent(void* self, intptr_t slot);
void QChartView_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QChartView_override_virtual_closeEvent(void* self, intptr_t slot);
void QChartView_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QChartView_override_virtual_tabletEvent(void* self, intptr_t slot);
void QChartView_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QChartView_override_virtual_actionEvent(void* self, intptr_t slot);
void QChartView_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QChartView_override_virtual_hideEvent(void* self, intptr_t slot);
void QChartView_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QChartView_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QChartView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QChartView_override_virtual_metric(void* self, intptr_t slot);
int QChartView_virtualbase_metric(const void* self, int param1);
bool QChartView_override_virtual_initPainter(void* self, intptr_t slot);
void QChartView_virtualbase_initPainter(const void* self, QPainter* painter);
bool QChartView_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QChartView_virtualbase_redirected(const void* self, QPoint* offset);
bool QChartView_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QChartView_virtualbase_sharedPainter(const void* self);
bool QChartView_override_virtual_timerEvent(void* self, intptr_t slot);
void QChartView_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QChartView_override_virtual_childEvent(void* self, intptr_t slot);
void QChartView_virtualbase_childEvent(void* self, QChildEvent* event);
bool QChartView_override_virtual_customEvent(void* self, intptr_t slot);
void QChartView_virtualbase_customEvent(void* self, QEvent* event);
bool QChartView_override_virtual_connectNotify(void* self, intptr_t slot);
void QChartView_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QChartView_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QChartView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QChartView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
QMargins* QChartView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
void QChartView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QChartView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QChartView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QChartView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QChartView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QChartView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QChartView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QChartView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QChartView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QChartView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QChartView_delete(QChartView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
