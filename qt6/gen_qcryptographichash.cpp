#include <QByteArray>
#include <QByteArrayView>
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

void QCryptographicHash_reset(QCryptographicHash* self) {
	self->reset();
}

void QCryptographicHash_addData(QCryptographicHash* self, const char* data, ptrdiff_t length) {
	self->addData(data, (qsizetype)(length));
}

void QCryptographicHash_addDataWithData(QCryptographicHash* self, QByteArrayView* data) {
	self->addData(*data);
}

bool QCryptographicHash_addDataWithDevice(QCryptographicHash* self, QIODevice* device) {
	return self->addData(device);
}

struct miqt_string QCryptographicHash_result(const QCryptographicHash* self) {
	QByteArray _qb = self->result();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QByteArrayView* QCryptographicHash_resultView(const QCryptographicHash* self) {
	return new QByteArrayView(self->resultView());
}

struct miqt_string QCryptographicHash_hash(QByteArrayView* data, int method) {
	QByteArray _qb = QCryptographicHash::hash(*data, static_cast<QCryptographicHash::Algorithm>(method));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QCryptographicHash_hashLength(int method) {
	return QCryptographicHash::hashLength(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_delete(QCryptographicHash* self) {
	delete self;
}

