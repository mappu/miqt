#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTBUTTON_H
#define MIQT_QT6_GEN_QABSTRACTBUTTON_H

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
class QButtonGroup;
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
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
class QKeySequence;
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
typedef struct QAbstractButton QAbstractButton;
typedef struct QActionEvent QActionEvent;
typedef struct QButtonGroup QButtonGroup;
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
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
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

void QAbstractButton_new(QWidget* parent, QAbstractButton** outptr_QAbstractButton, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QAbstractButton_new2(QAbstractButton** outptr_QAbstractButton, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QAbstractButton_MetaObject(const QAbstractButton* self);
void* QAbstractButton_Metacast(QAbstractButton* self, const char* param1);
struct miqt_string QAbstractButton_Tr(const char* s);
void QAbstractButton_SetText(QAbstractButton* self, struct miqt_string text);
struct miqt_string QAbstractButton_Text(const QAbstractButton* self);
void QAbstractButton_SetIcon(QAbstractButton* self, QIcon* icon);
QIcon* QAbstractButton_Icon(const QAbstractButton* self);
QSize* QAbstractButton_IconSize(const QAbstractButton* self);
void QAbstractButton_SetShortcut(QAbstractButton* self, QKeySequence* key);
QKeySequence* QAbstractButton_Shortcut(const QAbstractButton* self);
void QAbstractButton_SetCheckable(QAbstractButton* self, bool checkable);
bool QAbstractButton_IsCheckable(const QAbstractButton* self);
bool QAbstractButton_IsChecked(const QAbstractButton* self);
void QAbstractButton_SetDown(QAbstractButton* self, bool down);
bool QAbstractButton_IsDown(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeat(QAbstractButton* self, bool autoRepeat);
bool QAbstractButton_AutoRepeat(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay);
int QAbstractButton_AutoRepeatDelay(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval);
int QAbstractButton_AutoRepeatInterval(const QAbstractButton* self);
void QAbstractButton_SetAutoExclusive(QAbstractButton* self, bool autoExclusive);
bool QAbstractButton_AutoExclusive(const QAbstractButton* self);
QButtonGroup* QAbstractButton_Group(const QAbstractButton* self);
void QAbstractButton_SetIconSize(QAbstractButton* self, QSize* size);
void QAbstractButton_AnimateClick(QAbstractButton* self);
void QAbstractButton_Click(QAbstractButton* self);
void QAbstractButton_Toggle(QAbstractButton* self);
void QAbstractButton_SetChecked(QAbstractButton* self, bool checked);
void QAbstractButton_Pressed(QAbstractButton* self);
void QAbstractButton_connect_Pressed(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Released(QAbstractButton* self);
void QAbstractButton_connect_Released(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Clicked(QAbstractButton* self);
void QAbstractButton_connect_Clicked(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Toggled(QAbstractButton* self, bool checked);
void QAbstractButton_connect_Toggled(QAbstractButton* self, intptr_t slot);
void QAbstractButton_PaintEvent(QAbstractButton* self, QPaintEvent* e);
bool QAbstractButton_HitButton(const QAbstractButton* self, QPoint* pos);
void QAbstractButton_CheckStateSet(QAbstractButton* self);
void QAbstractButton_NextCheckState(QAbstractButton* self);
bool QAbstractButton_Event(QAbstractButton* self, QEvent* e);
void QAbstractButton_KeyPressEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_KeyReleaseEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_MousePressEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_MouseReleaseEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_MouseMoveEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_FocusInEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_FocusOutEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_ChangeEvent(QAbstractButton* self, QEvent* e);
void QAbstractButton_TimerEvent(QAbstractButton* self, QTimerEvent* e);
struct miqt_string QAbstractButton_Tr2(const char* s, const char* c);
struct miqt_string QAbstractButton_Tr3(const char* s, const char* c, int n);
void QAbstractButton_Clicked1(QAbstractButton* self, bool checked);
void QAbstractButton_connect_Clicked1(QAbstractButton* self, intptr_t slot);
void QAbstractButton_override_virtual_PaintEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_PaintEvent(void* self, QPaintEvent* e);
void QAbstractButton_override_virtual_HitButton(void* self, intptr_t slot);
bool QAbstractButton_virtualbase_HitButton(const void* self, QPoint* pos);
void QAbstractButton_override_virtual_CheckStateSet(void* self, intptr_t slot);
void QAbstractButton_virtualbase_CheckStateSet(void* self);
void QAbstractButton_override_virtual_NextCheckState(void* self, intptr_t slot);
void QAbstractButton_virtualbase_NextCheckState(void* self);
void QAbstractButton_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractButton_virtualbase_Event(void* self, QEvent* e);
void QAbstractButton_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* e);
void QAbstractButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
void QAbstractButton_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_MousePressEvent(void* self, QMouseEvent* e);
void QAbstractButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
void QAbstractButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e);
void QAbstractButton_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_FocusInEvent(void* self, QFocusEvent* e);
void QAbstractButton_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* e);
void QAbstractButton_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_ChangeEvent(void* self, QEvent* e);
void QAbstractButton_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_TimerEvent(void* self, QTimerEvent* e);
void QAbstractButton_override_virtual_DevType(void* self, intptr_t slot);
int QAbstractButton_virtualbase_DevType(const void* self);
void QAbstractButton_override_virtual_SetVisible(void* self, intptr_t slot);
void QAbstractButton_virtualbase_SetVisible(void* self, bool visible);
void QAbstractButton_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QAbstractButton_virtualbase_SizeHint(const void* self);
void QAbstractButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractButton_virtualbase_MinimumSizeHint(const void* self);
void QAbstractButton_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QAbstractButton_virtualbase_HeightForWidth(const void* self, int param1);
void QAbstractButton_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QAbstractButton_virtualbase_HasHeightForWidth(const void* self);
void QAbstractButton_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QAbstractButton_virtualbase_PaintEngine(const void* self);
void QAbstractButton_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QAbstractButton_override_virtual_WheelEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QAbstractButton_override_virtual_EnterEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_EnterEvent(void* self, QEnterEvent* event);
void QAbstractButton_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_LeaveEvent(void* self, QEvent* event);
void QAbstractButton_override_virtual_MoveEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QAbstractButton_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QAbstractButton_override_virtual_CloseEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QAbstractButton_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QAbstractButton_override_virtual_TabletEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QAbstractButton_override_virtual_ActionEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QAbstractButton_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QAbstractButton_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QAbstractButton_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QAbstractButton_override_virtual_DropEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_DropEvent(void* self, QDropEvent* event);
void QAbstractButton_override_virtual_ShowEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QAbstractButton_override_virtual_HideEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_HideEvent(void* self, QHideEvent* event);
void QAbstractButton_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QAbstractButton_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
void QAbstractButton_override_virtual_Metric(void* self, intptr_t slot);
int QAbstractButton_virtualbase_Metric(const void* self, int param1);
void QAbstractButton_override_virtual_InitPainter(void* self, intptr_t slot);
void QAbstractButton_virtualbase_InitPainter(const void* self, QPainter* painter);
void QAbstractButton_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QAbstractButton_virtualbase_Redirected(const void* self, QPoint* offset);
void QAbstractButton_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QAbstractButton_virtualbase_SharedPainter(const void* self);
void QAbstractButton_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QAbstractButton_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QAbstractButton_virtualbase_InputMethodQuery(const void* self, int param1);
void QAbstractButton_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QAbstractButton_virtualbase_FocusNextPrevChild(void* self, bool next);
void QAbstractButton_Delete(QAbstractButton* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
