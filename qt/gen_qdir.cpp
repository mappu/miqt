#include "gen_qdir.h"
#include "qdir.h"

#include <QChar>
#include <QDir>
#include <QFileInfo>
#include <QList>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDir* QDir_new(QDir* param1) {
	return new QDir(*param1);
}

QDir* QDir_new2() {
	return new QDir();
}

QDir* QDir_new3(const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	return new QDir(path_QString);
}

void QDir_OperatorAssign(QDir* self, QDir* param1) {
	self->operator=(*param1);
}

void QDir_OperatorAssignWithPath(QDir* self, const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	self->operator=(path_QString);
}

void QDir_Swap(QDir* self, QDir* other) {
	self->swap(*other);
}

void QDir_SetPath(QDir* self, const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	self->setPath(path_QString);
}

void QDir_Path(QDir* self, char** _out, int* _out_Strlen) {
	QString ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDir_AbsolutePath(QDir* self, char** _out, int* _out_Strlen) {
	QString ret = self->absolutePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDir_CanonicalPath(QDir* self, char** _out, int* _out_Strlen) {
	QString ret = self->canonicalPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDir_AddResourceSearchPath(const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QDir::addResourceSearchPath(path_QString);
}

void QDir_SetSearchPaths(const char* prefix, size_t prefix_Strlen, char** searchPaths, uint64_t* searchPaths_Lengths, size_t searchPaths_len) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	QList<QString> searchPaths_QList;
	searchPaths_QList.reserve(searchPaths_len);
	for(size_t i = 0; i < searchPaths_len; ++i) {
		searchPaths_QList.push_back(QString::fromUtf8(searchPaths[i], searchPaths_Lengths[i]));
	}
	QDir::setSearchPaths(prefix_QString, searchPaths_QList);
}

void QDir_AddSearchPath(const char* prefix, size_t prefix_Strlen, const char* path, size_t path_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QDir::addSearchPath(prefix_QString, path_QString);
}

void QDir_SearchPaths(const char* prefix, size_t prefix_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	QList<QString> ret = QDir::searchPaths(prefix_QString);
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

void QDir_DirName(QDir* self, char** _out, int* _out_Strlen) {
	QString ret = self->dirName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDir_FilePath(QDir* self, const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString ret = self->filePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDir_AbsoluteFilePath(QDir* self, const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString ret = self->absoluteFilePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDir_RelativeFilePath(QDir* self, const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString ret = self->relativeFilePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDir_ToNativeSeparators(const char* pathName, size_t pathName_Strlen, char** _out, int* _out_Strlen) {
	QString pathName_QString = QString::fromUtf8(pathName, pathName_Strlen);
	QString ret = QDir::toNativeSeparators(pathName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDir_FromNativeSeparators(const char* pathName, size_t pathName_Strlen, char** _out, int* _out_Strlen) {
	QString pathName_QString = QString::fromUtf8(pathName, pathName_Strlen);
	QString ret = QDir::fromNativeSeparators(pathName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QDir_Cd(QDir* self, const char* dirName, size_t dirName_Strlen) {
	QString dirName_QString = QString::fromUtf8(dirName, dirName_Strlen);
	return self->cd(dirName_QString);
}

bool QDir_CdUp(QDir* self) {
	return self->cdUp();
}

void QDir_NameFilters(QDir* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
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

void QDir_SetNameFilters(QDir* self, char** nameFilters, uint64_t* nameFilters_Lengths, size_t nameFilters_len) {
	QList<QString> nameFilters_QList;
	nameFilters_QList.reserve(nameFilters_len);
	for(size_t i = 0; i < nameFilters_len; ++i) {
		nameFilters_QList.push_back(QString::fromUtf8(nameFilters[i], nameFilters_Lengths[i]));
	}
	self->setNameFilters(nameFilters_QList);
}

unsigned int QDir_Count(QDir* self) {
	return self->count();
}

void QDir_OperatorSubscript(QDir* self, int param1, char** _out, int* _out_Strlen) {
	QString ret = self->operator[](static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDir_NameFiltersFromString(const char* nameFilter, size_t nameFilter_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString nameFilter_QString = QString::fromUtf8(nameFilter, nameFilter_Strlen);
	QList<QString> ret = QDir::nameFiltersFromString(nameFilter_QString);
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

bool QDir_Mkdir(QDir* self, const char* dirName, size_t dirName_Strlen) {
	QString dirName_QString = QString::fromUtf8(dirName, dirName_Strlen);
	return self->mkdir(dirName_QString);
}

bool QDir_Rmdir(QDir* self, const char* dirName, size_t dirName_Strlen) {
	QString dirName_QString = QString::fromUtf8(dirName, dirName_Strlen);
	return self->rmdir(dirName_QString);
}

bool QDir_Mkpath(QDir* self, const char* dirPath, size_t dirPath_Strlen) {
	QString dirPath_QString = QString::fromUtf8(dirPath, dirPath_Strlen);
	return self->mkpath(dirPath_QString);
}

bool QDir_Rmpath(QDir* self, const char* dirPath, size_t dirPath_Strlen) {
	QString dirPath_QString = QString::fromUtf8(dirPath, dirPath_Strlen);
	return self->rmpath(dirPath_QString);
}

bool QDir_RemoveRecursively(QDir* self) {
	return self->removeRecursively();
}

bool QDir_IsReadable(QDir* self) {
	return self->isReadable();
}

bool QDir_Exists(QDir* self) {
	return self->exists();
}

bool QDir_IsRoot(QDir* self) {
	return self->isRoot();
}

bool QDir_IsRelativePath(const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	return QDir::isRelativePath(path_QString);
}

bool QDir_IsAbsolutePath(const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	return QDir::isAbsolutePath(path_QString);
}

bool QDir_IsRelative(QDir* self) {
	return self->isRelative();
}

bool QDir_IsAbsolute(QDir* self) {
	return self->isAbsolute();
}

bool QDir_MakeAbsolute(QDir* self) {
	return self->makeAbsolute();
}

bool QDir_OperatorEqual(QDir* self, QDir* dir) {
	return self->operator==(*dir);
}

bool QDir_OperatorNotEqual(QDir* self, QDir* dir) {
	return self->operator!=(*dir);
}

bool QDir_Remove(QDir* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return self->remove(fileName_QString);
}

bool QDir_Rename(QDir* self, const char* oldName, size_t oldName_Strlen, const char* newName, size_t newName_Strlen) {
	QString oldName_QString = QString::fromUtf8(oldName, oldName_Strlen);
	QString newName_QString = QString::fromUtf8(newName, newName_Strlen);
	return self->rename(oldName_QString, newName_QString);
}

bool QDir_ExistsWithName(QDir* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return self->exists(name_QString);
}

void QDir_Drives(QFileInfo*** _out, size_t* _out_len) {
	QList<QFileInfo> ret = QDir::drives();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QFileInfo** __out = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QFileInfo(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QChar* QDir_ListSeparator() {
	QChar ret = QDir::listSeparator();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QDir_Separator() {
	QChar ret = QDir::separator();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

bool QDir_SetCurrent(const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	return QDir::setCurrent(path_QString);
}

QDir* QDir_Current() {
	QDir ret = QDir::current();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(ret));
}

void QDir_CurrentPath(char** _out, int* _out_Strlen) {
	QString ret = QDir::currentPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDir* QDir_Home() {
	QDir ret = QDir::home();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(ret));
}

void QDir_HomePath(char** _out, int* _out_Strlen) {
	QString ret = QDir::homePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDir* QDir_Root() {
	QDir ret = QDir::root();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(ret));
}

void QDir_RootPath(char** _out, int* _out_Strlen) {
	QString ret = QDir::rootPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDir* QDir_Temp() {
	QDir ret = QDir::temp();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(ret));
}

void QDir_TempPath(char** _out, int* _out_Strlen) {
	QString ret = QDir::tempPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QDir_Match(char** filters, uint64_t* filters_Lengths, size_t filters_len, const char* fileName, size_t fileName_Strlen) {
	QList<QString> filters_QList;
	filters_QList.reserve(filters_len);
	for(size_t i = 0; i < filters_len; ++i) {
		filters_QList.push_back(QString::fromUtf8(filters[i], filters_Lengths[i]));
	}
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return QDir::match(filters_QList, fileName_QString);
}

bool QDir_Match2(const char* filter, size_t filter_Strlen, const char* fileName, size_t fileName_Strlen) {
	QString filter_QString = QString::fromUtf8(filter, filter_Strlen);
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return QDir::match(filter_QString, fileName_QString);
}

void QDir_CleanPath(const char* path, size_t path_Strlen, char** _out, int* _out_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QString ret = QDir::cleanPath(path_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDir_Refresh(QDir* self) {
	self->refresh();
}

void QDir_Delete(QDir* self) {
	delete self;
}

