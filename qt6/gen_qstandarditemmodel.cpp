#include <QBrush>
#include <QDataStream>
#include <QFont>
#include <QIcon>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QSize>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qstandarditemmodel.h>
#include "gen_qstandarditemmodel.h"
#include "_cgo_export.h"

QStandardItem* QStandardItem_new() {
	return new QStandardItem();
}

QStandardItem* QStandardItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QStandardItem(text_QString);
}

QStandardItem* QStandardItem_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QStandardItem(*icon, text_QString);
}

QStandardItem* QStandardItem_new4(int rows) {
	return new QStandardItem(static_cast<int>(rows));
}

QStandardItem* QStandardItem_new5(int rows, int columns) {
	return new QStandardItem(static_cast<int>(rows), static_cast<int>(columns));
}

QVariant* QStandardItem_Data(const QStandardItem* self) {
	return new QVariant(self->data());
}

void QStandardItem_MultiData(const QStandardItem* self, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*roleDataSpan);
}

void QStandardItem_SetData(QStandardItem* self, QVariant* value) {
	self->setData(*value);
}

void QStandardItem_ClearData(QStandardItem* self) {
	self->clearData();
}

struct miqt_string QStandardItem_Text(const QStandardItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetText(QStandardItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

QIcon* QStandardItem_Icon(const QStandardItem* self) {
	return new QIcon(self->icon());
}

void QStandardItem_SetIcon(QStandardItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string QStandardItem_ToolTip(const QStandardItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetToolTip(QStandardItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QStandardItem_StatusTip(const QStandardItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetStatusTip(QStandardItem* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QStandardItem_WhatsThis(const QStandardItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetWhatsThis(QStandardItem* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

QSize* QStandardItem_SizeHint(const QStandardItem* self) {
	return new QSize(self->sizeHint());
}

void QStandardItem_SetSizeHint(QStandardItem* self, QSize* sizeHint) {
	self->setSizeHint(*sizeHint);
}

QFont* QStandardItem_Font(const QStandardItem* self) {
	return new QFont(self->font());
}

void QStandardItem_SetFont(QStandardItem* self, QFont* font) {
	self->setFont(*font);
}

int QStandardItem_TextAlignment(const QStandardItem* self) {
	Qt::Alignment _ret = self->textAlignment();
	return static_cast<int>(_ret);
}

void QStandardItem_SetTextAlignment(QStandardItem* self, int textAlignment) {
	self->setTextAlignment(static_cast<Qt::Alignment>(textAlignment));
}

QBrush* QStandardItem_Background(const QStandardItem* self) {
	return new QBrush(self->background());
}

void QStandardItem_SetBackground(QStandardItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QStandardItem_Foreground(const QStandardItem* self) {
	return new QBrush(self->foreground());
}

void QStandardItem_SetForeground(QStandardItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

int QStandardItem_CheckState(const QStandardItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QStandardItem_SetCheckState(QStandardItem* self, int checkState) {
	self->setCheckState(static_cast<Qt::CheckState>(checkState));
}

struct miqt_string QStandardItem_AccessibleText(const QStandardItem* self) {
	QString _ret = self->accessibleText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetAccessibleText(QStandardItem* self, struct miqt_string accessibleText) {
	QString accessibleText_QString = QString::fromUtf8(accessibleText.data, accessibleText.len);
	self->setAccessibleText(accessibleText_QString);
}

struct miqt_string QStandardItem_AccessibleDescription(const QStandardItem* self) {
	QString _ret = self->accessibleDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetAccessibleDescription(QStandardItem* self, struct miqt_string accessibleDescription) {
	QString accessibleDescription_QString = QString::fromUtf8(accessibleDescription.data, accessibleDescription.len);
	self->setAccessibleDescription(accessibleDescription_QString);
}

int QStandardItem_Flags(const QStandardItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
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
	return new QModelIndex(self->index());
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

void QStandardItem_InsertRow(QStandardItem* self, int row, struct miqt_array* /* of QStandardItem* */ items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items->len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->insertRow(static_cast<int>(row), items_QList);
}

void QStandardItem_InsertColumn(QStandardItem* self, int column, struct miqt_array* /* of QStandardItem* */ items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items->len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->insertColumn(static_cast<int>(column), items_QList);
}

void QStandardItem_InsertRows(QStandardItem* self, int row, struct miqt_array* /* of QStandardItem* */ items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items->len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
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

void QStandardItem_AppendRow(QStandardItem* self, struct miqt_array* /* of QStandardItem* */ items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items->len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->appendRow(items_QList);
}

void QStandardItem_AppendRows(QStandardItem* self, struct miqt_array* /* of QStandardItem* */ items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items->len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->appendRows(items_QList);
}

void QStandardItem_AppendColumn(QStandardItem* self, struct miqt_array* /* of QStandardItem* */ items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items->len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
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

struct miqt_array* QStandardItem_TakeRow(QStandardItem* self, int row) {
	QList<QStandardItem *> _ret = self->takeRow(static_cast<int>(row));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QStandardItem_TakeColumn(QStandardItem* self, int column) {
	QList<QStandardItem *> _ret = self->takeColumn(static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
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
	return new QVariant(self->data(static_cast<int>(role)));
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

void QStandardItem_SortChildren2(QStandardItem* self, int column, int order) {
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

void* QStandardItemModel_Metacast(QStandardItemModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStandardItemModel_Tr(const char* s) {
	QString _ret = QStandardItemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QStandardItemModel_Index(const QStandardItemModel* self, int row, int column) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QStandardItemModel_Parent(const QStandardItemModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
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

QVariant* QStandardItemModel_Data(const QStandardItemModel* self, QModelIndex* index) {
	return new QVariant(self->data(*index));
}

void QStandardItemModel_MultiData(const QStandardItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*index, *roleDataSpan);
}

bool QStandardItemModel_SetData(QStandardItemModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

bool QStandardItemModel_ClearItemData(QStandardItemModel* self, QModelIndex* index) {
	return self->clearItemData(*index);
}

QVariant* QStandardItemModel_HeaderData(const QStandardItemModel* self, int section, int orientation) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation)));
}

bool QStandardItemModel_SetHeaderData(QStandardItemModel* self, int section, int orientation, QVariant* value) {
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
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

int QStandardItemModel_SupportedDropActions(const QStandardItemModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
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
	return new QModelIndex(self->indexFromItem(item));
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

void QStandardItemModel_SetHorizontalHeaderLabels(QStandardItemModel* self, struct miqt_array* /* of struct miqt_string */ labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels->len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels->data);
	for(size_t i = 0; i < labels->len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setHorizontalHeaderLabels(labels_QList);
}

void QStandardItemModel_SetVerticalHeaderLabels(QStandardItemModel* self, struct miqt_array* /* of struct miqt_string */ labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels->len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels->data);
	for(size_t i = 0; i < labels->len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setVerticalHeaderLabels(labels_QList);
}

void QStandardItemModel_SetRowCount(QStandardItemModel* self, int rows) {
	self->setRowCount(static_cast<int>(rows));
}

void QStandardItemModel_SetColumnCount(QStandardItemModel* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

void QStandardItemModel_AppendRow(QStandardItemModel* self, struct miqt_array* /* of QStandardItem* */ items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items->len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->appendRow(items_QList);
}

void QStandardItemModel_AppendColumn(QStandardItemModel* self, struct miqt_array* /* of QStandardItem* */ items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items->len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->appendColumn(items_QList);
}

void QStandardItemModel_AppendRowWithItem(QStandardItemModel* self, QStandardItem* item) {
	self->appendRow(item);
}

void QStandardItemModel_InsertRow(QStandardItemModel* self, int row, struct miqt_array* /* of QStandardItem* */ items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items->len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->insertRow(static_cast<int>(row), items_QList);
}

void QStandardItemModel_InsertColumn(QStandardItemModel* self, int column, struct miqt_array* /* of QStandardItem* */ items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items->len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items->data);
	for(size_t i = 0; i < items->len; ++i) {
		items_QList.push_back(items_arr[i]);
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

struct miqt_array* QStandardItemModel_TakeRow(QStandardItemModel* self, int row) {
	QList<QStandardItem *> _ret = self->takeRow(static_cast<int>(row));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QStandardItemModel_TakeColumn(QStandardItemModel* self, int column) {
	QList<QStandardItem *> _ret = self->takeColumn(static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
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

struct miqt_array* QStandardItemModel_FindItems(const QStandardItemModel* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QStandardItem *> _ret = self->findItems(text_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

int QStandardItemModel_SortRole(const QStandardItemModel* self) {
	return self->sortRole();
}

void QStandardItemModel_SetSortRole(QStandardItemModel* self, int role) {
	self->setSortRole(static_cast<int>(role));
}

struct miqt_array* QStandardItemModel_MimeTypes(const QStandardItemModel* self) {
	QStringList _ret = self->mimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QMimeData* QStandardItemModel_MimeData(const QStandardItemModel* self, struct miqt_array* /* of QModelIndex* */ indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes->len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes->data);
	for(size_t i = 0; i < indexes->len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QStandardItemModel_DropMimeData(QStandardItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

void QStandardItemModel_ItemChanged(QStandardItemModel* self, QStandardItem* item) {
	self->itemChanged(item);
}

void QStandardItemModel_connect_ItemChanged(QStandardItemModel* self, intptr_t slot) {
	QStandardItemModel::connect(self, static_cast<void (QStandardItemModel::*)(QStandardItem*)>(&QStandardItemModel::itemChanged), self, [=](QStandardItem* item) {
		QStandardItem* sigval1 = item;
		miqt_exec_callback_QStandardItemModel_ItemChanged(slot, sigval1);
	});
}

struct miqt_string QStandardItemModel_Tr2(const char* s, const char* c) {
	QString _ret = QStandardItemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStandardItemModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStandardItemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QStandardItemModel_Index3(const QStandardItemModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
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
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QStandardItemModel_SetData3(QStandardItemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QStandardItemModel_HeaderData3(const QStandardItemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QStandardItemModel_SetHeaderData4(QStandardItemModel* self, int section, int orientation, QVariant* value, int role) {
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

void QStandardItemModel_Sort2(QStandardItemModel* self, int column, int order) {
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

struct miqt_array* QStandardItemModel_FindItems2(const QStandardItemModel* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QStandardItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QStandardItemModel_FindItems3(const QStandardItemModel* self, struct miqt_string text, int flags, int column) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QStandardItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags), static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QStandardItemModel_Delete(QStandardItemModel* self) {
	delete self;
}

