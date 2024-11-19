#pragma once
#ifndef MIQT_QT6_GEN_QSTATUSBAR_H
#define MIQT_QT6_GEN_QSTATUSBAR_H

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
class QStatusBar;
class QTabletEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QByteArray QByteArray;
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
typedef struct QStatusBar QStatusBar;
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

void QStatusBar_new(QWidget* parent, QStatusBar** outptr_QStatusBar, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QStatusBar_new2(QStatusBar** outptr_QStatusBar, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QStatusBar_MetaObject(const QStatusBar* self);
void* QStatusBar_Metacast(QStatusBar* self, const char* param1);
struct miqt_string QStatusBar_Tr(const char* s);
void QStatusBar_AddWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_InsertWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_AddPermanentWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_InsertPermanentWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_RemoveWidget(QStatusBar* self, QWidget* widget);
void QStatusBar_SetSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled);
bool QStatusBar_IsSizeGripEnabled(const QStatusBar* self);
struct miqt_string QStatusBar_CurrentMessage(const QStatusBar* self);
void QStatusBar_ShowMessage(QStatusBar* self, struct miqt_string text);
void QStatusBar_ClearMessage(QStatusBar* self);
void QStatusBar_MessageChanged(QStatusBar* self, struct miqt_string text);
void QStatusBar_connect_MessageChanged(QStatusBar* self, intptr_t slot);
void QStatusBar_ShowEvent(QStatusBar* self, QShowEvent* param1);
void QStatusBar_PaintEvent(QStatusBar* self, QPaintEvent* param1);
void QStatusBar_ResizeEvent(QStatusBar* self, QResizeEvent* param1);
bool QStatusBar_Event(QStatusBar* self, QEvent* param1);
struct miqt_string QStatusBar_Tr2(const char* s, const char* c);
struct miqt_string QStatusBar_Tr3(const char* s, const char* c, int n);
void QStatusBar_AddWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_InsertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_AddPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_InsertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_ShowMessage2(QStatusBar* self, struct miqt_string text, int timeout);
void QStatusBar_override_virtual_ShowEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QStatusBar_override_virtual_PaintEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QStatusBar_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QStatusBar_override_virtual_Event(void* self, intptr_t slot);
bool QStatusBar_virtualbase_Event(void* self, QEvent* param1);
void QStatusBar_override_virtual_DevType(void* self, intptr_t slot);
int QStatusBar_virtualbase_DevType(const void* self);
void QStatusBar_override_virtual_SetVisible(void* self, intptr_t slot);
void QStatusBar_virtualbase_SetVisible(void* self, bool visible);
void QStatusBar_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QStatusBar_virtualbase_SizeHint(const void* self);
void QStatusBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QStatusBar_virtualbase_MinimumSizeHint(const void* self);
void QStatusBar_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QStatusBar_virtualbase_HeightForWidth(const void* self, int param1);
void QStatusBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QStatusBar_virtualbase_HasHeightForWidth(const void* self);
void QStatusBar_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QStatusBar_virtualbase_PaintEngine(const void* self);
void QStatusBar_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QStatusBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QStatusBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QStatusBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QStatusBar_override_virtual_WheelEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QStatusBar_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QStatusBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QStatusBar_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QStatusBar_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QStatusBar_override_virtual_EnterEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_EnterEvent(void* self, QEnterEvent* event);
void QStatusBar_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_LeaveEvent(void* self, QEvent* event);
void QStatusBar_override_virtual_MoveEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QStatusBar_override_virtual_CloseEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QStatusBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QStatusBar_override_virtual_TabletEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QStatusBar_override_virtual_ActionEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QStatusBar_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QStatusBar_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QStatusBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QStatusBar_override_virtual_DropEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_DropEvent(void* self, QDropEvent* event);
void QStatusBar_override_virtual_HideEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_HideEvent(void* self, QHideEvent* event);
void QStatusBar_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QStatusBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
void QStatusBar_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QStatusBar_override_virtual_Metric(void* self, intptr_t slot);
int QStatusBar_virtualbase_Metric(const void* self, int param1);
void QStatusBar_override_virtual_InitPainter(void* self, intptr_t slot);
void QStatusBar_virtualbase_InitPainter(const void* self, QPainter* painter);
void QStatusBar_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QStatusBar_virtualbase_Redirected(const void* self, QPoint* offset);
void QStatusBar_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QStatusBar_virtualbase_SharedPainter(const void* self);
void QStatusBar_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QStatusBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QStatusBar_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QStatusBar_virtualbase_InputMethodQuery(const void* self, int param1);
void QStatusBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QStatusBar_virtualbase_FocusNextPrevChild(void* self, bool next);
void QStatusBar_Delete(QStatusBar* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
