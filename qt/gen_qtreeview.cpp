#include <QAbstractItemModel>
#include <QHeaderView>
#include <QItemSelectionModel>
#include <QList>
#include <QMetaObject>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTreeView>
#include <QWidget>
#include <qtreeview.h>
#include "gen_qtreeview.h"
#include "_cgo_export.h"

QTreeView* QTreeView_new() {
	return new QTreeView();
}

QTreeView* QTreeView_new2(QWidget* parent) {
	return new QTreeView(parent);
}

QMetaObject* QTreeView_MetaObject(const QTreeView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTreeView_Metacast(QTreeView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTreeView_Tr(const char* s) {
	QString _ret = QTreeView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeView_TrUtf8(const char* s) {
	QString _ret = QTreeView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeView_SetModel(QTreeView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QTreeView_SetRootIndex(QTreeView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QTreeView_SetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QHeaderView* QTreeView_Header(const QTreeView* self) {
	return self->header();
}

void QTreeView_SetHeader(QTreeView* self, QHeaderView* header) {
	self->setHeader(header);
}

int QTreeView_AutoExpandDelay(const QTreeView* self) {
	return self->autoExpandDelay();
}

void QTreeView_SetAutoExpandDelay(QTreeView* self, int delay) {
	self->setAutoExpandDelay(static_cast<int>(delay));
}

int QTreeView_Indentation(const QTreeView* self) {
	return self->indentation();
}

void QTreeView_SetIndentation(QTreeView* self, int i) {
	self->setIndentation(static_cast<int>(i));
}

void QTreeView_ResetIndentation(QTreeView* self) {
	self->resetIndentation();
}

bool QTreeView_RootIsDecorated(const QTreeView* self) {
	return self->rootIsDecorated();
}

void QTreeView_SetRootIsDecorated(QTreeView* self, bool show) {
	self->setRootIsDecorated(show);
}

bool QTreeView_UniformRowHeights(const QTreeView* self) {
	return self->uniformRowHeights();
}

void QTreeView_SetUniformRowHeights(QTreeView* self, bool uniform) {
	self->setUniformRowHeights(uniform);
}

bool QTreeView_ItemsExpandable(const QTreeView* self) {
	return self->itemsExpandable();
}

void QTreeView_SetItemsExpandable(QTreeView* self, bool enable) {
	self->setItemsExpandable(enable);
}

bool QTreeView_ExpandsOnDoubleClick(const QTreeView* self) {
	return self->expandsOnDoubleClick();
}

void QTreeView_SetExpandsOnDoubleClick(QTreeView* self, bool enable) {
	self->setExpandsOnDoubleClick(enable);
}

int QTreeView_ColumnViewportPosition(const QTreeView* self, int column) {
	return self->columnViewportPosition(static_cast<int>(column));
}

int QTreeView_ColumnWidth(const QTreeView* self, int column) {
	return self->columnWidth(static_cast<int>(column));
}

void QTreeView_SetColumnWidth(QTreeView* self, int column, int width) {
	self->setColumnWidth(static_cast<int>(column), static_cast<int>(width));
}

int QTreeView_ColumnAt(const QTreeView* self, int x) {
	return self->columnAt(static_cast<int>(x));
}

bool QTreeView_IsColumnHidden(const QTreeView* self, int column) {
	return self->isColumnHidden(static_cast<int>(column));
}

void QTreeView_SetColumnHidden(QTreeView* self, int column, bool hide) {
	self->setColumnHidden(static_cast<int>(column), hide);
}

bool QTreeView_IsHeaderHidden(const QTreeView* self) {
	return self->isHeaderHidden();
}

void QTreeView_SetHeaderHidden(QTreeView* self, bool hide) {
	self->setHeaderHidden(hide);
}

bool QTreeView_IsRowHidden(const QTreeView* self, int row, QModelIndex* parent) {
	return self->isRowHidden(static_cast<int>(row), *parent);
}

void QTreeView_SetRowHidden(QTreeView* self, int row, QModelIndex* parent, bool hide) {
	self->setRowHidden(static_cast<int>(row), *parent, hide);
}

bool QTreeView_IsFirstColumnSpanned(const QTreeView* self, int row, QModelIndex* parent) {
	return self->isFirstColumnSpanned(static_cast<int>(row), *parent);
}

void QTreeView_SetFirstColumnSpanned(QTreeView* self, int row, QModelIndex* parent, bool span) {
	self->setFirstColumnSpanned(static_cast<int>(row), *parent, span);
}

bool QTreeView_IsExpanded(const QTreeView* self, QModelIndex* index) {
	return self->isExpanded(*index);
}

void QTreeView_SetExpanded(QTreeView* self, QModelIndex* index, bool expand) {
	self->setExpanded(*index, expand);
}

void QTreeView_SetSortingEnabled(QTreeView* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTreeView_IsSortingEnabled(const QTreeView* self) {
	return self->isSortingEnabled();
}

void QTreeView_SetAnimated(QTreeView* self, bool enable) {
	self->setAnimated(enable);
}

bool QTreeView_IsAnimated(const QTreeView* self) {
	return self->isAnimated();
}

void QTreeView_SetAllColumnsShowFocus(QTreeView* self, bool enable) {
	self->setAllColumnsShowFocus(enable);
}

bool QTreeView_AllColumnsShowFocus(const QTreeView* self) {
	return self->allColumnsShowFocus();
}

void QTreeView_SetWordWrap(QTreeView* self, bool on) {
	self->setWordWrap(on);
}

bool QTreeView_WordWrap(const QTreeView* self) {
	return self->wordWrap();
}

void QTreeView_SetTreePosition(QTreeView* self, int logicalIndex) {
	self->setTreePosition(static_cast<int>(logicalIndex));
}

int QTreeView_TreePosition(const QTreeView* self) {
	return self->treePosition();
}

void QTreeView_KeyboardSearch(QTreeView* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	self->keyboardSearch(search_QString);
}

QRect* QTreeView_VisualRect(const QTreeView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QTreeView_ScrollTo(QTreeView* self, QModelIndex* index) {
	self->scrollTo(*index);
}

QModelIndex* QTreeView_IndexAt(const QTreeView* self, QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

QModelIndex* QTreeView_IndexAbove(const QTreeView* self, QModelIndex* index) {
	return new QModelIndex(self->indexAbove(*index));
}

QModelIndex* QTreeView_IndexBelow(const QTreeView* self, QModelIndex* index) {
	return new QModelIndex(self->indexBelow(*index));
}

void QTreeView_DoItemsLayout(QTreeView* self) {
	self->doItemsLayout();
}

void QTreeView_Reset(QTreeView* self) {
	self->reset();
}

void QTreeView_DataChanged(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight) {
	self->dataChanged(*topLeft, *bottomRight);
}

void QTreeView_SelectAll(QTreeView* self) {
	self->selectAll();
}

void QTreeView_Expanded(QTreeView* self, QModelIndex* index) {
	self->expanded(*index);
}

void QTreeView_connect_Expanded(QTreeView* self, intptr_t slot) {
	QTreeView::connect(self, static_cast<void (QTreeView::*)(const QModelIndex&)>(&QTreeView::expanded), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QTreeView_Expanded(slot, sigval1);
	});
}

void QTreeView_Collapsed(QTreeView* self, QModelIndex* index) {
	self->collapsed(*index);
}

void QTreeView_connect_Collapsed(QTreeView* self, intptr_t slot) {
	QTreeView::connect(self, static_cast<void (QTreeView::*)(const QModelIndex&)>(&QTreeView::collapsed), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QTreeView_Collapsed(slot, sigval1);
	});
}

void QTreeView_HideColumn(QTreeView* self, int column) {
	self->hideColumn(static_cast<int>(column));
}

void QTreeView_ShowColumn(QTreeView* self, int column) {
	self->showColumn(static_cast<int>(column));
}

void QTreeView_Expand(QTreeView* self, QModelIndex* index) {
	self->expand(*index);
}

void QTreeView_Collapse(QTreeView* self, QModelIndex* index) {
	self->collapse(*index);
}

void QTreeView_ResizeColumnToContents(QTreeView* self, int column) {
	self->resizeColumnToContents(static_cast<int>(column));
}

void QTreeView_SortByColumn(QTreeView* self, int column) {
	self->sortByColumn(static_cast<int>(column));
}

void QTreeView_SortByColumn2(QTreeView* self, int column, int order) {
	self->sortByColumn(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeView_ExpandAll(QTreeView* self) {
	self->expandAll();
}

void QTreeView_ExpandRecursively(QTreeView* self, QModelIndex* index) {
	self->expandRecursively(*index);
}

void QTreeView_CollapseAll(QTreeView* self) {
	self->collapseAll();
}

void QTreeView_ExpandToDepth(QTreeView* self, int depth) {
	self->expandToDepth(static_cast<int>(depth));
}

struct miqt_string QTreeView_Tr2(const char* s, const char* c) {
	QString _ret = QTreeView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTreeView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeView_TrUtf82(const char* s, const char* c) {
	QString _ret = QTreeView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeView_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTreeView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeView_ScrollTo2(QTreeView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QTreeView_DataChanged3(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array* /* of int */ roles) {
	QVector<int> roles_QList;
	roles_QList.reserve(roles->len);
	int* roles_arr = static_cast<int*>(roles->data);
	for(size_t i = 0; i < roles->len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void QTreeView_ExpandRecursively2(QTreeView* self, QModelIndex* index, int depth) {
	self->expandRecursively(*index, static_cast<int>(depth));
}

void QTreeView_Delete(QTreeView* self) {
	delete self;
}

