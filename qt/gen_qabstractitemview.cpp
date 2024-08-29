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
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include "qabstractitemview.h"

#include "gen_qabstractitemview.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractItemView_MetaObject(QAbstractItemView* self) {
	return (QMetaObject*) const_cast<const QAbstractItemView*>(self)->metaObject();
}

void QAbstractItemView_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemView_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
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
	return const_cast<const QAbstractItemView*>(self)->model();
}

void QAbstractItemView_SetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QItemSelectionModel* QAbstractItemView_SelectionModel(QAbstractItemView* self) {
	return const_cast<const QAbstractItemView*>(self)->selectionModel();
}

void QAbstractItemView_SetItemDelegate(QAbstractItemView* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegate(QAbstractItemView* self) {
	return const_cast<const QAbstractItemView*>(self)->itemDelegate();
}

void QAbstractItemView_SetSelectionMode(QAbstractItemView* self, uintptr_t mode) {
	self->setSelectionMode(static_cast<QAbstractItemView::SelectionMode>(mode));
}

uintptr_t QAbstractItemView_SelectionMode(QAbstractItemView* self) {
	QAbstractItemView::SelectionMode ret = const_cast<const QAbstractItemView*>(self)->selectionMode();
	return static_cast<uintptr_t>(ret);
}

void QAbstractItemView_SetSelectionBehavior(QAbstractItemView* self, uintptr_t behavior) {
	self->setSelectionBehavior(static_cast<QAbstractItemView::SelectionBehavior>(behavior));
}

uintptr_t QAbstractItemView_SelectionBehavior(QAbstractItemView* self) {
	QAbstractItemView::SelectionBehavior ret = const_cast<const QAbstractItemView*>(self)->selectionBehavior();
	return static_cast<uintptr_t>(ret);
}

QModelIndex* QAbstractItemView_CurrentIndex(QAbstractItemView* self) {
	QModelIndex ret = const_cast<const QAbstractItemView*>(self)->currentIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QAbstractItemView_RootIndex(QAbstractItemView* self) {
	QModelIndex ret = const_cast<const QAbstractItemView*>(self)->rootIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QAbstractItemView_SetEditTriggers(QAbstractItemView* self, int triggers) {
	self->setEditTriggers(static_cast<QAbstractItemView::EditTriggers>(triggers));
}

int QAbstractItemView_EditTriggers(QAbstractItemView* self) {
	QAbstractItemView::EditTriggers ret = const_cast<const QAbstractItemView*>(self)->editTriggers();
	return static_cast<int>(ret);
}

void QAbstractItemView_SetVerticalScrollMode(QAbstractItemView* self, uintptr_t mode) {
	self->setVerticalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

uintptr_t QAbstractItemView_VerticalScrollMode(QAbstractItemView* self) {
	QAbstractItemView::ScrollMode ret = const_cast<const QAbstractItemView*>(self)->verticalScrollMode();
	return static_cast<uintptr_t>(ret);
}

void QAbstractItemView_ResetVerticalScrollMode(QAbstractItemView* self) {
	self->resetVerticalScrollMode();
}

void QAbstractItemView_SetHorizontalScrollMode(QAbstractItemView* self, uintptr_t mode) {
	self->setHorizontalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

uintptr_t QAbstractItemView_HorizontalScrollMode(QAbstractItemView* self) {
	QAbstractItemView::ScrollMode ret = const_cast<const QAbstractItemView*>(self)->horizontalScrollMode();
	return static_cast<uintptr_t>(ret);
}

void QAbstractItemView_ResetHorizontalScrollMode(QAbstractItemView* self) {
	self->resetHorizontalScrollMode();
}

void QAbstractItemView_SetAutoScroll(QAbstractItemView* self, bool enable) {
	self->setAutoScroll(enable);
}

bool QAbstractItemView_HasAutoScroll(QAbstractItemView* self) {
	return const_cast<const QAbstractItemView*>(self)->hasAutoScroll();
}

void QAbstractItemView_SetAutoScrollMargin(QAbstractItemView* self, int margin) {
	self->setAutoScrollMargin(static_cast<int>(margin));
}

int QAbstractItemView_AutoScrollMargin(QAbstractItemView* self) {
	return const_cast<const QAbstractItemView*>(self)->autoScrollMargin();
}

void QAbstractItemView_SetTabKeyNavigation(QAbstractItemView* self, bool enable) {
	self->setTabKeyNavigation(enable);
}

bool QAbstractItemView_TabKeyNavigation(QAbstractItemView* self) {
	return const_cast<const QAbstractItemView*>(self)->tabKeyNavigation();
}

void QAbstractItemView_SetDropIndicatorShown(QAbstractItemView* self, bool enable) {
	self->setDropIndicatorShown(enable);
}

bool QAbstractItemView_ShowDropIndicator(QAbstractItemView* self) {
	return const_cast<const QAbstractItemView*>(self)->showDropIndicator();
}

void QAbstractItemView_SetDragEnabled(QAbstractItemView* self, bool enable) {
	self->setDragEnabled(enable);
}

bool QAbstractItemView_DragEnabled(QAbstractItemView* self) {
	return const_cast<const QAbstractItemView*>(self)->dragEnabled();
}

void QAbstractItemView_SetDragDropOverwriteMode(QAbstractItemView* self, bool overwrite) {
	self->setDragDropOverwriteMode(overwrite);
}

bool QAbstractItemView_DragDropOverwriteMode(QAbstractItemView* self) {
	return const_cast<const QAbstractItemView*>(self)->dragDropOverwriteMode();
}

void QAbstractItemView_SetDragDropMode(QAbstractItemView* self, uintptr_t behavior) {
	self->setDragDropMode(static_cast<QAbstractItemView::DragDropMode>(behavior));
}

uintptr_t QAbstractItemView_DragDropMode(QAbstractItemView* self) {
	QAbstractItemView::DragDropMode ret = const_cast<const QAbstractItemView*>(self)->dragDropMode();
	return static_cast<uintptr_t>(ret);
}

void QAbstractItemView_SetDefaultDropAction(QAbstractItemView* self, uintptr_t dropAction) {
	self->setDefaultDropAction(static_cast<Qt::DropAction>(dropAction));
}

uintptr_t QAbstractItemView_DefaultDropAction(QAbstractItemView* self) {
	Qt::DropAction ret = const_cast<const QAbstractItemView*>(self)->defaultDropAction();
	return static_cast<uintptr_t>(ret);
}

void QAbstractItemView_SetAlternatingRowColors(QAbstractItemView* self, bool enable) {
	self->setAlternatingRowColors(enable);
}

bool QAbstractItemView_AlternatingRowColors(QAbstractItemView* self) {
	return const_cast<const QAbstractItemView*>(self)->alternatingRowColors();
}

void QAbstractItemView_SetIconSize(QAbstractItemView* self, QSize* size) {
	self->setIconSize(*size);
}

QSize* QAbstractItemView_IconSize(QAbstractItemView* self) {
	QSize ret = const_cast<const QAbstractItemView*>(self)->iconSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QAbstractItemView_SetTextElideMode(QAbstractItemView* self, uintptr_t mode) {
	self->setTextElideMode(static_cast<Qt::TextElideMode>(mode));
}

uintptr_t QAbstractItemView_TextElideMode(QAbstractItemView* self) {
	Qt::TextElideMode ret = const_cast<const QAbstractItemView*>(self)->textElideMode();
	return static_cast<uintptr_t>(ret);
}

void QAbstractItemView_KeyboardSearch(QAbstractItemView* self, const char* search, size_t search_Strlen) {
	QString search_QString = QString::fromUtf8(search, search_Strlen);
	self->keyboardSearch(search_QString);
}

QRect* QAbstractItemView_VisualRect(QAbstractItemView* self, QModelIndex* index) {
	QRect ret = const_cast<const QAbstractItemView*>(self)->visualRect(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QAbstractItemView_ScrollTo(QAbstractItemView* self, QModelIndex* index) {
	self->scrollTo(*index);
}

QModelIndex* QAbstractItemView_IndexAt(QAbstractItemView* self, QPoint* point) {
	QModelIndex ret = const_cast<const QAbstractItemView*>(self)->indexAt(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QSize* QAbstractItemView_SizeHintForIndex(QAbstractItemView* self, QModelIndex* index) {
	QSize ret = const_cast<const QAbstractItemView*>(self)->sizeHintForIndex(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QAbstractItemView_SizeHintForRow(QAbstractItemView* self, int row) {
	return const_cast<const QAbstractItemView*>(self)->sizeHintForRow(static_cast<int>(row));
}

int QAbstractItemView_SizeHintForColumn(QAbstractItemView* self, int column) {
	return const_cast<const QAbstractItemView*>(self)->sizeHintForColumn(static_cast<int>(column));
}

void QAbstractItemView_OpenPersistentEditor(QAbstractItemView* self, QModelIndex* index) {
	self->openPersistentEditor(*index);
}

void QAbstractItemView_ClosePersistentEditor(QAbstractItemView* self, QModelIndex* index) {
	self->closePersistentEditor(*index);
}

bool QAbstractItemView_IsPersistentEditorOpen(QAbstractItemView* self, QModelIndex* index) {
	return const_cast<const QAbstractItemView*>(self)->isPersistentEditorOpen(*index);
}

void QAbstractItemView_SetIndexWidget(QAbstractItemView* self, QModelIndex* index, QWidget* widget) {
	self->setIndexWidget(*index, widget);
}

QWidget* QAbstractItemView_IndexWidget(QAbstractItemView* self, QModelIndex* index) {
	return const_cast<const QAbstractItemView*>(self)->indexWidget(*index);
}

void QAbstractItemView_SetItemDelegateForRow(QAbstractItemView* self, int row, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForRow(static_cast<int>(row), delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForRow(QAbstractItemView* self, int row) {
	return const_cast<const QAbstractItemView*>(self)->itemDelegateForRow(static_cast<int>(row));
}

void QAbstractItemView_SetItemDelegateForColumn(QAbstractItemView* self, int column, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForColumn(static_cast<int>(column), delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForColumn(QAbstractItemView* self, int column) {
	return const_cast<const QAbstractItemView*>(self)->itemDelegateForColumn(static_cast<int>(column));
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateWithIndex(QAbstractItemView* self, QModelIndex* index) {
	return const_cast<const QAbstractItemView*>(self)->itemDelegate(*index);
}

QVariant* QAbstractItemView_InputMethodQuery(QAbstractItemView* self, uintptr_t query) {
	QVariant ret = const_cast<const QAbstractItemView*>(self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
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

void QAbstractItemView_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemView_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemView_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemView_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemView_ScrollTo2(QAbstractItemView* self, QModelIndex* index, uintptr_t hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QAbstractItemView_Delete(QAbstractItemView* self) {
	delete self;
}

