#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PANNER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PANNER_H

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
class QBitmap;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QCursor;
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
class QPixmap;
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QwtPanner;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QBitmap QBitmap;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QCursor QCursor;
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
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtPanner QwtPanner;
#endif

QwtPanner* QwtPanner_new(QWidget* parent);
void QwtPanner_virtbase(QwtPanner* src, QWidget** outptr_QWidget);
QMetaObject* QwtPanner_metaObject(const QwtPanner* self);
void* QwtPanner_metacast(QwtPanner* self, const char* param1);
struct miqt_string QwtPanner_tr(const char* s);
struct miqt_string QwtPanner_trUtf8(const char* s);
void QwtPanner_setEnabled(QwtPanner* self, bool enabled);
bool QwtPanner_isEnabled(const QwtPanner* self);
void QwtPanner_setMouseButton(QwtPanner* self, int param1);
void QwtPanner_getMouseButton(const QwtPanner* self, int* button, int* param2);
void QwtPanner_setAbortKey(QwtPanner* self, int key);
void QwtPanner_getAbortKey(const QwtPanner* self, int* key, int* param2);
void QwtPanner_setCursor(QwtPanner* self, QCursor* cursor);
QCursor* QwtPanner_cursor(const QwtPanner* self);
void QwtPanner_setOrientations(QwtPanner* self, int orientations);
int QwtPanner_orientations(const QwtPanner* self);
bool QwtPanner_isOrientationEnabled(const QwtPanner* self, int param1);
bool QwtPanner_eventFilter(QwtPanner* self, QObject* param1, QEvent* param2);
void QwtPanner_panned(QwtPanner* self, int dx, int dy);
void QwtPanner_connect_panned(QwtPanner* self, intptr_t slot);
void QwtPanner_moved(QwtPanner* self, int dx, int dy);
void QwtPanner_connect_moved(QwtPanner* self, intptr_t slot);
void QwtPanner_widgetMousePressEvent(QwtPanner* self, QMouseEvent* param1);
void QwtPanner_widgetMouseReleaseEvent(QwtPanner* self, QMouseEvent* param1);
void QwtPanner_widgetMouseMoveEvent(QwtPanner* self, QMouseEvent* param1);
void QwtPanner_widgetKeyPressEvent(QwtPanner* self, QKeyEvent* param1);
void QwtPanner_widgetKeyReleaseEvent(QwtPanner* self, QKeyEvent* param1);
void QwtPanner_paintEvent(QwtPanner* self, QPaintEvent* param1);
QBitmap* QwtPanner_contentsMask(const QwtPanner* self);
QPixmap* QwtPanner_grab(const QwtPanner* self);
struct miqt_string QwtPanner_tr2(const char* s, const char* c);
struct miqt_string QwtPanner_tr3(const char* s, const char* c, int n);
struct miqt_string QwtPanner_trUtf82(const char* s, const char* c);
struct miqt_string QwtPanner_trUtf83(const char* s, const char* c, int n);
void QwtPanner_setMouseButton2(QwtPanner* self, int param1, int param2);
void QwtPanner_setAbortKey2(QwtPanner* self, int key, int param2);

bool QwtPanner_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtPanner_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QwtPanner_override_virtual_widgetMousePressEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);
bool QwtPanner_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtPanner_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);
bool QwtPanner_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);
bool QwtPanner_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);
bool QwtPanner_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtPanner_override_virtual_contentsMask(void* self, intptr_t slot);
QBitmap* QwtPanner_virtualbase_contentsMask(const void* self);
bool QwtPanner_override_virtual_grab(void* self, intptr_t slot);
QPixmap* QwtPanner_virtualbase_grab(const void* self);
bool QwtPanner_override_virtual_devType(void* self, intptr_t slot);
int QwtPanner_virtualbase_devType(const void* self);
bool QwtPanner_override_virtual_setVisible(void* self, intptr_t slot);
void QwtPanner_virtualbase_setVisible(void* self, bool visible);
bool QwtPanner_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtPanner_virtualbase_sizeHint(const void* self);
bool QwtPanner_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtPanner_virtualbase_minimumSizeHint(const void* self);
bool QwtPanner_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtPanner_virtualbase_heightForWidth(const void* self, int param1);
bool QwtPanner_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtPanner_virtualbase_hasHeightForWidth(const void* self);
bool QwtPanner_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtPanner_virtualbase_paintEngine(const void* self);
bool QwtPanner_override_virtual_event(void* self, intptr_t slot);
bool QwtPanner_virtualbase_event(void* self, QEvent* event);
bool QwtPanner_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QwtPanner_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QwtPanner_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtPanner_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QwtPanner_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QwtPanner_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QwtPanner_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtPanner_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtPanner_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtPanner_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtPanner_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtPanner_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtPanner_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtPanner_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtPanner_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtPanner_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtPanner_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtPanner_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtPanner_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtPanner_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtPanner_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtPanner_override_virtual_showEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtPanner_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtPanner_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtPanner_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtPanner_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtPanner_override_virtual_metric(void* self, intptr_t slot);
int QwtPanner_virtualbase_metric(const void* self, int param1);
bool QwtPanner_override_virtual_initPainter(void* self, intptr_t slot);
void QwtPanner_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtPanner_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtPanner_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtPanner_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtPanner_virtualbase_sharedPainter(const void* self);
bool QwtPanner_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtPanner_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtPanner_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtPanner_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtPanner_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtPanner_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtPanner_override_virtual_childEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtPanner_override_virtual_customEvent(void* self, intptr_t slot);
void QwtPanner_virtualbase_customEvent(void* self, QEvent* event);
bool QwtPanner_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtPanner_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtPanner_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtPanner_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtPanner_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtPanner_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtPanner_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtPanner_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtPanner_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtPanner_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtPanner_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtPanner_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtPanner_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtPanner_delete(QwtPanner* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
