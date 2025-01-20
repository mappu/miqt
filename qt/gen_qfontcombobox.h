#pragma once
#ifndef MIQT_QT_GEN_QFONTCOMBOBOX_H
#define MIQT_QT_GEN_QFONTCOMBOBOX_H

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
class QChildEvent;
class QCloseEvent;
class QComboBox;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFont;
class QFontComboBox;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
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
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QComboBox QComboBox;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontComboBox QFontComboBox;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
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

QFontComboBox* QFontComboBox_new(QWidget* parent);
QFontComboBox* QFontComboBox_new2();
void QFontComboBox_virtbase(QFontComboBox* src, QComboBox** outptr_QComboBox);
QMetaObject* QFontComboBox_MetaObject(const QFontComboBox* self);
void* QFontComboBox_Metacast(QFontComboBox* self, const char* param1);
struct miqt_string QFontComboBox_Tr(const char* s);
struct miqt_string QFontComboBox_TrUtf8(const char* s);
void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem);
int QFontComboBox_WritingSystem(const QFontComboBox* self);
void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters);
int QFontComboBox_FontFilters(const QFontComboBox* self);
QFont* QFontComboBox_CurrentFont(const QFontComboBox* self);
QSize* QFontComboBox_SizeHint(const QFontComboBox* self);
void QFontComboBox_SetCurrentFont(QFontComboBox* self, QFont* f);
void QFontComboBox_CurrentFontChanged(QFontComboBox* self, QFont* f);
void QFontComboBox_connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_Event(QFontComboBox* self, QEvent* e);
struct miqt_string QFontComboBox_Tr2(const char* s, const char* c);
struct miqt_string QFontComboBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QFontComboBox_TrUtf82(const char* s, const char* c);
struct miqt_string QFontComboBox_TrUtf83(const char* s, const char* c, int n);
bool QFontComboBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QFontComboBox_virtualbase_SizeHint(const void* self);
bool QFontComboBox_override_virtual_Event(void* self, intptr_t slot);
bool QFontComboBox_virtualbase_Event(void* self, QEvent* e);
bool QFontComboBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QFontComboBox_virtualbase_MinimumSizeHint(const void* self);
bool QFontComboBox_override_virtual_ShowPopup(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ShowPopup(void* self);
bool QFontComboBox_override_virtual_HidePopup(void* self, intptr_t slot);
void QFontComboBox_virtualbase_HidePopup(void* self);
bool QFontComboBox_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QFontComboBox_virtualbase_InputMethodQuery(const void* self, int param1);
bool QFontComboBox_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_FocusInEvent(void* self, QFocusEvent* e);
bool QFontComboBox_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* e);
bool QFontComboBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ChangeEvent(void* self, QEvent* e);
bool QFontComboBox_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ResizeEvent(void* self, QResizeEvent* e);
bool QFontComboBox_override_virtual_PaintEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_PaintEvent(void* self, QPaintEvent* e);
bool QFontComboBox_override_virtual_ShowEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ShowEvent(void* self, QShowEvent* e);
bool QFontComboBox_override_virtual_HideEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_HideEvent(void* self, QHideEvent* e);
bool QFontComboBox_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_MousePressEvent(void* self, QMouseEvent* e);
bool QFontComboBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
bool QFontComboBox_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* e);
bool QFontComboBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
bool QFontComboBox_override_virtual_WheelEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_WheelEvent(void* self, QWheelEvent* e);
bool QFontComboBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e);
bool QFontComboBox_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QFontComboBox_override_virtual_DevType(void* self, intptr_t slot);
int QFontComboBox_virtualbase_DevType(const void* self);
bool QFontComboBox_override_virtual_SetVisible(void* self, intptr_t slot);
void QFontComboBox_virtualbase_SetVisible(void* self, bool visible);
bool QFontComboBox_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QFontComboBox_virtualbase_HeightForWidth(const void* self, int param1);
bool QFontComboBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QFontComboBox_virtualbase_HasHeightForWidth(const void* self);
bool QFontComboBox_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QFontComboBox_virtualbase_PaintEngine(const void* self);
bool QFontComboBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QFontComboBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QFontComboBox_override_virtual_EnterEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_EnterEvent(void* self, QEvent* event);
bool QFontComboBox_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QFontComboBox_override_virtual_MoveEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QFontComboBox_override_virtual_CloseEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QFontComboBox_override_virtual_TabletEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QFontComboBox_override_virtual_ActionEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QFontComboBox_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QFontComboBox_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QFontComboBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QFontComboBox_override_virtual_DropEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QFontComboBox_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QFontComboBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QFontComboBox_override_virtual_Metric(void* self, intptr_t slot);
int QFontComboBox_virtualbase_Metric(const void* self, int param1);
bool QFontComboBox_override_virtual_InitPainter(void* self, intptr_t slot);
void QFontComboBox_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QFontComboBox_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QFontComboBox_virtualbase_Redirected(const void* self, QPoint* offset);
bool QFontComboBox_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QFontComboBox_virtualbase_SharedPainter(const void* self);
bool QFontComboBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QFontComboBox_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QFontComboBox_override_virtual_EventFilter(void* self, intptr_t slot);
bool QFontComboBox_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QFontComboBox_override_virtual_TimerEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QFontComboBox_override_virtual_ChildEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QFontComboBox_override_virtual_CustomEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_CustomEvent(void* self, QEvent* event);
bool QFontComboBox_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QFontComboBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QFontComboBox_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QFontComboBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QFontComboBox_Delete(QFontComboBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
