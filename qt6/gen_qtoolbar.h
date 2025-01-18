#pragma once
#ifndef MIQT_QT6_GEN_QTOOLBAR_H
#define MIQT_QT6_GEN_QTOOLBAR_H

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
class QInputMethodEvent;
class QKeyEvent;
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
class QStyleOptionToolBar;
class QTabletEvent;
class QToolBar;
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
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
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
typedef struct QStyleOptionToolBar QStyleOptionToolBar;
typedef struct QTabletEvent QTabletEvent;
typedef struct QToolBar QToolBar;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QToolBar* QToolBar_new(QWidget* parent);
QToolBar* QToolBar_new2(struct miqt_string title);
QToolBar* QToolBar_new3();
QToolBar* QToolBar_new4(struct miqt_string title, QWidget* parent);
void QToolBar_virtbase(QToolBar* src, QWidget** outptr_QWidget);
QMetaObject* QToolBar_MetaObject(const QToolBar* self);
void* QToolBar_Metacast(QToolBar* self, const char* param1);
struct miqt_string QToolBar_Tr(const char* s);
void QToolBar_SetMovable(QToolBar* self, bool movable);
bool QToolBar_IsMovable(const QToolBar* self);
void QToolBar_SetAllowedAreas(QToolBar* self, int areas);
int QToolBar_AllowedAreas(const QToolBar* self);
bool QToolBar_IsAreaAllowed(const QToolBar* self, int area);
void QToolBar_SetOrientation(QToolBar* self, int orientation);
int QToolBar_Orientation(const QToolBar* self);
void QToolBar_Clear(QToolBar* self);
QAction* QToolBar_AddSeparator(QToolBar* self);
QAction* QToolBar_InsertSeparator(QToolBar* self, QAction* before);
QAction* QToolBar_AddWidget(QToolBar* self, QWidget* widget);
QAction* QToolBar_InsertWidget(QToolBar* self, QAction* before, QWidget* widget);
QRect* QToolBar_ActionGeometry(const QToolBar* self, QAction* action);
QAction* QToolBar_ActionAt(const QToolBar* self, QPoint* p);
QAction* QToolBar_ActionAt2(const QToolBar* self, int x, int y);
QAction* QToolBar_ToggleViewAction(const QToolBar* self);
QSize* QToolBar_IconSize(const QToolBar* self);
int QToolBar_ToolButtonStyle(const QToolBar* self);
QWidget* QToolBar_WidgetForAction(const QToolBar* self, QAction* action);
bool QToolBar_IsFloatable(const QToolBar* self);
void QToolBar_SetFloatable(QToolBar* self, bool floatable);
bool QToolBar_IsFloating(const QToolBar* self);
void QToolBar_SetIconSize(QToolBar* self, QSize* iconSize);
void QToolBar_SetToolButtonStyle(QToolBar* self, int toolButtonStyle);
void QToolBar_ActionTriggered(QToolBar* self, QAction* action);
void QToolBar_connect_ActionTriggered(QToolBar* self, intptr_t slot);
void QToolBar_MovableChanged(QToolBar* self, bool movable);
void QToolBar_connect_MovableChanged(QToolBar* self, intptr_t slot);
void QToolBar_AllowedAreasChanged(QToolBar* self, int allowedAreas);
void QToolBar_connect_AllowedAreasChanged(QToolBar* self, intptr_t slot);
void QToolBar_OrientationChanged(QToolBar* self, int orientation);
void QToolBar_connect_OrientationChanged(QToolBar* self, intptr_t slot);
void QToolBar_IconSizeChanged(QToolBar* self, QSize* iconSize);
void QToolBar_connect_IconSizeChanged(QToolBar* self, intptr_t slot);
void QToolBar_ToolButtonStyleChanged(QToolBar* self, int toolButtonStyle);
void QToolBar_connect_ToolButtonStyleChanged(QToolBar* self, intptr_t slot);
void QToolBar_TopLevelChanged(QToolBar* self, bool topLevel);
void QToolBar_connect_TopLevelChanged(QToolBar* self, intptr_t slot);
void QToolBar_VisibilityChanged(QToolBar* self, bool visible);
void QToolBar_connect_VisibilityChanged(QToolBar* self, intptr_t slot);
void QToolBar_ActionEvent(QToolBar* self, QActionEvent* event);
void QToolBar_ChangeEvent(QToolBar* self, QEvent* event);
void QToolBar_PaintEvent(QToolBar* self, QPaintEvent* event);
bool QToolBar_Event(QToolBar* self, QEvent* event);
void QToolBar_InitStyleOption(const QToolBar* self, QStyleOptionToolBar* option);
struct miqt_string QToolBar_Tr2(const char* s, const char* c);
struct miqt_string QToolBar_Tr3(const char* s, const char* c, int n);
bool QToolBar_override_virtual_ActionEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QToolBar_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_ChangeEvent(void* self, QEvent* event);
bool QToolBar_override_virtual_PaintEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QToolBar_override_virtual_Event(void* self, intptr_t slot);
bool QToolBar_virtualbase_Event(void* self, QEvent* event);
bool QToolBar_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QToolBar_virtualbase_InitStyleOption(const void* self, QStyleOptionToolBar* option);
bool QToolBar_override_virtual_DevType(void* self, intptr_t slot);
int QToolBar_virtualbase_DevType(const void* self);
bool QToolBar_override_virtual_SetVisible(void* self, intptr_t slot);
void QToolBar_virtualbase_SetVisible(void* self, bool visible);
bool QToolBar_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QToolBar_virtualbase_SizeHint(const void* self);
bool QToolBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QToolBar_virtualbase_MinimumSizeHint(const void* self);
bool QToolBar_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QToolBar_virtualbase_HeightForWidth(const void* self, int param1);
bool QToolBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QToolBar_virtualbase_HasHeightForWidth(const void* self);
bool QToolBar_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QToolBar_virtualbase_PaintEngine(const void* self);
bool QToolBar_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QToolBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QToolBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QToolBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QToolBar_override_virtual_WheelEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QToolBar_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QToolBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QToolBar_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QToolBar_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QToolBar_override_virtual_EnterEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QToolBar_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QToolBar_override_virtual_MoveEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QToolBar_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QToolBar_override_virtual_CloseEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QToolBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QToolBar_override_virtual_TabletEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QToolBar_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QToolBar_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QToolBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QToolBar_override_virtual_DropEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QToolBar_override_virtual_ShowEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QToolBar_override_virtual_HideEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QToolBar_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QToolBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QToolBar_override_virtual_Metric(void* self, intptr_t slot);
int QToolBar_virtualbase_Metric(const void* self, int param1);
bool QToolBar_override_virtual_InitPainter(void* self, intptr_t slot);
void QToolBar_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QToolBar_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QToolBar_virtualbase_Redirected(const void* self, QPoint* offset);
bool QToolBar_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QToolBar_virtualbase_SharedPainter(const void* self);
bool QToolBar_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QToolBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QToolBar_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QToolBar_virtualbase_InputMethodQuery(const void* self, int param1);
bool QToolBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QToolBar_virtualbase_FocusNextPrevChild(void* self, bool next);
void QToolBar_Delete(QToolBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
