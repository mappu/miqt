#include <QByteArray>
#include <QFile>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qfile.h"
#include "gen_qfile.h"
#include "_cgo_export.h"

QFile* QFile_new() {
	return new QFile();
}

QFile* QFile_new2(struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	return new QFile(name_QString);
}

QFile* QFile_new3(QObject* parent) {
	return new QFile(parent);
}

QFile* QFile_new4(struct miqt_string* name, QObject* parent) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	return new QFile(name_QString, parent);
}

QMetaObject* QFile_MetaObject(const QFile* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QFile_Tr(const char* s) {
	QString _ret = QFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFile_TrUtf8(const char* s) {
	QString _ret = QFile::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFile_FileName(const QFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QFile_SetFileName(QFile* self, struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	self->setFileName(name_QString);
}

QByteArray* QFile_EncodeName(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	QByteArray _ret = QFile::encodeName(fileName_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_string* QFile_DecodeName(QByteArray* localFileName) {
	QString _ret = QFile::decodeName(*localFileName);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFile_DecodeNameWithLocalFileName(const char* localFileName) {
	QString _ret = QFile::decodeName(localFileName);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QFile_Exists(const QFile* self) {
	return self->exists();
}

bool QFile_ExistsWithFileName(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return QFile::exists(fileName_QString);
}

struct miqt_string* QFile_ReadLink(const QFile* self) {
	QString _ret = self->readLink();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFile_ReadLinkWithFileName(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	QString _ret = QFile::readLink(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFile_SymLinkTarget(const QFile* self) {
	QString _ret = self->symLinkTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFile_SymLinkTargetWithFileName(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	QString _ret = QFile::symLinkTarget(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QFile_Remove(QFile* self) {
	return self->remove();
}

bool QFile_RemoveWithFileName(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return QFile::remove(fileName_QString);
}

bool QFile_MoveToTrash(QFile* self) {
	return self->moveToTrash();
}

bool QFile_MoveToTrashWithFileName(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return QFile::moveToTrash(fileName_QString);
}

bool QFile_Rename(QFile* self, struct miqt_string* newName) {
	QString newName_QString = QString::fromUtf8(&newName->data, newName->len);
	return self->rename(newName_QString);
}

bool QFile_Rename2(struct miqt_string* oldName, struct miqt_string* newName) {
	QString oldName_QString = QString::fromUtf8(&oldName->data, oldName->len);
	QString newName_QString = QString::fromUtf8(&newName->data, newName->len);
	return QFile::rename(oldName_QString, newName_QString);
}

bool QFile_Link(QFile* self, struct miqt_string* newName) {
	QString newName_QString = QString::fromUtf8(&newName->data, newName->len);
	return self->link(newName_QString);
}

bool QFile_Link2(struct miqt_string* oldname, struct miqt_string* newName) {
	QString oldname_QString = QString::fromUtf8(&oldname->data, oldname->len);
	QString newName_QString = QString::fromUtf8(&newName->data, newName->len);
	return QFile::link(oldname_QString, newName_QString);
}

bool QFile_Copy(QFile* self, struct miqt_string* newName) {
	QString newName_QString = QString::fromUtf8(&newName->data, newName->len);
	return self->copy(newName_QString);
}

bool QFile_Copy2(struct miqt_string* fileName, struct miqt_string* newName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	QString newName_QString = QString::fromUtf8(&newName->data, newName->len);
	return QFile::copy(fileName_QString, newName_QString);
}

bool QFile_Open(QFile* self, int flags) {
	return self->open(static_cast<QIODevice::OpenMode>(flags));
}

bool QFile_Open3(QFile* self, int fd, int ioFlags) {
	return self->open(static_cast<int>(fd), static_cast<QIODevice::OpenMode>(ioFlags));
}

long long QFile_Size(const QFile* self) {
	return self->size();
}

bool QFile_Resize(QFile* self, long long sz) {
	return self->resize(static_cast<qint64>(sz));
}

bool QFile_Resize2(struct miqt_string* filename, long long sz) {
	QString filename_QString = QString::fromUtf8(&filename->data, filename->len);
	return QFile::resize(filename_QString, static_cast<qint64>(sz));
}

int QFile_Permissions(const QFile* self) {
	QFileDevice::Permissions _ret = self->permissions();
	return static_cast<int>(_ret);
}

int QFile_PermissionsWithFilename(struct miqt_string* filename) {
	QString filename_QString = QString::fromUtf8(&filename->data, filename->len);
	QFileDevice::Permissions _ret = QFile::permissions(filename_QString);
	return static_cast<int>(_ret);
}

bool QFile_SetPermissions(QFile* self, int permissionSpec) {
	return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

bool QFile_SetPermissions2(struct miqt_string* filename, int permissionSpec) {
	QString filename_QString = QString::fromUtf8(&filename->data, filename->len);
	return QFile::setPermissions(filename_QString, static_cast<QFileDevice::Permissions>(permissionSpec));
}

struct miqt_string* QFile_Tr2(const char* s, const char* c) {
	QString _ret = QFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFile_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFile_TrUtf82(const char* s, const char* c) {
	QString _ret = QFile::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFile_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QFile::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags) {
	return self->open(static_cast<int>(fd), static_cast<QIODevice::OpenMode>(ioFlags), static_cast<QFileDevice::FileHandleFlags>(handleFlags));
}

void QFile_Delete(QFile* self) {
	delete self;
}

