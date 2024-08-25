#include "gen_qsharedmemory.h"
#include "qsharedmemory.h"

#include <QMetaObject>
#include <QObject>
#include <QSharedMemory>
#include <QString>


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
	return (QMetaObject*) self->metaObject();
}

void QSharedMemory_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSharedMemory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_TrUtf8(char* s, char** _out, int* _out_Strlen) {
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
	QString ret = self->key();
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
	QString ret = self->nativeKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QSharedMemory_Size(QSharedMemory* self) {
	return self->size();
}

bool QSharedMemory_IsAttached(QSharedMemory* self) {
	return self->isAttached();
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

void QSharedMemory_ErrorString(QSharedMemory* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSharedMemory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSharedMemory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSharedMemory::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSharedMemory::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSharedMemory_Delete(QSharedMemory* self) {
	delete self;
}

