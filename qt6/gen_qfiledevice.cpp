#include <QDateTime>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
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

QMetaObject* QFileDevice_MetaObject(const QFileDevice* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFileDevice_Metacast(QFileDevice* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFileDevice_Tr(const char* s) {
	QString _ret = QFileDevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFileDevice_Error(const QFileDevice* self) {
	QFileDevice::FileError _ret = self->error();
	return static_cast<int>(_ret);
}

void QFileDevice_UnsetError(QFileDevice* self) {
	self->unsetError();
}

void QFileDevice_Close(QFileDevice* self) {
	self->close();
}

bool QFileDevice_IsSequential(const QFileDevice* self) {
	return self->isSequential();
}

int QFileDevice_Handle(const QFileDevice* self) {
	return self->handle();
}

struct miqt_string QFileDevice_FileName(const QFileDevice* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QFileDevice_Pos(const QFileDevice* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

bool QFileDevice_Seek(QFileDevice* self, long long offset) {
	return self->seek(static_cast<qint64>(offset));
}

bool QFileDevice_AtEnd(const QFileDevice* self) {
	return self->atEnd();
}

bool QFileDevice_Flush(QFileDevice* self) {
	return self->flush();
}

long long QFileDevice_Size(const QFileDevice* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QFileDevice_Resize(QFileDevice* self, long long sz) {
	return self->resize(static_cast<qint64>(sz));
}

int QFileDevice_Permissions(const QFileDevice* self) {
	QFileDevice::Permissions _ret = self->permissions();
	return static_cast<int>(_ret);
}

bool QFileDevice_SetPermissions(QFileDevice* self, int permissionSpec) {
	return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

unsigned char* QFileDevice_Map(QFileDevice* self, long long offset, long long size) {
	uchar* _ret = self->map(static_cast<qint64>(offset), static_cast<qint64>(size));
	return static_cast<unsigned char*>(_ret);
}

bool QFileDevice_Unmap(QFileDevice* self, unsigned char* address) {
	return self->unmap(static_cast<uchar*>(address));
}

QDateTime* QFileDevice_FileTime(const QFileDevice* self, int time) {
	return new QDateTime(self->fileTime(static_cast<QFileDevice::FileTime>(time)));
}

bool QFileDevice_SetFileTime(QFileDevice* self, QDateTime* newDate, int fileTime) {
	return self->setFileTime(*newDate, static_cast<QFileDevice::FileTime>(fileTime));
}

struct miqt_string QFileDevice_Tr2(const char* s, const char* c) {
	QString _ret = QFileDevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDevice_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFileDevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned char* QFileDevice_Map3(QFileDevice* self, long long offset, long long size, int flags) {
	uchar* _ret = self->map(static_cast<qint64>(offset), static_cast<qint64>(size), static_cast<QFileDevice::MemoryMapFlags>(flags));
	return static_cast<unsigned char*>(_ret);
}

void QFileDevice_Delete(QFileDevice* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QFileDevice*>( self );
	} else {
		delete self;
	}
}

