#include <QAbstractItemModel>
#include <QHeaderView>
#include <QItemSelectionModel>
#include <QMetaObject>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTableView>
#include <QWidget>
#include <qtableview.h>
#include "gen_qtableview.h"
#include "_cgo_export.h"

QTableView* QTableView_new(QWidget* parent) {
	return new QTableView(parent);
}

QTableView* QTableView_new2() {
	return new QTableView();
}

QMetaObject* QTableView_MetaObject(const QTableView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTableView_Metacast(QTableView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTableView_Tr(const char* s) {
	QString _ret = QTableView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

QHeaderView* QTableView_HorizontalHeader(const QTableView* self) {
	return self->horizontalHeader();
}

QHeaderView* QTableView_VerticalHeader(const QTableView* self) {
	return self->verticalHeader();
}

void QTableView_SetHorizontalHeader(QTableView* self, QHeaderView* header) {
	self->setHorizontalHeader(header);
}

void QTableView_SetVerticalHeader(QTableView* self, QHeaderView* header) {
	self->setVerticalHeader(header);
}

int QTableView_RowViewportPosition(const QTableView* self, int row) {
	return self->rowViewportPosition(static_cast<int>(row));
}

int QTableView_RowAt(const QTableView* self, int y) {
	return self->rowAt(static_cast<int>(y));
}

void QTableView_SetRowHeight(QTableView* self, int row, int height) {
	self->setRowHeight(static_cast<int>(row), static_cast<int>(height));
}

int QTableView_RowHeight(const QTableView* self, int row) {
	return self->rowHeight(static_cast<int>(row));
}

int QTableView_ColumnViewportPosition(const QTableView* self, int column) {
	return self->columnViewportPosition(static_cast<int>(column));
}

int QTableView_ColumnAt(const QTableView* self, int x) {
	return self->columnAt(static_cast<int>(x));
}

void QTableView_SetColumnWidth(QTableView* self, int column, int width) {
	self->setColumnWidth(static_cast<int>(column), static_cast<int>(width));
}

int QTableView_ColumnWidth(const QTableView* self, int column) {
	return self->columnWidth(static_cast<int>(column));
}

bool QTableView_IsRowHidden(const QTableView* self, int row) {
	return self->isRowHidden(static_cast<int>(row));
}

void QTableView_SetRowHidden(QTableView* self, int row, bool hide) {
	self->setRowHidden(static_cast<int>(row), hide);
}

bool QTableView_IsColumnHidden(const QTableView* self, int column) {
	return self->isColumnHidden(static_cast<int>(column));
}

void QTableView_SetColumnHidden(QTableView* self, int column, bool hide) {
	self->setColumnHidden(static_cast<int>(column), hide);
}

void QTableView_SetSortingEnabled(QTableView* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTableView_IsSortingEnabled(const QTableView* self) {
	return self->isSortingEnabled();
}

bool QTableView_ShowGrid(const QTableView* self) {
	return self->showGrid();
}

int QTableView_GridStyle(const QTableView* self) {
	Qt::PenStyle _ret = self->gridStyle();
	return static_cast<int>(_ret);
}

void QTableView_SetGridStyle(QTableView* self, int style) {
	self->setGridStyle(static_cast<Qt::PenStyle>(style));
}

void QTableView_SetWordWrap(QTableView* self, bool on) {
	self->setWordWrap(on);
}

bool QTableView_WordWrap(const QTableView* self) {
	return self->wordWrap();
}

void QTableView_SetCornerButtonEnabled(QTableView* self, bool enable) {
	self->setCornerButtonEnabled(enable);
}

bool QTableView_IsCornerButtonEnabled(const QTableView* self) {
	return self->isCornerButtonEnabled();
}

QRect* QTableView_VisualRect(const QTableView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QTableView_ScrollTo(QTableView* self, QModelIndex* index) {
	self->scrollTo(*index);
}

QModelIndex* QTableView_IndexAt(const QTableView* self, QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

void QTableView_SetSpan(QTableView* self, int row, int column, int rowSpan, int columnSpan) {
	self->setSpan(static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

int QTableView_RowSpan(const QTableView* self, int row, int column) {
	return self->rowSpan(static_cast<int>(row), static_cast<int>(column));
}

int QTableView_ColumnSpan(const QTableView* self, int row, int column) {
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

void QTableView_SortByColumn(QTableView* self, int column, int order) {
	self->sortByColumn(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableView_SetShowGrid(QTableView* self, bool show) {
	self->setShowGrid(show);
}

struct miqt_string QTableView_Tr2(const char* s, const char* c) {
	QString _ret = QTableView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTableView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableView_ScrollTo2(QTableView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QTableView_Delete(QTableView* self) {
	delete self;
}

