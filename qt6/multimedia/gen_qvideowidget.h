#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QVIDEOWIDGET_H
#define MIQT_QT6_MULTIMEDIA_GEN_QVIDEOWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

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
class QVariant;
class QVideoSink;
class QVideoWidget;
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
typedef struct QVariant QVariant;
typedef struct QVideoSink QVideoSink;
typedef struct QVideoWidget QVideoWidget;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QVideoWidget* QVideoWidget_new(QWidget* parent);
QVideoWidget* QVideoWidget_new2();
void QVideoWidget_virtbase(QVideoWidget* src, QWidget** outptr_QWidget);
QMetaObject* QVideoWidget_MetaObject(const QVideoWidget* self);
void* QVideoWidget_Metacast(QVideoWidget* self, const char* param1);
struct miqt_string QVideoWidget_Tr(const char* s);
QVideoSink* QVideoWidget_VideoSink(const QVideoWidget* self);
int QVideoWidget_AspectRatioMode(const QVideoWidget* self);
QSize* QVideoWidget_SizeHint(const QVideoWidget* self);
void QVideoWidget_SetFullScreen(QVideoWidget* self, bool fullScreen);
void QVideoWidget_SetAspectRatioMode(QVideoWidget* self, int mode);
void QVideoWidget_FullScreenChanged(QVideoWidget* self, bool fullScreen);
void QVideoWidget_connect_FullScreenChanged(QVideoWidget* self, intptr_t slot);
void QVideoWidget_AspectRatioModeChanged(QVideoWidget* self, int mode);
void QVideoWidget_connect_AspectRatioModeChanged(QVideoWidget* self, intptr_t slot);
bool QVideoWidget_Event(QVideoWidget* self, QEvent* event);
void QVideoWidget_ShowEvent(QVideoWidget* self, QShowEvent* event);
void QVideoWidget_HideEvent(QVideoWidget* self, QHideEvent* event);
void QVideoWidget_ResizeEvent(QVideoWidget* self, QResizeEvent* event);
void QVideoWidget_MoveEvent(QVideoWidget* self, QMoveEvent* event);
struct miqt_string QVideoWidget_Tr2(const char* s, const char* c);
struct miqt_string QVideoWidget_Tr3(const char* s, const char* c, int n);
void QVideoWidget_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QVideoWidget_virtualbase_SizeHint(const void* self);
void QVideoWidget_override_virtual_Event(void* self, intptr_t slot);
bool QVideoWidget_virtualbase_Event(void* self, QEvent* event);
void QVideoWidget_override_virtual_ShowEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QVideoWidget_override_virtual_HideEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_HideEvent(void* self, QHideEvent* event);
void QVideoWidget_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QVideoWidget_override_virtual_MoveEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QVideoWidget_override_virtual_DevType(void* self, intptr_t slot);
int QVideoWidget_virtualbase_DevType(const void* self);
void QVideoWidget_override_virtual_SetVisible(void* self, intptr_t slot);
void QVideoWidget_virtualbase_SetVisible(void* self, bool visible);
void QVideoWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QVideoWidget_virtualbase_MinimumSizeHint(const void* self);
void QVideoWidget_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QVideoWidget_virtualbase_HeightForWidth(const void* self, int param1);
void QVideoWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QVideoWidget_virtualbase_HasHeightForWidth(const void* self);
void QVideoWidget_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QVideoWidget_virtualbase_PaintEngine(const void* self);
void QVideoWidget_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QVideoWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QVideoWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QVideoWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QVideoWidget_override_virtual_WheelEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QVideoWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QVideoWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QVideoWidget_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QVideoWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QVideoWidget_override_virtual_EnterEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_EnterEvent(void* self, QEnterEvent* event);
void QVideoWidget_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_LeaveEvent(void* self, QEvent* event);
void QVideoWidget_override_virtual_PaintEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QVideoWidget_override_virtual_CloseEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QVideoWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QVideoWidget_override_virtual_TabletEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QVideoWidget_override_virtual_ActionEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QVideoWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QVideoWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QVideoWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QVideoWidget_override_virtual_DropEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_DropEvent(void* self, QDropEvent* event);
void QVideoWidget_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QVideoWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
void QVideoWidget_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QVideoWidget_override_virtual_Metric(void* self, intptr_t slot);
int QVideoWidget_virtualbase_Metric(const void* self, int param1);
void QVideoWidget_override_virtual_InitPainter(void* self, intptr_t slot);
void QVideoWidget_virtualbase_InitPainter(const void* self, QPainter* painter);
void QVideoWidget_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QVideoWidget_virtualbase_Redirected(const void* self, QPoint* offset);
void QVideoWidget_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QVideoWidget_virtualbase_SharedPainter(const void* self);
void QVideoWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QVideoWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QVideoWidget_virtualbase_InputMethodQuery(const void* self, int param1);
void QVideoWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QVideoWidget_virtualbase_FocusNextPrevChild(void* self, bool next);
void QVideoWidget_Delete(QVideoWidget* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
