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

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_DefaultParameters() {
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::defaultParameters());
}

void QSslDiffieHellmanParameters_OperatorAssign(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other) {
	self->operator=(*other);
}

void QSslDiffieHellmanParameters_Swap(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other) {
	self->swap(*other);
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded(struct miqt_string encoded) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(encoded_QByteArray));
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncodedWithDevice(QIODevice* device) {
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(device));
}

bool QSslDiffieHellmanParameters_IsEmpty(const QSslDiffieHellmanParameters* self) {
	return self->isEmpty();
}

bool QSslDiffieHellmanParameters_IsValid(const QSslDiffieHellmanParameters* self) {
	return self->isValid();
}

int QSslDiffieHellmanParameters_Error(const QSslDiffieHellmanParameters* self) {
	QSslDiffieHellmanParameters::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QSslDiffieHellmanParameters_ErrorString(const QSslDiffieHellmanParameters* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded2(struct miqt_string encoded, int format) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(encoded_QByteArray, static_cast<QSsl::EncodingFormat>(format)));
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded22(QIODevice* device, int format) {
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(device, static_cast<QSsl::EncodingFormat>(format)));
}

void QSslDiffieHellmanParameters_Delete(QSslDiffieHellmanParameters* self) {
	delete self;
}

