#pragma once
#ifndef MIQT_QT_GEN_QMENUBAR_H
#define MIQT_QT_GEN_QMENUBAR_H

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
class QEvent;
class QFocusEvent;
class QHideEvent;
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
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
class QRect;
class QResizeEvent;
class QShowEvent;
class QSize;
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
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
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
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QMenuBar* QMenuBar_new(QWidget* parent);
QMenuBar* QMenuBar_new2();
void QMenuBar_virtbase(QMenuBar* src, QWidget** outptr_QWidget);
QMetaObject* QMenuBar_MetaObject(const QMenuBar* self);
void* QMenuBar_Metacast(QMenuBar* self, const char* param1);
struct miqt_string QMenuBar_Tr(const char* s);
struct miqt_string QMenuBar_TrUtf8(const char* s);
QAction* QMenuBar_AddAction(QMenuBar* self, struct miqt_string text);
QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu);
QMenu* QMenuBar_AddMenuWithTitle(QMenuBar* self, struct miqt_string title);
QMenu* QMenuBar_AddMenu2(QMenuBar* self, QIcon* icon, struct miqt_string title);
QAction* QMenuBar_AddSeparator(QMenuBar* self);
QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before);
QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu);
void QMenuBar_Clear(QMenuBar* self);
QAction* QMenuBar_ActiveAction(const QMenuBar* self);
void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action);
void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp);
bool QMenuBar_IsDefaultUp(const QMenuBar* self);
QSize* QMenuBar_SizeHint(const QMenuBar* self);
QSize* QMenuBar_MinimumSizeHint(const QMenuBar* self);
int QMenuBar_HeightForWidth(const QMenuBar* self, int param1);
QRect* QMenuBar_ActionGeometry(const QMenuBar* self, QAction* param1);
QAction* QMenuBar_ActionAt(const QMenuBar* self, QPoint* param1);
void QMenuBar_SetCornerWidget(QMenuBar* self, QWidget* w);
QWidget* QMenuBar_CornerWidget(const QMenuBar* self);
bool QMenuBar_IsNativeMenuBar(const QMenuBar* self);
void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar);
void QMenuBar_SetVisible(QMenuBar* self, bool visible);
void QMenuBar_Triggered(QMenuBar* self, QAction* action);
void QMenuBar_connect_Triggered(QMenuBar* self, intptr_t slot);
void QMenuBar_Hovered(QMenuBar* self, QAction* action);
void QMenuBar_connect_Hovered(QMenuBar* self, intptr_t slot);
void QMenuBar_ChangeEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_KeyPressEvent(QMenuBar* self, QKeyEvent* param1);
void QMenuBar_MouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_MousePressEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_MouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_LeaveEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_PaintEvent(QMenuBar* self, QPaintEvent* param1);
void QMenuBar_ResizeEvent(QMenuBar* self, QResizeEvent* param1);
void QMenuBar_ActionEvent(QMenuBar* self, QActionEvent* param1);
void QMenuBar_FocusOutEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_FocusInEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_TimerEvent(QMenuBar* self, QTimerEvent* param1);
bool QMenuBar_EventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
bool QMenuBar_Event(QMenuBar* self, QEvent* param1);
struct miqt_string QMenuBar_Tr2(const char* s, const char* c);
struct miqt_string QMenuBar_Tr3(const char* s, const char* c, int n);
struct miqt_string QMenuBar_TrUtf82(const char* s, const char* c);
struct miqt_string QMenuBar_TrUtf83(const char* s, const char* c, int n);
void QMenuBar_SetCornerWidget2(QMenuBar* self, QWidget* w, int corner);
QWidget* QMenuBar_CornerWidget1(const QMenuBar* self, int corner);
void QMenuBar_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QMenuBar_virtualbase_SizeHint(const void* self);
void QMenuBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QMenuBar_virtualbase_MinimumSizeHint(const void* self);
void QMenuBar_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QMenuBar_virtualbase_HeightForWidth(const void* self, int param1);
void QMenuBar_override_virtual_SetVisible(void* self, intptr_t slot);
void QMenuBar_virtualbase_SetVisible(void* self, bool visible);
void QMenuBar_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QMenuBar_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QMenuBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
void QMenuBar_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QMenuBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QMenuBar_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_LeaveEvent(void* self, QEvent* param1);
void QMenuBar_override_virtual_PaintEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QMenuBar_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QMenuBar_override_virtual_ActionEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_ActionEvent(void* self, QActionEvent* param1);
void QMenuBar_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1);
void QMenuBar_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_FocusInEvent(void* self, QFocusEvent* param1);
void QMenuBar_override_virtual_TimerEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
void QMenuBar_override_virtual_EventFilter(void* self, intptr_t slot);
bool QMenuBar_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
void QMenuBar_override_virtual_Event(void* self, intptr_t slot);
bool QMenuBar_virtualbase_Event(void* self, QEvent* param1);
void QMenuBar_override_virtual_DevType(void* self, intptr_t slot);
int QMenuBar_virtualbase_DevType(const void* self);
void QMenuBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QMenuBar_virtualbase_HasHeightForWidth(const void* self);
void QMenuBar_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QMenuBar_virtualbase_PaintEngine(const void* self);
void QMenuBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QMenuBar_override_virtual_WheelEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QMenuBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QMenuBar_override_virtual_EnterEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_EnterEvent(void* self, QEvent* event);
void QMenuBar_override_virtual_MoveEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QMenuBar_override_virtual_CloseEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QMenuBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QMenuBar_override_virtual_TabletEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QMenuBar_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QMenuBar_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QMenuBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QMenuBar_override_virtual_DropEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_DropEvent(void* self, QDropEvent* event);
void QMenuBar_override_virtual_ShowEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QMenuBar_override_virtual_HideEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_HideEvent(void* self, QHideEvent* event);
void QMenuBar_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QMenuBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
void QMenuBar_override_virtual_Metric(void* self, intptr_t slot);
int QMenuBar_virtualbase_Metric(const void* self, int param1);
void QMenuBar_override_virtual_InitPainter(void* self, intptr_t slot);
void QMenuBar_virtualbase_InitPainter(const void* self, QPainter* painter);
void QMenuBar_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QMenuBar_virtualbase_Redirected(const void* self, QPoint* offset);
void QMenuBar_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QMenuBar_virtualbase_SharedPainter(const void* self);
void QMenuBar_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QMenuBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QMenuBar_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QMenuBar_virtualbase_InputMethodQuery(const void* self, int param1);
void QMenuBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QMenuBar_virtualbase_FocusNextPrevChild(void* self, bool next);
void QMenuBar_Delete(QMenuBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
