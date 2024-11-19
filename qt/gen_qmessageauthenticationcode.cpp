#include <QByteArray>
#include <QIODevice>
#include <QMessageAuthenticationCode>
#include <qmessageauthenticationcode.h>
#include "gen_qmessageauthenticationcode.h"
#include "_cgo_export.h"

void QMessageAuthenticationCode_new(int method, QMessageAuthenticationCode** outptr_QMessageAuthenticationCode) {
	QMessageAuthenticationCode* ret = new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method));
	*outptr_QMessageAuthenticationCode = ret;
}

void QMessageAuthenticationCode_new2(int method, struct miqt_string key, QMessageAuthenticationCode** outptr_QMessageAuthenticationCode) {
	QByteArray key_QByteArray(key.data, key.len);
	QMessageAuthenticationCode* ret = new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method), key_QByteArray);
	*outptr_QMessageAuthenticationCode = ret;
}

void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self) {
	self->reset();
}

void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, struct miqt_string key) {
	QByteArray key_QByteArray(key.data, key.len);
	self->setKey(key_QByteArray);
}

void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, const char* data, int length) {
	self->addData(data, static_cast<int>(length));
}

void QMessageAuthenticationCode_AddDataWithData(QMessageAuthenticationCode* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->addData(data_QByteArray);
}

bool QMessageAuthenticationCode_AddDataWithDevice(QMessageAuthenticationCode* self, QIODevice* device) {
	return self->addData(device);
}

struct miqt_string QMessageAuthenticationCode_Result(const QMessageAuthenticationCode* self) {
	QByteArray _qb = self->result();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QMessageAuthenticationCode_Hash(struct miqt_string message, struct miqt_string key, int method) {
	QByteArray message_QByteArray(message.data, message.len);
	QByteArray key_QByteArray(key.data, key.len);
	QByteArray _qb = QMessageAuthenticationCode::hash(message_QByteArray, key_QByteArray, static_cast<QCryptographicHash::Algorithm>(method));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMessageAuthenticationCode*>( self );
	} else {
		delete self;
	}
}

