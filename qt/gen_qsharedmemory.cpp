#include <QMetaObject>
#include <QObject>
#include <QSharedMemory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qsharedmemory.h"
#include "gen_qsharedmemory.h"
#include "_cgo_export.h"

QSharedMemory* QSharedMemory_new() {
	return new QSharedMemory();
}

QSharedMemory* QSharedMemory_new2(struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QSharedMemory(key_QString);
}

QSharedMemory* QSharedMemory_new3(QObject* parent) {
	return new QSharedMemory(parent);
}

QSharedMemory* QSharedMemory_new4(struct miqt_string* key, QObject* parent) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QSharedMemory(key_QString, parent);
}

QMetaObject* QSharedMemory_MetaObject(const QSharedMemory* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QSharedMemory_Tr(const char* s) {
	QString _ret = QSharedMemory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSharedMemory_TrUtf8(const char* s) {
	QString _ret = QSharedMemory::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSharedMemory_SetKey(QSharedMemory* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	self->setKey(key_QString);
}

struct miqt_string* QSharedMemory_Key(const QSharedMemory* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSharedMemory_SetNativeKey(QSharedMemory* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	self->setNativeKey(key_QString);
}

struct miqt_string* QSharedMemory_NativeKey(const QSharedMemory* self) {
	QString _ret = self->nativeKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QSharedMemory_Create(QSharedMemory* self, int size) {
	return self->create(static_cast<int>(size));
}

int QSharedMemory_Size(const QSharedMemory* self) {
	return self->size();
}

bool QSharedMemory_Attach(QSharedMemory* self) {
	return self->attach();
}

bool QSharedMemory_IsAttached(const QSharedMemory* self) {
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

int QSharedMemory_Error(const QSharedMemory* self) {
	QSharedMemory::SharedMemoryError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string* QSharedMemory_ErrorString(const QSharedMemory* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSharedMemory_Tr2(const char* s, const char* c) {
	QString _ret = QSharedMemory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSharedMemory_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSharedMemory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSharedMemory_TrUtf82(const char* s, const char* c) {
	QString _ret = QSharedMemory::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSharedMemory_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSharedMemory::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QSharedMemory_Create2(QSharedMemory* self, int size, int mode) {
	return self->create(static_cast<int>(size), static_cast<QSharedMemory::AccessMode>(mode));
}

bool QSharedMemory_Attach1(QSharedMemory* self, int mode) {
	return self->attach(static_cast<QSharedMemory::AccessMode>(mode));
}

void QSharedMemory_Delete(QSharedMemory* self) {
	delete self;
}

