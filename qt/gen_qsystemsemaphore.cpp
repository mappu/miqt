#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSystemSemaphore>
#include "qsystemsemaphore.h"

#include "gen_qsystemsemaphore.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSystemSemaphore* QSystemSemaphore_new(const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return new QSystemSemaphore(key_QString);
}

QSystemSemaphore* QSystemSemaphore_new2(const char* key, size_t key_Strlen, int initialValue) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return new QSystemSemaphore(key_QString, static_cast<int>(initialValue));
}

QSystemSemaphore* QSystemSemaphore_new3(const char* key, size_t key_Strlen, int initialValue, uintptr_t mode) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return new QSystemSemaphore(key_QString, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(mode));
}

void QSystemSemaphore_SetKey(QSystemSemaphore* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->setKey(key_QString);
}

void QSystemSemaphore_Key(const QSystemSemaphore* self, char** _out, int* _out_Strlen) {
	QString ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QSystemSemaphore_Acquire(QSystemSemaphore* self) {
	return self->acquire();
}

bool QSystemSemaphore_Release(QSystemSemaphore* self) {
	return self->release();
}

uintptr_t QSystemSemaphore_Error(const QSystemSemaphore* self) {
	QSystemSemaphore::SystemSemaphoreError ret = self->error();
	return static_cast<uintptr_t>(ret);
}

void QSystemSemaphore_ErrorString(const QSystemSemaphore* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemSemaphore_SetKey2(QSystemSemaphore* self, const char* key, size_t key_Strlen, int initialValue) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->setKey(key_QString, static_cast<int>(initialValue));
}

void QSystemSemaphore_SetKey3(QSystemSemaphore* self, const char* key, size_t key_Strlen, int initialValue, uintptr_t mode) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->setKey(key_QString, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(mode));
}

bool QSystemSemaphore_Release1(QSystemSemaphore* self, int n) {
	return self->release(static_cast<int>(n));
}

void QSystemSemaphore_Delete(QSystemSemaphore* self) {
	delete self;
}

