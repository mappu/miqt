#include <QChar>
#include <QDir>
#include <QFileInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdir.h>
#include "gen_qdir.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QDir* QDir_new(QDir* param1) {
	return new QDir(*param1);
}

QDir* QDir_new2() {
	return new QDir();
}

QDir* QDir_new3(struct miqt_string path, struct miqt_string nameFilter) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
	return new QDir(path_QString, nameFilter_QString);
}

QDir* QDir_new4(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QDir(path_QString);
}

QDir* QDir_new5(struct miqt_string path, struct miqt_string nameFilter, int sort) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
	return new QDir(path_QString, nameFilter_QString, static_cast<QDir::SortFlags>(sort));
}

QDir* QDir_new6(struct miqt_string path, struct miqt_string nameFilter, int sort, int filter) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
	return new QDir(path_QString, nameFilter_QString, static_cast<QDir::SortFlags>(sort), static_cast<QDir::Filters>(filter));
}

void QDir_operatorAssign(QDir* self, QDir* param1) {
	self->operator=(*param1);
}

void QDir_operatorAssignWithPath(QDir* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->operator=(path_QString);
}

void QDir_swap(QDir* self, QDir* other) {
	self->swap(*other);
}

void QDir_setPath(QDir* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPath(path_QString);
}

struct miqt_string QDir_path(const QDir* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_absolutePath(const QDir* self) {
	QString _ret = self->absolutePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_canonicalPath(const QDir* self) {
	QString _ret = self->canonicalPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDir_addResourceSearchPath(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QDir::addResourceSearchPath(path_QString);
}

void QDir_setSearchPaths(struct miqt_string prefix, struct miqt_array /* of struct miqt_string */  searchPaths) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QStringList searchPaths_QList;
	searchPaths_QList.reserve(searchPaths.len);
	struct miqt_string* searchPaths_arr = static_cast<struct miqt_string*>(searchPaths.data);
	for(size_t i = 0; i < searchPaths.len; ++i) {
		QString searchPaths_arr_i_QString = QString::fromUtf8(searchPaths_arr[i].data, searchPaths_arr[i].len);
		searchPaths_QList.push_back(searchPaths_arr_i_QString);
	}
	QDir::setSearchPaths(prefix_QString, searchPaths_QList);
}

void QDir_addSearchPath(struct miqt_string prefix, struct miqt_string path) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QDir::addSearchPath(prefix_QString, path_QString);
}

struct miqt_array /* of struct miqt_string */  QDir_searchPaths(struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QStringList _ret = QDir::searchPaths(prefix_QString);
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

struct miqt_string QDir_dirName(const QDir* self) {
	QString _ret = self->dirName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_filePath(const QDir* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString _ret = self->filePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_absoluteFilePath(const QDir* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString _ret = self->absoluteFilePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_relativeFilePath(const QDir* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString _ret = self->relativeFilePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_toNativeSeparators(struct miqt_string pathName) {
	QString pathName_QString = QString::fromUtf8(pathName.data, pathName.len);
	QString _ret = QDir::toNativeSeparators(pathName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_fromNativeSeparators(struct miqt_string pathName) {
	QString pathName_QString = QString::fromUtf8(pathName.data, pathName.len);
	QString _ret = QDir::fromNativeSeparators(pathName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDir_cd(QDir* self, struct miqt_string dirName) {
	QString dirName_QString = QString::fromUtf8(dirName.data, dirName.len);
	return self->cd(dirName_QString);
}

bool QDir_cdUp(QDir* self) {
	return self->cdUp();
}

struct miqt_array /* of struct miqt_string */  QDir_nameFilters(const QDir* self) {
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

void QDir_setNameFilters(QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	self->setNameFilters(nameFilters_QList);
}

int QDir_filter(const QDir* self) {
	QDir::Filters _ret = self->filter();
	return static_cast<int>(_ret);
}

void QDir_setFilter(QDir* self, int filter) {
	self->setFilter(static_cast<QDir::Filters>(filter));
}

int QDir_sorting(const QDir* self) {
	QDir::SortFlags _ret = self->sorting();
	return static_cast<int>(_ret);
}

void QDir_setSorting(QDir* self, int sort) {
	self->setSorting(static_cast<QDir::SortFlags>(sort));
}

unsigned int QDir_count(const QDir* self) {
	uint _ret = self->count();
	return static_cast<unsigned int>(_ret);
}

bool QDir_isEmpty(const QDir* self) {
	return self->isEmpty();
}

struct miqt_string QDir_operatorSubscript(const QDir* self, int param1) {
	QString _ret = self->operator[](static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QDir_nameFiltersFromString(struct miqt_string nameFilter) {
	QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
	QStringList _ret = QDir::nameFiltersFromString(nameFilter_QString);
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

struct miqt_array /* of struct miqt_string */  QDir_entryList(const QDir* self) {
	QStringList _ret = self->entryList();
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

struct miqt_array /* of struct miqt_string */  QDir_entryListWithNameFilters(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QStringList _ret = self->entryList(nameFilters_QList);
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

struct miqt_array /* of QFileInfo* */  QDir_entryInfoList(const QDir* self) {
	QFileInfoList _ret = self->entryInfoList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QFileInfo* */  QDir_entryInfoListWithNameFilters(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QFileInfoList _ret = self->entryInfoList(nameFilters_QList);
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QDir_mkdir(const QDir* self, struct miqt_string dirName) {
	QString dirName_QString = QString::fromUtf8(dirName.data, dirName.len);
	return self->mkdir(dirName_QString);
}

bool QDir_rmdir(const QDir* self, struct miqt_string dirName) {
	QString dirName_QString = QString::fromUtf8(dirName.data, dirName.len);
	return self->rmdir(dirName_QString);
}

bool QDir_mkpath(const QDir* self, struct miqt_string dirPath) {
	QString dirPath_QString = QString::fromUtf8(dirPath.data, dirPath.len);
	return self->mkpath(dirPath_QString);
}

bool QDir_rmpath(const QDir* self, struct miqt_string dirPath) {
	QString dirPath_QString = QString::fromUtf8(dirPath.data, dirPath.len);
	return self->rmpath(dirPath_QString);
}

bool QDir_removeRecursively(QDir* self) {
	return self->removeRecursively();
}

bool QDir_isReadable(const QDir* self) {
	return self->isReadable();
}

bool QDir_exists(const QDir* self) {
	return self->exists();
}

bool QDir_isRoot(const QDir* self) {
	return self->isRoot();
}

bool QDir_isRelativePath(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QDir::isRelativePath(path_QString);
}

bool QDir_isAbsolutePath(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QDir::isAbsolutePath(path_QString);
}

bool QDir_isRelative(const QDir* self) {
	return self->isRelative();
}

bool QDir_isAbsolute(const QDir* self) {
	return self->isAbsolute();
}

bool QDir_makeAbsolute(QDir* self) {
	return self->makeAbsolute();
}

bool QDir_operatorEqual(const QDir* self, QDir* dir) {
	return (*self == *dir);
}

bool QDir_operatorNotEqual(const QDir* self, QDir* dir) {
	return (*self != *dir);
}

bool QDir_remove(QDir* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->remove(fileName_QString);
}

bool QDir_rename(QDir* self, struct miqt_string oldName, struct miqt_string newName) {
	QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->rename(oldName_QString, newName_QString);
}

bool QDir_existsWithName(const QDir* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->exists(name_QString);
}

struct miqt_array /* of QFileInfo* */  QDir_drives() {
	QFileInfoList _ret = QDir::drives();
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QChar* QDir_listSeparator() {
	return new QChar(QDir::listSeparator());
}

QChar* QDir_separator() {
	return new QChar(QDir::separator());
}

bool QDir_setCurrent(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QDir::setCurrent(path_QString);
}

QDir* QDir_current() {
	return new QDir(QDir::current());
}

struct miqt_string QDir_currentPath() {
	QString _ret = QDir::currentPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QDir_home() {
	return new QDir(QDir::home());
}

struct miqt_string QDir_homePath() {
	QString _ret = QDir::homePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QDir_root() {
	return new QDir(QDir::root());
}

struct miqt_string QDir_rootPath() {
	QString _ret = QDir::rootPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QDir_temp() {
	return new QDir(QDir::temp());
}

struct miqt_string QDir_tempPath() {
	QString _ret = QDir::tempPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDir_match(struct miqt_array /* of struct miqt_string */  filters, struct miqt_string fileName) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QDir::match(filters_QList, fileName_QString);
}

bool QDir_match2(struct miqt_string filter, struct miqt_string fileName) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QDir::match(filter_QString, fileName_QString);
}

struct miqt_string QDir_cleanPath(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QString _ret = QDir::cleanPath(path_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDir_refresh(const QDir* self) {
	self->refresh();
}

bool QDir_isEmpty1(const QDir* self, int filters) {
	return self->isEmpty(static_cast<QDir::Filters>(filters));
}

struct miqt_array /* of struct miqt_string */  QDir_entryList1(const QDir* self, int filters) {
	QStringList _ret = self->entryList(static_cast<QDir::Filters>(filters));
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

struct miqt_array /* of struct miqt_string */  QDir_entryList2(const QDir* self, int filters, int sort) {
	QStringList _ret = self->entryList(static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
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

struct miqt_array /* of struct miqt_string */  QDir_entryList22(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QStringList _ret = self->entryList(nameFilters_QList, static_cast<QDir::Filters>(filters));
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

struct miqt_array /* of struct miqt_string */  QDir_entryList3(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QStringList _ret = self->entryList(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
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

struct miqt_array /* of QFileInfo* */  QDir_entryInfoList1(const QDir* self, int filters) {
	QFileInfoList _ret = self->entryInfoList(static_cast<QDir::Filters>(filters));
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QFileInfo* */  QDir_entryInfoList2(const QDir* self, int filters, int sort) {
	QFileInfoList _ret = self->entryInfoList(static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QFileInfo* */  QDir_entryInfoList22(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QFileInfoList _ret = self->entryInfoList(nameFilters_QList, static_cast<QDir::Filters>(filters));
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QFileInfo* */  QDir_entryInfoList3(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QFileInfoList _ret = self->entryInfoList(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDir_delete(QDir* self) {
	delete self;
}

