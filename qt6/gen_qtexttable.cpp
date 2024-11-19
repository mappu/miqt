#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFrame>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextFrame__iterator
#include <QTextObject>
#include <QTextTable>
#include <QTextTableCell>
#include <QTextTableFormat>
#include <qtexttable.h>
#include "gen_qtexttable.h"
#include "_cgo_export.h"

void QTextTableCell_new(QTextTableCell** outptr_QTextTableCell) {
	QTextTableCell* ret = new QTextTableCell();
	*outptr_QTextTableCell = ret;
}

void QTextTableCell_new2(QTextTableCell* o, QTextTableCell** outptr_QTextTableCell) {
	QTextTableCell* ret = new QTextTableCell(*o);
	*outptr_QTextTableCell = ret;
}

void QTextTableCell_OperatorAssign(QTextTableCell* self, QTextTableCell* o) {
	self->operator=(*o);
}

void QTextTableCell_SetFormat(QTextTableCell* self, QTextCharFormat* format) {
	self->setFormat(*format);
}

QTextCharFormat* QTextTableCell_Format(const QTextTableCell* self) {
	return new QTextCharFormat(self->format());
}

int QTextTableCell_Row(const QTextTableCell* self) {
	return self->row();
}

int QTextTableCell_Column(const QTextTableCell* self) {
	return self->column();
}

int QTextTableCell_RowSpan(const QTextTableCell* self) {
	return self->rowSpan();
}

int QTextTableCell_ColumnSpan(const QTextTableCell* self) {
	return self->columnSpan();
}

bool QTextTableCell_IsValid(const QTextTableCell* self) {
	return self->isValid();
}

QTextCursor* QTextTableCell_FirstCursorPosition(const QTextTableCell* self) {
	return new QTextCursor(self->firstCursorPosition());
}

QTextCursor* QTextTableCell_LastCursorPosition(const QTextTableCell* self) {
	return new QTextCursor(self->lastCursorPosition());
}

int QTextTableCell_FirstPosition(const QTextTableCell* self) {
	return self->firstPosition();
}

int QTextTableCell_LastPosition(const QTextTableCell* self) {
	return self->lastPosition();
}

bool QTextTableCell_OperatorEqual(const QTextTableCell* self, QTextTableCell* other) {
	return self->operator==(*other);
}

bool QTextTableCell_OperatorNotEqual(const QTextTableCell* self, QTextTableCell* other) {
	return self->operator!=(*other);
}

QTextFrame__iterator* QTextTableCell_Begin(const QTextTableCell* self) {
	return new QTextFrame::iterator(self->begin());
}

QTextFrame__iterator* QTextTableCell_End(const QTextTableCell* self) {
	return new QTextFrame::iterator(self->end());
}

int QTextTableCell_TableCellFormatIndex(const QTextTableCell* self) {
	return self->tableCellFormatIndex();
}

void QTextTableCell_Delete(QTextTableCell* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextTableCell*>( self );
	} else {
		delete self;
	}
}

void QTextTable_new(QTextDocument* doc, QTextTable** outptr_QTextTable, QTextFrame** outptr_QTextFrame, QTextObject** outptr_QTextObject, QObject** outptr_QObject) {
	QTextTable* ret = new QTextTable(doc);
	*outptr_QTextTable = ret;
	*outptr_QTextFrame = static_cast<QTextFrame*>(ret);
	*outptr_QTextObject = static_cast<QTextObject*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QTextTable_MetaObject(const QTextTable* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextTable_Metacast(QTextTable* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextTable_Tr(const char* s) {
	QString _ret = QTextTable::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextTable_Resize(QTextTable* self, int rows, int cols) {
	self->resize(static_cast<int>(rows), static_cast<int>(cols));
}

void QTextTable_InsertRows(QTextTable* self, int pos, int num) {
	self->insertRows(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_InsertColumns(QTextTable* self, int pos, int num) {
	self->insertColumns(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_AppendRows(QTextTable* self, int count) {
	self->appendRows(static_cast<int>(count));
}

void QTextTable_AppendColumns(QTextTable* self, int count) {
	self->appendColumns(static_cast<int>(count));
}

void QTextTable_RemoveRows(QTextTable* self, int pos, int num) {
	self->removeRows(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_RemoveColumns(QTextTable* self, int pos, int num) {
	self->removeColumns(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_MergeCells(QTextTable* self, int row, int col, int numRows, int numCols) {
	self->mergeCells(static_cast<int>(row), static_cast<int>(col), static_cast<int>(numRows), static_cast<int>(numCols));
}

void QTextTable_MergeCellsWithCursor(QTextTable* self, QTextCursor* cursor) {
	self->mergeCells(*cursor);
}

void QTextTable_SplitCell(QTextTable* self, int row, int col, int numRows, int numCols) {
	self->splitCell(static_cast<int>(row), static_cast<int>(col), static_cast<int>(numRows), static_cast<int>(numCols));
}

int QTextTable_Rows(const QTextTable* self) {
	return self->rows();
}

int QTextTable_Columns(const QTextTable* self) {
	return self->columns();
}

QTextTableCell* QTextTable_CellAt(const QTextTable* self, int row, int col) {
	return new QTextTableCell(self->cellAt(static_cast<int>(row), static_cast<int>(col)));
}

QTextTableCell* QTextTable_CellAtWithPosition(const QTextTable* self, int position) {
	return new QTextTableCell(self->cellAt(static_cast<int>(position)));
}

QTextTableCell* QTextTable_CellAtWithQTextCursor(const QTextTable* self, QTextCursor* c) {
	return new QTextTableCell(self->cellAt(*c));
}

QTextCursor* QTextTable_RowStart(const QTextTable* self, QTextCursor* c) {
	return new QTextCursor(self->rowStart(*c));
}

QTextCursor* QTextTable_RowEnd(const QTextTable* self, QTextCursor* c) {
	return new QTextCursor(self->rowEnd(*c));
}

void QTextTable_SetFormat(QTextTable* self, QTextTableFormat* format) {
	self->setFormat(*format);
}

QTextTableFormat* QTextTable_Format(const QTextTable* self) {
	return new QTextTableFormat(self->format());
}

struct miqt_string QTextTable_Tr2(const char* s, const char* c) {
	QString _ret = QTextTable::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextTable_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextTable::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextTable_Delete(QTextTable* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextTable*>( self );
	} else {
		delete self;
	}
}

