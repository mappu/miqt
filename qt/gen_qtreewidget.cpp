#include <QBrush>
#include <QColor>
#include <QDataStream>
#include <QFont>
#include <QIcon>
#include <QItemSelectionModel>
#include <QList>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QVariant>
#include <QWidget>
#include "qtreewidget.h"
#include "gen_qtreewidget.h"
#include "_cgo_export.h"

QTreeWidgetItem* QTreeWidgetItem_new() {
	return new QTreeWidgetItem();
}

QTreeWidgetItem* QTreeWidgetItem_new2(struct miqt_array* /* of struct miqt_string* */ strings) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings->len);
	miqt_string** strings_arr = static_cast<miqt_string**>(strings->data);
	for(size_t i = 0; i < strings->len; ++i) {
		strings_QList.push_back(QString::fromUtf8(& strings_arr[i]->data, strings_arr[i]->len));
	}
	return new QTreeWidgetItem(strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new3(QTreeWidget* treeview) {
	return new QTreeWidgetItem(treeview);
}

QTreeWidgetItem* QTreeWidgetItem_new4(QTreeWidget* treeview, struct miqt_array* /* of struct miqt_string* */ strings) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings->len);
	miqt_string** strings_arr = static_cast<miqt_string**>(strings->data);
	for(size_t i = 0; i < strings->len; ++i) {
		strings_QList.push_back(QString::fromUtf8(& strings_arr[i]->data, strings_arr[i]->len));
	}
	return new QTreeWidgetItem(treeview, strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new5(QTreeWidget* treeview, QTreeWidgetItem* after) {
	return new QTreeWidgetItem(treeview, after);
}

QTreeWidgetItem* QTreeWidgetItem_new6(QTreeWidgetItem* parent) {
	return new QTreeWidgetItem(parent);
}

QTreeWidgetItem* QTreeWidgetItem_new7(QTreeWidgetItem* parent, struct miqt_array* /* of struct miqt_string* */ strings) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings->len);
	miqt_string** strings_arr = static_cast<miqt_string**>(strings->data);
	for(size_t i = 0; i < strings->len; ++i) {
		strings_QList.push_back(QString::fromUtf8(& strings_arr[i]->data, strings_arr[i]->len));
	}
	return new QTreeWidgetItem(parent, strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new8(QTreeWidgetItem* parent, QTreeWidgetItem* after) {
	return new QTreeWidgetItem(parent, after);
}

QTreeWidgetItem* QTreeWidgetItem_new9(QTreeWidgetItem* other) {
	return new QTreeWidgetItem(*other);
}

QTreeWidgetItem* QTreeWidgetItem_new10(int typeVal) {
	return new QTreeWidgetItem(static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new11(struct miqt_array* /* of struct miqt_string* */ strings, int typeVal) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings->len);
	miqt_string** strings_arr = static_cast<miqt_string**>(strings->data);
	for(size_t i = 0; i < strings->len; ++i) {
		strings_QList.push_back(QString::fromUtf8(& strings_arr[i]->data, strings_arr[i]->len));
	}
	return new QTreeWidgetItem(strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new12(QTreeWidget* treeview, int typeVal) {
	return new QTreeWidgetItem(treeview, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new13(QTreeWidget* treeview, struct miqt_array* /* of struct miqt_string* */ strings, int typeVal) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings->len);
	miqt_string** strings_arr = static_cast<miqt_string**>(strings->data);
	for(size_t i = 0; i < strings->len; ++i) {
		strings_QList.push_back(QString::fromUtf8(& strings_arr[i]->data, strings_arr[i]->len));
	}
	return new QTreeWidgetItem(treeview, strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new14(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal) {
	return new QTreeWidgetItem(treeview, after, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new15(QTreeWidgetItem* parent, int typeVal) {
	return new QTreeWidgetItem(parent, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new16(QTreeWidgetItem* parent, struct miqt_array* /* of struct miqt_string* */ strings, int typeVal) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings->len);
	miqt_string** strings_arr = static_cast<miqt_string**>(strings->data);
	for(size_t i = 0; i < strings->len; ++i) {
		strings_QList.push_back(QString::fromUtf8(& strings_arr[i]->data, strings_arr[i]->len));
	}
	return new QTreeWidgetItem(parent, strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new17(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal) {
	return new QTreeWidgetItem(parent, after, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_Clone(const QTreeWidgetItem* self) {
	return self->clone();
}

QTreeWidget* QTreeWidgetItem_TreeWidget(const QTreeWidgetItem* self) {
	return self->treeWidget();
}

void QTreeWidgetItem_SetSelected(QTreeWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QTreeWidgetItem_IsSelected(const QTreeWidgetItem* self) {
	return self->isSelected();
}

void QTreeWidgetItem_SetHidden(QTreeWidgetItem* self, bool hide) {
	self->setHidden(hide);
}

bool QTreeWidgetItem_IsHidden(const QTreeWidgetItem* self) {
	return self->isHidden();
}

void QTreeWidgetItem_SetExpanded(QTreeWidgetItem* self, bool expand) {
	self->setExpanded(expand);
}

bool QTreeWidgetItem_IsExpanded(const QTreeWidgetItem* self) {
	return self->isExpanded();
}

void QTreeWidgetItem_SetFirstColumnSpanned(QTreeWidgetItem* self, bool span) {
	self->setFirstColumnSpanned(span);
}

bool QTreeWidgetItem_IsFirstColumnSpanned(const QTreeWidgetItem* self) {
	return self->isFirstColumnSpanned();
}

void QTreeWidgetItem_SetDisabled(QTreeWidgetItem* self, bool disabled) {
	self->setDisabled(disabled);
}

bool QTreeWidgetItem_IsDisabled(const QTreeWidgetItem* self) {
	return self->isDisabled();
}

void QTreeWidgetItem_SetChildIndicatorPolicy(QTreeWidgetItem* self, uintptr_t policy) {
	self->setChildIndicatorPolicy(static_cast<QTreeWidgetItem::ChildIndicatorPolicy>(policy));
}

uintptr_t QTreeWidgetItem_ChildIndicatorPolicy(const QTreeWidgetItem* self) {
	QTreeWidgetItem::ChildIndicatorPolicy _ret = self->childIndicatorPolicy();
	return static_cast<uintptr_t>(_ret);
}

int QTreeWidgetItem_Flags(const QTreeWidgetItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QTreeWidgetItem_SetFlags(QTreeWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string* QTreeWidgetItem_Text(const QTreeWidgetItem* self, int column) {
	QString _ret = self->text(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTreeWidgetItem_SetText(QTreeWidgetItem* self, int column, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setText(static_cast<int>(column), text_QString);
}

QIcon* QTreeWidgetItem_Icon(const QTreeWidgetItem* self, int column) {
	QIcon _ret = self->icon(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(_ret));
}

void QTreeWidgetItem_SetIcon(QTreeWidgetItem* self, int column, QIcon* icon) {
	self->setIcon(static_cast<int>(column), *icon);
}

struct miqt_string* QTreeWidgetItem_StatusTip(const QTreeWidgetItem* self, int column) {
	QString _ret = self->statusTip(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTreeWidgetItem_SetStatusTip(QTreeWidgetItem* self, int column, struct miqt_string* statusTip) {
	QString statusTip_QString = QString::fromUtf8(&statusTip->data, statusTip->len);
	self->setStatusTip(static_cast<int>(column), statusTip_QString);
}

struct miqt_string* QTreeWidgetItem_ToolTip(const QTreeWidgetItem* self, int column) {
	QString _ret = self->toolTip(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTreeWidgetItem_SetToolTip(QTreeWidgetItem* self, int column, struct miqt_string* toolTip) {
	QString toolTip_QString = QString::fromUtf8(&toolTip->data, toolTip->len);
	self->setToolTip(static_cast<int>(column), toolTip_QString);
}

struct miqt_string* QTreeWidgetItem_WhatsThis(const QTreeWidgetItem* self, int column) {
	QString _ret = self->whatsThis(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTreeWidgetItem_SetWhatsThis(QTreeWidgetItem* self, int column, struct miqt_string* whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(&whatsThis->data, whatsThis->len);
	self->setWhatsThis(static_cast<int>(column), whatsThis_QString);
}

QFont* QTreeWidgetItem_Font(const QTreeWidgetItem* self, int column) {
	QFont _ret = self->font(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

void QTreeWidgetItem_SetFont(QTreeWidgetItem* self, int column, QFont* font) {
	self->setFont(static_cast<int>(column), *font);
}

int QTreeWidgetItem_TextAlignment(const QTreeWidgetItem* self, int column) {
	return self->textAlignment(static_cast<int>(column));
}

void QTreeWidgetItem_SetTextAlignment(QTreeWidgetItem* self, int column, int alignment) {
	self->setTextAlignment(static_cast<int>(column), static_cast<int>(alignment));
}

QColor* QTreeWidgetItem_BackgroundColor(const QTreeWidgetItem* self, int column) {
	QColor _ret = self->backgroundColor(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(_ret));
}

void QTreeWidgetItem_SetBackgroundColor(QTreeWidgetItem* self, int column, QColor* color) {
	self->setBackgroundColor(static_cast<int>(column), *color);
}

QBrush* QTreeWidgetItem_Background(const QTreeWidgetItem* self, int column) {
	QBrush _ret = self->background(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(_ret));
}

void QTreeWidgetItem_SetBackground(QTreeWidgetItem* self, int column, QBrush* brush) {
	self->setBackground(static_cast<int>(column), *brush);
}

QColor* QTreeWidgetItem_TextColor(const QTreeWidgetItem* self, int column) {
	QColor _ret = self->textColor(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(_ret));
}

void QTreeWidgetItem_SetTextColor(QTreeWidgetItem* self, int column, QColor* color) {
	self->setTextColor(static_cast<int>(column), *color);
}

QBrush* QTreeWidgetItem_Foreground(const QTreeWidgetItem* self, int column) {
	QBrush _ret = self->foreground(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(_ret));
}

void QTreeWidgetItem_SetForeground(QTreeWidgetItem* self, int column, QBrush* brush) {
	self->setForeground(static_cast<int>(column), *brush);
}

uintptr_t QTreeWidgetItem_CheckState(const QTreeWidgetItem* self, int column) {
	Qt::CheckState _ret = self->checkState(static_cast<int>(column));
	return static_cast<uintptr_t>(_ret);
}

void QTreeWidgetItem_SetCheckState(QTreeWidgetItem* self, int column, uintptr_t state) {
	self->setCheckState(static_cast<int>(column), static_cast<Qt::CheckState>(state));
}

QSize* QTreeWidgetItem_SizeHint(const QTreeWidgetItem* self, int column) {
	QSize _ret = self->sizeHint(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

void QTreeWidgetItem_SetSizeHint(QTreeWidgetItem* self, int column, QSize* size) {
	self->setSizeHint(static_cast<int>(column), *size);
}

QVariant* QTreeWidgetItem_Data(const QTreeWidgetItem* self, int column, int role) {
	QVariant _ret = self->data(static_cast<int>(column), static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

void QTreeWidgetItem_SetData(QTreeWidgetItem* self, int column, int role, QVariant* value) {
	self->setData(static_cast<int>(column), static_cast<int>(role), *value);
}

bool QTreeWidgetItem_OperatorLesser(const QTreeWidgetItem* self, QTreeWidgetItem* other) {
	return self->operator<(*other);
}

void QTreeWidgetItem_Read(QTreeWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QTreeWidgetItem_Write(const QTreeWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QTreeWidgetItem_OperatorAssign(QTreeWidgetItem* self, QTreeWidgetItem* other) {
	self->operator=(*other);
}

QTreeWidgetItem* QTreeWidgetItem_Parent(const QTreeWidgetItem* self) {
	return self->parent();
}

QTreeWidgetItem* QTreeWidgetItem_Child(const QTreeWidgetItem* self, int index) {
	return self->child(static_cast<int>(index));
}

int QTreeWidgetItem_ChildCount(const QTreeWidgetItem* self) {
	return self->childCount();
}

int QTreeWidgetItem_ColumnCount(const QTreeWidgetItem* self) {
	return self->columnCount();
}

int QTreeWidgetItem_IndexOfChild(const QTreeWidgetItem* self, QTreeWidgetItem* child) {
	return self->indexOfChild(child);
}

void QTreeWidgetItem_AddChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
	self->addChild(child);
}

void QTreeWidgetItem_InsertChild(QTreeWidgetItem* self, int index, QTreeWidgetItem* child) {
	self->insertChild(static_cast<int>(index), child);
}

void QTreeWidgetItem_RemoveChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
	self->removeChild(child);
}

QTreeWidgetItem* QTreeWidgetItem_TakeChild(QTreeWidgetItem* self, int index) {
	return self->takeChild(static_cast<int>(index));
}

void QTreeWidgetItem_AddChildren(QTreeWidgetItem* self, struct miqt_array* /* of QTreeWidgetItem* */ children) {
	QList<QTreeWidgetItem*> children_QList;
	children_QList.reserve(children->len);
	QTreeWidgetItem** children_arr = static_cast<QTreeWidgetItem**>(children->data);
	for(size_t i = 0; i < children->len; ++i) {
		children_QList.push_back(children_arr[i]);
	}
	self->addChildren(children_QList);
}

void QTreeWidgetItem_InsertChildren(QTreeWidgetItem* self, int index, struct miqt_array* /* of QTreeWidgetItem* */ children) {
	QList<QTreeWidgetItem*> children_QList;
	children_QList.reserve(children->len);
	QTreeWidgetItem** children_arr = static_cast<QTreeWidgetItem**>(children->data);
	for(size_t i = 0; i < children->len; ++i) {
		children_QList.push_back(children_arr[i]);
	}
	self->insertChildren(static_cast<int>(index), children_QList);
}

struct miqt_array* QTreeWidgetItem_TakeChildren(QTreeWidgetItem* self) {
	QList<QTreeWidgetItem*> _ret = self->takeChildren();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

int QTreeWidgetItem_Type(const QTreeWidgetItem* self) {
	return self->type();
}

void QTreeWidgetItem_SortChildren(QTreeWidgetItem* self, int column, uintptr_t order) {
	self->sortChildren(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeWidgetItem_Delete(QTreeWidgetItem* self) {
	delete self;
}

QTreeWidget* QTreeWidget_new() {
	return new QTreeWidget();
}

QTreeWidget* QTreeWidget_new2(QWidget* parent) {
	return new QTreeWidget(parent);
}

QMetaObject* QTreeWidget_MetaObject(const QTreeWidget* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QTreeWidget_Tr(const char* s) {
	QString _ret = QTreeWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTreeWidget_TrUtf8(const char* s) {
	QString _ret = QTreeWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QTreeWidget_ColumnCount(const QTreeWidget* self) {
	return self->columnCount();
}

void QTreeWidget_SetColumnCount(QTreeWidget* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

QTreeWidgetItem* QTreeWidget_InvisibleRootItem(const QTreeWidget* self) {
	return self->invisibleRootItem();
}

QTreeWidgetItem* QTreeWidget_TopLevelItem(const QTreeWidget* self, int index) {
	return self->topLevelItem(static_cast<int>(index));
}

int QTreeWidget_TopLevelItemCount(const QTreeWidget* self) {
	return self->topLevelItemCount();
}

void QTreeWidget_InsertTopLevelItem(QTreeWidget* self, int index, QTreeWidgetItem* item) {
	self->insertTopLevelItem(static_cast<int>(index), item);
}

void QTreeWidget_AddTopLevelItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->addTopLevelItem(item);
}

QTreeWidgetItem* QTreeWidget_TakeTopLevelItem(QTreeWidget* self, int index) {
	return self->takeTopLevelItem(static_cast<int>(index));
}

int QTreeWidget_IndexOfTopLevelItem(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->indexOfTopLevelItem(item);
}

void QTreeWidget_InsertTopLevelItems(QTreeWidget* self, int index, struct miqt_array* /* of QTreeWidgetItem* */ items) {
	QList<QTreeWidgetItem*> items_QList;
	items_QList.reserve(items->len);
	QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->insertTopLevelItems(static_cast<int>(index), items_QList);
}

void QTreeWidget_AddTopLevelItems(QTreeWidget* self, struct miqt_array* /* of QTreeWidgetItem* */ items) {
	QList<QTreeWidgetItem*> items_QList;
	items_QList.reserve(items->len);
	QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->addTopLevelItems(items_QList);
}

QTreeWidgetItem* QTreeWidget_HeaderItem(const QTreeWidget* self) {
	return self->headerItem();
}

void QTreeWidget_SetHeaderItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->setHeaderItem(item);
}

void QTreeWidget_SetHeaderLabels(QTreeWidget* self, struct miqt_array* /* of struct miqt_string* */ labels) {
	QList<QString> labels_QList;
	labels_QList.reserve(labels->len);
	miqt_string** labels_arr = static_cast<miqt_string**>(labels->data);
	for(size_t i = 0; i < labels->len; ++i) {
		labels_QList.push_back(QString::fromUtf8(& labels_arr[i]->data, labels_arr[i]->len));
	}
	self->setHeaderLabels(labels_QList);
}

void QTreeWidget_SetHeaderLabel(QTreeWidget* self, struct miqt_string* label) {
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	self->setHeaderLabel(label_QString);
}

QTreeWidgetItem* QTreeWidget_CurrentItem(const QTreeWidget* self) {
	return self->currentItem();
}

int QTreeWidget_CurrentColumn(const QTreeWidget* self) {
	return self->currentColumn();
}

void QTreeWidget_SetCurrentItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->setCurrentItem(item);
}

void QTreeWidget_SetCurrentItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->setCurrentItem(item, static_cast<int>(column));
}

void QTreeWidget_SetCurrentItem3(QTreeWidget* self, QTreeWidgetItem* item, int column, int command) {
	self->setCurrentItem(item, static_cast<int>(column), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QTreeWidgetItem* QTreeWidget_ItemAt(const QTreeWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QTreeWidgetItem* QTreeWidget_ItemAt2(const QTreeWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTreeWidget_VisualItemRect(const QTreeWidget* self, QTreeWidgetItem* item) {
	QRect _ret = self->visualItemRect(item);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

int QTreeWidget_SortColumn(const QTreeWidget* self) {
	return self->sortColumn();
}

void QTreeWidget_SortItems(QTreeWidget* self, int column, uintptr_t order) {
	self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeWidget_EditItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->editItem(item);
}

void QTreeWidget_OpenPersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QTreeWidget_ClosePersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QTreeWidget_IsPersistentEditorOpen(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QTreeWidget_ItemWidget(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
	return self->itemWidget(item, static_cast<int>(column));
}

void QTreeWidget_SetItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column, QWidget* widget) {
	self->setItemWidget(item, static_cast<int>(column), widget);
}

void QTreeWidget_RemoveItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->removeItemWidget(item, static_cast<int>(column));
}

bool QTreeWidget_IsItemSelected(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isItemSelected(item);
}

void QTreeWidget_SetItemSelected(QTreeWidget* self, QTreeWidgetItem* item, bool selectVal) {
	self->setItemSelected(item, selectVal);
}

struct miqt_array* QTreeWidget_SelectedItems(const QTreeWidget* self) {
	QList<QTreeWidgetItem*> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QTreeWidget_FindItems(const QTreeWidget* self, struct miqt_string* text, int flags) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QList<QTreeWidgetItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

bool QTreeWidget_IsItemHidden(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isItemHidden(item);
}

void QTreeWidget_SetItemHidden(QTreeWidget* self, QTreeWidgetItem* item, bool hide) {
	self->setItemHidden(item, hide);
}

bool QTreeWidget_IsItemExpanded(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isItemExpanded(item);
}

void QTreeWidget_SetItemExpanded(QTreeWidget* self, QTreeWidgetItem* item, bool expand) {
	self->setItemExpanded(item, expand);
}

bool QTreeWidget_IsFirstItemColumnSpanned(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isFirstItemColumnSpanned(item);
}

void QTreeWidget_SetFirstItemColumnSpanned(QTreeWidget* self, QTreeWidgetItem* item, bool span) {
	self->setFirstItemColumnSpanned(item, span);
}

QTreeWidgetItem* QTreeWidget_ItemAbove(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->itemAbove(item);
}

QTreeWidgetItem* QTreeWidget_ItemBelow(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->itemBelow(item);
}

void QTreeWidget_SetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QTreeWidget_ScrollToItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->scrollToItem(item);
}

void QTreeWidget_ExpandItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->expandItem(item);
}

void QTreeWidget_CollapseItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->collapseItem(item);
}

void QTreeWidget_Clear(QTreeWidget* self) {
	self->clear();
}

void QTreeWidget_ItemPressed(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemPressed(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemPressed(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemPressed), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemPressed(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemClicked(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemClicked(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemClicked), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemClicked(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemDoubleClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemDoubleClicked(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemDoubleClicked(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemDoubleClicked), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemDoubleClicked(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemActivated(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemActivated(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemActivated(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemActivated), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemActivated(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemEntered(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemEntered(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemEntered(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemEntered), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemEntered(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemChanged(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemChanged(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemChanged(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemChanged), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemChanged(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemExpanded(QTreeWidget* self, QTreeWidgetItem* item) {
	self->itemExpanded(item);
}

void QTreeWidget_connect_ItemExpanded(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*)>(&QTreeWidget::itemExpanded), self, [=](QTreeWidgetItem* item) {
		QTreeWidgetItem* sigval1 = item;
		miqt_exec_callback_QTreeWidget_ItemExpanded(slot, sigval1);
	});
}

void QTreeWidget_ItemCollapsed(QTreeWidget* self, QTreeWidgetItem* item) {
	self->itemCollapsed(item);
}

void QTreeWidget_connect_ItemCollapsed(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*)>(&QTreeWidget::itemCollapsed), self, [=](QTreeWidgetItem* item) {
		QTreeWidgetItem* sigval1 = item;
		miqt_exec_callback_QTreeWidget_ItemCollapsed(slot, sigval1);
	});
}

void QTreeWidget_CurrentItemChanged(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QTreeWidget_connect_CurrentItemChanged(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, QTreeWidgetItem*)>(&QTreeWidget::currentItemChanged), self, [=](QTreeWidgetItem* current, QTreeWidgetItem* previous) {
		QTreeWidgetItem* sigval1 = current;
		QTreeWidgetItem* sigval2 = previous;
		miqt_exec_callback_QTreeWidget_CurrentItemChanged(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemSelectionChanged(QTreeWidget* self) {
	self->itemSelectionChanged();
}

void QTreeWidget_connect_ItemSelectionChanged(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)()>(&QTreeWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback_QTreeWidget_ItemSelectionChanged(slot);
	});
}

struct miqt_string* QTreeWidget_Tr2(const char* s, const char* c) {
	QString _ret = QTreeWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTreeWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTreeWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTreeWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QTreeWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTreeWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTreeWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTreeWidget_EditItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->editItem(item, static_cast<int>(column));
}

void QTreeWidget_OpenPersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->openPersistentEditor(item, static_cast<int>(column));
}

void QTreeWidget_ClosePersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->closePersistentEditor(item, static_cast<int>(column));
}

bool QTreeWidget_IsPersistentEditorOpen2(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
	return self->isPersistentEditorOpen(item, static_cast<int>(column));
}

struct miqt_array* QTreeWidget_FindItems3(const QTreeWidget* self, struct miqt_string* text, int flags, int column) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QList<QTreeWidgetItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags), static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QTreeWidget_ScrollToItem2(QTreeWidget* self, QTreeWidgetItem* item, uintptr_t hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QTreeWidget_Delete(QTreeWidget* self) {
	delete self;
}

