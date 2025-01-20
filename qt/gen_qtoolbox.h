#pragma once
#ifndef MIQT_QT_GEN_QTOOLBOX_H
#define MIQT_QT_GEN_QTOOLBOX_H

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
class QFrame;
class QHideEvent;
class QIcon;
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
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QToolBox;
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
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
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
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QToolBox QToolBox;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QToolBox* QToolBox_new(QWidget* parent);
QToolBox* QToolBox_new2();
QToolBox* QToolBox_new3(QWidget* parent, int f);
void QToolBox_virtbase(QToolBox* src, QFrame** outptr_QFrame);
QMetaObject* QToolBox_MetaObject(const QToolBox* self);
void* QToolBox_Metacast(QToolBox* self, const char* param1);
struct miqt_string QToolBox_Tr(const char* s);
struct miqt_string QToolBox_TrUtf8(const char* s);
int QToolBox_AddItem(QToolBox* self, QWidget* widget, struct miqt_string text);
int QToolBox_AddItem2(QToolBox* self, QWidget* widget, QIcon* icon, struct miqt_string text);
int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, struct miqt_string text);
int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, QIcon* icon, struct miqt_string text);
void QToolBox_RemoveItem(QToolBox* self, int index);
void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled);
bool QToolBox_IsItemEnabled(const QToolBox* self, int index);
void QToolBox_SetItemText(QToolBox* self, int index, struct miqt_string text);
struct miqt_string QToolBox_ItemText(const QToolBox* self, int index);
void QToolBox_SetItemIcon(QToolBox* self, int index, QIcon* icon);
QIcon* QToolBox_ItemIcon(const QToolBox* self, int index);
void QToolBox_SetItemToolTip(QToolBox* self, int index, struct miqt_string toolTip);
struct miqt_string QToolBox_ItemToolTip(const QToolBox* self, int index);
int QToolBox_CurrentIndex(const QToolBox* self);
QWidget* QToolBox_CurrentWidget(const QToolBox* self);
QWidget* QToolBox_Widget(const QToolBox* self, int index);
int QToolBox_IndexOf(const QToolBox* self, QWidget* widget);
int QToolBox_Count(const QToolBox* self);
void QToolBox_SetCurrentIndex(QToolBox* self, int index);
void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget);
void QToolBox_CurrentChanged(QToolBox* self, int index);
void QToolBox_connect_CurrentChanged(QToolBox* self, intptr_t slot);
bool QToolBox_Event(QToolBox* self, QEvent* e);
void QToolBox_ItemInserted(QToolBox* self, int index);
void QToolBox_ItemRemoved(QToolBox* self, int index);
void QToolBox_ShowEvent(QToolBox* self, QShowEvent* e);
void QToolBox_ChangeEvent(QToolBox* self, QEvent* param1);
struct miqt_string QToolBox_Tr2(const char* s, const char* c);
struct miqt_string QToolBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QToolBox_TrUtf82(const char* s, const char* c);
struct miqt_string QToolBox_TrUtf83(const char* s, const char* c, int n);
bool QToolBox_override_virtual_Event(void* self, intptr_t slot);
bool QToolBox_virtualbase_Event(void* self, QEvent* e);
bool QToolBox_override_virtual_ItemInserted(void* self, intptr_t slot);
void QToolBox_virtualbase_ItemInserted(void* self, int index);
bool QToolBox_override_virtual_ItemRemoved(void* self, intptr_t slot);
void QToolBox_virtualbase_ItemRemoved(void* self, int index);
bool QToolBox_override_virtual_ShowEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_ShowEvent(void* self, QShowEvent* e);
bool QToolBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QToolBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QToolBox_virtualbase_SizeHint(const void* self);
bool QToolBox_override_virtual_PaintEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QToolBox_override_virtual_DevType(void* self, intptr_t slot);
int QToolBox_virtualbase_DevType(const void* self);
bool QToolBox_override_virtual_SetVisible(void* self, intptr_t slot);
void QToolBox_virtualbase_SetVisible(void* self, bool visible);
bool QToolBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QToolBox_virtualbase_MinimumSizeHint(const void* self);
bool QToolBox_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QToolBox_virtualbase_HeightForWidth(const void* self, int param1);
bool QToolBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QToolBox_virtualbase_HasHeightForWidth(const void* self);
bool QToolBox_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QToolBox_virtualbase_PaintEngine(const void* self);
bool QToolBox_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QToolBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QToolBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QToolBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QToolBox_override_virtual_WheelEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QToolBox_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QToolBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QToolBox_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QToolBox_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QToolBox_override_virtual_EnterEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_EnterEvent(void* self, QEvent* event);
bool QToolBox_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QToolBox_override_virtual_MoveEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QToolBox_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QToolBox_override_virtual_CloseEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QToolBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QToolBox_override_virtual_TabletEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QToolBox_override_virtual_ActionEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QToolBox_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QToolBox_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QToolBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QToolBox_override_virtual_DropEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QToolBox_override_virtual_HideEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QToolBox_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QToolBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QToolBox_override_virtual_Metric(void* self, intptr_t slot);
int QToolBox_virtualbase_Metric(const void* self, int param1);
bool QToolBox_override_virtual_InitPainter(void* self, intptr_t slot);
void QToolBox_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QToolBox_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QToolBox_virtualbase_Redirected(const void* self, QPoint* offset);
bool QToolBox_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QToolBox_virtualbase_SharedPainter(const void* self);
bool QToolBox_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QToolBox_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QToolBox_virtualbase_InputMethodQuery(const void* self, int param1);
bool QToolBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QToolBox_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QToolBox_override_virtual_EventFilter(void* self, intptr_t slot);
bool QToolBox_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QToolBox_override_virtual_TimerEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QToolBox_override_virtual_ChildEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QToolBox_override_virtual_CustomEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_CustomEvent(void* self, QEvent* event);
bool QToolBox_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QToolBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QToolBox_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QToolBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QToolBox_Delete(QToolBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
