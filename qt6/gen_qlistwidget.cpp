#include <QBrush>
#include <QDataStream>
#include <QFont>
#include <QIcon>
#include <QItemSelectionModel>
#include <QList>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <qlistwidget.h>
#include "gen_qlistwidget.h"
#include "_cgo_export.h"

QListWidgetItem* QListWidgetItem_new() {
	return new QListWidgetItem();
}

QListWidgetItem* QListWidgetItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QListWidgetItem(text_QString);
}

QListWidgetItem* QListWidgetItem_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
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

QListWidgetItem* QListWidgetItem_new7(struct miqt_string text, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QListWidgetItem(text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new8(struct miqt_string text, QListWidget* listview, int typeVal) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QListWidgetItem(text_QString, listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_new9(QIcon* icon, struct miqt_string text, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QListWidgetItem(*icon, text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new10(QIcon* icon, struct miqt_string text, QListWidget* listview, int typeVal) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
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
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QListWidgetItem_SetFlags(QListWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string QListWidgetItem_Text(const QListWidgetItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetText(QListWidgetItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

QIcon* QListWidgetItem_Icon(const QListWidgetItem* self) {
	return new QIcon(self->icon());
}

void QListWidgetItem_SetIcon(QListWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string QListWidgetItem_StatusTip(const QListWidgetItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetStatusTip(QListWidgetItem* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QListWidgetItem_ToolTip(const QListWidgetItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetToolTip(QListWidgetItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QListWidgetItem_WhatsThis(const QListWidgetItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetWhatsThis(QListWidgetItem* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

QFont* QListWidgetItem_Font(const QListWidgetItem* self) {
	return new QFont(self->font());
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

void QListWidgetItem_SetTextAlignmentWithAlignment(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QListWidgetItem_SetTextAlignment2(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<Qt::Alignment>(alignment));
}

QBrush* QListWidgetItem_Background(const QListWidgetItem* self) {
	return new QBrush(self->background());
}

void QListWidgetItem_SetBackground(QListWidgetItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QListWidgetItem_Foreground(const QListWidgetItem* self) {
	return new QBrush(self->foreground());
}

void QListWidgetItem_SetForeground(QListWidgetItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

int QListWidgetItem_CheckState(const QListWidgetItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QListWidgetItem_SetCheckState(QListWidgetItem* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QListWidgetItem_SizeHint(const QListWidgetItem* self) {
	return new QSize(self->sizeHint());
}

void QListWidgetItem_SetSizeHint(QListWidgetItem* self, QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QListWidgetItem_Data(const QListWidgetItem* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
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

QListWidget* QListWidget_new(QWidget* parent) {
	return new QListWidget(parent);
}

QListWidget* QListWidget_new2() {
	return new QListWidget();
}

QMetaObject* QListWidget_MetaObject(const QListWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QListWidget_Metacast(QListWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QListWidget_Tr(const char* s) {
	QString _ret = QListWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

void QListWidget_InsertItem2(QListWidget* self, int row, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->insertItem(static_cast<int>(row), label_QString);
}

void QListWidget_InsertItems(QListWidget* self, int row, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->insertItems(static_cast<int>(row), labels_QList);
}

void QListWidget_AddItem(QListWidget* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->addItem(label_QString);
}

void QListWidget_AddItemWithItem(QListWidget* self, QListWidgetItem* item) {
	self->addItem(item);
}

void QListWidget_AddItems(QListWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
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
	return new QRect(self->visualItemRect(item));
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

struct miqt_array /* of QListWidgetItem* */  QListWidget_SelectedItems(const QListWidget* self) {
	QList<QListWidgetItem *> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_FindItems(const QListWidget* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QListWidgetItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_Items(const QListWidget* self, QMimeData* data) {
	QList<QListWidgetItem *> _ret = self->items(data);
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QModelIndex* QListWidget_IndexFromItem(const QListWidget* self, QListWidgetItem* item) {
	return new QModelIndex(self->indexFromItem(item));
}

QListWidgetItem* QListWidget_ItemFromIndex(const QListWidget* self, QModelIndex* index) {
	return self->itemFromIndex(*index);
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

void QListWidget_connect_ItemPressed(QListWidget* self, intptr_t slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemPressed), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemPressed(slot, sigval1);
	});
}

void QListWidget_ItemClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemClicked(item);
}

void QListWidget_connect_ItemClicked(QListWidget* self, intptr_t slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemClicked), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemClicked(slot, sigval1);
	});
}

void QListWidget_ItemDoubleClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QListWidget_connect_ItemDoubleClicked(QListWidget* self, intptr_t slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemDoubleClicked), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemDoubleClicked(slot, sigval1);
	});
}

void QListWidget_ItemActivated(QListWidget* self, QListWidgetItem* item) {
	self->itemActivated(item);
}

void QListWidget_connect_ItemActivated(QListWidget* self, intptr_t slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemActivated), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemActivated(slot, sigval1);
	});
}

void QListWidget_ItemEntered(QListWidget* self, QListWidgetItem* item) {
	self->itemEntered(item);
}

void QListWidget_connect_ItemEntered(QListWidget* self, intptr_t slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemEntered), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemEntered(slot, sigval1);
	});
}

void QListWidget_ItemChanged(QListWidget* self, QListWidgetItem* item) {
	self->itemChanged(item);
}

void QListWidget_connect_ItemChanged(QListWidget* self, intptr_t slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemChanged), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemChanged(slot, sigval1);
	});
}

void QListWidget_CurrentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QListWidget_connect_CurrentItemChanged(QListWidget* self, intptr_t slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*, QListWidgetItem*)>(&QListWidget::currentItemChanged), self, [=](QListWidgetItem* current, QListWidgetItem* previous) {
		QListWidgetItem* sigval1 = current;
		QListWidgetItem* sigval2 = previous;
		miqt_exec_callback_QListWidget_CurrentItemChanged(slot, sigval1, sigval2);
	});
}

void QListWidget_CurrentTextChanged(QListWidget* self, struct miqt_string currentText) {
	QString currentText_QString = QString::fromUtf8(currentText.data, currentText.len);
	self->currentTextChanged(currentText_QString);
}

void QListWidget_connect_CurrentTextChanged(QListWidget* self, intptr_t slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(const QString&)>(&QListWidget::currentTextChanged), self, [=](const QString& currentText) {
		const QString currentText_ret = currentText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray currentText_b = currentText_ret.toUtf8();
		struct miqt_string currentText_ms;
		currentText_ms.len = currentText_b.length();
		currentText_ms.data = static_cast<char*>(malloc(currentText_ms.len));
		memcpy(currentText_ms.data, currentText_b.data(), currentText_ms.len);
		struct miqt_string sigval1 = currentText_ms;
		miqt_exec_callback_QListWidget_CurrentTextChanged(slot, sigval1);
	});
}

void QListWidget_CurrentRowChanged(QListWidget* self, int currentRow) {
	self->currentRowChanged(static_cast<int>(currentRow));
}

void QListWidget_connect_CurrentRowChanged(QListWidget* self, intptr_t slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)(int)>(&QListWidget::currentRowChanged), self, [=](int currentRow) {
		int sigval1 = currentRow;
		miqt_exec_callback_QListWidget_CurrentRowChanged(slot, sigval1);
	});
}

void QListWidget_ItemSelectionChanged(QListWidget* self) {
	self->itemSelectionChanged();
}

void QListWidget_connect_ItemSelectionChanged(QListWidget* self, intptr_t slot) {
	QListWidget::connect(self, static_cast<void (QListWidget::*)()>(&QListWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback_QListWidget_ItemSelectionChanged(slot);
	});
}

struct miqt_string QListWidget_Tr2(const char* s, const char* c) {
	QString _ret = QListWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QListWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidget_SortItems1(QListWidget* self, int order) {
	self->sortItems(static_cast<Qt::SortOrder>(order));
}

void QListWidget_ScrollToItem2(QListWidget* self, QListWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QListWidget_Delete(QListWidget* self) {
	delete self;
}

