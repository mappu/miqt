#pragma once
#ifndef MIQT_QT6_GEN_QSCROLLAREA_H
#define MIQT_QT6_GEN_QSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
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
class QScrollArea;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
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
typedef struct QScrollArea QScrollArea;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QScrollArea* QScrollArea_new(QWidget* parent);
QScrollArea* QScrollArea_new2();
void QScrollArea_virtbase(QScrollArea* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QScrollArea_MetaObject(const QScrollArea* self);
void* QScrollArea_Metacast(QScrollArea* self, const char* param1);
struct miqt_string QScrollArea_Tr(const char* s);
QWidget* QScrollArea_Widget(const QScrollArea* self);
void QScrollArea_SetWidget(QScrollArea* self, QWidget* widget);
QWidget* QScrollArea_TakeWidget(QScrollArea* self);
bool QScrollArea_WidgetResizable(const QScrollArea* self);
void QScrollArea_SetWidgetResizable(QScrollArea* self, bool resizable);
QSize* QScrollArea_SizeHint(const QScrollArea* self);
bool QScrollArea_FocusNextPrevChild(QScrollArea* self, bool next);
int QScrollArea_Alignment(const QScrollArea* self);
void QScrollArea_SetAlignment(QScrollArea* self, int alignment);
void QScrollArea_EnsureVisible(QScrollArea* self, int x, int y);
void QScrollArea_EnsureWidgetVisible(QScrollArea* self, QWidget* childWidget);
bool QScrollArea_Event(QScrollArea* self, QEvent* param1);
bool QScrollArea_EventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
void QScrollArea_ResizeEvent(QScrollArea* self, QResizeEvent* param1);
void QScrollArea_ScrollContentsBy(QScrollArea* self, int dx, int dy);
QSize* QScrollArea_ViewportSizeHint(const QScrollArea* self);
struct miqt_string QScrollArea_Tr2(const char* s, const char* c);
struct miqt_string QScrollArea_Tr3(const char* s, const char* c, int n);
void QScrollArea_EnsureVisible3(QScrollArea* self, int x, int y, int xmargin);
void QScrollArea_EnsureVisible4(QScrollArea* self, int x, int y, int xmargin, int ymargin);
void QScrollArea_EnsureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin);
void QScrollArea_EnsureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin);
bool QScrollArea_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QScrollArea_virtualbase_SizeHint(const void* self);
bool QScrollArea_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QScrollArea_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QScrollArea_override_virtual_Event(void* self, intptr_t slot);
bool QScrollArea_virtualbase_Event(void* self, QEvent* param1);
bool QScrollArea_override_virtual_EventFilter(void* self, intptr_t slot);
bool QScrollArea_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
bool QScrollArea_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
bool QScrollArea_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QScrollArea_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
bool QScrollArea_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QScrollArea_virtualbase_ViewportSizeHint(const void* self);
bool QScrollArea_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QScrollArea_virtualbase_MinimumSizeHint(const void* self);
bool QScrollArea_override_virtual_SetupViewport(void* self, intptr_t slot);
void QScrollArea_virtualbase_SetupViewport(void* self, QWidget* viewport);
bool QScrollArea_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QScrollArea_virtualbase_ViewportEvent(void* self, QEvent* param1);
bool QScrollArea_override_virtual_PaintEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QScrollArea_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
bool QScrollArea_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
bool QScrollArea_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QScrollArea_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
bool QScrollArea_override_virtual_WheelEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
bool QScrollArea_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
bool QScrollArea_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1);
bool QScrollArea_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* param1);
bool QScrollArea_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* param1);
bool QScrollArea_override_virtual_DropEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_DropEvent(void* self, QDropEvent* param1);
bool QScrollArea_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QScrollArea_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QScrollArea_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QScrollArea_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option);
bool QScrollArea_override_virtual_DevType(void* self, intptr_t slot);
int QScrollArea_virtualbase_DevType(const void* self);
bool QScrollArea_override_virtual_SetVisible(void* self, intptr_t slot);
void QScrollArea_virtualbase_SetVisible(void* self, bool visible);
bool QScrollArea_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QScrollArea_virtualbase_HeightForWidth(const void* self, int param1);
bool QScrollArea_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QScrollArea_virtualbase_HasHeightForWidth(const void* self);
bool QScrollArea_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QScrollArea_virtualbase_PaintEngine(const void* self);
bool QScrollArea_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QScrollArea_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QScrollArea_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QScrollArea_override_virtual_EnterEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QScrollArea_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QScrollArea_override_virtual_MoveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QScrollArea_override_virtual_CloseEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QScrollArea_override_virtual_TabletEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QScrollArea_override_virtual_ActionEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QScrollArea_override_virtual_ShowEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QScrollArea_override_virtual_HideEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QScrollArea_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QScrollArea_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QScrollArea_override_virtual_Metric(void* self, intptr_t slot);
int QScrollArea_virtualbase_Metric(const void* self, int param1);
bool QScrollArea_override_virtual_InitPainter(void* self, intptr_t slot);
void QScrollArea_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QScrollArea_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QScrollArea_virtualbase_Redirected(const void* self, QPoint* offset);
bool QScrollArea_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QScrollArea_virtualbase_SharedPainter(const void* self);
bool QScrollArea_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QScrollArea_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QScrollArea_virtualbase_InputMethodQuery(const void* self, int param1);
bool QScrollArea_override_virtual_TimerEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QScrollArea_override_virtual_ChildEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QScrollArea_override_virtual_CustomEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_CustomEvent(void* self, QEvent* event);
bool QScrollArea_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QScrollArea_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QScrollArea_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QScrollArea_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QScrollArea_Delete(QScrollArea* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
