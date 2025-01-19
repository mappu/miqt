#pragma once
#ifndef MIQT_QT_GEN_QPUSHBUTTON_H
#define MIQT_QT_GEN_QPUSHBUTTON_H

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
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
class QMenu;
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
class QPushButton;
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
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMenu QMenu;
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
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QPushButton* QPushButton_new(QWidget* parent);
QPushButton* QPushButton_new2();
QPushButton* QPushButton_new3(struct miqt_string text);
QPushButton* QPushButton_new4(QIcon* icon, struct miqt_string text);
QPushButton* QPushButton_new5(struct miqt_string text, QWidget* parent);
QPushButton* QPushButton_new6(QIcon* icon, struct miqt_string text, QWidget* parent);
void QPushButton_virtbase(QPushButton* src, QAbstractButton** outptr_QAbstractButton);
QMetaObject* QPushButton_MetaObject(const QPushButton* self);
void* QPushButton_Metacast(QPushButton* self, const char* param1);
struct miqt_string QPushButton_Tr(const char* s);
struct miqt_string QPushButton_TrUtf8(const char* s);
QSize* QPushButton_SizeHint(const QPushButton* self);
QSize* QPushButton_MinimumSizeHint(const QPushButton* self);
bool QPushButton_AutoDefault(const QPushButton* self);
void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault);
bool QPushButton_IsDefault(const QPushButton* self);
void QPushButton_SetDefault(QPushButton* self, bool defaultVal);
void QPushButton_SetMenu(QPushButton* self, QMenu* menu);
QMenu* QPushButton_Menu(const QPushButton* self);
void QPushButton_SetFlat(QPushButton* self, bool flat);
bool QPushButton_IsFlat(const QPushButton* self);
void QPushButton_ShowMenu(QPushButton* self);
bool QPushButton_Event(QPushButton* self, QEvent* e);
void QPushButton_PaintEvent(QPushButton* self, QPaintEvent* param1);
void QPushButton_KeyPressEvent(QPushButton* self, QKeyEvent* param1);
void QPushButton_FocusInEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_FocusOutEvent(QPushButton* self, QFocusEvent* param1);
bool QPushButton_HitButton(const QPushButton* self, QPoint* pos);
struct miqt_string QPushButton_Tr2(const char* s, const char* c);
struct miqt_string QPushButton_Tr3(const char* s, const char* c, int n);
struct miqt_string QPushButton_TrUtf82(const char* s, const char* c);
struct miqt_string QPushButton_TrUtf83(const char* s, const char* c, int n);
bool QPushButton_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QPushButton_virtualbase_SizeHint(const void* self);
bool QPushButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QPushButton_virtualbase_MinimumSizeHint(const void* self);
bool QPushButton_override_virtual_Event(void* self, intptr_t slot);
bool QPushButton_virtualbase_Event(void* self, QEvent* e);
bool QPushButton_override_virtual_PaintEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QPushButton_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QPushButton_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_FocusInEvent(void* self, QFocusEvent* param1);
bool QPushButton_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1);
bool QPushButton_override_virtual_HitButton(void* self, intptr_t slot);
bool QPushButton_virtualbase_HitButton(const void* self, QPoint* pos);
bool QPushButton_override_virtual_CheckStateSet(void* self, intptr_t slot);
void QPushButton_virtualbase_CheckStateSet(void* self);
bool QPushButton_override_virtual_NextCheckState(void* self, intptr_t slot);
void QPushButton_virtualbase_NextCheckState(void* self);
bool QPushButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
bool QPushButton_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_MousePressEvent(void* self, QMouseEvent* e);
bool QPushButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
bool QPushButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e);
bool QPushButton_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_ChangeEvent(void* self, QEvent* e);
bool QPushButton_override_virtual_TimerEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_TimerEvent(void* self, QTimerEvent* e);
bool QPushButton_override_virtual_DevType(void* self, intptr_t slot);
int QPushButton_virtualbase_DevType(const void* self);
bool QPushButton_override_virtual_SetVisible(void* self, intptr_t slot);
void QPushButton_virtualbase_SetVisible(void* self, bool visible);
bool QPushButton_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QPushButton_virtualbase_HeightForWidth(const void* self, int param1);
bool QPushButton_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QPushButton_virtualbase_HasHeightForWidth(const void* self);
bool QPushButton_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QPushButton_virtualbase_PaintEngine(const void* self);
bool QPushButton_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QPushButton_override_virtual_WheelEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QPushButton_override_virtual_EnterEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_EnterEvent(void* self, QEvent* event);
bool QPushButton_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QPushButton_override_virtual_MoveEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QPushButton_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QPushButton_override_virtual_CloseEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QPushButton_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QPushButton_override_virtual_TabletEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QPushButton_override_virtual_ActionEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QPushButton_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QPushButton_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QPushButton_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QPushButton_override_virtual_DropEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QPushButton_override_virtual_ShowEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QPushButton_override_virtual_HideEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QPushButton_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QPushButton_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QPushButton_override_virtual_Metric(void* self, intptr_t slot);
int QPushButton_virtualbase_Metric(const void* self, int param1);
bool QPushButton_override_virtual_InitPainter(void* self, intptr_t slot);
void QPushButton_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QPushButton_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QPushButton_virtualbase_Redirected(const void* self, QPoint* offset);
bool QPushButton_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QPushButton_virtualbase_SharedPainter(const void* self);
bool QPushButton_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QPushButton_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QPushButton_virtualbase_InputMethodQuery(const void* self, int param1);
bool QPushButton_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QPushButton_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QPushButton_override_virtual_EventFilter(void* self, intptr_t slot);
bool QPushButton_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QPushButton_override_virtual_ChildEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QPushButton_override_virtual_CustomEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_CustomEvent(void* self, QEvent* event);
bool QPushButton_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QPushButton_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QPushButton_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QPushButton_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QPushButton_Delete(QPushButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
