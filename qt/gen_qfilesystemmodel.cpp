#include <QDateTime>
#include <QDir>
#include <QFileIconProvider>
#include <QFileInfo>
#include <QFileSystemModel>
#include <QIcon>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include "qfilesystemmodel.h"

#include "gen_qfilesystemmodel.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFileSystemModel* QFileSystemModel_new() {
	return new QFileSystemModel();
}

QFileSystemModel* QFileSystemModel_new2(QObject* parent) {
	return new QFileSystemModel(parent);
}

QMetaObject* QFileSystemModel_MetaObject(QFileSystemModel* self) {
	return (QMetaObject*) const_cast<const QFileSystemModel*>(self)->metaObject();
}

void QFileSystemModel_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSystemModel_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSystemModel_RootPathChanged(QFileSystemModel* self, const char* newPath, size_t newPath_Strlen) {
	QString newPath_QString = QString::fromUtf8(newPath, newPath_Strlen);
	self->rootPathChanged(newPath_QString);
}

void QFileSystemModel_connect_RootPathChanged(QFileSystemModel* self, void* slot) {
	QFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&)>(&QFileSystemModel::rootPathChanged), self, [=](const QString& newPath) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFileSystemModel_FileRenamed(QFileSystemModel* self, const char* path, size_t path_Strlen, const char* oldName, size_t oldName_Strlen, const char* newName, size_t newName_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QString oldName_QString = QString::fromUtf8(oldName, oldName_Strlen);
	QString newName_QString = QString::fromUtf8(newName, newName_Strlen);
	self->fileRenamed(path_QString, oldName_QString, newName_QString);
}

void QFileSystemModel_connect_FileRenamed(QFileSystemModel* self, void* slot) {
	QFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&, const QString&, const QString&)>(&QFileSystemModel::fileRenamed), self, [=](const QString& path, const QString& oldName, const QString& newName) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFileSystemModel_DirectoryLoaded(QFileSystemModel* self, const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	self->directoryLoaded(path_QString);
}

void QFileSystemModel_connect_DirectoryLoaded(QFileSystemModel* self, void* slot) {
	QFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&)>(&QFileSystemModel::directoryLoaded), self, [=](const QString& path) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

QModelIndex* QFileSystemModel_Index(QFileSystemModel* self, int row, int column) {
	QModelIndex ret = const_cast<const QFileSystemModel*>(self)->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QFileSystemModel_IndexWithPath(QFileSystemModel* self, const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QModelIndex ret = const_cast<const QFileSystemModel*>(self)->index(path_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QFileSystemModel_Parent(QFileSystemModel* self, QModelIndex* child) {
	QModelIndex ret = const_cast<const QFileSystemModel*>(self)->parent(*child);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QFileSystemModel_Sibling(QFileSystemModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex ret = const_cast<const QFileSystemModel*>(self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

bool QFileSystemModel_HasChildren(QFileSystemModel* self) {
	return const_cast<const QFileSystemModel*>(self)->hasChildren();
}

bool QFileSystemModel_CanFetchMore(QFileSystemModel* self, QModelIndex* parent) {
	return const_cast<const QFileSystemModel*>(self)->canFetchMore(*parent);
}

void QFileSystemModel_FetchMore(QFileSystemModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

int QFileSystemModel_RowCount(QFileSystemModel* self) {
	return const_cast<const QFileSystemModel*>(self)->rowCount();
}

int QFileSystemModel_ColumnCount(QFileSystemModel* self) {
	return const_cast<const QFileSystemModel*>(self)->columnCount();
}

QVariant* QFileSystemModel_MyComputer(QFileSystemModel* self) {
	QVariant ret = const_cast<const QFileSystemModel*>(self)->myComputer();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QFileSystemModel_Data(QFileSystemModel* self, QModelIndex* index) {
	QVariant ret = const_cast<const QFileSystemModel*>(self)->data(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QFileSystemModel_SetData(QFileSystemModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

QVariant* QFileSystemModel_HeaderData(QFileSystemModel* self, int section, uintptr_t orientation) {
	QVariant ret = const_cast<const QFileSystemModel*>(self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

int QFileSystemModel_Flags(QFileSystemModel* self, QModelIndex* index) {
	Qt::ItemFlags ret = const_cast<const QFileSystemModel*>(self)->flags(*index);
	return static_cast<int>(ret);
}

void QFileSystemModel_Sort(QFileSystemModel* self, int column) {
	self->sort(static_cast<int>(column));
}

void QFileSystemModel_MimeTypes(QFileSystemModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QFileSystemModel*>(self)->mimeTypes();
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

QMimeData* QFileSystemModel_MimeData(QFileSystemModel* self, QModelIndex** indexes, size_t indexes_len) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes_len);
	for(size_t i = 0; i < indexes_len; ++i) {
		indexes_QList.push_back(*(indexes[i]));
	}
	return const_cast<const QFileSystemModel*>(self)->mimeData(indexes_QList);
}

bool QFileSystemModel_DropMimeData(QFileSystemModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QFileSystemModel_SupportedDropActions(QFileSystemModel* self) {
	Qt::DropActions ret = const_cast<const QFileSystemModel*>(self)->supportedDropActions();
	return static_cast<int>(ret);
}

QModelIndex* QFileSystemModel_SetRootPath(QFileSystemModel* self, const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QModelIndex ret = self->setRootPath(path_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QFileSystemModel_RootPath(QFileSystemModel* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileSystemModel*>(self)->rootPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDir* QFileSystemModel_RootDirectory(QFileSystemModel* self) {
	QDir ret = const_cast<const QFileSystemModel*>(self)->rootDirectory();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(ret));
}

void QFileSystemModel_SetIconProvider(QFileSystemModel* self, QFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QFileIconProvider* QFileSystemModel_IconProvider(QFileSystemModel* self) {
	return const_cast<const QFileSystemModel*>(self)->iconProvider();
}

void QFileSystemModel_SetFilter(QFileSystemModel* self, int filters) {
	self->setFilter(static_cast<QDir::Filters>(filters));
}

int QFileSystemModel_Filter(QFileSystemModel* self) {
	QDir::Filters ret = const_cast<const QFileSystemModel*>(self)->filter();
	return static_cast<int>(ret);
}

void QFileSystemModel_SetResolveSymlinks(QFileSystemModel* self, bool enable) {
	self->setResolveSymlinks(enable);
}

bool QFileSystemModel_ResolveSymlinks(QFileSystemModel* self) {
	return const_cast<const QFileSystemModel*>(self)->resolveSymlinks();
}

void QFileSystemModel_SetReadOnly(QFileSystemModel* self, bool enable) {
	self->setReadOnly(enable);
}

bool QFileSystemModel_IsReadOnly(QFileSystemModel* self) {
	return const_cast<const QFileSystemModel*>(self)->isReadOnly();
}

void QFileSystemModel_SetNameFilterDisables(QFileSystemModel* self, bool enable) {
	self->setNameFilterDisables(enable);
}

bool QFileSystemModel_NameFilterDisables(QFileSystemModel* self) {
	return const_cast<const QFileSystemModel*>(self)->nameFilterDisables();
}

void QFileSystemModel_SetNameFilters(QFileSystemModel* self, char** filters, uint64_t* filters_Lengths, size_t filters_len) {
	QList<QString> filters_QList;
	filters_QList.reserve(filters_len);
	for(size_t i = 0; i < filters_len; ++i) {
		filters_QList.push_back(QString::fromUtf8(filters[i], filters_Lengths[i]));
	}
	self->setNameFilters(filters_QList);
}

void QFileSystemModel_NameFilters(QFileSystemModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QFileSystemModel*>(self)->nameFilters();
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

void QFileSystemModel_SetOption(QFileSystemModel* self, uintptr_t option) {
	self->setOption(static_cast<QFileSystemModel::Option>(option));
}

bool QFileSystemModel_TestOption(QFileSystemModel* self, uintptr_t option) {
	return const_cast<const QFileSystemModel*>(self)->testOption(static_cast<QFileSystemModel::Option>(option));
}

void QFileSystemModel_SetOptions(QFileSystemModel* self, int options) {
	self->setOptions(static_cast<QFileSystemModel::Options>(options));
}

int QFileSystemModel_Options(QFileSystemModel* self) {
	QFileSystemModel::Options ret = const_cast<const QFileSystemModel*>(self)->options();
	return static_cast<int>(ret);
}

void QFileSystemModel_FilePath(QFileSystemModel* self, QModelIndex* index, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileSystemModel*>(self)->filePath(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QFileSystemModel_IsDir(QFileSystemModel* self, QModelIndex* index) {
	return const_cast<const QFileSystemModel*>(self)->isDir(*index);
}

long long QFileSystemModel_Size(QFileSystemModel* self, QModelIndex* index) {
	return const_cast<const QFileSystemModel*>(self)->size(*index);
}

void QFileSystemModel_Type(QFileSystemModel* self, QModelIndex* index, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileSystemModel*>(self)->type(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDateTime* QFileSystemModel_LastModified(QFileSystemModel* self, QModelIndex* index) {
	QDateTime ret = const_cast<const QFileSystemModel*>(self)->lastModified(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QModelIndex* QFileSystemModel_Mkdir(QFileSystemModel* self, QModelIndex* parent, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QModelIndex ret = self->mkdir(*parent, name_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

bool QFileSystemModel_Rmdir(QFileSystemModel* self, QModelIndex* index) {
	return self->rmdir(*index);
}

void QFileSystemModel_FileName(QFileSystemModel* self, QModelIndex* index, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileSystemModel*>(self)->fileName(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QIcon* QFileSystemModel_FileIcon(QFileSystemModel* self, QModelIndex* index) {
	QIcon ret = const_cast<const QFileSystemModel*>(self)->fileIcon(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

int QFileSystemModel_Permissions(QFileSystemModel* self, QModelIndex* index) {
	QFile::Permissions ret = const_cast<const QFileSystemModel*>(self)->permissions(*index);
	return static_cast<int>(ret);
}

QFileInfo* QFileSystemModel_FileInfo(QFileSystemModel* self, QModelIndex* index) {
	QFileInfo ret = const_cast<const QFileSystemModel*>(self)->fileInfo(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFileInfo*>(new QFileInfo(ret));
}

bool QFileSystemModel_Remove(QFileSystemModel* self, QModelIndex* index) {
	return self->remove(*index);
}

void QFileSystemModel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSystemModel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSystemModel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSystemModel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QFileSystemModel_Index3(QFileSystemModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QFileSystemModel_Index2(QFileSystemModel* self, const char* path, size_t path_Strlen, int column) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QModelIndex ret = self->index(path_QString, static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

bool QFileSystemModel_HasChildren1(QFileSystemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

int QFileSystemModel_RowCount1(QFileSystemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QFileSystemModel_ColumnCount1(QFileSystemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QFileSystemModel_MyComputer1(QFileSystemModel* self, int role) {
	QVariant ret = self->myComputer(static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QFileSystemModel_Data2(QFileSystemModel* self, QModelIndex* index, int role) {
	QVariant ret = self->data(*index, static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QFileSystemModel_SetData3(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QFileSystemModel_HeaderData3(QFileSystemModel* self, int section, uintptr_t orientation, int role) {
	QVariant ret = self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QFileSystemModel_Sort2(QFileSystemModel* self, int column, uintptr_t order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QFileSystemModel_SetOption2(QFileSystemModel* self, uintptr_t option, bool on) {
	self->setOption(static_cast<QFileSystemModel::Option>(option), on);
}

void QFileSystemModel_Delete(QFileSystemModel* self) {
	delete self;
}

