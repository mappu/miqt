#include <QByteArray>
#include <QSslPreSharedKeyAuthenticator>
#include <qsslpresharedkeyauthenticator.h>
#include "gen_qsslpresharedkeyauthenticator.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSslPreSharedKeyAuthenticator* QSslPreSharedKeyAuthenticator_new() {
	return new QSslPreSharedKeyAuthenticator();
}

QSslPreSharedKeyAuthenticator* QSslPreSharedKeyAuthenticator_new2(QSslPreSharedKeyAuthenticator* authenticator) {
	return new QSslPreSharedKeyAuthenticator(*authenticator);
}

void QSslPreSharedKeyAuthenticator_operatorAssign(QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->operator=(*authenticator);
}

void QSslPreSharedKeyAuthenticator_swap(QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* other) {
	self->swap(*other);
}

struct miqt_string QSslPreSharedKeyAuthenticator_identityHint(const QSslPreSharedKeyAuthenticator* self) {
	QByteArray _qb = self->identityHint();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QSslPreSharedKeyAuthenticator_setIdentity(QSslPreSharedKeyAuthenticator* self, struct miqt_string identity) {
	QByteArray identity_QByteArray(identity.data, identity.len);
	self->setIdentity(identity_QByteArray);
}

struct miqt_string QSslPreSharedKeyAuthenticator_identity(const QSslPreSharedKeyAuthenticator* self) {
	QByteArray _qb = self->identity();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QSslPreSharedKeyAuthenticator_maximumIdentityLength(const QSslPreSharedKeyAuthenticator* self) {
	return self->maximumIdentityLength();
}

void QSslPreSharedKeyAuthenticator_setPreSharedKey(QSslPreSharedKeyAuthenticator* self, struct miqt_string preSharedKey) {
	QByteArray preSharedKey_QByteArray(preSharedKey.data, preSharedKey.len);
	self->setPreSharedKey(preSharedKey_QByteArray);
}

struct miqt_string QSslPreSharedKeyAuthenticator_preSharedKey(const QSslPreSharedKeyAuthenticator* self) {
	QByteArray _qb = self->preSharedKey();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QSslPreSharedKeyAuthenticator_maximumPreSharedKeyLength(const QSslPreSharedKeyAuthenticator* self) {
	return self->maximumPreSharedKeyLength();
}

void QSslPreSharedKeyAuthenticator_delete(QSslPreSharedKeyAuthenticator* self) {
	delete self;
}

