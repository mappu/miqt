#include <QByteArray>
#include <QDir>
#include <QList>
#include <QStorageInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qstorageinfo.h>
#include "gen_qstorageinfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QStorageInfo* QStorageInfo_new() {
	return new QStorageInfo();
}

QStorageInfo* QStorageInfo_new2(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QStorageInfo(path_QString);
}

QStorageInfo* QStorageInfo_new3(QDir* dir) {
	return new QStorageInfo(*dir);
}

QStorageInfo* QStorageInfo_new4(QStorageInfo* other) {
	return new QStorageInfo(*other);
}

void QStorageInfo_operatorAssign(QStorageInfo* self, QStorageInfo* other) {
	self->operator=(*other);
}

void QStorageInfo_swap(QStorageInfo* self, QStorageInfo* other) {
	self->swap(*other);
}

void QStorageInfo_setPath(QStorageInfo* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPath(path_QString);
}

struct miqt_string QStorageInfo_rootPath(const QStorageInfo* self) {
	QString _ret = self->rootPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStorageInfo_device(const QStorageInfo* self) {
	QByteArray _qb = self->device();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QStorageInfo_subvolume(const QStorageInfo* self) {
	QByteArray _qb = self->subvolume();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QStorageInfo_fileSystemType(const QStorageInfo* self) {
	QByteArray _qb = self->fileSystemType();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QStorageInfo_name(const QStorageInfo* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStorageInfo_displayName(const QStorageInfo* self) {
	QString _ret = self->displayName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QStorageInfo_bytesTotal(const QStorageInfo* self) {
	qint64 _ret = self->bytesTotal();
	return static_cast<long long>(_ret);
}

long long QStorageInfo_bytesFree(const QStorageInfo* self) {
	qint64 _ret = self->bytesFree();
	return static_cast<long long>(_ret);
}

long long QStorageInfo_bytesAvailable(const QStorageInfo* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

int QStorageInfo_blockSize(const QStorageInfo* self) {
	return self->blockSize();
}

bool QStorageInfo_isRoot(const QStorageInfo* self) {
	return self->isRoot();
}

bool QStorageInfo_isReadOnly(const QStorageInfo* self) {
	return self->isReadOnly();
}

bool QStorageInfo_isReady(const QStorageInfo* self) {
	return self->isReady();
}

bool QStorageInfo_isValid(const QStorageInfo* self) {
	return self->isValid();
}

void QStorageInfo_refresh(QStorageInfo* self) {
	self->refresh();
}

struct miqt_array /* of QStorageInfo* */  QStorageInfo_mountedVolumes() {
	QList<QStorageInfo> _ret = QStorageInfo::mountedVolumes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QStorageInfo** _arr = static_cast<QStorageInfo**>(malloc(sizeof(QStorageInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QStorageInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QStorageInfo* QStorageInfo_root() {
	return new QStorageInfo(QStorageInfo::root());
}

void QStorageInfo_delete(QStorageInfo* self) {
	delete self;
}

