#include <QByteArray>
#include <QFile>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qfile.h"

#include "gen_qfile.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFile* QFile_new() {
	return new QFile();
}

QFile* QFile_new2(const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return new QFile(name_QString);
}

QFile* QFile_new3(QObject* parent) {
	return new QFile(parent);
}

QFile* QFile_new4(const char* name, size_t name_Strlen, QObject* parent) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return new QFile(name_QString, parent);
}

QMetaObject* QFile_MetaObject(QFile* self) {
	return (QMetaObject*) const_cast<const QFile*>(self)->metaObject();
}

void QFile_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFile_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFile::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFile_FileName(QFile* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFile*>(self)->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFile_SetFileName(QFile* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setFileName(name_QString);
}

QByteArray* QFile_EncodeName(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QByteArray ret = QFile::encodeName(fileName_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QFile_DecodeName(QByteArray* localFileName, char** _out, int* _out_Strlen) {
	QString ret = QFile::decodeName(*localFileName);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFile_DecodeNameWithLocalFileName(const char* localFileName, char** _out, int* _out_Strlen) {
	QString ret = QFile::decodeName(localFileName);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QFile_Exists(QFile* self) {
	return const_cast<const QFile*>(self)->exists();
}

bool QFile_ExistsWithFileName(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return QFile::exists(fileName_QString);
}

void QFile_ReadLink(QFile* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFile*>(self)->readLink();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFile_ReadLinkWithFileName(const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString ret = QFile::readLink(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFile_SymLinkTarget(QFile* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QFile*>(self)->symLinkTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFile_SymLinkTargetWithFileName(const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString ret = QFile::symLinkTarget(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QFile_Remove(QFile* self) {
	return self->remove();
}

bool QFile_RemoveWithFileName(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return QFile::remove(fileName_QString);
}

bool QFile_MoveToTrash(QFile* self) {
	return self->moveToTrash();
}

bool QFile_MoveToTrashWithFileName(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return QFile::moveToTrash(fileName_QString);
}

bool QFile_Rename(QFile* self, const char* newName, size_t newName_Strlen) {
	QString newName_QString = QString::fromUtf8(newName, newName_Strlen);
	return self->rename(newName_QString);
}

bool QFile_Rename2(const char* oldName, size_t oldName_Strlen, const char* newName, size_t newName_Strlen) {
	QString oldName_QString = QString::fromUtf8(oldName, oldName_Strlen);
	QString newName_QString = QString::fromUtf8(newName, newName_Strlen);
	return QFile::rename(oldName_QString, newName_QString);
}

bool QFile_Link(QFile* self, const char* newName, size_t newName_Strlen) {
	QString newName_QString = QString::fromUtf8(newName, newName_Strlen);
	return self->link(newName_QString);
}

bool QFile_Link2(const char* oldname, size_t oldname_Strlen, const char* newName, size_t newName_Strlen) {
	QString oldname_QString = QString::fromUtf8(oldname, oldname_Strlen);
	QString newName_QString = QString::fromUtf8(newName, newName_Strlen);
	return QFile::link(oldname_QString, newName_QString);
}

bool QFile_Copy(QFile* self, const char* newName, size_t newName_Strlen) {
	QString newName_QString = QString::fromUtf8(newName, newName_Strlen);
	return self->copy(newName_QString);
}

bool QFile_Copy2(const char* fileName, size_t fileName_Strlen, const char* newName, size_t newName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString newName_QString = QString::fromUtf8(newName, newName_Strlen);
	return QFile::copy(fileName_QString, newName_QString);
}

bool QFile_Open(QFile* self, int flags) {
	return self->open(static_cast<QIODevice::OpenMode>(flags));
}

bool QFile_Open3(QFile* self, int fd, int ioFlags) {
	return self->open(static_cast<int>(fd), static_cast<QIODevice::OpenMode>(ioFlags));
}

long long QFile_Size(QFile* self) {
	return const_cast<const QFile*>(self)->size();
}

bool QFile_Resize(QFile* self, long long sz) {
	return self->resize(static_cast<qint64>(sz));
}

bool QFile_Resize2(const char* filename, size_t filename_Strlen, long long sz) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	return QFile::resize(filename_QString, static_cast<qint64>(sz));
}

int QFile_Permissions(QFile* self) {
	QFileDevice::Permissions ret = const_cast<const QFile*>(self)->permissions();
	return static_cast<int>(ret);
}

int QFile_PermissionsWithFilename(const char* filename, size_t filename_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	QFileDevice::Permissions ret = QFile::permissions(filename_QString);
	return static_cast<int>(ret);
}

bool QFile_SetPermissions(QFile* self, int permissionSpec) {
	return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

bool QFile_SetPermissions2(const char* filename, size_t filename_Strlen, int permissionSpec) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	return QFile::setPermissions(filename_QString, static_cast<QFileDevice::Permissions>(permissionSpec));
}

void QFile_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFile_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFile_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFile::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFile_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFile::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags) {
	return self->open(static_cast<int>(fd), static_cast<QIODevice::OpenMode>(ioFlags), static_cast<QFileDevice::FileHandleFlags>(handleFlags));
}

void QFile_Delete(QFile* self) {
	delete self;
}

