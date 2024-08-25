#include "gen_qabstractproxymodel.h"
#include "qabstractproxymodel.h"

#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QSize>
#include <QString>
#include <QVariant>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractProxyModel_MetaObject(QAbstractProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void QAbstractProxyModel_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractProxyModel_TrUtf8(char* s, char** _out, int* _out_Strlen) {
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
	return self->sourceModel();
}

QModelIndex* QAbstractProxyModel_MapToSource(QAbstractProxyModel* self, QModelIndex* proxyIndex) {
	QModelIndex ret = self->mapToSource(*proxyIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QAbstractProxyModel_MapFromSource(QAbstractProxyModel* self, QModelIndex* sourceIndex) {
	QModelIndex ret = self->mapFromSource(*sourceIndex);
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
	QVariant ret = self->data(*proxyIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

QModelIndex* QAbstractProxyModel_Buddy(QAbstractProxyModel* self, QModelIndex* index) {
	QModelIndex ret = self->buddy(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

bool QAbstractProxyModel_CanFetchMore(QAbstractProxyModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

QSize* QAbstractProxyModel_Span(QAbstractProxyModel* self, QModelIndex* index) {
	QSize ret = self->span(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

bool QAbstractProxyModel_HasChildren(QAbstractProxyModel* self) {
	return self->hasChildren();
}

QModelIndex* QAbstractProxyModel_Sibling(QAbstractProxyModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex ret = self->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QMimeData* QAbstractProxyModel_MimeData(QAbstractProxyModel* self, QModelIndex** indexes, size_t indexes_len) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes_len);
	for(size_t i = 0; i < indexes_len; ++i) {
		indexes_QList.push_back(*(indexes[i]));
	}
	return self->mimeData(indexes_QList);
}

void QAbstractProxyModel_MimeTypes(QAbstractProxyModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
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

void QAbstractProxyModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractProxyModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractProxyModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractProxyModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QVariant* QAbstractProxyModel_Data2(QAbstractProxyModel* self, QModelIndex* proxyIndex, int role) {
	QVariant ret = self->data(*proxyIndex, static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QAbstractProxyModel_SetData3(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

bool QAbstractProxyModel_HasChildren1(QAbstractProxyModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

void QAbstractProxyModel_Delete(QAbstractProxyModel* self) {
	delete self;
}

