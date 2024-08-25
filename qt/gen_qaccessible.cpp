#include "gen_qaccessible.h"
#include "qaccessible.h"

#include <QAccessible>
#include <QAccessibleActionInterface>
#include <QAccessibleEditableTextInterface>
#include <QAccessibleEvent>
#include <QAccessibleImageInterface>
#include <QAccessibleInterface>
#include <QAccessibleStateChangeEvent>
#include <QAccessibleTableCellInterface>
#include <QAccessibleTableInterface>
#include <QAccessibleTableModelChangeEvent>
#include <QAccessibleTextCursorEvent>
#include <QAccessibleTextInsertEvent>
#include <QAccessibleTextInterface>
#include <QAccessibleTextRemoveEvent>
#include <QAccessibleTextSelectionEvent>
#include <QAccessibleTextUpdateEvent>
#include <QAccessibleValueChangeEvent>
#include <QAccessibleValueInterface>
#include <QColor>
#include <QList>
#include <QObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QVariant>
#include <QWindow>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QAccessibleInterface* QAccessible_QueryAccessibleInterface(QObject* param1) {
	return QAccessible::queryAccessibleInterface(param1);
}

void QAccessible_UpdateAccessibility(QAccessibleEvent* event) {
	QAccessible::updateAccessibility(event);
}

bool QAccessible_IsActive() {
	return QAccessible::isActive();
}

void QAccessible_SetActive(bool active) {
	QAccessible::setActive(active);
}

void QAccessible_SetRootObject(QObject* object) {
	QAccessible::setRootObject(object);
}

void QAccessible_Cleanup() {
	QAccessible::cleanup();
}

void QAccessible_Delete(QAccessible* self) {
	delete self;
}

bool QAccessibleInterface_IsValid(QAccessibleInterface* self) {
	return self->isValid();
}

QObject* QAccessibleInterface_Object(QAccessibleInterface* self) {
	return self->object();
}

QWindow* QAccessibleInterface_Window(QAccessibleInterface* self) {
	return self->window();
}

QAccessibleInterface* QAccessibleInterface_FocusChild(QAccessibleInterface* self) {
	return self->focusChild();
}

QAccessibleInterface* QAccessibleInterface_ChildAt(QAccessibleInterface* self, int x, int y) {
	return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

QAccessibleInterface* QAccessibleInterface_Parent(QAccessibleInterface* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleInterface_Child(QAccessibleInterface* self, int index) {
	return self->child(static_cast<int>(index));
}

int QAccessibleInterface_ChildCount(QAccessibleInterface* self) {
	return self->childCount();
}

int QAccessibleInterface_IndexOfChild(QAccessibleInterface* self, QAccessibleInterface* param1) {
	return self->indexOfChild(param1);
}

QRect* QAccessibleInterface_Rect(QAccessibleInterface* self) {
	QRect ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QColor* QAccessibleInterface_ForegroundColor(QAccessibleInterface* self) {
	QColor ret = self->foregroundColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QAccessibleInterface_BackgroundColor(QAccessibleInterface* self) {
	QColor ret = self->backgroundColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QAccessibleTextInterface* QAccessibleInterface_TextInterface(QAccessibleInterface* self) {
	return self->textInterface();
}

QAccessibleEditableTextInterface* QAccessibleInterface_EditableTextInterface(QAccessibleInterface* self) {
	return self->editableTextInterface();
}

QAccessibleValueInterface* QAccessibleInterface_ValueInterface(QAccessibleInterface* self) {
	return self->valueInterface();
}

QAccessibleActionInterface* QAccessibleInterface_ActionInterface(QAccessibleInterface* self) {
	return self->actionInterface();
}

QAccessibleImageInterface* QAccessibleInterface_ImageInterface(QAccessibleInterface* self) {
	return self->imageInterface();
}

QAccessibleTableInterface* QAccessibleInterface_TableInterface(QAccessibleInterface* self) {
	return self->tableInterface();
}

QAccessibleTableCellInterface* QAccessibleInterface_TableCellInterface(QAccessibleInterface* self) {
	return self->tableCellInterface();
}

void QAccessibleTextInterface_Selection(QAccessibleTextInterface* self, int selectionIndex, int* startOffset, int* endOffset) {
	self->selection(static_cast<int>(selectionIndex), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
}

int QAccessibleTextInterface_SelectionCount(QAccessibleTextInterface* self) {
	return self->selectionCount();
}

void QAccessibleTextInterface_AddSelection(QAccessibleTextInterface* self, int startOffset, int endOffset) {
	self->addSelection(static_cast<int>(startOffset), static_cast<int>(endOffset));
}

void QAccessibleTextInterface_RemoveSelection(QAccessibleTextInterface* self, int selectionIndex) {
	self->removeSelection(static_cast<int>(selectionIndex));
}

void QAccessibleTextInterface_SetSelection(QAccessibleTextInterface* self, int selectionIndex, int startOffset, int endOffset) {
	self->setSelection(static_cast<int>(selectionIndex), static_cast<int>(startOffset), static_cast<int>(endOffset));
}

int QAccessibleTextInterface_CursorPosition(QAccessibleTextInterface* self) {
	return self->cursorPosition();
}

void QAccessibleTextInterface_SetCursorPosition(QAccessibleTextInterface* self, int position) {
	self->setCursorPosition(static_cast<int>(position));
}

void QAccessibleTextInterface_Text(QAccessibleTextInterface* self, int startOffset, int endOffset, char** _out, int* _out_Strlen) {
	QString ret = self->text(static_cast<int>(startOffset), static_cast<int>(endOffset));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QAccessibleTextInterface_CharacterCount(QAccessibleTextInterface* self) {
	return self->characterCount();
}

QRect* QAccessibleTextInterface_CharacterRect(QAccessibleTextInterface* self, int offset) {
	QRect ret = self->characterRect(static_cast<int>(offset));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QAccessibleTextInterface_OffsetAtPoint(QAccessibleTextInterface* self, QPoint* point) {
	return self->offsetAtPoint(*point);
}

void QAccessibleTextInterface_ScrollToSubstring(QAccessibleTextInterface* self, int startIndex, int endIndex) {
	self->scrollToSubstring(static_cast<int>(startIndex), static_cast<int>(endIndex));
}

void QAccessibleTextInterface_Attributes(QAccessibleTextInterface* self, int offset, int* startOffset, int* endOffset, char** _out, int* _out_Strlen) {
	QString ret = self->attributes(static_cast<int>(offset), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleTextInterface_OperatorAssign(QAccessibleTextInterface* self, QAccessibleTextInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleTextInterface_Delete(QAccessibleTextInterface* self) {
	delete self;
}

void QAccessibleEditableTextInterface_DeleteText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset) {
	self->deleteText(static_cast<int>(startOffset), static_cast<int>(endOffset));
}

void QAccessibleEditableTextInterface_InsertText(QAccessibleEditableTextInterface* self, int offset, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->insertText(static_cast<int>(offset), text_QString);
}

void QAccessibleEditableTextInterface_ReplaceText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->replaceText(static_cast<int>(startOffset), static_cast<int>(endOffset), text_QString);
}

void QAccessibleEditableTextInterface_OperatorAssign(QAccessibleEditableTextInterface* self, QAccessibleEditableTextInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleEditableTextInterface_Delete(QAccessibleEditableTextInterface* self) {
	delete self;
}

QVariant* QAccessibleValueInterface_CurrentValue(QAccessibleValueInterface* self) {
	QVariant ret = self->currentValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QAccessibleValueInterface_SetCurrentValue(QAccessibleValueInterface* self, QVariant* value) {
	self->setCurrentValue(*value);
}

QVariant* QAccessibleValueInterface_MaximumValue(QAccessibleValueInterface* self) {
	QVariant ret = self->maximumValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QAccessibleValueInterface_MinimumValue(QAccessibleValueInterface* self) {
	QVariant ret = self->minimumValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QAccessibleValueInterface_MinimumStepSize(QAccessibleValueInterface* self) {
	QVariant ret = self->minimumStepSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QAccessibleValueInterface_OperatorAssign(QAccessibleValueInterface* self, QAccessibleValueInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleValueInterface_Delete(QAccessibleValueInterface* self) {
	delete self;
}

bool QAccessibleTableCellInterface_IsSelected(QAccessibleTableCellInterface* self) {
	return self->isSelected();
}

void QAccessibleTableCellInterface_ColumnHeaderCells(QAccessibleTableCellInterface* self, QAccessibleInterface*** _out, size_t* _out_len) {
	QList<QAccessibleInterface *> ret = self->columnHeaderCells();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAccessibleInterface** __out = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QAccessibleTableCellInterface_RowHeaderCells(QAccessibleTableCellInterface* self, QAccessibleInterface*** _out, size_t* _out_len) {
	QList<QAccessibleInterface *> ret = self->rowHeaderCells();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAccessibleInterface** __out = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

int QAccessibleTableCellInterface_ColumnIndex(QAccessibleTableCellInterface* self) {
	return self->columnIndex();
}

int QAccessibleTableCellInterface_RowIndex(QAccessibleTableCellInterface* self) {
	return self->rowIndex();
}

int QAccessibleTableCellInterface_ColumnExtent(QAccessibleTableCellInterface* self) {
	return self->columnExtent();
}

int QAccessibleTableCellInterface_RowExtent(QAccessibleTableCellInterface* self) {
	return self->rowExtent();
}

QAccessibleInterface* QAccessibleTableCellInterface_Table(QAccessibleTableCellInterface* self) {
	return self->table();
}

void QAccessibleTableCellInterface_OperatorAssign(QAccessibleTableCellInterface* self, QAccessibleTableCellInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleTableCellInterface_Delete(QAccessibleTableCellInterface* self) {
	delete self;
}

QAccessibleInterface* QAccessibleTableInterface_Caption(QAccessibleTableInterface* self) {
	return self->caption();
}

QAccessibleInterface* QAccessibleTableInterface_Summary(QAccessibleTableInterface* self) {
	return self->summary();
}

QAccessibleInterface* QAccessibleTableInterface_CellAt(QAccessibleTableInterface* self, int row, int column) {
	return self->cellAt(static_cast<int>(row), static_cast<int>(column));
}

int QAccessibleTableInterface_SelectedCellCount(QAccessibleTableInterface* self) {
	return self->selectedCellCount();
}

void QAccessibleTableInterface_SelectedCells(QAccessibleTableInterface* self, QAccessibleInterface*** _out, size_t* _out_len) {
	QList<QAccessibleInterface *> ret = self->selectedCells();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAccessibleInterface** __out = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QAccessibleTableInterface_ColumnDescription(QAccessibleTableInterface* self, int column, char** _out, int* _out_Strlen) {
	QString ret = self->columnDescription(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleTableInterface_RowDescription(QAccessibleTableInterface* self, int row, char** _out, int* _out_Strlen) {
	QString ret = self->rowDescription(static_cast<int>(row));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QAccessibleTableInterface_SelectedColumnCount(QAccessibleTableInterface* self) {
	return self->selectedColumnCount();
}

int QAccessibleTableInterface_SelectedRowCount(QAccessibleTableInterface* self) {
	return self->selectedRowCount();
}

int QAccessibleTableInterface_ColumnCount(QAccessibleTableInterface* self) {
	return self->columnCount();
}

int QAccessibleTableInterface_RowCount(QAccessibleTableInterface* self) {
	return self->rowCount();
}

void QAccessibleTableInterface_SelectedColumns(QAccessibleTableInterface* self, int** _out, size_t* _out_len) {
	QList<int> ret = self->selectedColumns();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* __out = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QAccessibleTableInterface_SelectedRows(QAccessibleTableInterface* self, int** _out, size_t* _out_len) {
	QList<int> ret = self->selectedRows();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* __out = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

bool QAccessibleTableInterface_IsColumnSelected(QAccessibleTableInterface* self, int column) {
	return self->isColumnSelected(static_cast<int>(column));
}

bool QAccessibleTableInterface_IsRowSelected(QAccessibleTableInterface* self, int row) {
	return self->isRowSelected(static_cast<int>(row));
}

bool QAccessibleTableInterface_SelectRow(QAccessibleTableInterface* self, int row) {
	return self->selectRow(static_cast<int>(row));
}

bool QAccessibleTableInterface_SelectColumn(QAccessibleTableInterface* self, int column) {
	return self->selectColumn(static_cast<int>(column));
}

bool QAccessibleTableInterface_UnselectRow(QAccessibleTableInterface* self, int row) {
	return self->unselectRow(static_cast<int>(row));
}

bool QAccessibleTableInterface_UnselectColumn(QAccessibleTableInterface* self, int column) {
	return self->unselectColumn(static_cast<int>(column));
}

void QAccessibleTableInterface_ModelChange(QAccessibleTableInterface* self, QAccessibleTableModelChangeEvent* event) {
	self->modelChange(event);
}

void QAccessibleTableInterface_Delete(QAccessibleTableInterface* self) {
	delete self;
}

void QAccessibleActionInterface_Tr(char* sourceText, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_TrUtf8(char* sourceText, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::trUtf8(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_ActionNames(QAccessibleActionInterface* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->actionNames();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QAccessibleActionInterface_LocalizedActionName(QAccessibleActionInterface* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString ret = self->localizedActionName(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_LocalizedActionDescription(QAccessibleActionInterface* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString ret = self->localizedActionDescription(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_DoAction(QAccessibleActionInterface* self, const char* actionName, size_t actionName_Strlen) {
	QString actionName_QString = QString::fromUtf8(actionName, actionName_Strlen);
	self->doAction(actionName_QString);
}

void QAccessibleActionInterface_KeyBindingsForAction(QAccessibleActionInterface* self, const char* actionName, size_t actionName_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString actionName_QString = QString::fromUtf8(actionName, actionName_Strlen);
	QList<QString> ret = self->keyBindingsForAction(actionName_QString);
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QAccessibleActionInterface_PressAction(char** _out, int* _out_Strlen) {
	const QString ret = QAccessibleActionInterface::pressAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_IncreaseAction(char** _out, int* _out_Strlen) {
	const QString ret = QAccessibleActionInterface::increaseAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_DecreaseAction(char** _out, int* _out_Strlen) {
	const QString ret = QAccessibleActionInterface::decreaseAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_ShowMenuAction(char** _out, int* _out_Strlen) {
	const QString ret = QAccessibleActionInterface::showMenuAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_SetFocusAction(char** _out, int* _out_Strlen) {
	const QString ret = QAccessibleActionInterface::setFocusAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_ToggleAction(char** _out, int* _out_Strlen) {
	const QString ret = QAccessibleActionInterface::toggleAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_ScrollLeftAction(char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::scrollLeftAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_ScrollRightAction(char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::scrollRightAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_ScrollUpAction(char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::scrollUpAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_ScrollDownAction(char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::scrollDownAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_NextPageAction(char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::nextPageAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_PreviousPageAction(char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::previousPageAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_OperatorAssign(QAccessibleActionInterface* self, QAccessibleActionInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleActionInterface_Tr2(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_Tr3(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_TrUtf82(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::trUtf8(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_TrUtf83(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleActionInterface::trUtf8(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleActionInterface_Delete(QAccessibleActionInterface* self) {
	delete self;
}

void QAccessibleImageInterface_ImageDescription(QAccessibleImageInterface* self, char** _out, int* _out_Strlen) {
	QString ret = self->imageDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QAccessibleImageInterface_ImageSize(QAccessibleImageInterface* self) {
	QSize ret = self->imageSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QPoint* QAccessibleImageInterface_ImagePosition(QAccessibleImageInterface* self) {
	QPoint ret = self->imagePosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QAccessibleImageInterface_OperatorAssign(QAccessibleImageInterface* self, QAccessibleImageInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleImageInterface_Delete(QAccessibleImageInterface* self) {
	delete self;
}

QObject* QAccessibleEvent_Object(QAccessibleEvent* self) {
	return self->object();
}

void QAccessibleEvent_SetChild(QAccessibleEvent* self, int chld) {
	self->setChild(static_cast<int>(chld));
}

int QAccessibleEvent_Child(QAccessibleEvent* self) {
	return self->child();
}

QAccessibleInterface* QAccessibleEvent_AccessibleInterface(QAccessibleEvent* self) {
	return self->accessibleInterface();
}

void QAccessibleEvent_Delete(QAccessibleEvent* self) {
	delete self;
}

void QAccessibleStateChangeEvent_Delete(QAccessibleStateChangeEvent* self) {
	delete self;
}

QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new(QObject* obj, int cursorPos) {
	return new QAccessibleTextCursorEvent(obj, static_cast<int>(cursorPos));
}

QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new2(QAccessibleInterface* iface, int cursorPos) {
	return new QAccessibleTextCursorEvent(iface, static_cast<int>(cursorPos));
}

void QAccessibleTextCursorEvent_SetCursorPosition(QAccessibleTextCursorEvent* self, int position) {
	self->setCursorPosition(static_cast<int>(position));
}

int QAccessibleTextCursorEvent_CursorPosition(QAccessibleTextCursorEvent* self) {
	return self->cursorPosition();
}

void QAccessibleTextCursorEvent_Delete(QAccessibleTextCursorEvent* self) {
	delete self;
}

QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new(QObject* obj, int start, int end) {
	return new QAccessibleTextSelectionEvent(obj, static_cast<int>(start), static_cast<int>(end));
}

QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new2(QAccessibleInterface* iface, int start, int end) {
	return new QAccessibleTextSelectionEvent(iface, static_cast<int>(start), static_cast<int>(end));
}

void QAccessibleTextSelectionEvent_SetSelection(QAccessibleTextSelectionEvent* self, int start, int end) {
	self->setSelection(static_cast<int>(start), static_cast<int>(end));
}

int QAccessibleTextSelectionEvent_SelectionStart(QAccessibleTextSelectionEvent* self) {
	return self->selectionStart();
}

int QAccessibleTextSelectionEvent_SelectionEnd(QAccessibleTextSelectionEvent* self) {
	return self->selectionEnd();
}

void QAccessibleTextSelectionEvent_Delete(QAccessibleTextSelectionEvent* self) {
	delete self;
}

QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new(QObject* obj, int position, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QAccessibleTextInsertEvent(obj, static_cast<int>(position), text_QString);
}

QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new2(QAccessibleInterface* iface, int position, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QAccessibleTextInsertEvent(iface, static_cast<int>(position), text_QString);
}

void QAccessibleTextInsertEvent_TextInserted(QAccessibleTextInsertEvent* self, char** _out, int* _out_Strlen) {
	QString ret = self->textInserted();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QAccessibleTextInsertEvent_ChangePosition(QAccessibleTextInsertEvent* self) {
	return self->changePosition();
}

void QAccessibleTextInsertEvent_Delete(QAccessibleTextInsertEvent* self) {
	delete self;
}

QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new(QObject* obj, int position, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QAccessibleTextRemoveEvent(obj, static_cast<int>(position), text_QString);
}

QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new2(QAccessibleInterface* iface, int position, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QAccessibleTextRemoveEvent(iface, static_cast<int>(position), text_QString);
}

void QAccessibleTextRemoveEvent_TextRemoved(QAccessibleTextRemoveEvent* self, char** _out, int* _out_Strlen) {
	QString ret = self->textRemoved();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QAccessibleTextRemoveEvent_ChangePosition(QAccessibleTextRemoveEvent* self) {
	return self->changePosition();
}

void QAccessibleTextRemoveEvent_Delete(QAccessibleTextRemoveEvent* self) {
	delete self;
}

QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new(QObject* obj, int position, const char* oldText, size_t oldText_Strlen, const char* text, size_t text_Strlen) {
	QString oldText_QString = QString::fromUtf8(oldText, oldText_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QAccessibleTextUpdateEvent(obj, static_cast<int>(position), oldText_QString, text_QString);
}

QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new2(QAccessibleInterface* iface, int position, const char* oldText, size_t oldText_Strlen, const char* text, size_t text_Strlen) {
	QString oldText_QString = QString::fromUtf8(oldText, oldText_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QAccessibleTextUpdateEvent(iface, static_cast<int>(position), oldText_QString, text_QString);
}

void QAccessibleTextUpdateEvent_TextRemoved(QAccessibleTextUpdateEvent* self, char** _out, int* _out_Strlen) {
	QString ret = self->textRemoved();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleTextUpdateEvent_TextInserted(QAccessibleTextUpdateEvent* self, char** _out, int* _out_Strlen) {
	QString ret = self->textInserted();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QAccessibleTextUpdateEvent_ChangePosition(QAccessibleTextUpdateEvent* self) {
	return self->changePosition();
}

void QAccessibleTextUpdateEvent_Delete(QAccessibleTextUpdateEvent* self) {
	delete self;
}

QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new(QObject* obj, QVariant* val) {
	return new QAccessibleValueChangeEvent(obj, *val);
}

QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new2(QAccessibleInterface* iface, QVariant* val) {
	return new QAccessibleValueChangeEvent(iface, *val);
}

void QAccessibleValueChangeEvent_SetValue(QAccessibleValueChangeEvent* self, QVariant* val) {
	self->setValue(*val);
}

QVariant* QAccessibleValueChangeEvent_Value(QAccessibleValueChangeEvent* self) {
	QVariant ret = self->value();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QAccessibleValueChangeEvent_Delete(QAccessibleValueChangeEvent* self) {
	delete self;
}

void QAccessibleTableModelChangeEvent_SetFirstRow(QAccessibleTableModelChangeEvent* self, int row) {
	self->setFirstRow(static_cast<int>(row));
}

void QAccessibleTableModelChangeEvent_SetFirstColumn(QAccessibleTableModelChangeEvent* self, int col) {
	self->setFirstColumn(static_cast<int>(col));
}

void QAccessibleTableModelChangeEvent_SetLastRow(QAccessibleTableModelChangeEvent* self, int row) {
	self->setLastRow(static_cast<int>(row));
}

void QAccessibleTableModelChangeEvent_SetLastColumn(QAccessibleTableModelChangeEvent* self, int col) {
	self->setLastColumn(static_cast<int>(col));
}

int QAccessibleTableModelChangeEvent_FirstRow(QAccessibleTableModelChangeEvent* self) {
	return self->firstRow();
}

int QAccessibleTableModelChangeEvent_FirstColumn(QAccessibleTableModelChangeEvent* self) {
	return self->firstColumn();
}

int QAccessibleTableModelChangeEvent_LastRow(QAccessibleTableModelChangeEvent* self) {
	return self->lastRow();
}

int QAccessibleTableModelChangeEvent_LastColumn(QAccessibleTableModelChangeEvent* self) {
	return self->lastColumn();
}

void QAccessibleTableModelChangeEvent_Delete(QAccessibleTableModelChangeEvent* self) {
	delete self;
}

