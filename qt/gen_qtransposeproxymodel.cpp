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
#include "_cgo_export.h"

QTransposeProxyModel* QTransposeProxyModel_new() {
	return new QTransposeProxyModel();
}

QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent) {
	return new QTransposeProxyModel(parent);
}

QMetaObject* QTransposeProxyModel_MetaObject(const QTransposeProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QTransposeProxyModel_Tr(const char* s) {
	QString _ret = QTransposeProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTransposeProxyModel_TrUtf8(const char* s) {
	QString _ret = QTransposeProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel) {
	self->setSourceModel(newSourceModel);
}

int QTransposeProxyModel_RowCount(const QTransposeProxyModel* self) {
	return self->rowCount();
}

int QTransposeProxyModel_ColumnCount(const QTransposeProxyModel* self) {
	return self->columnCount();
}

QVariant* QTransposeProxyModel_HeaderData(const QTransposeProxyModel* self, int section, uintptr_t orientation) {
	QVariant _ret = self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, uintptr_t orientation, QVariant* value) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value);
}

QSize* QTransposeProxyModel_Span(const QTransposeProxyModel* self, QModelIndex* index) {
	QSize _ret = self->span(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QModelIndex* QTransposeProxyModel_MapFromSource(const QTransposeProxyModel* self, QModelIndex* sourceIndex) {
	QModelIndex _ret = self->mapFromSource(*sourceIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QTransposeProxyModel_MapToSource(const QTransposeProxyModel* self, QModelIndex* proxyIndex) {
	QModelIndex _ret = self->mapToSource(*proxyIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QTransposeProxyModel_Parent(const QTransposeProxyModel* self, QModelIndex* index) {
	QModelIndex _ret = self->parent(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

QModelIndex* QTransposeProxyModel_Index(const QTransposeProxyModel* self, int row, int column) {
	QModelIndex _ret = self->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
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

struct miqt_string* QTransposeProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QTransposeProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTransposeProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTransposeProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTransposeProxyModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QTransposeProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTransposeProxyModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTransposeProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QTransposeProxyModel_RowCount1(const QTransposeProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QTransposeProxyModel_ColumnCount1(const QTransposeProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QTransposeProxyModel_HeaderData3(const QTransposeProxyModel* self, int section, uintptr_t orientation, int role) {
	QVariant _ret = self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

bool QTransposeProxyModel_SetHeaderData4(QTransposeProxyModel* self, int section, uintptr_t orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

QModelIndex* QTransposeProxyModel_Index3(const QTransposeProxyModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex _ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
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

