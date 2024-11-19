#pragma once
#ifndef MIQT_QT_GEN_QDESKTOPWIDGET_H
#define MIQT_QT_GEN_QDESKTOPWIDGET_H

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
class QByteArray;
class QCloseEvent;
class QContextMenuEvent;
class QDesktopWidget;
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
typedef struct QByteArray QByteArray;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDesktopWidget QDesktopWidget;
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
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

void QDesktopWidget_new(QDesktopWidget** outptr_QDesktopWidget, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QDesktopWidget_MetaObject(const QDesktopWidget* self);
void* QDesktopWidget_Metacast(QDesktopWidget* self, const char* param1);
struct miqt_string QDesktopWidget_Tr(const char* s);
struct miqt_string QDesktopWidget_TrUtf8(const char* s);
int QDesktopWidget_ScreenNumber(const QDesktopWidget* self);
QRect* QDesktopWidget_ScreenGeometry(const QDesktopWidget* self, QWidget* widget);
QRect* QDesktopWidget_AvailableGeometry(const QDesktopWidget* self, QWidget* widget);
bool QDesktopWidget_IsVirtualDesktop(const QDesktopWidget* self);
int QDesktopWidget_NumScreens(const QDesktopWidget* self);
int QDesktopWidget_ScreenCount(const QDesktopWidget* self);
int QDesktopWidget_PrimaryScreen(const QDesktopWidget* self);
int QDesktopWidget_ScreenNumberWithQPoint(const QDesktopWidget* self, QPoint* param1);
QWidget* QDesktopWidget_Screen(QDesktopWidget* self);
QRect* QDesktopWidget_ScreenGeometry2(const QDesktopWidget* self);
QRect* QDesktopWidget_ScreenGeometryWithPoint(const QDesktopWidget* self, QPoint* point);
QRect* QDesktopWidget_AvailableGeometry2(const QDesktopWidget* self);
QRect* QDesktopWidget_AvailableGeometryWithPoint(const QDesktopWidget* self, QPoint* point);
void QDesktopWidget_Resized(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_Resized(QDesktopWidget* self, intptr_t slot);
void QDesktopWidget_WorkAreaResized(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_WorkAreaResized(QDesktopWidget* self, intptr_t slot);
void QDesktopWidget_ScreenCountChanged(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_ScreenCountChanged(QDesktopWidget* self, intptr_t slot);
void QDesktopWidget_PrimaryScreenChanged(QDesktopWidget* self);
void QDesktopWidget_connect_PrimaryScreenChanged(QDesktopWidget* self, intptr_t slot);
void QDesktopWidget_ResizeEvent(QDesktopWidget* self, QResizeEvent* e);
struct miqt_string QDesktopWidget_Tr2(const char* s, const char* c);
struct miqt_string QDesktopWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QDesktopWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QDesktopWidget_TrUtf83(const char* s, const char* c, int n);
int QDesktopWidget_ScreenNumber1(const QDesktopWidget* self, QWidget* widget);
QWidget* QDesktopWidget_Screen1(QDesktopWidget* self, int screen);
QRect* QDesktopWidget_ScreenGeometry1(const QDesktopWidget* self, int screen);
QRect* QDesktopWidget_AvailableGeometry1(const QDesktopWidget* self, int screen);
void QDesktopWidget_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* e);
void QDesktopWidget_override_virtual_DevType(void* self, intptr_t slot);
int QDesktopWidget_virtualbase_DevType(const void* self);
void QDesktopWidget_override_virtual_SetVisible(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_SetVisible(void* self, bool visible);
void QDesktopWidget_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QDesktopWidget_virtualbase_SizeHint(const void* self);
void QDesktopWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QDesktopWidget_virtualbase_MinimumSizeHint(const void* self);
void QDesktopWidget_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QDesktopWidget_virtualbase_HeightForWidth(const void* self, int param1);
void QDesktopWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QDesktopWidget_virtualbase_HasHeightForWidth(const void* self);
void QDesktopWidget_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QDesktopWidget_virtualbase_PaintEngine(const void* self);
void QDesktopWidget_override_virtual_Event(void* self, intptr_t slot);
bool QDesktopWidget_virtualbase_Event(void* self, QEvent* event);
void QDesktopWidget_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QDesktopWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QDesktopWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QDesktopWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QDesktopWidget_override_virtual_WheelEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QDesktopWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QDesktopWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QDesktopWidget_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QDesktopWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QDesktopWidget_override_virtual_EnterEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_EnterEvent(void* self, QEvent* event);
void QDesktopWidget_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_LeaveEvent(void* self, QEvent* event);
void QDesktopWidget_override_virtual_PaintEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QDesktopWidget_override_virtual_MoveEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QDesktopWidget_override_virtual_CloseEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QDesktopWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QDesktopWidget_override_virtual_TabletEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QDesktopWidget_override_virtual_ActionEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QDesktopWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QDesktopWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QDesktopWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QDesktopWidget_override_virtual_DropEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_DropEvent(void* self, QDropEvent* event);
void QDesktopWidget_override_virtual_ShowEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QDesktopWidget_override_virtual_HideEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_HideEvent(void* self, QHideEvent* event);
void QDesktopWidget_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QDesktopWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
void QDesktopWidget_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QDesktopWidget_override_virtual_Metric(void* self, intptr_t slot);
int QDesktopWidget_virtualbase_Metric(const void* self, int param1);
void QDesktopWidget_override_virtual_InitPainter(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_InitPainter(const void* self, QPainter* painter);
void QDesktopWidget_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QDesktopWidget_virtualbase_Redirected(const void* self, QPoint* offset);
void QDesktopWidget_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QDesktopWidget_virtualbase_SharedPainter(const void* self);
void QDesktopWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QDesktopWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QDesktopWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QDesktopWidget_virtualbase_InputMethodQuery(const void* self, int param1);
void QDesktopWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QDesktopWidget_virtualbase_FocusNextPrevChild(void* self, bool next);
void QDesktopWidget_Delete(QDesktopWidget* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
