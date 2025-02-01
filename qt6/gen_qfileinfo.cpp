#include <QDateTime>
#include <QDir>
#include <QFileDevice>
#include <QFileInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfileinfo.h>
#include "gen_qfileinfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QFileInfo* QFileInfo_new() {
	return new QFileInfo();
}

QFileInfo* QFileInfo_new2(struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new QFileInfo(file_QString);
}

QFileInfo* QFileInfo_new3(QFileDevice* file) {
	return new QFileInfo(*file);
}

QFileInfo* QFileInfo_new4(QDir* dir, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new QFileInfo(*dir, file_QString);
}

QFileInfo* QFileInfo_new5(QFileInfo* fileinfo) {
	return new QFileInfo(*fileinfo);
}

void QFileInfo_operatorAssign(QFileInfo* self, QFileInfo* fileinfo) {
	self->operator=(*fileinfo);
}

void QFileInfo_swap(QFileInfo* self, QFileInfo* other) {
	self->swap(*other);
}

bool QFileInfo_operatorEqual(const QFileInfo* self, QFileInfo* fileinfo) {
	return (*self == *fileinfo);
}

bool QFileInfo_operatorNotEqual(const QFileInfo* self, QFileInfo* fileinfo) {
	return (*self != *fileinfo);
}

void QFileInfo_setFile(QFileInfo* self, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	self->setFile(file_QString);
}

void QFileInfo_setFileWithFile(QFileInfo* self, QFileDevice* file) {
	self->setFile(*file);
}

void QFileInfo_setFile2(QFileInfo* self, QDir* dir, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	self->setFile(*dir, file_QString);
}

bool QFileInfo_exists(const QFileInfo* self) {
	return self->exists();
}

bool QFileInfo_existsWithFile(struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return QFileInfo::exists(file_QString);
}

void QFileInfo_refresh(QFileInfo* self) {
	self->refresh();
}

struct miqt_string QFileInfo_filePath(const QFileInfo* self) {
	QString _ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_absoluteFilePath(const QFileInfo* self) {
	QString _ret = self->absoluteFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_canonicalFilePath(const QFileInfo* self) {
	QString _ret = self->canonicalFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_fileName(const QFileInfo* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_baseName(const QFileInfo* self) {
	QString _ret = self->baseName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_completeBaseName(const QFileInfo* self) {
	QString _ret = self->completeBaseName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_suffix(const QFileInfo* self) {
	QString _ret = self->suffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_bundleName(const QFileInfo* self) {
	QString _ret = self->bundleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_completeSuffix(const QFileInfo* self) {
	QString _ret = self->completeSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_path(const QFileInfo* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_absolutePath(const QFileInfo* self) {
	QString _ret = self->absolutePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_canonicalPath(const QFileInfo* self) {
	QString _ret = self->canonicalPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QFileInfo_dir(const QFileInfo* self) {
	return new QDir(self->dir());
}

QDir* QFileInfo_absoluteDir(const QFileInfo* self) {
	return new QDir(self->absoluteDir());
}

bool QFileInfo_isReadable(const QFileInfo* self) {
	return self->isReadable();
}

bool QFileInfo_isWritable(const QFileInfo* self) {
	return self->isWritable();
}

bool QFileInfo_isExecutable(const QFileInfo* self) {
	return self->isExecutable();
}

bool QFileInfo_isHidden(const QFileInfo* self) {
	return self->isHidden();
}

bool QFileInfo_isNativePath(const QFileInfo* self) {
	return self->isNativePath();
}

bool QFileInfo_isRelative(const QFileInfo* self) {
	return self->isRelative();
}

bool QFileInfo_isAbsolute(const QFileInfo* self) {
	return self->isAbsolute();
}

bool QFileInfo_makeAbsolute(QFileInfo* self) {
	return self->makeAbsolute();
}

bool QFileInfo_isFile(const QFileInfo* self) {
	return self->isFile();
}

bool QFileInfo_isDir(const QFileInfo* self) {
	return self->isDir();
}

bool QFileInfo_isSymLink(const QFileInfo* self) {
	return self->isSymLink();
}

bool QFileInfo_isSymbolicLink(const QFileInfo* self) {
	return self->isSymbolicLink();
}

bool QFileInfo_isShortcut(const QFileInfo* self) {
	return self->isShortcut();
}

bool QFileInfo_isAlias(const QFileInfo* self) {
	return self->isAlias();
}

bool QFileInfo_isJunction(const QFileInfo* self) {
	return self->isJunction();
}

bool QFileInfo_isRoot(const QFileInfo* self) {
	return self->isRoot();
}

bool QFileInfo_isBundle(const QFileInfo* self) {
	return self->isBundle();
}

struct miqt_string QFileInfo_symLinkTarget(const QFileInfo* self) {
	QString _ret = self->symLinkTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_junctionTarget(const QFileInfo* self) {
	QString _ret = self->junctionTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_owner(const QFileInfo* self) {
	QString _ret = self->owner();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QFileInfo_ownerId(const QFileInfo* self) {
	uint _ret = self->ownerId();
	return static_cast<unsigned int>(_ret);
}

struct miqt_string QFileInfo_group(const QFileInfo* self) {
	QString _ret = self->group();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QFileInfo_groupId(const QFileInfo* self) {
	uint _ret = self->groupId();
	return static_cast<unsigned int>(_ret);
}

bool QFileInfo_permission(const QFileInfo* self, int permissions) {
	return self->permission(static_cast<QFile::Permissions>(permissions));
}

int QFileInfo_permissions(const QFileInfo* self) {
	QFile::Permissions _ret = self->permissions();
	return static_cast<int>(_ret);
}

long long QFileInfo_size(const QFileInfo* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

QDateTime* QFileInfo_birthTime(const QFileInfo* self) {
	return new QDateTime(self->birthTime());
}

QDateTime* QFileInfo_metadataChangeTime(const QFileInfo* self) {
	return new QDateTime(self->metadataChangeTime());
}

QDateTime* QFileInfo_lastModified(const QFileInfo* self) {
	return new QDateTime(self->lastModified());
}

QDateTime* QFileInfo_lastRead(const QFileInfo* self) {
	return new QDateTime(self->lastRead());
}

QDateTime* QFileInfo_fileTime(const QFileInfo* self, int time) {
	return new QDateTime(self->fileTime(static_cast<QFile::FileTime>(time)));
}

bool QFileInfo_caching(const QFileInfo* self) {
	return self->caching();
}

void QFileInfo_setCaching(QFileInfo* self, bool on) {
	self->setCaching(on);
}

void QFileInfo_stat(QFileInfo* self) {
	self->stat();
}

void QFileInfo_delete(QFileInfo* self) {
	delete self;
}

