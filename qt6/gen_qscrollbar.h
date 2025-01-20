#pragma once
#ifndef MIQT_QT6_GEN_QSCROLLBAR_H
#define MIQT_QT6_GEN_QSCROLLBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSlider;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
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
class QResizeEvent;
class QScrollBar;
class QShowEvent;
class QSize;
class QStyleOptionSlider;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractSlider QAbstractSlider;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QScrollBar QScrollBar;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QScrollBar* QScrollBar_new(QWidget* parent);
QScrollBar* QScrollBar_new2();
QScrollBar* QScrollBar_new3(int param1);
QScrollBar* QScrollBar_new4(int param1, QWidget* parent);
void QScrollBar_virtbase(QScrollBar* src, QAbstractSlider** outptr_QAbstractSlider);
QMetaObject* QScrollBar_MetaObject(const QScrollBar* self);
void* QScrollBar_Metacast(QScrollBar* self, const char* param1);
struct miqt_string QScrollBar_Tr(const char* s);
QSize* QScrollBar_SizeHint(const QScrollBar* self);
bool QScrollBar_Event(QScrollBar* self, QEvent* event);
void QScrollBar_WheelEvent(QScrollBar* self, QWheelEvent* param1);
void QScrollBar_PaintEvent(QScrollBar* self, QPaintEvent* param1);
void QScrollBar_MousePressEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_MouseReleaseEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_MouseMoveEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_HideEvent(QScrollBar* self, QHideEvent* param1);
void QScrollBar_SliderChange(QScrollBar* self, int change);
void QScrollBar_ContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1);
void QScrollBar_InitStyleOption(const QScrollBar* self, QStyleOptionSlider* option);
struct miqt_string QScrollBar_Tr2(const char* s, const char* c);
struct miqt_string QScrollBar_Tr3(const char* s, const char* c, int n);
bool QScrollBar_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QScrollBar_virtualbase_SizeHint(const void* self);
bool QScrollBar_override_virtual_Event(void* self, intptr_t slot);
bool QScrollBar_virtualbase_Event(void* self, QEvent* event);
bool QScrollBar_override_virtual_WheelEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
bool QScrollBar_override_virtual_PaintEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QScrollBar_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
bool QScrollBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
bool QScrollBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
bool QScrollBar_override_virtual_HideEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_HideEvent(void* self, QHideEvent* param1);
bool QScrollBar_override_virtual_SliderChange(void* self, intptr_t slot);
void QScrollBar_virtualbase_SliderChange(void* self, int change);
bool QScrollBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
bool QScrollBar_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QScrollBar_virtualbase_InitStyleOption(const void* self, QStyleOptionSlider* option);
bool QScrollBar_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev);
bool QScrollBar_override_virtual_TimerEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
bool QScrollBar_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_ChangeEvent(void* self, QEvent* e);
bool QScrollBar_override_virtual_DevType(void* self, intptr_t slot);
int QScrollBar_virtualbase_DevType(const void* self);
bool QScrollBar_override_virtual_SetVisible(void* self, intptr_t slot);
void QScrollBar_virtualbase_SetVisible(void* self, bool visible);
bool QScrollBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QScrollBar_virtualbase_MinimumSizeHint(const void* self);
bool QScrollBar_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QScrollBar_virtualbase_HeightForWidth(const void* self, int param1);
bool QScrollBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QScrollBar_virtualbase_HasHeightForWidth(const void* self);
bool QScrollBar_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QScrollBar_virtualbase_PaintEngine(const void* self);
bool QScrollBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QScrollBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QScrollBar_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QScrollBar_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QScrollBar_override_virtual_EnterEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QScrollBar_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QScrollBar_override_virtual_MoveEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QScrollBar_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QScrollBar_override_virtual_CloseEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QScrollBar_override_virtual_TabletEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QScrollBar_override_virtual_ActionEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QScrollBar_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QScrollBar_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QScrollBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QScrollBar_override_virtual_DropEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QScrollBar_override_virtual_ShowEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QScrollBar_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QScrollBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QScrollBar_override_virtual_Metric(void* self, intptr_t slot);
int QScrollBar_virtualbase_Metric(const void* self, int param1);
bool QScrollBar_override_virtual_InitPainter(void* self, intptr_t slot);
void QScrollBar_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QScrollBar_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QScrollBar_virtualbase_Redirected(const void* self, QPoint* offset);
bool QScrollBar_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QScrollBar_virtualbase_SharedPainter(const void* self);
bool QScrollBar_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QScrollBar_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QScrollBar_virtualbase_InputMethodQuery(const void* self, int param1);
bool QScrollBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QScrollBar_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QScrollBar_override_virtual_EventFilter(void* self, intptr_t slot);
bool QScrollBar_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QScrollBar_override_virtual_ChildEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QScrollBar_override_virtual_CustomEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_CustomEvent(void* self, QEvent* event);
bool QScrollBar_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QScrollBar_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QScrollBar_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QScrollBar_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QScrollBar_Delete(QScrollBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
