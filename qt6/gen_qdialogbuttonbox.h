#pragma once
#ifndef MIQT_QT6_GEN_QDIALOGBUTTONBOX_H
#define MIQT_QT6_GEN_QDIALOGBUTTONBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
class QActionEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDialogButtonBox;
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
class QPushButton;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QActionEvent QActionEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialogButtonBox QDialogButtonBox;
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
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QDialogButtonBox* QDialogButtonBox_new(QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new2();
QDialogButtonBox* QDialogButtonBox_new3(int orientation);
QDialogButtonBox* QDialogButtonBox_new4(int buttons);
QDialogButtonBox* QDialogButtonBox_new5(int buttons, int orientation);
QDialogButtonBox* QDialogButtonBox_new6(int orientation, QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new8(int buttons, int orientation, QWidget* parent);
void QDialogButtonBox_virtbase(QDialogButtonBox* src, QWidget** outptr_QWidget);
QMetaObject* QDialogButtonBox_MetaObject(const QDialogButtonBox* self);
void* QDialogButtonBox_Metacast(QDialogButtonBox* self, const char* param1);
struct miqt_string QDialogButtonBox_Tr(const char* s);
void QDialogButtonBox_SetOrientation(QDialogButtonBox* self, int orientation);
int QDialogButtonBox_Orientation(const QDialogButtonBox* self);
void QDialogButtonBox_AddButton(QDialogButtonBox* self, QAbstractButton* button, int role);
QPushButton* QDialogButtonBox_AddButton2(QDialogButtonBox* self, struct miqt_string text, int role);
QPushButton* QDialogButtonBox_AddButtonWithButton(QDialogButtonBox* self, int button);
void QDialogButtonBox_RemoveButton(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_Clear(QDialogButtonBox* self);
struct miqt_array /* of QAbstractButton* */  QDialogButtonBox_Buttons(const QDialogButtonBox* self);
int QDialogButtonBox_ButtonRole(const QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_SetStandardButtons(QDialogButtonBox* self, int buttons);
int QDialogButtonBox_StandardButtons(const QDialogButtonBox* self);
int QDialogButtonBox_StandardButton(const QDialogButtonBox* self, QAbstractButton* button);
QPushButton* QDialogButtonBox_Button(const QDialogButtonBox* self, int which);
void QDialogButtonBox_SetCenterButtons(QDialogButtonBox* self, bool center);
bool QDialogButtonBox_CenterButtons(const QDialogButtonBox* self);
void QDialogButtonBox_Clicked(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_connect_Clicked(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_Accepted(QDialogButtonBox* self);
void QDialogButtonBox_connect_Accepted(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_HelpRequested(QDialogButtonBox* self);
void QDialogButtonBox_connect_HelpRequested(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_Rejected(QDialogButtonBox* self);
void QDialogButtonBox_connect_Rejected(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_ChangeEvent(QDialogButtonBox* self, QEvent* event);
bool QDialogButtonBox_Event(QDialogButtonBox* self, QEvent* event);
struct miqt_string QDialogButtonBox_Tr2(const char* s, const char* c);
struct miqt_string QDialogButtonBox_Tr3(const char* s, const char* c, int n);
bool QDialogButtonBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_ChangeEvent(void* self, QEvent* event);
bool QDialogButtonBox_override_virtual_Event(void* self, intptr_t slot);
bool QDialogButtonBox_virtualbase_Event(void* self, QEvent* event);
bool QDialogButtonBox_override_virtual_DevType(void* self, intptr_t slot);
int QDialogButtonBox_virtualbase_DevType(const void* self);
bool QDialogButtonBox_override_virtual_SetVisible(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_SetVisible(void* self, bool visible);
bool QDialogButtonBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QDialogButtonBox_virtualbase_SizeHint(const void* self);
bool QDialogButtonBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QDialogButtonBox_virtualbase_MinimumSizeHint(const void* self);
bool QDialogButtonBox_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QDialogButtonBox_virtualbase_HeightForWidth(const void* self, int param1);
bool QDialogButtonBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QDialogButtonBox_virtualbase_HasHeightForWidth(const void* self);
bool QDialogButtonBox_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QDialogButtonBox_virtualbase_PaintEngine(const void* self);
bool QDialogButtonBox_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QDialogButtonBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QDialogButtonBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QDialogButtonBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QDialogButtonBox_override_virtual_WheelEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QDialogButtonBox_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QDialogButtonBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QDialogButtonBox_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QDialogButtonBox_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QDialogButtonBox_override_virtual_EnterEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QDialogButtonBox_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QDialogButtonBox_override_virtual_PaintEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QDialogButtonBox_override_virtual_MoveEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QDialogButtonBox_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QDialogButtonBox_override_virtual_CloseEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QDialogButtonBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QDialogButtonBox_override_virtual_TabletEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QDialogButtonBox_override_virtual_ActionEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QDialogButtonBox_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QDialogButtonBox_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QDialogButtonBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QDialogButtonBox_override_virtual_DropEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QDialogButtonBox_override_virtual_ShowEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QDialogButtonBox_override_virtual_HideEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QDialogButtonBox_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QDialogButtonBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QDialogButtonBox_override_virtual_Metric(void* self, intptr_t slot);
int QDialogButtonBox_virtualbase_Metric(const void* self, int param1);
bool QDialogButtonBox_override_virtual_InitPainter(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QDialogButtonBox_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QDialogButtonBox_virtualbase_Redirected(const void* self, QPoint* offset);
bool QDialogButtonBox_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QDialogButtonBox_virtualbase_SharedPainter(const void* self);
bool QDialogButtonBox_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QDialogButtonBox_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QDialogButtonBox_virtualbase_InputMethodQuery(const void* self, int param1);
bool QDialogButtonBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QDialogButtonBox_virtualbase_FocusNextPrevChild(void* self, bool next);
void QDialogButtonBox_Delete(QDialogButtonBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
