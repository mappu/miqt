#include <QDateTime>
#include <QFileDevice>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qfiledevice.h"

#include "gen_qfiledevice.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QFileDevice_MetaObject(const QFileDevice* self) {
	return (QMetaObject*) self->metaObject();
}

void QFileDevice_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDevice_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QFileDevice_Error(const QFileDevice* self) {
	QFileDevice::FileError ret = self->error();
	return static_cast<uintptr_t>(ret);
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

void QFileDevice_FileName(const QFileDevice* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

long long QFileDevice_Pos(const QFileDevice* self) {
	return self->pos();
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
	return self->size();
}

bool QFileDevice_Resize(QFileDevice* self, long long sz) {
	return self->resize(static_cast<qint64>(sz));
}

int QFileDevice_Permissions(const QFileDevice* self) {
	QFileDevice::Permissions ret = self->permissions();
	return static_cast<int>(ret);
}

bool QFileDevice_SetPermissions(QFileDevice* self, int permissionSpec) {
	return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

unsigned char* QFileDevice_Map(QFileDevice* self, long long offset, long long size) {
	return self->map(static_cast<qint64>(offset), static_cast<qint64>(size));
}

bool QFileDevice_Unmap(QFileDevice* self, unsigned char* address) {
	return self->unmap(static_cast<uchar*>(address));
}

QDateTime* QFileDevice_FileTime(const QFileDevice* self, uintptr_t time) {
	QDateTime ret = self->fileTime(static_cast<QFileDevice::FileTime>(time));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

bool QFileDevice_SetFileTime(QFileDevice* self, QDateTime* newDate, uintptr_t fileTime) {
	return self->setFileTime(*newDate, static_cast<QFileDevice::FileTime>(fileTime));
}

void QFileDevice_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDevice_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDevice_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileDevice_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileDevice::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

unsigned char* QFileDevice_Map3(QFileDevice* self, long long offset, long long size, uintptr_t flags) {
	return self->map(static_cast<qint64>(offset), static_cast<qint64>(size), static_cast<QFileDevice::MemoryMapFlags>(flags));
}

void QFileDevice_Delete(QFileDevice* self) {
	delete self;
}

