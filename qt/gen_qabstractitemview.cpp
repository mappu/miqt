#include "gen_qabstractitemview.h"
#include "qabstractitemview.h"

#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QItemSelectionModel>
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

QMetaObject* QAbstractItemView_MetaObject(QAbstractItemView* self) {
	return (QMetaObject*) self->metaObject();
}

void QAbstractItemView_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemView_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemView_SetModel(QAbstractItemView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractItemModel* QAbstractItemView_Model(QAbstractItemView* self) {
	return self->model();
}

void QAbstractItemView_SetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QItemSelectionModel* QAbstractItemView_SelectionModel(QAbstractItemView* self) {
	return self->selectionModel();
}

void QAbstractItemView_SetItemDelegate(QAbstractItemView* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegate(QAbstractItemView* self) {
	return self->itemDelegate();
}

QModelIndex* QAbstractItemView_CurrentIndex(QAbstractItemView* self) {
	QModelIndex ret = self->currentIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QAbstractItemView_RootIndex(QAbstractItemView* self) {
	QModelIndex ret = self->rootIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QAbstractItemView_ResetVerticalScrollMode(QAbstractItemView* self) {
	self->resetVerticalScrollMode();
}

void QAbstractItemView_ResetHorizontalScrollMode(QAbstractItemView* self) {
	self->resetHorizontalScrollMode();
}

void QAbstractItemView_SetAutoScroll(QAbstractItemView* self, bool enable) {
	self->setAutoScroll(enable);
}

bool QAbstractItemView_HasAutoScroll(QAbstractItemView* self) {
	return self->hasAutoScroll();
}

void QAbstractItemView_SetAutoScrollMargin(QAbstractItemView* self, int margin) {
	self->setAutoScrollMargin(static_cast<int>(margin));
}

int QAbstractItemView_AutoScrollMargin(QAbstractItemView* self) {
	return self->autoScrollMargin();
}

void QAbstractItemView_SetTabKeyNavigation(QAbstractItemView* self, bool enable) {
	self->setTabKeyNavigation(enable);
}

bool QAbstractItemView_TabKeyNavigation(QAbstractItemView* self) {
	return self->tabKeyNavigation();
}

void QAbstractItemView_SetDropIndicatorShown(QAbstractItemView* self, bool enable) {
	self->setDropIndicatorShown(enable);
}

bool QAbstractItemView_ShowDropIndicator(QAbstractItemView* self) {
	return self->showDropIndicator();
}

void QAbstractItemView_SetDragEnabled(QAbstractItemView* self, bool enable) {
	self->setDragEnabled(enable);
}

bool QAbstractItemView_DragEnabled(QAbstractItemView* self) {
	return self->dragEnabled();
}

void QAbstractItemView_SetDragDropOverwriteMode(QAbstractItemView* self, bool overwrite) {
	self->setDragDropOverwriteMode(overwrite);
}

bool QAbstractItemView_DragDropOverwriteMode(QAbstractItemView* self) {
	return self->dragDropOverwriteMode();
}

void QAbstractItemView_SetAlternatingRowColors(QAbstractItemView* self, bool enable) {
	self->setAlternatingRowColors(enable);
}

bool QAbstractItemView_AlternatingRowColors(QAbstractItemView* self) {
	return self->alternatingRowColors();
}

void QAbstractItemView_SetIconSize(QAbstractItemView* self, QSize* size) {
	self->setIconSize(*size);
}

QSize* QAbstractItemView_IconSize(QAbstractItemView* self) {
	QSize ret = self->iconSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QAbstractItemView_KeyboardSearch(QAbstractItemView* self, const char* search, size_t search_Strlen) {
	QString search_QString = QString::fromUtf8(search, search_Strlen);
	self->keyboardSearch(search_QString);
}

QRect* QAbstractItemView_VisualRect(QAbstractItemView* self, QModelIndex* index) {
	QRect ret = self->visualRect(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QModelIndex* QAbstractItemView_IndexAt(QAbstractItemView* self, QPoint* point) {
	QModelIndex ret = self->indexAt(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QSize* QAbstractItemView_SizeHintForIndex(QAbstractItemView* self, QModelIndex* index) {
	QSize ret = self->sizeHintForIndex(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QAbstractItemView_SizeHintForRow(QAbstractItemView* self, int row) {
	return self->sizeHintForRow(static_cast<int>(row));
}

int QAbstractItemView_SizeHintForColumn(QAbstractItemView* self, int column) {
	return self->sizeHintForColumn(static_cast<int>(column));
}

void QAbstractItemView_OpenPersistentEditor(QAbstractItemView* self, QModelIndex* index) {
	self->openPersistentEditor(*index);
}

void QAbstractItemView_ClosePersistentEditor(QAbstractItemView* self, QModelIndex* index) {
	self->closePersistentEditor(*index);
}

bool QAbstractItemView_IsPersistentEditorOpen(QAbstractItemView* self, QModelIndex* index) {
	return self->isPersistentEditorOpen(*index);
}

void QAbstractItemView_SetIndexWidget(QAbstractItemView* self, QModelIndex* index, QWidget* widget) {
	self->setIndexWidget(*index, widget);
}

QWidget* QAbstractItemView_IndexWidget(QAbstractItemView* self, QModelIndex* index) {
	return self->indexWidget(*index);
}

void QAbstractItemView_SetItemDelegateForRow(QAbstractItemView* self, int row, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForRow(static_cast<int>(row), delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForRow(QAbstractItemView* self, int row) {
	return self->itemDelegateForRow(static_cast<int>(row));
}

void QAbstractItemView_SetItemDelegateForColumn(QAbstractItemView* self, int column, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForColumn(static_cast<int>(column), delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForColumn(QAbstractItemView* self, int column) {
	return self->itemDelegateForColumn(static_cast<int>(column));
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateWithIndex(QAbstractItemView* self, QModelIndex* index) {
	return self->itemDelegate(*index);
}

void QAbstractItemView_Reset(QAbstractItemView* self) {
	self->reset();
}

void QAbstractItemView_SetRootIndex(QAbstractItemView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QAbstractItemView_DoItemsLayout(QAbstractItemView* self) {
	self->doItemsLayout();
}

void QAbstractItemView_SelectAll(QAbstractItemView* self) {
	self->selectAll();
}

void QAbstractItemView_Edit(QAbstractItemView* self, QModelIndex* index) {
	self->edit(*index);
}

void QAbstractItemView_ClearSelection(QAbstractItemView* self) {
	self->clearSelection();
}

void QAbstractItemView_SetCurrentIndex(QAbstractItemView* self, QModelIndex* index) {
	self->setCurrentIndex(*index);
}

void QAbstractItemView_ScrollToTop(QAbstractItemView* self) {
	self->scrollToTop();
}

void QAbstractItemView_ScrollToBottom(QAbstractItemView* self) {
	self->scrollToBottom();
}

void QAbstractItemView_Update(QAbstractItemView* self, QModelIndex* index) {
	self->update(*index);
}

void QAbstractItemView_Pressed(QAbstractItemView* self, QModelIndex* index) {
	self->pressed(*index);
}

void QAbstractItemView_connect_Pressed(QAbstractItemView* self, void* slot) {
	QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::pressed), self, [=](const QModelIndex& index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemView_Clicked(QAbstractItemView* self, QModelIndex* index) {
	self->clicked(*index);
}

void QAbstractItemView_connect_Clicked(QAbstractItemView* self, void* slot) {
	QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::clicked), self, [=](const QModelIndex& index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemView_DoubleClicked(QAbstractItemView* self, QModelIndex* index) {
	self->doubleClicked(*index);
}

void QAbstractItemView_connect_DoubleClicked(QAbstractItemView* self, void* slot) {
	QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::doubleClicked), self, [=](const QModelIndex& index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemView_Activated(QAbstractItemView* self, QModelIndex* index) {
	self->activated(*index);
}

void QAbstractItemView_connect_Activated(QAbstractItemView* self, void* slot) {
	QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::activated), self, [=](const QModelIndex& index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemView_Entered(QAbstractItemView* self, QModelIndex* index) {
	self->entered(*index);
}

void QAbstractItemView_connect_Entered(QAbstractItemView* self, void* slot) {
	QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::entered), self, [=](const QModelIndex& index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemView_ViewportEntered(QAbstractItemView* self) {
	self->viewportEntered();
}

void QAbstractItemView_connect_ViewportEntered(QAbstractItemView* self, void* slot) {
	QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)()>(&QAbstractItemView::viewportEntered), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemView_IconSizeChanged(QAbstractItemView* self, QSize* size) {
	self->iconSizeChanged(*size);
}

void QAbstractItemView_connect_IconSizeChanged(QAbstractItemView* self, void* slot) {
	QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QSize&)>(&QAbstractItemView::iconSizeChanged), self, [=](const QSize& size) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemView_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemView_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemView_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemView_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemView_Delete(QAbstractItemView* self) {
	delete self;
}

