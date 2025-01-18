#pragma once
#ifndef MIQT_QT_GEN_QMAINWINDOW_H
#define MIQT_QT_GEN_QMAINWINDOW_H

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
class QCloseEvent;
class QContextMenuEvent;
class QDockWidget;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMainWindow;
class QMenu;
class QMenuBar;
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
class QStatusBar;
class QTabletEvent;
class QToolBar;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDockWidget QDockWidget;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMainWindow QMainWindow;
typedef struct QMenu QMenu;
typedef struct QMenuBar QMenuBar;
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
typedef struct QStatusBar QStatusBar;
typedef struct QTabletEvent QTabletEvent;
typedef struct QToolBar QToolBar;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QMainWindow* QMainWindow_new(QWidget* parent);
QMainWindow* QMainWindow_new2();
QMainWindow* QMainWindow_new3(QWidget* parent, int flags);
void QMainWindow_virtbase(QMainWindow* src, QWidget** outptr_QWidget);
QMetaObject* QMainWindow_MetaObject(const QMainWindow* self);
void* QMainWindow_Metacast(QMainWindow* self, const char* param1);
struct miqt_string QMainWindow_Tr(const char* s);
struct miqt_string QMainWindow_TrUtf8(const char* s);
QSize* QMainWindow_IconSize(const QMainWindow* self);
void QMainWindow_SetIconSize(QMainWindow* self, QSize* iconSize);
int QMainWindow_ToolButtonStyle(const QMainWindow* self);
void QMainWindow_SetToolButtonStyle(QMainWindow* self, int toolButtonStyle);
bool QMainWindow_IsAnimated(const QMainWindow* self);
bool QMainWindow_IsDockNestingEnabled(const QMainWindow* self);
bool QMainWindow_DocumentMode(const QMainWindow* self);
void QMainWindow_SetDocumentMode(QMainWindow* self, bool enabled);
int QMainWindow_TabShape(const QMainWindow* self);
void QMainWindow_SetTabShape(QMainWindow* self, int tabShape);
int QMainWindow_TabPosition(const QMainWindow* self, int area);
void QMainWindow_SetTabPosition(QMainWindow* self, int areas, int tabPosition);
void QMainWindow_SetDockOptions(QMainWindow* self, int options);
int QMainWindow_DockOptions(const QMainWindow* self);
bool QMainWindow_IsSeparator(const QMainWindow* self, QPoint* pos);
QMenuBar* QMainWindow_MenuBar(const QMainWindow* self);
void QMainWindow_SetMenuBar(QMainWindow* self, QMenuBar* menubar);
QWidget* QMainWindow_MenuWidget(const QMainWindow* self);
void QMainWindow_SetMenuWidget(QMainWindow* self, QWidget* menubar);
QStatusBar* QMainWindow_StatusBar(const QMainWindow* self);
void QMainWindow_SetStatusBar(QMainWindow* self, QStatusBar* statusbar);
QWidget* QMainWindow_CentralWidget(const QMainWindow* self);
void QMainWindow_SetCentralWidget(QMainWindow* self, QWidget* widget);
QWidget* QMainWindow_TakeCentralWidget(QMainWindow* self);
void QMainWindow_SetCorner(QMainWindow* self, int corner, int area);
int QMainWindow_Corner(const QMainWindow* self, int corner);
void QMainWindow_AddToolBarBreak(QMainWindow* self);
void QMainWindow_InsertToolBarBreak(QMainWindow* self, QToolBar* before);
void QMainWindow_AddToolBar(QMainWindow* self, int area, QToolBar* toolbar);
void QMainWindow_AddToolBarWithToolbar(QMainWindow* self, QToolBar* toolbar);
QToolBar* QMainWindow_AddToolBarWithTitle(QMainWindow* self, struct miqt_string title);
void QMainWindow_InsertToolBar(QMainWindow* self, QToolBar* before, QToolBar* toolbar);
void QMainWindow_RemoveToolBar(QMainWindow* self, QToolBar* toolbar);
void QMainWindow_RemoveToolBarBreak(QMainWindow* self, QToolBar* before);
bool QMainWindow_UnifiedTitleAndToolBarOnMac(const QMainWindow* self);
int QMainWindow_ToolBarArea(const QMainWindow* self, QToolBar* toolbar);
bool QMainWindow_ToolBarBreak(const QMainWindow* self, QToolBar* toolbar);
void QMainWindow_AddDockWidget(QMainWindow* self, int area, QDockWidget* dockwidget);
void QMainWindow_AddDockWidget2(QMainWindow* self, int area, QDockWidget* dockwidget, int orientation);
void QMainWindow_SplitDockWidget(QMainWindow* self, QDockWidget* after, QDockWidget* dockwidget, int orientation);
void QMainWindow_TabifyDockWidget(QMainWindow* self, QDockWidget* first, QDockWidget* second);
struct miqt_array /* of QDockWidget* */  QMainWindow_TabifiedDockWidgets(const QMainWindow* self, QDockWidget* dockwidget);
void QMainWindow_RemoveDockWidget(QMainWindow* self, QDockWidget* dockwidget);
bool QMainWindow_RestoreDockWidget(QMainWindow* self, QDockWidget* dockwidget);
int QMainWindow_DockWidgetArea(const QMainWindow* self, QDockWidget* dockwidget);
void QMainWindow_ResizeDocks(QMainWindow* self, struct miqt_array /* of QDockWidget* */  docks, struct miqt_array /* of int */  sizes, int orientation);
struct miqt_string QMainWindow_SaveState(const QMainWindow* self);
bool QMainWindow_RestoreState(QMainWindow* self, struct miqt_string state);
QMenu* QMainWindow_CreatePopupMenu(QMainWindow* self);
void QMainWindow_SetAnimated(QMainWindow* self, bool enabled);
void QMainWindow_SetDockNestingEnabled(QMainWindow* self, bool enabled);
void QMainWindow_SetUnifiedTitleAndToolBarOnMac(QMainWindow* self, bool set);
void QMainWindow_IconSizeChanged(QMainWindow* self, QSize* iconSize);
void QMainWindow_connect_IconSizeChanged(QMainWindow* self, intptr_t slot);
void QMainWindow_ToolButtonStyleChanged(QMainWindow* self, int toolButtonStyle);
void QMainWindow_connect_ToolButtonStyleChanged(QMainWindow* self, intptr_t slot);
void QMainWindow_TabifiedDockWidgetActivated(QMainWindow* self, QDockWidget* dockWidget);
void QMainWindow_connect_TabifiedDockWidgetActivated(QMainWindow* self, intptr_t slot);
void QMainWindow_ContextMenuEvent(QMainWindow* self, QContextMenuEvent* event);
bool QMainWindow_Event(QMainWindow* self, QEvent* event);
struct miqt_string QMainWindow_Tr2(const char* s, const char* c);
struct miqt_string QMainWindow_Tr3(const char* s, const char* c, int n);
struct miqt_string QMainWindow_TrUtf82(const char* s, const char* c);
struct miqt_string QMainWindow_TrUtf83(const char* s, const char* c, int n);
void QMainWindow_AddToolBarBreak1(QMainWindow* self, int area);
struct miqt_string QMainWindow_SaveState1(const QMainWindow* self, int version);
bool QMainWindow_RestoreState2(QMainWindow* self, struct miqt_string state, int version);
bool QMainWindow_override_virtual_CreatePopupMenu(void* self, intptr_t slot);
QMenu* QMainWindow_virtualbase_CreatePopupMenu(void* self);
bool QMainWindow_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QMainWindow_override_virtual_Event(void* self, intptr_t slot);
bool QMainWindow_virtualbase_Event(void* self, QEvent* event);
bool QMainWindow_override_virtual_DevType(void* self, intptr_t slot);
int QMainWindow_virtualbase_DevType(const void* self);
bool QMainWindow_override_virtual_SetVisible(void* self, intptr_t slot);
void QMainWindow_virtualbase_SetVisible(void* self, bool visible);
bool QMainWindow_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QMainWindow_virtualbase_SizeHint(const void* self);
bool QMainWindow_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QMainWindow_virtualbase_MinimumSizeHint(const void* self);
bool QMainWindow_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QMainWindow_virtualbase_HeightForWidth(const void* self, int param1);
bool QMainWindow_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QMainWindow_virtualbase_HasHeightForWidth(const void* self);
bool QMainWindow_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QMainWindow_virtualbase_PaintEngine(const void* self);
bool QMainWindow_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QMainWindow_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QMainWindow_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QMainWindow_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QMainWindow_override_virtual_WheelEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QMainWindow_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QMainWindow_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QMainWindow_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QMainWindow_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QMainWindow_override_virtual_EnterEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_EnterEvent(void* self, QEvent* event);
bool QMainWindow_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QMainWindow_override_virtual_PaintEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QMainWindow_override_virtual_MoveEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QMainWindow_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QMainWindow_override_virtual_CloseEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QMainWindow_override_virtual_TabletEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QMainWindow_override_virtual_ActionEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QMainWindow_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QMainWindow_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QMainWindow_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QMainWindow_override_virtual_DropEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QMainWindow_override_virtual_ShowEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QMainWindow_override_virtual_HideEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QMainWindow_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QMainWindow_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QMainWindow_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QMainWindow_override_virtual_Metric(void* self, intptr_t slot);
int QMainWindow_virtualbase_Metric(const void* self, int param1);
bool QMainWindow_override_virtual_InitPainter(void* self, intptr_t slot);
void QMainWindow_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QMainWindow_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QMainWindow_virtualbase_Redirected(const void* self, QPoint* offset);
bool QMainWindow_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QMainWindow_virtualbase_SharedPainter(const void* self);
bool QMainWindow_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QMainWindow_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QMainWindow_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QMainWindow_virtualbase_InputMethodQuery(const void* self, int param1);
bool QMainWindow_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QMainWindow_virtualbase_FocusNextPrevChild(void* self, bool next);
void QMainWindow_Delete(QMainWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
