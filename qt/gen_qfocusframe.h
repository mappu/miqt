#pragma once
#ifndef MIQT_QT_GEN_QFOCUSFRAME_H
#define MIQT_QT_GEN_QFOCUSFRAME_H

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
class QFocusFrame;
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
typedef struct QFocusFrame QFocusFrame;
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
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QFocusFrame* QFocusFrame_new(QWidget* parent);
QFocusFrame* QFocusFrame_new2();
void QFocusFrame_virtbase(QFocusFrame* src, QWidget** outptr_QWidget);
QMetaObject* QFocusFrame_MetaObject(const QFocusFrame* self);
void* QFocusFrame_Metacast(QFocusFrame* self, const char* param1);
struct miqt_string QFocusFrame_Tr(const char* s);
struct miqt_string QFocusFrame_TrUtf8(const char* s);
void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget);
QWidget* QFocusFrame_Widget(const QFocusFrame* self);
bool QFocusFrame_Event(QFocusFrame* self, QEvent* e);
bool QFocusFrame_EventFilter(QFocusFrame* self, QObject* param1, QEvent* param2);
void QFocusFrame_PaintEvent(QFocusFrame* self, QPaintEvent* param1);
struct miqt_string QFocusFrame_Tr2(const char* s, const char* c);
struct miqt_string QFocusFrame_Tr3(const char* s, const char* c, int n);
struct miqt_string QFocusFrame_TrUtf82(const char* s, const char* c);
struct miqt_string QFocusFrame_TrUtf83(const char* s, const char* c, int n);
bool QFocusFrame_override_virtual_Event(void* self, intptr_t slot);
bool QFocusFrame_virtualbase_Event(void* self, QEvent* e);
bool QFocusFrame_override_virtual_EventFilter(void* self, intptr_t slot);
bool QFocusFrame_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
bool QFocusFrame_override_virtual_PaintEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QFocusFrame_override_virtual_DevType(void* self, intptr_t slot);
int QFocusFrame_virtualbase_DevType(const void* self);
bool QFocusFrame_override_virtual_SetVisible(void* self, intptr_t slot);
void QFocusFrame_virtualbase_SetVisible(void* self, bool visible);
bool QFocusFrame_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QFocusFrame_virtualbase_SizeHint(const void* self);
bool QFocusFrame_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QFocusFrame_virtualbase_MinimumSizeHint(const void* self);
bool QFocusFrame_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QFocusFrame_virtualbase_HeightForWidth(const void* self, int param1);
bool QFocusFrame_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QFocusFrame_virtualbase_HasHeightForWidth(const void* self);
bool QFocusFrame_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QFocusFrame_virtualbase_PaintEngine(const void* self);
bool QFocusFrame_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QFocusFrame_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QFocusFrame_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QFocusFrame_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QFocusFrame_override_virtual_WheelEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QFocusFrame_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QFocusFrame_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QFocusFrame_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QFocusFrame_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QFocusFrame_override_virtual_EnterEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_EnterEvent(void* self, QEvent* event);
bool QFocusFrame_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QFocusFrame_override_virtual_MoveEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QFocusFrame_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QFocusFrame_override_virtual_CloseEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QFocusFrame_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QFocusFrame_override_virtual_TabletEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QFocusFrame_override_virtual_ActionEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QFocusFrame_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QFocusFrame_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QFocusFrame_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QFocusFrame_override_virtual_DropEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QFocusFrame_override_virtual_ShowEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QFocusFrame_override_virtual_HideEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QFocusFrame_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QFocusFrame_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QFocusFrame_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QFocusFrame_override_virtual_Metric(void* self, intptr_t slot);
int QFocusFrame_virtualbase_Metric(const void* self, int param1);
bool QFocusFrame_override_virtual_InitPainter(void* self, intptr_t slot);
void QFocusFrame_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QFocusFrame_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QFocusFrame_virtualbase_Redirected(const void* self, QPoint* offset);
bool QFocusFrame_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QFocusFrame_virtualbase_SharedPainter(const void* self);
bool QFocusFrame_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QFocusFrame_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QFocusFrame_virtualbase_InputMethodQuery(const void* self, int param1);
bool QFocusFrame_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QFocusFrame_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QFocusFrame_override_virtual_TimerEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QFocusFrame_override_virtual_ChildEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QFocusFrame_override_virtual_CustomEvent(void* self, intptr_t slot);
void QFocusFrame_virtualbase_CustomEvent(void* self, QEvent* event);
bool QFocusFrame_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QFocusFrame_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QFocusFrame_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QFocusFrame_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QFocusFrame_Delete(QFocusFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
