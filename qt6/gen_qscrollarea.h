#pragma once
#ifndef MIQT_QT6_GEN_QSCROLLAREA_H
#define MIQT_QT6_GEN_QSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFrame;
class QKeyEvent;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QResizeEvent;
class QScrollArea;
class QSize;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFrame QFrame;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScrollArea QScrollArea;
typedef struct QSize QSize;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QScrollArea* QScrollArea_new(QWidget* parent);
QScrollArea* QScrollArea_new2();
void QScrollArea_virtbase(QScrollArea* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QScrollArea_MetaObject(const QScrollArea* self);
void* QScrollArea_Metacast(QScrollArea* self, const char* param1);
struct miqt_string QScrollArea_Tr(const char* s);
QWidget* QScrollArea_Widget(const QScrollArea* self);
void QScrollArea_SetWidget(QScrollArea* self, QWidget* widget);
QWidget* QScrollArea_TakeWidget(QScrollArea* self);
bool QScrollArea_WidgetResizable(const QScrollArea* self);
void QScrollArea_SetWidgetResizable(QScrollArea* self, bool resizable);
QSize* QScrollArea_SizeHint(const QScrollArea* self);
bool QScrollArea_FocusNextPrevChild(QScrollArea* self, bool next);
int QScrollArea_Alignment(const QScrollArea* self);
void QScrollArea_SetAlignment(QScrollArea* self, int alignment);
void QScrollArea_EnsureVisible(QScrollArea* self, int x, int y);
void QScrollArea_EnsureWidgetVisible(QScrollArea* self, QWidget* childWidget);
bool QScrollArea_Event(QScrollArea* self, QEvent* param1);
bool QScrollArea_EventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
void QScrollArea_ResizeEvent(QScrollArea* self, QResizeEvent* param1);
void QScrollArea_ScrollContentsBy(QScrollArea* self, int dx, int dy);
QSize* QScrollArea_ViewportSizeHint(const QScrollArea* self);
struct miqt_string QScrollArea_Tr2(const char* s, const char* c);
struct miqt_string QScrollArea_Tr3(const char* s, const char* c, int n);
void QScrollArea_EnsureVisible3(QScrollArea* self, int x, int y, int xmargin);
void QScrollArea_EnsureVisible4(QScrollArea* self, int x, int y, int xmargin, int ymargin);
void QScrollArea_EnsureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin);
void QScrollArea_EnsureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin);
void QScrollArea_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QScrollArea_virtualbase_SizeHint(const void* self);
void QScrollArea_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QScrollArea_virtualbase_FocusNextPrevChild(void* self, bool next);
void QScrollArea_override_virtual_Event(void* self, intptr_t slot);
bool QScrollArea_virtualbase_Event(void* self, QEvent* param1);
void QScrollArea_override_virtual_EventFilter(void* self, intptr_t slot);
bool QScrollArea_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
void QScrollArea_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QScrollArea_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QScrollArea_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
void QScrollArea_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QScrollArea_virtualbase_ViewportSizeHint(const void* self);
void QScrollArea_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QScrollArea_virtualbase_MinimumSizeHint(const void* self);
void QScrollArea_override_virtual_SetupViewport(void* self, intptr_t slot);
void QScrollArea_virtualbase_SetupViewport(void* self, QWidget* viewport);
void QScrollArea_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QScrollArea_virtualbase_ViewportEvent(void* self, QEvent* param1);
void QScrollArea_override_virtual_PaintEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QScrollArea_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QScrollArea_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
void QScrollArea_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1);
void QScrollArea_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QScrollArea_override_virtual_WheelEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
void QScrollArea_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QScrollArea_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1);
void QScrollArea_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* param1);
void QScrollArea_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* param1);
void QScrollArea_override_virtual_DropEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_DropEvent(void* self, QDropEvent* param1);
void QScrollArea_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QScrollArea_Delete(QScrollArea* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
