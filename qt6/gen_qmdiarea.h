#pragma once
#ifndef MIQT_QT6_GEN_QMDIAREA_H
#define MIQT_QT6_GEN_QMDIAREA_H

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
class QBrush;
class QChildEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFrame;
class QKeyEvent;
class QMdiArea;
class QMdiSubWindow;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTimerEvent;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFrame QFrame;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMdiArea QMdiArea;
typedef struct QMdiSubWindow QMdiSubWindow;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

void QMdiArea_new(QWidget* parent, QMdiArea** outptr_QMdiArea, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QMdiArea_new2(QMdiArea** outptr_QMdiArea, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QMdiArea_MetaObject(const QMdiArea* self);
void* QMdiArea_Metacast(QMdiArea* self, const char* param1);
struct miqt_string QMdiArea_Tr(const char* s);
QSize* QMdiArea_SizeHint(const QMdiArea* self);
QSize* QMdiArea_MinimumSizeHint(const QMdiArea* self);
QMdiSubWindow* QMdiArea_CurrentSubWindow(const QMdiArea* self);
QMdiSubWindow* QMdiArea_ActiveSubWindow(const QMdiArea* self);
struct miqt_array /* of QMdiSubWindow* */  QMdiArea_SubWindowList(const QMdiArea* self);
QMdiSubWindow* QMdiArea_AddSubWindow(QMdiArea* self, QWidget* widget);
void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget);
QBrush* QMdiArea_Background(const QMdiArea* self);
void QMdiArea_SetBackground(QMdiArea* self, QBrush* background);
int QMdiArea_ActivationOrder(const QMdiArea* self);
void QMdiArea_SetActivationOrder(QMdiArea* self, int order);
void QMdiArea_SetOption(QMdiArea* self, int option);
bool QMdiArea_TestOption(const QMdiArea* self, int opton);
void QMdiArea_SetViewMode(QMdiArea* self, int mode);
int QMdiArea_ViewMode(const QMdiArea* self);
bool QMdiArea_DocumentMode(const QMdiArea* self);
void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled);
void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable);
bool QMdiArea_TabsClosable(const QMdiArea* self);
void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable);
bool QMdiArea_TabsMovable(const QMdiArea* self);
void QMdiArea_SetTabShape(QMdiArea* self, int shape);
int QMdiArea_TabShape(const QMdiArea* self);
void QMdiArea_SetTabPosition(QMdiArea* self, int position);
int QMdiArea_TabPosition(const QMdiArea* self);
void QMdiArea_SubWindowActivated(QMdiArea* self, QMdiSubWindow* param1);
void QMdiArea_connect_SubWindowActivated(QMdiArea* self, intptr_t slot);
void QMdiArea_SetActiveSubWindow(QMdiArea* self, QMdiSubWindow* window);
void QMdiArea_TileSubWindows(QMdiArea* self);
void QMdiArea_CascadeSubWindows(QMdiArea* self);
void QMdiArea_CloseActiveSubWindow(QMdiArea* self);
void QMdiArea_CloseAllSubWindows(QMdiArea* self);
void QMdiArea_ActivateNextSubWindow(QMdiArea* self);
void QMdiArea_ActivatePreviousSubWindow(QMdiArea* self);
void QMdiArea_SetupViewport(QMdiArea* self, QWidget* viewport);
bool QMdiArea_Event(QMdiArea* self, QEvent* event);
bool QMdiArea_EventFilter(QMdiArea* self, QObject* object, QEvent* event);
void QMdiArea_PaintEvent(QMdiArea* self, QPaintEvent* paintEvent);
void QMdiArea_ChildEvent(QMdiArea* self, QChildEvent* childEvent);
void QMdiArea_ResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent);
void QMdiArea_TimerEvent(QMdiArea* self, QTimerEvent* timerEvent);
void QMdiArea_ShowEvent(QMdiArea* self, QShowEvent* showEvent);
bool QMdiArea_ViewportEvent(QMdiArea* self, QEvent* event);
void QMdiArea_ScrollContentsBy(QMdiArea* self, int dx, int dy);
struct miqt_string QMdiArea_Tr2(const char* s, const char* c);
struct miqt_string QMdiArea_Tr3(const char* s, const char* c, int n);
struct miqt_array /* of QMdiSubWindow* */  QMdiArea_SubWindowList1(const QMdiArea* self, int order);
QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags);
void QMdiArea_SetOption2(QMdiArea* self, int option, bool on);
void QMdiArea_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QMdiArea_virtualbase_SizeHint(const void* self);
void QMdiArea_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QMdiArea_virtualbase_MinimumSizeHint(const void* self);
void QMdiArea_override_virtual_SetupViewport(void* self, intptr_t slot);
void QMdiArea_virtualbase_SetupViewport(void* self, QWidget* viewport);
void QMdiArea_override_virtual_Event(void* self, intptr_t slot);
bool QMdiArea_virtualbase_Event(void* self, QEvent* event);
void QMdiArea_override_virtual_EventFilter(void* self, intptr_t slot);
bool QMdiArea_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
void QMdiArea_override_virtual_PaintEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_PaintEvent(void* self, QPaintEvent* paintEvent);
void QMdiArea_override_virtual_ChildEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_ChildEvent(void* self, QChildEvent* childEvent);
void QMdiArea_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_ResizeEvent(void* self, QResizeEvent* resizeEvent);
void QMdiArea_override_virtual_TimerEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_TimerEvent(void* self, QTimerEvent* timerEvent);
void QMdiArea_override_virtual_ShowEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_ShowEvent(void* self, QShowEvent* showEvent);
void QMdiArea_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QMdiArea_virtualbase_ViewportEvent(void* self, QEvent* event);
void QMdiArea_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QMdiArea_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
void QMdiArea_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QMdiArea_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
void QMdiArea_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1);
void QMdiArea_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QMdiArea_override_virtual_WheelEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
void QMdiArea_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QMdiArea_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1);
void QMdiArea_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* param1);
void QMdiArea_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* param1);
void QMdiArea_override_virtual_DropEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_DropEvent(void* self, QDropEvent* param1);
void QMdiArea_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QMdiArea_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QMdiArea_virtualbase_ViewportSizeHint(const void* self);
void QMdiArea_Delete(QMdiArea* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
