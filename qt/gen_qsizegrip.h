#pragma once
#ifndef MIQT_QT_GEN_QSIZEGRIP_H
#define MIQT_QT_GEN_QSIZEGRIP_H

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
class QSizeGrip;
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
typedef struct QSizeGrip QSizeGrip;
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

void QSizeGrip_new(QWidget* parent, QSizeGrip** outptr_QSizeGrip, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QSizeGrip_MetaObject(const QSizeGrip* self);
void* QSizeGrip_Metacast(QSizeGrip* self, const char* param1);
struct miqt_string QSizeGrip_Tr(const char* s);
struct miqt_string QSizeGrip_TrUtf8(const char* s);
QSize* QSizeGrip_SizeHint(const QSizeGrip* self);
void QSizeGrip_SetVisible(QSizeGrip* self, bool visible);
void QSizeGrip_PaintEvent(QSizeGrip* self, QPaintEvent* param1);
void QSizeGrip_MousePressEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_MouseMoveEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_MouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent);
void QSizeGrip_MoveEvent(QSizeGrip* self, QMoveEvent* moveEvent);
void QSizeGrip_ShowEvent(QSizeGrip* self, QShowEvent* showEvent);
void QSizeGrip_HideEvent(QSizeGrip* self, QHideEvent* hideEvent);
bool QSizeGrip_EventFilter(QSizeGrip* self, QObject* param1, QEvent* param2);
bool QSizeGrip_Event(QSizeGrip* self, QEvent* param1);
struct miqt_string QSizeGrip_Tr2(const char* s, const char* c);
struct miqt_string QSizeGrip_Tr3(const char* s, const char* c, int n);
struct miqt_string QSizeGrip_TrUtf82(const char* s, const char* c);
struct miqt_string QSizeGrip_TrUtf83(const char* s, const char* c, int n);
void QSizeGrip_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QSizeGrip_virtualbase_SizeHint(const void* self);
void QSizeGrip_override_virtual_SetVisible(void* self, intptr_t slot);
void QSizeGrip_virtualbase_SetVisible(void* self, bool visible);
void QSizeGrip_override_virtual_PaintEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QSizeGrip_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QSizeGrip_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QSizeGrip_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* mouseEvent);
void QSizeGrip_override_virtual_MoveEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_MoveEvent(void* self, QMoveEvent* moveEvent);
void QSizeGrip_override_virtual_ShowEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_ShowEvent(void* self, QShowEvent* showEvent);
void QSizeGrip_override_virtual_HideEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_HideEvent(void* self, QHideEvent* hideEvent);
void QSizeGrip_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSizeGrip_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
void QSizeGrip_override_virtual_Event(void* self, intptr_t slot);
bool QSizeGrip_virtualbase_Event(void* self, QEvent* param1);
void QSizeGrip_override_virtual_DevType(void* self, intptr_t slot);
int QSizeGrip_virtualbase_DevType(const void* self);
void QSizeGrip_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QSizeGrip_virtualbase_MinimumSizeHint(const void* self);
void QSizeGrip_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QSizeGrip_virtualbase_HeightForWidth(const void* self, int param1);
void QSizeGrip_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QSizeGrip_virtualbase_HasHeightForWidth(const void* self);
void QSizeGrip_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QSizeGrip_virtualbase_PaintEngine(const void* self);
void QSizeGrip_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QSizeGrip_override_virtual_WheelEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QSizeGrip_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QSizeGrip_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QSizeGrip_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QSizeGrip_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QSizeGrip_override_virtual_EnterEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_EnterEvent(void* self, QEvent* event);
void QSizeGrip_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_LeaveEvent(void* self, QEvent* event);
void QSizeGrip_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QSizeGrip_override_virtual_CloseEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QSizeGrip_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QSizeGrip_override_virtual_TabletEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QSizeGrip_override_virtual_ActionEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QSizeGrip_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QSizeGrip_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QSizeGrip_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QSizeGrip_override_virtual_DropEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_DropEvent(void* self, QDropEvent* event);
void QSizeGrip_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QSizeGrip_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
void QSizeGrip_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QSizeGrip_override_virtual_Metric(void* self, intptr_t slot);
int QSizeGrip_virtualbase_Metric(const void* self, int param1);
void QSizeGrip_override_virtual_InitPainter(void* self, intptr_t slot);
void QSizeGrip_virtualbase_InitPainter(const void* self, QPainter* painter);
void QSizeGrip_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QSizeGrip_virtualbase_Redirected(const void* self, QPoint* offset);
void QSizeGrip_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QSizeGrip_virtualbase_SharedPainter(const void* self);
void QSizeGrip_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QSizeGrip_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QSizeGrip_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QSizeGrip_virtualbase_InputMethodQuery(const void* self, int param1);
void QSizeGrip_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QSizeGrip_virtualbase_FocusNextPrevChild(void* self, bool next);
void QSizeGrip_Delete(QSizeGrip* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
