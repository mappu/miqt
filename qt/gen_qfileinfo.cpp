#include <QDateTime>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qfileinfo.h"

#include "gen_qfileinfo.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFileInfo* QFileInfo_new() {
	return new QFileInfo();
}

QFileInfo* QFileInfo_new2(const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	return new QFileInfo(file_QString);
}

QFileInfo* QFileInfo_new3(QFile* file) {
	return new QFileInfo(*file);
}

QFileInfo* QFileInfo_new4(QDir* dir, const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	return new QFileInfo(*dir, file_QString);
}

QFileInfo* QFileInfo_new5(QFileInfo* fileinfo) {
	return new QFileInfo(*fileinfo);
}

void QFileInfo_OperatorAssign(QFileInfo* self, QFileInfo* fileinfo) {
	self->operator=(*fileinfo);
}

void QFileInfo_Swap(QFileInfo* self, QFileInfo* other) {
	self->swap(*other);
}

bool QFileInfo_OperatorEqual(QFileInfo* self, QFileInfo* fileinfo) {
	return const_cast<const QFileInfo*>(self)->operator==(*fileinfo);
}

bool QFileInfo_OperatorNotEqual(QFileInfo* self, QFileInfo* fileinfo) {
	return const_cast<const QFileInfo*>(self)->operator!=(*fileinfo);
}

void QFileInfo_SetFile(QFileInfo* self, const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	self->setFile(file_QString);
}

void QFileInfo_SetFileWithFile(QFileInfo* self, QFile* file) {
	self->setFile(*file);
}

void QFileInfo_SetFile2(QFileInfo* self, QDir* dir, const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	self->setFile(*dir, file_QString);
}

bool QFileInfo_Exists(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->exists();
}

bool QFileInfo_ExistsWithFile(const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	return QFileInfo::exists(file_QString);
}

void QFileInfo_Refresh(QFileInfo* self) {
	self->refresh();
}

void QFileInfo_FilePath(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_AbsoluteFilePath(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->absoluteFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_CanonicalFilePath(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->canonicalFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_FileName(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_BaseName(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->baseName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_CompleteBaseName(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->completeBaseName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_Suffix(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->suffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_BundleName(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->bundleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_CompleteSuffix(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->completeSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_Path(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_AbsolutePath(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->absolutePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_CanonicalPath(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->canonicalPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDir* QFileInfo_Dir(QFileInfo* self) {
	QDir ret = const_cast<const QFileInfo*>(self)->dir();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(ret));
}

QDir* QFileInfo_AbsoluteDir(QFileInfo* self) {
	QDir ret = const_cast<const QFileInfo*>(self)->absoluteDir();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(ret));
}

bool QFileInfo_IsReadable(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isReadable();
}

bool QFileInfo_IsWritable(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isWritable();
}

bool QFileInfo_IsExecutable(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isExecutable();
}

bool QFileInfo_IsHidden(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isHidden();
}

bool QFileInfo_IsNativePath(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isNativePath();
}

bool QFileInfo_IsRelative(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isRelative();
}

bool QFileInfo_IsAbsolute(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isAbsolute();
}

bool QFileInfo_MakeAbsolute(QFileInfo* self) {
	return self->makeAbsolute();
}

bool QFileInfo_IsFile(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isFile();
}

bool QFileInfo_IsDir(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isDir();
}

bool QFileInfo_IsSymLink(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isSymLink();
}

bool QFileInfo_IsSymbolicLink(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isSymbolicLink();
}

bool QFileInfo_IsShortcut(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isShortcut();
}

bool QFileInfo_IsJunction(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isJunction();
}

bool QFileInfo_IsRoot(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isRoot();
}

bool QFileInfo_IsBundle(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->isBundle();
}

void QFileInfo_ReadLink(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->readLink();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_SymLinkTarget(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->symLinkTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_Owner(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->owner();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

unsigned int QFileInfo_OwnerId(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->ownerId();
}

void QFileInfo_Group(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFileInfo*>(self)->group();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

unsigned int QFileInfo_GroupId(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->groupId();
}

bool QFileInfo_Permission(QFileInfo* self, int permissions) {
	return const_cast<const QFileInfo*>(self)->permission(static_cast<QFile::Permissions>(permissions));
}

int QFileInfo_Permissions(QFileInfo* self) {
	QFile::Permissions ret = const_cast<const QFileInfo*>(self)->permissions();
	return static_cast<int>(ret);
}

long long QFileInfo_Size(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->size();
}

QDateTime* QFileInfo_Created(QFileInfo* self) {
	QDateTime ret = const_cast<const QFileInfo*>(self)->created();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QFileInfo_BirthTime(QFileInfo* self) {
	QDateTime ret = const_cast<const QFileInfo*>(self)->birthTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QFileInfo_MetadataChangeTime(QFileInfo* self) {
	QDateTime ret = const_cast<const QFileInfo*>(self)->metadataChangeTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QFileInfo_LastModified(QFileInfo* self) {
	QDateTime ret = const_cast<const QFileInfo*>(self)->lastModified();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QFileInfo_LastRead(QFileInfo* self) {
	QDateTime ret = const_cast<const QFileInfo*>(self)->lastRead();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QFileInfo_FileTime(QFileInfo* self, uintptr_t time) {
	QDateTime ret = const_cast<const QFileInfo*>(self)->fileTime(static_cast<QFile::FileTime>(time));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

bool QFileInfo_Caching(QFileInfo* self) {
	return const_cast<const QFileInfo*>(self)->caching();
}

void QFileInfo_SetCaching(QFileInfo* self, bool on) {
	self->setCaching(on);
}

void QFileInfo_Delete(QFileInfo* self) {
	delete self;
}

