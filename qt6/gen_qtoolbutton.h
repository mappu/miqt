#pragma once
#ifndef MIQT_QT6_GEN_QTOOLBUTTON_H
#define MIQT_QT6_GEN_QTOOLBUTTON_H

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
class QAction;
class QActionEvent;
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QKeyEvent;
class QMenu;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QPoint;
class QSize;
class QStyleOptionToolButton;
class QTimerEvent;
class QToolButton;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QStyleOptionToolButton QStyleOptionToolButton;
typedef struct QTimerEvent QTimerEvent;
typedef struct QToolButton QToolButton;
typedef struct QWidget QWidget;
#endif

void QToolButton_new(QWidget* parent, QToolButton** outptr_QToolButton, QAbstractButton** outptr_QAbstractButton, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QToolButton_new2(QToolButton** outptr_QToolButton, QAbstractButton** outptr_QAbstractButton, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QToolButton_MetaObject(const QToolButton* self);
void* QToolButton_Metacast(QToolButton* self, const char* param1);
struct miqt_string QToolButton_Tr(const char* s);
QSize* QToolButton_SizeHint(const QToolButton* self);
QSize* QToolButton_MinimumSizeHint(const QToolButton* self);
int QToolButton_ToolButtonStyle(const QToolButton* self);
int QToolButton_ArrowType(const QToolButton* self);
void QToolButton_SetArrowType(QToolButton* self, int typeVal);
void QToolButton_SetMenu(QToolButton* self, QMenu* menu);
QMenu* QToolButton_Menu(const QToolButton* self);
void QToolButton_SetPopupMode(QToolButton* self, int mode);
int QToolButton_PopupMode(const QToolButton* self);
QAction* QToolButton_DefaultAction(const QToolButton* self);
void QToolButton_SetAutoRaise(QToolButton* self, bool enable);
bool QToolButton_AutoRaise(const QToolButton* self);
void QToolButton_ShowMenu(QToolButton* self);
void QToolButton_SetToolButtonStyle(QToolButton* self, int style);
void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction);
void QToolButton_Triggered(QToolButton* self, QAction* param1);
void QToolButton_connect_Triggered(QToolButton* self, intptr_t slot);
bool QToolButton_Event(QToolButton* self, QEvent* e);
void QToolButton_MousePressEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_MouseReleaseEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_PaintEvent(QToolButton* self, QPaintEvent* param1);
void QToolButton_ActionEvent(QToolButton* self, QActionEvent* param1);
void QToolButton_EnterEvent(QToolButton* self, QEnterEvent* param1);
void QToolButton_LeaveEvent(QToolButton* self, QEvent* param1);
void QToolButton_TimerEvent(QToolButton* self, QTimerEvent* param1);
void QToolButton_ChangeEvent(QToolButton* self, QEvent* param1);
bool QToolButton_HitButton(const QToolButton* self, QPoint* pos);
void QToolButton_CheckStateSet(QToolButton* self);
void QToolButton_NextCheckState(QToolButton* self);
void QToolButton_InitStyleOption(const QToolButton* self, QStyleOptionToolButton* option);
struct miqt_string QToolButton_Tr2(const char* s, const char* c);
struct miqt_string QToolButton_Tr3(const char* s, const char* c, int n);
void QToolButton_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QToolButton_virtualbase_SizeHint(const void* self);
void QToolButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QToolButton_virtualbase_MinimumSizeHint(const void* self);
void QToolButton_override_virtual_Event(void* self, intptr_t slot);
bool QToolButton_virtualbase_Event(void* self, QEvent* e);
void QToolButton_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QToolButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
void QToolButton_override_virtual_PaintEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QToolButton_override_virtual_ActionEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_ActionEvent(void* self, QActionEvent* param1);
void QToolButton_override_virtual_EnterEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_EnterEvent(void* self, QEnterEvent* param1);
void QToolButton_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_LeaveEvent(void* self, QEvent* param1);
void QToolButton_override_virtual_TimerEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
void QToolButton_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QToolButton_override_virtual_HitButton(void* self, intptr_t slot);
bool QToolButton_virtualbase_HitButton(const void* self, QPoint* pos);
void QToolButton_override_virtual_CheckStateSet(void* self, intptr_t slot);
void QToolButton_virtualbase_CheckStateSet(void* self);
void QToolButton_override_virtual_NextCheckState(void* self, intptr_t slot);
void QToolButton_virtualbase_NextCheckState(void* self);
void QToolButton_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QToolButton_virtualbase_InitStyleOption(const void* self, QStyleOptionToolButton* option);
void QToolButton_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* e);
void QToolButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
void QToolButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e);
void QToolButton_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_FocusInEvent(void* self, QFocusEvent* e);
void QToolButton_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QToolButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* e);
void QToolButton_Delete(QToolButton* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
