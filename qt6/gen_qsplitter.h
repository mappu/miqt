#pragma once
#ifndef MIQT_QT6_GEN_QSPLITTER_H
#define MIQT_QT6_GEN_QSPLITTER_H

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
class QResizeEvent;
class QShowEvent;
class QSize;
class QSplitter;
class QSplitterHandle;
class QStyleOptionFrame;
class QTabletEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSplitter QSplitter;
typedef struct QSplitterHandle QSplitterHandle;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QSplitter* QSplitter_new(QWidget* parent);
QSplitter* QSplitter_new2();
QSplitter* QSplitter_new3(int param1);
QSplitter* QSplitter_new4(int param1, QWidget* parent);
void QSplitter_virtbase(QSplitter* src, QFrame** outptr_QFrame);
QMetaObject* QSplitter_MetaObject(const QSplitter* self);
void* QSplitter_Metacast(QSplitter* self, const char* param1);
struct miqt_string QSplitter_Tr(const char* s);
void QSplitter_AddWidget(QSplitter* self, QWidget* widget);
void QSplitter_InsertWidget(QSplitter* self, int index, QWidget* widget);
QWidget* QSplitter_ReplaceWidget(QSplitter* self, int index, QWidget* widget);
void QSplitter_SetOrientation(QSplitter* self, int orientation);
int QSplitter_Orientation(const QSplitter* self);
void QSplitter_SetChildrenCollapsible(QSplitter* self, bool childrenCollapsible);
bool QSplitter_ChildrenCollapsible(const QSplitter* self);
void QSplitter_SetCollapsible(QSplitter* self, int index, bool param2);
bool QSplitter_IsCollapsible(const QSplitter* self, int index);
void QSplitter_SetOpaqueResize(QSplitter* self);
bool QSplitter_OpaqueResize(const QSplitter* self);
void QSplitter_Refresh(QSplitter* self);
QSize* QSplitter_SizeHint(const QSplitter* self);
QSize* QSplitter_MinimumSizeHint(const QSplitter* self);
struct miqt_array /* of int */  QSplitter_Sizes(const QSplitter* self);
void QSplitter_SetSizes(QSplitter* self, struct miqt_array /* of int */  list);
struct miqt_string QSplitter_SaveState(const QSplitter* self);
bool QSplitter_RestoreState(QSplitter* self, struct miqt_string state);
int QSplitter_HandleWidth(const QSplitter* self);
void QSplitter_SetHandleWidth(QSplitter* self, int handleWidth);
int QSplitter_IndexOf(const QSplitter* self, QWidget* w);
QWidget* QSplitter_Widget(const QSplitter* self, int index);
int QSplitter_Count(const QSplitter* self);
void QSplitter_GetRange(const QSplitter* self, int index, int* param2, int* param3);
QSplitterHandle* QSplitter_Handle(const QSplitter* self, int index);
void QSplitter_SetStretchFactor(QSplitter* self, int index, int stretch);
void QSplitter_SplitterMoved(QSplitter* self, int pos, int index);
void QSplitter_connect_SplitterMoved(QSplitter* self, intptr_t slot);
QSplitterHandle* QSplitter_CreateHandle(QSplitter* self);
void QSplitter_ChildEvent(QSplitter* self, QChildEvent* param1);
bool QSplitter_Event(QSplitter* self, QEvent* param1);
void QSplitter_ResizeEvent(QSplitter* self, QResizeEvent* param1);
void QSplitter_ChangeEvent(QSplitter* self, QEvent* param1);
struct miqt_string QSplitter_Tr2(const char* s, const char* c);
struct miqt_string QSplitter_Tr3(const char* s, const char* c, int n);
void QSplitter_SetOpaqueResize1(QSplitter* self, bool opaque);
void QSplitter_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QSplitter_virtualbase_SizeHint(const void* self);
void QSplitter_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QSplitter_virtualbase_MinimumSizeHint(const void* self);
void QSplitter_override_virtual_CreateHandle(void* self, intptr_t slot);
QSplitterHandle* QSplitter_virtualbase_CreateHandle(void* self);
void QSplitter_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSplitter_virtualbase_ChildEvent(void* self, QChildEvent* param1);
void QSplitter_override_virtual_Event(void* self, intptr_t slot);
bool QSplitter_virtualbase_Event(void* self, QEvent* param1);
void QSplitter_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QSplitter_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QSplitter_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QSplitter_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QSplitter_override_virtual_PaintEvent(void* self, intptr_t slot);
void QSplitter_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QSplitter_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QSplitter_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option);
void QSplitter_Delete(QSplitter* self);

QSplitterHandle* QSplitterHandle_new(int o, QSplitter* parent);
void QSplitterHandle_virtbase(QSplitterHandle* src, QWidget** outptr_QWidget);
QMetaObject* QSplitterHandle_MetaObject(const QSplitterHandle* self);
void* QSplitterHandle_Metacast(QSplitterHandle* self, const char* param1);
struct miqt_string QSplitterHandle_Tr(const char* s);
void QSplitterHandle_SetOrientation(QSplitterHandle* self, int o);
int QSplitterHandle_Orientation(const QSplitterHandle* self);
bool QSplitterHandle_OpaqueResize(const QSplitterHandle* self);
QSplitter* QSplitterHandle_Splitter(const QSplitterHandle* self);
QSize* QSplitterHandle_SizeHint(const QSplitterHandle* self);
void QSplitterHandle_PaintEvent(QSplitterHandle* self, QPaintEvent* param1);
void QSplitterHandle_MouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1);
void QSplitterHandle_MousePressEvent(QSplitterHandle* self, QMouseEvent* param1);
void QSplitterHandle_MouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1);
void QSplitterHandle_ResizeEvent(QSplitterHandle* self, QResizeEvent* param1);
bool QSplitterHandle_Event(QSplitterHandle* self, QEvent* param1);
struct miqt_string QSplitterHandle_Tr2(const char* s, const char* c);
struct miqt_string QSplitterHandle_Tr3(const char* s, const char* c, int n);
void QSplitterHandle_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QSplitterHandle_virtualbase_SizeHint(const void* self);
void QSplitterHandle_override_virtual_PaintEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QSplitterHandle_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QSplitterHandle_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QSplitterHandle_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
void QSplitterHandle_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QSplitterHandle_override_virtual_Event(void* self, intptr_t slot);
bool QSplitterHandle_virtualbase_Event(void* self, QEvent* param1);
void QSplitterHandle_override_virtual_DevType(void* self, intptr_t slot);
int QSplitterHandle_virtualbase_DevType(const void* self);
void QSplitterHandle_override_virtual_SetVisible(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_SetVisible(void* self, bool visible);
void QSplitterHandle_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QSplitterHandle_virtualbase_MinimumSizeHint(const void* self);
void QSplitterHandle_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QSplitterHandle_virtualbase_HeightForWidth(const void* self, int param1);
void QSplitterHandle_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QSplitterHandle_virtualbase_HasHeightForWidth(const void* self);
void QSplitterHandle_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QSplitterHandle_virtualbase_PaintEngine(const void* self);
void QSplitterHandle_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QSplitterHandle_override_virtual_WheelEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QSplitterHandle_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QSplitterHandle_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QSplitterHandle_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QSplitterHandle_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QSplitterHandle_override_virtual_EnterEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_EnterEvent(void* self, QEnterEvent* event);
void QSplitterHandle_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_LeaveEvent(void* self, QEvent* event);
void QSplitterHandle_override_virtual_MoveEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QSplitterHandle_override_virtual_CloseEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QSplitterHandle_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QSplitterHandle_override_virtual_TabletEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QSplitterHandle_override_virtual_ActionEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QSplitterHandle_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QSplitterHandle_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QSplitterHandle_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QSplitterHandle_override_virtual_DropEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_DropEvent(void* self, QDropEvent* event);
void QSplitterHandle_override_virtual_ShowEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QSplitterHandle_override_virtual_HideEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_HideEvent(void* self, QHideEvent* event);
void QSplitterHandle_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QSplitterHandle_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
void QSplitterHandle_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QSplitterHandle_override_virtual_Metric(void* self, intptr_t slot);
int QSplitterHandle_virtualbase_Metric(const void* self, int param1);
void QSplitterHandle_override_virtual_InitPainter(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_InitPainter(const void* self, QPainter* painter);
void QSplitterHandle_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QSplitterHandle_virtualbase_Redirected(const void* self, QPoint* offset);
void QSplitterHandle_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QSplitterHandle_virtualbase_SharedPainter(const void* self);
void QSplitterHandle_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QSplitterHandle_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QSplitterHandle_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QSplitterHandle_virtualbase_InputMethodQuery(const void* self, int param1);
void QSplitterHandle_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QSplitterHandle_virtualbase_FocusNextPrevChild(void* self, bool next);
void QSplitterHandle_Delete(QSplitterHandle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
