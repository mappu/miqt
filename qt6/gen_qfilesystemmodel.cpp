#include <QAbstractFileIconProvider>
#include <QByteArray>
#include <QDateTime>
#include <QDir>
#include <QFileInfo>
#include <QFileSystemModel>
#include <QIcon>
#include <QList>
#include <QMap>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qfilesystemmodel.h>
#include "gen_qfilesystemmodel.h"
#include "_cgo_export.h"

QFileSystemModel* QFileSystemModel_new() {
	return new QFileSystemModel();
}

QFileSystemModel* QFileSystemModel_new2(QObject* parent) {
	return new QFileSystemModel(parent);
}

QMetaObject* QFileSystemModel_MetaObject(const QFileSystemModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFileSystemModel_Metacast(QFileSystemModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFileSystemModel_Tr(const char* s) {
	QString _ret = QFileSystemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileSystemModel_RootPathChanged(QFileSystemModel* self, struct miqt_string newPath) {
	QString newPath_QString = QString::fromUtf8(newPath.data, newPath.len);
	self->rootPathChanged(newPath_QString);
}

void QFileSystemModel_connect_RootPathChanged(QFileSystemModel* self, intptr_t slot) {
	QFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&)>(&QFileSystemModel::rootPathChanged), self, [=](const QString& newPath) {
		const QString newPath_ret = newPath;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray newPath_b = newPath_ret.toUtf8();
		struct miqt_string newPath_ms;
		newPath_ms.len = newPath_b.length();
		newPath_ms.data = static_cast<char*>(malloc(newPath_ms.len));
		memcpy(newPath_ms.data, newPath_b.data(), newPath_ms.len);
		struct miqt_string sigval1 = newPath_ms;
		miqt_exec_callback_QFileSystemModel_RootPathChanged(slot, sigval1);
	});
}

void QFileSystemModel_FileRenamed(QFileSystemModel* self, struct miqt_string path, struct miqt_string oldName, struct miqt_string newName) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	self->fileRenamed(path_QString, oldName_QString, newName_QString);
}

void QFileSystemModel_connect_FileRenamed(QFileSystemModel* self, intptr_t slot) {
	QFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&, const QString&, const QString&)>(&QFileSystemModel::fileRenamed), self, [=](const QString& path, const QString& oldName, const QString& newName) {
		const QString path_ret = path;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray path_b = path_ret.toUtf8();
		struct miqt_string path_ms;
		path_ms.len = path_b.length();
		path_ms.data = static_cast<char*>(malloc(path_ms.len));
		memcpy(path_ms.data, path_b.data(), path_ms.len);
		struct miqt_string sigval1 = path_ms;
		const QString oldName_ret = oldName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray oldName_b = oldName_ret.toUtf8();
		struct miqt_string oldName_ms;
		oldName_ms.len = oldName_b.length();
		oldName_ms.data = static_cast<char*>(malloc(oldName_ms.len));
		memcpy(oldName_ms.data, oldName_b.data(), oldName_ms.len);
		struct miqt_string sigval2 = oldName_ms;
		const QString newName_ret = newName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray newName_b = newName_ret.toUtf8();
		struct miqt_string newName_ms;
		newName_ms.len = newName_b.length();
		newName_ms.data = static_cast<char*>(malloc(newName_ms.len));
		memcpy(newName_ms.data, newName_b.data(), newName_ms.len);
		struct miqt_string sigval3 = newName_ms;
		miqt_exec_callback_QFileSystemModel_FileRenamed(slot, sigval1, sigval2, sigval3);
	});
}

void QFileSystemModel_DirectoryLoaded(QFileSystemModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->directoryLoaded(path_QString);
}

void QFileSystemModel_connect_DirectoryLoaded(QFileSystemModel* self, intptr_t slot) {
	QFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&)>(&QFileSystemModel::directoryLoaded), self, [=](const QString& path) {
		const QString path_ret = path;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray path_b = path_ret.toUtf8();
		struct miqt_string path_ms;
		path_ms.len = path_b.length();
		path_ms.data = static_cast<char*>(malloc(path_ms.len));
		memcpy(path_ms.data, path_b.data(), path_ms.len);
		struct miqt_string sigval1 = path_ms;
		miqt_exec_callback_QFileSystemModel_DirectoryLoaded(slot, sigval1);
	});
}

QModelIndex* QFileSystemModel_Index(const QFileSystemModel* self, int row, int column) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QFileSystemModel_IndexWithPath(const QFileSystemModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString));
}

QModelIndex* QFileSystemModel_Parent(const QFileSystemModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QFileSystemModel_Sibling(const QFileSystemModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QFileSystemModel_HasChildren(const QFileSystemModel* self) {
	return self->hasChildren();
}

bool QFileSystemModel_CanFetchMore(const QFileSystemModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

void QFileSystemModel_FetchMore(QFileSystemModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

int QFileSystemModel_RowCount(const QFileSystemModel* self) {
	return self->rowCount();
}

int QFileSystemModel_ColumnCount(const QFileSystemModel* self) {
	return self->columnCount();
}

QVariant* QFileSystemModel_MyComputer(const QFileSystemModel* self) {
	return new QVariant(self->myComputer());
}

QVariant* QFileSystemModel_Data(const QFileSystemModel* self, QModelIndex* index) {
	return new QVariant(self->data(*index));
}

bool QFileSystemModel_SetData(QFileSystemModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

QVariant* QFileSystemModel_HeaderData(const QFileSystemModel* self, int section, int orientation) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation)));
}

int QFileSystemModel_Flags(const QFileSystemModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

void QFileSystemModel_Sort(QFileSystemModel* self, int column) {
	self->sort(static_cast<int>(column));
}

struct miqt_array QFileSystemModel_MimeTypes(const QFileSystemModel* self) {
	QStringList _ret = self->mimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMimeData* QFileSystemModel_MimeData(const QFileSystemModel* self, struct miqt_array /* of QModelIndex* */ indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QFileSystemModel_DropMimeData(QFileSystemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QFileSystemModel_SupportedDropActions(const QFileSystemModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

struct miqt_map QFileSystemModel_RoleNames(const QFileSystemModel* self) {
	QHash<int, QByteArray> _ret = self->roleNames();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QByteArray _hashval_qb = _itr->second;
		struct miqt_string _hashval_ms;
		_hashval_ms.len = _hashval_qb.length();
		_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
		memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
		_varr[_ctr] = _hashval_ms;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

QModelIndex* QFileSystemModel_SetRootPath(QFileSystemModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->setRootPath(path_QString));
}

struct miqt_string QFileSystemModel_RootPath(const QFileSystemModel* self) {
	QString _ret = self->rootPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QFileSystemModel_RootDirectory(const QFileSystemModel* self) {
	return new QDir(self->rootDirectory());
}

void QFileSystemModel_SetIconProvider(QFileSystemModel* self, QAbstractFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QAbstractFileIconProvider* QFileSystemModel_IconProvider(const QFileSystemModel* self) {
	return self->iconProvider();
}

void QFileSystemModel_SetFilter(QFileSystemModel* self, int filters) {
	self->setFilter(static_cast<QDir::Filters>(filters));
}

int QFileSystemModel_Filter(const QFileSystemModel* self) {
	QDir::Filters _ret = self->filter();
	return static_cast<int>(_ret);
}

void QFileSystemModel_SetResolveSymlinks(QFileSystemModel* self, bool enable) {
	self->setResolveSymlinks(enable);
}

bool QFileSystemModel_ResolveSymlinks(const QFileSystemModel* self) {
	return self->resolveSymlinks();
}

void QFileSystemModel_SetReadOnly(QFileSystemModel* self, bool enable) {
	self->setReadOnly(enable);
}

bool QFileSystemModel_IsReadOnly(const QFileSystemModel* self) {
	return self->isReadOnly();
}

void QFileSystemModel_SetNameFilterDisables(QFileSystemModel* self, bool enable) {
	self->setNameFilterDisables(enable);
}

bool QFileSystemModel_NameFilterDisables(const QFileSystemModel* self) {
	return self->nameFilterDisables();
}

void QFileSystemModel_SetNameFilters(QFileSystemModel* self, struct miqt_array /* of struct miqt_string */ filters) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	self->setNameFilters(filters_QList);
}

struct miqt_array QFileSystemModel_NameFilters(const QFileSystemModel* self) {
	QStringList _ret = self->nameFilters();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFileSystemModel_SetOption(QFileSystemModel* self, int option) {
	self->setOption(static_cast<QFileSystemModel::Option>(option));
}

bool QFileSystemModel_TestOption(const QFileSystemModel* self, int option) {
	return self->testOption(static_cast<QFileSystemModel::Option>(option));
}

void QFileSystemModel_SetOptions(QFileSystemModel* self, int options) {
	self->setOptions(static_cast<QFileSystemModel::Options>(options));
}

int QFileSystemModel_Options(const QFileSystemModel* self) {
	QFileSystemModel::Options _ret = self->options();
	return static_cast<int>(_ret);
}

struct miqt_string QFileSystemModel_FilePath(const QFileSystemModel* self, QModelIndex* index) {
	QString _ret = self->filePath(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFileSystemModel_IsDir(const QFileSystemModel* self, QModelIndex* index) {
	return self->isDir(*index);
}

long long QFileSystemModel_Size(const QFileSystemModel* self, QModelIndex* index) {
	qint64 _ret = self->size(*index);
	return static_cast<long long>(_ret);
}

struct miqt_string QFileSystemModel_Type(const QFileSystemModel* self, QModelIndex* index) {
	QString _ret = self->type(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QFileSystemModel_LastModified(const QFileSystemModel* self, QModelIndex* index) {
	return new QDateTime(self->lastModified(*index));
}

QModelIndex* QFileSystemModel_Mkdir(QFileSystemModel* self, QModelIndex* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QModelIndex(self->mkdir(*parent, name_QString));
}

bool QFileSystemModel_Rmdir(QFileSystemModel* self, QModelIndex* index) {
	return self->rmdir(*index);
}

struct miqt_string QFileSystemModel_FileName(const QFileSystemModel* self, QModelIndex* index) {
	QString _ret = self->fileName(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QFileSystemModel_FileIcon(const QFileSystemModel* self, QModelIndex* index) {
	return new QIcon(self->fileIcon(*index));
}

int QFileSystemModel_Permissions(const QFileSystemModel* self, QModelIndex* index) {
	QFile::Permissions _ret = self->permissions(*index);
	return static_cast<int>(_ret);
}

QFileInfo* QFileSystemModel_FileInfo(const QFileSystemModel* self, QModelIndex* index) {
	return new QFileInfo(self->fileInfo(*index));
}

bool QFileSystemModel_Remove(QFileSystemModel* self, QModelIndex* index) {
	return self->remove(*index);
}

struct miqt_string QFileSystemModel_Tr2(const char* s, const char* c) {
	QString _ret = QFileSystemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileSystemModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFileSystemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QFileSystemModel_Index3(const QFileSystemModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QFileSystemModel_Index2(const QFileSystemModel* self, struct miqt_string path, int column) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString, static_cast<int>(column)));
}

bool QFileSystemModel_HasChildren1(const QFileSystemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

int QFileSystemModel_RowCount1(const QFileSystemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QFileSystemModel_ColumnCount1(const QFileSystemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QFileSystemModel_MyComputer1(const QFileSystemModel* self, int role) {
	return new QVariant(self->myComputer(static_cast<int>(role)));
}

QVariant* QFileSystemModel_Data2(const QFileSystemModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QFileSystemModel_SetData3(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QFileSystemModel_HeaderData3(const QFileSystemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

void QFileSystemModel_Sort2(QFileSystemModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QFileSystemModel_SetOption2(QFileSystemModel* self, int option, bool on) {
	self->setOption(static_cast<QFileSystemModel::Option>(option), on);
}

void QFileSystemModel_Delete(QFileSystemModel* self) {
	delete self;
}

