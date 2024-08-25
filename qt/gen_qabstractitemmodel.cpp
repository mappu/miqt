#include "gen_qabstractitemmodel.h"
#include "qabstractitemmodel.h"

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
#include <QVariant>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QModelIndex* QModelIndex_new() {
	return new QModelIndex();
}

QModelIndex* QModelIndex_new2(QModelIndex* param1) {
	return new QModelIndex(*param1);
}

int QModelIndex_Row(QModelIndex* self) {
	return self->row();
}

int QModelIndex_Column(QModelIndex* self) {
	return self->column();
}

uintptr_t QModelIndex_InternalId(QModelIndex* self) {
	return self->internalId();
}

QModelIndex* QModelIndex_Parent(QModelIndex* self) {
	QModelIndex ret = self->parent();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QModelIndex_Sibling(QModelIndex* self, int row, int column) {
	QModelIndex ret = self->sibling(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QModelIndex_SiblingAtColumn(QModelIndex* self, int column) {
	QModelIndex ret = self->siblingAtColumn(static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QModelIndex_SiblingAtRow(QModelIndex* self, int row) {
	QModelIndex ret = self->siblingAtRow(static_cast<int>(row));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QModelIndex_Child(QModelIndex* self, int row, int column) {
	QModelIndex ret = self->child(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QVariant* QModelIndex_Data(QModelIndex* self) {
	QVariant ret = self->data();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QAbstractItemModel* QModelIndex_Model(QModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QModelIndex_IsValid(QModelIndex* self) {
	return self->isValid();
}

bool QModelIndex_OperatorEqual(QModelIndex* self, QModelIndex* other) {
	return self->operator==(*other);
}

bool QModelIndex_OperatorNotEqual(QModelIndex* self, QModelIndex* other) {
	return self->operator!=(*other);
}

bool QModelIndex_OperatorLesser(QModelIndex* self, QModelIndex* other) {
	return self->operator<(*other);
}

QVariant* QModelIndex_Data1(QModelIndex* self, int role) {
	QVariant ret = self->data(static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
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

bool QPersistentModelIndex_OperatorLesser(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return self->operator<(*other);
}

bool QPersistentModelIndex_OperatorEqual(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return self->operator==(*other);
}

bool QPersistentModelIndex_OperatorNotEqual(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return self->operator!=(*other);
}

void QPersistentModelIndex_OperatorAssign(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->operator=(*other);
}

void QPersistentModelIndex_Swap(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->swap(*other);
}

bool QPersistentModelIndex_OperatorEqualWithOther(QPersistentModelIndex* self, QModelIndex* other) {
	return self->operator==(*other);
}

bool QPersistentModelIndex_OperatorNotEqualWithOther(QPersistentModelIndex* self, QModelIndex* other) {
	return self->operator!=(*other);
}

void QPersistentModelIndex_OperatorAssignWithOther(QPersistentModelIndex* self, QModelIndex* other) {
	self->operator=(*other);
}

int QPersistentModelIndex_Row(QPersistentModelIndex* self) {
	return self->row();
}

int QPersistentModelIndex_Column(QPersistentModelIndex* self) {
	return self->column();
}

uintptr_t QPersistentModelIndex_InternalId(QPersistentModelIndex* self) {
	return self->internalId();
}

QModelIndex* QPersistentModelIndex_Parent(QPersistentModelIndex* self) {
	QModelIndex ret = self->parent();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QPersistentModelIndex_Sibling(QPersistentModelIndex* self, int row, int column) {
	QModelIndex ret = self->sibling(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QPersistentModelIndex_Child(QPersistentModelIndex* self, int row, int column) {
	QModelIndex ret = self->child(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QVariant* QPersistentModelIndex_Data(QPersistentModelIndex* self) {
	QVariant ret = self->data();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QAbstractItemModel* QPersistentModelIndex_Model(QPersistentModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QPersistentModelIndex_IsValid(QPersistentModelIndex* self) {
	return self->isValid();
}

QVariant* QPersistentModelIndex_Data1(QPersistentModelIndex* self, int role) {
	QVariant ret = self->data(static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QPersistentModelIndex_Delete(QPersistentModelIndex* self) {
	delete self;
}

QMetaObject* QAbstractItemModel_MetaObject(QAbstractItemModel* self) {
	return (QMetaObject*) self->metaObject();
}

void QAbstractItemModel_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemModel_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QAbstractItemModel_HasIndex(QAbstractItemModel* self, int row, int column) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column));
}

QModelIndex* QAbstractItemModel_Index(QAbstractItemModel* self, int row, int column) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QAbstractItemModel_Parent(QAbstractItemModel* self, QModelIndex* child) {
	QModelIndex ret = self->parent(*child);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QAbstractItemModel_Sibling(QAbstractItemModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex ret = self->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QAbstractItemModel_RowCount(QAbstractItemModel* self) {
	return self->rowCount();
}

int QAbstractItemModel_ColumnCount(QAbstractItemModel* self) {
	return self->columnCount();
}

bool QAbstractItemModel_HasChildren(QAbstractItemModel* self) {
	return self->hasChildren();
}

QVariant* QAbstractItemModel_Data(QAbstractItemModel* self, QModelIndex* index) {
	QVariant ret = self->data(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QAbstractItemModel_SetData(QAbstractItemModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

void QAbstractItemModel_MimeTypes(QAbstractItemModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->mimeTypes();
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

QMimeData* QAbstractItemModel_MimeData(QAbstractItemModel* self, QModelIndex** indexes, size_t indexes_len) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes_len);
	for(size_t i = 0; i < indexes_len; ++i) {
		indexes_QList.push_back(*(indexes[i]));
	}
	return self->mimeData(indexes_QList);
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

bool QAbstractItemModel_CanFetchMore(QAbstractItemModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

QModelIndex* QAbstractItemModel_Buddy(QAbstractItemModel* self, QModelIndex* index) {
	QModelIndex ret = self->buddy(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QSize* QAbstractItemModel_Span(QAbstractItemModel* self, QModelIndex* index) {
	QSize ret = self->span(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QAbstractItemModel_DataChanged(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight) {
	self->dataChanged(*topLeft, *bottomRight);
}

bool QAbstractItemModel_Submit(QAbstractItemModel* self) {
	return self->submit();
}

void QAbstractItemModel_Revert(QAbstractItemModel* self) {
	self->revert();
}

void QAbstractItemModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractItemModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractItemModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QAbstractItemModel_HasIndex3(QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column), *parent);
}

QModelIndex* QAbstractItemModel_Index3(QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QAbstractItemModel_RowCount1(QAbstractItemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QAbstractItemModel_ColumnCount1(QAbstractItemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QAbstractItemModel_HasChildren1(QAbstractItemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QAbstractItemModel_Data2(QAbstractItemModel* self, QModelIndex* index, int role) {
	QVariant ret = self->data(*index, static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QAbstractItemModel_SetData3(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
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

void QAbstractItemModel_DataChanged3(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles, size_t roles_len) {
	QVector<int> roles_QList;
	roles_QList.reserve(roles_len);
	for(size_t i = 0; i < roles_len; ++i) {
		roles_QList.push_back(roles[i]);
	}
	self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void QAbstractItemModel_connect_DataChanged3(QAbstractItemModel* self, void* slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QVector<int>&)>(&QAbstractItemModel::dataChanged), self, [=](const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractItemModel_Delete(QAbstractItemModel* self) {
	delete self;
}

QMetaObject* QAbstractTableModel_MetaObject(QAbstractTableModel* self) {
	return (QMetaObject*) self->metaObject();
}

void QAbstractTableModel_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTableModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTableModel_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTableModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QAbstractTableModel_Index(QAbstractTableModel* self, int row, int column) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QAbstractTableModel_Sibling(QAbstractTableModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex ret = self->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QAbstractTableModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTableModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTableModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTableModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTableModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTableModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTableModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTableModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QAbstractTableModel_Index3(QAbstractTableModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QAbstractTableModel_Delete(QAbstractTableModel* self) {
	delete self;
}

QMetaObject* QAbstractListModel_MetaObject(QAbstractListModel* self) {
	return (QMetaObject*) self->metaObject();
}

void QAbstractListModel_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractListModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractListModel_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractListModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QAbstractListModel_Index(QAbstractListModel* self, int row) {
	QModelIndex ret = self->index(static_cast<int>(row));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QAbstractListModel_Sibling(QAbstractListModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex ret = self->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QAbstractListModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractListModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractListModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractListModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractListModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractListModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractListModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractListModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QAbstractListModel_Index2(QAbstractListModel* self, int row, int column) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QAbstractListModel_Index3(QAbstractListModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QAbstractListModel_Delete(QAbstractListModel* self) {
	delete self;
}

