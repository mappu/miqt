#pragma once
#ifndef MIQT_QT6_GEN_QKEYSEQUENCEEDIT_H
#define MIQT_QT6_GEN_QKEYSEQUENCEEDIT_H

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
class QKeySequence;
class QKeySequenceEdit;
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
typedef struct QKeySequence QKeySequence;
typedef struct QKeySequenceEdit QKeySequenceEdit;
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

QKeySequenceEdit* QKeySequenceEdit_new(QWidget* parent);
QKeySequenceEdit* QKeySequenceEdit_new2();
QKeySequenceEdit* QKeySequenceEdit_new3(QKeySequence* keySequence);
QKeySequenceEdit* QKeySequenceEdit_new4(QKeySequence* keySequence, QWidget* parent);
void QKeySequenceEdit_virtbase(QKeySequenceEdit* src, QWidget** outptr_QWidget);
QMetaObject* QKeySequenceEdit_MetaObject(const QKeySequenceEdit* self);
void* QKeySequenceEdit_Metacast(QKeySequenceEdit* self, const char* param1);
struct miqt_string QKeySequenceEdit_Tr(const char* s);
QKeySequence* QKeySequenceEdit_KeySequence(const QKeySequenceEdit* self);
void QKeySequenceEdit_SetClearButtonEnabled(QKeySequenceEdit* self, bool enable);
bool QKeySequenceEdit_IsClearButtonEnabled(const QKeySequenceEdit* self);
void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, QKeySequence* keySequence);
void QKeySequenceEdit_Clear(QKeySequenceEdit* self);
void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self);
void QKeySequenceEdit_connect_EditingFinished(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, QKeySequence* keySequence);
void QKeySequenceEdit_connect_KeySequenceChanged(QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_Event(QKeySequenceEdit* self, QEvent* param1);
void QKeySequenceEdit_KeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
void QKeySequenceEdit_KeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
void QKeySequenceEdit_TimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
void QKeySequenceEdit_FocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
struct miqt_string QKeySequenceEdit_Tr2(const char* s, const char* c);
struct miqt_string QKeySequenceEdit_Tr3(const char* s, const char* c, int n);
void QKeySequenceEdit_override_virtual_Event(void* self, intptr_t slot);
bool QKeySequenceEdit_virtualbase_Event(void* self, QEvent* param1);
void QKeySequenceEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QKeySequenceEdit_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* param1);
void QKeySequenceEdit_override_virtual_TimerEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
void QKeySequenceEdit_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1);
void QKeySequenceEdit_override_virtual_DevType(void* self, intptr_t slot);
int QKeySequenceEdit_virtualbase_DevType(const void* self);
void QKeySequenceEdit_override_virtual_SetVisible(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_SetVisible(void* self, bool visible);
void QKeySequenceEdit_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QKeySequenceEdit_virtualbase_SizeHint(const void* self);
void QKeySequenceEdit_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QKeySequenceEdit_virtualbase_MinimumSizeHint(const void* self);
void QKeySequenceEdit_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QKeySequenceEdit_virtualbase_HeightForWidth(const void* self, int param1);
void QKeySequenceEdit_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QKeySequenceEdit_virtualbase_HasHeightForWidth(const void* self);
void QKeySequenceEdit_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QKeySequenceEdit_virtualbase_PaintEngine(const void* self);
void QKeySequenceEdit_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QKeySequenceEdit_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QKeySequenceEdit_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QKeySequenceEdit_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QKeySequenceEdit_override_virtual_WheelEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QKeySequenceEdit_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QKeySequenceEdit_override_virtual_EnterEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_EnterEvent(void* self, QEnterEvent* event);
void QKeySequenceEdit_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_LeaveEvent(void* self, QEvent* event);
void QKeySequenceEdit_override_virtual_PaintEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QKeySequenceEdit_override_virtual_MoveEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QKeySequenceEdit_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QKeySequenceEdit_override_virtual_CloseEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QKeySequenceEdit_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QKeySequenceEdit_override_virtual_TabletEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QKeySequenceEdit_override_virtual_ActionEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QKeySequenceEdit_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QKeySequenceEdit_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QKeySequenceEdit_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QKeySequenceEdit_override_virtual_DropEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_DropEvent(void* self, QDropEvent* event);
void QKeySequenceEdit_override_virtual_ShowEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QKeySequenceEdit_override_virtual_HideEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_HideEvent(void* self, QHideEvent* event);
void QKeySequenceEdit_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QKeySequenceEdit_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
void QKeySequenceEdit_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QKeySequenceEdit_override_virtual_Metric(void* self, intptr_t slot);
int QKeySequenceEdit_virtualbase_Metric(const void* self, int param1);
void QKeySequenceEdit_override_virtual_InitPainter(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_InitPainter(const void* self, QPainter* painter);
void QKeySequenceEdit_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QKeySequenceEdit_virtualbase_Redirected(const void* self, QPoint* offset);
void QKeySequenceEdit_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QKeySequenceEdit_virtualbase_SharedPainter(const void* self);
void QKeySequenceEdit_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QKeySequenceEdit_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QKeySequenceEdit_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QKeySequenceEdit_virtualbase_InputMethodQuery(const void* self, int param1);
void QKeySequenceEdit_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QKeySequenceEdit_virtualbase_FocusNextPrevChild(void* self, bool next);
void QKeySequenceEdit_Delete(QKeySequenceEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
