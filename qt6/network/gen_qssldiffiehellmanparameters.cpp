#include <QByteArray>
#include <QIODevice>
#include <QSslDiffieHellmanParameters>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qssldiffiehellmanparameters.h>
#include "gen_qssldiffiehellmanparameters.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_new() {
	return new QSslDiffieHellmanParameters();
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_new2(QSslDiffieHellmanParameters* other) {
	return new QSslDiffieHellmanParameters(*other);
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_defaultParameters() {
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::defaultParameters());
}

void QSslDiffieHellmanParameters_operatorAssign(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other) {
	self->operator=(*other);
}

void QSslDiffieHellmanParameters_swap(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other) {
	self->swap(*other);
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_fromEncoded(struct miqt_string encoded) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(encoded_QByteArray));
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_fromEncodedWithDevice(QIODevice* device) {
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(device));
}

bool QSslDiffieHellmanParameters_isEmpty(const QSslDiffieHellmanParameters* self) {
	return self->isEmpty();
}

bool QSslDiffieHellmanParameters_isValid(const QSslDiffieHellmanParameters* self) {
	return self->isValid();
}

int QSslDiffieHellmanParameters_error(const QSslDiffieHellmanParameters* self) {
	QSslDiffieHellmanParameters::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QSslDiffieHellmanParameters_errorString(const QSslDiffieHellmanParameters* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_fromEncoded2(struct miqt_string encoded, int format) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(encoded_QByteArray, static_cast<QSsl::EncodingFormat>(format)));
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_fromEncoded22(QIODevice* device, int format) {
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(device, static_cast<QSsl::EncodingFormat>(format)));
}

void QSslDiffieHellmanParameters_delete(QSslDiffieHellmanParameters* self) {
	delete self;
}

