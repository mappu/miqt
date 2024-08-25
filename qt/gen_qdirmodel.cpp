#include "gen_qdirmodel.h"
#include "qdirmodel.h"

#include <QDirModel>
#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QVariant>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDirModel* QDirModel_new() {
	return new QDirModel();
}

QDirModel* QDirModel_new2(QObject* parent) {
	return new QDirModel(parent);
}

QMetaObject* QDirModel_MetaObject(QDirModel* self) {
	return (QMetaObject*) self->metaObject();
}

void QDirModel_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDirModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDirModel_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDirModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QDirModel_Index(QDirModel* self, int row, int column) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QDirModel_Parent(QDirModel* self, QModelIndex* child) {
	QModelIndex ret = self->parent(*child);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QDirModel_RowCount(QDirModel* self) {
	return self->rowCount();
}

int QDirModel_ColumnCount(QDirModel* self) {
	return self->columnCount();
}

QVariant* QDirModel_Data(QDirModel* self, QModelIndex* index) {
	QVariant ret = self->data(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QDirModel_SetData(QDirModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

bool QDirModel_HasChildren(QDirModel* self) {
	return self->hasChildren();
}

void QDirModel_MimeTypes(QDirModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
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

QMimeData* QDirModel_MimeData(QDirModel* self, QModelIndex** indexes, size_t indexes_len) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes_len);
	for(size_t i = 0; i < indexes_len; ++i) {
		indexes_QList.push_back(*(indexes[i]));
	}
	return self->mimeData(indexes_QList);
}

void QDirModel_SetIconProvider(QDirModel* self, QFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QFileIconProvider* QDirModel_IconProvider(QDirModel* self) {
	return self->iconProvider();
}

void QDirModel_SetNameFilters(QDirModel* self, char** filters, uint64_t* filters_Lengths, size_t filters_len) {
	QList<QString> filters_QList;
	filters_QList.reserve(filters_len);
	for(size_t i = 0; i < filters_len; ++i) {
		filters_QList.push_back(QString::fromUtf8(filters[i], filters_Lengths[i]));
	}
	self->setNameFilters(filters_QList);
}

void QDirModel_NameFilters(QDirModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->nameFilters();
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

void QDirModel_SetResolveSymlinks(QDirModel* self, bool enable) {
	self->setResolveSymlinks(enable);
}

bool QDirModel_ResolveSymlinks(QDirModel* self) {
	return self->resolveSymlinks();
}

void QDirModel_SetReadOnly(QDirModel* self, bool enable) {
	self->setReadOnly(enable);
}

bool QDirModel_IsReadOnly(QDirModel* self) {
	return self->isReadOnly();
}

void QDirModel_SetLazyChildCount(QDirModel* self, bool enable) {
	self->setLazyChildCount(enable);
}

bool QDirModel_LazyChildCount(QDirModel* self) {
	return self->lazyChildCount();
}

QModelIndex* QDirModel_IndexWithPath(QDirModel* self, const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QModelIndex ret = self->index(path_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

bool QDirModel_IsDir(QDirModel* self, QModelIndex* index) {
	return self->isDir(*index);
}

QModelIndex* QDirModel_Mkdir(QDirModel* self, QModelIndex* parent, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QModelIndex ret = self->mkdir(*parent, name_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

bool QDirModel_Rmdir(QDirModel* self, QModelIndex* index) {
	return self->rmdir(*index);
}

bool QDirModel_Remove(QDirModel* self, QModelIndex* index) {
	return self->remove(*index);
}

void QDirModel_FilePath(QDirModel* self, QModelIndex* index, char** _out, int* _out_Strlen) {
	QString ret = self->filePath(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDirModel_FileName(QDirModel* self, QModelIndex* index, char** _out, int* _out_Strlen) {
	QString ret = self->fileName(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QIcon* QDirModel_FileIcon(QDirModel* self, QModelIndex* index) {
	QIcon ret = self->fileIcon(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QFileInfo* QDirModel_FileInfo(QDirModel* self, QModelIndex* index) {
	QFileInfo ret = self->fileInfo(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFileInfo*>(new QFileInfo(ret));
}

void QDirModel_Refresh(QDirModel* self) {
	self->refresh();
}

void QDirModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDirModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDirModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDirModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDirModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDirModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDirModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDirModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QDirModel_Index3(QDirModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QDirModel_RowCount1(QDirModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QDirModel_ColumnCount1(QDirModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QDirModel_Data2(QDirModel* self, QModelIndex* index, int role) {
	QVariant ret = self->data(*index, static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QDirModel_SetData3(QDirModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

bool QDirModel_HasChildren1(QDirModel* self, QModelIndex* index) {
	return self->hasChildren(*index);
}

QModelIndex* QDirModel_Index2(QDirModel* self, const char* path, size_t path_Strlen, int column) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QModelIndex ret = self->index(path_QString, static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QDirModel_Refresh1(QDirModel* self, QModelIndex* parent) {
	self->refresh(*parent);
}

void QDirModel_Delete(QDirModel* self) {
	delete self;
}

