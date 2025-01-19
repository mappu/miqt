#pragma once
#ifndef MIQT_QT_GEN_QCHECKBOX_H
#define MIQT_QT_GEN_QCHECKBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
class QActionEvent;
class QCheckBox;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
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
typedef struct QAbstractButton QAbstractButton;
typedef struct QActionEvent QActionEvent;
typedef struct QCheckBox QCheckBox;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
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

QCheckBox* QCheckBox_new(QWidget* parent);
QCheckBox* QCheckBox_new2();
QCheckBox* QCheckBox_new3(struct miqt_string text);
QCheckBox* QCheckBox_new4(struct miqt_string text, QWidget* parent);
void QCheckBox_virtbase(QCheckBox* src, QAbstractButton** outptr_QAbstractButton);
QMetaObject* QCheckBox_MetaObject(const QCheckBox* self);
void* QCheckBox_Metacast(QCheckBox* self, const char* param1);
struct miqt_string QCheckBox_Tr(const char* s);
struct miqt_string QCheckBox_TrUtf8(const char* s);
QSize* QCheckBox_SizeHint(const QCheckBox* self);
QSize* QCheckBox_MinimumSizeHint(const QCheckBox* self);
void QCheckBox_SetTristate(QCheckBox* self);
bool QCheckBox_IsTristate(const QCheckBox* self);
int QCheckBox_CheckState(const QCheckBox* self);
void QCheckBox_SetCheckState(QCheckBox* self, int state);
void QCheckBox_StateChanged(QCheckBox* self, int param1);
void QCheckBox_connect_StateChanged(QCheckBox* self, intptr_t slot);
bool QCheckBox_Event(QCheckBox* self, QEvent* e);
bool QCheckBox_HitButton(const QCheckBox* self, QPoint* pos);
void QCheckBox_CheckStateSet(QCheckBox* self);
void QCheckBox_NextCheckState(QCheckBox* self);
void QCheckBox_PaintEvent(QCheckBox* self, QPaintEvent* param1);
void QCheckBox_MouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
struct miqt_string QCheckBox_Tr2(const char* s, const char* c);
struct miqt_string QCheckBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QCheckBox_TrUtf82(const char* s, const char* c);
struct miqt_string QCheckBox_TrUtf83(const char* s, const char* c, int n);
void QCheckBox_SetTristate1(QCheckBox* self, bool y);
bool QCheckBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QCheckBox_virtualbase_SizeHint(const void* self);
bool QCheckBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QCheckBox_virtualbase_MinimumSizeHint(const void* self);
bool QCheckBox_override_virtual_Event(void* self, intptr_t slot);
bool QCheckBox_virtualbase_Event(void* self, QEvent* e);
bool QCheckBox_override_virtual_HitButton(void* self, intptr_t slot);
bool QCheckBox_virtualbase_HitButton(const void* self, QPoint* pos);
bool QCheckBox_override_virtual_CheckStateSet(void* self, intptr_t slot);
void QCheckBox_virtualbase_CheckStateSet(void* self);
bool QCheckBox_override_virtual_NextCheckState(void* self, intptr_t slot);
void QCheckBox_virtualbase_NextCheckState(void* self);
bool QCheckBox_override_virtual_PaintEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QCheckBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
bool QCheckBox_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* e);
bool QCheckBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
bool QCheckBox_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_MousePressEvent(void* self, QMouseEvent* e);
bool QCheckBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
bool QCheckBox_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_FocusInEvent(void* self, QFocusEvent* e);
bool QCheckBox_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* e);
bool QCheckBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_ChangeEvent(void* self, QEvent* e);
bool QCheckBox_override_virtual_TimerEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_TimerEvent(void* self, QTimerEvent* e);
bool QCheckBox_override_virtual_DevType(void* self, intptr_t slot);
int QCheckBox_virtualbase_DevType(const void* self);
bool QCheckBox_override_virtual_SetVisible(void* self, intptr_t slot);
void QCheckBox_virtualbase_SetVisible(void* self, bool visible);
bool QCheckBox_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QCheckBox_virtualbase_HeightForWidth(const void* self, int param1);
bool QCheckBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QCheckBox_virtualbase_HasHeightForWidth(const void* self);
bool QCheckBox_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QCheckBox_virtualbase_PaintEngine(const void* self);
bool QCheckBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QCheckBox_override_virtual_WheelEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QCheckBox_override_virtual_EnterEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_EnterEvent(void* self, QEvent* event);
bool QCheckBox_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QCheckBox_override_virtual_MoveEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QCheckBox_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QCheckBox_override_virtual_CloseEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QCheckBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QCheckBox_override_virtual_TabletEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QCheckBox_override_virtual_ActionEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QCheckBox_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QCheckBox_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QCheckBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QCheckBox_override_virtual_DropEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QCheckBox_override_virtual_ShowEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QCheckBox_override_virtual_HideEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QCheckBox_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QCheckBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QCheckBox_override_virtual_Metric(void* self, intptr_t slot);
int QCheckBox_virtualbase_Metric(const void* self, int param1);
bool QCheckBox_override_virtual_InitPainter(void* self, intptr_t slot);
void QCheckBox_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QCheckBox_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QCheckBox_virtualbase_Redirected(const void* self, QPoint* offset);
bool QCheckBox_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QCheckBox_virtualbase_SharedPainter(const void* self);
bool QCheckBox_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QCheckBox_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QCheckBox_virtualbase_InputMethodQuery(const void* self, int param1);
bool QCheckBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QCheckBox_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QCheckBox_override_virtual_EventFilter(void* self, intptr_t slot);
bool QCheckBox_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QCheckBox_override_virtual_ChildEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QCheckBox_override_virtual_CustomEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_CustomEvent(void* self, QEvent* event);
bool QCheckBox_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QCheckBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QCheckBox_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QCheckBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QCheckBox_Delete(QCheckBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
