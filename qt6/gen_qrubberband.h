#pragma once
#ifndef MIQT_QT6_GEN_QRUBBERBAND_H
#define MIQT_QT6_GEN_QRUBBERBAND_H

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
class QRubberBand;
class QShowEvent;
class QSize;
class QStyleOptionRubberBand;
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
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QRubberBand QRubberBand;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionRubberBand QStyleOptionRubberBand;
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QRubberBand* QRubberBand_new(int param1);
QRubberBand* QRubberBand_new2(int param1, QWidget* param2);
void QRubberBand_virtbase(QRubberBand* src, QWidget** outptr_QWidget);
QMetaObject* QRubberBand_MetaObject(const QRubberBand* self);
void* QRubberBand_Metacast(QRubberBand* self, const char* param1);
struct miqt_string QRubberBand_Tr(const char* s);
int QRubberBand_Shape(const QRubberBand* self);
void QRubberBand_SetGeometry(QRubberBand* self, QRect* r);
void QRubberBand_SetGeometry2(QRubberBand* self, int x, int y, int w, int h);
void QRubberBand_Move(QRubberBand* self, int x, int y);
void QRubberBand_MoveWithQPoint(QRubberBand* self, QPoint* p);
void QRubberBand_Resize(QRubberBand* self, int w, int h);
void QRubberBand_ResizeWithQSize(QRubberBand* self, QSize* s);
bool QRubberBand_Event(QRubberBand* self, QEvent* e);
void QRubberBand_PaintEvent(QRubberBand* self, QPaintEvent* param1);
void QRubberBand_ChangeEvent(QRubberBand* self, QEvent* param1);
void QRubberBand_ShowEvent(QRubberBand* self, QShowEvent* param1);
void QRubberBand_ResizeEvent(QRubberBand* self, QResizeEvent* param1);
void QRubberBand_MoveEvent(QRubberBand* self, QMoveEvent* param1);
void QRubberBand_InitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option);
struct miqt_string QRubberBand_Tr2(const char* s, const char* c);
struct miqt_string QRubberBand_Tr3(const char* s, const char* c, int n);
void QRubberBand_override_virtual_Event(void* self, intptr_t slot);
bool QRubberBand_virtualbase_Event(void* self, QEvent* e);
void QRubberBand_override_virtual_PaintEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QRubberBand_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QRubberBand_override_virtual_ShowEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QRubberBand_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QRubberBand_override_virtual_MoveEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_MoveEvent(void* self, QMoveEvent* param1);
void QRubberBand_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QRubberBand_virtualbase_InitStyleOption(const void* self, QStyleOptionRubberBand* option);
void QRubberBand_override_virtual_DevType(void* self, intptr_t slot);
int QRubberBand_virtualbase_DevType(const void* self);
void QRubberBand_override_virtual_SetVisible(void* self, intptr_t slot);
void QRubberBand_virtualbase_SetVisible(void* self, bool visible);
void QRubberBand_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QRubberBand_virtualbase_SizeHint(const void* self);
void QRubberBand_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QRubberBand_virtualbase_MinimumSizeHint(const void* self);
void QRubberBand_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QRubberBand_virtualbase_HeightForWidth(const void* self, int param1);
void QRubberBand_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QRubberBand_virtualbase_HasHeightForWidth(const void* self);
void QRubberBand_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QRubberBand_virtualbase_PaintEngine(const void* self);
void QRubberBand_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QRubberBand_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QRubberBand_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QRubberBand_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QRubberBand_override_virtual_WheelEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QRubberBand_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QRubberBand_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QRubberBand_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QRubberBand_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QRubberBand_override_virtual_EnterEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_EnterEvent(void* self, QEnterEvent* event);
void QRubberBand_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_LeaveEvent(void* self, QEvent* event);
void QRubberBand_override_virtual_CloseEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QRubberBand_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QRubberBand_override_virtual_TabletEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QRubberBand_override_virtual_ActionEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QRubberBand_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QRubberBand_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QRubberBand_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QRubberBand_override_virtual_DropEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_DropEvent(void* self, QDropEvent* event);
void QRubberBand_override_virtual_HideEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_HideEvent(void* self, QHideEvent* event);
void QRubberBand_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QRubberBand_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
void QRubberBand_override_virtual_Metric(void* self, intptr_t slot);
int QRubberBand_virtualbase_Metric(const void* self, int param1);
void QRubberBand_override_virtual_InitPainter(void* self, intptr_t slot);
void QRubberBand_virtualbase_InitPainter(const void* self, QPainter* painter);
void QRubberBand_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QRubberBand_virtualbase_Redirected(const void* self, QPoint* offset);
void QRubberBand_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QRubberBand_virtualbase_SharedPainter(const void* self);
void QRubberBand_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QRubberBand_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QRubberBand_virtualbase_InputMethodQuery(const void* self, int param1);
void QRubberBand_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QRubberBand_virtualbase_FocusNextPrevChild(void* self, bool next);
void QRubberBand_Delete(QRubberBand* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
