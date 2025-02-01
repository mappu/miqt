#include <QByteArray>
#include <QIODevice>
#include <QMessageAuthenticationCode>
#include <qmessageauthenticationcode.h>
#include "gen_qmessageauthenticationcode.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMessageAuthenticationCode* QMessageAuthenticationCode_new(int method) {
	return new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method));
}

QMessageAuthenticationCode* QMessageAuthenticationCode_new2(int method, struct miqt_string key) {
	QByteArray key_QByteArray(key.data, key.len);
	return new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method), key_QByteArray);
}

void QMessageAuthenticationCode_reset(QMessageAuthenticationCode* self) {
	self->reset();
}

void QMessageAuthenticationCode_setKey(QMessageAuthenticationCode* self, struct miqt_string key) {
	QByteArray key_QByteArray(key.data, key.len);
	self->setKey(key_QByteArray);
}

void QMessageAuthenticationCode_addData(QMessageAuthenticationCode* self, const char* data, ptrdiff_t length) {
	self->addData(data, (qsizetype)(length));
}

void QMessageAuthenticationCode_addDataWithData(QMessageAuthenticationCode* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->addData(data_QByteArray);
}

bool QMessageAuthenticationCode_addDataWithDevice(QMessageAuthenticationCode* self, QIODevice* device) {
	return self->addData(device);
}

struct miqt_string QMessageAuthenticationCode_result(const QMessageAuthenticationCode* self) {
	QByteArray _qb = self->result();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QMessageAuthenticationCode_hash(struct miqt_string message, struct miqt_string key, int method) {
	QByteArray message_QByteArray(message.data, message.len);
	QByteArray key_QByteArray(key.data, key.len);
	QByteArray _qb = QMessageAuthenticationCode::hash(message_QByteArray, key_QByteArray, static_cast<QCryptographicHash::Algorithm>(method));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QMessageAuthenticationCode_delete(QMessageAuthenticationCode* self) {
	delete self;
}

