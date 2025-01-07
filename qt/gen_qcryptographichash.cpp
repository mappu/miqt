#include <QByteArray>
#include <QCryptographicHash>
#include <QIODevice>
#include <qcryptographichash.h>
#include "gen_qcryptographichash.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCryptographicHash* QCryptographicHash_new(int method) {
	return new QCryptographicHash(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_Reset(QCryptographicHash* self) {
	self->reset();
}

void QCryptographicHash_AddData(QCryptographicHash* self, const char* data, int length) {
	self->addData(data, static_cast<int>(length));
}

void QCryptographicHash_AddDataWithData(QCryptographicHash* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->addData(data_QByteArray);
}

bool QCryptographicHash_AddDataWithDevice(QCryptographicHash* self, QIODevice* device) {
	return self->addData(device);
}

struct miqt_string QCryptographicHash_Result(const QCryptographicHash* self) {
	QByteArray _qb = self->result();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCryptographicHash_Hash(struct miqt_string data, int method) {
	QByteArray data_QByteArray(data.data, data.len);
	QByteArray _qb = QCryptographicHash::hash(data_QByteArray, static_cast<QCryptographicHash::Algorithm>(method));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QCryptographicHash_HashLength(int method) {
	return QCryptographicHash::hashLength(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_Delete(QCryptographicHash* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCryptographicHash*>( self );
	} else {
		delete self;
	}
}

