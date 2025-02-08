#include <QDateTime>
#include <QFileDevice>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfiledevice.h>
#include "gen_qfiledevice.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QFileDevice_virtbase(QFileDevice* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QFileDevice_metaObject(const QFileDevice* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFileDevice_metacast(QFileDevice* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFileDevice_tr(const char* s) {
	QString _ret = QFileDevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDevice_trUtf8(const char* s) {
	QString _ret = QFileDevice::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFileDevice_error(const QFileDevice* self) {
	QFileDevice::FileError _ret = self->error();
	return static_cast<int>(_ret);
}

void QFileDevice_unsetError(QFileDevice* self) {
	self->unsetError();
}

void QFileDevice_close(QFileDevice* self) {
	self->close();
}

bool QFileDevice_isSequential(const QFileDevice* self) {
	return self->isSequential();
}

int QFileDevice_handle(const QFileDevice* self) {
	return self->handle();
}

struct miqt_string QFileDevice_fileName(const QFileDevice* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QFileDevice_pos(const QFileDevice* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

bool QFileDevice_seek(QFileDevice* self, long long offset) {
	return self->seek(static_cast<qint64>(offset));
}

bool QFileDevice_atEnd(const QFileDevice* self) {
	return self->atEnd();
}

bool QFileDevice_flush(QFileDevice* self) {
	return self->flush();
}

long long QFileDevice_size(const QFileDevice* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QFileDevice_resize(QFileDevice* self, long long sz) {
	return self->resize(static_cast<qint64>(sz));
}

int QFileDevice_permissions(const QFileDevice* self) {
	QFileDevice::Permissions _ret = self->permissions();
	return static_cast<int>(_ret);
}

bool QFileDevice_setPermissions(QFileDevice* self, int permissionSpec) {
	return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

unsigned char* QFileDevice_map(QFileDevice* self, long long offset, long long size) {
	uchar* _ret = self->map(static_cast<qint64>(offset), static_cast<qint64>(size));
	return static_cast<unsigned char*>(_ret);
}

bool QFileDevice_unmap(QFileDevice* self, unsigned char* address) {
	return self->unmap(static_cast<uchar*>(address));
}

QDateTime* QFileDevice_fileTime(const QFileDevice* self, int time) {
	return new QDateTime(self->fileTime(static_cast<QFileDevice::FileTime>(time)));
}

bool QFileDevice_setFileTime(QFileDevice* self, QDateTime* newDate, int fileTime) {
	return self->setFileTime(*newDate, static_cast<QFileDevice::FileTime>(fileTime));
}

struct miqt_string QFileDevice_tr2(const char* s, const char* c) {
	QString _ret = QFileDevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDevice_tr3(const char* s, const char* c, int n) {
	QString _ret = QFileDevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDevice_trUtf82(const char* s, const char* c) {
	QString _ret = QFileDevice::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDevice_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QFileDevice::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned char* QFileDevice_map3(QFileDevice* self, long long offset, long long size, int flags) {
	uchar* _ret = self->map(static_cast<qint64>(offset), static_cast<qint64>(size), static_cast<QFileDevice::MemoryMapFlags>(flags));
	return static_cast<unsigned char*>(_ret);
}

void QFileDevice_delete(QFileDevice* self) {
	delete self;
}

