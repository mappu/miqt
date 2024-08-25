#ifndef GEN_QACCESSIBLE_H
#define GEN_QACCESSIBLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessible;
class QAccessibleActionInterface;
class QAccessibleEditableTextInterface;
class QAccessibleEvent;
class QAccessibleImageInterface;
class QAccessibleInterface;
class QAccessibleStateChangeEvent;
class QAccessibleTableCellInterface;
class QAccessibleTableInterface;
class QAccessibleTableModelChangeEvent;
class QAccessibleTextCursorEvent;
class QAccessibleTextInsertEvent;
class QAccessibleTextInterface;
class QAccessibleTextRemoveEvent;
class QAccessibleTextSelectionEvent;
class QAccessibleTextUpdateEvent;
class QAccessibleValueChangeEvent;
class QAccessibleValueInterface;
class QColor;
class QObject;
class QPoint;
class QRect;
class QSize;
class QVariant;
class QWindow;
#else
typedef struct QAccessible QAccessible;
typedef struct QAccessibleActionInterface QAccessibleActionInterface;
typedef struct QAccessibleEditableTextInterface QAccessibleEditableTextInterface;
typedef struct QAccessibleEvent QAccessibleEvent;
typedef struct QAccessibleImageInterface QAccessibleImageInterface;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessibleStateChangeEvent QAccessibleStateChangeEvent;
typedef struct QAccessibleTableCellInterface QAccessibleTableCellInterface;
typedef struct QAccessibleTableInterface QAccessibleTableInterface;
typedef struct QAccessibleTableModelChangeEvent QAccessibleTableModelChangeEvent;
typedef struct QAccessibleTextCursorEvent QAccessibleTextCursorEvent;
typedef struct QAccessibleTextInsertEvent QAccessibleTextInsertEvent;
typedef struct QAccessibleTextInterface QAccessibleTextInterface;
typedef struct QAccessibleTextRemoveEvent QAccessibleTextRemoveEvent;
typedef struct QAccessibleTextSelectionEvent QAccessibleTextSelectionEvent;
typedef struct QAccessibleTextUpdateEvent QAccessibleTextUpdateEvent;
typedef struct QAccessibleValueChangeEvent QAccessibleValueChangeEvent;
typedef struct QAccessibleValueInterface QAccessibleValueInterface;
typedef struct QColor QColor;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWindow QWindow;
#endif

QAccessibleInterface* QAccessible_QueryAccessibleInterface(QObject* param1);
void QAccessible_UpdateAccessibility(QAccessibleEvent* event);
bool QAccessible_IsActive();
void QAccessible_SetActive(bool active);
void QAccessible_SetRootObject(QObject* object);
void QAccessible_Cleanup();
void QAccessible_Delete(QAccessible* self);

bool QAccessibleInterface_IsValid(QAccessibleInterface* self);
QObject* QAccessibleInterface_Object(QAccessibleInterface* self);
QWindow* QAccessibleInterface_Window(QAccessibleInterface* self);
QAccessibleInterface* QAccessibleInterface_FocusChild(QAccessibleInterface* self);
QAccessibleInterface* QAccessibleInterface_ChildAt(QAccessibleInterface* self, int x, int y);
QAccessibleInterface* QAccessibleInterface_Parent(QAccessibleInterface* self);
QAccessibleInterface* QAccessibleInterface_Child(QAccessibleInterface* self, int index);
int QAccessibleInterface_ChildCount(QAccessibleInterface* self);
int QAccessibleInterface_IndexOfChild(QAccessibleInterface* self, QAccessibleInterface* param1);
QRect* QAccessibleInterface_Rect(QAccessibleInterface* self);
QColor* QAccessibleInterface_ForegroundColor(QAccessibleInterface* self);
QColor* QAccessibleInterface_BackgroundColor(QAccessibleInterface* self);
QAccessibleTextInterface* QAccessibleInterface_TextInterface(QAccessibleInterface* self);
QAccessibleEditableTextInterface* QAccessibleInterface_EditableTextInterface(QAccessibleInterface* self);
QAccessibleValueInterface* QAccessibleInterface_ValueInterface(QAccessibleInterface* self);
QAccessibleActionInterface* QAccessibleInterface_ActionInterface(QAccessibleInterface* self);
QAccessibleImageInterface* QAccessibleInterface_ImageInterface(QAccessibleInterface* self);
QAccessibleTableInterface* QAccessibleInterface_TableInterface(QAccessibleInterface* self);
QAccessibleTableCellInterface* QAccessibleInterface_TableCellInterface(QAccessibleInterface* self);

void QAccessibleTextInterface_Selection(QAccessibleTextInterface* self, int selectionIndex, int* startOffset, int* endOffset);
int QAccessibleTextInterface_SelectionCount(QAccessibleTextInterface* self);
void QAccessibleTextInterface_AddSelection(QAccessibleTextInterface* self, int startOffset, int endOffset);
void QAccessibleTextInterface_RemoveSelection(QAccessibleTextInterface* self, int selectionIndex);
void QAccessibleTextInterface_SetSelection(QAccessibleTextInterface* self, int selectionIndex, int startOffset, int endOffset);
int QAccessibleTextInterface_CursorPosition(QAccessibleTextInterface* self);
void QAccessibleTextInterface_SetCursorPosition(QAccessibleTextInterface* self, int position);
void QAccessibleTextInterface_Text(QAccessibleTextInterface* self, int startOffset, int endOffset, char** _out, int* _out_Strlen);
int QAccessibleTextInterface_CharacterCount(QAccessibleTextInterface* self);
QRect* QAccessibleTextInterface_CharacterRect(QAccessibleTextInterface* self, int offset);
int QAccessibleTextInterface_OffsetAtPoint(QAccessibleTextInterface* self, QPoint* point);
void QAccessibleTextInterface_ScrollToSubstring(QAccessibleTextInterface* self, int startIndex, int endIndex);
void QAccessibleTextInterface_Attributes(QAccessibleTextInterface* self, int offset, int* startOffset, int* endOffset, char** _out, int* _out_Strlen);
void QAccessibleTextInterface_OperatorAssign(QAccessibleTextInterface* self, QAccessibleTextInterface* param1);
void QAccessibleTextInterface_Delete(QAccessibleTextInterface* self);

void QAccessibleEditableTextInterface_DeleteText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset);
void QAccessibleEditableTextInterface_InsertText(QAccessibleEditableTextInterface* self, int offset, const char* text, size_t text_Strlen);
void QAccessibleEditableTextInterface_ReplaceText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset, const char* text, size_t text_Strlen);
void QAccessibleEditableTextInterface_OperatorAssign(QAccessibleEditableTextInterface* self, QAccessibleEditableTextInterface* param1);
void QAccessibleEditableTextInterface_Delete(QAccessibleEditableTextInterface* self);

QVariant* QAccessibleValueInterface_CurrentValue(QAccessibleValueInterface* self);
void QAccessibleValueInterface_SetCurrentValue(QAccessibleValueInterface* self, QVariant* value);
QVariant* QAccessibleValueInterface_MaximumValue(QAccessibleValueInterface* self);
QVariant* QAccessibleValueInterface_MinimumValue(QAccessibleValueInterface* self);
QVariant* QAccessibleValueInterface_MinimumStepSize(QAccessibleValueInterface* self);
void QAccessibleValueInterface_OperatorAssign(QAccessibleValueInterface* self, QAccessibleValueInterface* param1);
void QAccessibleValueInterface_Delete(QAccessibleValueInterface* self);

bool QAccessibleTableCellInterface_IsSelected(QAccessibleTableCellInterface* self);
void QAccessibleTableCellInterface_ColumnHeaderCells(QAccessibleTableCellInterface* self, QAccessibleInterface*** _out, size_t* _out_len);
void QAccessibleTableCellInterface_RowHeaderCells(QAccessibleTableCellInterface* self, QAccessibleInterface*** _out, size_t* _out_len);
int QAccessibleTableCellInterface_ColumnIndex(QAccessibleTableCellInterface* self);
int QAccessibleTableCellInterface_RowIndex(QAccessibleTableCellInterface* self);
int QAccessibleTableCellInterface_ColumnExtent(QAccessibleTableCellInterface* self);
int QAccessibleTableCellInterface_RowExtent(QAccessibleTableCellInterface* self);
QAccessibleInterface* QAccessibleTableCellInterface_Table(QAccessibleTableCellInterface* self);
void QAccessibleTableCellInterface_OperatorAssign(QAccessibleTableCellInterface* self, QAccessibleTableCellInterface* param1);
void QAccessibleTableCellInterface_Delete(QAccessibleTableCellInterface* self);

QAccessibleInterface* QAccessibleTableInterface_Caption(QAccessibleTableInterface* self);
QAccessibleInterface* QAccessibleTableInterface_Summary(QAccessibleTableInterface* self);
QAccessibleInterface* QAccessibleTableInterface_CellAt(QAccessibleTableInterface* self, int row, int column);
int QAccessibleTableInterface_SelectedCellCount(QAccessibleTableInterface* self);
void QAccessibleTableInterface_SelectedCells(QAccessibleTableInterface* self, QAccessibleInterface*** _out, size_t* _out_len);
void QAccessibleTableInterface_ColumnDescription(QAccessibleTableInterface* self, int column, char** _out, int* _out_Strlen);
void QAccessibleTableInterface_RowDescription(QAccessibleTableInterface* self, int row, char** _out, int* _out_Strlen);
int QAccessibleTableInterface_SelectedColumnCount(QAccessibleTableInterface* self);
int QAccessibleTableInterface_SelectedRowCount(QAccessibleTableInterface* self);
int QAccessibleTableInterface_ColumnCount(QAccessibleTableInterface* self);
int QAccessibleTableInterface_RowCount(QAccessibleTableInterface* self);
void QAccessibleTableInterface_SelectedColumns(QAccessibleTableInterface* self, int** _out, size_t* _out_len);
void QAccessibleTableInterface_SelectedRows(QAccessibleTableInterface* self, int** _out, size_t* _out_len);
bool QAccessibleTableInterface_IsColumnSelected(QAccessibleTableInterface* self, int column);
bool QAccessibleTableInterface_IsRowSelected(QAccessibleTableInterface* self, int row);
bool QAccessibleTableInterface_SelectRow(QAccessibleTableInterface* self, int row);
bool QAccessibleTableInterface_SelectColumn(QAccessibleTableInterface* self, int column);
bool QAccessibleTableInterface_UnselectRow(QAccessibleTableInterface* self, int row);
bool QAccessibleTableInterface_UnselectColumn(QAccessibleTableInterface* self, int column);
void QAccessibleTableInterface_ModelChange(QAccessibleTableInterface* self, QAccessibleTableModelChangeEvent* event);
void QAccessibleTableInterface_Delete(QAccessibleTableInterface* self);

void QAccessibleActionInterface_Tr(char* sourceText, char** _out, int* _out_Strlen);
void QAccessibleActionInterface_TrUtf8(char* sourceText, char** _out, int* _out_Strlen);
void QAccessibleActionInterface_ActionNames(QAccessibleActionInterface* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QAccessibleActionInterface_LocalizedActionName(QAccessibleActionInterface* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen);
void QAccessibleActionInterface_LocalizedActionDescription(QAccessibleActionInterface* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen);
void QAccessibleActionInterface_DoAction(QAccessibleActionInterface* self, const char* actionName, size_t actionName_Strlen);
void QAccessibleActionInterface_KeyBindingsForAction(QAccessibleActionInterface* self, const char* actionName, size_t actionName_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QAccessibleActionInterface_PressAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_IncreaseAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_DecreaseAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_ShowMenuAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_SetFocusAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_ToggleAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_ScrollLeftAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_ScrollRightAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_ScrollUpAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_ScrollDownAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_NextPageAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_PreviousPageAction(char** _out, int* _out_Strlen);
void QAccessibleActionInterface_OperatorAssign(QAccessibleActionInterface* self, QAccessibleActionInterface* param1);
void QAccessibleActionInterface_Tr2(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen);
void QAccessibleActionInterface_Tr3(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen);
void QAccessibleActionInterface_TrUtf82(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen);
void QAccessibleActionInterface_TrUtf83(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen);
void QAccessibleActionInterface_Delete(QAccessibleActionInterface* self);

void QAccessibleImageInterface_ImageDescription(QAccessibleImageInterface* self, char** _out, int* _out_Strlen);
QSize* QAccessibleImageInterface_ImageSize(QAccessibleImageInterface* self);
QPoint* QAccessibleImageInterface_ImagePosition(QAccessibleImageInterface* self);
void QAccessibleImageInterface_OperatorAssign(QAccessibleImageInterface* self, QAccessibleImageInterface* param1);
void QAccessibleImageInterface_Delete(QAccessibleImageInterface* self);

QObject* QAccessibleEvent_Object(QAccessibleEvent* self);
void QAccessibleEvent_SetChild(QAccessibleEvent* self, int chld);
int QAccessibleEvent_Child(QAccessibleEvent* self);
QAccessibleInterface* QAccessibleEvent_AccessibleInterface(QAccessibleEvent* self);
void QAccessibleEvent_Delete(QAccessibleEvent* self);

void QAccessibleStateChangeEvent_Delete(QAccessibleStateChangeEvent* self);

QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new(QObject* obj, int cursorPos);
QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new2(QAccessibleInterface* iface, int cursorPos);
void QAccessibleTextCursorEvent_SetCursorPosition(QAccessibleTextCursorEvent* self, int position);
int QAccessibleTextCursorEvent_CursorPosition(QAccessibleTextCursorEvent* self);
void QAccessibleTextCursorEvent_Delete(QAccessibleTextCursorEvent* self);

QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new(QObject* obj, int start, int end);
QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new2(QAccessibleInterface* iface, int start, int end);
void QAccessibleTextSelectionEvent_SetSelection(QAccessibleTextSelectionEvent* self, int start, int end);
int QAccessibleTextSelectionEvent_SelectionStart(QAccessibleTextSelectionEvent* self);
int QAccessibleTextSelectionEvent_SelectionEnd(QAccessibleTextSelectionEvent* self);
void QAccessibleTextSelectionEvent_Delete(QAccessibleTextSelectionEvent* self);

QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new(QObject* obj, int position, const char* text, size_t text_Strlen);
QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new2(QAccessibleInterface* iface, int position, const char* text, size_t text_Strlen);
void QAccessibleTextInsertEvent_TextInserted(QAccessibleTextInsertEvent* self, char** _out, int* _out_Strlen);
int QAccessibleTextInsertEvent_ChangePosition(QAccessibleTextInsertEvent* self);
void QAccessibleTextInsertEvent_Delete(QAccessibleTextInsertEvent* self);

QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new(QObject* obj, int position, const char* text, size_t text_Strlen);
QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new2(QAccessibleInterface* iface, int position, const char* text, size_t text_Strlen);
void QAccessibleTextRemoveEvent_TextRemoved(QAccessibleTextRemoveEvent* self, char** _out, int* _out_Strlen);
int QAccessibleTextRemoveEvent_ChangePosition(QAccessibleTextRemoveEvent* self);
void QAccessibleTextRemoveEvent_Delete(QAccessibleTextRemoveEvent* self);

QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new(QObject* obj, int position, const char* oldText, size_t oldText_Strlen, const char* text, size_t text_Strlen);
QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new2(QAccessibleInterface* iface, int position, const char* oldText, size_t oldText_Strlen, const char* text, size_t text_Strlen);
void QAccessibleTextUpdateEvent_TextRemoved(QAccessibleTextUpdateEvent* self, char** _out, int* _out_Strlen);
void QAccessibleTextUpdateEvent_TextInserted(QAccessibleTextUpdateEvent* self, char** _out, int* _out_Strlen);
int QAccessibleTextUpdateEvent_ChangePosition(QAccessibleTextUpdateEvent* self);
void QAccessibleTextUpdateEvent_Delete(QAccessibleTextUpdateEvent* self);

QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new(QObject* obj, QVariant* val);
QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new2(QAccessibleInterface* iface, QVariant* val);
void QAccessibleValueChangeEvent_SetValue(QAccessibleValueChangeEvent* self, QVariant* val);
QVariant* QAccessibleValueChangeEvent_Value(QAccessibleValueChangeEvent* self);
void QAccessibleValueChangeEvent_Delete(QAccessibleValueChangeEvent* self);

void QAccessibleTableModelChangeEvent_SetFirstRow(QAccessibleTableModelChangeEvent* self, int row);
void QAccessibleTableModelChangeEvent_SetFirstColumn(QAccessibleTableModelChangeEvent* self, int col);
void QAccessibleTableModelChangeEvent_SetLastRow(QAccessibleTableModelChangeEvent* self, int row);
void QAccessibleTableModelChangeEvent_SetLastColumn(QAccessibleTableModelChangeEvent* self, int col);
int QAccessibleTableModelChangeEvent_FirstRow(QAccessibleTableModelChangeEvent* self);
int QAccessibleTableModelChangeEvent_FirstColumn(QAccessibleTableModelChangeEvent* self);
int QAccessibleTableModelChangeEvent_LastRow(QAccessibleTableModelChangeEvent* self);
int QAccessibleTableModelChangeEvent_LastColumn(QAccessibleTableModelChangeEvent* self);
void QAccessibleTableModelChangeEvent_Delete(QAccessibleTableModelChangeEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
