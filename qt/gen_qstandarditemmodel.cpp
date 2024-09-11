#include <QBrush>
#include <QDataStream>
#include <QFont>
#include <QIcon>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include "qstandarditemmodel.h"

#include "gen_qstandarditemmodel.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStandardItem* QStandardItem_new() {
	return new QStandardItem();
}

QStandardItem* QStandardItem_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QStandardItem(text_QString);
}

QStandardItem* QStandardItem_new3(QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QStandardItem(*icon, text_QString);
}

QStandardItem* QStandardItem_new4(int rows) {
	return new QStandardItem(static_cast<int>(rows));
}

QStandardItem* QStandardItem_new5(int rows, int columns) {
	return new QStandardItem(static_cast<int>(rows), static_cast<int>(columns));
}

QVariant* QStandardItem_Data(const QStandardItem* self) {
	QVariant ret = self->data();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QStandardItem_SetData(QStandardItem* self, QVariant* value) {
	self->setData(*value);
}

void QStandardItem_ClearData(QStandardItem* self) {
	self->clearData();
}

void QStandardItem_Text(const QStandardItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardItem_SetText(QStandardItem* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

QIcon* QStandardItem_Icon(const QStandardItem* self) {
	QIcon ret = self->icon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QStandardItem_SetIcon(QStandardItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

void QStandardItem_ToolTip(const QStandardItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardItem_SetToolTip(QStandardItem* self, const char* toolTip, size_t toolTip_Strlen) {
	QString toolTip_QString = QString::fromUtf8(toolTip, toolTip_Strlen);
	self->setToolTip(toolTip_QString);
}

void QStandardItem_StatusTip(const QStandardItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardItem_SetStatusTip(QStandardItem* self, const char* statusTip, size_t statusTip_Strlen) {
	QString statusTip_QString = QString::fromUtf8(statusTip, statusTip_Strlen);
	self->setStatusTip(statusTip_QString);
}

void QStandardItem_WhatsThis(const QStandardItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardItem_SetWhatsThis(QStandardItem* self, const char* whatsThis, size_t whatsThis_Strlen) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis, whatsThis_Strlen);
	self->setWhatsThis(whatsThis_QString);
}

QSize* QStandardItem_SizeHint(const QStandardItem* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QStandardItem_SetSizeHint(QStandardItem* self, QSize* sizeHint) {
	self->setSizeHint(*sizeHint);
}

QFont* QStandardItem_Font(const QStandardItem* self) {
	QFont ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QStandardItem_SetFont(QStandardItem* self, QFont* font) {
	self->setFont(*font);
}

int QStandardItem_TextAlignment(const QStandardItem* self) {
	Qt::Alignment ret = self->textAlignment();
	return static_cast<int>(ret);
}

void QStandardItem_SetTextAlignment(QStandardItem* self, int textAlignment) {
	self->setTextAlignment(static_cast<Qt::Alignment>(textAlignment));
}

QBrush* QStandardItem_Background(const QStandardItem* self) {
	QBrush ret = self->background();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QStandardItem_SetBackground(QStandardItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QStandardItem_Foreground(const QStandardItem* self) {
	QBrush ret = self->foreground();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QStandardItem_SetForeground(QStandardItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

uintptr_t QStandardItem_CheckState(const QStandardItem* self) {
	Qt::CheckState ret = self->checkState();
	return static_cast<uintptr_t>(ret);
}

void QStandardItem_SetCheckState(QStandardItem* self, uintptr_t checkState) {
	self->setCheckState(static_cast<Qt::CheckState>(checkState));
}

void QStandardItem_AccessibleText(const QStandardItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->accessibleText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardItem_SetAccessibleText(QStandardItem* self, const char* accessibleText, size_t accessibleText_Strlen) {
	QString accessibleText_QString = QString::fromUtf8(accessibleText, accessibleText_Strlen);
	self->setAccessibleText(accessibleText_QString);
}

void QStandardItem_AccessibleDescription(const QStandardItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->accessibleDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardItem_SetAccessibleDescription(QStandardItem* self, const char* accessibleDescription, size_t accessibleDescription_Strlen) {
	QString accessibleDescription_QString = QString::fromUtf8(accessibleDescription, accessibleDescription_Strlen);
	self->setAccessibleDescription(accessibleDescription_QString);
}

int QStandardItem_Flags(const QStandardItem* self) {
	Qt::ItemFlags ret = self->flags();
	return static_cast<int>(ret);
}

void QStandardItem_SetFlags(QStandardItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

bool QStandardItem_IsEnabled(const QStandardItem* self) {
	return self->isEnabled();
}

void QStandardItem_SetEnabled(QStandardItem* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QStandardItem_IsEditable(const QStandardItem* self) {
	return self->isEditable();
}

void QStandardItem_SetEditable(QStandardItem* self, bool editable) {
	self->setEditable(editable);
}

bool QStandardItem_IsSelectable(const QStandardItem* self) {
	return self->isSelectable();
}

void QStandardItem_SetSelectable(QStandardItem* self, bool selectable) {
	self->setSelectable(selectable);
}

bool QStandardItem_IsCheckable(const QStandardItem* self) {
	return self->isCheckable();
}

void QStandardItem_SetCheckable(QStandardItem* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QStandardItem_IsAutoTristate(const QStandardItem* self) {
	return self->isAutoTristate();
}

void QStandardItem_SetAutoTristate(QStandardItem* self, bool tristate) {
	self->setAutoTristate(tristate);
}

bool QStandardItem_IsUserTristate(const QStandardItem* self) {
	return self->isUserTristate();
}

void QStandardItem_SetUserTristate(QStandardItem* self, bool tristate) {
	self->setUserTristate(tristate);
}

bool QStandardItem_IsTristate(const QStandardItem* self) {
	return self->isTristate();
}

void QStandardItem_SetTristate(QStandardItem* self, bool tristate) {
	self->setTristate(tristate);
}

bool QStandardItem_IsDragEnabled(const QStandardItem* self) {
	return self->isDragEnabled();
}

void QStandardItem_SetDragEnabled(QStandardItem* self, bool dragEnabled) {
	self->setDragEnabled(dragEnabled);
}

bool QStandardItem_IsDropEnabled(const QStandardItem* self) {
	return self->isDropEnabled();
}

void QStandardItem_SetDropEnabled(QStandardItem* self, bool dropEnabled) {
	self->setDropEnabled(dropEnabled);
}

QStandardItem* QStandardItem_Parent(const QStandardItem* self) {
	return self->parent();
}

int QStandardItem_Row(const QStandardItem* self) {
	return self->row();
}

int QStandardItem_Column(const QStandardItem* self) {
	return self->column();
}

QModelIndex* QStandardItem_Index(const QStandardItem* self) {
	QModelIndex ret = self->index();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QStandardItemModel* QStandardItem_Model(const QStandardItem* self) {
	return self->model();
}

int QStandardItem_RowCount(const QStandardItem* self) {
	return self->rowCount();
}

void QStandardItem_SetRowCount(QStandardItem* self, int rows) {
	self->setRowCount(static_cast<int>(rows));
}

int QStandardItem_ColumnCount(const QStandardItem* self) {
	return self->columnCount();
}

void QStandardItem_SetColumnCount(QStandardItem* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

bool QStandardItem_HasChildren(const QStandardItem* self) {
	return self->hasChildren();
}

QStandardItem* QStandardItem_Child(const QStandardItem* self, int row) {
	return self->child(static_cast<int>(row));
}

void QStandardItem_SetChild(QStandardItem* self, int row, int column, QStandardItem* item) {
	self->setChild(static_cast<int>(row), static_cast<int>(column), item);
}

void QStandardItem_SetChild2(QStandardItem* self, int row, QStandardItem* item) {
	self->setChild(static_cast<int>(row), item);
}

void QStandardItem_InsertRow(QStandardItem* self, int row, QStandardItem** items, size_t items_len) {
	QList<QStandardItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->insertRow(static_cast<int>(row), items_QList);
}

void QStandardItem_InsertColumn(QStandardItem* self, int column, QStandardItem** items, size_t items_len) {
	QList<QStandardItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->insertColumn(static_cast<int>(column), items_QList);
}

void QStandardItem_InsertRows(QStandardItem* self, int row, QStandardItem** items, size_t items_len) {
	QList<QStandardItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->insertRows(static_cast<int>(row), items_QList);
}

void QStandardItem_InsertRows2(QStandardItem* self, int row, int count) {
	self->insertRows(static_cast<int>(row), static_cast<int>(count));
}

void QStandardItem_InsertColumns(QStandardItem* self, int column, int count) {
	self->insertColumns(static_cast<int>(column), static_cast<int>(count));
}

void QStandardItem_RemoveRow(QStandardItem* self, int row) {
	self->removeRow(static_cast<int>(row));
}

void QStandardItem_RemoveColumn(QStandardItem* self, int column) {
	self->removeColumn(static_cast<int>(column));
}

void QStandardItem_RemoveRows(QStandardItem* self, int row, int count) {
	self->removeRows(static_cast<int>(row), static_cast<int>(count));
}

void QStandardItem_RemoveColumns(QStandardItem* self, int column, int count) {
	self->removeColumns(static_cast<int>(column), static_cast<int>(count));
}

void QStandardItem_AppendRow(QStandardItem* self, QStandardItem** items, size_t items_len) {
	QList<QStandardItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->appendRow(items_QList);
}

void QStandardItem_AppendRows(QStandardItem* self, QStandardItem** items, size_t items_len) {
	QList<QStandardItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->appendRows(items_QList);
}

void QStandardItem_AppendColumn(QStandardItem* self, QStandardItem** items, size_t items_len) {
	QList<QStandardItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->appendColumn(items_QList);
}

void QStandardItem_InsertRow2(QStandardItem* self, int row, QStandardItem* item) {
	self->insertRow(static_cast<int>(row), item);
}

void QStandardItem_AppendRowWithItem(QStandardItem* self, QStandardItem* item) {
	self->appendRow(item);
}

QStandardItem* QStandardItem_TakeChild(QStandardItem* self, int row) {
	return self->takeChild(static_cast<int>(row));
}

void QStandardItem_TakeRow(QStandardItem* self, int row, QStandardItem*** _out, size_t* _out_len) {
	QList<QStandardItem*> ret = self->takeRow(static_cast<int>(row));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** __out = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QStandardItem_TakeColumn(QStandardItem* self, int column, QStandardItem*** _out, size_t* _out_len) {
	QList<QStandardItem*> ret = self->takeColumn(static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** __out = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QStandardItem_SortChildren(QStandardItem* self, int column) {
	self->sortChildren(static_cast<int>(column));
}

QStandardItem* QStandardItem_Clone(const QStandardItem* self) {
	return self->clone();
}

int QStandardItem_Type(const QStandardItem* self) {
	return self->type();
}

void QStandardItem_Read(QStandardItem* self, QDataStream* in) {
	self->read(*in);
}

void QStandardItem_Write(const QStandardItem* self, QDataStream* out) {
	self->write(*out);
}

bool QStandardItem_OperatorLesser(const QStandardItem* self, QStandardItem* other) {
	return self->operator<(*other);
}

QVariant* QStandardItem_Data1(const QStandardItem* self, int role) {
	QVariant ret = self->data(static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QStandardItem_SetData2(QStandardItem* self, QVariant* value, int role) {
	self->setData(*value, static_cast<int>(role));
}

QStandardItem* QStandardItem_Child2(const QStandardItem* self, int row, int column) {
	return self->child(static_cast<int>(row), static_cast<int>(column));
}

QStandardItem* QStandardItem_TakeChild2(QStandardItem* self, int row, int column) {
	return self->takeChild(static_cast<int>(row), static_cast<int>(column));
}

void QStandardItem_SortChildren2(QStandardItem* self, int column, uintptr_t order) {
	self->sortChildren(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QStandardItem_Delete(QStandardItem* self) {
	delete self;
}

QStandardItemModel* QStandardItemModel_new() {
	return new QStandardItemModel();
}

QStandardItemModel* QStandardItemModel_new2(int rows, int columns) {
	return new QStandardItemModel(static_cast<int>(rows), static_cast<int>(columns));
}

QStandardItemModel* QStandardItemModel_new3(QObject* parent) {
	return new QStandardItemModel(parent);
}

QStandardItemModel* QStandardItemModel_new4(int rows, int columns, QObject* parent) {
	return new QStandardItemModel(static_cast<int>(rows), static_cast<int>(columns), parent);
}

QMetaObject* QStandardItemModel_MetaObject(const QStandardItemModel* self) {
	return (QMetaObject*) self->metaObject();
}

void QStandardItemModel_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStandardItemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardItemModel_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStandardItemModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QStandardItemModel_Index(const QStandardItemModel* self, int row, int column) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QStandardItemModel_Parent(const QStandardItemModel* self, QModelIndex* child) {
	QModelIndex ret = self->parent(*child);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QStandardItemModel_RowCount(const QStandardItemModel* self) {
	return self->rowCount();
}

int QStandardItemModel_ColumnCount(const QStandardItemModel* self) {
	return self->columnCount();
}

bool QStandardItemModel_HasChildren(const QStandardItemModel* self) {
	return self->hasChildren();
}

QModelIndex* QStandardItemModel_Sibling(const QStandardItemModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex ret = self->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QVariant* QStandardItemModel_Data(const QStandardItemModel* self, QModelIndex* index) {
	QVariant ret = self->data(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QStandardItemModel_SetData(QStandardItemModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

bool QStandardItemModel_ClearItemData(QStandardItemModel* self, QModelIndex* index) {
	return self->clearItemData(*index);
}

QVariant* QStandardItemModel_HeaderData(const QStandardItemModel* self, int section, uintptr_t orientation) {
	QVariant ret = self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QStandardItemModel_SetHeaderData(QStandardItemModel* self, int section, uintptr_t orientation, QVariant* value) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value);
}

bool QStandardItemModel_InsertRows(QStandardItemModel* self, int row, int count) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count));
}

bool QStandardItemModel_InsertColumns(QStandardItemModel* self, int column, int count) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count));
}

bool QStandardItemModel_RemoveRows(QStandardItemModel* self, int row, int count) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count));
}

bool QStandardItemModel_RemoveColumns(QStandardItemModel* self, int column, int count) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count));
}

int QStandardItemModel_Flags(const QStandardItemModel* self, QModelIndex* index) {
	Qt::ItemFlags ret = self->flags(*index);
	return static_cast<int>(ret);
}

int QStandardItemModel_SupportedDropActions(const QStandardItemModel* self) {
	Qt::DropActions ret = self->supportedDropActions();
	return static_cast<int>(ret);
}

void QStandardItemModel_Clear(QStandardItemModel* self) {
	self->clear();
}

void QStandardItemModel_Sort(QStandardItemModel* self, int column) {
	self->sort(static_cast<int>(column));
}

QStandardItem* QStandardItemModel_ItemFromIndex(const QStandardItemModel* self, QModelIndex* index) {
	return self->itemFromIndex(*index);
}

QModelIndex* QStandardItemModel_IndexFromItem(const QStandardItemModel* self, QStandardItem* item) {
	QModelIndex ret = self->indexFromItem(item);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QStandardItem* QStandardItemModel_Item(const QStandardItemModel* self, int row) {
	return self->item(static_cast<int>(row));
}

void QStandardItemModel_SetItem(QStandardItemModel* self, int row, int column, QStandardItem* item) {
	self->setItem(static_cast<int>(row), static_cast<int>(column), item);
}

void QStandardItemModel_SetItem2(QStandardItemModel* self, int row, QStandardItem* item) {
	self->setItem(static_cast<int>(row), item);
}

QStandardItem* QStandardItemModel_InvisibleRootItem(const QStandardItemModel* self) {
	return self->invisibleRootItem();
}

QStandardItem* QStandardItemModel_HorizontalHeaderItem(const QStandardItemModel* self, int column) {
	return self->horizontalHeaderItem(static_cast<int>(column));
}

void QStandardItemModel_SetHorizontalHeaderItem(QStandardItemModel* self, int column, QStandardItem* item) {
	self->setHorizontalHeaderItem(static_cast<int>(column), item);
}

QStandardItem* QStandardItemModel_VerticalHeaderItem(const QStandardItemModel* self, int row) {
	return self->verticalHeaderItem(static_cast<int>(row));
}

void QStandardItemModel_SetVerticalHeaderItem(QStandardItemModel* self, int row, QStandardItem* item) {
	self->setVerticalHeaderItem(static_cast<int>(row), item);
}

void QStandardItemModel_SetHorizontalHeaderLabels(QStandardItemModel* self, char** labels, uint64_t* labels_Lengths, size_t labels_len) {
	QList<QString> labels_QList;
	labels_QList.reserve(labels_len);
	for(size_t i = 0; i < labels_len; ++i) {
		labels_QList.push_back(QString::fromUtf8(labels[i], labels_Lengths[i]));
	}
	self->setHorizontalHeaderLabels(labels_QList);
}

void QStandardItemModel_SetVerticalHeaderLabels(QStandardItemModel* self, char** labels, uint64_t* labels_Lengths, size_t labels_len) {
	QList<QString> labels_QList;
	labels_QList.reserve(labels_len);
	for(size_t i = 0; i < labels_len; ++i) {
		labels_QList.push_back(QString::fromUtf8(labels[i], labels_Lengths[i]));
	}
	self->setVerticalHeaderLabels(labels_QList);
}

void QStandardItemModel_SetRowCount(QStandardItemModel* self, int rows) {
	self->setRowCount(static_cast<int>(rows));
}

void QStandardItemModel_SetColumnCount(QStandardItemModel* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

void QStandardItemModel_AppendRow(QStandardItemModel* self, QStandardItem** items, size_t items_len) {
	QList<QStandardItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->appendRow(items_QList);
}

void QStandardItemModel_AppendColumn(QStandardItemModel* self, QStandardItem** items, size_t items_len) {
	QList<QStandardItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->appendColumn(items_QList);
}

void QStandardItemModel_AppendRowWithItem(QStandardItemModel* self, QStandardItem* item) {
	self->appendRow(item);
}

void QStandardItemModel_InsertRow(QStandardItemModel* self, int row, QStandardItem** items, size_t items_len) {
	QList<QStandardItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->insertRow(static_cast<int>(row), items_QList);
}

void QStandardItemModel_InsertColumn(QStandardItemModel* self, int column, QStandardItem** items, size_t items_len) {
	QList<QStandardItem*> items_QList;
	items_QList.reserve(items_len);
	for(size_t i = 0; i < items_len; ++i) {
		items_QList.push_back(items[i]);
	}
	self->insertColumn(static_cast<int>(column), items_QList);
}

void QStandardItemModel_InsertRow2(QStandardItemModel* self, int row, QStandardItem* item) {
	self->insertRow(static_cast<int>(row), item);
}

bool QStandardItemModel_InsertRowWithRow(QStandardItemModel* self, int row) {
	return self->insertRow(static_cast<int>(row));
}

bool QStandardItemModel_InsertColumnWithColumn(QStandardItemModel* self, int column) {
	return self->insertColumn(static_cast<int>(column));
}

QStandardItem* QStandardItemModel_TakeItem(QStandardItemModel* self, int row) {
	return self->takeItem(static_cast<int>(row));
}

void QStandardItemModel_TakeRow(QStandardItemModel* self, int row, QStandardItem*** _out, size_t* _out_len) {
	QList<QStandardItem*> ret = self->takeRow(static_cast<int>(row));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** __out = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QStandardItemModel_TakeColumn(QStandardItemModel* self, int column, QStandardItem*** _out, size_t* _out_len) {
	QList<QStandardItem*> ret = self->takeColumn(static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** __out = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QStandardItem* QStandardItemModel_TakeHorizontalHeaderItem(QStandardItemModel* self, int column) {
	return self->takeHorizontalHeaderItem(static_cast<int>(column));
}

QStandardItem* QStandardItemModel_TakeVerticalHeaderItem(QStandardItemModel* self, int row) {
	return self->takeVerticalHeaderItem(static_cast<int>(row));
}

QStandardItem* QStandardItemModel_ItemPrototype(const QStandardItemModel* self) {
	return (QStandardItem*) self->itemPrototype();
}

void QStandardItemModel_SetItemPrototype(QStandardItemModel* self, QStandardItem* item) {
	self->setItemPrototype(item);
}

void QStandardItemModel_FindItems(const QStandardItemModel* self, const char* text, size_t text_Strlen, QStandardItem*** _out, size_t* _out_len) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QList<QStandardItem*> ret = self->findItems(text_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** __out = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

int QStandardItemModel_SortRole(const QStandardItemModel* self) {
	return self->sortRole();
}

void QStandardItemModel_SetSortRole(QStandardItemModel* self, int role) {
	self->setSortRole(static_cast<int>(role));
}

void QStandardItemModel_MimeTypes(const QStandardItemModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = self->mimeTypes();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

QMimeData* QStandardItemModel_MimeData(const QStandardItemModel* self, QModelIndex** indexes, size_t indexes_len) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes_len);
	for(size_t i = 0; i < indexes_len; ++i) {
		indexes_QList.push_back(*(indexes[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QStandardItemModel_DropMimeData(QStandardItemModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

void QStandardItemModel_ItemChanged(QStandardItemModel* self, QStandardItem* item) {
	self->itemChanged(item);
}

void QStandardItemModel_connect_ItemChanged(QStandardItemModel* self, void* slot) {
	QStandardItemModel::connect(self, static_cast<void (QStandardItemModel::*)(QStandardItem*)>(&QStandardItemModel::itemChanged), self, [=](QStandardItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStandardItemModel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStandardItemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardItemModel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStandardItemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardItemModel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStandardItemModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardItemModel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStandardItemModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QStandardItemModel_Index3(const QStandardItemModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QStandardItemModel_RowCount1(const QStandardItemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QStandardItemModel_ColumnCount1(const QStandardItemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QStandardItemModel_HasChildren1(const QStandardItemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QStandardItemModel_Data2(const QStandardItemModel* self, QModelIndex* index, int role) {
	QVariant ret = self->data(*index, static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QStandardItemModel_SetData3(QStandardItemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QStandardItemModel_HeaderData3(const QStandardItemModel* self, int section, uintptr_t orientation, int role) {
	QVariant ret = self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QStandardItemModel_SetHeaderData4(QStandardItemModel* self, int section, uintptr_t orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QStandardItemModel_InsertRows3(QStandardItemModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStandardItemModel_InsertColumns3(QStandardItemModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QStandardItemModel_RemoveRows3(QStandardItemModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStandardItemModel_RemoveColumns3(QStandardItemModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

void QStandardItemModel_Sort2(QStandardItemModel* self, int column, uintptr_t order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QStandardItem* QStandardItemModel_Item2(const QStandardItemModel* self, int row, int column) {
	return self->item(static_cast<int>(row), static_cast<int>(column));
}

bool QStandardItemModel_InsertRow22(QStandardItemModel* self, int row, QModelIndex* parent) {
	return self->insertRow(static_cast<int>(row), *parent);
}

bool QStandardItemModel_InsertColumn2(QStandardItemModel* self, int column, QModelIndex* parent) {
	return self->insertColumn(static_cast<int>(column), *parent);
}

QStandardItem* QStandardItemModel_TakeItem2(QStandardItemModel* self, int row, int column) {
	return self->takeItem(static_cast<int>(row), static_cast<int>(column));
}

void QStandardItemModel_FindItems2(const QStandardItemModel* self, const char* text, size_t text_Strlen, int flags, QStandardItem*** _out, size_t* _out_len) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QList<QStandardItem*> ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** __out = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QStandardItemModel_FindItems3(const QStandardItemModel* self, const char* text, size_t text_Strlen, int flags, int column, QStandardItem*** _out, size_t* _out_len) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QList<QStandardItem*> ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags), static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** __out = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QStandardItemModel_Delete(QStandardItemModel* self) {
	delete self;
}

