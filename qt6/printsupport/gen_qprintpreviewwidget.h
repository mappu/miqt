#pragma once
#ifndef MIQT_QT6_PRINTSUPPORT_GEN_QPRINTPREVIEWWIDGET_H
#define MIQT_QT6_PRINTSUPPORT_GEN_QPRINTPREVIEWWIDGET_H

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
class QPrintPreviewWidget;
class QPrinter;
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
typedef struct QPrintPreviewWidget QPrintPreviewWidget;
typedef struct QPrinter QPrinter;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QPrintPreviewWidget* QPrintPreviewWidget_new(QWidget* parent);
QPrintPreviewWidget* QPrintPreviewWidget_new2(QPrinter* printer);
QPrintPreviewWidget* QPrintPreviewWidget_new3();
QPrintPreviewWidget* QPrintPreviewWidget_new4(QPrinter* printer, QWidget* parent);
QPrintPreviewWidget* QPrintPreviewWidget_new5(QPrinter* printer, QWidget* parent, int flags);
QPrintPreviewWidget* QPrintPreviewWidget_new6(QWidget* parent, int flags);
void QPrintPreviewWidget_virtbase(QPrintPreviewWidget* src, QWidget** outptr_QWidget);
QMetaObject* QPrintPreviewWidget_MetaObject(const QPrintPreviewWidget* self);
void* QPrintPreviewWidget_Metacast(QPrintPreviewWidget* self, const char* param1);
struct miqt_string QPrintPreviewWidget_Tr(const char* s);
double QPrintPreviewWidget_ZoomFactor(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_Orientation(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_ViewMode(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_ZoomMode(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_CurrentPage(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_PageCount(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetVisible(QPrintPreviewWidget* self, bool visible);
void QPrintPreviewWidget_Print(QPrintPreviewWidget* self);
void QPrintPreviewWidget_ZoomIn(QPrintPreviewWidget* self);
void QPrintPreviewWidget_ZoomOut(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetZoomFactor(QPrintPreviewWidget* self, double zoomFactor);
void QPrintPreviewWidget_SetOrientation(QPrintPreviewWidget* self, int orientation);
void QPrintPreviewWidget_SetViewMode(QPrintPreviewWidget* self, int viewMode);
void QPrintPreviewWidget_SetZoomMode(QPrintPreviewWidget* self, int zoomMode);
void QPrintPreviewWidget_SetCurrentPage(QPrintPreviewWidget* self, int pageNumber);
void QPrintPreviewWidget_FitToWidth(QPrintPreviewWidget* self);
void QPrintPreviewWidget_FitInView(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetLandscapeOrientation(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetPortraitOrientation(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetSinglePageViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetFacingPagesViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetAllPagesViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_UpdatePreview(QPrintPreviewWidget* self);
void QPrintPreviewWidget_PaintRequested(QPrintPreviewWidget* self, QPrinter* printer);
void QPrintPreviewWidget_connect_PaintRequested(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_PreviewChanged(QPrintPreviewWidget* self);
void QPrintPreviewWidget_connect_PreviewChanged(QPrintPreviewWidget* self, intptr_t slot);
struct miqt_string QPrintPreviewWidget_Tr2(const char* s, const char* c);
struct miqt_string QPrintPreviewWidget_Tr3(const char* s, const char* c, int n);
void QPrintPreviewWidget_ZoomIn1(QPrintPreviewWidget* self, double zoom);
void QPrintPreviewWidget_ZoomOut1(QPrintPreviewWidget* self, double zoom);
bool QPrintPreviewWidget_override_virtual_SetVisible(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_SetVisible(void* self, bool visible);
bool QPrintPreviewWidget_override_virtual_DevType(void* self, intptr_t slot);
int QPrintPreviewWidget_virtualbase_DevType(const void* self);
bool QPrintPreviewWidget_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QPrintPreviewWidget_virtualbase_SizeHint(const void* self);
bool QPrintPreviewWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QPrintPreviewWidget_virtualbase_MinimumSizeHint(const void* self);
bool QPrintPreviewWidget_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QPrintPreviewWidget_virtualbase_HeightForWidth(const void* self, int param1);
bool QPrintPreviewWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QPrintPreviewWidget_virtualbase_HasHeightForWidth(const void* self);
bool QPrintPreviewWidget_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QPrintPreviewWidget_virtualbase_PaintEngine(const void* self);
bool QPrintPreviewWidget_override_virtual_Event(void* self, intptr_t slot);
bool QPrintPreviewWidget_virtualbase_Event(void* self, QEvent* event);
bool QPrintPreviewWidget_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QPrintPreviewWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QPrintPreviewWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QPrintPreviewWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QPrintPreviewWidget_override_virtual_WheelEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QPrintPreviewWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QPrintPreviewWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QPrintPreviewWidget_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QPrintPreviewWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QPrintPreviewWidget_override_virtual_EnterEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QPrintPreviewWidget_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QPrintPreviewWidget_override_virtual_PaintEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QPrintPreviewWidget_override_virtual_MoveEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QPrintPreviewWidget_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QPrintPreviewWidget_override_virtual_CloseEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QPrintPreviewWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QPrintPreviewWidget_override_virtual_TabletEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QPrintPreviewWidget_override_virtual_ActionEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QPrintPreviewWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QPrintPreviewWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QPrintPreviewWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QPrintPreviewWidget_override_virtual_DropEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QPrintPreviewWidget_override_virtual_ShowEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QPrintPreviewWidget_override_virtual_HideEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QPrintPreviewWidget_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QPrintPreviewWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QPrintPreviewWidget_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QPrintPreviewWidget_override_virtual_Metric(void* self, intptr_t slot);
int QPrintPreviewWidget_virtualbase_Metric(const void* self, int param1);
bool QPrintPreviewWidget_override_virtual_InitPainter(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QPrintPreviewWidget_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QPrintPreviewWidget_virtualbase_Redirected(const void* self, QPoint* offset);
bool QPrintPreviewWidget_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QPrintPreviewWidget_virtualbase_SharedPainter(const void* self);
bool QPrintPreviewWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QPrintPreviewWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QPrintPreviewWidget_virtualbase_InputMethodQuery(const void* self, int param1);
bool QPrintPreviewWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QPrintPreviewWidget_virtualbase_FocusNextPrevChild(void* self, bool next);
void QPrintPreviewWidget_Delete(QPrintPreviewWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
