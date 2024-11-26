#pragma once
#ifndef MIQT_QT6_GEN_QMENU_H
#define MIQT_QT6_GEN_QMENU_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QActionEvent;
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
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
class QMenu;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QRect;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionMenuItem;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
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
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionMenuItem QStyleOptionMenuItem;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

void QMenu_new(QWidget* parent, QMenu** outptr_QMenu, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QMenu_new2(QMenu** outptr_QMenu, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QMenu_new3(struct miqt_string title, QMenu** outptr_QMenu, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QMenu_new4(struct miqt_string title, QWidget* parent, QMenu** outptr_QMenu, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QMenu_MetaObject(const QMenu* self);
void* QMenu_Metacast(QMenu* self, const char* param1);
struct miqt_string QMenu_Tr(const char* s);
QAction* QMenu_AddMenu(QMenu* self, QMenu* menu);
QMenu* QMenu_AddMenuWithTitle(QMenu* self, struct miqt_string title);
QMenu* QMenu_AddMenu2(QMenu* self, QIcon* icon, struct miqt_string title);
QAction* QMenu_AddSeparator(QMenu* self);
QAction* QMenu_AddSection(QMenu* self, struct miqt_string text);
QAction* QMenu_AddSection2(QMenu* self, QIcon* icon, struct miqt_string text);
QAction* QMenu_InsertMenu(QMenu* self, QAction* before, QMenu* menu);
QAction* QMenu_InsertSeparator(QMenu* self, QAction* before);
QAction* QMenu_InsertSection(QMenu* self, QAction* before, struct miqt_string text);
QAction* QMenu_InsertSection2(QMenu* self, QAction* before, QIcon* icon, struct miqt_string text);
bool QMenu_IsEmpty(const QMenu* self);
void QMenu_Clear(QMenu* self);
void QMenu_SetTearOffEnabled(QMenu* self, bool tearOffEnabled);
bool QMenu_IsTearOffEnabled(const QMenu* self);
bool QMenu_IsTearOffMenuVisible(const QMenu* self);
void QMenu_ShowTearOffMenu(QMenu* self);
void QMenu_ShowTearOffMenuWithPos(QMenu* self, QPoint* pos);
void QMenu_HideTearOffMenu(QMenu* self);
void QMenu_SetDefaultAction(QMenu* self, QAction* defaultAction);
QAction* QMenu_DefaultAction(const QMenu* self);
void QMenu_SetActiveAction(QMenu* self, QAction* act);
QAction* QMenu_ActiveAction(const QMenu* self);
void QMenu_Popup(QMenu* self, QPoint* pos);
QAction* QMenu_Exec(QMenu* self);
QAction* QMenu_ExecWithPos(QMenu* self, QPoint* pos);
QAction* QMenu_Exec2(struct miqt_array /* of QAction* */  actions, QPoint* pos);
QSize* QMenu_SizeHint(const QMenu* self);
QRect* QMenu_ActionGeometry(const QMenu* self, QAction* param1);
QAction* QMenu_ActionAt(const QMenu* self, QPoint* param1);
QAction* QMenu_MenuAction(const QMenu* self);
QMenu* QMenu_MenuInAction(QAction* action);
struct miqt_string QMenu_Title(const QMenu* self);
void QMenu_SetTitle(QMenu* self, struct miqt_string title);
QIcon* QMenu_Icon(const QMenu* self);
void QMenu_SetIcon(QMenu* self, QIcon* icon);
void QMenu_SetNoReplayFor(QMenu* self, QWidget* widget);
bool QMenu_SeparatorsCollapsible(const QMenu* self);
void QMenu_SetSeparatorsCollapsible(QMenu* self, bool collapse);
bool QMenu_ToolTipsVisible(const QMenu* self);
void QMenu_SetToolTipsVisible(QMenu* self, bool visible);
void QMenu_AboutToShow(QMenu* self);
void QMenu_connect_AboutToShow(QMenu* self, intptr_t slot);
void QMenu_AboutToHide(QMenu* self);
void QMenu_connect_AboutToHide(QMenu* self, intptr_t slot);
void QMenu_Triggered(QMenu* self, QAction* action);
void QMenu_connect_Triggered(QMenu* self, intptr_t slot);
void QMenu_Hovered(QMenu* self, QAction* action);
void QMenu_connect_Hovered(QMenu* self, intptr_t slot);
void QMenu_ChangeEvent(QMenu* self, QEvent* param1);
void QMenu_KeyPressEvent(QMenu* self, QKeyEvent* param1);
void QMenu_MouseReleaseEvent(QMenu* self, QMouseEvent* param1);
void QMenu_MousePressEvent(QMenu* self, QMouseEvent* param1);
void QMenu_MouseMoveEvent(QMenu* self, QMouseEvent* param1);
void QMenu_WheelEvent(QMenu* self, QWheelEvent* param1);
void QMenu_EnterEvent(QMenu* self, QEnterEvent* param1);
void QMenu_LeaveEvent(QMenu* self, QEvent* param1);
void QMenu_HideEvent(QMenu* self, QHideEvent* param1);
void QMenu_PaintEvent(QMenu* self, QPaintEvent* param1);
void QMenu_ActionEvent(QMenu* self, QActionEvent* param1);
void QMenu_TimerEvent(QMenu* self, QTimerEvent* param1);
bool QMenu_Event(QMenu* self, QEvent* param1);
bool QMenu_FocusNextPrevChild(QMenu* self, bool next);
void QMenu_InitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, QAction* action);
struct miqt_string QMenu_Tr2(const char* s, const char* c);
struct miqt_string QMenu_Tr3(const char* s, const char* c, int n);
void QMenu_Popup2(QMenu* self, QPoint* pos, QAction* at);
QAction* QMenu_Exec22(QMenu* self, QPoint* pos, QAction* at);
QAction* QMenu_Exec3(struct miqt_array /* of QAction* */  actions, QPoint* pos, QAction* at);
QAction* QMenu_Exec4(struct miqt_array /* of QAction* */  actions, QPoint* pos, QAction* at, QWidget* parent);
void QMenu_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QMenu_virtualbase_SizeHint(const void* self);
void QMenu_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QMenu_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QMenu_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QMenu_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QMenu_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QMenu_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
void QMenu_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QMenu_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QMenu_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QMenu_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QMenu_override_virtual_WheelEvent(void* self, intptr_t slot);
void QMenu_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
void QMenu_override_virtual_EnterEvent(void* self, intptr_t slot);
void QMenu_virtualbase_EnterEvent(void* self, QEnterEvent* param1);
void QMenu_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QMenu_virtualbase_LeaveEvent(void* self, QEvent* param1);
void QMenu_override_virtual_HideEvent(void* self, intptr_t slot);
void QMenu_virtualbase_HideEvent(void* self, QHideEvent* param1);
void QMenu_override_virtual_PaintEvent(void* self, intptr_t slot);
void QMenu_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QMenu_override_virtual_ActionEvent(void* self, intptr_t slot);
void QMenu_virtualbase_ActionEvent(void* self, QActionEvent* param1);
void QMenu_override_virtual_TimerEvent(void* self, intptr_t slot);
void QMenu_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
void QMenu_override_virtual_Event(void* self, intptr_t slot);
bool QMenu_virtualbase_Event(void* self, QEvent* param1);
void QMenu_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QMenu_virtualbase_FocusNextPrevChild(void* self, bool next);
void QMenu_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QMenu_virtualbase_InitStyleOption(const void* self, QStyleOptionMenuItem* option, QAction* action);
void QMenu_override_virtual_DevType(void* self, intptr_t slot);
int QMenu_virtualbase_DevType(const void* self);
void QMenu_override_virtual_SetVisible(void* self, intptr_t slot);
void QMenu_virtualbase_SetVisible(void* self, bool visible);
void QMenu_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QMenu_virtualbase_MinimumSizeHint(const void* self);
void QMenu_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QMenu_virtualbase_HeightForWidth(const void* self, int param1);
void QMenu_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QMenu_virtualbase_HasHeightForWidth(const void* self);
void QMenu_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QMenu_virtualbase_PaintEngine(const void* self);
void QMenu_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QMenu_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QMenu_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QMenu_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QMenu_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QMenu_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QMenu_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QMenu_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QMenu_override_virtual_MoveEvent(void* self, intptr_t slot);
void QMenu_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QMenu_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QMenu_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QMenu_override_virtual_CloseEvent(void* self, intptr_t slot);
void QMenu_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QMenu_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QMenu_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QMenu_override_virtual_TabletEvent(void* self, intptr_t slot);
void QMenu_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QMenu_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QMenu_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QMenu_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QMenu_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QMenu_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QMenu_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QMenu_override_virtual_DropEvent(void* self, intptr_t slot);
void QMenu_virtualbase_DropEvent(void* self, QDropEvent* event);
void QMenu_override_virtual_ShowEvent(void* self, intptr_t slot);
void QMenu_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QMenu_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QMenu_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
void QMenu_override_virtual_Metric(void* self, intptr_t slot);
int QMenu_virtualbase_Metric(const void* self, int param1);
void QMenu_override_virtual_InitPainter(void* self, intptr_t slot);
void QMenu_virtualbase_InitPainter(const void* self, QPainter* painter);
void QMenu_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QMenu_virtualbase_Redirected(const void* self, QPoint* offset);
void QMenu_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QMenu_virtualbase_SharedPainter(const void* self);
void QMenu_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QMenu_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QMenu_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QMenu_virtualbase_InputMethodQuery(const void* self, int param1);
void QMenu_Delete(QMenu* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
