#pragma once
#ifndef MIQT_QT6_PRINTSUPPORT_GEN_QPAGESETUPDIALOG_H
#define MIQT_QT6_PRINTSUPPORT_GEN_QPAGESETUPDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

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
class QEnterEvent;
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
class QPageSetupDialog;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QPrinter;
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
typedef struct QEnterEvent QEnterEvent;
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
typedef struct QPageSetupDialog QPageSetupDialog;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QPrinter QPrinter;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QPageSetupDialog* QPageSetupDialog_new(QWidget* parent);
QPageSetupDialog* QPageSetupDialog_new2(QPrinter* printer);
QPageSetupDialog* QPageSetupDialog_new3();
QPageSetupDialog* QPageSetupDialog_new4(QPrinter* printer, QWidget* parent);
void QPageSetupDialog_virtbase(QPageSetupDialog* src, QDialog** outptr_QDialog);
QMetaObject* QPageSetupDialog_MetaObject(const QPageSetupDialog* self);
void* QPageSetupDialog_Metacast(QPageSetupDialog* self, const char* param1);
struct miqt_string QPageSetupDialog_Tr(const char* s);
int QPageSetupDialog_Exec(QPageSetupDialog* self);
void QPageSetupDialog_Done(QPageSetupDialog* self, int result);
QPrinter* QPageSetupDialog_Printer(QPageSetupDialog* self);
struct miqt_string QPageSetupDialog_Tr2(const char* s, const char* c);
struct miqt_string QPageSetupDialog_Tr3(const char* s, const char* c, int n);
bool QPageSetupDialog_override_virtual_Exec(void* self, intptr_t slot);
int QPageSetupDialog_virtualbase_Exec(void* self);
bool QPageSetupDialog_override_virtual_Done(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_Done(void* self, int result);
bool QPageSetupDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_SetVisible(void* self, bool visible);
bool QPageSetupDialog_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QPageSetupDialog_virtualbase_SizeHint(const void* self);
bool QPageSetupDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QPageSetupDialog_virtualbase_MinimumSizeHint(const void* self);
bool QPageSetupDialog_override_virtual_Open(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_Open(void* self);
bool QPageSetupDialog_override_virtual_Accept(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_Accept(void* self);
bool QPageSetupDialog_override_virtual_Reject(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_Reject(void* self);
bool QPageSetupDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QPageSetupDialog_override_virtual_CloseEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
bool QPageSetupDialog_override_virtual_ShowEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1);
bool QPageSetupDialog_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
bool QPageSetupDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
bool QPageSetupDialog_override_virtual_EventFilter(void* self, intptr_t slot);
bool QPageSetupDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
bool QPageSetupDialog_override_virtual_DevType(void* self, intptr_t slot);
int QPageSetupDialog_virtualbase_DevType(const void* self);
bool QPageSetupDialog_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QPageSetupDialog_virtualbase_HeightForWidth(const void* self, int param1);
bool QPageSetupDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QPageSetupDialog_virtualbase_HasHeightForWidth(const void* self);
bool QPageSetupDialog_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QPageSetupDialog_virtualbase_PaintEngine(const void* self);
bool QPageSetupDialog_override_virtual_Event(void* self, intptr_t slot);
bool QPageSetupDialog_virtualbase_Event(void* self, QEvent* event);
bool QPageSetupDialog_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QPageSetupDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QPageSetupDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QPageSetupDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QPageSetupDialog_override_virtual_WheelEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QPageSetupDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QPageSetupDialog_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QPageSetupDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QPageSetupDialog_override_virtual_EnterEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QPageSetupDialog_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QPageSetupDialog_override_virtual_PaintEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QPageSetupDialog_override_virtual_MoveEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QPageSetupDialog_override_virtual_TabletEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QPageSetupDialog_override_virtual_ActionEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QPageSetupDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QPageSetupDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QPageSetupDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QPageSetupDialog_override_virtual_DropEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QPageSetupDialog_override_virtual_HideEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QPageSetupDialog_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QPageSetupDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QPageSetupDialog_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QPageSetupDialog_override_virtual_Metric(void* self, intptr_t slot);
int QPageSetupDialog_virtualbase_Metric(const void* self, int param1);
bool QPageSetupDialog_override_virtual_InitPainter(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QPageSetupDialog_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QPageSetupDialog_virtualbase_Redirected(const void* self, QPoint* offset);
bool QPageSetupDialog_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QPageSetupDialog_virtualbase_SharedPainter(const void* self);
bool QPageSetupDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QPageSetupDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QPageSetupDialog_virtualbase_InputMethodQuery(const void* self, int param1);
bool QPageSetupDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QPageSetupDialog_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QPageSetupDialog_override_virtual_TimerEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QPageSetupDialog_override_virtual_ChildEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QPageSetupDialog_override_virtual_CustomEvent(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_CustomEvent(void* self, QEvent* event);
bool QPageSetupDialog_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QPageSetupDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QPageSetupDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QPageSetupDialog_Delete(QPageSetupDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
