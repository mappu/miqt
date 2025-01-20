#pragma once
#ifndef MIQT_QT_GEN_QLINEEDIT_H
#define MIQT_QT_GEN_QLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QCompleter;
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
class QLineEdit;
class QMargins;
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
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QValidator;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QCompleter QCompleter;
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
typedef struct QLineEdit QLineEdit;
typedef struct QMargins QMargins;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValidator QValidator;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QLineEdit* QLineEdit_new(QWidget* parent);
QLineEdit* QLineEdit_new2();
QLineEdit* QLineEdit_new3(struct miqt_string param1);
QLineEdit* QLineEdit_new4(struct miqt_string param1, QWidget* parent);
void QLineEdit_virtbase(QLineEdit* src, QWidget** outptr_QWidget);
QMetaObject* QLineEdit_MetaObject(const QLineEdit* self);
void* QLineEdit_Metacast(QLineEdit* self, const char* param1);
struct miqt_string QLineEdit_Tr(const char* s);
struct miqt_string QLineEdit_TrUtf8(const char* s);
struct miqt_string QLineEdit_Text(const QLineEdit* self);
struct miqt_string QLineEdit_DisplayText(const QLineEdit* self);
struct miqt_string QLineEdit_PlaceholderText(const QLineEdit* self);
void QLineEdit_SetPlaceholderText(QLineEdit* self, struct miqt_string placeholderText);
int QLineEdit_MaxLength(const QLineEdit* self);
void QLineEdit_SetMaxLength(QLineEdit* self, int maxLength);
void QLineEdit_SetFrame(QLineEdit* self, bool frame);
bool QLineEdit_HasFrame(const QLineEdit* self);
void QLineEdit_SetClearButtonEnabled(QLineEdit* self, bool enable);
bool QLineEdit_IsClearButtonEnabled(const QLineEdit* self);
int QLineEdit_EchoMode(const QLineEdit* self);
void QLineEdit_SetEchoMode(QLineEdit* self, int echoMode);
bool QLineEdit_IsReadOnly(const QLineEdit* self);
void QLineEdit_SetReadOnly(QLineEdit* self, bool readOnly);
void QLineEdit_SetValidator(QLineEdit* self, QValidator* validator);
QValidator* QLineEdit_Validator(const QLineEdit* self);
void QLineEdit_SetCompleter(QLineEdit* self, QCompleter* completer);
QCompleter* QLineEdit_Completer(const QLineEdit* self);
QSize* QLineEdit_SizeHint(const QLineEdit* self);
QSize* QLineEdit_MinimumSizeHint(const QLineEdit* self);
int QLineEdit_CursorPosition(const QLineEdit* self);
void QLineEdit_SetCursorPosition(QLineEdit* self, int cursorPosition);
int QLineEdit_CursorPositionAt(QLineEdit* self, QPoint* pos);
void QLineEdit_SetAlignment(QLineEdit* self, int flag);
int QLineEdit_Alignment(const QLineEdit* self);
void QLineEdit_CursorForward(QLineEdit* self, bool mark);
void QLineEdit_CursorBackward(QLineEdit* self, bool mark);
void QLineEdit_CursorWordForward(QLineEdit* self, bool mark);
void QLineEdit_CursorWordBackward(QLineEdit* self, bool mark);
void QLineEdit_Backspace(QLineEdit* self);
void QLineEdit_Del(QLineEdit* self);
void QLineEdit_Home(QLineEdit* self, bool mark);
void QLineEdit_End(QLineEdit* self, bool mark);
bool QLineEdit_IsModified(const QLineEdit* self);
void QLineEdit_SetModified(QLineEdit* self, bool modified);
void QLineEdit_SetSelection(QLineEdit* self, int param1, int param2);
bool QLineEdit_HasSelectedText(const QLineEdit* self);
struct miqt_string QLineEdit_SelectedText(const QLineEdit* self);
int QLineEdit_SelectionStart(const QLineEdit* self);
int QLineEdit_SelectionEnd(const QLineEdit* self);
int QLineEdit_SelectionLength(const QLineEdit* self);
bool QLineEdit_IsUndoAvailable(const QLineEdit* self);
bool QLineEdit_IsRedoAvailable(const QLineEdit* self);
void QLineEdit_SetDragEnabled(QLineEdit* self, bool b);
bool QLineEdit_DragEnabled(const QLineEdit* self);
void QLineEdit_SetCursorMoveStyle(QLineEdit* self, int style);
int QLineEdit_CursorMoveStyle(const QLineEdit* self);
struct miqt_string QLineEdit_InputMask(const QLineEdit* self);
void QLineEdit_SetInputMask(QLineEdit* self, struct miqt_string inputMask);
bool QLineEdit_HasAcceptableInput(const QLineEdit* self);
void QLineEdit_SetTextMargins(QLineEdit* self, int left, int top, int right, int bottom);
void QLineEdit_SetTextMarginsWithMargins(QLineEdit* self, QMargins* margins);
void QLineEdit_GetTextMargins(const QLineEdit* self, int* left, int* top, int* right, int* bottom);
QMargins* QLineEdit_TextMargins(const QLineEdit* self);
void QLineEdit_AddAction(QLineEdit* self, QAction* action, int position);
QAction* QLineEdit_AddAction2(QLineEdit* self, QIcon* icon, int position);
void QLineEdit_SetText(QLineEdit* self, struct miqt_string text);
void QLineEdit_Clear(QLineEdit* self);
void QLineEdit_SelectAll(QLineEdit* self);
void QLineEdit_Undo(QLineEdit* self);
void QLineEdit_Redo(QLineEdit* self);
void QLineEdit_Cut(QLineEdit* self);
void QLineEdit_Copy(const QLineEdit* self);
void QLineEdit_Paste(QLineEdit* self);
void QLineEdit_Deselect(QLineEdit* self);
void QLineEdit_Insert(QLineEdit* self, struct miqt_string param1);
QMenu* QLineEdit_CreateStandardContextMenu(QLineEdit* self);
void QLineEdit_TextChanged(QLineEdit* self, struct miqt_string param1);
void QLineEdit_connect_TextChanged(QLineEdit* self, intptr_t slot);
void QLineEdit_TextEdited(QLineEdit* self, struct miqt_string param1);
void QLineEdit_connect_TextEdited(QLineEdit* self, intptr_t slot);
void QLineEdit_CursorPositionChanged(QLineEdit* self, int param1, int param2);
void QLineEdit_connect_CursorPositionChanged(QLineEdit* self, intptr_t slot);
void QLineEdit_ReturnPressed(QLineEdit* self);
void QLineEdit_connect_ReturnPressed(QLineEdit* self, intptr_t slot);
void QLineEdit_EditingFinished(QLineEdit* self);
void QLineEdit_connect_EditingFinished(QLineEdit* self, intptr_t slot);
void QLineEdit_SelectionChanged(QLineEdit* self);
void QLineEdit_connect_SelectionChanged(QLineEdit* self, intptr_t slot);
void QLineEdit_InputRejected(QLineEdit* self);
void QLineEdit_connect_InputRejected(QLineEdit* self, intptr_t slot);
void QLineEdit_MousePressEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_MouseMoveEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_MouseReleaseEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_MouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_KeyPressEvent(QLineEdit* self, QKeyEvent* param1);
void QLineEdit_FocusInEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_FocusOutEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_PaintEvent(QLineEdit* self, QPaintEvent* param1);
void QLineEdit_DragEnterEvent(QLineEdit* self, QDragEnterEvent* param1);
void QLineEdit_DragMoveEvent(QLineEdit* self, QDragMoveEvent* e);
void QLineEdit_DragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e);
void QLineEdit_DropEvent(QLineEdit* self, QDropEvent* param1);
void QLineEdit_ChangeEvent(QLineEdit* self, QEvent* param1);
void QLineEdit_ContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1);
void QLineEdit_InputMethodEvent(QLineEdit* self, QInputMethodEvent* param1);
QVariant* QLineEdit_InputMethodQuery(const QLineEdit* self, int param1);
QVariant* QLineEdit_InputMethodQuery2(const QLineEdit* self, int property, QVariant* argument);
bool QLineEdit_Event(QLineEdit* self, QEvent* param1);
struct miqt_string QLineEdit_Tr2(const char* s, const char* c);
struct miqt_string QLineEdit_Tr3(const char* s, const char* c, int n);
struct miqt_string QLineEdit_TrUtf82(const char* s, const char* c);
struct miqt_string QLineEdit_TrUtf83(const char* s, const char* c, int n);
void QLineEdit_CursorForward2(QLineEdit* self, bool mark, int steps);
void QLineEdit_CursorBackward2(QLineEdit* self, bool mark, int steps);
bool QLineEdit_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QLineEdit_virtualbase_SizeHint(const void* self);
bool QLineEdit_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QLineEdit_virtualbase_MinimumSizeHint(const void* self);
bool QLineEdit_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
bool QLineEdit_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
bool QLineEdit_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
bool QLineEdit_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QLineEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QLineEdit_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* param1);
bool QLineEdit_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1);
bool QLineEdit_override_virtual_PaintEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QLineEdit_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1);
bool QLineEdit_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e);
bool QLineEdit_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e);
bool QLineEdit_override_virtual_DropEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_DropEvent(void* self, QDropEvent* param1);
bool QLineEdit_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QLineEdit_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
bool QLineEdit_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QLineEdit_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QLineEdit_virtualbase_InputMethodQuery(const void* self, int param1);
bool QLineEdit_override_virtual_Event(void* self, intptr_t slot);
bool QLineEdit_virtualbase_Event(void* self, QEvent* param1);
bool QLineEdit_override_virtual_DevType(void* self, intptr_t slot);
int QLineEdit_virtualbase_DevType(const void* self);
bool QLineEdit_override_virtual_SetVisible(void* self, intptr_t slot);
void QLineEdit_virtualbase_SetVisible(void* self, bool visible);
bool QLineEdit_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QLineEdit_virtualbase_HeightForWidth(const void* self, int param1);
bool QLineEdit_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QLineEdit_virtualbase_HasHeightForWidth(const void* self);
bool QLineEdit_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QLineEdit_virtualbase_PaintEngine(const void* self);
bool QLineEdit_override_virtual_WheelEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QLineEdit_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QLineEdit_override_virtual_EnterEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_EnterEvent(void* self, QEvent* event);
bool QLineEdit_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QLineEdit_override_virtual_MoveEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QLineEdit_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QLineEdit_override_virtual_CloseEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QLineEdit_override_virtual_TabletEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QLineEdit_override_virtual_ActionEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QLineEdit_override_virtual_ShowEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QLineEdit_override_virtual_HideEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QLineEdit_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QLineEdit_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QLineEdit_override_virtual_Metric(void* self, intptr_t slot);
int QLineEdit_virtualbase_Metric(const void* self, int param1);
bool QLineEdit_override_virtual_InitPainter(void* self, intptr_t slot);
void QLineEdit_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QLineEdit_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QLineEdit_virtualbase_Redirected(const void* self, QPoint* offset);
bool QLineEdit_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QLineEdit_virtualbase_SharedPainter(const void* self);
bool QLineEdit_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QLineEdit_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QLineEdit_override_virtual_EventFilter(void* self, intptr_t slot);
bool QLineEdit_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QLineEdit_override_virtual_TimerEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QLineEdit_override_virtual_ChildEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QLineEdit_override_virtual_CustomEvent(void* self, intptr_t slot);
void QLineEdit_virtualbase_CustomEvent(void* self, QEvent* event);
bool QLineEdit_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QLineEdit_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QLineEdit_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QLineEdit_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QLineEdit_Delete(QLineEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
