#pragma once
#ifndef MIQT_QT_GEN_QABSTRACTSCROLLAREA_H
#define MIQT_QT_GEN_QABSTRACTSCROLLAREA_H

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
class QScrollBar;
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
typedef struct QScrollBar QScrollBar;
typedef struct QSize QSize;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QAbstractScrollArea* QAbstractScrollArea_new(QWidget* parent);
QAbstractScrollArea* QAbstractScrollArea_new2();
void QAbstractScrollArea_virtbase(QAbstractScrollArea* src, QFrame** outptr_QFrame);
QMetaObject* QAbstractScrollArea_MetaObject(const QAbstractScrollArea* self);
void* QAbstractScrollArea_Metacast(QAbstractScrollArea* self, const char* param1);
struct miqt_string QAbstractScrollArea_Tr(const char* s);
struct miqt_string QAbstractScrollArea_TrUtf8(const char* s);
int QAbstractScrollArea_VerticalScrollBarPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetVerticalScrollBarPolicy(QAbstractScrollArea* self, int verticalScrollBarPolicy);
QScrollBar* QAbstractScrollArea_VerticalScrollBar(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar);
int QAbstractScrollArea_HorizontalScrollBarPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetHorizontalScrollBarPolicy(QAbstractScrollArea* self, int horizontalScrollBarPolicy);
QScrollBar* QAbstractScrollArea_HorizontalScrollBar(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar);
QWidget* QAbstractScrollArea_CornerWidget(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetCornerWidget(QAbstractScrollArea* self, QWidget* widget);
void QAbstractScrollArea_AddScrollBarWidget(QAbstractScrollArea* self, QWidget* widget, int alignment);
struct miqt_array /* of QWidget* */  QAbstractScrollArea_ScrollBarWidgets(QAbstractScrollArea* self, int alignment);
QWidget* QAbstractScrollArea_Viewport(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetViewport(QAbstractScrollArea* self, QWidget* widget);
QSize* QAbstractScrollArea_MaximumViewportSize(const QAbstractScrollArea* self);
QSize* QAbstractScrollArea_MinimumSizeHint(const QAbstractScrollArea* self);
QSize* QAbstractScrollArea_SizeHint(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetupViewport(QAbstractScrollArea* self, QWidget* viewport);
int QAbstractScrollArea_SizeAdjustPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetSizeAdjustPolicy(QAbstractScrollArea* self, int policy);
bool QAbstractScrollArea_EventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2);
bool QAbstractScrollArea_Event(QAbstractScrollArea* self, QEvent* param1);
bool QAbstractScrollArea_ViewportEvent(QAbstractScrollArea* self, QEvent* param1);
void QAbstractScrollArea_ResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1);
void QAbstractScrollArea_PaintEvent(QAbstractScrollArea* self, QPaintEvent* param1);
void QAbstractScrollArea_MousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_MouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_MouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_MouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_WheelEvent(QAbstractScrollArea* self, QWheelEvent* param1);
void QAbstractScrollArea_ContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1);
void QAbstractScrollArea_DragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1);
void QAbstractScrollArea_DragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1);
void QAbstractScrollArea_DragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1);
void QAbstractScrollArea_DropEvent(QAbstractScrollArea* self, QDropEvent* param1);
void QAbstractScrollArea_KeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1);
void QAbstractScrollArea_ScrollContentsBy(QAbstractScrollArea* self, int dx, int dy);
QSize* QAbstractScrollArea_ViewportSizeHint(const QAbstractScrollArea* self);
struct miqt_string QAbstractScrollArea_Tr2(const char* s, const char* c);
struct miqt_string QAbstractScrollArea_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractScrollArea_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractScrollArea_TrUtf83(const char* s, const char* c, int n);
void QAbstractScrollArea_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractScrollArea_virtualbase_MinimumSizeHint(const void* self);
void QAbstractScrollArea_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QAbstractScrollArea_virtualbase_SizeHint(const void* self);
void QAbstractScrollArea_override_virtual_SetupViewport(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_SetupViewport(void* self, QWidget* viewport);
void QAbstractScrollArea_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractScrollArea_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
void QAbstractScrollArea_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractScrollArea_virtualbase_Event(void* self, QEvent* param1);
void QAbstractScrollArea_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QAbstractScrollArea_virtualbase_ViewportEvent(void* self, QEvent* param1);
void QAbstractScrollArea_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QAbstractScrollArea_override_virtual_PaintEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QAbstractScrollArea_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QAbstractScrollArea_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
void QAbstractScrollArea_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1);
void QAbstractScrollArea_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QAbstractScrollArea_override_virtual_WheelEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
void QAbstractScrollArea_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QAbstractScrollArea_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1);
void QAbstractScrollArea_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* param1);
void QAbstractScrollArea_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* param1);
void QAbstractScrollArea_override_virtual_DropEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_DropEvent(void* self, QDropEvent* param1);
void QAbstractScrollArea_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QAbstractScrollArea_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
void QAbstractScrollArea_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QAbstractScrollArea_virtualbase_ViewportSizeHint(const void* self);
void QAbstractScrollArea_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QAbstractScrollArea_Delete(QAbstractScrollArea* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
