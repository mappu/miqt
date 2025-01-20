#pragma once
#ifndef MIQT_QT_GEN_QERRORMESSAGE_H
#define MIQT_QT_GEN_QERRORMESSAGE_H

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
class QDialog;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QErrorMessage;
class QEvent;
class QFocusEvent;
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
typedef struct QDialog QDialog;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QErrorMessage QErrorMessage;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
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

QErrorMessage* QErrorMessage_new(QWidget* parent);
QErrorMessage* QErrorMessage_new2();
void QErrorMessage_virtbase(QErrorMessage* src, QDialog** outptr_QDialog);
QMetaObject* QErrorMessage_MetaObject(const QErrorMessage* self);
void* QErrorMessage_Metacast(QErrorMessage* self, const char* param1);
struct miqt_string QErrorMessage_Tr(const char* s);
struct miqt_string QErrorMessage_TrUtf8(const char* s);
QErrorMessage* QErrorMessage_QtHandler();
void QErrorMessage_ShowMessage(QErrorMessage* self, struct miqt_string message);
void QErrorMessage_ShowMessage2(QErrorMessage* self, struct miqt_string message, struct miqt_string typeVal);
void QErrorMessage_Done(QErrorMessage* self, int param1);
void QErrorMessage_ChangeEvent(QErrorMessage* self, QEvent* e);
struct miqt_string QErrorMessage_Tr2(const char* s, const char* c);
struct miqt_string QErrorMessage_Tr3(const char* s, const char* c, int n);
struct miqt_string QErrorMessage_TrUtf82(const char* s, const char* c);
struct miqt_string QErrorMessage_TrUtf83(const char* s, const char* c, int n);
bool QErrorMessage_override_virtual_Done(void* self, intptr_t slot);
void QErrorMessage_virtualbase_Done(void* self, int param1);
bool QErrorMessage_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_ChangeEvent(void* self, QEvent* e);
bool QErrorMessage_override_virtual_SetVisible(void* self, intptr_t slot);
void QErrorMessage_virtualbase_SetVisible(void* self, bool visible);
bool QErrorMessage_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QErrorMessage_virtualbase_SizeHint(const void* self);
bool QErrorMessage_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QErrorMessage_virtualbase_MinimumSizeHint(const void* self);
bool QErrorMessage_override_virtual_Open(void* self, intptr_t slot);
void QErrorMessage_virtualbase_Open(void* self);
bool QErrorMessage_override_virtual_Exec(void* self, intptr_t slot);
int QErrorMessage_virtualbase_Exec(void* self);
bool QErrorMessage_override_virtual_Accept(void* self, intptr_t slot);
void QErrorMessage_virtualbase_Accept(void* self);
bool QErrorMessage_override_virtual_Reject(void* self, intptr_t slot);
void QErrorMessage_virtualbase_Reject(void* self);
bool QErrorMessage_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QErrorMessage_override_virtual_CloseEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
bool QErrorMessage_override_virtual_ShowEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_ShowEvent(void* self, QShowEvent* param1);
bool QErrorMessage_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
bool QErrorMessage_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
bool QErrorMessage_override_virtual_EventFilter(void* self, intptr_t slot);
bool QErrorMessage_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
bool QErrorMessage_override_virtual_DevType(void* self, intptr_t slot);
int QErrorMessage_virtualbase_DevType(const void* self);
bool QErrorMessage_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QErrorMessage_virtualbase_HeightForWidth(const void* self, int param1);
bool QErrorMessage_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QErrorMessage_virtualbase_HasHeightForWidth(const void* self);
bool QErrorMessage_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QErrorMessage_virtualbase_PaintEngine(const void* self);
bool QErrorMessage_override_virtual_Event(void* self, intptr_t slot);
bool QErrorMessage_virtualbase_Event(void* self, QEvent* event);
bool QErrorMessage_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QErrorMessage_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QErrorMessage_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QErrorMessage_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QErrorMessage_override_virtual_WheelEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QErrorMessage_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QErrorMessage_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QErrorMessage_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QErrorMessage_override_virtual_EnterEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_EnterEvent(void* self, QEvent* event);
bool QErrorMessage_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QErrorMessage_override_virtual_PaintEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QErrorMessage_override_virtual_MoveEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QErrorMessage_override_virtual_TabletEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QErrorMessage_override_virtual_ActionEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QErrorMessage_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QErrorMessage_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QErrorMessage_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QErrorMessage_override_virtual_DropEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QErrorMessage_override_virtual_HideEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QErrorMessage_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QErrorMessage_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QErrorMessage_override_virtual_Metric(void* self, intptr_t slot);
int QErrorMessage_virtualbase_Metric(const void* self, int param1);
bool QErrorMessage_override_virtual_InitPainter(void* self, intptr_t slot);
void QErrorMessage_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QErrorMessage_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QErrorMessage_virtualbase_Redirected(const void* self, QPoint* offset);
bool QErrorMessage_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QErrorMessage_virtualbase_SharedPainter(const void* self);
bool QErrorMessage_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QErrorMessage_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QErrorMessage_virtualbase_InputMethodQuery(const void* self, int param1);
bool QErrorMessage_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QErrorMessage_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QErrorMessage_override_virtual_TimerEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QErrorMessage_override_virtual_ChildEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QErrorMessage_override_virtual_CustomEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_CustomEvent(void* self, QEvent* event);
bool QErrorMessage_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QErrorMessage_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QErrorMessage_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QErrorMessage_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QErrorMessage_Delete(QErrorMessage* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
