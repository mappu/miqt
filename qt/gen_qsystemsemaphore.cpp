#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSystemSemaphore>
#include <qsystemsemaphore.h>
#include "gen_qsystemsemaphore.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSystemSemaphore* QSystemSemaphore_new(struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QSystemSemaphore(key_QString);
}

QSystemSemaphore* QSystemSemaphore_new2(struct miqt_string key, int initialValue) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QSystemSemaphore(key_QString, static_cast<int>(initialValue));
}

QSystemSemaphore* QSystemSemaphore_new3(struct miqt_string key, int initialValue, int mode) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QSystemSemaphore(key_QString, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(mode));
}

void QSystemSemaphore_setKey(QSystemSemaphore* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setKey(key_QString);
}

struct miqt_string QSystemSemaphore_key(const QSystemSemaphore* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSystemSemaphore_acquire(QSystemSemaphore* self) {
	return self->acquire();
}

bool QSystemSemaphore_release(QSystemSemaphore* self) {
	return self->release();
}

int QSystemSemaphore_error(const QSystemSemaphore* self) {
	QSystemSemaphore::SystemSemaphoreError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QSystemSemaphore_errorString(const QSystemSemaphore* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSystemSemaphore_setKey2(QSystemSemaphore* self, struct miqt_string key, int initialValue) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setKey(key_QString, static_cast<int>(initialValue));
}

void QSystemSemaphore_setKey3(QSystemSemaphore* self, struct miqt_string key, int initialValue, int mode) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setKey(key_QString, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(mode));
}

bool QSystemSemaphore_release1(QSystemSemaphore* self, int n) {
	return self->release(static_cast<int>(n));
}

void QSystemSemaphore_delete(QSystemSemaphore* self) {
	delete self;
}

