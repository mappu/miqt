#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_WIDGET_OVERLAY_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_WIDGET_OVERLAY_H

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
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QRegion;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QwtWidgetOverlay;
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
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtWidgetOverlay QwtWidgetOverlay;
#endif

QwtWidgetOverlay* QwtWidgetOverlay_new(QWidget* param1);
void QwtWidgetOverlay_virtbase(QwtWidgetOverlay* src, QWidget** outptr_QWidget);
void QwtWidgetOverlay_setMaskMode(QwtWidgetOverlay* self, int maskMode);
int QwtWidgetOverlay_maskMode(const QwtWidgetOverlay* self);
void QwtWidgetOverlay_setRenderMode(QwtWidgetOverlay* self, int renderMode);
int QwtWidgetOverlay_renderMode(const QwtWidgetOverlay* self);
void QwtWidgetOverlay_updateOverlay(QwtWidgetOverlay* self);
bool QwtWidgetOverlay_eventFilter(QwtWidgetOverlay* self, QObject* param1, QEvent* param2);
void QwtWidgetOverlay_paintEvent(QwtWidgetOverlay* self, QPaintEvent* event);
void QwtWidgetOverlay_resizeEvent(QwtWidgetOverlay* self, QResizeEvent* event);
QRegion* QwtWidgetOverlay_maskHint(const QwtWidgetOverlay* self);
void QwtWidgetOverlay_drawOverlay(const QwtWidgetOverlay* self, QPainter* painter);

bool QwtWidgetOverlay_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtWidgetOverlay_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QwtWidgetOverlay_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QwtWidgetOverlay_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtWidgetOverlay_override_virtual_maskHint(void* self, intptr_t slot);
QRegion* QwtWidgetOverlay_virtualbase_maskHint(const void* self);
bool QwtWidgetOverlay_override_virtual_drawOverlay(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_drawOverlay(const void* self, QPainter* painter);
bool QwtWidgetOverlay_override_virtual_devType(void* self, intptr_t slot);
int QwtWidgetOverlay_virtualbase_devType(const void* self);
bool QwtWidgetOverlay_override_virtual_setVisible(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_setVisible(void* self, bool visible);
bool QwtWidgetOverlay_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtWidgetOverlay_virtualbase_sizeHint(const void* self);
bool QwtWidgetOverlay_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtWidgetOverlay_virtualbase_minimumSizeHint(const void* self);
bool QwtWidgetOverlay_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtWidgetOverlay_virtualbase_heightForWidth(const void* self, int param1);
bool QwtWidgetOverlay_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtWidgetOverlay_virtualbase_hasHeightForWidth(const void* self);
bool QwtWidgetOverlay_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtWidgetOverlay_virtualbase_paintEngine(const void* self);
bool QwtWidgetOverlay_override_virtual_event(void* self, intptr_t slot);
bool QwtWidgetOverlay_virtualbase_event(void* self, QEvent* event);
bool QwtWidgetOverlay_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QwtWidgetOverlay_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QwtWidgetOverlay_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtWidgetOverlay_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QwtWidgetOverlay_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QwtWidgetOverlay_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QwtWidgetOverlay_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtWidgetOverlay_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtWidgetOverlay_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtWidgetOverlay_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtWidgetOverlay_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtWidgetOverlay_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtWidgetOverlay_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtWidgetOverlay_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtWidgetOverlay_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtWidgetOverlay_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtWidgetOverlay_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtWidgetOverlay_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtWidgetOverlay_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtWidgetOverlay_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtWidgetOverlay_override_virtual_showEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtWidgetOverlay_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtWidgetOverlay_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtWidgetOverlay_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtWidgetOverlay_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtWidgetOverlay_override_virtual_metric(void* self, intptr_t slot);
int QwtWidgetOverlay_virtualbase_metric(const void* self, int param1);
bool QwtWidgetOverlay_override_virtual_initPainter(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtWidgetOverlay_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtWidgetOverlay_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtWidgetOverlay_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtWidgetOverlay_virtualbase_sharedPainter(const void* self);
bool QwtWidgetOverlay_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtWidgetOverlay_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtWidgetOverlay_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtWidgetOverlay_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtWidgetOverlay_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtWidgetOverlay_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtWidgetOverlay_override_virtual_childEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtWidgetOverlay_override_virtual_customEvent(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_customEvent(void* self, QEvent* event);
bool QwtWidgetOverlay_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtWidgetOverlay_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtWidgetOverlay_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtWidgetOverlay_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtWidgetOverlay_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtWidgetOverlay_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtWidgetOverlay_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtWidgetOverlay_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtWidgetOverlay_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtWidgetOverlay_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtWidgetOverlay_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtWidgetOverlay_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtWidgetOverlay_delete(QwtWidgetOverlay* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
