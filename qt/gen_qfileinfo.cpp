#include "gen_qfileinfo.h"
#include "qfileinfo.h"

#include <QDateTime>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QString>


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
	return self->operator==(*fileinfo);
}

bool QFileInfo_OperatorNotEqual(QFileInfo* self, QFileInfo* fileinfo) {
	return self->operator!=(*fileinfo);
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
	return self->exists();
}

bool QFileInfo_ExistsWithFile(const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	return QFileInfo::exists(file_QString);
}

void QFileInfo_Refresh(QFileInfo* self) {
	self->refresh();
}

void QFileInfo_FilePath(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_AbsoluteFilePath(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->absoluteFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_CanonicalFilePath(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->canonicalFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_FileName(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_BaseName(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->baseName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_CompleteBaseName(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->completeBaseName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_Suffix(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->suffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_BundleName(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->bundleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_CompleteSuffix(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->completeSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_Path(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_AbsolutePath(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->absolutePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_CanonicalPath(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->canonicalPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDir* QFileInfo_Dir(QFileInfo* self) {
	QDir ret = self->dir();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(ret));
}

QDir* QFileInfo_AbsoluteDir(QFileInfo* self) {
	QDir ret = self->absoluteDir();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDir*>(new QDir(ret));
}

bool QFileInfo_IsReadable(QFileInfo* self) {
	return self->isReadable();
}

bool QFileInfo_IsWritable(QFileInfo* self) {
	return self->isWritable();
}

bool QFileInfo_IsExecutable(QFileInfo* self) {
	return self->isExecutable();
}

bool QFileInfo_IsHidden(QFileInfo* self) {
	return self->isHidden();
}

bool QFileInfo_IsNativePath(QFileInfo* self) {
	return self->isNativePath();
}

bool QFileInfo_IsRelative(QFileInfo* self) {
	return self->isRelative();
}

bool QFileInfo_IsAbsolute(QFileInfo* self) {
	return self->isAbsolute();
}

bool QFileInfo_MakeAbsolute(QFileInfo* self) {
	return self->makeAbsolute();
}

bool QFileInfo_IsFile(QFileInfo* self) {
	return self->isFile();
}

bool QFileInfo_IsDir(QFileInfo* self) {
	return self->isDir();
}

bool QFileInfo_IsSymLink(QFileInfo* self) {
	return self->isSymLink();
}

bool QFileInfo_IsSymbolicLink(QFileInfo* self) {
	return self->isSymbolicLink();
}

bool QFileInfo_IsShortcut(QFileInfo* self) {
	return self->isShortcut();
}

bool QFileInfo_IsJunction(QFileInfo* self) {
	return self->isJunction();
}

bool QFileInfo_IsRoot(QFileInfo* self) {
	return self->isRoot();
}

bool QFileInfo_IsBundle(QFileInfo* self) {
	return self->isBundle();
}

void QFileInfo_ReadLink(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->readLink();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_SymLinkTarget(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->symLinkTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileInfo_Owner(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->owner();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

unsigned int QFileInfo_OwnerId(QFileInfo* self) {
	return self->ownerId();
}

void QFileInfo_Group(QFileInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->group();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

unsigned int QFileInfo_GroupId(QFileInfo* self) {
	return self->groupId();
}

int64_t QFileInfo_Size(QFileInfo* self) {
	return self->size();
}

QDateTime* QFileInfo_Created(QFileInfo* self) {
	QDateTime ret = self->created();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QFileInfo_BirthTime(QFileInfo* self) {
	QDateTime ret = self->birthTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QFileInfo_MetadataChangeTime(QFileInfo* self) {
	QDateTime ret = self->metadataChangeTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QFileInfo_LastModified(QFileInfo* self) {
	QDateTime ret = self->lastModified();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDateTime* QFileInfo_LastRead(QFileInfo* self) {
	QDateTime ret = self->lastRead();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

bool QFileInfo_Caching(QFileInfo* self) {
	return self->caching();
}

void QFileInfo_SetCaching(QFileInfo* self, bool on) {
	self->setCaching(on);
}

void QFileInfo_Delete(QFileInfo* self) {
	delete self;
}

