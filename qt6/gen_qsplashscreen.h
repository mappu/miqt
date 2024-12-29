#pragma once
#ifndef MIQT_QT6_GEN_QSPLASHSCREEN_H
#define MIQT_QT6_GEN_QSPLASHSCREEN_H

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
class QColor;
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
class QPixmap;
class QPoint;
class QResizeEvent;
class QScreen;
class QShowEvent;
class QSize;
class QSplashScreen;
class QTabletEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColor QColor;
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
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSplashScreen QSplashScreen;
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QSplashScreen* QSplashScreen_new();
QSplashScreen* QSplashScreen_new2(QScreen* screen);
QSplashScreen* QSplashScreen_new3(QPixmap* pixmap);
QSplashScreen* QSplashScreen_new4(QPixmap* pixmap, int f);
QSplashScreen* QSplashScreen_new5(QScreen* screen, QPixmap* pixmap);
QSplashScreen* QSplashScreen_new6(QScreen* screen, QPixmap* pixmap, int f);
void QSplashScreen_virtbase(QSplashScreen* src, QWidget** outptr_QWidget);
QMetaObject* QSplashScreen_MetaObject(const QSplashScreen* self);
void* QSplashScreen_Metacast(QSplashScreen* self, const char* param1);
struct miqt_string QSplashScreen_Tr(const char* s);
void QSplashScreen_SetPixmap(QSplashScreen* self, QPixmap* pixmap);
QPixmap* QSplashScreen_Pixmap(const QSplashScreen* self);
void QSplashScreen_Finish(QSplashScreen* self, QWidget* w);
void QSplashScreen_Repaint(QSplashScreen* self);
struct miqt_string QSplashScreen_Message(const QSplashScreen* self);
void QSplashScreen_ShowMessage(QSplashScreen* self, struct miqt_string message);
void QSplashScreen_ClearMessage(QSplashScreen* self);
void QSplashScreen_MessageChanged(QSplashScreen* self, struct miqt_string message);
void QSplashScreen_connect_MessageChanged(QSplashScreen* self, intptr_t slot);
bool QSplashScreen_Event(QSplashScreen* self, QEvent* e);
void QSplashScreen_DrawContents(QSplashScreen* self, QPainter* painter);
void QSplashScreen_MousePressEvent(QSplashScreen* self, QMouseEvent* param1);
struct miqt_string QSplashScreen_Tr2(const char* s, const char* c);
struct miqt_string QSplashScreen_Tr3(const char* s, const char* c, int n);
void QSplashScreen_ShowMessage2(QSplashScreen* self, struct miqt_string message, int alignment);
void QSplashScreen_ShowMessage3(QSplashScreen* self, struct miqt_string message, int alignment, QColor* color);
void QSplashScreen_override_virtual_Event(void* self, intptr_t slot);
bool QSplashScreen_virtualbase_Event(void* self, QEvent* e);
void QSplashScreen_override_virtual_DrawContents(void* self, intptr_t slot);
void QSplashScreen_virtualbase_DrawContents(void* self, QPainter* painter);
void QSplashScreen_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QSplashScreen_override_virtual_DevType(void* self, intptr_t slot);
int QSplashScreen_virtualbase_DevType(const void* self);
void QSplashScreen_override_virtual_SetVisible(void* self, intptr_t slot);
void QSplashScreen_virtualbase_SetVisible(void* self, bool visible);
void QSplashScreen_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QSplashScreen_virtualbase_SizeHint(const void* self);
void QSplashScreen_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QSplashScreen_virtualbase_MinimumSizeHint(const void* self);
void QSplashScreen_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QSplashScreen_virtualbase_HeightForWidth(const void* self, int param1);
void QSplashScreen_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QSplashScreen_virtualbase_HasHeightForWidth(const void* self);
void QSplashScreen_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QSplashScreen_virtualbase_PaintEngine(const void* self);
void QSplashScreen_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QSplashScreen_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QSplashScreen_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QSplashScreen_override_virtual_WheelEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QSplashScreen_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QSplashScreen_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QSplashScreen_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QSplashScreen_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QSplashScreen_override_virtual_EnterEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_EnterEvent(void* self, QEnterEvent* event);
void QSplashScreen_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_LeaveEvent(void* self, QEvent* event);
void QSplashScreen_override_virtual_PaintEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QSplashScreen_override_virtual_MoveEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QSplashScreen_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QSplashScreen_override_virtual_CloseEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QSplashScreen_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QSplashScreen_override_virtual_TabletEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QSplashScreen_override_virtual_ActionEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QSplashScreen_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QSplashScreen_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QSplashScreen_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QSplashScreen_override_virtual_DropEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_DropEvent(void* self, QDropEvent* event);
void QSplashScreen_override_virtual_ShowEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QSplashScreen_override_virtual_HideEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_HideEvent(void* self, QHideEvent* event);
void QSplashScreen_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QSplashScreen_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
void QSplashScreen_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QSplashScreen_override_virtual_Metric(void* self, intptr_t slot);
int QSplashScreen_virtualbase_Metric(const void* self, int param1);
void QSplashScreen_override_virtual_InitPainter(void* self, intptr_t slot);
void QSplashScreen_virtualbase_InitPainter(const void* self, QPainter* painter);
void QSplashScreen_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QSplashScreen_virtualbase_Redirected(const void* self, QPoint* offset);
void QSplashScreen_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QSplashScreen_virtualbase_SharedPainter(const void* self);
void QSplashScreen_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QSplashScreen_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QSplashScreen_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QSplashScreen_virtualbase_InputMethodQuery(const void* self, int param1);
void QSplashScreen_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QSplashScreen_virtualbase_FocusNextPrevChild(void* self, bool next);
void QSplashScreen_Delete(QSplashScreen* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
