#pragma once
#ifndef MIQT_QT6_GEN_QDIALOG_H
#define MIQT_QT6_GEN_QDIALOG_H

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
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
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
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QDialog* QDialog_new(QWidget* parent);
QDialog* QDialog_new2();
QDialog* QDialog_new3(QWidget* parent, int f);
void QDialog_virtbase(QDialog* src, QWidget** outptr_QWidget);
QMetaObject* QDialog_MetaObject(const QDialog* self);
void* QDialog_Metacast(QDialog* self, const char* param1);
struct miqt_string QDialog_Tr(const char* s);
int QDialog_Result(const QDialog* self);
void QDialog_SetVisible(QDialog* self, bool visible);
QSize* QDialog_SizeHint(const QDialog* self);
QSize* QDialog_MinimumSizeHint(const QDialog* self);
void QDialog_SetSizeGripEnabled(QDialog* self, bool sizeGripEnabled);
bool QDialog_IsSizeGripEnabled(const QDialog* self);
void QDialog_SetModal(QDialog* self, bool modal);
void QDialog_SetResult(QDialog* self, int r);
void QDialog_Finished(QDialog* self, int result);
void QDialog_connect_Finished(QDialog* self, intptr_t slot);
void QDialog_Accepted(QDialog* self);
void QDialog_connect_Accepted(QDialog* self, intptr_t slot);
void QDialog_Rejected(QDialog* self);
void QDialog_connect_Rejected(QDialog* self, intptr_t slot);
void QDialog_Open(QDialog* self);
int QDialog_Exec(QDialog* self);
void QDialog_Done(QDialog* self, int param1);
void QDialog_Accept(QDialog* self);
void QDialog_Reject(QDialog* self);
void QDialog_KeyPressEvent(QDialog* self, QKeyEvent* param1);
void QDialog_CloseEvent(QDialog* self, QCloseEvent* param1);
void QDialog_ShowEvent(QDialog* self, QShowEvent* param1);
void QDialog_ResizeEvent(QDialog* self, QResizeEvent* param1);
void QDialog_ContextMenuEvent(QDialog* self, QContextMenuEvent* param1);
bool QDialog_EventFilter(QDialog* self, QObject* param1, QEvent* param2);
struct miqt_string QDialog_Tr2(const char* s, const char* c);
struct miqt_string QDialog_Tr3(const char* s, const char* c, int n);
void QDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QDialog_virtualbase_SetVisible(void* self, bool visible);
void QDialog_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QDialog_virtualbase_SizeHint(const void* self);
void QDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QDialog_virtualbase_MinimumSizeHint(const void* self);
void QDialog_override_virtual_Open(void* self, intptr_t slot);
void QDialog_virtualbase_Open(void* self);
void QDialog_override_virtual_Exec(void* self, intptr_t slot);
int QDialog_virtualbase_Exec(void* self);
void QDialog_override_virtual_Done(void* self, intptr_t slot);
void QDialog_virtualbase_Done(void* self, int param1);
void QDialog_override_virtual_Accept(void* self, intptr_t slot);
void QDialog_virtualbase_Accept(void* self);
void QDialog_override_virtual_Reject(void* self, intptr_t slot);
void QDialog_virtualbase_Reject(void* self);
void QDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QDialog_override_virtual_CloseEvent(void* self, intptr_t slot);
void QDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
void QDialog_override_virtual_ShowEvent(void* self, intptr_t slot);
void QDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QDialog_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QDialog_override_virtual_EventFilter(void* self, intptr_t slot);
bool QDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
void QDialog_override_virtual_DevType(void* self, intptr_t slot);
int QDialog_virtualbase_DevType(const void* self);
void QDialog_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QDialog_virtualbase_HeightForWidth(const void* self, int param1);
void QDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QDialog_virtualbase_HasHeightForWidth(const void* self);
void QDialog_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QDialog_virtualbase_PaintEngine(const void* self);
void QDialog_override_virtual_Event(void* self, intptr_t slot);
bool QDialog_virtualbase_Event(void* self, QEvent* event);
void QDialog_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QDialog_override_virtual_WheelEvent(void* self, intptr_t slot);
void QDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QDialog_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QDialog_override_virtual_EnterEvent(void* self, intptr_t slot);
void QDialog_virtualbase_EnterEvent(void* self, QEnterEvent* event);
void QDialog_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QDialog_virtualbase_LeaveEvent(void* self, QEvent* event);
void QDialog_override_virtual_PaintEvent(void* self, intptr_t slot);
void QDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QDialog_override_virtual_MoveEvent(void* self, intptr_t slot);
void QDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QDialog_override_virtual_TabletEvent(void* self, intptr_t slot);
void QDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QDialog_override_virtual_ActionEvent(void* self, intptr_t slot);
void QDialog_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QDialog_override_virtual_DropEvent(void* self, intptr_t slot);
void QDialog_virtualbase_DropEvent(void* self, QDropEvent* event);
void QDialog_override_virtual_HideEvent(void* self, intptr_t slot);
void QDialog_virtualbase_HideEvent(void* self, QHideEvent* event);
void QDialog_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
void QDialog_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QDialog_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QDialog_override_virtual_Metric(void* self, intptr_t slot);
int QDialog_virtualbase_Metric(const void* self, int param1);
void QDialog_override_virtual_InitPainter(void* self, intptr_t slot);
void QDialog_virtualbase_InitPainter(const void* self, QPainter* painter);
void QDialog_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QDialog_virtualbase_Redirected(const void* self, QPoint* offset);
void QDialog_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QDialog_virtualbase_SharedPainter(const void* self);
void QDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QDialog_virtualbase_InputMethodQuery(const void* self, int param1);
void QDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QDialog_virtualbase_FocusNextPrevChild(void* self, bool next);
void QDialog_Delete(QDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
