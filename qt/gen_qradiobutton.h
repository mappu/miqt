#pragma once
#ifndef MIQT_QT_GEN_QRADIOBUTTON_H
#define MIQT_QT_GEN_QRADIOBUTTON_H

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
class QRadioButton;
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
typedef struct QRadioButton QRadioButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QRadioButton* QRadioButton_new(QWidget* parent);
QRadioButton* QRadioButton_new2();
QRadioButton* QRadioButton_new3(struct miqt_string text);
QRadioButton* QRadioButton_new4(struct miqt_string text, QWidget* parent);
void QRadioButton_virtbase(QRadioButton* src, QAbstractButton** outptr_QAbstractButton);
QMetaObject* QRadioButton_MetaObject(const QRadioButton* self);
void* QRadioButton_Metacast(QRadioButton* self, const char* param1);
struct miqt_string QRadioButton_Tr(const char* s);
struct miqt_string QRadioButton_TrUtf8(const char* s);
QSize* QRadioButton_SizeHint(const QRadioButton* self);
QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self);
bool QRadioButton_Event(QRadioButton* self, QEvent* e);
bool QRadioButton_HitButton(const QRadioButton* self, QPoint* param1);
void QRadioButton_PaintEvent(QRadioButton* self, QPaintEvent* param1);
void QRadioButton_MouseMoveEvent(QRadioButton* self, QMouseEvent* param1);
struct miqt_string QRadioButton_Tr2(const char* s, const char* c);
struct miqt_string QRadioButton_Tr3(const char* s, const char* c, int n);
struct miqt_string QRadioButton_TrUtf82(const char* s, const char* c);
struct miqt_string QRadioButton_TrUtf83(const char* s, const char* c, int n);
bool QRadioButton_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QRadioButton_virtualbase_SizeHint(const void* self);
bool QRadioButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QRadioButton_virtualbase_MinimumSizeHint(const void* self);
bool QRadioButton_override_virtual_Event(void* self, intptr_t slot);
bool QRadioButton_virtualbase_Event(void* self, QEvent* e);
bool QRadioButton_override_virtual_HitButton(void* self, intptr_t slot);
bool QRadioButton_virtualbase_HitButton(const void* self, QPoint* param1);
bool QRadioButton_override_virtual_PaintEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QRadioButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
bool QRadioButton_override_virtual_CheckStateSet(void* self, intptr_t slot);
void QRadioButton_virtualbase_CheckStateSet(void* self);
bool QRadioButton_override_virtual_NextCheckState(void* self, intptr_t slot);
void QRadioButton_virtualbase_NextCheckState(void* self);
bool QRadioButton_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* e);
bool QRadioButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
bool QRadioButton_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_MousePressEvent(void* self, QMouseEvent* e);
bool QRadioButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
bool QRadioButton_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_FocusInEvent(void* self, QFocusEvent* e);
bool QRadioButton_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* e);
bool QRadioButton_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_ChangeEvent(void* self, QEvent* e);
bool QRadioButton_override_virtual_TimerEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_TimerEvent(void* self, QTimerEvent* e);
bool QRadioButton_override_virtual_DevType(void* self, intptr_t slot);
int QRadioButton_virtualbase_DevType(const void* self);
bool QRadioButton_override_virtual_SetVisible(void* self, intptr_t slot);
void QRadioButton_virtualbase_SetVisible(void* self, bool visible);
bool QRadioButton_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QRadioButton_virtualbase_HeightForWidth(const void* self, int param1);
bool QRadioButton_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QRadioButton_virtualbase_HasHeightForWidth(const void* self);
bool QRadioButton_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QRadioButton_virtualbase_PaintEngine(const void* self);
bool QRadioButton_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QRadioButton_override_virtual_WheelEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QRadioButton_override_virtual_EnterEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_EnterEvent(void* self, QEvent* event);
bool QRadioButton_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QRadioButton_override_virtual_MoveEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QRadioButton_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QRadioButton_override_virtual_CloseEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QRadioButton_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QRadioButton_override_virtual_TabletEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QRadioButton_override_virtual_ActionEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QRadioButton_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QRadioButton_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QRadioButton_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QRadioButton_override_virtual_DropEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QRadioButton_override_virtual_ShowEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QRadioButton_override_virtual_HideEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QRadioButton_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QRadioButton_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QRadioButton_override_virtual_Metric(void* self, intptr_t slot);
int QRadioButton_virtualbase_Metric(const void* self, int param1);
bool QRadioButton_override_virtual_InitPainter(void* self, intptr_t slot);
void QRadioButton_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QRadioButton_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QRadioButton_virtualbase_Redirected(const void* self, QPoint* offset);
bool QRadioButton_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QRadioButton_virtualbase_SharedPainter(const void* self);
bool QRadioButton_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QRadioButton_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QRadioButton_virtualbase_InputMethodQuery(const void* self, int param1);
bool QRadioButton_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QRadioButton_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QRadioButton_override_virtual_EventFilter(void* self, intptr_t slot);
bool QRadioButton_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QRadioButton_override_virtual_ChildEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QRadioButton_override_virtual_CustomEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_CustomEvent(void* self, QEvent* event);
bool QRadioButton_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QRadioButton_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QRadioButton_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QRadioButton_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QRadioButton_Delete(QRadioButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
