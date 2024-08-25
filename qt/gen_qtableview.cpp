#include "gen_qtableview.h"
#include "qtableview.h"

#include <QAbstractItemModel>
#include <QHeaderView>
#include <QItemSelectionModel>
#include <QMetaObject>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QTableView>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTableView* QTableView_new() {
	return new QTableView();
}

QTableView* QTableView_new2(QWidget* parent) {
	return new QTableView(parent);
}

QMetaObject* QTableView_MetaObject(QTableView* self) {
	return (QMetaObject*) self->metaObject();
}

void QTableView_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTableView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableView_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTableView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableView_SetModel(QTableView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QTableView_SetRootIndex(QTableView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QTableView_SetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QTableView_DoItemsLayout(QTableView* self) {
	self->doItemsLayout();
}

QHeaderView* QTableView_HorizontalHeader(QTableView* self) {
	return self->horizontalHeader();
}

QHeaderView* QTableView_VerticalHeader(QTableView* self) {
	return self->verticalHeader();
}

void QTableView_SetHorizontalHeader(QTableView* self, QHeaderView* header) {
	self->setHorizontalHeader(header);
}

void QTableView_SetVerticalHeader(QTableView* self, QHeaderView* header) {
	self->setVerticalHeader(header);
}

int QTableView_RowViewportPosition(QTableView* self, int row) {
	return self->rowViewportPosition(static_cast<int>(row));
}

int QTableView_RowAt(QTableView* self, int y) {
	return self->rowAt(static_cast<int>(y));
}

void QTableView_SetRowHeight(QTableView* self, int row, int height) {
	self->setRowHeight(static_cast<int>(row), static_cast<int>(height));
}

int QTableView_RowHeight(QTableView* self, int row) {
	return self->rowHeight(static_cast<int>(row));
}

int QTableView_ColumnViewportPosition(QTableView* self, int column) {
	return self->columnViewportPosition(static_cast<int>(column));
}

int QTableView_ColumnAt(QTableView* self, int x) {
	return self->columnAt(static_cast<int>(x));
}

void QTableView_SetColumnWidth(QTableView* self, int column, int width) {
	self->setColumnWidth(static_cast<int>(column), static_cast<int>(width));
}

int QTableView_ColumnWidth(QTableView* self, int column) {
	return self->columnWidth(static_cast<int>(column));
}

bool QTableView_IsRowHidden(QTableView* self, int row) {
	return self->isRowHidden(static_cast<int>(row));
}

void QTableView_SetRowHidden(QTableView* self, int row, bool hide) {
	self->setRowHidden(static_cast<int>(row), hide);
}

bool QTableView_IsColumnHidden(QTableView* self, int column) {
	return self->isColumnHidden(static_cast<int>(column));
}

void QTableView_SetColumnHidden(QTableView* self, int column, bool hide) {
	self->setColumnHidden(static_cast<int>(column), hide);
}

void QTableView_SetSortingEnabled(QTableView* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTableView_IsSortingEnabled(QTableView* self) {
	return self->isSortingEnabled();
}

bool QTableView_ShowGrid(QTableView* self) {
	return self->showGrid();
}

void QTableView_SetWordWrap(QTableView* self, bool on) {
	self->setWordWrap(on);
}

bool QTableView_WordWrap(QTableView* self) {
	return self->wordWrap();
}

void QTableView_SetCornerButtonEnabled(QTableView* self, bool enable) {
	self->setCornerButtonEnabled(enable);
}

bool QTableView_IsCornerButtonEnabled(QTableView* self) {
	return self->isCornerButtonEnabled();
}

QRect* QTableView_VisualRect(QTableView* self, QModelIndex* index) {
	QRect ret = self->visualRect(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QModelIndex* QTableView_IndexAt(QTableView* self, QPoint* p) {
	QModelIndex ret = self->indexAt(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QTableView_SetSpan(QTableView* self, int row, int column, int rowSpan, int columnSpan) {
	self->setSpan(static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

int QTableView_RowSpan(QTableView* self, int row, int column) {
	return self->rowSpan(static_cast<int>(row), static_cast<int>(column));
}

int QTableView_ColumnSpan(QTableView* self, int row, int column) {
	return self->columnSpan(static_cast<int>(row), static_cast<int>(column));
}

void QTableView_ClearSpans(QTableView* self) {
	self->clearSpans();
}

void QTableView_SelectRow(QTableView* self, int row) {
	self->selectRow(static_cast<int>(row));
}

void QTableView_SelectColumn(QTableView* self, int column) {
	self->selectColumn(static_cast<int>(column));
}

void QTableView_HideRow(QTableView* self, int row) {
	self->hideRow(static_cast<int>(row));
}

void QTableView_HideColumn(QTableView* self, int column) {
	self->hideColumn(static_cast<int>(column));
}

void QTableView_ShowRow(QTableView* self, int row) {
	self->showRow(static_cast<int>(row));
}

void QTableView_ShowColumn(QTableView* self, int column) {
	self->showColumn(static_cast<int>(column));
}

void QTableView_ResizeRowToContents(QTableView* self, int row) {
	self->resizeRowToContents(static_cast<int>(row));
}

void QTableView_ResizeRowsToContents(QTableView* self) {
	self->resizeRowsToContents();
}

void QTableView_ResizeColumnToContents(QTableView* self, int column) {
	self->resizeColumnToContents(static_cast<int>(column));
}

void QTableView_ResizeColumnsToContents(QTableView* self) {
	self->resizeColumnsToContents();
}

void QTableView_SortByColumn(QTableView* self, int column) {
	self->sortByColumn(static_cast<int>(column));
}

void QTableView_SetShowGrid(QTableView* self, bool show) {
	self->setShowGrid(show);
}

void QTableView_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTableView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableView_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTableView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableView_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTableView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableView_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTableView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableView_Delete(QTableView* self) {
	delete self;
}

