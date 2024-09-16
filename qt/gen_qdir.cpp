#include <QChar>
#include <QDir>
#include <QFileInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qdir.h"
#include "gen_qdir.h"
#include "_cgo_export.h"

QDir* QDir_new(QDir* param1) {
	return new QDir(*param1);
}

QDir* QDir_new2() {
	return new QDir();
}

QDir* QDir_new3(struct miqt_string* path, struct miqt_string* nameFilter) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	QString nameFilter_QString = QString::fromUtf8(&nameFilter->data, nameFilter->len);
	return new QDir(path_QString, nameFilter_QString);
}

QDir* QDir_new4(struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	return new QDir(path_QString);
}

QDir* QDir_new5(struct miqt_string* path, struct miqt_string* nameFilter, int sort) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	QString nameFilter_QString = QString::fromUtf8(&nameFilter->data, nameFilter->len);
	return new QDir(path_QString, nameFilter_QString, static_cast<QDir::SortFlags>(sort));
}

QDir* QDir_new6(struct miqt_string* path, struct miqt_string* nameFilter, int sort, int filter) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	QString nameFilter_QString = QString::fromUtf8(&nameFilter->data, nameFilter->len);
	return new QDir(path_QString, nameFilter_QString, static_cast<QDir::SortFlags>(sort), static_cast<QDir::Filters>(filter));
}

void QDir_OperatorAssign(QDir* self, QDir* param1) {
	self->operator=(*param1);
}

void QDir_OperatorAssignWithPath(QDir* self, struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	self->operator=(path_QString);
}

void QDir_Swap(QDir* self, QDir* other) {
	self->swap(*other);
}

void QDir_SetPath(QDir* self, struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	self->setPath(path_QString);
}

struct miqt_string* QDir_Path(const QDir* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDir_AbsolutePath(const QDir* self) {
	QString _ret = self->absolutePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDir_CanonicalPath(const QDir* self) {
	QString _ret = self->canonicalPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QDir_AddResourceSearchPath(struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	QDir::addResourceSearchPath(path_QString);
}

void QDir_SetSearchPaths(struct miqt_string* prefix, struct miqt_array* /* of struct miqt_string* */ searchPaths) {
	QString prefix_QString = QString::fromUtf8(&prefix->data, prefix->len);
	QList<QString> searchPaths_QList;
	searchPaths_QList.reserve(searchPaths->len);
	miqt_string** searchPaths_arr = static_cast<miqt_string**>(searchPaths->data);
	for(size_t i = 0; i < searchPaths->len; ++i) {
		searchPaths_QList.push_back(QString::fromUtf8(& searchPaths_arr[i]->data, searchPaths_arr[i]->len));
	}
	QDir::setSearchPaths(prefix_QString, searchPaths_QList);
}

void QDir_AddSearchPath(struct miqt_string* prefix, struct miqt_string* path) {
	QString prefix_QString = QString::fromUtf8(&prefix->data, prefix->len);
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	QDir::addSearchPath(prefix_QString, path_QString);
}

struct miqt_array* QDir_SearchPaths(struct miqt_string* prefix) {
	QString prefix_QString = QString::fromUtf8(&prefix->data, prefix->len);
	QStringList _ret = QDir::searchPaths(prefix_QString);
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QDir_DirName(const QDir* self) {
	QString _ret = self->dirName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDir_FilePath(const QDir* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	QString _ret = self->filePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDir_AbsoluteFilePath(const QDir* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	QString _ret = self->absoluteFilePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDir_RelativeFilePath(const QDir* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	QString _ret = self->relativeFilePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDir_ToNativeSeparators(struct miqt_string* pathName) {
	QString pathName_QString = QString::fromUtf8(&pathName->data, pathName->len);
	QString _ret = QDir::toNativeSeparators(pathName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDir_FromNativeSeparators(struct miqt_string* pathName) {
	QString pathName_QString = QString::fromUtf8(&pathName->data, pathName->len);
	QString _ret = QDir::fromNativeSeparators(pathName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QDir_Cd(QDir* self, struct miqt_string* dirName) {
	QString dirName_QString = QString::fromUtf8(&dirName->data, dirName->len);
	return self->cd(dirName_QString);
}

bool QDir_CdUp(QDir* self) {
	return self->cdUp();
}

struct miqt_array* QDir_NameFilters(const QDir* self) {
	QStringList _ret = self->nameFilters();
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QDir_SetNameFilters(QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters) {
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters->len);
	miqt_string** nameFilters_arr = static_cast<miqt_string**>(nameFilters->data);
	for(size_t i = 0; i < nameFilters->len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(& nameFilters_arr[i]->data, nameFilters_arr[i]->len));
	}
	self->setNameFilters(nameFilters_QList);
}

int QDir_Filter(const QDir* self) {
	QDir::Filters _ret = self->filter();
	return static_cast<int>(_ret);
}

void QDir_SetFilter(QDir* self, int filter) {
	self->setFilter(static_cast<QDir::Filters>(filter));
}

int QDir_Sorting(const QDir* self) {
	QDir::SortFlags _ret = self->sorting();
	return static_cast<int>(_ret);
}

void QDir_SetSorting(QDir* self, int sort) {
	self->setSorting(static_cast<QDir::SortFlags>(sort));
}

unsigned int QDir_Count(const QDir* self) {
	return self->count();
}

bool QDir_IsEmpty(const QDir* self) {
	return self->isEmpty();
}

struct miqt_string* QDir_OperatorSubscript(const QDir* self, int param1) {
	QString _ret = self->operator[](static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QDir_NameFiltersFromString(struct miqt_string* nameFilter) {
	QString nameFilter_QString = QString::fromUtf8(&nameFilter->data, nameFilter->len);
	QStringList _ret = QDir::nameFiltersFromString(nameFilter_QString);
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QDir_EntryList(const QDir* self) {
	QStringList _ret = self->entryList();
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QDir_EntryListWithNameFilters(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters) {
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters->len);
	miqt_string** nameFilters_arr = static_cast<miqt_string**>(nameFilters->data);
	for(size_t i = 0; i < nameFilters->len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(& nameFilters_arr[i]->data, nameFilters_arr[i]->len));
	}
	QStringList _ret = self->entryList(nameFilters_QList);
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QDir_EntryInfoList(const QDir* self) {
	QFileInfoList _ret = self->entryInfoList();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QDir_EntryInfoListWithNameFilters(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters) {
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters->len);
	miqt_string** nameFilters_arr = static_cast<miqt_string**>(nameFilters->data);
	for(size_t i = 0; i < nameFilters->len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(& nameFilters_arr[i]->data, nameFilters_arr[i]->len));
	}
	QFileInfoList _ret = self->entryInfoList(nameFilters_QList);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

bool QDir_Mkdir(const QDir* self, struct miqt_string* dirName) {
	QString dirName_QString = QString::fromUtf8(&dirName->data, dirName->len);
	return self->mkdir(dirName_QString);
}

bool QDir_Rmdir(const QDir* self, struct miqt_string* dirName) {
	QString dirName_QString = QString::fromUtf8(&dirName->data, dirName->len);
	return self->rmdir(dirName_QString);
}

bool QDir_Mkpath(const QDir* self, struct miqt_string* dirPath) {
	QString dirPath_QString = QString::fromUtf8(&dirPath->data, dirPath->len);
	return self->mkpath(dirPath_QString);
}

bool QDir_Rmpath(const QDir* self, struct miqt_string* dirPath) {
	QString dirPath_QString = QString::fromUtf8(&dirPath->data, dirPath->len);
	return self->rmpath(dirPath_QString);
}

bool QDir_RemoveRecursively(QDir* self) {
	return self->removeRecursively();
}

bool QDir_IsReadable(const QDir* self) {
	return self->isReadable();
}

bool QDir_Exists(const QDir* self) {
	return self->exists();
}

bool QDir_IsRoot(const QDir* self) {
	return self->isRoot();
}

bool QDir_IsRelativePath(struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	return QDir::isRelativePath(path_QString);
}

bool QDir_IsAbsolutePath(struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	return QDir::isAbsolutePath(path_QString);
}

bool QDir_IsRelative(const QDir* self) {
	return self->isRelative();
}

bool QDir_IsAbsolute(const QDir* self) {
	return self->isAbsolute();
}

bool QDir_MakeAbsolute(QDir* self) {
	return self->makeAbsolute();
}

bool QDir_OperatorEqual(const QDir* self, QDir* dir) {
	return self->operator==(*dir);
}

bool QDir_OperatorNotEqual(const QDir* self, QDir* dir) {
	return self->operator!=(*dir);
}

bool QDir_Remove(QDir* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->remove(fileName_QString);
}

bool QDir_Rename(QDir* self, struct miqt_string* oldName, struct miqt_string* newName) {
	QString oldName_QString = QString::fromUtf8(&oldName->data, oldName->len);
	QString newName_QString = QString::fromUtf8(&newName->data, newName->len);
	return self->rename(oldName_QString, newName_QString);
}

bool QDir_ExistsWithName(const QDir* self, struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	return self->exists(name_QString);
}

struct miqt_array* QDir_Drives() {
	QFileInfoList _ret = QDir::drives();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QChar* QDir_ListSeparator() {
	QChar _ret = QDir::listSeparator();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(_ret));
}

QChar* QDir_Separator() {
	QChar _ret = QDir::separator();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(_ret));
}

bool QDir_SetCurrent(struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	return QDir::setCurrent(path_QString);
}

QDir* QDir_Current() {
	QDir _ret = QDir::current();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(_ret));
}

struct miqt_string* QDir_CurrentPath() {
	QString _ret = QDir::currentPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDir* QDir_Home() {
	QDir _ret = QDir::home();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(_ret));
}

struct miqt_string* QDir_HomePath() {
	QString _ret = QDir::homePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDir* QDir_Root() {
	QDir _ret = QDir::root();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(_ret));
}

struct miqt_string* QDir_RootPath() {
	QString _ret = QDir::rootPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDir* QDir_Temp() {
	QDir _ret = QDir::temp();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(_ret));
}

struct miqt_string* QDir_TempPath() {
	QString _ret = QDir::tempPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QDir_Match(struct miqt_array* /* of struct miqt_string* */ filters, struct miqt_string* fileName) {
	QList<QString> filters_QList;
	filters_QList.reserve(filters->len);
	miqt_string** filters_arr = static_cast<miqt_string**>(filters->data);
	for(size_t i = 0; i < filters->len; ++i) {
		filters_QList.push_back(QString::fromUtf8(& filters_arr[i]->data, filters_arr[i]->len));
	}
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return QDir::match(filters_QList, fileName_QString);
}

bool QDir_Match2(struct miqt_string* filter, struct miqt_string* fileName) {
	QString filter_QString = QString::fromUtf8(&filter->data, filter->len);
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return QDir::match(filter_QString, fileName_QString);
}

struct miqt_string* QDir_CleanPath(struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	QString _ret = QDir::cleanPath(path_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QDir_Refresh(const QDir* self) {
	self->refresh();
}

bool QDir_IsEmpty1(const QDir* self, int filters) {
	return self->isEmpty(static_cast<QDir::Filters>(filters));
}

struct miqt_array* QDir_EntryList1(const QDir* self, int filters) {
	QStringList _ret = self->entryList(static_cast<QDir::Filters>(filters));
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QDir_EntryList2(const QDir* self, int filters, int sort) {
	QStringList _ret = self->entryList(static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QDir_EntryList22(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters, int filters) {
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters->len);
	miqt_string** nameFilters_arr = static_cast<miqt_string**>(nameFilters->data);
	for(size_t i = 0; i < nameFilters->len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(& nameFilters_arr[i]->data, nameFilters_arr[i]->len));
	}
	QStringList _ret = self->entryList(nameFilters_QList, static_cast<QDir::Filters>(filters));
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QDir_EntryList3(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters, int filters, int sort) {
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters->len);
	miqt_string** nameFilters_arr = static_cast<miqt_string**>(nameFilters->data);
	for(size_t i = 0; i < nameFilters->len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(& nameFilters_arr[i]->data, nameFilters_arr[i]->len));
	}
	QStringList _ret = self->entryList(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QDir_EntryInfoList1(const QDir* self, int filters) {
	QFileInfoList _ret = self->entryInfoList(static_cast<QDir::Filters>(filters));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QDir_EntryInfoList2(const QDir* self, int filters, int sort) {
	QFileInfoList _ret = self->entryInfoList(static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QDir_EntryInfoList22(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters, int filters) {
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters->len);
	miqt_string** nameFilters_arr = static_cast<miqt_string**>(nameFilters->data);
	for(size_t i = 0; i < nameFilters->len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(& nameFilters_arr[i]->data, nameFilters_arr[i]->len));
	}
	QFileInfoList _ret = self->entryInfoList(nameFilters_QList, static_cast<QDir::Filters>(filters));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QDir_EntryInfoList3(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters, int filters, int sort) {
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters->len);
	miqt_string** nameFilters_arr = static_cast<miqt_string**>(nameFilters->data);
	for(size_t i = 0; i < nameFilters->len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(& nameFilters_arr[i]->data, nameFilters_arr[i]->len));
	}
	QFileInfoList _ret = self->entryInfoList(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QDir_Delete(QDir* self) {
	delete self;
}

