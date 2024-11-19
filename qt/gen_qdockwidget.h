#pragma once
#ifndef MIQT_QT_GEN_QDOCKWIDGET_H
#define MIQT_QT_GEN_QDOCKWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QActionEvent;
class QByteArray;
class QCloseEvent;
class QContextMenuEvent;
class QDockWidget;
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
class QTabletEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QByteArray QByteArray;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDockWidget QDockWidget;
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
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

void QDockWidget_new(QWidget* parent, QDockWidget** outptr_QDockWidget, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QDockWidget_new2(struct miqt_string title, QDockWidget** outptr_QDockWidget, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QDockWidget_new3(QDockWidget** outptr_QDockWidget, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QDockWidget_new4(struct miqt_string title, QWidget* parent, QDockWidget** outptr_QDockWidget, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QDockWidget_new5(struct miqt_string title, QWidget* parent, int flags, QDockWidget** outptr_QDockWidget, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QDockWidget_new6(QWidget* parent, int flags, QDockWidget** outptr_QDockWidget, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QDockWidget_MetaObject(const QDockWidget* self);
void* QDockWidget_Metacast(QDockWidget* self, const char* param1);
struct miqt_string QDockWidget_Tr(const char* s);
struct miqt_string QDockWidget_TrUtf8(const char* s);
QWidget* QDockWidget_Widget(const QDockWidget* self);
void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget);
void QDockWidget_SetFeatures(QDockWidget* self, int features);
int QDockWidget_Features(const QDockWidget* self);
void QDockWidget_SetFloating(QDockWidget* self, bool floating);
bool QDockWidget_IsFloating(const QDockWidget* self);
void QDockWidget_SetAllowedAreas(QDockWidget* self, int areas);
int QDockWidget_AllowedAreas(const QDockWidget* self);
void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget);
QWidget* QDockWidget_TitleBarWidget(const QDockWidget* self);
bool QDockWidget_IsAreaAllowed(const QDockWidget* self, int area);
QAction* QDockWidget_ToggleViewAction(const QDockWidget* self);
void QDockWidget_FeaturesChanged(QDockWidget* self, int features);
void QDockWidget_connect_FeaturesChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel);
void QDockWidget_connect_TopLevelChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas);
void QDockWidget_connect_AllowedAreasChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible);
void QDockWidget_connect_VisibilityChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_DockLocationChanged(QDockWidget* self, int area);
void QDockWidget_connect_DockLocationChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_ChangeEvent(QDockWidget* self, QEvent* event);
void QDockWidget_CloseEvent(QDockWidget* self, QCloseEvent* event);
void QDockWidget_PaintEvent(QDockWidget* self, QPaintEvent* event);
bool QDockWidget_Event(QDockWidget* self, QEvent* event);
struct miqt_string QDockWidget_Tr2(const char* s, const char* c);
struct miqt_string QDockWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QDockWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QDockWidget_TrUtf83(const char* s, const char* c, int n);
void QDockWidget_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_ChangeEvent(void* self, QEvent* event);
void QDockWidget_override_virtual_CloseEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QDockWidget_override_virtual_PaintEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QDockWidget_override_virtual_Event(void* self, intptr_t slot);
bool QDockWidget_virtualbase_Event(void* self, QEvent* event);
void QDockWidget_override_virtual_DevType(void* self, intptr_t slot);
int QDockWidget_virtualbase_DevType(const void* self);
void QDockWidget_override_virtual_SetVisible(void* self, intptr_t slot);
void QDockWidget_virtualbase_SetVisible(void* self, bool visible);
void QDockWidget_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QDockWidget_virtualbase_SizeHint(const void* self);
void QDockWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QDockWidget_virtualbase_MinimumSizeHint(const void* self);
void QDockWidget_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QDockWidget_virtualbase_HeightForWidth(const void* self, int param1);
void QDockWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QDockWidget_virtualbase_HasHeightForWidth(const void* self);
void QDockWidget_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QDockWidget_virtualbase_PaintEngine(const void* self);
void QDockWidget_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QDockWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QDockWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QDockWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QDockWidget_override_virtual_WheelEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QDockWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QDockWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QDockWidget_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QDockWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QDockWidget_override_virtual_EnterEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_EnterEvent(void* self, QEvent* event);
void QDockWidget_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_LeaveEvent(void* self, QEvent* event);
void QDockWidget_override_virtual_MoveEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QDockWidget_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QDockWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QDockWidget_override_virtual_TabletEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QDockWidget_override_virtual_ActionEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QDockWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QDockWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QDockWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QDockWidget_override_virtual_DropEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_DropEvent(void* self, QDropEvent* event);
void QDockWidget_override_virtual_ShowEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QDockWidget_override_virtual_HideEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_HideEvent(void* self, QHideEvent* event);
void QDockWidget_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QDockWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
void QDockWidget_override_virtual_Metric(void* self, intptr_t slot);
int QDockWidget_virtualbase_Metric(const void* self, int param1);
void QDockWidget_override_virtual_InitPainter(void* self, intptr_t slot);
void QDockWidget_virtualbase_InitPainter(const void* self, QPainter* painter);
void QDockWidget_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QDockWidget_virtualbase_Redirected(const void* self, QPoint* offset);
void QDockWidget_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QDockWidget_virtualbase_SharedPainter(const void* self);
void QDockWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QDockWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QDockWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QDockWidget_virtualbase_InputMethodQuery(const void* self, int param1);
void QDockWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QDockWidget_virtualbase_FocusNextPrevChild(void* self, bool next);
void QDockWidget_Delete(QDockWidget* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
