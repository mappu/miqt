#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSystemSemaphore>
#include "qsystemsemaphore.h"
#include "gen_qsystemsemaphore.h"
#include "_cgo_export.h"

QSystemSemaphore* QSystemSemaphore_new(struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QSystemSemaphore(key_QString);
}

QSystemSemaphore* QSystemSemaphore_new2(struct miqt_string* key, int initialValue) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QSystemSemaphore(key_QString, static_cast<int>(initialValue));
}

QSystemSemaphore* QSystemSemaphore_new3(struct miqt_string* key, int initialValue, int mode) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QSystemSemaphore(key_QString, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(mode));
}

void QSystemSemaphore_SetKey(QSystemSemaphore* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	self->setKey(key_QString);
}

struct miqt_string* QSystemSemaphore_Key(const QSystemSemaphore* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QSystemSemaphore_Acquire(QSystemSemaphore* self) {
	return self->acquire();
}

bool QSystemSemaphore_Release(QSystemSemaphore* self) {
	return self->release();
}

int QSystemSemaphore_Error(const QSystemSemaphore* self) {
	QSystemSemaphore::SystemSemaphoreError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string* QSystemSemaphore_ErrorString(const QSystemSemaphore* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSystemSemaphore_SetKey2(QSystemSemaphore* self, struct miqt_string* key, int initialValue) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	self->setKey(key_QString, static_cast<int>(initialValue));
}

void QSystemSemaphore_SetKey3(QSystemSemaphore* self, struct miqt_string* key, int initialValue, int mode) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	self->setKey(key_QString, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(mode));
}

bool QSystemSemaphore_Release1(QSystemSemaphore* self, int n) {
	return self->release(static_cast<int>(n));
}

void QSystemSemaphore_Delete(QSystemSemaphore* self) {
	delete self;
}

