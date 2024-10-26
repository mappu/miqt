#ifndef GEN_QLINEEDIT_H
#define GEN_QLINEEDIT_H

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
class QCompleter;
class QEvent;
class QIcon;
class QLineEdit;
class QMargins;
class QMenu;
class QMetaObject;
class QPoint;
class QSize;
class QTimerEvent;
class QValidator;
class QVariant;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QCompleter QCompleter;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QLineEdit QLineEdit;
typedef struct QMargins QMargins;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValidator QValidator;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QLineEdit* QLineEdit_new(QWidget* parent);
QLineEdit* QLineEdit_new2();
QLineEdit* QLineEdit_new3(struct miqt_string param1);
QLineEdit* QLineEdit_new4(struct miqt_string param1, QWidget* parent);
QMetaObject* QLineEdit_MetaObject(const QLineEdit* self);
void* QLineEdit_Metacast(QLineEdit* self, const char* param1);
struct miqt_string QLineEdit_Tr(const char* s);
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
QVariant* QLineEdit_InputMethodQuery(const QLineEdit* self, int param1);
QVariant* QLineEdit_InputMethodQuery2(const QLineEdit* self, int property, QVariant* argument);
void QLineEdit_TimerEvent(QLineEdit* self, QTimerEvent* param1);
bool QLineEdit_Event(QLineEdit* self, QEvent* param1);
struct miqt_string QLineEdit_Tr2(const char* s, const char* c);
struct miqt_string QLineEdit_Tr3(const char* s, const char* c, int n);
void QLineEdit_CursorForward2(QLineEdit* self, bool mark, int steps);
void QLineEdit_CursorBackward2(QLineEdit* self, bool mark, int steps);
void QLineEdit_Delete(QLineEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
