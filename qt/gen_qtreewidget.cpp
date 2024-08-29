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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTreeWidgetItem* QTreeWidgetItem_new() {
	return new QTreeWidgetItem();
}

QTreeWidgetItem* QTreeWidgetItem_new2(char** strings, uint64_t* strings_Lengths, size_t strings_len) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings_len);
	for(size_t i = 0; i < strings_len; ++i) {
		strings_QList.push_back(QString::fromUtf8(strings[i], strings_Lengths[i]));
	}
	return new QTreeWidgetItem(strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new3(QTreeWidget* treeview) {
	return new QTreeWidgetItem(treeview);
}

QTreeWidgetItem* QTreeWidgetItem_new4(QTreeWidget* treeview, char** strings, uint64_t* strings_Lengths, size_t strings_len) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings_len);
	for(size_t i = 0; i < strings_len; ++i) {
		strings_QList.push_back(QString::fromUtf8(strings[i], strings_Lengths[i]));
	}
	return new QTreeWidgetItem(treeview, strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new5(QTreeWidget* treeview, QTreeWidgetItem* after) {
	return new QTreeWidgetItem(treeview, after);
}

QTreeWidgetItem* QTreeWidgetItem_new6(QTreeWidgetItem* parent) {
	return new QTreeWidgetItem(parent);
}

QTreeWidgetItem* QTreeWidgetItem_new7(QTreeWidgetItem* parent, char** strings, uint64_t* strings_Lengths, size_t strings_len) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings_len);
	for(size_t i = 0; i < strings_len; ++i) {
		strings_QList.push_back(QString::fromUtf8(strings[i], strings_Lengths[i]));
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

QTreeWidgetItem* QTreeWidgetItem_new11(char** strings, uint64_t* strings_Lengths, size_t strings_len, int typeVal) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings_len);
	for(size_t i = 0; i < strings_len; ++i) {
		strings_QList.push_back(QString::fromUtf8(strings[i], strings_Lengths[i]));
	}
	return new QTreeWidgetItem(strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new12(QTreeWidget* treeview, int typeVal) {
	return new QTreeWidgetItem(treeview, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new13(QTreeWidget* treeview, char** strings, uint64_t* strings_Lengths, size_t strings_len, int typeVal) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings_len);
	for(size_t i = 0; i < strings_len; ++i) {
		strings_QList.push_back(QString::fromUtf8(strings[i], strings_Lengths[i]));
	}
	return new QTreeWidgetItem(treeview, strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new14(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal) {
	return new QTreeWidgetItem(treeview, after, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new15(QTreeWidgetItem* parent, int typeVal) {
	return new QTreeWidgetItem(parent, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new16(QTreeWidgetItem* parent, char** strings, uint64_t* strings_Lengths, size_t strings_len, int typeVal) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings_len);
	for(size_t i = 0; i < strings_len; ++i) {
		strings_QList.push_back(QString::fromUtf8(strings[i], strings_Lengths[i]));
	}
	return new QTreeWidgetItem(parent, strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new17(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal) {
	return new QTreeWidgetItem(parent, after, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_Clone(QTreeWidgetItem* self) {
	return const_cast<const QTreeWidgetItem*>(self)->clone();
}

QTreeWidget* QTreeWidgetItem_TreeWidget(QTreeWidgetItem* self) {
	return const_cast<const QTreeWidgetItem*>(self)->treeWidget();
}

void QTreeWidgetItem_SetSelected(QTreeWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QTreeWidgetItem_IsSelected(QTreeWidgetItem* self) {
	return const_cast<const QTreeWidgetItem*>(self)->isSelected();
}

void QTreeWidgetItem_SetHidden(QTreeWidgetItem* self, bool hide) {
	self->setHidden(hide);
}

bool QTreeWidgetItem_IsHidden(QTreeWidgetItem* self) {
	return const_cast<const QTreeWidgetItem*>(self)->isHidden();
}

void QTreeWidgetItem_SetExpanded(QTreeWidgetItem* self, bool expand) {
	self->setExpanded(expand);
}

bool QTreeWidgetItem_IsExpanded(QTreeWidgetItem* self) {
	return const_cast<const QTreeWidgetItem*>(self)->isExpanded();
}

void QTreeWidgetItem_SetFirstColumnSpanned(QTreeWidgetItem* self, bool span) {
	self->setFirstColumnSpanned(span);
}

bool QTreeWidgetItem_IsFirstColumnSpanned(QTreeWidgetItem* self) {
	return const_cast<const QTreeWidgetItem*>(self)->isFirstColumnSpanned();
}

void QTreeWidgetItem_SetDisabled(QTreeWidgetItem* self, bool disabled) {
	self->setDisabled(disabled);
}

bool QTreeWidgetItem_IsDisabled(QTreeWidgetItem* self) {
	return const_cast<const QTreeWidgetItem*>(self)->isDisabled();
}

void QTreeWidgetItem_SetChildIndicatorPolicy(QTreeWidgetItem* self, uintptr_t policy) {
	self->setChildIndicatorPolicy(static_cast<QTreeWidgetItem::ChildIndicatorPolicy>(policy));
}

uintptr_t QTreeWidgetItem_ChildIndicatorPolicy(QTreeWidgetItem* self) {
	QTreeWidgetItem::ChildIndicatorPolicy ret = const_cast<const QTreeWidgetItem*>(self)->childIndicatorPolicy();
	return static_cast<uintptr_t>(ret);
}

int QTreeWidgetItem_Flags(QTreeWidgetItem* self) {
	Qt::ItemFlags ret = const_cast<const QTreeWidgetItem*>(self)->flags();
	return static_cast<int>(ret);
}

void QTreeWidgetItem_SetFlags(QTreeWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

void QTreeWidgetItem_Text(QTreeWidgetItem* self, int column, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTreeWidgetItem*>(self)->text(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTreeWidgetItem_SetText(QTreeWidgetItem* self, int column, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(static_cast<int>(column), text_QString);
}

QIcon* QTreeWidgetItem_Icon(QTreeWidgetItem* self, int column) {
	QIcon ret = const_cast<const QTreeWidgetItem*>(self)->icon(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QTreeWidgetItem_SetIcon(QTreeWidgetItem* self, int column, QIcon* icon) {
	self->setIcon(static_cast<int>(column), *icon);
}

void QTreeWidgetItem_StatusTip(QTreeWidgetItem* self, int column, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTreeWidgetItem*>(self)->statusTip(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTreeWidgetItem_SetStatusTip(QTreeWidgetItem* self, int column, const char* statusTip, size_t statusTip_Strlen) {
	QString statusTip_QString = QString::fromUtf8(statusTip, statusTip_Strlen);
	self->setStatusTip(static_cast<int>(column), statusTip_QString);
}

void QTreeWidgetItem_ToolTip(QTreeWidgetItem* self, int column, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTreeWidgetItem*>(self)->toolTip(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTreeWidgetItem_SetToolTip(QTreeWidgetItem* self, int column, const char* toolTip, size_t toolTip_Strlen) {
	QString toolTip_QString = QString::fromUtf8(toolTip, toolTip_Strlen);
	self->setToolTip(static_cast<int>(column), toolTip_QString);
}

void QTreeWidgetItem_WhatsThis(QTreeWidgetItem* self, int column, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTreeWidgetItem*>(self)->whatsThis(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTreeWidgetItem_SetWhatsThis(QTreeWidgetItem* self, int column, const char* whatsThis, size_t whatsThis_Strlen) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis, whatsThis_Strlen);
	self->setWhatsThis(static_cast<int>(column), whatsThis_QString);
}

QFont* QTreeWidgetItem_Font(QTreeWidgetItem* self, int column) {
	QFont ret = const_cast<const QTreeWidgetItem*>(self)->font(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QTreeWidgetItem_SetFont(QTreeWidgetItem* self, int column, QFont* font) {
	self->setFont(static_cast<int>(column), *font);
}

int QTreeWidgetItem_TextAlignment(QTreeWidgetItem* self, int column) {
	return const_cast<const QTreeWidgetItem*>(self)->textAlignment(static_cast<int>(column));
}

void QTreeWidgetItem_SetTextAlignment(QTreeWidgetItem* self, int column, int alignment) {
	self->setTextAlignment(static_cast<int>(column), static_cast<int>(alignment));
}

QColor* QTreeWidgetItem_BackgroundColor(QTreeWidgetItem* self, int column) {
	QColor ret = const_cast<const QTreeWidgetItem*>(self)->backgroundColor(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QTreeWidgetItem_SetBackgroundColor(QTreeWidgetItem* self, int column, QColor* color) {
	self->setBackgroundColor(static_cast<int>(column), *color);
}

QBrush* QTreeWidgetItem_Background(QTreeWidgetItem* self, int column) {
	QBrush ret = const_cast<const QTreeWidgetItem*>(self)->background(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTreeWidgetItem_SetBackground(QTreeWidgetItem* self, int column, QBrush* brush) {
	self->setBackground(static_cast<int>(column), *brush);
}

QColor* QTreeWidgetItem_TextColor(QTreeWidgetItem* self, int column) {
	QColor ret = const_cast<const QTreeWidgetItem*>(self)->textColor(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QTreeWidgetItem_SetTextColor(QTreeWidgetItem* self, int column, QColor* color) {
	self->setTextColor(static_cast<int>(column), *color);
}

QBrush* QTreeWidgetItem_Foreground(QTreeWidgetItem* self, int column) {
	QBrush ret = const_cast<const QTreeWidgetItem*>(self)->foreground(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTreeWidgetItem_SetForeground(QTreeWidgetItem* self, int column, QBrush* brush) {
	self->setForeground(static_cast<int>(column), *brush);
}

uintptr_t QTreeWidgetItem_CheckState(QTreeWidgetItem* self, int column) {
	Qt::CheckState ret = const_cast<const QTreeWidgetItem*>(self)->checkState(static_cast<int>(column));
	return static_cast<uintptr_t>(ret);
}

void QTreeWidgetItem_SetCheckState(QTreeWidgetItem* self, int column, uintptr_t state) {
	self->setCheckState(static_cast<int>(column), static_cast<Qt::CheckState>(state));
}

QSize* QTreeWidgetItem_SizeHint(QTreeWidgetItem* self, int column) {
	QSize ret = const_cast<const QTreeWidgetItem*>(self)->sizeHint(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QTreeWidgetItem_SetSizeHint(QTreeWidgetItem* self, int column, QSize* size) {
	self->setSizeHint(static_cast<int>(column), *size);
}

QVariant* QTreeWidgetItem_Data(QTreeWidgetItem* self, int column, int role) {
	QVariant ret = const_cast<const QTreeWidgetItem*>(self)->data(static_cast<int>(column), static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QTreeWidgetItem_SetData(QTreeWidgetItem* self, int column, int role, QVariant* value) {
	self->setData(static_cast<int>(column), static_cast<int>(role), *value);
}

bool QTreeWidgetItem_OperatorLesser(QTreeWidgetItem* self, QTreeWidgetItem* other) {
	return const_cast<const QTreeWidgetItem*>(self)->operator<(*other);
}

void QTreeWidgetItem_Read(QTreeWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QTreeWidgetItem_Write(QTreeWidgetItem* self, QDataStream* out) {
	const_cast<const QTreeWidgetItem*>(self)->write(*out);
}

void QTreeWidgetItem_OperatorAssign(QTreeWidgetItem* self, QTreeWidgetItem* other) {
	self->operator=(*other);
}

QTreeWidgetItem* QTreeWidgetItem_Parent(QTreeWidgetItem* self) {
	return const_cast<const QTreeWidgetItem*>(self)->parent();
}

QTreeWidgetItem* QTreeWidgetItem_Child(QTreeWidgetItem* self, int index) {
	return const_cast<const QTreeWidgetItem*>(self)->child(static_cast<int>(index));
}

int QTreeWidgetItem_ChildCount(QTreeWidgetItem* self) {
	return const_cast<const QTreeWidgetItem*>(self)->childCount();
}

int QTreeWidgetItem_ColumnCount(QTreeWidgetItem* self) {
	return const_cast<const QTreeWidgetItem*>(self)->columnCount();
}

int QTreeWidgetItem_IndexOfChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
	return const_cast<const QTreeWidgetItem*>(self)->indexOfChild(child);
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

void QTreeWidgetItem_AddChildren(QTreeWidgetItem* self, QTreeWidgetItem** children, size_t children_len) {
	QList<QTreeWidgetItem*> children_QList;
	children_QList.reserve(children_len);
	for(size_t i = 0; i < children_len; ++i) {
		children_QList.push_back(children[i]);
	}
	self->addChildren(children_QList);
}

void QTreeWidgetItem_InsertChildren(QTreeWidgetItem* self, int index, QTreeWidgetItem** children, size_t children_len) {
	QList<QTreeWidgetItem*> children_QList;
	children_QList.reserve(children_len);
	for(size_t i = 0; i < children_len; ++i) {
		children_QList.push_back(children[i]);
	}
	self->insertChildren(static_cast<int>(index), children_QList);
}

void QTreeWidgetItem_TakeChildren(QTreeWidgetItem* self, QTreeWidgetItem*** _out, size_t* _out_len) {
	QList<QTreeWidgetItem*> ret = self->takeChildren();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** __out = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

int QTreeWidgetItem_Type(QTreeWidgetItem* self) {
	return const_cast<const QTreeWidgetItem*>(self)->type();
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

QMetaObject* QTreeWidget_MetaObject(QTreeWidget* self) {
	return (QMetaObject*) const_cast<const QTreeWidget*>(self)->metaObject();
}

void QTreeWidget_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTreeWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTreeWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTreeWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QTreeWidget_ColumnCount(QTreeWidget* self) {
	return const_cast<const QTreeWidget*>(self)->columnCount();
}

void QTreeWidget_SetColumnCount(QTreeWidget* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

QTreeWidgetItem* QTreeWidget_InvisibleRootItem(QTreeWidget* self) {
	return const_cast<const QTreeWidget*>(self)->invisibleRootItem();
}

QTreeWidgetItem* QTreeWidget_TopLevelItem(QTreeWidget* self, int index) {
	return const_cast<const QTreeWidget*>(self)->topLevelItem(static_cast<int>(index));
}

int QTreeWidget_TopLevelItemCount(QTreeWidget* self) {
	return const_cast<const QTreeWidget*>(self)->topLevelItemCount();
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

int QTreeWidget_IndexOfTopLevelItem(QTreeWidget* self, QTreeWidgetItem* item) {
	return const_cast<const QTreeWidget*>(self)->indexOfTopLevelItem(item);
}

void QTreeWidget_InsertTopLevelItems(QTreeWidget* self, int index, QTreeWidgetItem** items, size_t items_len) {
	QList<QTreeWidgetItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->insertTopLevelItems(static_cast<int>(index), items_QList);
}

void QTreeWidget_AddTopLevelItems(QTreeWidget* self, QTreeWidgetItem** items, size_t items_len) {
	QList<QTreeWidgetItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->addTopLevelItems(items_QList);
}

QTreeWidgetItem* QTreeWidget_HeaderItem(QTreeWidget* self) {
	return const_cast<const QTreeWidget*>(self)->headerItem();
}

void QTreeWidget_SetHeaderItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->setHeaderItem(item);
}

void QTreeWidget_SetHeaderLabels(QTreeWidget* self, char** labels, uint64_t* labels_Lengths, size_t labels_len) {
	QList<QString> labels_QList;
	labels_QList.reserve(labels_len);
	for(size_t i = 0; i < labels_len; ++i) {
		labels_QList.push_back(QString::fromUtf8(labels[i], labels_Lengths[i]));
	}
	self->setHeaderLabels(labels_QList);
}

void QTreeWidget_SetHeaderLabel(QTreeWidget* self, const char* label, size_t label_Strlen) {
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	self->setHeaderLabel(label_QString);
}

QTreeWidgetItem* QTreeWidget_CurrentItem(QTreeWidget* self) {
	return const_cast<const QTreeWidget*>(self)->currentItem();
}

int QTreeWidget_CurrentColumn(QTreeWidget* self) {
	return const_cast<const QTreeWidget*>(self)->currentColumn();
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

QTreeWidgetItem* QTreeWidget_ItemAt(QTreeWidget* self, QPoint* p) {
	return const_cast<const QTreeWidget*>(self)->itemAt(*p);
}

QTreeWidgetItem* QTreeWidget_ItemAt2(QTreeWidget* self, int x, int y) {
	return const_cast<const QTreeWidget*>(self)->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTreeWidget_VisualItemRect(QTreeWidget* self, QTreeWidgetItem* item) {
	QRect ret = const_cast<const QTreeWidget*>(self)->visualItemRect(item);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QTreeWidget_SortColumn(QTreeWidget* self) {
	return const_cast<const QTreeWidget*>(self)->sortColumn();
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

bool QTreeWidget_IsPersistentEditorOpen(QTreeWidget* self, QTreeWidgetItem* item) {
	return const_cast<const QTreeWidget*>(self)->isPersistentEditorOpen(item);
}

QWidget* QTreeWidget_ItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	return const_cast<const QTreeWidget*>(self)->itemWidget(item, static_cast<int>(column));
}

void QTreeWidget_SetItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column, QWidget* widget) {
	self->setItemWidget(item, static_cast<int>(column), widget);
}

void QTreeWidget_RemoveItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->removeItemWidget(item, static_cast<int>(column));
}

bool QTreeWidget_IsItemSelected(QTreeWidget* self, QTreeWidgetItem* item) {
	return const_cast<const QTreeWidget*>(self)->isItemSelected(item);
}

void QTreeWidget_SetItemSelected(QTreeWidget* self, QTreeWidgetItem* item, bool selectVal) {
	self->setItemSelected(item, selectVal);
}

void QTreeWidget_SelectedItems(QTreeWidget* self, QTreeWidgetItem*** _out, size_t* _out_len) {
	QList<QTreeWidgetItem*> ret = const_cast<const QTreeWidget*>(self)->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** __out = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTreeWidget_FindItems(QTreeWidget* self, const char* text, size_t text_Strlen, int flags, QTreeWidgetItem*** _out, size_t* _out_len) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QList<QTreeWidgetItem*> ret = const_cast<const QTreeWidget*>(self)->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** __out = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

bool QTreeWidget_IsItemHidden(QTreeWidget* self, QTreeWidgetItem* item) {
	return const_cast<const QTreeWidget*>(self)->isItemHidden(item);
}

void QTreeWidget_SetItemHidden(QTreeWidget* self, QTreeWidgetItem* item, bool hide) {
	self->setItemHidden(item, hide);
}

bool QTreeWidget_IsItemExpanded(QTreeWidget* self, QTreeWidgetItem* item) {
	return const_cast<const QTreeWidget*>(self)->isItemExpanded(item);
}

void QTreeWidget_SetItemExpanded(QTreeWidget* self, QTreeWidgetItem* item, bool expand) {
	self->setItemExpanded(item, expand);
}

bool QTreeWidget_IsFirstItemColumnSpanned(QTreeWidget* self, QTreeWidgetItem* item) {
	return const_cast<const QTreeWidget*>(self)->isFirstItemColumnSpanned(item);
}

void QTreeWidget_SetFirstItemColumnSpanned(QTreeWidget* self, QTreeWidgetItem* item, bool span) {
	self->setFirstItemColumnSpanned(item, span);
}

QTreeWidgetItem* QTreeWidget_ItemAbove(QTreeWidget* self, QTreeWidgetItem* item) {
	return const_cast<const QTreeWidget*>(self)->itemAbove(item);
}

QTreeWidgetItem* QTreeWidget_ItemBelow(QTreeWidget* self, QTreeWidgetItem* item) {
	return const_cast<const QTreeWidget*>(self)->itemBelow(item);
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
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTreeWidget_ItemClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemClicked(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemClicked(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemClicked), self, [=](QTreeWidgetItem* item, int column) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTreeWidget_ItemDoubleClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemDoubleClicked(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemDoubleClicked(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemDoubleClicked), self, [=](QTreeWidgetItem* item, int column) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTreeWidget_ItemActivated(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemActivated(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemActivated(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemActivated), self, [=](QTreeWidgetItem* item, int column) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTreeWidget_ItemEntered(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemEntered(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemEntered(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemEntered), self, [=](QTreeWidgetItem* item, int column) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTreeWidget_ItemChanged(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemChanged(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemChanged(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemChanged), self, [=](QTreeWidgetItem* item, int column) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTreeWidget_ItemExpanded(QTreeWidget* self, QTreeWidgetItem* item) {
	self->itemExpanded(item);
}

void QTreeWidget_connect_ItemExpanded(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*)>(&QTreeWidget::itemExpanded), self, [=](QTreeWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTreeWidget_ItemCollapsed(QTreeWidget* self, QTreeWidgetItem* item) {
	self->itemCollapsed(item);
}

void QTreeWidget_connect_ItemCollapsed(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*)>(&QTreeWidget::itemCollapsed), self, [=](QTreeWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTreeWidget_CurrentItemChanged(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QTreeWidget_connect_CurrentItemChanged(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, QTreeWidgetItem*)>(&QTreeWidget::currentItemChanged), self, [=](QTreeWidgetItem* current, QTreeWidgetItem* previous) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTreeWidget_ItemSelectionChanged(QTreeWidget* self) {
	self->itemSelectionChanged();
}

void QTreeWidget_connect_ItemSelectionChanged(QTreeWidget* self, void* slot) {
	QTreeWidget::connect(self, static_cast<void (QTreeWidget::*)()>(&QTreeWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTreeWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTreeWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTreeWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTreeWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTreeWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTreeWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTreeWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTreeWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

bool QTreeWidget_IsPersistentEditorOpen2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	return self->isPersistentEditorOpen(item, static_cast<int>(column));
}

void QTreeWidget_FindItems3(QTreeWidget* self, const char* text, size_t text_Strlen, int flags, int column, QTreeWidgetItem*** _out, size_t* _out_len) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QList<QTreeWidgetItem*> ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags), static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** __out = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTreeWidget_ScrollToItem2(QTreeWidget* self, QTreeWidgetItem* item, uintptr_t hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QTreeWidget_Delete(QTreeWidget* self) {
	delete self;
}

