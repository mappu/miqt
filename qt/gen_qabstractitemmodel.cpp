#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QAbstractTableModel>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QPersistentModelIndex>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include "qabstractitemmodel.h"
#include "gen_qabstractitemmodel.h"
#include "_cgo_export.h"

QModelIndex* QModelIndex_new() {
	return new QModelIndex();
}

QModelIndex* QModelIndex_new2(QModelIndex* param1) {
	return new QModelIndex(*param1);
}

int QModelIndex_Row(const QModelIndex* self) {
	return self->row();
}

int QModelIndex_Column(const QModelIndex* self) {
	return self->column();
}

uintptr_t QModelIndex_InternalId(const QModelIndex* self) {
	quintptr _ret = self->internalId();
	return static_cast<uintptr_t>(_ret);
}

QModelIndex* QModelIndex_Parent(const QModelIndex* self) {
	QModelIndex _ret = self->parent();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QModelIndex_Sibling(const QModelIndex* self, int row, int column) {
	QModelIndex _ret = self->sibling(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QModelIndex_SiblingAtColumn(const QModelIndex* self, int column) {
	QModelIndex _ret = self->siblingAtColumn(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QModelIndex_SiblingAtRow(const QModelIndex* self, int row) {
	QModelIndex _ret = self->siblingAtRow(static_cast<int>(row));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QModelIndex_Child(const QModelIndex* self, int row, int column) {
	QModelIndex _ret = self->child(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QVariant* QModelIndex_Data(const QModelIndex* self) {
	QVariant _ret = self->data();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

int QModelIndex_Flags(const QModelIndex* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QAbstractItemModel* QModelIndex_Model(const QModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QModelIndex_IsValid(const QModelIndex* self) {
	return self->isValid();
}

bool QModelIndex_OperatorEqual(const QModelIndex* self, QModelIndex* other) {
	return self->operator==(*other);
}

bool QModelIndex_OperatorNotEqual(const QModelIndex* self, QModelIndex* other) {
	return self->operator!=(*other);
}

bool QModelIndex_OperatorLesser(const QModelIndex* self, QModelIndex* other) {
	return self->operator<(*other);
}

QVariant* QModelIndex_Data1(const QModelIndex* self, int role) {
	QVariant _ret = self->data(static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

void QModelIndex_Delete(QModelIndex* self) {
	delete self;
}

QPersistentModelIndex* QPersistentModelIndex_new() {
	return new QPersistentModelIndex();
}

QPersistentModelIndex* QPersistentModelIndex_new2(QModelIndex* index) {
	return new QPersistentModelIndex(*index);
}

QPersistentModelIndex* QPersistentModelIndex_new3(QPersistentModelIndex* other) {
	return new QPersistentModelIndex(*other);
}

bool QPersistentModelIndex_OperatorLesser(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return self->operator<(*other);
}

bool QPersistentModelIndex_OperatorEqual(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return self->operator==(*other);
}

bool QPersistentModelIndex_OperatorNotEqual(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return self->operator!=(*other);
}

void QPersistentModelIndex_OperatorAssign(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->operator=(*other);
}

void QPersistentModelIndex_Swap(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->swap(*other);
}

bool QPersistentModelIndex_OperatorEqualWithOther(const QPersistentModelIndex* self, QModelIndex* other) {
	return self->operator==(*other);
}

bool QPersistentModelIndex_OperatorNotEqualWithOther(const QPersistentModelIndex* self, QModelIndex* other) {
	return self->operator!=(*other);
}

void QPersistentModelIndex_OperatorAssignWithOther(QPersistentModelIndex* self, QModelIndex* other) {
	self->operator=(*other);
}

int QPersistentModelIndex_Row(const QPersistentModelIndex* self) {
	return self->row();
}

int QPersistentModelIndex_Column(const QPersistentModelIndex* self) {
	return self->column();
}

uintptr_t QPersistentModelIndex_InternalId(const QPersistentModelIndex* self) {
	quintptr _ret = self->internalId();
	return static_cast<uintptr_t>(_ret);
}

QModelIndex* QPersistentModelIndex_Parent(const QPersistentModelIndex* self) {
	QModelIndex _ret = self->parent();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QPersistentModelIndex_Sibling(const QPersistentModelIndex* self, int row, int column) {
	QModelIndex _ret = self->sibling(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QPersistentModelIndex_Child(const QPersistentModelIndex* self, int row, int column) {
	QModelIndex _ret = self->child(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QVariant* QPersistentModelIndex_Data(const QPersistentModelIndex* self) {
	QVariant _ret = self->data();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

int QPersistentModelIndex_Flags(const QPersistentModelIndex* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QAbstractItemModel* QPersistentModelIndex_Model(const QPersistentModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QPersistentModelIndex_IsValid(const QPersistentModelIndex* self) {
	return self->isValid();
}

QVariant* QPersistentModelIndex_Data1(const QPersistentModelIndex* self, int role) {
	QVariant _ret = self->data(static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

void QPersistentModelIndex_Delete(QPersistentModelIndex* self) {
	delete self;
}

QMetaObject* QAbstractItemModel_MetaObject(const QAbstractItemModel* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QAbstractItemModel_Tr(const char* s) {
	QString _ret = QAbstractItemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractItemModel_TrUtf8(const char* s) {
	QString _ret = QAbstractItemModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QAbstractItemModel_HasIndex(const QAbstractItemModel* self, int row, int column) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column));
}

QModelIndex* QAbstractItemModel_Index(const QAbstractItemModel* self, int row, int column) {
	QModelIndex _ret = self->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QAbstractItemModel_Parent(const QAbstractItemModel* self, QModelIndex* child) {
	QModelIndex _ret = self->parent(*child);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QAbstractItemModel_Sibling(const QAbstractItemModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex _ret = self->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

int QAbstractItemModel_RowCount(const QAbstractItemModel* self) {
	return self->rowCount();
}

int QAbstractItemModel_ColumnCount(const QAbstractItemModel* self) {
	return self->columnCount();
}

bool QAbstractItemModel_HasChildren(const QAbstractItemModel* self) {
	return self->hasChildren();
}

QVariant* QAbstractItemModel_Data(const QAbstractItemModel* self, QModelIndex* index) {
	QVariant _ret = self->data(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

bool QAbstractItemModel_SetData(QAbstractItemModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

QVariant* QAbstractItemModel_HeaderData(const QAbstractItemModel* self, int section, uintptr_t orientation) {
	QVariant _ret = self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

bool QAbstractItemModel_SetHeaderData(QAbstractItemModel* self, int section, uintptr_t orientation, QVariant* value) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value);
}

struct miqt_array* QAbstractItemModel_MimeTypes(const QAbstractItemModel* self) {
	QStringList _ret = self->mimeTypes();
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QMimeData* QAbstractItemModel_MimeData(const QAbstractItemModel* self, struct miqt_array* /* of QModelIndex */ indexes) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes->len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes->data);
	for(size_t i = 0; i < indexes->len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QAbstractItemModel_CanDropMimeData(const QAbstractItemModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_DropMimeData(QAbstractItemModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractItemModel_SupportedDropActions(const QAbstractItemModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

int QAbstractItemModel_SupportedDragActions(const QAbstractItemModel* self) {
	Qt::DropActions _ret = self->supportedDragActions();
	return static_cast<int>(_ret);
}

bool QAbstractItemModel_InsertRows(QAbstractItemModel* self, int row, int count) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count));
}

bool QAbstractItemModel_InsertColumns(QAbstractItemModel* self, int column, int count) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count));
}

bool QAbstractItemModel_RemoveRows(QAbstractItemModel* self, int row, int count) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count));
}

bool QAbstractItemModel_RemoveColumns(QAbstractItemModel* self, int column, int count) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count));
}

bool QAbstractItemModel_MoveRows(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_MoveColumns(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_InsertRow(QAbstractItemModel* self, int row) {
	return self->insertRow(static_cast<int>(row));
}

bool QAbstractItemModel_InsertColumn(QAbstractItemModel* self, int column) {
	return self->insertColumn(static_cast<int>(column));
}

bool QAbstractItemModel_RemoveRow(QAbstractItemModel* self, int row) {
	return self->removeRow(static_cast<int>(row));
}

bool QAbstractItemModel_RemoveColumn(QAbstractItemModel* self, int column) {
	return self->removeColumn(static_cast<int>(column));
}

bool QAbstractItemModel_MoveRow(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRow(*sourceParent, static_cast<int>(sourceRow), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_MoveColumn(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumn(*sourceParent, static_cast<int>(sourceColumn), *destinationParent, static_cast<int>(destinationChild));
}

void QAbstractItemModel_FetchMore(QAbstractItemModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

bool QAbstractItemModel_CanFetchMore(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

int QAbstractItemModel_Flags(const QAbstractItemModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

void QAbstractItemModel_Sort(QAbstractItemModel* self, int column) {
	self->sort(static_cast<int>(column));
}

QModelIndex* QAbstractItemModel_Buddy(const QAbstractItemModel* self, QModelIndex* index) {
	QModelIndex _ret = self->buddy(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

struct miqt_array* QAbstractItemModel_Match(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value) {
	QModelIndexList _ret = self->match(*start, static_cast<int>(role), *value);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QSize* QAbstractItemModel_Span(const QAbstractItemModel* self, QModelIndex* index) {
	QSize _ret = self->span(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

bool QAbstractItemModel_CheckIndex(const QAbstractItemModel* self, QModelIndex* index) {
	return self->checkIndex(*index);
}

void QAbstractItemModel_DataChanged(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight) {
	self->dataChanged(*topLeft, *bottomRight);
}

void QAbstractItemModel_connect_DataChanged(QAbstractItemModel* self, void* slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QVector<int>&)>(&QAbstractItemModel::dataChanged), self, [=](const QModelIndex& topLeft, const QModelIndex& bottomRight) {
		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		miqt_exec_callback_QAbstractItemModel_DataChanged(slot, sigval1, sigval2);
	});
}

void QAbstractItemModel_HeaderDataChanged(QAbstractItemModel* self, uintptr_t orientation, int first, int last) {
	self->headerDataChanged(static_cast<Qt::Orientation>(orientation), static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_connect_HeaderDataChanged(QAbstractItemModel* self, void* slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(Qt::Orientation, int, int)>(&QAbstractItemModel::headerDataChanged), self, [=](Qt::Orientation orientation, int first, int last) {
		Qt::Orientation orientation_ret = orientation;
		uintptr_t sigval1 = static_cast<uintptr_t>(orientation_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_HeaderDataChanged(slot, sigval1, sigval2, sigval3);
	});
}

void QAbstractItemModel_LayoutChanged(QAbstractItemModel* self) {
	self->layoutChanged();
}

void QAbstractItemModel_connect_LayoutChanged(QAbstractItemModel* self, void* slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [=]() {
		miqt_exec_callback_QAbstractItemModel_LayoutChanged(slot);
	});
}

void QAbstractItemModel_LayoutAboutToBeChanged(QAbstractItemModel* self) {
	self->layoutAboutToBeChanged();
}

void QAbstractItemModel_connect_LayoutAboutToBeChanged(QAbstractItemModel* self, void* slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [=]() {
		miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged(slot);
	});
}

bool QAbstractItemModel_Submit(QAbstractItemModel* self) {
	return self->submit();
}

void QAbstractItemModel_Revert(QAbstractItemModel* self) {
	self->revert();
}

struct miqt_string* QAbstractItemModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractItemModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractItemModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractItemModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractItemModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QAbstractItemModel_HasIndex3(const QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column), *parent);
}

QModelIndex* QAbstractItemModel_Index3(const QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex _ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

int QAbstractItemModel_RowCount1(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QAbstractItemModel_ColumnCount1(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QAbstractItemModel_HasChildren1(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QAbstractItemModel_Data2(const QAbstractItemModel* self, QModelIndex* index, int role) {
	QVariant _ret = self->data(*index, static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

bool QAbstractItemModel_SetData3(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QAbstractItemModel_HeaderData3(const QAbstractItemModel* self, int section, uintptr_t orientation, int role) {
	QVariant _ret = self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

bool QAbstractItemModel_SetHeaderData4(QAbstractItemModel* self, int section, uintptr_t orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QAbstractItemModel_InsertRows3(QAbstractItemModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_InsertColumns3(QAbstractItemModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_RemoveRows3(QAbstractItemModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_RemoveColumns3(QAbstractItemModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_InsertRow2(QAbstractItemModel* self, int row, QModelIndex* parent) {
	return self->insertRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_InsertColumn2(QAbstractItemModel* self, int column, QModelIndex* parent) {
	return self->insertColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_RemoveRow2(QAbstractItemModel* self, int row, QModelIndex* parent) {
	return self->removeRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_RemoveColumn2(QAbstractItemModel* self, int column, QModelIndex* parent) {
	return self->removeColumn(static_cast<int>(column), *parent);
}

void QAbstractItemModel_Sort2(QAbstractItemModel* self, int column, uintptr_t order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_array* QAbstractItemModel_Match4(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits) {
	QModelIndexList _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QAbstractItemModel_Match5(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

bool QAbstractItemModel_CheckIndex2(const QAbstractItemModel* self, QModelIndex* index, int options) {
	return self->checkIndex(*index, static_cast<QAbstractItemModel::CheckIndexOptions>(options));
}

void QAbstractItemModel_DataChanged3(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array* /* of int */ roles) {
	QVector<int> roles_QList;
	roles_QList.reserve(roles->len);
	int* roles_arr = static_cast<int*>(roles->data);
	for(size_t i = 0; i < roles->len; ++i) {
		roles_QList.push_back(roles_arr[i]);
	}
	self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void QAbstractItemModel_connect_DataChanged3(QAbstractItemModel* self, void* slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QVector<int>&)>(&QAbstractItemModel::dataChanged), self, [=](const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) {
		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		const QVector<int>& roles_ret = roles;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.length()));
		for (size_t i = 0, e = roles_ret.length(); i < e; ++i) {
			roles_arr[i] = roles_ret[i];
		}
		struct miqt_array* roles_out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
		roles_out->len = roles_ret.length();
		roles_out->data = static_cast<void*>(roles_arr);
		struct miqt_array* sigval3 = roles_out;
		miqt_exec_callback_QAbstractItemModel_DataChanged3(slot, sigval1, sigval2, sigval3);
	});
}

void QAbstractItemModel_LayoutChanged1(QAbstractItemModel* self, struct miqt_array* /* of QPersistentModelIndex */ parents) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents->len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents->data);
	for(size_t i = 0; i < parents->len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutChanged(parents_QList);
}

void QAbstractItemModel_connect_LayoutChanged1(QAbstractItemModel* self, void* slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [=](const QList<QPersistentModelIndex>& parents) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex**) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array* parents_out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
		parents_out->len = parents_ret.length();
		parents_out->data = static_cast<void*>(parents_arr);
		struct miqt_array* sigval1 = parents_out;
		miqt_exec_callback_QAbstractItemModel_LayoutChanged1(slot, sigval1);
	});
}

void QAbstractItemModel_LayoutChanged2(QAbstractItemModel* self, struct miqt_array* /* of QPersistentModelIndex */ parents, uintptr_t hint) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents->len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents->data);
	for(size_t i = 0; i < parents->len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_connect_LayoutChanged2(QAbstractItemModel* self, void* slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [=](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex**) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array* parents_out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
		parents_out->len = parents_ret.length();
		parents_out->data = static_cast<void*>(parents_arr);
		struct miqt_array* sigval1 = parents_out;
		QAbstractItemModel::LayoutChangeHint hint_ret = hint;
		uintptr_t sigval2 = static_cast<uintptr_t>(hint_ret);
		miqt_exec_callback_QAbstractItemModel_LayoutChanged2(slot, sigval1, sigval2);
	});
}

void QAbstractItemModel_LayoutAboutToBeChanged1(QAbstractItemModel* self, struct miqt_array* /* of QPersistentModelIndex */ parents) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents->len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents->data);
	for(size_t i = 0; i < parents->len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutAboutToBeChanged(parents_QList);
}

void QAbstractItemModel_connect_LayoutAboutToBeChanged1(QAbstractItemModel* self, void* slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [=](const QList<QPersistentModelIndex>& parents) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex**) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array* parents_out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
		parents_out->len = parents_ret.length();
		parents_out->data = static_cast<void*>(parents_arr);
		struct miqt_array* sigval1 = parents_out;
		miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged1(slot, sigval1);
	});
}

void QAbstractItemModel_LayoutAboutToBeChanged2(QAbstractItemModel* self, struct miqt_array* /* of QPersistentModelIndex */ parents, uintptr_t hint) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents->len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents->data);
	for(size_t i = 0; i < parents->len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutAboutToBeChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_connect_LayoutAboutToBeChanged2(QAbstractItemModel* self, void* slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [=](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex**) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array* parents_out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
		parents_out->len = parents_ret.length();
		parents_out->data = static_cast<void*>(parents_arr);
		struct miqt_array* sigval1 = parents_out;
		QAbstractItemModel::LayoutChangeHint hint_ret = hint;
		uintptr_t sigval2 = static_cast<uintptr_t>(hint_ret);
		miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged2(slot, sigval1, sigval2);
	});
}

void QAbstractItemModel_Delete(QAbstractItemModel* self) {
	delete self;
}

QMetaObject* QAbstractTableModel_MetaObject(const QAbstractTableModel* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QAbstractTableModel_Tr(const char* s) {
	QString _ret = QAbstractTableModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractTableModel_TrUtf8(const char* s) {
	QString _ret = QAbstractTableModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QModelIndex* QAbstractTableModel_Index(const QAbstractTableModel* self, int row, int column) {
	QModelIndex _ret = self->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QAbstractTableModel_Sibling(const QAbstractTableModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex _ret = self->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

bool QAbstractTableModel_DropMimeData(QAbstractTableModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractTableModel_Flags(const QAbstractTableModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

struct miqt_string* QAbstractTableModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractTableModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractTableModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractTableModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractTableModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractTableModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractTableModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractTableModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QModelIndex* QAbstractTableModel_Index3(const QAbstractTableModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex _ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

void QAbstractTableModel_Delete(QAbstractTableModel* self) {
	delete self;
}

QMetaObject* QAbstractListModel_MetaObject(const QAbstractListModel* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QAbstractListModel_Tr(const char* s) {
	QString _ret = QAbstractListModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractListModel_TrUtf8(const char* s) {
	QString _ret = QAbstractListModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QModelIndex* QAbstractListModel_Index(const QAbstractListModel* self, int row) {
	QModelIndex _ret = self->index(static_cast<int>(row));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QAbstractListModel_Sibling(const QAbstractListModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex _ret = self->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

bool QAbstractListModel_DropMimeData(QAbstractListModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractListModel_Flags(const QAbstractListModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

struct miqt_string* QAbstractListModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractListModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractListModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractListModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractListModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractListModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractListModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractListModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QModelIndex* QAbstractListModel_Index2(const QAbstractListModel* self, int row, int column) {
	QModelIndex _ret = self->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QAbstractListModel_Index3(const QAbstractListModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex _ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

void QAbstractListModel_Delete(QAbstractListModel* self) {
	delete self;
}

