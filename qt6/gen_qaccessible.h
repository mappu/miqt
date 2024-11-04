#ifndef GEN_QACCESSIBLE_H
#define GEN_QACCESSIBLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State)
typedef QAccessible::State QAccessible__State;
#else
class QAccessible__State;
#endif
class QAccessibleActionInterface;
class QAccessibleEditableTextInterface;
class QAccessibleEvent;
class QAccessibleHyperlinkInterface;
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
typedef struct QAccessible__State QAccessible__State;
typedef struct QAccessibleActionInterface QAccessibleActionInterface;
typedef struct QAccessibleEditableTextInterface QAccessibleEditableTextInterface;
typedef struct QAccessibleEvent QAccessibleEvent;
typedef struct QAccessibleHyperlinkInterface QAccessibleHyperlinkInterface;
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

bool QAccessibleInterface_IsValid(const QAccessibleInterface* self);
QObject* QAccessibleInterface_Object(const QAccessibleInterface* self);
QWindow* QAccessibleInterface_Window(const QAccessibleInterface* self);
QAccessibleInterface* QAccessibleInterface_FocusChild(const QAccessibleInterface* self);
QAccessibleInterface* QAccessibleInterface_ChildAt(const QAccessibleInterface* self, int x, int y);
QAccessibleInterface* QAccessibleInterface_Parent(const QAccessibleInterface* self);
QAccessibleInterface* QAccessibleInterface_Child(const QAccessibleInterface* self, int index);
int QAccessibleInterface_ChildCount(const QAccessibleInterface* self);
int QAccessibleInterface_IndexOfChild(const QAccessibleInterface* self, QAccessibleInterface* param1);
struct miqt_string QAccessibleInterface_Text(const QAccessibleInterface* self, int t);
void QAccessibleInterface_SetText(QAccessibleInterface* self, int t, struct miqt_string text);
QRect* QAccessibleInterface_Rect(const QAccessibleInterface* self);
int QAccessibleInterface_Role(const QAccessibleInterface* self);
QAccessible__State* QAccessibleInterface_State(const QAccessibleInterface* self);
QColor* QAccessibleInterface_ForegroundColor(const QAccessibleInterface* self);
QColor* QAccessibleInterface_BackgroundColor(const QAccessibleInterface* self);
QAccessibleTextInterface* QAccessibleInterface_TextInterface(QAccessibleInterface* self);
QAccessibleEditableTextInterface* QAccessibleInterface_EditableTextInterface(QAccessibleInterface* self);
QAccessibleValueInterface* QAccessibleInterface_ValueInterface(QAccessibleInterface* self);
QAccessibleActionInterface* QAccessibleInterface_ActionInterface(QAccessibleInterface* self);
QAccessibleImageInterface* QAccessibleInterface_ImageInterface(QAccessibleInterface* self);
QAccessibleTableInterface* QAccessibleInterface_TableInterface(QAccessibleInterface* self);
QAccessibleTableCellInterface* QAccessibleInterface_TableCellInterface(QAccessibleInterface* self);
QAccessibleHyperlinkInterface* QAccessibleInterface_HyperlinkInterface(QAccessibleInterface* self);
void QAccessibleInterface_VirtualHook(QAccessibleInterface* self, int id, void* data);
void* QAccessibleInterface_InterfaceCast(QAccessibleInterface* self, int param1);

void QAccessibleTextInterface_Selection(const QAccessibleTextInterface* self, int selectionIndex, int* startOffset, int* endOffset);
int QAccessibleTextInterface_SelectionCount(const QAccessibleTextInterface* self);
void QAccessibleTextInterface_AddSelection(QAccessibleTextInterface* self, int startOffset, int endOffset);
void QAccessibleTextInterface_RemoveSelection(QAccessibleTextInterface* self, int selectionIndex);
void QAccessibleTextInterface_SetSelection(QAccessibleTextInterface* self, int selectionIndex, int startOffset, int endOffset);
int QAccessibleTextInterface_CursorPosition(const QAccessibleTextInterface* self);
void QAccessibleTextInterface_SetCursorPosition(QAccessibleTextInterface* self, int position);
struct miqt_string QAccessibleTextInterface_Text(const QAccessibleTextInterface* self, int startOffset, int endOffset);
struct miqt_string QAccessibleTextInterface_TextBeforeOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset);
struct miqt_string QAccessibleTextInterface_TextAfterOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset);
struct miqt_string QAccessibleTextInterface_TextAtOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset);
int QAccessibleTextInterface_CharacterCount(const QAccessibleTextInterface* self);
QRect* QAccessibleTextInterface_CharacterRect(const QAccessibleTextInterface* self, int offset);
int QAccessibleTextInterface_OffsetAtPoint(const QAccessibleTextInterface* self, QPoint* point);
void QAccessibleTextInterface_ScrollToSubstring(QAccessibleTextInterface* self, int startIndex, int endIndex);
struct miqt_string QAccessibleTextInterface_Attributes(const QAccessibleTextInterface* self, int offset, int* startOffset, int* endOffset);
void QAccessibleTextInterface_OperatorAssign(QAccessibleTextInterface* self, QAccessibleTextInterface* param1);
void QAccessibleTextInterface_Delete(QAccessibleTextInterface* self);

void QAccessibleEditableTextInterface_DeleteText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset);
void QAccessibleEditableTextInterface_InsertText(QAccessibleEditableTextInterface* self, int offset, struct miqt_string text);
void QAccessibleEditableTextInterface_ReplaceText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset, struct miqt_string text);
void QAccessibleEditableTextInterface_OperatorAssign(QAccessibleEditableTextInterface* self, QAccessibleEditableTextInterface* param1);
void QAccessibleEditableTextInterface_Delete(QAccessibleEditableTextInterface* self);

QVariant* QAccessibleValueInterface_CurrentValue(const QAccessibleValueInterface* self);
void QAccessibleValueInterface_SetCurrentValue(QAccessibleValueInterface* self, QVariant* value);
QVariant* QAccessibleValueInterface_MaximumValue(const QAccessibleValueInterface* self);
QVariant* QAccessibleValueInterface_MinimumValue(const QAccessibleValueInterface* self);
QVariant* QAccessibleValueInterface_MinimumStepSize(const QAccessibleValueInterface* self);
void QAccessibleValueInterface_OperatorAssign(QAccessibleValueInterface* self, QAccessibleValueInterface* param1);
void QAccessibleValueInterface_Delete(QAccessibleValueInterface* self);

bool QAccessibleTableCellInterface_IsSelected(const QAccessibleTableCellInterface* self);
struct miqt_array QAccessibleTableCellInterface_ColumnHeaderCells(const QAccessibleTableCellInterface* self);
struct miqt_array QAccessibleTableCellInterface_RowHeaderCells(const QAccessibleTableCellInterface* self);
int QAccessibleTableCellInterface_ColumnIndex(const QAccessibleTableCellInterface* self);
int QAccessibleTableCellInterface_RowIndex(const QAccessibleTableCellInterface* self);
int QAccessibleTableCellInterface_ColumnExtent(const QAccessibleTableCellInterface* self);
int QAccessibleTableCellInterface_RowExtent(const QAccessibleTableCellInterface* self);
QAccessibleInterface* QAccessibleTableCellInterface_Table(const QAccessibleTableCellInterface* self);
void QAccessibleTableCellInterface_OperatorAssign(QAccessibleTableCellInterface* self, QAccessibleTableCellInterface* param1);
void QAccessibleTableCellInterface_Delete(QAccessibleTableCellInterface* self);

QAccessibleInterface* QAccessibleTableInterface_Caption(const QAccessibleTableInterface* self);
QAccessibleInterface* QAccessibleTableInterface_Summary(const QAccessibleTableInterface* self);
QAccessibleInterface* QAccessibleTableInterface_CellAt(const QAccessibleTableInterface* self, int row, int column);
int QAccessibleTableInterface_SelectedCellCount(const QAccessibleTableInterface* self);
struct miqt_array QAccessibleTableInterface_SelectedCells(const QAccessibleTableInterface* self);
struct miqt_string QAccessibleTableInterface_ColumnDescription(const QAccessibleTableInterface* self, int column);
struct miqt_string QAccessibleTableInterface_RowDescription(const QAccessibleTableInterface* self, int row);
int QAccessibleTableInterface_SelectedColumnCount(const QAccessibleTableInterface* self);
int QAccessibleTableInterface_SelectedRowCount(const QAccessibleTableInterface* self);
int QAccessibleTableInterface_ColumnCount(const QAccessibleTableInterface* self);
int QAccessibleTableInterface_RowCount(const QAccessibleTableInterface* self);
struct miqt_array QAccessibleTableInterface_SelectedColumns(const QAccessibleTableInterface* self);
struct miqt_array QAccessibleTableInterface_SelectedRows(const QAccessibleTableInterface* self);
bool QAccessibleTableInterface_IsColumnSelected(const QAccessibleTableInterface* self, int column);
bool QAccessibleTableInterface_IsRowSelected(const QAccessibleTableInterface* self, int row);
bool QAccessibleTableInterface_SelectRow(QAccessibleTableInterface* self, int row);
bool QAccessibleTableInterface_SelectColumn(QAccessibleTableInterface* self, int column);
bool QAccessibleTableInterface_UnselectRow(QAccessibleTableInterface* self, int row);
bool QAccessibleTableInterface_UnselectColumn(QAccessibleTableInterface* self, int column);
void QAccessibleTableInterface_ModelChange(QAccessibleTableInterface* self, QAccessibleTableModelChangeEvent* event);
void QAccessibleTableInterface_Delete(QAccessibleTableInterface* self);

struct miqt_string QAccessibleActionInterface_Tr(const char* sourceText);
struct miqt_array QAccessibleActionInterface_ActionNames(const QAccessibleActionInterface* self);
struct miqt_string QAccessibleActionInterface_LocalizedActionName(const QAccessibleActionInterface* self, struct miqt_string name);
struct miqt_string QAccessibleActionInterface_LocalizedActionDescription(const QAccessibleActionInterface* self, struct miqt_string name);
void QAccessibleActionInterface_DoAction(QAccessibleActionInterface* self, struct miqt_string actionName);
struct miqt_array QAccessibleActionInterface_KeyBindingsForAction(const QAccessibleActionInterface* self, struct miqt_string actionName);
struct miqt_string QAccessibleActionInterface_PressAction();
struct miqt_string QAccessibleActionInterface_IncreaseAction();
struct miqt_string QAccessibleActionInterface_DecreaseAction();
struct miqt_string QAccessibleActionInterface_ShowMenuAction();
struct miqt_string QAccessibleActionInterface_SetFocusAction();
struct miqt_string QAccessibleActionInterface_ToggleAction();
struct miqt_string QAccessibleActionInterface_ScrollLeftAction();
struct miqt_string QAccessibleActionInterface_ScrollRightAction();
struct miqt_string QAccessibleActionInterface_ScrollUpAction();
struct miqt_string QAccessibleActionInterface_ScrollDownAction();
struct miqt_string QAccessibleActionInterface_NextPageAction();
struct miqt_string QAccessibleActionInterface_PreviousPageAction();
void QAccessibleActionInterface_OperatorAssign(QAccessibleActionInterface* self, QAccessibleActionInterface* param1);
struct miqt_string QAccessibleActionInterface_Tr2(const char* sourceText, const char* disambiguation);
struct miqt_string QAccessibleActionInterface_Tr3(const char* sourceText, const char* disambiguation, int n);
void QAccessibleActionInterface_Delete(QAccessibleActionInterface* self);

struct miqt_string QAccessibleImageInterface_ImageDescription(const QAccessibleImageInterface* self);
QSize* QAccessibleImageInterface_ImageSize(const QAccessibleImageInterface* self);
QPoint* QAccessibleImageInterface_ImagePosition(const QAccessibleImageInterface* self);
void QAccessibleImageInterface_OperatorAssign(QAccessibleImageInterface* self, QAccessibleImageInterface* param1);
void QAccessibleImageInterface_Delete(QAccessibleImageInterface* self);

struct miqt_string QAccessibleHyperlinkInterface_Anchor(const QAccessibleHyperlinkInterface* self);
struct miqt_string QAccessibleHyperlinkInterface_AnchorTarget(const QAccessibleHyperlinkInterface* self);
int QAccessibleHyperlinkInterface_StartIndex(const QAccessibleHyperlinkInterface* self);
int QAccessibleHyperlinkInterface_EndIndex(const QAccessibleHyperlinkInterface* self);
bool QAccessibleHyperlinkInterface_IsValid(const QAccessibleHyperlinkInterface* self);
void QAccessibleHyperlinkInterface_OperatorAssign(QAccessibleHyperlinkInterface* self, QAccessibleHyperlinkInterface* param1);
void QAccessibleHyperlinkInterface_Delete(QAccessibleHyperlinkInterface* self);

QAccessibleEvent* QAccessibleEvent_new(QObject* obj, int typ);
QAccessibleEvent* QAccessibleEvent_new2(QAccessibleInterface* iface, int typ);
int QAccessibleEvent_Type(const QAccessibleEvent* self);
QObject* QAccessibleEvent_Object(const QAccessibleEvent* self);
unsigned int QAccessibleEvent_UniqueId(const QAccessibleEvent* self);
void QAccessibleEvent_SetChild(QAccessibleEvent* self, int chld);
int QAccessibleEvent_Child(const QAccessibleEvent* self);
QAccessibleInterface* QAccessibleEvent_AccessibleInterface(const QAccessibleEvent* self);
void QAccessibleEvent_Delete(QAccessibleEvent* self);

QAccessibleStateChangeEvent* QAccessibleStateChangeEvent_new(QObject* obj, QAccessible__State* state);
QAccessibleStateChangeEvent* QAccessibleStateChangeEvent_new2(QAccessibleInterface* iface, QAccessible__State* state);
QAccessible__State* QAccessibleStateChangeEvent_ChangedStates(const QAccessibleStateChangeEvent* self);
void QAccessibleStateChangeEvent_Delete(QAccessibleStateChangeEvent* self);

QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new(QObject* obj, int cursorPos);
QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new2(QAccessibleInterface* iface, int cursorPos);
void QAccessibleTextCursorEvent_SetCursorPosition(QAccessibleTextCursorEvent* self, int position);
int QAccessibleTextCursorEvent_CursorPosition(const QAccessibleTextCursorEvent* self);
void QAccessibleTextCursorEvent_Delete(QAccessibleTextCursorEvent* self);

QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new(QObject* obj, int start, int end);
QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new2(QAccessibleInterface* iface, int start, int end);
void QAccessibleTextSelectionEvent_SetSelection(QAccessibleTextSelectionEvent* self, int start, int end);
int QAccessibleTextSelectionEvent_SelectionStart(const QAccessibleTextSelectionEvent* self);
int QAccessibleTextSelectionEvent_SelectionEnd(const QAccessibleTextSelectionEvent* self);
void QAccessibleTextSelectionEvent_Delete(QAccessibleTextSelectionEvent* self);

QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new(QObject* obj, int position, struct miqt_string text);
QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new2(QAccessibleInterface* iface, int position, struct miqt_string text);
struct miqt_string QAccessibleTextInsertEvent_TextInserted(const QAccessibleTextInsertEvent* self);
int QAccessibleTextInsertEvent_ChangePosition(const QAccessibleTextInsertEvent* self);
void QAccessibleTextInsertEvent_Delete(QAccessibleTextInsertEvent* self);

QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new(QObject* obj, int position, struct miqt_string text);
QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new2(QAccessibleInterface* iface, int position, struct miqt_string text);
struct miqt_string QAccessibleTextRemoveEvent_TextRemoved(const QAccessibleTextRemoveEvent* self);
int QAccessibleTextRemoveEvent_ChangePosition(const QAccessibleTextRemoveEvent* self);
void QAccessibleTextRemoveEvent_Delete(QAccessibleTextRemoveEvent* self);

QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new(QObject* obj, int position, struct miqt_string oldText, struct miqt_string text);
QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new2(QAccessibleInterface* iface, int position, struct miqt_string oldText, struct miqt_string text);
struct miqt_string QAccessibleTextUpdateEvent_TextRemoved(const QAccessibleTextUpdateEvent* self);
struct miqt_string QAccessibleTextUpdateEvent_TextInserted(const QAccessibleTextUpdateEvent* self);
int QAccessibleTextUpdateEvent_ChangePosition(const QAccessibleTextUpdateEvent* self);
void QAccessibleTextUpdateEvent_Delete(QAccessibleTextUpdateEvent* self);

QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new(QObject* obj, QVariant* val);
QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new2(QAccessibleInterface* iface, QVariant* val);
void QAccessibleValueChangeEvent_SetValue(QAccessibleValueChangeEvent* self, QVariant* val);
QVariant* QAccessibleValueChangeEvent_Value(const QAccessibleValueChangeEvent* self);
void QAccessibleValueChangeEvent_Delete(QAccessibleValueChangeEvent* self);

QAccessibleTableModelChangeEvent* QAccessibleTableModelChangeEvent_new(QObject* obj, int changeType);
QAccessibleTableModelChangeEvent* QAccessibleTableModelChangeEvent_new2(QAccessibleInterface* iface, int changeType);
void QAccessibleTableModelChangeEvent_SetModelChangeType(QAccessibleTableModelChangeEvent* self, int changeType);
int QAccessibleTableModelChangeEvent_ModelChangeType(const QAccessibleTableModelChangeEvent* self);
void QAccessibleTableModelChangeEvent_SetFirstRow(QAccessibleTableModelChangeEvent* self, int row);
void QAccessibleTableModelChangeEvent_SetFirstColumn(QAccessibleTableModelChangeEvent* self, int col);
void QAccessibleTableModelChangeEvent_SetLastRow(QAccessibleTableModelChangeEvent* self, int row);
void QAccessibleTableModelChangeEvent_SetLastColumn(QAccessibleTableModelChangeEvent* self, int col);
int QAccessibleTableModelChangeEvent_FirstRow(const QAccessibleTableModelChangeEvent* self);
int QAccessibleTableModelChangeEvent_FirstColumn(const QAccessibleTableModelChangeEvent* self);
int QAccessibleTableModelChangeEvent_LastRow(const QAccessibleTableModelChangeEvent* self);
int QAccessibleTableModelChangeEvent_LastColumn(const QAccessibleTableModelChangeEvent* self);
void QAccessibleTableModelChangeEvent_Delete(QAccessibleTableModelChangeEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
