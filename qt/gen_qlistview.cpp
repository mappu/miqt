#include <QList>
#include <QListView>
#include <QMetaObject>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qlistview.h"
#include "gen_qlistview.h"
#include "_cgo_export.h"

QListView* QListView_new() {
	return new QListView();
}

QListView* QListView_new2(QWidget* parent) {
	return new QListView(parent);
}

QMetaObject* QListView_MetaObject(const QListView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QListView_Metacast(QListView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QListView_Tr(const char* s) {
	QString _ret = QListView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QListView_TrUtf8(const char* s) {
	QString _ret = QListView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QListView_SetMovement(QListView* self, int movement) {
	self->setMovement(static_cast<QListView::Movement>(movement));
}

int QListView_Movement(const QListView* self) {
	QListView::Movement _ret = self->movement();
	return static_cast<int>(_ret);
}

void QListView_SetFlow(QListView* self, int flow) {
	self->setFlow(static_cast<QListView::Flow>(flow));
}

int QListView_Flow(const QListView* self) {
	QListView::Flow _ret = self->flow();
	return static_cast<int>(_ret);
}

void QListView_SetWrapping(QListView* self, bool enable) {
	self->setWrapping(enable);
}

bool QListView_IsWrapping(const QListView* self) {
	return self->isWrapping();
}

void QListView_SetResizeMode(QListView* self, int mode) {
	self->setResizeMode(static_cast<QListView::ResizeMode>(mode));
}

int QListView_ResizeMode(const QListView* self) {
	QListView::ResizeMode _ret = self->resizeMode();
	return static_cast<int>(_ret);
}

void QListView_SetLayoutMode(QListView* self, int mode) {
	self->setLayoutMode(static_cast<QListView::LayoutMode>(mode));
}

int QListView_LayoutMode(const QListView* self) {
	QListView::LayoutMode _ret = self->layoutMode();
	return static_cast<int>(_ret);
}

void QListView_SetSpacing(QListView* self, int space) {
	self->setSpacing(static_cast<int>(space));
}

int QListView_Spacing(const QListView* self) {
	return self->spacing();
}

void QListView_SetBatchSize(QListView* self, int batchSize) {
	self->setBatchSize(static_cast<int>(batchSize));
}

int QListView_BatchSize(const QListView* self) {
	return self->batchSize();
}

void QListView_SetGridSize(QListView* self, QSize* size) {
	self->setGridSize(*size);
}

QSize* QListView_GridSize(const QListView* self) {
	return new QSize(self->gridSize());
}

void QListView_SetViewMode(QListView* self, int mode) {
	self->setViewMode(static_cast<QListView::ViewMode>(mode));
}

int QListView_ViewMode(const QListView* self) {
	QListView::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

void QListView_ClearPropertyFlags(QListView* self) {
	self->clearPropertyFlags();
}

bool QListView_IsRowHidden(const QListView* self, int row) {
	return self->isRowHidden(static_cast<int>(row));
}

void QListView_SetRowHidden(QListView* self, int row, bool hide) {
	self->setRowHidden(static_cast<int>(row), hide);
}

void QListView_SetModelColumn(QListView* self, int column) {
	self->setModelColumn(static_cast<int>(column));
}

int QListView_ModelColumn(const QListView* self) {
	return self->modelColumn();
}

void QListView_SetUniformItemSizes(QListView* self, bool enable) {
	self->setUniformItemSizes(enable);
}

bool QListView_UniformItemSizes(const QListView* self) {
	return self->uniformItemSizes();
}

void QListView_SetWordWrap(QListView* self, bool on) {
	self->setWordWrap(on);
}

bool QListView_WordWrap(const QListView* self) {
	return self->wordWrap();
}

void QListView_SetSelectionRectVisible(QListView* self, bool show) {
	self->setSelectionRectVisible(show);
}

bool QListView_IsSelectionRectVisible(const QListView* self) {
	return self->isSelectionRectVisible();
}

void QListView_SetItemAlignment(QListView* self, int alignment) {
	self->setItemAlignment(static_cast<Qt::Alignment>(alignment));
}

int QListView_ItemAlignment(const QListView* self) {
	Qt::Alignment _ret = self->itemAlignment();
	return static_cast<int>(_ret);
}

QRect* QListView_VisualRect(const QListView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QListView_ScrollTo(QListView* self, QModelIndex* index) {
	self->scrollTo(*index);
}

QModelIndex* QListView_IndexAt(const QListView* self, QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

void QListView_DoItemsLayout(QListView* self) {
	self->doItemsLayout();
}

void QListView_Reset(QListView* self) {
	self->reset();
}

void QListView_SetRootIndex(QListView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QListView_IndexesMoved(QListView* self, struct miqt_array* /* of QModelIndex* */ indexes) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes->len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes->data);
	for(size_t i = 0; i < indexes->len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	self->indexesMoved(indexes_QList);
}

void QListView_connect_IndexesMoved(QListView* self, intptr_t slot) {
	QListView::connect(self, static_cast<void (QListView::*)(const QModelIndexList&)>(&QListView::indexesMoved), self, [=](const QModelIndexList& indexes) {
		const QModelIndexList& indexes_ret = indexes;
		// Convert QList<> from C++ memory to manually-managed C memory
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.length()));
		for (size_t i = 0, e = indexes_ret.length(); i < e; ++i) {
			indexes_arr[i] = new QModelIndex(indexes_ret[i]);
		}
		struct miqt_array* indexes_out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
		indexes_out->len = indexes_ret.length();
		indexes_out->data = static_cast<void*>(indexes_arr);
		struct miqt_array* sigval1 = indexes_out;
		miqt_exec_callback_QListView_IndexesMoved(slot, sigval1);
	});
}

struct miqt_string* QListView_Tr2(const char* s, const char* c) {
	QString _ret = QListView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QListView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QListView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QListView_TrUtf82(const char* s, const char* c) {
	QString _ret = QListView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QListView_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QListView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QListView_ScrollTo2(QListView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QListView_Delete(QListView* self) {
	delete self;
}

