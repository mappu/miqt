#pragma once
#ifndef MIQT_QT_GEN_QTOOLBUTTON_H
#define MIQT_QT_GEN_QTOOLBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
class QAction;
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
class QToolButton;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QAction QAction;
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
typedef struct QToolButton QToolButton;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QToolButton* QToolButton_new(QWidget* parent);
QToolButton* QToolButton_new2();
void QToolButton_virtbase(QToolButton* src, QAbstractButton** outptr_QAbstractButton);
QMetaObject* QToolButton_MetaObject(const QToolButton* self);
void* QToolButton_Metacast(QToolButton* self, const char* param1);
struct miqt_string QToolButton_Tr(const char* s);
struct miqt_string QToolButton_TrUtf8(const char* s);
QSize* QToolButton_SizeHint(const QToolButton* self);
QSize* QToolButton_MinimumSizeHint(const QToolButton* self);
int QToolButton_ToolButtonStyle(const QToolButton* self);
int QToolButton_ArrowType(const QToolButton* self);
void QToolButton_SetArrowType(QToolButton* self, int typeVal);
void QToolButton_SetMenu(QToolButton* self, QMenu* menu);
QMenu* QToolButton_Menu(const QToolButton* self);
void QToolButton_SetPopupMode(QToolButton* self, int mode);
int QToolButton_PopupMode(const QToolButton* self);
QAction* QToolButton_DefaultAction(const QToolButton* self);
void QToolButton_SetAutoRaise(QToolButton* self, bool enable);
bool QToolButton_AutoRaise(const QToolButton* self);
void QToolButton_ShowMenu(QToolButton* self);
void QToolButton_SetToolButtonStyle(QToolButton* self, int style);
void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction);
void QToolButton_Triggered(QToolButton* self, QAction* param1);
void QToolButton_connect_Triggered(QToolButton* self, intptr_t slot);
bool QToolButton_Event(QToolButton* self, QEvent* e);
void QToolButton_MousePressEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_MouseReleaseEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_PaintEvent(QToolButton* self, QPaintEvent* param1);
void QToolButton_ActionEvent(QToolButton* self, QActionEvent* param1);
void QToolButton_EnterEvent(QToolButton* self, QEvent* param1);
void QToolButton_LeaveEvent(QToolButton* self, QEvent* param1);
void QToolButton_TimerEvent(QToolButton* self, QTimerEvent* param1);
void QToolButton_ChangeEvent(QToolButton* self, QEvent* param1);
bool QToolButton_HitButton(const QToolButton* self, QPoint* pos);
void QToolButton_NextCheckState(QToolButton* self);
struct miqt_string QToolButton_Tr2(const char* s, const char* c);
struct miqt_string QToolButton_Tr3(const char* s, const char* c, int n);
struct miqt_string QToolButton_TrUtf82(const char* s, const char* c);
struct miqt_string QToolButton_TrUtf83(const char* s, const char* c, int n);
bool QToolButton_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QToolButton_virtualbase_SizeHint(const void* self);
bool QToolButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QToolButton_virtualbase_MinimumSizeHint(const void* self);
bool QToolButton_override_virtual_Event(void* self, intptr_t slot);
bool QToolButton_virtualbase_Event(void* self, QEvent* e);
bool QToolButton_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
bool QToolButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
bool QToolButton_override_virtual_PaintEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QToolButton_override_virtual_ActionEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_ActionEvent(void* self, QActionEvent* param1);
bool QToolButton_override_virtual_EnterEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_EnterEvent(void* self, QEvent* param1);
bool QToolButton_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_LeaveEvent(void* self, QEvent* param1);
bool QToolButton_override_virtual_TimerEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
bool QToolButton_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QToolButton_override_virtual_HitButton(void* self, intptr_t slot);
bool QToolButton_virtualbase_HitButton(const void* self, QPoint* pos);
bool QToolButton_override_virtual_NextCheckState(void* self, intptr_t slot);
void QToolButton_virtualbase_NextCheckState(void* self);
bool QToolButton_override_virtual_CheckStateSet(void* self, intptr_t slot);
void QToolButton_virtualbase_CheckStateSet(void* self);
bool QToolButton_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* e);
bool QToolButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
bool QToolButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e);
bool QToolButton_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_FocusInEvent(void* self, QFocusEvent* e);
bool QToolButton_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* e);
bool QToolButton_override_virtual_DevType(void* self, intptr_t slot);
int QToolButton_virtualbase_DevType(const void* self);
bool QToolButton_override_virtual_SetVisible(void* self, intptr_t slot);
void QToolButton_virtualbase_SetVisible(void* self, bool visible);
bool QToolButton_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QToolButton_virtualbase_HeightForWidth(const void* self, int param1);
bool QToolButton_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QToolButton_virtualbase_HasHeightForWidth(const void* self);
bool QToolButton_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QToolButton_virtualbase_PaintEngine(const void* self);
bool QToolButton_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QToolButton_override_virtual_WheelEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QToolButton_override_virtual_MoveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QToolButton_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QToolButton_override_virtual_CloseEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QToolButton_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QToolButton_override_virtual_TabletEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QToolButton_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QToolButton_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QToolButton_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QToolButton_override_virtual_DropEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QToolButton_override_virtual_ShowEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QToolButton_override_virtual_HideEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QToolButton_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QToolButton_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QToolButton_override_virtual_Metric(void* self, intptr_t slot);
int QToolButton_virtualbase_Metric(const void* self, int param1);
bool QToolButton_override_virtual_InitPainter(void* self, intptr_t slot);
void QToolButton_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QToolButton_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QToolButton_virtualbase_Redirected(const void* self, QPoint* offset);
bool QToolButton_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QToolButton_virtualbase_SharedPainter(const void* self);
bool QToolButton_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QToolButton_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QToolButton_virtualbase_InputMethodQuery(const void* self, int param1);
bool QToolButton_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QToolButton_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QToolButton_override_virtual_EventFilter(void* self, intptr_t slot);
bool QToolButton_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QToolButton_override_virtual_ChildEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QToolButton_override_virtual_CustomEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_CustomEvent(void* self, QEvent* event);
bool QToolButton_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QToolButton_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QToolButton_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QToolButton_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QToolButton_Delete(QToolButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
