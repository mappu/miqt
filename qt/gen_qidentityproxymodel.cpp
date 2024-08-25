#include "gen_qidentityproxymodel.h"
#include "qidentityproxymodel.h"

#include <QAbstractItemModel>
#include <QIdentityProxyModel>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QIdentityProxyModel* QIdentityProxyModel_new() {
	return new QIdentityProxyModel();
}

QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent) {
	return new QIdentityProxyModel(parent);
}

QMetaObject* QIdentityProxyModel_MetaObject(QIdentityProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void QIdentityProxyModel_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QIdentityProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIdentityProxyModel_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QIdentityProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QIdentityProxyModel_ColumnCount(QIdentityProxyModel* self) {
	return self->columnCount();
}

QModelIndex* QIdentityProxyModel_Index(QIdentityProxyModel* self, int row, int column) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QIdentityProxyModel_MapFromSource(QIdentityProxyModel* self, QModelIndex* sourceIndex) {
	QModelIndex ret = self->mapFromSource(*sourceIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QIdentityProxyModel_MapToSource(QIdentityProxyModel* self, QModelIndex* proxyIndex) {
	QModelIndex ret = self->mapToSource(*proxyIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QIdentityProxyModel_Parent(QIdentityProxyModel* self, QModelIndex* child) {
	QModelIndex ret = self->parent(*child);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QIdentityProxyModel_RowCount(QIdentityProxyModel* self) {
	return self->rowCount();
}

QModelIndex* QIdentityProxyModel_Sibling(QIdentityProxyModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex ret = self->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count));
}

bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count));
}

bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count));
}

bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count));
}

bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

void QIdentityProxyModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QIdentityProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIdentityProxyModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QIdentityProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIdentityProxyModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QIdentityProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIdentityProxyModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QIdentityProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QIdentityProxyModel_ColumnCount1(QIdentityProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QModelIndex* QIdentityProxyModel_Index3(QIdentityProxyModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QIdentityProxyModel_RowCount1(QIdentityProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

bool QIdentityProxyModel_InsertColumns3(QIdentityProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_InsertRows3(QIdentityProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_RemoveColumns3(QIdentityProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_RemoveRows3(QIdentityProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

void QIdentityProxyModel_Delete(QIdentityProxyModel* self) {
	delete self;
}
