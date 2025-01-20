#pragma once
#ifndef MIQT_QT6_GEN_QSLIDER_H
#define MIQT_QT6_GEN_QSLIDER_H

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
class QShowEvent;
class QSize;
class QSlider;
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
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSlider QSlider;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QSlider* QSlider_new(QWidget* parent);
QSlider* QSlider_new2();
QSlider* QSlider_new3(int orientation);
QSlider* QSlider_new4(int orientation, QWidget* parent);
void QSlider_virtbase(QSlider* src, QAbstractSlider** outptr_QAbstractSlider);
QMetaObject* QSlider_MetaObject(const QSlider* self);
void* QSlider_Metacast(QSlider* self, const char* param1);
struct miqt_string QSlider_Tr(const char* s);
QSize* QSlider_SizeHint(const QSlider* self);
QSize* QSlider_MinimumSizeHint(const QSlider* self);
void QSlider_SetTickPosition(QSlider* self, int position);
int QSlider_TickPosition(const QSlider* self);
void QSlider_SetTickInterval(QSlider* self, int ti);
int QSlider_TickInterval(const QSlider* self);
bool QSlider_Event(QSlider* self, QEvent* event);
void QSlider_PaintEvent(QSlider* self, QPaintEvent* ev);
void QSlider_MousePressEvent(QSlider* self, QMouseEvent* ev);
void QSlider_MouseReleaseEvent(QSlider* self, QMouseEvent* ev);
void QSlider_MouseMoveEvent(QSlider* self, QMouseEvent* ev);
void QSlider_InitStyleOption(const QSlider* self, QStyleOptionSlider* option);
struct miqt_string QSlider_Tr2(const char* s, const char* c);
struct miqt_string QSlider_Tr3(const char* s, const char* c, int n);
bool QSlider_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QSlider_virtualbase_SizeHint(const void* self);
bool QSlider_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QSlider_virtualbase_MinimumSizeHint(const void* self);
bool QSlider_override_virtual_Event(void* self, intptr_t slot);
bool QSlider_virtualbase_Event(void* self, QEvent* event);
bool QSlider_override_virtual_PaintEvent(void* self, intptr_t slot);
void QSlider_virtualbase_PaintEvent(void* self, QPaintEvent* ev);
bool QSlider_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QSlider_virtualbase_MousePressEvent(void* self, QMouseEvent* ev);
bool QSlider_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QSlider_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* ev);
bool QSlider_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QSlider_virtualbase_MouseMoveEvent(void* self, QMouseEvent* ev);
bool QSlider_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QSlider_virtualbase_InitStyleOption(const void* self, QStyleOptionSlider* option);
bool QSlider_override_virtual_SliderChange(void* self, intptr_t slot);
void QSlider_virtualbase_SliderChange(void* self, int change);
bool QSlider_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QSlider_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev);
bool QSlider_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSlider_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
bool QSlider_override_virtual_WheelEvent(void* self, intptr_t slot);
void QSlider_virtualbase_WheelEvent(void* self, QWheelEvent* e);
bool QSlider_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QSlider_virtualbase_ChangeEvent(void* self, QEvent* e);
bool QSlider_override_virtual_DevType(void* self, intptr_t slot);
int QSlider_virtualbase_DevType(const void* self);
bool QSlider_override_virtual_SetVisible(void* self, intptr_t slot);
void QSlider_virtualbase_SetVisible(void* self, bool visible);
bool QSlider_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QSlider_virtualbase_HeightForWidth(const void* self, int param1);
bool QSlider_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QSlider_virtualbase_HasHeightForWidth(const void* self);
bool QSlider_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QSlider_virtualbase_PaintEngine(const void* self);
bool QSlider_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QSlider_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QSlider_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QSlider_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QSlider_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QSlider_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QSlider_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QSlider_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QSlider_override_virtual_EnterEvent(void* self, intptr_t slot);
void QSlider_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QSlider_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QSlider_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QSlider_override_virtual_MoveEvent(void* self, intptr_t slot);
void QSlider_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QSlider_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QSlider_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QSlider_override_virtual_CloseEvent(void* self, intptr_t slot);
void QSlider_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QSlider_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QSlider_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QSlider_override_virtual_TabletEvent(void* self, intptr_t slot);
void QSlider_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QSlider_override_virtual_ActionEvent(void* self, intptr_t slot);
void QSlider_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QSlider_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QSlider_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QSlider_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QSlider_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QSlider_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QSlider_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QSlider_override_virtual_DropEvent(void* self, intptr_t slot);
void QSlider_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QSlider_override_virtual_ShowEvent(void* self, intptr_t slot);
void QSlider_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QSlider_override_virtual_HideEvent(void* self, intptr_t slot);
void QSlider_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QSlider_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QSlider_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QSlider_override_virtual_Metric(void* self, intptr_t slot);
int QSlider_virtualbase_Metric(const void* self, int param1);
bool QSlider_override_virtual_InitPainter(void* self, intptr_t slot);
void QSlider_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QSlider_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QSlider_virtualbase_Redirected(const void* self, QPoint* offset);
bool QSlider_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QSlider_virtualbase_SharedPainter(const void* self);
bool QSlider_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QSlider_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QSlider_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QSlider_virtualbase_InputMethodQuery(const void* self, int param1);
bool QSlider_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QSlider_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QSlider_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSlider_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QSlider_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSlider_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QSlider_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSlider_virtualbase_CustomEvent(void* self, QEvent* event);
bool QSlider_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSlider_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QSlider_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSlider_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSlider_Delete(QSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
