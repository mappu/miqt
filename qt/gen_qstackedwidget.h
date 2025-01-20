#pragma once
#ifndef MIQT_QT_GEN_QSTACKEDWIDGET_H
#define MIQT_QT_GEN_QSTACKEDWIDGET_H

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
class QStackedWidget;
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
typedef struct QFrame QFrame;
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
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStackedWidget QStackedWidget;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QStackedWidget* QStackedWidget_new(QWidget* parent);
QStackedWidget* QStackedWidget_new2();
void QStackedWidget_virtbase(QStackedWidget* src, QFrame** outptr_QFrame);
QMetaObject* QStackedWidget_MetaObject(const QStackedWidget* self);
void* QStackedWidget_Metacast(QStackedWidget* self, const char* param1);
struct miqt_string QStackedWidget_Tr(const char* s);
struct miqt_string QStackedWidget_TrUtf8(const char* s);
int QStackedWidget_AddWidget(QStackedWidget* self, QWidget* w);
int QStackedWidget_InsertWidget(QStackedWidget* self, int index, QWidget* w);
void QStackedWidget_RemoveWidget(QStackedWidget* self, QWidget* w);
QWidget* QStackedWidget_CurrentWidget(const QStackedWidget* self);
int QStackedWidget_CurrentIndex(const QStackedWidget* self);
int QStackedWidget_IndexOf(const QStackedWidget* self, QWidget* param1);
QWidget* QStackedWidget_Widget(const QStackedWidget* self, int param1);
int QStackedWidget_Count(const QStackedWidget* self);
void QStackedWidget_SetCurrentIndex(QStackedWidget* self, int index);
void QStackedWidget_SetCurrentWidget(QStackedWidget* self, QWidget* w);
void QStackedWidget_CurrentChanged(QStackedWidget* self, int param1);
void QStackedWidget_connect_CurrentChanged(QStackedWidget* self, intptr_t slot);
void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index);
void QStackedWidget_connect_WidgetRemoved(QStackedWidget* self, intptr_t slot);
bool QStackedWidget_Event(QStackedWidget* self, QEvent* e);
struct miqt_string QStackedWidget_Tr2(const char* s, const char* c);
struct miqt_string QStackedWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QStackedWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QStackedWidget_TrUtf83(const char* s, const char* c, int n);
bool QStackedWidget_override_virtual_Event(void* self, intptr_t slot);
bool QStackedWidget_virtualbase_Event(void* self, QEvent* e);
bool QStackedWidget_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QStackedWidget_virtualbase_SizeHint(const void* self);
bool QStackedWidget_override_virtual_PaintEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QStackedWidget_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QStackedWidget_override_virtual_DevType(void* self, intptr_t slot);
int QStackedWidget_virtualbase_DevType(const void* self);
bool QStackedWidget_override_virtual_SetVisible(void* self, intptr_t slot);
void QStackedWidget_virtualbase_SetVisible(void* self, bool visible);
bool QStackedWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QStackedWidget_virtualbase_MinimumSizeHint(const void* self);
bool QStackedWidget_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QStackedWidget_virtualbase_HeightForWidth(const void* self, int param1);
bool QStackedWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QStackedWidget_virtualbase_HasHeightForWidth(const void* self);
bool QStackedWidget_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QStackedWidget_virtualbase_PaintEngine(const void* self);
bool QStackedWidget_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QStackedWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QStackedWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QStackedWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QStackedWidget_override_virtual_WheelEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QStackedWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QStackedWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QStackedWidget_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QStackedWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QStackedWidget_override_virtual_EnterEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_EnterEvent(void* self, QEvent* event);
bool QStackedWidget_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QStackedWidget_override_virtual_MoveEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QStackedWidget_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QStackedWidget_override_virtual_CloseEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QStackedWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QStackedWidget_override_virtual_TabletEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QStackedWidget_override_virtual_ActionEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QStackedWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QStackedWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QStackedWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QStackedWidget_override_virtual_DropEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QStackedWidget_override_virtual_ShowEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QStackedWidget_override_virtual_HideEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QStackedWidget_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QStackedWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QStackedWidget_override_virtual_Metric(void* self, intptr_t slot);
int QStackedWidget_virtualbase_Metric(const void* self, int param1);
bool QStackedWidget_override_virtual_InitPainter(void* self, intptr_t slot);
void QStackedWidget_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QStackedWidget_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QStackedWidget_virtualbase_Redirected(const void* self, QPoint* offset);
bool QStackedWidget_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QStackedWidget_virtualbase_SharedPainter(const void* self);
bool QStackedWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QStackedWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QStackedWidget_virtualbase_InputMethodQuery(const void* self, int param1);
bool QStackedWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QStackedWidget_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QStackedWidget_override_virtual_EventFilter(void* self, intptr_t slot);
bool QStackedWidget_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QStackedWidget_override_virtual_TimerEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QStackedWidget_override_virtual_ChildEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QStackedWidget_override_virtual_CustomEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_CustomEvent(void* self, QEvent* event);
bool QStackedWidget_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QStackedWidget_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QStackedWidget_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QStackedWidget_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QStackedWidget_Delete(QStackedWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
