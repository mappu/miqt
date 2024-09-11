#include <QByteArray>
#include <QDir>
#include <QList>
#include <QStorageInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qstorageinfo.h"

#include "gen_qstorageinfo.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStorageInfo* QStorageInfo_new() {
	return new QStorageInfo();
}

QStorageInfo* QStorageInfo_new2(const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	return new QStorageInfo(path_QString);
}

QStorageInfo* QStorageInfo_new3(QDir* dir) {
	return new QStorageInfo(*dir);
}

QStorageInfo* QStorageInfo_new4(QStorageInfo* other) {
	return new QStorageInfo(*other);
}

void QStorageInfo_OperatorAssign(QStorageInfo* self, QStorageInfo* other) {
	self->operator=(*other);
}

void QStorageInfo_Swap(QStorageInfo* self, QStorageInfo* other) {
	self->swap(*other);
}

void QStorageInfo_SetPath(QStorageInfo* self, const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	self->setPath(path_QString);
}

void QStorageInfo_RootPath(const QStorageInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->rootPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QStorageInfo_Device(const QStorageInfo* self) {
	QByteArray ret = self->device();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QStorageInfo_Subvolume(const QStorageInfo* self) {
	QByteArray ret = self->subvolume();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QStorageInfo_FileSystemType(const QStorageInfo* self) {
	QByteArray ret = self->fileSystemType();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QStorageInfo_Name(const QStorageInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStorageInfo_DisplayName(const QStorageInfo* self, char** _out, int* _out_Strlen) {
	QString ret = self->displayName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

long long QStorageInfo_BytesTotal(const QStorageInfo* self) {
	return self->bytesTotal();
}

long long QStorageInfo_BytesFree(const QStorageInfo* self) {
	return self->bytesFree();
}

long long QStorageInfo_BytesAvailable(const QStorageInfo* self) {
	return self->bytesAvailable();
}

int QStorageInfo_BlockSize(const QStorageInfo* self) {
	return self->blockSize();
}

bool QStorageInfo_IsRoot(const QStorageInfo* self) {
	return self->isRoot();
}

bool QStorageInfo_IsReadOnly(const QStorageInfo* self) {
	return self->isReadOnly();
}

bool QStorageInfo_IsReady(const QStorageInfo* self) {
	return self->isReady();
}

bool QStorageInfo_IsValid(const QStorageInfo* self) {
	return self->isValid();
}

void QStorageInfo_Refresh(QStorageInfo* self) {
	self->refresh();
}

void QStorageInfo_MountedVolumes(QStorageInfo*** _out, size_t* _out_len) {
	QList<QStorageInfo> ret = QStorageInfo::mountedVolumes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QStorageInfo** __out = static_cast<QStorageInfo**>(malloc(sizeof(QStorageInfo**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QStorageInfo(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QStorageInfo* QStorageInfo_Root() {
	QStorageInfo ret = QStorageInfo::root();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QStorageInfo*>(new QStorageInfo(ret));
}

void QStorageInfo_Delete(QStorageInfo* self) {
	delete self;
}

