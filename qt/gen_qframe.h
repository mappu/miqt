#pragma once
#ifndef MIQT_QT_GEN_QFRAME_H
#define MIQT_QT_GEN_QFRAME_H

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
class QEvent;
class QFocusEvent;
class QFrame;
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
class QRect;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
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
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
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
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QFrame* QFrame_new(QWidget* parent);
QFrame* QFrame_new2();
QFrame* QFrame_new3(QWidget* parent, int f);
void QFrame_virtbase(QFrame* src, QWidget** outptr_QWidget);
QMetaObject* QFrame_MetaObject(const QFrame* self);
void* QFrame_Metacast(QFrame* self, const char* param1);
struct miqt_string QFrame_Tr(const char* s);
struct miqt_string QFrame_TrUtf8(const char* s);
int QFrame_FrameStyle(const QFrame* self);
void QFrame_SetFrameStyle(QFrame* self, int frameStyle);
int QFrame_FrameWidth(const QFrame* self);
QSize* QFrame_SizeHint(const QFrame* self);
int QFrame_FrameShape(const QFrame* self);
void QFrame_SetFrameShape(QFrame* self, int frameShape);
int QFrame_FrameShadow(const QFrame* self);
void QFrame_SetFrameShadow(QFrame* self, int frameShadow);
int QFrame_LineWidth(const QFrame* self);
void QFrame_SetLineWidth(QFrame* self, int lineWidth);
int QFrame_MidLineWidth(const QFrame* self);
void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth);
QRect* QFrame_FrameRect(const QFrame* self);
void QFrame_SetFrameRect(QFrame* self, QRect* frameRect);
bool QFrame_Event(QFrame* self, QEvent* e);
void QFrame_PaintEvent(QFrame* self, QPaintEvent* param1);
void QFrame_ChangeEvent(QFrame* self, QEvent* param1);
struct miqt_string QFrame_Tr2(const char* s, const char* c);
struct miqt_string QFrame_Tr3(const char* s, const char* c, int n);
struct miqt_string QFrame_TrUtf82(const char* s, const char* c);
struct miqt_string QFrame_TrUtf83(const char* s, const char* c, int n);
bool QFrame_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QFrame_virtualbase_SizeHint(const void* self);
bool QFrame_override_virtual_Event(void* self, intptr_t slot);
bool QFrame_virtualbase_Event(void* self, QEvent* e);
bool QFrame_override_virtual_PaintEvent(void* self, intptr_t slot);
void QFrame_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QFrame_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QFrame_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QFrame_override_virtual_DevType(void* self, intptr_t slot);
int QFrame_virtualbase_DevType(const void* self);
bool QFrame_override_virtual_SetVisible(void* self, intptr_t slot);
void QFrame_virtualbase_SetVisible(void* self, bool visible);
bool QFrame_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QFrame_virtualbase_MinimumSizeHint(const void* self);
bool QFrame_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QFrame_virtualbase_HeightForWidth(const void* self, int param1);
bool QFrame_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QFrame_virtualbase_HasHeightForWidth(const void* self);
bool QFrame_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QFrame_virtualbase_PaintEngine(const void* self);
bool QFrame_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QFrame_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QFrame_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QFrame_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QFrame_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QFrame_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QFrame_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QFrame_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QFrame_override_virtual_WheelEvent(void* self, intptr_t slot);
void QFrame_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QFrame_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QFrame_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QFrame_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QFrame_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QFrame_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QFrame_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QFrame_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QFrame_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QFrame_override_virtual_EnterEvent(void* self, intptr_t slot);
void QFrame_virtualbase_EnterEvent(void* self, QEvent* event);
bool QFrame_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QFrame_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QFrame_override_virtual_MoveEvent(void* self, intptr_t slot);
void QFrame_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QFrame_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QFrame_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QFrame_override_virtual_CloseEvent(void* self, intptr_t slot);
void QFrame_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QFrame_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QFrame_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QFrame_override_virtual_TabletEvent(void* self, intptr_t slot);
void QFrame_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QFrame_override_virtual_ActionEvent(void* self, intptr_t slot);
void QFrame_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QFrame_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QFrame_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QFrame_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QFrame_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QFrame_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QFrame_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QFrame_override_virtual_DropEvent(void* self, intptr_t slot);
void QFrame_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QFrame_override_virtual_ShowEvent(void* self, intptr_t slot);
void QFrame_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QFrame_override_virtual_HideEvent(void* self, intptr_t slot);
void QFrame_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QFrame_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QFrame_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QFrame_override_virtual_Metric(void* self, intptr_t slot);
int QFrame_virtualbase_Metric(const void* self, int param1);
bool QFrame_override_virtual_InitPainter(void* self, intptr_t slot);
void QFrame_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QFrame_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QFrame_virtualbase_Redirected(const void* self, QPoint* offset);
bool QFrame_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QFrame_virtualbase_SharedPainter(const void* self);
bool QFrame_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QFrame_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QFrame_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QFrame_virtualbase_InputMethodQuery(const void* self, int param1);
bool QFrame_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QFrame_virtualbase_FocusNextPrevChild(void* self, bool next);
void QFrame_Delete(QFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
