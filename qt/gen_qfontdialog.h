#pragma once
#ifndef MIQT_QT_GEN_QFONTDIALOG_H
#define MIQT_QT_GEN_QFONTDIALOG_H

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
class QEvent;
class QFocusEvent;
class QFont;
class QFontDialog;
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
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontDialog QFontDialog;
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

QFontDialog* QFontDialog_new(QWidget* parent);
QFontDialog* QFontDialog_new2();
QFontDialog* QFontDialog_new3(QFont* initial);
QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent);
void QFontDialog_virtbase(QFontDialog* src, QDialog** outptr_QDialog);
QMetaObject* QFontDialog_MetaObject(const QFontDialog* self);
void* QFontDialog_Metacast(QFontDialog* self, const char* param1);
struct miqt_string QFontDialog_Tr(const char* s);
struct miqt_string QFontDialog_TrUtf8(const char* s);
void QFontDialog_SetCurrentFont(QFontDialog* self, QFont* font);
QFont* QFontDialog_CurrentFont(const QFontDialog* self);
QFont* QFontDialog_SelectedFont(const QFontDialog* self);
void QFontDialog_SetOption(QFontDialog* self, int option);
bool QFontDialog_TestOption(const QFontDialog* self, int option);
void QFontDialog_SetOptions(QFontDialog* self, int options);
int QFontDialog_Options(const QFontDialog* self);
void QFontDialog_SetVisible(QFontDialog* self, bool visible);
QFont* QFontDialog_GetFont(bool* ok);
QFont* QFontDialog_GetFont2(bool* ok, QFont* initial);
void QFontDialog_CurrentFontChanged(QFontDialog* self, QFont* font);
void QFontDialog_connect_CurrentFontChanged(QFontDialog* self, intptr_t slot);
void QFontDialog_FontSelected(QFontDialog* self, QFont* font);
void QFontDialog_connect_FontSelected(QFontDialog* self, intptr_t slot);
void QFontDialog_ChangeEvent(QFontDialog* self, QEvent* event);
void QFontDialog_Done(QFontDialog* self, int result);
bool QFontDialog_EventFilter(QFontDialog* self, QObject* object, QEvent* event);
struct miqt_string QFontDialog_Tr2(const char* s, const char* c);
struct miqt_string QFontDialog_Tr3(const char* s, const char* c, int n);
struct miqt_string QFontDialog_TrUtf82(const char* s, const char* c);
struct miqt_string QFontDialog_TrUtf83(const char* s, const char* c, int n);
void QFontDialog_SetOption2(QFontDialog* self, int option, bool on);
QFont* QFontDialog_GetFont22(bool* ok, QWidget* parent);
QFont* QFontDialog_GetFont3(bool* ok, QFont* initial, QWidget* parent);
QFont* QFontDialog_GetFont4(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title);
QFont* QFontDialog_GetFont5(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title, int options);
bool QFontDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QFontDialog_virtualbase_SetVisible(void* self, bool visible);
bool QFontDialog_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_ChangeEvent(void* self, QEvent* event);
bool QFontDialog_override_virtual_Done(void* self, intptr_t slot);
void QFontDialog_virtualbase_Done(void* self, int result);
bool QFontDialog_override_virtual_EventFilter(void* self, intptr_t slot);
bool QFontDialog_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
bool QFontDialog_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QFontDialog_virtualbase_SizeHint(const void* self);
bool QFontDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QFontDialog_virtualbase_MinimumSizeHint(const void* self);
bool QFontDialog_override_virtual_Open(void* self, intptr_t slot);
void QFontDialog_virtualbase_Open(void* self);
bool QFontDialog_override_virtual_Exec(void* self, intptr_t slot);
int QFontDialog_virtualbase_Exec(void* self);
bool QFontDialog_override_virtual_Accept(void* self, intptr_t slot);
void QFontDialog_virtualbase_Accept(void* self);
bool QFontDialog_override_virtual_Reject(void* self, intptr_t slot);
void QFontDialog_virtualbase_Reject(void* self);
bool QFontDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QFontDialog_override_virtual_CloseEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
bool QFontDialog_override_virtual_ShowEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1);
bool QFontDialog_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
bool QFontDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
bool QFontDialog_override_virtual_DevType(void* self, intptr_t slot);
int QFontDialog_virtualbase_DevType(const void* self);
bool QFontDialog_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QFontDialog_virtualbase_HeightForWidth(const void* self, int param1);
bool QFontDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QFontDialog_virtualbase_HasHeightForWidth(const void* self);
bool QFontDialog_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QFontDialog_virtualbase_PaintEngine(const void* self);
bool QFontDialog_override_virtual_Event(void* self, intptr_t slot);
bool QFontDialog_virtualbase_Event(void* self, QEvent* event);
bool QFontDialog_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QFontDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QFontDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QFontDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QFontDialog_override_virtual_WheelEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QFontDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QFontDialog_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QFontDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QFontDialog_override_virtual_EnterEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_EnterEvent(void* self, QEvent* event);
bool QFontDialog_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QFontDialog_override_virtual_PaintEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QFontDialog_override_virtual_MoveEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QFontDialog_override_virtual_TabletEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QFontDialog_override_virtual_ActionEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QFontDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QFontDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QFontDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QFontDialog_override_virtual_DropEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QFontDialog_override_virtual_HideEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QFontDialog_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QFontDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QFontDialog_override_virtual_Metric(void* self, intptr_t slot);
int QFontDialog_virtualbase_Metric(const void* self, int param1);
bool QFontDialog_override_virtual_InitPainter(void* self, intptr_t slot);
void QFontDialog_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QFontDialog_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QFontDialog_virtualbase_Redirected(const void* self, QPoint* offset);
bool QFontDialog_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QFontDialog_virtualbase_SharedPainter(const void* self);
bool QFontDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QFontDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QFontDialog_virtualbase_InputMethodQuery(const void* self, int param1);
bool QFontDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QFontDialog_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QFontDialog_override_virtual_TimerEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QFontDialog_override_virtual_ChildEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QFontDialog_override_virtual_CustomEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_CustomEvent(void* self, QEvent* event);
bool QFontDialog_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QFontDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QFontDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QFontDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QFontDialog_Delete(QFontDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
