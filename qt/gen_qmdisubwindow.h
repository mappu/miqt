#pragma once
#ifndef MIQT_QT_GEN_QMDISUBWINDOW_H
#define MIQT_QT_GEN_QMDISUBWINDOW_H

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
QMetaObject* QMdiSubWindow_MetaObject(const QMdiSubWindow* self);
void* QMdiSubWindow_Metacast(QMdiSubWindow* self, const char* param1);
struct miqt_string QMdiSubWindow_Tr(const char* s);
struct miqt_string QMdiSubWindow_TrUtf8(const char* s);
QSize* QMdiSubWindow_SizeHint(const QMdiSubWindow* self);
QSize* QMdiSubWindow_MinimumSizeHint(const QMdiSubWindow* self);
void QMdiSubWindow_SetWidget(QMdiSubWindow* self, QWidget* widget);
QWidget* QMdiSubWindow_Widget(const QMdiSubWindow* self);
QWidget* QMdiSubWindow_MaximizedButtonsWidget(const QMdiSubWindow* self);
QWidget* QMdiSubWindow_MaximizedSystemMenuIconWidget(const QMdiSubWindow* self);
bool QMdiSubWindow_IsShaded(const QMdiSubWindow* self);
void QMdiSubWindow_SetOption(QMdiSubWindow* self, int option);
bool QMdiSubWindow_TestOption(const QMdiSubWindow* self, int param1);
void QMdiSubWindow_SetKeyboardSingleStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_KeyboardSingleStep(const QMdiSubWindow* self);
void QMdiSubWindow_SetKeyboardPageStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_KeyboardPageStep(const QMdiSubWindow* self);
void QMdiSubWindow_SetSystemMenu(QMdiSubWindow* self, QMenu* systemMenu);
QMenu* QMdiSubWindow_SystemMenu(const QMdiSubWindow* self);
QMdiArea* QMdiSubWindow_MdiArea(const QMdiSubWindow* self);
void QMdiSubWindow_WindowStateChanged(QMdiSubWindow* self, int oldState, int newState);
void QMdiSubWindow_connect_WindowStateChanged(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_AboutToActivate(QMdiSubWindow* self);
void QMdiSubWindow_connect_AboutToActivate(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_ShowSystemMenu(QMdiSubWindow* self);
void QMdiSubWindow_ShowShaded(QMdiSubWindow* self);
bool QMdiSubWindow_EventFilter(QMdiSubWindow* self, QObject* object, QEvent* event);
bool QMdiSubWindow_Event(QMdiSubWindow* self, QEvent* event);
void QMdiSubWindow_ShowEvent(QMdiSubWindow* self, QShowEvent* showEvent);
void QMdiSubWindow_HideEvent(QMdiSubWindow* self, QHideEvent* hideEvent);
void QMdiSubWindow_ChangeEvent(QMdiSubWindow* self, QEvent* changeEvent);
void QMdiSubWindow_CloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent);
void QMdiSubWindow_LeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent);
void QMdiSubWindow_ResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent);
void QMdiSubWindow_TimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent);
void QMdiSubWindow_MoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent);
void QMdiSubWindow_PaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent);
void QMdiSubWindow_MousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_MouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_MouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_MouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_KeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent);
void QMdiSubWindow_ContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent);
void QMdiSubWindow_FocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent);
void QMdiSubWindow_FocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent);
void QMdiSubWindow_ChildEvent(QMdiSubWindow* self, QChildEvent* childEvent);
struct miqt_string QMdiSubWindow_Tr2(const char* s, const char* c);
struct miqt_string QMdiSubWindow_Tr3(const char* s, const char* c, int n);
struct miqt_string QMdiSubWindow_TrUtf82(const char* s, const char* c);
struct miqt_string QMdiSubWindow_TrUtf83(const char* s, const char* c, int n);
void QMdiSubWindow_SetOption2(QMdiSubWindow* self, int option, bool on);
bool QMdiSubWindow_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QMdiSubWindow_virtualbase_SizeHint(const void* self);
bool QMdiSubWindow_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QMdiSubWindow_virtualbase_MinimumSizeHint(const void* self);
bool QMdiSubWindow_override_virtual_EventFilter(void* self, intptr_t slot);
bool QMdiSubWindow_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
bool QMdiSubWindow_override_virtual_Event(void* self, intptr_t slot);
bool QMdiSubWindow_virtualbase_Event(void* self, QEvent* event);
bool QMdiSubWindow_override_virtual_ShowEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_ShowEvent(void* self, QShowEvent* showEvent);
bool QMdiSubWindow_override_virtual_HideEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_HideEvent(void* self, QHideEvent* hideEvent);
bool QMdiSubWindow_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_ChangeEvent(void* self, QEvent* changeEvent);
bool QMdiSubWindow_override_virtual_CloseEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_CloseEvent(void* self, QCloseEvent* closeEvent);
bool QMdiSubWindow_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_LeaveEvent(void* self, QEvent* leaveEvent);
bool QMdiSubWindow_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_ResizeEvent(void* self, QResizeEvent* resizeEvent);
bool QMdiSubWindow_override_virtual_TimerEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_TimerEvent(void* self, QTimerEvent* timerEvent);
bool QMdiSubWindow_override_virtual_MoveEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_MoveEvent(void* self, QMoveEvent* moveEvent);
bool QMdiSubWindow_override_virtual_PaintEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_PaintEvent(void* self, QPaintEvent* paintEvent);
bool QMdiSubWindow_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_MousePressEvent(void* self, QMouseEvent* mouseEvent);
bool QMdiSubWindow_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* mouseEvent);
bool QMdiSubWindow_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* mouseEvent);
bool QMdiSubWindow_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_MouseMoveEvent(void* self, QMouseEvent* mouseEvent);
bool QMdiSubWindow_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_KeyPressEvent(void* self, QKeyEvent* keyEvent);
bool QMdiSubWindow_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* contextMenuEvent);
bool QMdiSubWindow_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_FocusInEvent(void* self, QFocusEvent* focusInEvent);
bool QMdiSubWindow_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_FocusOutEvent(void* self, QFocusEvent* focusOutEvent);
bool QMdiSubWindow_override_virtual_ChildEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_ChildEvent(void* self, QChildEvent* childEvent);
bool QMdiSubWindow_override_virtual_DevType(void* self, intptr_t slot);
int QMdiSubWindow_virtualbase_DevType(const void* self);
bool QMdiSubWindow_override_virtual_SetVisible(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_SetVisible(void* self, bool visible);
bool QMdiSubWindow_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QMdiSubWindow_virtualbase_HeightForWidth(const void* self, int param1);
bool QMdiSubWindow_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QMdiSubWindow_virtualbase_HasHeightForWidth(const void* self);
bool QMdiSubWindow_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QMdiSubWindow_virtualbase_PaintEngine(const void* self);
bool QMdiSubWindow_override_virtual_WheelEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QMdiSubWindow_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QMdiSubWindow_override_virtual_EnterEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_EnterEvent(void* self, QEvent* event);
bool QMdiSubWindow_override_virtual_TabletEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QMdiSubWindow_override_virtual_ActionEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QMdiSubWindow_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QMdiSubWindow_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QMdiSubWindow_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QMdiSubWindow_override_virtual_DropEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QMdiSubWindow_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QMdiSubWindow_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QMdiSubWindow_override_virtual_Metric(void* self, intptr_t slot);
int QMdiSubWindow_virtualbase_Metric(const void* self, int param1);
bool QMdiSubWindow_override_virtual_InitPainter(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QMdiSubWindow_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QMdiSubWindow_virtualbase_Redirected(const void* self, QPoint* offset);
bool QMdiSubWindow_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QMdiSubWindow_virtualbase_SharedPainter(const void* self);
bool QMdiSubWindow_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QMdiSubWindow_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QMdiSubWindow_virtualbase_InputMethodQuery(const void* self, int param1);
bool QMdiSubWindow_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QMdiSubWindow_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QMdiSubWindow_override_virtual_CustomEvent(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_CustomEvent(void* self, QEvent* event);
bool QMdiSubWindow_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QMdiSubWindow_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QMdiSubWindow_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QMdiSubWindow_Delete(QMdiSubWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
