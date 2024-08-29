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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QListView* QListView_new() {
	return new QListView();
}

QListView* QListView_new2(QWidget* parent) {
	return new QListView(parent);
}

QMetaObject* QListView_MetaObject(QListView* self) {
	return (QMetaObject*) const_cast<const QListView*>(self)->metaObject();
}

void QListView_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QListView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QListView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_SetMovement(QListView* self, uintptr_t movement) {
	self->setMovement(static_cast<QListView::Movement>(movement));
}

uintptr_t QListView_Movement(QListView* self) {
	QListView::Movement ret = const_cast<const QListView*>(self)->movement();
	return static_cast<uintptr_t>(ret);
}

void QListView_SetFlow(QListView* self, uintptr_t flow) {
	self->setFlow(static_cast<QListView::Flow>(flow));
}

uintptr_t QListView_Flow(QListView* self) {
	QListView::Flow ret = const_cast<const QListView*>(self)->flow();
	return static_cast<uintptr_t>(ret);
}

void QListView_SetWrapping(QListView* self, bool enable) {
	self->setWrapping(enable);
}

bool QListView_IsWrapping(QListView* self) {
	return const_cast<const QListView*>(self)->isWrapping();
}

void QListView_SetResizeMode(QListView* self, uintptr_t mode) {
	self->setResizeMode(static_cast<QListView::ResizeMode>(mode));
}

uintptr_t QListView_ResizeMode(QListView* self) {
	QListView::ResizeMode ret = const_cast<const QListView*>(self)->resizeMode();
	return static_cast<uintptr_t>(ret);
}

void QListView_SetLayoutMode(QListView* self, uintptr_t mode) {
	self->setLayoutMode(static_cast<QListView::LayoutMode>(mode));
}

uintptr_t QListView_LayoutMode(QListView* self) {
	QListView::LayoutMode ret = const_cast<const QListView*>(self)->layoutMode();
	return static_cast<uintptr_t>(ret);
}

void QListView_SetSpacing(QListView* self, int space) {
	self->setSpacing(static_cast<int>(space));
}

int QListView_Spacing(QListView* self) {
	return const_cast<const QListView*>(self)->spacing();
}

void QListView_SetBatchSize(QListView* self, int batchSize) {
	self->setBatchSize(static_cast<int>(batchSize));
}

int QListView_BatchSize(QListView* self) {
	return const_cast<const QListView*>(self)->batchSize();
}

void QListView_SetGridSize(QListView* self, QSize* size) {
	self->setGridSize(*size);
}

QSize* QListView_GridSize(QListView* self) {
	QSize ret = const_cast<const QListView*>(self)->gridSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QListView_SetViewMode(QListView* self, uintptr_t mode) {
	self->setViewMode(static_cast<QListView::ViewMode>(mode));
}

uintptr_t QListView_ViewMode(QListView* self) {
	QListView::ViewMode ret = const_cast<const QListView*>(self)->viewMode();
	return static_cast<uintptr_t>(ret);
}

void QListView_ClearPropertyFlags(QListView* self) {
	self->clearPropertyFlags();
}

bool QListView_IsRowHidden(QListView* self, int row) {
	return const_cast<const QListView*>(self)->isRowHidden(static_cast<int>(row));
}

void QListView_SetRowHidden(QListView* self, int row, bool hide) {
	self->setRowHidden(static_cast<int>(row), hide);
}

void QListView_SetModelColumn(QListView* self, int column) {
	self->setModelColumn(static_cast<int>(column));
}

int QListView_ModelColumn(QListView* self) {
	return const_cast<const QListView*>(self)->modelColumn();
}

void QListView_SetUniformItemSizes(QListView* self, bool enable) {
	self->setUniformItemSizes(enable);
}

bool QListView_UniformItemSizes(QListView* self) {
	return const_cast<const QListView*>(self)->uniformItemSizes();
}

void QListView_SetWordWrap(QListView* self, bool on) {
	self->setWordWrap(on);
}

bool QListView_WordWrap(QListView* self) {
	return const_cast<const QListView*>(self)->wordWrap();
}

void QListView_SetSelectionRectVisible(QListView* self, bool show) {
	self->setSelectionRectVisible(show);
}

bool QListView_IsSelectionRectVisible(QListView* self) {
	return const_cast<const QListView*>(self)->isSelectionRectVisible();
}

void QListView_SetItemAlignment(QListView* self, int alignment) {
	self->setItemAlignment(static_cast<Qt::Alignment>(alignment));
}

int QListView_ItemAlignment(QListView* self) {
	Qt::Alignment ret = const_cast<const QListView*>(self)->itemAlignment();
	return static_cast<int>(ret);
}

QRect* QListView_VisualRect(QListView* self, QModelIndex* index) {
	QRect ret = const_cast<const QListView*>(self)->visualRect(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QListView_ScrollTo(QListView* self, QModelIndex* index) {
	self->scrollTo(*index);
}

QModelIndex* QListView_IndexAt(QListView* self, QPoint* p) {
	QModelIndex ret = const_cast<const QListView*>(self)->indexAt(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
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

void QListView_IndexesMoved(QListView* self, QModelIndex** indexes, size_t indexes_len) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes_len);
	for(size_t i = 0; i < indexes_len; ++i) {
		indexes_QList.push_back(*(indexes[i]));
	}
	self->indexesMoved(indexes_QList);
}

void QListView_connect_IndexesMoved(QListView* self, void* slot) {
	QListView::connect(self, static_cast<void (QListView::*)(const QModelIndexList&)>(&QListView::indexesMoved), self, [=](const QModelIndexList& indexes) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QListView_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QListView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QListView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QListView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QListView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_ScrollTo2(QListView* self, QModelIndex* index, uintptr_t hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QListView_Delete(QListView* self) {
	delete self;
}

