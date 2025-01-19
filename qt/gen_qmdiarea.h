#pragma once
#ifndef MIQT_QT_GEN_QMDIAREA_H
#define MIQT_QT_GEN_QMDIAREA_H

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
class QActionEvent;
class QBrush;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMdiArea;
class QMdiSubWindow;
class QMetaMethod;
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
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMdiArea QMdiArea;
typedef struct QMdiSubWindow QMdiSubWindow;
typedef struct QMetaMethod QMetaMethod;
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
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QMdiArea* QMdiArea_new(QWidget* parent);
QMdiArea* QMdiArea_new2();
void QMdiArea_virtbase(QMdiArea* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QMdiArea_MetaObject(const QMdiArea* self);
void* QMdiArea_Metacast(QMdiArea* self, const char* param1);
struct miqt_string QMdiArea_Tr(const char* s);
struct miqt_string QMdiArea_TrUtf8(const char* s);
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
struct miqt_string QMdiArea_TrUtf82(const char* s, const char* c);
struct miqt_string QMdiArea_TrUtf83(const char* s, const char* c, int n);
struct miqt_array /* of QMdiSubWindow* */  QMdiArea_SubWindowList1(const QMdiArea* self, int order);
QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags);
void QMdiArea_SetOption2(QMdiArea* self, int option, bool on);
bool QMdiArea_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QMdiArea_virtualbase_SizeHint(const void* self);
bool QMdiArea_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QMdiArea_virtualbase_MinimumSizeHint(const void* self);
bool QMdiArea_override_virtual_SetupViewport(void* self, intptr_t slot);
void QMdiArea_virtualbase_SetupViewport(void* self, QWidget* viewport);
bool QMdiArea_override_virtual_Event(void* self, intptr_t slot);
bool QMdiArea_virtualbase_Event(void* self, QEvent* event);
bool QMdiArea_override_virtual_EventFilter(void* self, intptr_t slot);
bool QMdiArea_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
bool QMdiArea_override_virtual_PaintEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_PaintEvent(void* self, QPaintEvent* paintEvent);
bool QMdiArea_override_virtual_ChildEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_ChildEvent(void* self, QChildEvent* childEvent);
bool QMdiArea_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_ResizeEvent(void* self, QResizeEvent* resizeEvent);
bool QMdiArea_override_virtual_TimerEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_TimerEvent(void* self, QTimerEvent* timerEvent);
bool QMdiArea_override_virtual_ShowEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_ShowEvent(void* self, QShowEvent* showEvent);
bool QMdiArea_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QMdiArea_virtualbase_ViewportEvent(void* self, QEvent* event);
bool QMdiArea_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QMdiArea_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
bool QMdiArea_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
bool QMdiArea_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
bool QMdiArea_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QMdiArea_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
bool QMdiArea_override_virtual_WheelEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
bool QMdiArea_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
bool QMdiArea_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1);
bool QMdiArea_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* param1);
bool QMdiArea_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* param1);
bool QMdiArea_override_virtual_DropEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_DropEvent(void* self, QDropEvent* param1);
bool QMdiArea_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QMdiArea_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QMdiArea_virtualbase_ViewportSizeHint(const void* self);
bool QMdiArea_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QMdiArea_override_virtual_DevType(void* self, intptr_t slot);
int QMdiArea_virtualbase_DevType(const void* self);
bool QMdiArea_override_virtual_SetVisible(void* self, intptr_t slot);
void QMdiArea_virtualbase_SetVisible(void* self, bool visible);
bool QMdiArea_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QMdiArea_virtualbase_HeightForWidth(const void* self, int param1);
bool QMdiArea_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QMdiArea_virtualbase_HasHeightForWidth(const void* self);
bool QMdiArea_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QMdiArea_virtualbase_PaintEngine(const void* self);
bool QMdiArea_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QMdiArea_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QMdiArea_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QMdiArea_override_virtual_EnterEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_EnterEvent(void* self, QEvent* event);
bool QMdiArea_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QMdiArea_override_virtual_MoveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QMdiArea_override_virtual_CloseEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QMdiArea_override_virtual_TabletEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QMdiArea_override_virtual_ActionEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QMdiArea_override_virtual_HideEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QMdiArea_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QMdiArea_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QMdiArea_override_virtual_Metric(void* self, intptr_t slot);
int QMdiArea_virtualbase_Metric(const void* self, int param1);
bool QMdiArea_override_virtual_InitPainter(void* self, intptr_t slot);
void QMdiArea_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QMdiArea_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QMdiArea_virtualbase_Redirected(const void* self, QPoint* offset);
bool QMdiArea_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QMdiArea_virtualbase_SharedPainter(const void* self);
bool QMdiArea_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QMdiArea_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QMdiArea_virtualbase_InputMethodQuery(const void* self, int param1);
bool QMdiArea_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QMdiArea_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QMdiArea_override_virtual_CustomEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_CustomEvent(void* self, QEvent* event);
bool QMdiArea_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QMdiArea_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QMdiArea_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QMdiArea_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QMdiArea_Delete(QMdiArea* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
