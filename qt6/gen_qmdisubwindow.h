#pragma once
#ifndef MIQT_QT6_GEN_QMDISUBWINDOW_H
#define MIQT_QT6_GEN_QMDISUBWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMdiArea;
class QMdiSubWindow;
class QMenu;
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
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
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
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMdiArea QMdiArea;
typedef struct QMdiSubWindow QMdiSubWindow;
typedef struct QMenu QMenu;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QMdiSubWindow* QMdiSubWindow_new(QWidget* parent);
QMdiSubWindow* QMdiSubWindow_new2();
QMdiSubWindow* QMdiSubWindow_new3(QWidget* parent, int flags);
void QMdiSubWindow_virtbase(QMdiSubWindow* src, QWidget** outptr_QWidget);
QMetaObject* QMdiSubWindow_metaObject(const QMdiSubWindow* self);
void* QMdiSubWindow_metacast(QMdiSubWindow* self, const char* param1);
struct miqt_string QMdiSubWindow_tr(const char* s);
QSize* QMdiSubWindow_sizeHint(const QMdiSubWindow* self);
QSize* QMdiSubWindow_minimumSizeHint(const QMdiSubWindow* self);
void QMdiSubWindow_setWidget(QMdiSubWindow* self, QWidget* widget);
QWidget* QMdiSubWindow_widget(const QMdiSubWindow* self);
QWidget* QMdiSubWindow_maximizedButtonsWidget(const QMdiSubWindow* self);
QWidget* QMdiSubWindow_maximizedSystemMenuIconWidget(const QMdiSubWindow* self);
bool QMdiSubWindow_isShaded(const QMdiSubWindow* self);
void QMdiSubWindow_setOption(QMdiSubWindow* self, int option);
bool QMdiSubWindow_testOption(const QMdiSubWindow* self, int param1);
void QMdiSubWindow_setKeyboardSingleStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_keyboardSingleStep(const QMdiSubWindow* self);
void QMdiSubWindow_setKeyboardPageStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_keyboardPageStep(const QMdiSubWindow* self);
void QMdiSubWindow_setSystemMenu(QMdiSubWindow* self, QMenu* systemMenu);
QMenu* QMdiSubWindow_systemMenu(const QMdiSubWindow* self);
QMdiArea* QMdiSubWindow_mdiArea(const QMdiSubWindow* self);
void QMdiSubWindow_windowStateChanged(QMdiSubWindow* self, int oldState, int newState);
void QMdiSubWindow_connect_windowStateChanged(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_aboutToActivate(QMdiSubWindow* self);
void QMdiSubWindow_connect_aboutToActivate(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_showSystemMenu(QMdiSubWindow* self);
void QMdiSubWindow_showShaded(QMdiSubWindow* self);
bool QMdiSubWindow_eventFilter(QMdiSubWindow* self, QObject* object, QEvent* event);
bool QMdiSubWindow_event(QMdiSubWindow* self, QEvent* event);
void QMdiSubWindow_showEvent(QMdiSubWindow* self, QShowEvent* showEvent);
void QMdiSubWindow_hideEvent(QMdiSubWindow* self, QHideEvent* hideEvent);
void QMdiSubWindow_changeEvent(QMdiSubWindow* self, QEvent* changeEvent);
void QMdiSubWindow_closeEvent(QMdiSubWindow* self, QCloseEvent* closeEvent);
void QMdiSubWindow_leaveEvent(QMdiSubWindow* self, QEvent* leaveEvent);
void QMdiSubWindow_resizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent);
void QMdiSubWindow_timerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent);
void QMdiSubWindow_moveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent);
void QMdiSubWindow_paintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent);
void QMdiSubWindow_mousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_mouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_mouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_mouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_keyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent);
void QMdiSubWindow_contextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent);
void QMdiSubWindow_focusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent);
void QMdiSubWindow_focusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent);
void QMdiSubWindow_childEvent(QMdiSubWindow* self, QChildEvent* childEvent);
struct miqt_string QMdiSubWindow_tr2(const char* s, const char* c);
struct miqt_string QMdiSubWindow_tr3(const char* s, const char* c, int n);
void QMdiSubWindow_setOption2(QMdiSubWindow* self, int option, bool on);
bool QMdiSubWindow_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QMdiSubWindow_virtualbase_sizeHint(const void* self);
bool QMdiSubWindow_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QMdiSubWindow_virtualbase_minimumSizeHint(const void* self);
bool QMdiSubWindow_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMdiSubWindow_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);
bool QMdiSubWindow_override_virtual_event(void* self, intptr_t slot);
bool QMdiSubWindow_virtualbase_event(void* self, QEvent* event);
bool QMdiSubWindow_override_virtual_showEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_showEvent(void* self, QShowEvent* showEvent);
bool QMdiSubWindow_override_virtual_hideEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_hideEvent(void* self, QHideEvent* hideEvent);
bool QMdiSubWindow_override_virtual_changeEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_changeEvent(void* self, QEvent* changeEvent);
bool QMdiSubWindow_override_virtual_closeEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_closeEvent(void* self, QCloseEvent* closeEvent);
bool QMdiSubWindow_override_virtual_leaveEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_leaveEvent(void* self, QEvent* leaveEvent);
bool QMdiSubWindow_override_virtual_resizeEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_resizeEvent(void* self, QResizeEvent* resizeEvent);
bool QMdiSubWindow_override_virtual_timerEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_timerEvent(void* self, QTimerEvent* timerEvent);
bool QMdiSubWindow_override_virtual_moveEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_moveEvent(void* self, QMoveEvent* moveEvent);
bool QMdiSubWindow_override_virtual_paintEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_paintEvent(void* self, QPaintEvent* paintEvent);
bool QMdiSubWindow_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_mousePressEvent(void* self, QMouseEvent* mouseEvent);
bool QMdiSubWindow_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* mouseEvent);
bool QMdiSubWindow_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* mouseEvent);
bool QMdiSubWindow_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_mouseMoveEvent(void* self, QMouseEvent* mouseEvent);
bool QMdiSubWindow_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_keyPressEvent(void* self, QKeyEvent* keyEvent);
bool QMdiSubWindow_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* contextMenuEvent);
bool QMdiSubWindow_override_virtual_focusInEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_focusInEvent(void* self, QFocusEvent* focusInEvent);
bool QMdiSubWindow_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_focusOutEvent(void* self, QFocusEvent* focusOutEvent);
bool QMdiSubWindow_override_virtual_childEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_childEvent(void* self, QChildEvent* childEvent);
bool QMdiSubWindow_override_virtual_devType(void* self, intptr_t slot);
int QMdiSubWindow_virtualbase_devType(const void* self);
bool QMdiSubWindow_override_virtual_setVisible(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_setVisible(void* self, bool visible);
bool QMdiSubWindow_override_virtual_heightForWidth(void* self, intptr_t slot);
int QMdiSubWindow_virtualbase_heightForWidth(const void* self, int param1);
bool QMdiSubWindow_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QMdiSubWindow_virtualbase_hasHeightForWidth(const void* self);
bool QMdiSubWindow_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QMdiSubWindow_virtualbase_paintEngine(const void* self);
bool QMdiSubWindow_override_virtual_wheelEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QMdiSubWindow_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QMdiSubWindow_override_virtual_enterEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QMdiSubWindow_override_virtual_tabletEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QMdiSubWindow_override_virtual_actionEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QMdiSubWindow_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QMdiSubWindow_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QMdiSubWindow_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QMdiSubWindow_override_virtual_dropEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QMdiSubWindow_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QMdiSubWindow_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QMdiSubWindow_override_virtual_metric(void* self, intptr_t slot);
int QMdiSubWindow_virtualbase_metric(const void* self, int param1);
bool QMdiSubWindow_override_virtual_initPainter(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_initPainter(const void* self, QPainter* painter);
bool QMdiSubWindow_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QMdiSubWindow_virtualbase_redirected(const void* self, QPoint* offset);
bool QMdiSubWindow_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QMdiSubWindow_virtualbase_sharedPainter(const void* self);
bool QMdiSubWindow_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QMdiSubWindow_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QMdiSubWindow_virtualbase_inputMethodQuery(const void* self, int param1);
bool QMdiSubWindow_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QMdiSubWindow_virtualbase_focusNextPrevChild(void* self, bool next);
bool QMdiSubWindow_override_virtual_customEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_customEvent(void* self, QEvent* event);
bool QMdiSubWindow_override_virtual_connectNotify(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMdiSubWindow_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QMdiSubWindow_delete(QMdiSubWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
