#include <QAbstractItemModel>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransposeProxyModel>
#include <QVariant>
#include "qtransposeproxymodel.h"

#include "gen_qtransposeproxymodel.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTransposeProxyModel* QTransposeProxyModel_new() {
	return new QTransposeProxyModel();
}

QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent) {
	return new QTransposeProxyModel(parent);
}

QMetaObject* QTransposeProxyModel_MetaObject(QTransposeProxyModel* self) {
	return (QMetaObject*) const_cast<const QTransposeProxyModel*>(self)->metaObject();
}

void QTransposeProxyModel_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTransposeProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTransposeProxyModel_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTransposeProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel) {
	self->setSourceModel(newSourceModel);
}

int QTransposeProxyModel_RowCount(QTransposeProxyModel* self) {
	return const_cast<const QTransposeProxyModel*>(self)->rowCount();
}

int QTransposeProxyModel_ColumnCount(QTransposeProxyModel* self) {
	return const_cast<const QTransposeProxyModel*>(self)->columnCount();
}

QVariant* QTransposeProxyModel_HeaderData(QTransposeProxyModel* self, int section, uintptr_t orientation) {
	QVariant ret = const_cast<const QTransposeProxyModel*>(self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, uintptr_t orientation, QVariant* value) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value);
}

QSize* QTransposeProxyModel_Span(QTransposeProxyModel* self, QModelIndex* index) {
	QSize ret = const_cast<const QTransposeProxyModel*>(self)->span(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QModelIndex* QTransposeProxyModel_MapFromSource(QTransposeProxyModel* self, QModelIndex* sourceIndex) {
	QModelIndex ret = const_cast<const QTransposeProxyModel*>(self)->mapFromSource(*sourceIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QTransposeProxyModel_MapToSource(QTransposeProxyModel* self, QModelIndex* proxyIndex) {
	QModelIndex ret = const_cast<const QTransposeProxyModel*>(self)->mapToSource(*proxyIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QTransposeProxyModel_Parent(QTransposeProxyModel* self, QModelIndex* index) {
	QModelIndex ret = const_cast<const QTransposeProxyModel*>(self)->parent(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QTransposeProxyModel_Index(QTransposeProxyModel* self, int row, int column) {
	QModelIndex ret = const_cast<const QTransposeProxyModel*>(self)->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

bool QTransposeProxyModel_InsertRows(QTransposeProxyModel* self, int row, int count) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count));
}

bool QTransposeProxyModel_RemoveRows(QTransposeProxyModel* self, int row, int count) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count));
}

bool QTransposeProxyModel_MoveRows(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QTransposeProxyModel_InsertColumns(QTransposeProxyModel* self, int column, int count) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count));
}

bool QTransposeProxyModel_RemoveColumns(QTransposeProxyModel* self, int column, int count) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count));
}

bool QTransposeProxyModel_MoveColumns(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

void QTransposeProxyModel_Sort(QTransposeProxyModel* self, int column) {
	self->sort(static_cast<int>(column));
}

void QTransposeProxyModel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTransposeProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTransposeProxyModel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTransposeProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTransposeProxyModel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTransposeProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTransposeProxyModel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTransposeProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QTransposeProxyModel_RowCount1(QTransposeProxyModel* self, QModelIndex* parent) {
	return const_cast<const QTransposeProxyModel*>(self)->rowCount(*parent);
}

int QTransposeProxyModel_ColumnCount1(QTransposeProxyModel* self, QModelIndex* parent) {
	return const_cast<const QTransposeProxyModel*>(self)->columnCount(*parent);
}

QVariant* QTransposeProxyModel_HeaderData3(QTransposeProxyModel* self, int section, uintptr_t orientation, int role) {
	QVariant ret = const_cast<const QTransposeProxyModel*>(self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QTransposeProxyModel_SetHeaderData4(QTransposeProxyModel* self, int section, uintptr_t orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

QModelIndex* QTransposeProxyModel_Index3(QTransposeProxyModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex ret = const_cast<const QTransposeProxyModel*>(self)->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

bool QTransposeProxyModel_InsertRows3(QTransposeProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_RemoveRows3(QTransposeProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_InsertColumns3(QTransposeProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_RemoveColumns3(QTransposeProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

void QTransposeProxyModel_Sort2(QTransposeProxyModel* self, int column, uintptr_t order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTransposeProxyModel_Delete(QTransposeProxyModel* self) {
	delete self;
}

