#pragma once
#ifndef MIQT_QT_GEN_QGROUPBOX_H
#define MIQT_QT_GEN_QGROUPBOX_H

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
class QByteArray;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QGroupBox;
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
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QByteArray QByteArray;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QGroupBox QGroupBox;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

void QGroupBox_new(QWidget* parent, QGroupBox** outptr_QGroupBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QGroupBox_new2(QGroupBox** outptr_QGroupBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QGroupBox_new3(struct miqt_string title, QGroupBox** outptr_QGroupBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QGroupBox_new4(struct miqt_string title, QWidget* parent, QGroupBox** outptr_QGroupBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QGroupBox_MetaObject(const QGroupBox* self);
void* QGroupBox_Metacast(QGroupBox* self, const char* param1);
struct miqt_string QGroupBox_Tr(const char* s);
struct miqt_string QGroupBox_TrUtf8(const char* s);
struct miqt_string QGroupBox_Title(const QGroupBox* self);
void QGroupBox_SetTitle(QGroupBox* self, struct miqt_string title);
int QGroupBox_Alignment(const QGroupBox* self);
void QGroupBox_SetAlignment(QGroupBox* self, int alignment);
QSize* QGroupBox_MinimumSizeHint(const QGroupBox* self);
bool QGroupBox_IsFlat(const QGroupBox* self);
void QGroupBox_SetFlat(QGroupBox* self, bool flat);
bool QGroupBox_IsCheckable(const QGroupBox* self);
void QGroupBox_SetCheckable(QGroupBox* self, bool checkable);
bool QGroupBox_IsChecked(const QGroupBox* self);
void QGroupBox_SetChecked(QGroupBox* self, bool checked);
void QGroupBox_Clicked(QGroupBox* self);
void QGroupBox_connect_Clicked(QGroupBox* self, intptr_t slot);
void QGroupBox_Toggled(QGroupBox* self, bool param1);
void QGroupBox_connect_Toggled(QGroupBox* self, intptr_t slot);
bool QGroupBox_Event(QGroupBox* self, QEvent* event);
void QGroupBox_ChildEvent(QGroupBox* self, QChildEvent* event);
void QGroupBox_ResizeEvent(QGroupBox* self, QResizeEvent* event);
void QGroupBox_PaintEvent(QGroupBox* self, QPaintEvent* event);
void QGroupBox_FocusInEvent(QGroupBox* self, QFocusEvent* event);
void QGroupBox_ChangeEvent(QGroupBox* self, QEvent* event);
void QGroupBox_MousePressEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_MouseMoveEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_MouseReleaseEvent(QGroupBox* self, QMouseEvent* event);
struct miqt_string QGroupBox_Tr2(const char* s, const char* c);
struct miqt_string QGroupBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QGroupBox_TrUtf82(const char* s, const char* c);
struct miqt_string QGroupBox_TrUtf83(const char* s, const char* c, int n);
void QGroupBox_Clicked1(QGroupBox* self, bool checked);
void QGroupBox_connect_Clicked1(QGroupBox* self, intptr_t slot);
void QGroupBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QGroupBox_virtualbase_MinimumSizeHint(const void* self);
void QGroupBox_override_virtual_Event(void* self, intptr_t slot);
bool QGroupBox_virtualbase_Event(void* self, QEvent* event);
void QGroupBox_override_virtual_ChildEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QGroupBox_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QGroupBox_override_virtual_PaintEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QGroupBox_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QGroupBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_ChangeEvent(void* self, QEvent* event);
void QGroupBox_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QGroupBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QGroupBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QGroupBox_override_virtual_DevType(void* self, intptr_t slot);
int QGroupBox_virtualbase_DevType(const void* self);
void QGroupBox_override_virtual_SetVisible(void* self, intptr_t slot);
void QGroupBox_virtualbase_SetVisible(void* self, bool visible);
void QGroupBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QGroupBox_virtualbase_SizeHint(const void* self);
void QGroupBox_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QGroupBox_virtualbase_HeightForWidth(const void* self, int param1);
void QGroupBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QGroupBox_virtualbase_HasHeightForWidth(const void* self);
void QGroupBox_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QGroupBox_virtualbase_PaintEngine(const void* self);
void QGroupBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QGroupBox_override_virtual_WheelEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QGroupBox_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QGroupBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QGroupBox_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QGroupBox_override_virtual_EnterEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_EnterEvent(void* self, QEvent* event);
void QGroupBox_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_LeaveEvent(void* self, QEvent* event);
void QGroupBox_override_virtual_MoveEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QGroupBox_override_virtual_CloseEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QGroupBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QGroupBox_override_virtual_TabletEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QGroupBox_override_virtual_ActionEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QGroupBox_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QGroupBox_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QGroupBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QGroupBox_override_virtual_DropEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_DropEvent(void* self, QDropEvent* event);
void QGroupBox_override_virtual_ShowEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QGroupBox_override_virtual_HideEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_HideEvent(void* self, QHideEvent* event);
void QGroupBox_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QGroupBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
void QGroupBox_override_virtual_Metric(void* self, intptr_t slot);
int QGroupBox_virtualbase_Metric(const void* self, int param1);
void QGroupBox_override_virtual_InitPainter(void* self, intptr_t slot);
void QGroupBox_virtualbase_InitPainter(const void* self, QPainter* painter);
void QGroupBox_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QGroupBox_virtualbase_Redirected(const void* self, QPoint* offset);
void QGroupBox_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QGroupBox_virtualbase_SharedPainter(const void* self);
void QGroupBox_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QGroupBox_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QGroupBox_virtualbase_InputMethodQuery(const void* self, int param1);
void QGroupBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QGroupBox_virtualbase_FocusNextPrevChild(void* self, bool next);
void QGroupBox_Delete(QGroupBox* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
