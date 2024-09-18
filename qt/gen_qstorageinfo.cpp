#include <QByteArray>
#include <QDir>
#include <QList>
#include <QStorageInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qstorageinfo.h"
#include "gen_qstorageinfo.h"
#include "_cgo_export.h"

QStorageInfo* QStorageInfo_new() {
	return new QStorageInfo();
}

QStorageInfo* QStorageInfo_new2(struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
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

void QStorageInfo_SetPath(QStorageInfo* self, struct miqt_string* path) {
	QString path_QString = QString::fromUtf8(&path->data, path->len);
	self->setPath(path_QString);
}

struct miqt_string* QStorageInfo_RootPath(const QStorageInfo* self) {
	QString _ret = self->rootPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QByteArray* QStorageInfo_Device(const QStorageInfo* self) {
	return new QByteArray(self->device());
}

QByteArray* QStorageInfo_Subvolume(const QStorageInfo* self) {
	return new QByteArray(self->subvolume());
}

QByteArray* QStorageInfo_FileSystemType(const QStorageInfo* self) {
	return new QByteArray(self->fileSystemType());
}

struct miqt_string* QStorageInfo_Name(const QStorageInfo* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStorageInfo_DisplayName(const QStorageInfo* self) {
	QString _ret = self->displayName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

long long QStorageInfo_BytesTotal(const QStorageInfo* self) {
	qint64 _ret = self->bytesTotal();
	return static_cast<long long>(_ret);
}

long long QStorageInfo_BytesFree(const QStorageInfo* self) {
	qint64 _ret = self->bytesFree();
	return static_cast<long long>(_ret);
}

long long QStorageInfo_BytesAvailable(const QStorageInfo* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
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

struct miqt_array* QStorageInfo_MountedVolumes() {
	QList<QStorageInfo> _ret = QStorageInfo::mountedVolumes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QStorageInfo** _arr = static_cast<QStorageInfo**>(malloc(sizeof(QStorageInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QStorageInfo(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QStorageInfo* QStorageInfo_Root() {
	return new QStorageInfo(QStorageInfo::root());
}

void QStorageInfo_Delete(QStorageInfo* self) {
	delete self;
}

