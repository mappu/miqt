#include <QAbstractItemModel>
#include <QColumnView>
#include <QItemSelectionModel>
#include <QList>
#include <QMetaObject>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qcolumnview.h"

#include "gen_qcolumnview.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QColumnView* QColumnView_new() {
	return new QColumnView();
}

QColumnView* QColumnView_new2(QWidget* parent) {
	return new QColumnView(parent);
}

QMetaObject* QColumnView_MetaObject(const QColumnView* self) {
	return (QMetaObject*) self->metaObject();
}

void QColumnView_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QColumnView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColumnView_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QColumnView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColumnView_UpdatePreviewWidget(QColumnView* self, QModelIndex* index) {
	self->updatePreviewWidget(*index);
}

void QColumnView_connect_UpdatePreviewWidget(QColumnView* self, void* slot) {
	QColumnView::connect(self, static_cast<void (QColumnView::*)(const QModelIndex&)>(&QColumnView::updatePreviewWidget), self, [=](const QModelIndex& index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

QModelIndex* QColumnView_IndexAt(const QColumnView* self, QPoint* point) {
	QModelIndex ret = self->indexAt(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QColumnView_ScrollTo(QColumnView* self, QModelIndex* index) {
	self->scrollTo(*index);
}

QSize* QColumnView_SizeHint(const QColumnView* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QColumnView_VisualRect(const QColumnView* self, QModelIndex* index) {
	QRect ret = self->visualRect(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QColumnView_SetRootIndex(QColumnView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QColumnView_SelectAll(QColumnView* self) {
	self->selectAll();
}

void QColumnView_SetResizeGripsVisible(QColumnView* self, bool visible) {
	self->setResizeGripsVisible(visible);
}

bool QColumnView_ResizeGripsVisible(const QColumnView* self) {
	return self->resizeGripsVisible();
}

QWidget* QColumnView_PreviewWidget(const QColumnView* self) {
	return self->previewWidget();
}

void QColumnView_SetPreviewWidget(QColumnView* self, QWidget* widget) {
	self->setPreviewWidget(widget);
}

void QColumnView_SetColumnWidths(QColumnView* self, int* list, size_t list_len) {
	QList<int> list_QList;
	list_QList.reserve(list_len);
	for(size_t i = 0; i < list_len; ++i) {
		list_QList.push_back(list[i]);
	}
	self->setColumnWidths(list_QList);
}

void QColumnView_ColumnWidths(const QColumnView* self, int** _out, size_t* _out_len) {
	QList<int> ret = self->columnWidths();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* __out = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QColumnView_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QColumnView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColumnView_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QColumnView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColumnView_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QColumnView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColumnView_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QColumnView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColumnView_ScrollTo2(QColumnView* self, QModelIndex* index, uintptr_t hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QColumnView_Delete(QColumnView* self) {
	delete self;
}

