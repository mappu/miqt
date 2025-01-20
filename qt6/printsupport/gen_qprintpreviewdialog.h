#pragma once
#ifndef MIQT_QT6_PRINTSUPPORT_GEN_QPRINTPREVIEWDIALOG_H
#define MIQT_QT6_PRINTSUPPORT_GEN_QPRINTPREVIEWDIALOG_H

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
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QPrintPreviewDialog;
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
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QPrintPreviewDialog QPrintPreviewDialog;
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

QPrintPreviewDialog* QPrintPreviewDialog_new(QWidget* parent);
QPrintPreviewDialog* QPrintPreviewDialog_new2();
QPrintPreviewDialog* QPrintPreviewDialog_new3(QPrinter* printer);
QPrintPreviewDialog* QPrintPreviewDialog_new4(QWidget* parent, int flags);
QPrintPreviewDialog* QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent);
QPrintPreviewDialog* QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags);
void QPrintPreviewDialog_virtbase(QPrintPreviewDialog* src, QDialog** outptr_QDialog);
QMetaObject* QPrintPreviewDialog_MetaObject(const QPrintPreviewDialog* self);
void* QPrintPreviewDialog_Metacast(QPrintPreviewDialog* self, const char* param1);
struct miqt_string QPrintPreviewDialog_Tr(const char* s);
QPrinter* QPrintPreviewDialog_Printer(QPrintPreviewDialog* self);
void QPrintPreviewDialog_SetVisible(QPrintPreviewDialog* self, bool visible);
void QPrintPreviewDialog_Done(QPrintPreviewDialog* self, int result);
void QPrintPreviewDialog_PaintRequested(QPrintPreviewDialog* self, QPrinter* printer);
void QPrintPreviewDialog_connect_PaintRequested(QPrintPreviewDialog* self, intptr_t slot);
struct miqt_string QPrintPreviewDialog_Tr2(const char* s, const char* c);
struct miqt_string QPrintPreviewDialog_Tr3(const char* s, const char* c, int n);
bool QPrintPreviewDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_SetVisible(void* self, bool visible);
bool QPrintPreviewDialog_override_virtual_Done(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_Done(void* self, int result);
bool QPrintPreviewDialog_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QPrintPreviewDialog_virtualbase_SizeHint(const void* self);
bool QPrintPreviewDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QPrintPreviewDialog_virtualbase_MinimumSizeHint(const void* self);
bool QPrintPreviewDialog_override_virtual_Open(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_Open(void* self);
bool QPrintPreviewDialog_override_virtual_Exec(void* self, intptr_t slot);
int QPrintPreviewDialog_virtualbase_Exec(void* self);
bool QPrintPreviewDialog_override_virtual_Accept(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_Accept(void* self);
bool QPrintPreviewDialog_override_virtual_Reject(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_Reject(void* self);
bool QPrintPreviewDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QPrintPreviewDialog_override_virtual_CloseEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
bool QPrintPreviewDialog_override_virtual_ShowEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1);
bool QPrintPreviewDialog_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
bool QPrintPreviewDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
bool QPrintPreviewDialog_override_virtual_EventFilter(void* self, intptr_t slot);
bool QPrintPreviewDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
bool QPrintPreviewDialog_override_virtual_DevType(void* self, intptr_t slot);
int QPrintPreviewDialog_virtualbase_DevType(const void* self);
bool QPrintPreviewDialog_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QPrintPreviewDialog_virtualbase_HeightForWidth(const void* self, int param1);
bool QPrintPreviewDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QPrintPreviewDialog_virtualbase_HasHeightForWidth(const void* self);
bool QPrintPreviewDialog_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QPrintPreviewDialog_virtualbase_PaintEngine(const void* self);
bool QPrintPreviewDialog_override_virtual_Event(void* self, intptr_t slot);
bool QPrintPreviewDialog_virtualbase_Event(void* self, QEvent* event);
bool QPrintPreviewDialog_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QPrintPreviewDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QPrintPreviewDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QPrintPreviewDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QPrintPreviewDialog_override_virtual_WheelEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QPrintPreviewDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QPrintPreviewDialog_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QPrintPreviewDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QPrintPreviewDialog_override_virtual_EnterEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QPrintPreviewDialog_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QPrintPreviewDialog_override_virtual_PaintEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QPrintPreviewDialog_override_virtual_MoveEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QPrintPreviewDialog_override_virtual_TabletEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QPrintPreviewDialog_override_virtual_ActionEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QPrintPreviewDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QPrintPreviewDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QPrintPreviewDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QPrintPreviewDialog_override_virtual_DropEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QPrintPreviewDialog_override_virtual_HideEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QPrintPreviewDialog_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QPrintPreviewDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QPrintPreviewDialog_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QPrintPreviewDialog_override_virtual_Metric(void* self, intptr_t slot);
int QPrintPreviewDialog_virtualbase_Metric(const void* self, int param1);
bool QPrintPreviewDialog_override_virtual_InitPainter(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QPrintPreviewDialog_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QPrintPreviewDialog_virtualbase_Redirected(const void* self, QPoint* offset);
bool QPrintPreviewDialog_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QPrintPreviewDialog_virtualbase_SharedPainter(const void* self);
bool QPrintPreviewDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QPrintPreviewDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QPrintPreviewDialog_virtualbase_InputMethodQuery(const void* self, int param1);
bool QPrintPreviewDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QPrintPreviewDialog_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QPrintPreviewDialog_override_virtual_TimerEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QPrintPreviewDialog_override_virtual_ChildEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QPrintPreviewDialog_override_virtual_CustomEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_CustomEvent(void* self, QEvent* event);
bool QPrintPreviewDialog_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QPrintPreviewDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
