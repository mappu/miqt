#include <QMetaObject>
#include <QObject>
#include <QSharedMemory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qsharedmemory.h"

#include "gen_qsharedmemory.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSharedMemory* QSharedMemory_new() {
	return new QSharedMemory();
}

QSharedMemory* QSharedMemory_new2(const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return new QSharedMemory(key_QString);
}

QSharedMemory* QSharedMemory_new3(QObject* parent) {
	return new QSharedMemory(parent);
}

QSharedMemory* QSharedMemory_new4(const char* key, size_t key_Strlen, QObject* parent) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return new QSharedMemory(key_QString, parent);
}

QMetaObject* QSharedMemory_MetaObject(QSharedMemory* self) {
	return (QMetaObject*) const_cast<const QSharedMemory*>(self)->metaObject();
}

void QSharedMemory_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSharedMemory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSharedMemory::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_SetKey(QSharedMemory* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->setKey(key_QString);
}

void QSharedMemory_Key(QSharedMemory* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QSharedMemory*>(self)->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_SetNativeKey(QSharedMemory* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->setNativeKey(key_QString);
}

void QSharedMemory_NativeKey(QSharedMemory* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QSharedMemory*>(self)->nativeKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QSharedMemory_Create(QSharedMemory* self, int size) {
	return self->create(static_cast<int>(size));
}

int QSharedMemory_Size(QSharedMemory* self) {
	return const_cast<const QSharedMemory*>(self)->size();
}

bool QSharedMemory_Attach(QSharedMemory* self) {
	return self->attach();
}

bool QSharedMemory_IsAttached(QSharedMemory* self) {
	return const_cast<const QSharedMemory*>(self)->isAttached();
}

bool QSharedMemory_Detach(QSharedMemory* self) {
	return self->detach();
}

bool QSharedMemory_Lock(QSharedMemory* self) {
	return self->lock();
}

bool QSharedMemory_Unlock(QSharedMemory* self) {
	return self->unlock();
}

uintptr_t QSharedMemory_Error(QSharedMemory* self) {
	QSharedMemory::SharedMemoryError ret = const_cast<const QSharedMemory*>(self)->error();
	return static_cast<uintptr_t>(ret);
}

void QSharedMemory_ErrorString(QSharedMemory* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QSharedMemory*>(self)->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSharedMemory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSharedMemory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSharedMemory::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSharedMemory::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QSharedMemory_Create2(QSharedMemory* self, int size, uintptr_t mode) {
	return self->create(static_cast<int>(size), static_cast<QSharedMemory::AccessMode>(mode));
}

bool QSharedMemory_Attach1(QSharedMemory* self, uintptr_t mode) {
	return self->attach(static_cast<QSharedMemory::AccessMode>(mode));
}

void QSharedMemory_Delete(QSharedMemory* self) {
	delete self;
}

