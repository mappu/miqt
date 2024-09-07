#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include "qabstractproxymodel.h"

#include "gen_qabstractproxymodel.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractProxyModel_MetaObject(QAbstractProxyModel* self) {
	return (QMetaObject*) const_cast<const QAbstractProxyModel*>(self)->metaObject();
}

void QAbstractProxyModel_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractProxyModel_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

QAbstractItemModel* QAbstractProxyModel_SourceModel(QAbstractProxyModel* self) {
	return const_cast<const QAbstractProxyModel*>(self)->sourceModel();
}

QModelIndex* QAbstractProxyModel_MapToSource(QAbstractProxyModel* self, QModelIndex* proxyIndex) {
	QModelIndex ret = const_cast<const QAbstractProxyModel*>(self)->mapToSource(*proxyIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QAbstractProxyModel_MapFromSource(QAbstractProxyModel* self, QModelIndex* sourceIndex) {
	QModelIndex ret = const_cast<const QAbstractProxyModel*>(self)->mapFromSource(*sourceIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

bool QAbstractProxyModel_Submit(QAbstractProxyModel* self) {
	return self->submit();
}

void QAbstractProxyModel_Revert(QAbstractProxyModel* self) {
	self->revert();
}

QVariant* QAbstractProxyModel_Data(QAbstractProxyModel* self, QModelIndex* proxyIndex) {
	QVariant ret = const_cast<const QAbstractProxyModel*>(self)->data(*proxyIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QAbstractProxyModel_HeaderData(QAbstractProxyModel* self, int section, uintptr_t orientation) {
	QVariant ret = const_cast<const QAbstractProxyModel*>(self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

int QAbstractProxyModel_Flags(QAbstractProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags ret = const_cast<const QAbstractProxyModel*>(self)->flags(*index);
	return static_cast<int>(ret);
}

bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

bool QAbstractProxyModel_SetHeaderData(QAbstractProxyModel* self, int section, uintptr_t orientation, QVariant* value) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value);
}

QModelIndex* QAbstractProxyModel_Buddy(QAbstractProxyModel* self, QModelIndex* index) {
	QModelIndex ret = const_cast<const QAbstractProxyModel*>(self)->buddy(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

bool QAbstractProxyModel_CanFetchMore(QAbstractProxyModel* self, QModelIndex* parent) {
	return const_cast<const QAbstractProxyModel*>(self)->canFetchMore(*parent);
}

void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

void QAbstractProxyModel_Sort(QAbstractProxyModel* self, int column) {
	self->sort(static_cast<int>(column));
}

QSize* QAbstractProxyModel_Span(QAbstractProxyModel* self, QModelIndex* index) {
	QSize ret = const_cast<const QAbstractProxyModel*>(self)->span(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

bool QAbstractProxyModel_HasChildren(QAbstractProxyModel* self) {
	return const_cast<const QAbstractProxyModel*>(self)->hasChildren();
}

QModelIndex* QAbstractProxyModel_Sibling(QAbstractProxyModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex ret = const_cast<const QAbstractProxyModel*>(self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QMimeData* QAbstractProxyModel_MimeData(QAbstractProxyModel* self, QModelIndex** indexes, size_t indexes_len) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes_len);
	for(size_t i = 0; i < indexes_len; ++i) {
		indexes_QList.push_back(*(indexes[i]));
	}
	return const_cast<const QAbstractProxyModel*>(self)->mimeData(indexes_QList);
}

bool QAbstractProxyModel_CanDropMimeData(QAbstractProxyModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent) {
	return const_cast<const QAbstractProxyModel*>(self)->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractProxyModel_DropMimeData(QAbstractProxyModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

void QAbstractProxyModel_MimeTypes(QAbstractProxyModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QAbstractProxyModel*>(self)->mimeTypes();
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

int QAbstractProxyModel_SupportedDragActions(QAbstractProxyModel* self) {
	Qt::DropActions ret = const_cast<const QAbstractProxyModel*>(self)->supportedDragActions();
	return static_cast<int>(ret);
}

int QAbstractProxyModel_SupportedDropActions(QAbstractProxyModel* self) {
	Qt::DropActions ret = const_cast<const QAbstractProxyModel*>(self)->supportedDropActions();
	return static_cast<int>(ret);
}

void QAbstractProxyModel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractProxyModel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractProxyModel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractProxyModel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QVariant* QAbstractProxyModel_Data2(QAbstractProxyModel* self, QModelIndex* proxyIndex, int role) {
	QVariant ret = const_cast<const QAbstractProxyModel*>(self)->data(*proxyIndex, static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QAbstractProxyModel_HeaderData3(QAbstractProxyModel* self, int section, uintptr_t orientation, int role) {
	QVariant ret = const_cast<const QAbstractProxyModel*>(self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QAbstractProxyModel_SetData3(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

bool QAbstractProxyModel_SetHeaderData4(QAbstractProxyModel* self, int section, uintptr_t orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

void QAbstractProxyModel_Sort2(QAbstractProxyModel* self, int column, uintptr_t order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QAbstractProxyModel_HasChildren1(QAbstractProxyModel* self, QModelIndex* parent) {
	return const_cast<const QAbstractProxyModel*>(self)->hasChildren(*parent);
}

void QAbstractProxyModel_Delete(QAbstractProxyModel* self) {
	delete self;
}

