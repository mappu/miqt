#include "gen_qlistview.h"
#include "qlistview.h"

#include <QList>
#include <QListView>
#include <QMetaObject>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QWidget>


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
	return (QMetaObject*) self->metaObject();
}

void QListView_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QListView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QListView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_SetWrapping(QListView* self, bool enable) {
	self->setWrapping(enable);
}

bool QListView_IsWrapping(QListView* self) {
	return self->isWrapping();
}

void QListView_SetSpacing(QListView* self, int space) {
	self->setSpacing(static_cast<int>(space));
}

int QListView_Spacing(QListView* self) {
	return self->spacing();
}

void QListView_SetBatchSize(QListView* self, int batchSize) {
	self->setBatchSize(static_cast<int>(batchSize));
}

int QListView_BatchSize(QListView* self) {
	return self->batchSize();
}

void QListView_SetGridSize(QListView* self, QSize* size) {
	self->setGridSize(*size);
}

QSize* QListView_GridSize(QListView* self) {
	QSize ret = self->gridSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QListView_ClearPropertyFlags(QListView* self) {
	self->clearPropertyFlags();
}

bool QListView_IsRowHidden(QListView* self, int row) {
	return self->isRowHidden(static_cast<int>(row));
}

void QListView_SetRowHidden(QListView* self, int row, bool hide) {
	self->setRowHidden(static_cast<int>(row), hide);
}

void QListView_SetModelColumn(QListView* self, int column) {
	self->setModelColumn(static_cast<int>(column));
}

int QListView_ModelColumn(QListView* self) {
	return self->modelColumn();
}

void QListView_SetUniformItemSizes(QListView* self, bool enable) {
	self->setUniformItemSizes(enable);
}

bool QListView_UniformItemSizes(QListView* self) {
	return self->uniformItemSizes();
}

void QListView_SetWordWrap(QListView* self, bool on) {
	self->setWordWrap(on);
}

bool QListView_WordWrap(QListView* self) {
	return self->wordWrap();
}

void QListView_SetSelectionRectVisible(QListView* self, bool show) {
	self->setSelectionRectVisible(show);
}

bool QListView_IsSelectionRectVisible(QListView* self) {
	return self->isSelectionRectVisible();
}

QRect* QListView_VisualRect(QListView* self, QModelIndex* index) {
	QRect ret = self->visualRect(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QModelIndex* QListView_IndexAt(QListView* self, QPoint* p) {
	QModelIndex ret = self->indexAt(*p);
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

void QListView_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QListView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QListView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QListView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QListView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListView_Delete(QListView* self) {
	delete self;
}

