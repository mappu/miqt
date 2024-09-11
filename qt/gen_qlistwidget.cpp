#include <QBrush>
#include <QColor>
#include <QDataStream>
#include <QDropEvent>
#include <QFont>
#include <QIcon>
#include <QItemSelectionModel>
#include <QList>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include "qlistwidget.h"

#include "gen_qlistwidget.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QListWidgetItem* QListWidgetItem_new() {
	return new QListWidgetItem();
}

QListWidgetItem* QListWidgetItem_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QListWidgetItem(text_QString);
}

QListWidgetItem* QListWidgetItem_new3(QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QListWidgetItem(*icon, text_QString);
}

QListWidgetItem* QListWidgetItem_new4(QListWidgetItem* other) {
	return new QListWidgetItem(*other);
}

QListWidgetItem* QListWidgetItem_new5(QListWidget* listview) {
	return new QListWidgetItem(listview);
}

QListWidgetItem* QListWidgetItem_new6(QListWidget* listview, int typeVal) {
	return new QListWidgetItem(listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_new7(const char* text, size_t text_Strlen, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QListWidgetItem(text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new8(const char* text, size_t text_Strlen, QListWidget* listview, int typeVal) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QListWidgetItem(text_QString, listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_new9(QIcon* icon, const char* text, size_t text_Strlen, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QListWidgetItem(*icon, text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new10(QIcon* icon, const char* text, size_t text_Strlen, QListWidget* listview, int typeVal) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QListWidgetItem(*icon, text_QString, listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_Clone(const QListWidgetItem* self) {
	return self->clone();
}

QListWidget* QListWidgetItem_ListWidget(const QListWidgetItem* self) {
	return self->listWidget();
}

void QListWidgetItem_SetSelected(QListWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QListWidgetItem_IsSelected(const QListWidgetItem* self) {
	return self->isSelected();
}

void QListWidgetItem_SetHidden(QListWidgetItem* self, bool hide) {
	self->setHidden(hide);
}

bool QListWidgetItem_IsHidden(const QListWidgetItem* self) {
	return self->isHidden();
}

int QListWidgetItem_Flags(const QListWidgetItem* self) {
	Qt::ItemFlags ret = self->flags();
	return static_cast<int>(ret);
}

void QListWidgetItem_SetFlags(QListWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

void QListWidgetItem_Text(const QListWidgetItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListWidgetItem_SetText(QListWidgetItem* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

QIcon* QListWidgetItem_Icon(const QListWidgetItem* self) {
	QIcon ret = self->icon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QListWidgetItem_SetIcon(QListWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

void QListWidgetItem_StatusTip(const QListWidgetItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListWidgetItem_SetStatusTip(QListWidgetItem* self, const char* statusTip, size_t statusTip_Strlen) {
	QString statusTip_QString = QString::fromUtf8(statusTip, statusTip_Strlen);
	self->setStatusTip(statusTip_QString);
}

void QListWidgetItem_ToolTip(const QListWidgetItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListWidgetItem_SetToolTip(QListWidgetItem* self, const char* toolTip, size_t toolTip_Strlen) {
	QString toolTip_QString = QString::fromUtf8(toolTip, toolTip_Strlen);
	self->setToolTip(toolTip_QString);
}

void QListWidgetItem_WhatsThis(const QListWidgetItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListWidgetItem_SetWhatsThis(QListWidgetItem* self, const char* whatsThis, size_t whatsThis_Strlen) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis, whatsThis_Strlen);
	self->setWhatsThis(whatsThis_QString);
}

QFont* QListWidgetItem_Font(const QListWidgetItem* self) {
	QFont ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QListWidgetItem_SetFont(QListWidgetItem* self, QFont* font) {
	self->setFont(*font);
}

int QListWidgetItem_TextAlignment(const QListWidgetItem* self) {
	return self->textAlignment();
}

void QListWidgetItem_SetTextAlignment(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<int>(alignment));
}

QColor* QListWidgetItem_BackgroundColor(const QListWidgetItem* self) {
	QColor ret = self->backgroundColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QListWidgetItem_SetBackgroundColor(QListWidgetItem* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QBrush* QListWidgetItem_Background(const QListWidgetItem* self) {
	QBrush ret = self->background();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QListWidgetItem_SetBackground(QListWidgetItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QColor* QListWidgetItem_TextColor(const QListWidgetItem* self) {
	QColor ret = self->textColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QListWidgetItem_SetTextColor(QListWidgetItem* self, QColor* color) {
	self->setTextColor(*color);
}

QBrush* QListWidgetItem_Foreground(const QListWidgetItem* self) {
	QBrush ret = self->foreground();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QListWidgetItem_SetForeground(QListWidgetItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

uintptr_t QListWidgetItem_CheckState(const QListWidgetItem* self) {
	Qt::CheckState ret = self->checkState();
	return static_cast<uintptr_t>(ret);
}

void QListWidgetItem_SetCheckState(QListWidgetItem* self, uintptr_t state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QListWidgetItem_SizeHint(const QListWidgetItem* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QListWidgetItem_SetSizeHint(QListWidgetItem* self, QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QListWidgetItem_Data(const QListWidgetItem* self, int role) {
	QVariant ret = self->data(static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QListWidgetItem_SetData(QListWidgetItem* self, int role, QVariant* value) {
	self->setData(static_cast<int>(role), *value);
}

bool QListWidgetItem_OperatorLesser(const QListWidgetItem* self, QListWidgetItem* other) {
	return self->operator<(*other);
}

void QListWidgetItem_Read(QListWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QListWidgetItem_Write(const QListWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QListWidgetItem_OperatorAssign(QListWidgetItem* self, QListWidgetItem* other) {
	self->operator=(*other);
}

int QListWidgetItem_Type(const QListWidgetItem* self) {
	return self->type();
}

void QListWidgetItem_Delete(QListWidgetItem* self) {
	delete self;
}

QListWidget* QListWidget_new() {
	return new QListWidget();
}

QListWidget* QListWidget_new2(QWidget* parent) {
	return new QListWidget(parent);
}

QMetaObject* QListWidget_MetaObject(const QListWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void QListWidget_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QListWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QListWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListWidget_SetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QListWidgetItem* QListWidget_Item(const QListWidget* self, int row) {
	return self->item(static_cast<int>(row));
}

int QListWidget_Row(const QListWidget* self, QListWidgetItem* item) {
	return self->row(item);
}

void QListWidget_InsertItem(QListWidget* self, int row, QListWidgetItem* item) {
	self->insertItem(static_cast<int>(row), item);
}

void QListWidget_InsertItem2(QListWidget* self, int row, const char* label, size_t label_Strlen) {
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	self->insertItem(static_cast<int>(row), label_QString);
}

void QListWidget_InsertItems(QListWidget* self, int row, char** labels, uint64_t* labels_Lengths, size_t labels_len) {
	QList<QString> labels_QList;
	labels_QList.reserve(labels_len);
	for(size_t i = 0; i < labels_len; ++i) {
		labels_QList.push_back(QString::fromUtf8(labels[i], labels_Lengths[i]));
	}
	self->insertItems(static_cast<int>(row), labels_QList);
}

void QListWidget_AddItem(QListWidget* self, const char* label, size_t label_Strlen) {
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	self->addItem(label_QString);
}

void QListWidget_AddItemWithItem(QListWidget* self, QListWidgetItem* item) {
	self->addItem(item);
}

void QListWidget_AddItems(QListWidget* self, char** labels, uint64_t* labels_Lengths, size_t labels_len) {
	QList<QString> labels_QList;
	labels_QList.reserve(labels_len);
	for(size_t i = 0; i < labels_len; ++i) {
		labels_QList.push_back(QString::fromUtf8(labels[i], labels_Lengths[i]));
	}
	self->addItems(labels_QList);
}

QListWidgetItem* QListWidget_TakeItem(QListWidget* self, int row) {
	return self->takeItem(static_cast<int>(row));
}

int QListWidget_Count(const QListWidget* self) {
	return self->count();
}

QListWidgetItem* QListWidget_CurrentItem(const QListWidget* self) {
	return self->currentItem();
}

void QListWidget_SetCurrentItem(QListWidget* self, QListWidgetItem* item) {
	self->setCurrentItem(item);
}

void QListWidget_SetCurrentItem2(QListWidget* self, QListWidgetItem* item, int command) {
	self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

int QListWidget_CurrentRow(const QListWidget* self) {
	return self->currentRow();
}

void QListWidget_SetCurrentRow(QListWidget* self, int row) {
	self->setCurrentRow(static_cast<int>(row));
}

void QListWidget_SetCurrentRow2(QListWidget* self, int row, int command) {
	self->setCurrentRow(static_cast<int>(row), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QListWidgetItem* QListWidget_ItemAt(const QListWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QListWidgetItem* QListWidget_ItemAt2(const QListWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QListWidget_VisualItemRect(const QListWidget* self, QListWidgetItem* item) {
	QRect ret = self->visualItemRect(item);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QListWidget_SortItems(QListWidget* self) {
	self->sortItems();
}

void QListWidget_SetSortingEnabled(QListWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QListWidget_IsSortingEnabled(const QListWidget* self) {
	return self->isSortingEnabled();
}

void QListWidget_EditItem(QListWidget* self, QListWidgetItem* item) {
	self->editItem(item);
}

void QListWidget_OpenPersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QListWidget_ClosePersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QListWidget_IsPersistentEditorOpen(const QListWidget* self, QListWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QListWidget_ItemWidget(const QListWidget* self, QListWidgetItem* item) {
	return self->itemWidget(item);
}

void QListWidget_SetItemWidget(QListWidget* self, QListWidgetItem* item, QWidget* widget) {
	self->setItemWidget(item, widget);
}

void QListWidget_RemoveItemWidget(QListWidget* self, QListWidgetItem* item) {
	self->removeItemWidget(item);
}

bool QListWidget_IsItemSelected(const QListWidget* self, QListWidgetItem* item) {
	return self->isItemSelected(item);
}

void QListWidget_SetItemSelected(QListWidget* self, QListWidgetItem* item, bool selectVal) {
	self->setItemSelected(item, selectVal);
}

void QListWidget_SelectedItems(const QListWidget* self, QListWidgetItem*** _out, size_t* _out_len) {
	QList<QListWidgetItem*> ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** __out = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QListWidget_FindItems(const QListWidget* self, const char* text, size_t text_Strlen, int flags, QListWidgetItem*** _out, size_t* _out_len) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QList<QListWidgetItem*> ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** __out = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

bool QListWidget_IsItemHidden(const QListWidget* self, QListWidgetItem* item) {
	return self->isItemHidden(item);
}

void QListWidget_SetItemHidden(QListWidget* self, QListWidgetItem* item, bool hide) {
	self->setItemHidden(item, hide);
}

void QListWidget_DropEvent(QListWidget* self, QDropEvent* event) {
	self->dropEvent(event);
}

void QListWidget_ScrollToItem(QListWidget* self, QListWidgetItem* item) {
	self->scrollToItem(item);
}

void QListWidget_Clear(QListWidget* self) {
	self->clear();
}

void QListWidget_ItemPressed(QListWidget* self, QListWidgetItem* item) {
	self->itemPressed(item);
}

void QListWidget_connect_ItemPressed(QListWidget* self, void* slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemPressed), self, [=](QListWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QListWidget_ItemClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemClicked(item);
}

void QListWidget_connect_ItemClicked(QListWidget* self, void* slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemClicked), self, [=](QListWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QListWidget_ItemDoubleClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QListWidget_connect_ItemDoubleClicked(QListWidget* self, void* slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemDoubleClicked), self, [=](QListWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QListWidget_ItemActivated(QListWidget* self, QListWidgetItem* item) {
	self->itemActivated(item);
}

void QListWidget_connect_ItemActivated(QListWidget* self, void* slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemActivated), self, [=](QListWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QListWidget_ItemEntered(QListWidget* self, QListWidgetItem* item) {
	self->itemEntered(item);
}

void QListWidget_connect_ItemEntered(QListWidget* self, void* slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemEntered), self, [=](QListWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QListWidget_ItemChanged(QListWidget* self, QListWidgetItem* item) {
	self->itemChanged(item);
}

void QListWidget_connect_ItemChanged(QListWidget* self, void* slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemChanged), self, [=](QListWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QListWidget_CurrentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QListWidget_connect_CurrentItemChanged(QListWidget* self, void* slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*, QListWidgetItem*)>(&QListWidget::currentItemChanged), self, [=](QListWidgetItem* current, QListWidgetItem* previous) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QListWidget_CurrentTextChanged(QListWidget* self, const char* currentText, size_t currentText_Strlen) {
	QString currentText_QString = QString::fromUtf8(currentText, currentText_Strlen);
	self->currentTextChanged(currentText_QString);
}

void QListWidget_connect_CurrentTextChanged(QListWidget* self, void* slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(const QString&)>(&QListWidget::currentTextChanged), self, [=](const QString& currentText) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QListWidget_CurrentRowChanged(QListWidget* self, int currentRow) {
	self->currentRowChanged(static_cast<int>(currentRow));
}

void QListWidget_connect_CurrentRowChanged(QListWidget* self, void* slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(int)>(&QListWidget::currentRowChanged), self, [=](int currentRow) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QListWidget_ItemSelectionChanged(QListWidget* self) {
	self->itemSelectionChanged();
}

void QListWidget_connect_ItemSelectionChanged(QListWidget* self, void* slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)()>(&QListWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QListWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QListWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QListWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QListWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QListWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QListWidget_SortItems1(QListWidget* self, uintptr_t order) {
	self->sortItems(static_cast<Qt::SortOrder>(order));
}

void QListWidget_ScrollToItem2(QListWidget* self, QListWidgetItem* item, uintptr_t hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QListWidget_Delete(QListWidget* self) {
	delete self;
}

