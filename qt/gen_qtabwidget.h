#pragma once
#ifndef MIQT_QT_GEN_QTABWIDGET_H
#define MIQT_QT_GEN_QTABWIDGET_H

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
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QIcon;
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
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabBar;
class QTabWidget;
class QTabletEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabBar QTabBar;
typedef struct QTabWidget QTabWidget;
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QTabWidget* QTabWidget_new(QWidget* parent);
QTabWidget* QTabWidget_new2();
void QTabWidget_virtbase(QTabWidget* src, QWidget** outptr_QWidget);
QMetaObject* QTabWidget_MetaObject(const QTabWidget* self);
void* QTabWidget_Metacast(QTabWidget* self, const char* param1);
struct miqt_string QTabWidget_Tr(const char* s);
struct miqt_string QTabWidget_TrUtf8(const char* s);
int QTabWidget_AddTab(QTabWidget* self, QWidget* widget, struct miqt_string param2);
int QTabWidget_AddTab2(QTabWidget* self, QWidget* widget, QIcon* icon, struct miqt_string label);
int QTabWidget_InsertTab(QTabWidget* self, int index, QWidget* widget, struct miqt_string param3);
int QTabWidget_InsertTab2(QTabWidget* self, int index, QWidget* widget, QIcon* icon, struct miqt_string label);
void QTabWidget_RemoveTab(QTabWidget* self, int index);
bool QTabWidget_IsTabEnabled(const QTabWidget* self, int index);
void QTabWidget_SetTabEnabled(QTabWidget* self, int index, bool enabled);
bool QTabWidget_IsTabVisible(const QTabWidget* self, int index);
void QTabWidget_SetTabVisible(QTabWidget* self, int index, bool visible);
struct miqt_string QTabWidget_TabText(const QTabWidget* self, int index);
void QTabWidget_SetTabText(QTabWidget* self, int index, struct miqt_string text);
QIcon* QTabWidget_TabIcon(const QTabWidget* self, int index);
void QTabWidget_SetTabIcon(QTabWidget* self, int index, QIcon* icon);
void QTabWidget_SetTabToolTip(QTabWidget* self, int index, struct miqt_string tip);
struct miqt_string QTabWidget_TabToolTip(const QTabWidget* self, int index);
void QTabWidget_SetTabWhatsThis(QTabWidget* self, int index, struct miqt_string text);
struct miqt_string QTabWidget_TabWhatsThis(const QTabWidget* self, int index);
int QTabWidget_CurrentIndex(const QTabWidget* self);
QWidget* QTabWidget_CurrentWidget(const QTabWidget* self);
QWidget* QTabWidget_Widget(const QTabWidget* self, int index);
int QTabWidget_IndexOf(const QTabWidget* self, QWidget* widget);
int QTabWidget_Count(const QTabWidget* self);
int QTabWidget_TabPosition(const QTabWidget* self);
void QTabWidget_SetTabPosition(QTabWidget* self, int position);
bool QTabWidget_TabsClosable(const QTabWidget* self);
void QTabWidget_SetTabsClosable(QTabWidget* self, bool closeable);
bool QTabWidget_IsMovable(const QTabWidget* self);
void QTabWidget_SetMovable(QTabWidget* self, bool movable);
int QTabWidget_TabShape(const QTabWidget* self);
void QTabWidget_SetTabShape(QTabWidget* self, int s);
QSize* QTabWidget_SizeHint(const QTabWidget* self);
QSize* QTabWidget_MinimumSizeHint(const QTabWidget* self);
int QTabWidget_HeightForWidth(const QTabWidget* self, int width);
bool QTabWidget_HasHeightForWidth(const QTabWidget* self);
void QTabWidget_SetCornerWidget(QTabWidget* self, QWidget* w);
QWidget* QTabWidget_CornerWidget(const QTabWidget* self);
int QTabWidget_ElideMode(const QTabWidget* self);
void QTabWidget_SetElideMode(QTabWidget* self, int mode);
QSize* QTabWidget_IconSize(const QTabWidget* self);
void QTabWidget_SetIconSize(QTabWidget* self, QSize* size);
bool QTabWidget_UsesScrollButtons(const QTabWidget* self);
void QTabWidget_SetUsesScrollButtons(QTabWidget* self, bool useButtons);
bool QTabWidget_DocumentMode(const QTabWidget* self);
void QTabWidget_SetDocumentMode(QTabWidget* self, bool set);
bool QTabWidget_TabBarAutoHide(const QTabWidget* self);
void QTabWidget_SetTabBarAutoHide(QTabWidget* self, bool enabled);
void QTabWidget_Clear(QTabWidget* self);
QTabBar* QTabWidget_TabBar(const QTabWidget* self);
void QTabWidget_SetCurrentIndex(QTabWidget* self, int index);
void QTabWidget_SetCurrentWidget(QTabWidget* self, QWidget* widget);
void QTabWidget_CurrentChanged(QTabWidget* self, int index);
void QTabWidget_connect_CurrentChanged(QTabWidget* self, intptr_t slot);
void QTabWidget_TabCloseRequested(QTabWidget* self, int index);
void QTabWidget_connect_TabCloseRequested(QTabWidget* self, intptr_t slot);
void QTabWidget_TabBarClicked(QTabWidget* self, int index);
void QTabWidget_connect_TabBarClicked(QTabWidget* self, intptr_t slot);
void QTabWidget_TabBarDoubleClicked(QTabWidget* self, int index);
void QTabWidget_connect_TabBarDoubleClicked(QTabWidget* self, intptr_t slot);
void QTabWidget_TabInserted(QTabWidget* self, int index);
void QTabWidget_TabRemoved(QTabWidget* self, int index);
void QTabWidget_ShowEvent(QTabWidget* self, QShowEvent* param1);
void QTabWidget_ResizeEvent(QTabWidget* self, QResizeEvent* param1);
void QTabWidget_KeyPressEvent(QTabWidget* self, QKeyEvent* param1);
void QTabWidget_PaintEvent(QTabWidget* self, QPaintEvent* param1);
void QTabWidget_ChangeEvent(QTabWidget* self, QEvent* param1);
bool QTabWidget_Event(QTabWidget* self, QEvent* param1);
struct miqt_string QTabWidget_Tr2(const char* s, const char* c);
struct miqt_string QTabWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QTabWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QTabWidget_TrUtf83(const char* s, const char* c, int n);
void QTabWidget_SetCornerWidget2(QTabWidget* self, QWidget* w, int corner);
QWidget* QTabWidget_CornerWidget1(const QTabWidget* self, int corner);
void QTabWidget_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QTabWidget_virtualbase_SizeHint(const void* self);
void QTabWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QTabWidget_virtualbase_MinimumSizeHint(const void* self);
void QTabWidget_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QTabWidget_virtualbase_HeightForWidth(const void* self, int width);
void QTabWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QTabWidget_virtualbase_HasHeightForWidth(const void* self);
void QTabWidget_override_virtual_TabInserted(void* self, intptr_t slot);
void QTabWidget_virtualbase_TabInserted(void* self, int index);
void QTabWidget_override_virtual_TabRemoved(void* self, intptr_t slot);
void QTabWidget_virtualbase_TabRemoved(void* self, int index);
void QTabWidget_override_virtual_ShowEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QTabWidget_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QTabWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QTabWidget_override_virtual_PaintEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QTabWidget_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QTabWidget_override_virtual_Event(void* self, intptr_t slot);
bool QTabWidget_virtualbase_Event(void* self, QEvent* param1);
void QTabWidget_override_virtual_DevType(void* self, intptr_t slot);
int QTabWidget_virtualbase_DevType(const void* self);
void QTabWidget_override_virtual_SetVisible(void* self, intptr_t slot);
void QTabWidget_virtualbase_SetVisible(void* self, bool visible);
void QTabWidget_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QTabWidget_virtualbase_PaintEngine(const void* self);
void QTabWidget_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QTabWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QTabWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QTabWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QTabWidget_override_virtual_WheelEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QTabWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QTabWidget_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QTabWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QTabWidget_override_virtual_EnterEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_EnterEvent(void* self, QEvent* event);
void QTabWidget_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_LeaveEvent(void* self, QEvent* event);
void QTabWidget_override_virtual_MoveEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QTabWidget_override_virtual_CloseEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QTabWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QTabWidget_override_virtual_TabletEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QTabWidget_override_virtual_ActionEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QTabWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QTabWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QTabWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QTabWidget_override_virtual_DropEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_DropEvent(void* self, QDropEvent* event);
void QTabWidget_override_virtual_HideEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_HideEvent(void* self, QHideEvent* event);
void QTabWidget_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QTabWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
void QTabWidget_override_virtual_Metric(void* self, intptr_t slot);
int QTabWidget_virtualbase_Metric(const void* self, int param1);
void QTabWidget_override_virtual_InitPainter(void* self, intptr_t slot);
void QTabWidget_virtualbase_InitPainter(const void* self, QPainter* painter);
void QTabWidget_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QTabWidget_virtualbase_Redirected(const void* self, QPoint* offset);
void QTabWidget_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QTabWidget_virtualbase_SharedPainter(const void* self);
void QTabWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QTabWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QTabWidget_virtualbase_InputMethodQuery(const void* self, int param1);
void QTabWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QTabWidget_virtualbase_FocusNextPrevChild(void* self, bool next);
void QTabWidget_Delete(QTabWidget* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
