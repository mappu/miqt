#pragma once
#ifndef MIQT_QT6_GEN_QPROGRESSDIALOG_H
#define MIQT_QT6_GEN_QPROGRESSDIALOG_H

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
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QLabel;
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
class QProgressBar;
class QProgressDialog;
class QPushButton;
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
typedef struct QLabel QLabel;
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
typedef struct QProgressBar QProgressBar;
typedef struct QProgressDialog QProgressDialog;
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QProgressDialog* QProgressDialog_new(QWidget* parent);
QProgressDialog* QProgressDialog_new2();
QProgressDialog* QProgressDialog_new3(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum);
QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags);
QProgressDialog* QProgressDialog_new5(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent);
QProgressDialog* QProgressDialog_new6(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags);
void QProgressDialog_virtbase(QProgressDialog* src, QDialog** outptr_QDialog);
QMetaObject* QProgressDialog_MetaObject(const QProgressDialog* self);
void* QProgressDialog_Metacast(QProgressDialog* self, const char* param1);
struct miqt_string QProgressDialog_Tr(const char* s);
void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label);
void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button);
void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar);
bool QProgressDialog_WasCanceled(const QProgressDialog* self);
int QProgressDialog_Minimum(const QProgressDialog* self);
int QProgressDialog_Maximum(const QProgressDialog* self);
int QProgressDialog_Value(const QProgressDialog* self);
QSize* QProgressDialog_SizeHint(const QProgressDialog* self);
struct miqt_string QProgressDialog_LabelText(const QProgressDialog* self);
int QProgressDialog_MinimumDuration(const QProgressDialog* self);
void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset);
bool QProgressDialog_AutoReset(const QProgressDialog* self);
void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close);
bool QProgressDialog_AutoClose(const QProgressDialog* self);
void QProgressDialog_Cancel(QProgressDialog* self);
void QProgressDialog_Reset(QProgressDialog* self);
void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum);
void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum);
void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum);
void QProgressDialog_SetValue(QProgressDialog* self, int progress);
void QProgressDialog_SetLabelText(QProgressDialog* self, struct miqt_string text);
void QProgressDialog_SetCancelButtonText(QProgressDialog* self, struct miqt_string text);
void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms);
void QProgressDialog_Canceled(QProgressDialog* self);
void QProgressDialog_connect_Canceled(QProgressDialog* self, intptr_t slot);
void QProgressDialog_ResizeEvent(QProgressDialog* self, QResizeEvent* event);
void QProgressDialog_CloseEvent(QProgressDialog* self, QCloseEvent* event);
void QProgressDialog_ChangeEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_ShowEvent(QProgressDialog* self, QShowEvent* event);
struct miqt_string QProgressDialog_Tr2(const char* s, const char* c);
struct miqt_string QProgressDialog_Tr3(const char* s, const char* c, int n);
bool QProgressDialog_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QProgressDialog_virtualbase_SizeHint(const void* self);
bool QProgressDialog_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QProgressDialog_override_virtual_CloseEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QProgressDialog_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_ChangeEvent(void* self, QEvent* event);
bool QProgressDialog_override_virtual_ShowEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QProgressDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QProgressDialog_virtualbase_SetVisible(void* self, bool visible);
bool QProgressDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QProgressDialog_virtualbase_MinimumSizeHint(const void* self);
bool QProgressDialog_override_virtual_Open(void* self, intptr_t slot);
void QProgressDialog_virtualbase_Open(void* self);
bool QProgressDialog_override_virtual_Exec(void* self, intptr_t slot);
int QProgressDialog_virtualbase_Exec(void* self);
bool QProgressDialog_override_virtual_Done(void* self, intptr_t slot);
void QProgressDialog_virtualbase_Done(void* self, int param1);
bool QProgressDialog_override_virtual_Accept(void* self, intptr_t slot);
void QProgressDialog_virtualbase_Accept(void* self);
bool QProgressDialog_override_virtual_Reject(void* self, intptr_t slot);
void QProgressDialog_virtualbase_Reject(void* self);
bool QProgressDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QProgressDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
bool QProgressDialog_override_virtual_EventFilter(void* self, intptr_t slot);
bool QProgressDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
bool QProgressDialog_override_virtual_DevType(void* self, intptr_t slot);
int QProgressDialog_virtualbase_DevType(const void* self);
bool QProgressDialog_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QProgressDialog_virtualbase_HeightForWidth(const void* self, int param1);
bool QProgressDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QProgressDialog_virtualbase_HasHeightForWidth(const void* self);
bool QProgressDialog_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QProgressDialog_virtualbase_PaintEngine(const void* self);
bool QProgressDialog_override_virtual_Event(void* self, intptr_t slot);
bool QProgressDialog_virtualbase_Event(void* self, QEvent* event);
bool QProgressDialog_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QProgressDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QProgressDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QProgressDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QProgressDialog_override_virtual_WheelEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QProgressDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QProgressDialog_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QProgressDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QProgressDialog_override_virtual_EnterEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QProgressDialog_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QProgressDialog_override_virtual_PaintEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QProgressDialog_override_virtual_MoveEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QProgressDialog_override_virtual_TabletEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QProgressDialog_override_virtual_ActionEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QProgressDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QProgressDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QProgressDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QProgressDialog_override_virtual_DropEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QProgressDialog_override_virtual_HideEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QProgressDialog_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QProgressDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QProgressDialog_override_virtual_Metric(void* self, intptr_t slot);
int QProgressDialog_virtualbase_Metric(const void* self, int param1);
bool QProgressDialog_override_virtual_InitPainter(void* self, intptr_t slot);
void QProgressDialog_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QProgressDialog_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QProgressDialog_virtualbase_Redirected(const void* self, QPoint* offset);
bool QProgressDialog_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QProgressDialog_virtualbase_SharedPainter(const void* self);
bool QProgressDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QProgressDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QProgressDialog_virtualbase_InputMethodQuery(const void* self, int param1);
bool QProgressDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QProgressDialog_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QProgressDialog_override_virtual_TimerEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QProgressDialog_override_virtual_ChildEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QProgressDialog_override_virtual_CustomEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_CustomEvent(void* self, QEvent* event);
bool QProgressDialog_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QProgressDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QProgressDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QProgressDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QProgressDialog_Delete(QProgressDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
