#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTSLIDER_H
#define MIQT_QT6_GEN_QABSTRACTSLIDER_H

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

QAbstractSlider* QAbstractSlider_new(QWidget* parent);
QAbstractSlider* QAbstractSlider_new2();
void QAbstractSlider_virtbase(QAbstractSlider* src, QWidget** outptr_QWidget);
QMetaObject* QAbstractSlider_MetaObject(const QAbstractSlider* self);
void* QAbstractSlider_Metacast(QAbstractSlider* self, const char* param1);
struct miqt_string QAbstractSlider_Tr(const char* s);
int QAbstractSlider_Orientation(const QAbstractSlider* self);
void QAbstractSlider_SetMinimum(QAbstractSlider* self, int minimum);
int QAbstractSlider_Minimum(const QAbstractSlider* self);
void QAbstractSlider_SetMaximum(QAbstractSlider* self, int maximum);
int QAbstractSlider_Maximum(const QAbstractSlider* self);
void QAbstractSlider_SetSingleStep(QAbstractSlider* self, int singleStep);
int QAbstractSlider_SingleStep(const QAbstractSlider* self);
void QAbstractSlider_SetPageStep(QAbstractSlider* self, int pageStep);
int QAbstractSlider_PageStep(const QAbstractSlider* self);
void QAbstractSlider_SetTracking(QAbstractSlider* self, bool enable);
bool QAbstractSlider_HasTracking(const QAbstractSlider* self);
void QAbstractSlider_SetSliderDown(QAbstractSlider* self, bool sliderDown);
bool QAbstractSlider_IsSliderDown(const QAbstractSlider* self);
void QAbstractSlider_SetSliderPosition(QAbstractSlider* self, int sliderPosition);
int QAbstractSlider_SliderPosition(const QAbstractSlider* self);
void QAbstractSlider_SetInvertedAppearance(QAbstractSlider* self, bool invertedAppearance);
bool QAbstractSlider_InvertedAppearance(const QAbstractSlider* self);
void QAbstractSlider_SetInvertedControls(QAbstractSlider* self, bool invertedControls);
bool QAbstractSlider_InvertedControls(const QAbstractSlider* self);
int QAbstractSlider_Value(const QAbstractSlider* self);
void QAbstractSlider_TriggerAction(QAbstractSlider* self, int action);
void QAbstractSlider_SetValue(QAbstractSlider* self, int value);
void QAbstractSlider_SetOrientation(QAbstractSlider* self, int orientation);
void QAbstractSlider_SetRange(QAbstractSlider* self, int min, int max);
void QAbstractSlider_ValueChanged(QAbstractSlider* self, int value);
void QAbstractSlider_connect_ValueChanged(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_SliderPressed(QAbstractSlider* self);
void QAbstractSlider_connect_SliderPressed(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_SliderMoved(QAbstractSlider* self, int position);
void QAbstractSlider_connect_SliderMoved(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_SliderReleased(QAbstractSlider* self);
void QAbstractSlider_connect_SliderReleased(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_RangeChanged(QAbstractSlider* self, int min, int max);
void QAbstractSlider_connect_RangeChanged(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_ActionTriggered(QAbstractSlider* self, int action);
void QAbstractSlider_connect_ActionTriggered(QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_Event(QAbstractSlider* self, QEvent* e);
void QAbstractSlider_SliderChange(QAbstractSlider* self, int change);
void QAbstractSlider_KeyPressEvent(QAbstractSlider* self, QKeyEvent* ev);
void QAbstractSlider_TimerEvent(QAbstractSlider* self, QTimerEvent* param1);
void QAbstractSlider_WheelEvent(QAbstractSlider* self, QWheelEvent* e);
void QAbstractSlider_ChangeEvent(QAbstractSlider* self, QEvent* e);
struct miqt_string QAbstractSlider_Tr2(const char* s, const char* c);
struct miqt_string QAbstractSlider_Tr3(const char* s, const char* c, int n);
bool QAbstractSlider_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractSlider_virtualbase_Event(void* self, QEvent* e);
bool QAbstractSlider_override_virtual_SliderChange(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_SliderChange(void* self, int change);
bool QAbstractSlider_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev);
bool QAbstractSlider_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
bool QAbstractSlider_override_virtual_WheelEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_WheelEvent(void* self, QWheelEvent* e);
bool QAbstractSlider_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_ChangeEvent(void* self, QEvent* e);
bool QAbstractSlider_override_virtual_DevType(void* self, intptr_t slot);
int QAbstractSlider_virtualbase_DevType(const void* self);
bool QAbstractSlider_override_virtual_SetVisible(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_SetVisible(void* self, bool visible);
bool QAbstractSlider_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QAbstractSlider_virtualbase_SizeHint(const void* self);
bool QAbstractSlider_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractSlider_virtualbase_MinimumSizeHint(const void* self);
bool QAbstractSlider_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QAbstractSlider_virtualbase_HeightForWidth(const void* self, int param1);
bool QAbstractSlider_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QAbstractSlider_virtualbase_HasHeightForWidth(const void* self);
bool QAbstractSlider_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QAbstractSlider_virtualbase_PaintEngine(const void* self);
bool QAbstractSlider_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QAbstractSlider_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QAbstractSlider_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QAbstractSlider_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QAbstractSlider_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QAbstractSlider_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QAbstractSlider_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QAbstractSlider_override_virtual_EnterEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QAbstractSlider_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QAbstractSlider_override_virtual_PaintEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QAbstractSlider_override_virtual_MoveEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QAbstractSlider_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QAbstractSlider_override_virtual_CloseEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QAbstractSlider_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QAbstractSlider_override_virtual_TabletEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QAbstractSlider_override_virtual_ActionEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QAbstractSlider_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QAbstractSlider_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QAbstractSlider_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QAbstractSlider_override_virtual_DropEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QAbstractSlider_override_virtual_ShowEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QAbstractSlider_override_virtual_HideEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QAbstractSlider_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QAbstractSlider_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QAbstractSlider_override_virtual_Metric(void* self, intptr_t slot);
int QAbstractSlider_virtualbase_Metric(const void* self, int param1);
bool QAbstractSlider_override_virtual_InitPainter(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QAbstractSlider_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QAbstractSlider_virtualbase_Redirected(const void* self, QPoint* offset);
bool QAbstractSlider_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QAbstractSlider_virtualbase_SharedPainter(const void* self);
bool QAbstractSlider_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QAbstractSlider_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QAbstractSlider_virtualbase_InputMethodQuery(const void* self, int param1);
bool QAbstractSlider_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QAbstractSlider_virtualbase_FocusNextPrevChild(void* self, bool next);
void QAbstractSlider_Delete(QAbstractSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
