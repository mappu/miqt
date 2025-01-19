#pragma once
#ifndef MIQT_QT6_PRINTSUPPORT_GEN_QABSTRACTPRINTDIALOG_H
#define MIQT_QT6_PRINTSUPPORT_GEN_QABSTRACTPRINTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractPrintDialog;
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
typedef struct QAbstractPrintDialog QAbstractPrintDialog;
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

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer);
QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent);
void QAbstractPrintDialog_virtbase(QAbstractPrintDialog* src, QDialog** outptr_QDialog);
QMetaObject* QAbstractPrintDialog_MetaObject(const QAbstractPrintDialog* self);
void* QAbstractPrintDialog_Metacast(QAbstractPrintDialog* self, const char* param1);
struct miqt_string QAbstractPrintDialog_Tr(const char* s);
void QAbstractPrintDialog_SetOptionTabs(QAbstractPrintDialog* self, struct miqt_array /* of QWidget* */  tabs);
void QAbstractPrintDialog_SetPrintRange(QAbstractPrintDialog* self, int rangeVal);
int QAbstractPrintDialog_PrintRange(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_SetMinMax(QAbstractPrintDialog* self, int min, int max);
int QAbstractPrintDialog_MinPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_MaxPage(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_SetFromTo(QAbstractPrintDialog* self, int fromPage, int toPage);
int QAbstractPrintDialog_FromPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_ToPage(const QAbstractPrintDialog* self);
QPrinter* QAbstractPrintDialog_Printer(const QAbstractPrintDialog* self);
struct miqt_string QAbstractPrintDialog_Tr2(const char* s, const char* c);
struct miqt_string QAbstractPrintDialog_Tr3(const char* s, const char* c, int n);
bool QAbstractPrintDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_SetVisible(void* self, bool visible);
bool QAbstractPrintDialog_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QAbstractPrintDialog_virtualbase_SizeHint(const void* self);
bool QAbstractPrintDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractPrintDialog_virtualbase_MinimumSizeHint(const void* self);
bool QAbstractPrintDialog_override_virtual_Open(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_Open(void* self);
bool QAbstractPrintDialog_override_virtual_Exec(void* self, intptr_t slot);
int QAbstractPrintDialog_virtualbase_Exec(void* self);
bool QAbstractPrintDialog_override_virtual_Done(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_Done(void* self, int param1);
bool QAbstractPrintDialog_override_virtual_Accept(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_Accept(void* self);
bool QAbstractPrintDialog_override_virtual_Reject(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_Reject(void* self);
bool QAbstractPrintDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QAbstractPrintDialog_override_virtual_CloseEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
bool QAbstractPrintDialog_override_virtual_ShowEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1);
bool QAbstractPrintDialog_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
bool QAbstractPrintDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
bool QAbstractPrintDialog_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractPrintDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
bool QAbstractPrintDialog_override_virtual_DevType(void* self, intptr_t slot);
int QAbstractPrintDialog_virtualbase_DevType(const void* self);
bool QAbstractPrintDialog_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QAbstractPrintDialog_virtualbase_HeightForWidth(const void* self, int param1);
bool QAbstractPrintDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QAbstractPrintDialog_virtualbase_HasHeightForWidth(const void* self);
bool QAbstractPrintDialog_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QAbstractPrintDialog_virtualbase_PaintEngine(const void* self);
bool QAbstractPrintDialog_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractPrintDialog_virtualbase_Event(void* self, QEvent* event);
bool QAbstractPrintDialog_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QAbstractPrintDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QAbstractPrintDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QAbstractPrintDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QAbstractPrintDialog_override_virtual_WheelEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QAbstractPrintDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QAbstractPrintDialog_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QAbstractPrintDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QAbstractPrintDialog_override_virtual_EnterEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QAbstractPrintDialog_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QAbstractPrintDialog_override_virtual_PaintEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QAbstractPrintDialog_override_virtual_MoveEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QAbstractPrintDialog_override_virtual_TabletEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QAbstractPrintDialog_override_virtual_ActionEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QAbstractPrintDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QAbstractPrintDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QAbstractPrintDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QAbstractPrintDialog_override_virtual_DropEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QAbstractPrintDialog_override_virtual_HideEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QAbstractPrintDialog_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QAbstractPrintDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QAbstractPrintDialog_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QAbstractPrintDialog_override_virtual_Metric(void* self, intptr_t slot);
int QAbstractPrintDialog_virtualbase_Metric(const void* self, int param1);
bool QAbstractPrintDialog_override_virtual_InitPainter(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QAbstractPrintDialog_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QAbstractPrintDialog_virtualbase_Redirected(const void* self, QPoint* offset);
bool QAbstractPrintDialog_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QAbstractPrintDialog_virtualbase_SharedPainter(const void* self);
bool QAbstractPrintDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QAbstractPrintDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QAbstractPrintDialog_virtualbase_InputMethodQuery(const void* self, int param1);
bool QAbstractPrintDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QAbstractPrintDialog_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QAbstractPrintDialog_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QAbstractPrintDialog_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QAbstractPrintDialog_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_CustomEvent(void* self, QEvent* event);
bool QAbstractPrintDialog_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QAbstractPrintDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAbstractPrintDialog_Delete(QAbstractPrintDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
