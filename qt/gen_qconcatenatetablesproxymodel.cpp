#include <QAbstractItemModel>
#include <QConcatenateTablesProxyModel>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include "qconcatenatetablesproxymodel.h"

#include "gen_qconcatenatetablesproxymodel.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new() {
	return new QConcatenateTablesProxyModel();
}

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent) {
	return new QConcatenateTablesProxyModel(parent);
}

QMetaObject* QConcatenateTablesProxyModel_MetaObject(QConcatenateTablesProxyModel* self) {
	return (QMetaObject*) const_cast<const QConcatenateTablesProxyModel*>(self)->metaObject();
}

void QConcatenateTablesProxyModel_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QConcatenateTablesProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QConcatenateTablesProxyModel_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QConcatenateTablesProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QConcatenateTablesProxyModel_SourceModels(QConcatenateTablesProxyModel* self, QAbstractItemModel*** _out, size_t* _out_len) {
	QList<QAbstractItemModel*> ret = const_cast<const QConcatenateTablesProxyModel*>(self)->sourceModels();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractItemModel** __out = static_cast<QAbstractItemModel**>(malloc(sizeof(QAbstractItemModel*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QConcatenateTablesProxyModel_AddSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
	self->addSourceModel(sourceModel);
}

void QConcatenateTablesProxyModel_RemoveSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
	self->removeSourceModel(sourceModel);
}

QModelIndex* QConcatenateTablesProxyModel_MapFromSource(QConcatenateTablesProxyModel* self, QModelIndex* sourceIndex) {
	QModelIndex ret = const_cast<const QConcatenateTablesProxyModel*>(self)->mapFromSource(*sourceIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QConcatenateTablesProxyModel_MapToSource(QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex) {
	QModelIndex ret = const_cast<const QConcatenateTablesProxyModel*>(self)->mapToSource(*proxyIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QVariant* QConcatenateTablesProxyModel_Data(QConcatenateTablesProxyModel* self, QModelIndex* index) {
	QVariant ret = const_cast<const QConcatenateTablesProxyModel*>(self)->data(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QConcatenateTablesProxyModel_SetData(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

int QConcatenateTablesProxyModel_Flags(QConcatenateTablesProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags ret = const_cast<const QConcatenateTablesProxyModel*>(self)->flags(*index);
	return static_cast<int>(ret);
}

QModelIndex* QConcatenateTablesProxyModel_Index(QConcatenateTablesProxyModel* self, int row, int column) {
	QModelIndex ret = const_cast<const QConcatenateTablesProxyModel*>(self)->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QConcatenateTablesProxyModel_Parent(QConcatenateTablesProxyModel* self, QModelIndex* index) {
	QModelIndex ret = const_cast<const QConcatenateTablesProxyModel*>(self)->parent(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QConcatenateTablesProxyModel_RowCount(QConcatenateTablesProxyModel* self) {
	return const_cast<const QConcatenateTablesProxyModel*>(self)->rowCount();
}

QVariant* QConcatenateTablesProxyModel_HeaderData(QConcatenateTablesProxyModel* self, int section, uintptr_t orientation) {
	QVariant ret = const_cast<const QConcatenateTablesProxyModel*>(self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

int QConcatenateTablesProxyModel_ColumnCount(QConcatenateTablesProxyModel* self) {
	return const_cast<const QConcatenateTablesProxyModel*>(self)->columnCount();
}

void QConcatenateTablesProxyModel_MimeTypes(QConcatenateTablesProxyModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QConcatenateTablesProxyModel*>(self)->mimeTypes();
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

QMimeData* QConcatenateTablesProxyModel_MimeData(QConcatenateTablesProxyModel* self, QModelIndex** indexes, size_t indexes_len) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes_len);
	for(size_t i = 0; i < indexes_len; ++i) {
		indexes_QList.push_back(*(indexes[i]));
	}
	return const_cast<const QConcatenateTablesProxyModel*>(self)->mimeData(indexes_QList);
}

bool QConcatenateTablesProxyModel_CanDropMimeData(QConcatenateTablesProxyModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent) {
	return const_cast<const QConcatenateTablesProxyModel*>(self)->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QConcatenateTablesProxyModel_DropMimeData(QConcatenateTablesProxyModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

QSize* QConcatenateTablesProxyModel_Span(QConcatenateTablesProxyModel* self, QModelIndex* index) {
	QSize ret = const_cast<const QConcatenateTablesProxyModel*>(self)->span(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QConcatenateTablesProxyModel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QConcatenateTablesProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QConcatenateTablesProxyModel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QConcatenateTablesProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QConcatenateTablesProxyModel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QConcatenateTablesProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QConcatenateTablesProxyModel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QConcatenateTablesProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QVariant* QConcatenateTablesProxyModel_Data2(QConcatenateTablesProxyModel* self, QModelIndex* index, int role) {
	QVariant ret = self->data(*index, static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QConcatenateTablesProxyModel_SetData3(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QModelIndex* QConcatenateTablesProxyModel_Index3(QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QConcatenateTablesProxyModel_RowCount1(QConcatenateTablesProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

QVariant* QConcatenateTablesProxyModel_HeaderData3(QConcatenateTablesProxyModel* self, int section, uintptr_t orientation, int role) {
	QVariant ret = self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

int QConcatenateTablesProxyModel_ColumnCount1(QConcatenateTablesProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

void QConcatenateTablesProxyModel_Delete(QConcatenateTablesProxyModel* self) {
	delete self;
}

