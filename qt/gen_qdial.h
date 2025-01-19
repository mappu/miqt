#pragma once
#ifndef MIQT_QT_GEN_QDIAL_H
#define MIQT_QT_GEN_QDIAL_H

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
class QDial;
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
typedef struct QAbstractSlider QAbstractSlider;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDial QDial;
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

QDial* QDial_new(QWidget* parent);
QDial* QDial_new2();
void QDial_virtbase(QDial* src, QAbstractSlider** outptr_QAbstractSlider);
QMetaObject* QDial_MetaObject(const QDial* self);
void* QDial_Metacast(QDial* self, const char* param1);
struct miqt_string QDial_Tr(const char* s);
struct miqt_string QDial_TrUtf8(const char* s);
bool QDial_Wrapping(const QDial* self);
int QDial_NotchSize(const QDial* self);
void QDial_SetNotchTarget(QDial* self, double target);
double QDial_NotchTarget(const QDial* self);
bool QDial_NotchesVisible(const QDial* self);
QSize* QDial_SizeHint(const QDial* self);
QSize* QDial_MinimumSizeHint(const QDial* self);
void QDial_SetNotchesVisible(QDial* self, bool visible);
void QDial_SetWrapping(QDial* self, bool on);
bool QDial_Event(QDial* self, QEvent* e);
void QDial_ResizeEvent(QDial* self, QResizeEvent* re);
void QDial_PaintEvent(QDial* self, QPaintEvent* pe);
void QDial_MousePressEvent(QDial* self, QMouseEvent* me);
void QDial_MouseReleaseEvent(QDial* self, QMouseEvent* me);
void QDial_MouseMoveEvent(QDial* self, QMouseEvent* me);
void QDial_SliderChange(QDial* self, int change);
struct miqt_string QDial_Tr2(const char* s, const char* c);
struct miqt_string QDial_Tr3(const char* s, const char* c, int n);
struct miqt_string QDial_TrUtf82(const char* s, const char* c);
struct miqt_string QDial_TrUtf83(const char* s, const char* c, int n);
bool QDial_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QDial_virtualbase_SizeHint(const void* self);
bool QDial_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QDial_virtualbase_MinimumSizeHint(const void* self);
bool QDial_override_virtual_Event(void* self, intptr_t slot);
bool QDial_virtualbase_Event(void* self, QEvent* e);
bool QDial_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QDial_virtualbase_ResizeEvent(void* self, QResizeEvent* re);
bool QDial_override_virtual_PaintEvent(void* self, intptr_t slot);
void QDial_virtualbase_PaintEvent(void* self, QPaintEvent* pe);
bool QDial_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QDial_virtualbase_MousePressEvent(void* self, QMouseEvent* me);
bool QDial_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QDial_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* me);
bool QDial_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QDial_virtualbase_MouseMoveEvent(void* self, QMouseEvent* me);
bool QDial_override_virtual_SliderChange(void* self, intptr_t slot);
void QDial_virtualbase_SliderChange(void* self, int change);
bool QDial_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QDial_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev);
bool QDial_override_virtual_TimerEvent(void* self, intptr_t slot);
void QDial_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
bool QDial_override_virtual_WheelEvent(void* self, intptr_t slot);
void QDial_virtualbase_WheelEvent(void* self, QWheelEvent* e);
bool QDial_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QDial_virtualbase_ChangeEvent(void* self, QEvent* e);
bool QDial_override_virtual_DevType(void* self, intptr_t slot);
int QDial_virtualbase_DevType(const void* self);
bool QDial_override_virtual_SetVisible(void* self, intptr_t slot);
void QDial_virtualbase_SetVisible(void* self, bool visible);
bool QDial_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QDial_virtualbase_HeightForWidth(const void* self, int param1);
bool QDial_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QDial_virtualbase_HasHeightForWidth(const void* self);
bool QDial_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QDial_virtualbase_PaintEngine(const void* self);
bool QDial_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QDial_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QDial_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QDial_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QDial_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QDial_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QDial_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QDial_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QDial_override_virtual_EnterEvent(void* self, intptr_t slot);
void QDial_virtualbase_EnterEvent(void* self, QEvent* event);
bool QDial_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QDial_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QDial_override_virtual_MoveEvent(void* self, intptr_t slot);
void QDial_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QDial_override_virtual_CloseEvent(void* self, intptr_t slot);
void QDial_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QDial_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QDial_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QDial_override_virtual_TabletEvent(void* self, intptr_t slot);
void QDial_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QDial_override_virtual_ActionEvent(void* self, intptr_t slot);
void QDial_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QDial_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QDial_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QDial_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QDial_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QDial_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QDial_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QDial_override_virtual_DropEvent(void* self, intptr_t slot);
void QDial_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QDial_override_virtual_ShowEvent(void* self, intptr_t slot);
void QDial_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QDial_override_virtual_HideEvent(void* self, intptr_t slot);
void QDial_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QDial_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QDial_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QDial_override_virtual_Metric(void* self, intptr_t slot);
int QDial_virtualbase_Metric(const void* self, int param1);
bool QDial_override_virtual_InitPainter(void* self, intptr_t slot);
void QDial_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QDial_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QDial_virtualbase_Redirected(const void* self, QPoint* offset);
bool QDial_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QDial_virtualbase_SharedPainter(const void* self);
bool QDial_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QDial_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QDial_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QDial_virtualbase_InputMethodQuery(const void* self, int param1);
bool QDial_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QDial_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QDial_override_virtual_EventFilter(void* self, intptr_t slot);
bool QDial_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QDial_override_virtual_ChildEvent(void* self, intptr_t slot);
void QDial_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QDial_override_virtual_CustomEvent(void* self, intptr_t slot);
void QDial_virtualbase_CustomEvent(void* self, QEvent* event);
bool QDial_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QDial_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QDial_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QDial_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QDial_Delete(QDial* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
