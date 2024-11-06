#include <QByteArray>
#include <QSslPreSharedKeyAuthenticator>
#include <qsslpresharedkeyauthenticator.h>
#include "gen_qsslpresharedkeyauthenticator.h"
#include "_cgo_export.h"

QSslPreSharedKeyAuthenticator* QSslPreSharedKeyAuthenticator_new() {
	return new QSslPreSharedKeyAuthenticator();
}

QSslPreSharedKeyAuthenticator* QSslPreSharedKeyAuthenticator_new2(QSslPreSharedKeyAuthenticator* authenticator) {
	return new QSslPreSharedKeyAuthenticator(*authenticator);
}

void QSslPreSharedKeyAuthenticator_OperatorAssign(QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->operator=(*authenticator);
}

void QSslPreSharedKeyAuthenticator_Swap(QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* other) {
	self->swap(*other);
}

struct miqt_string QSslPreSharedKeyAuthenticator_IdentityHint(const QSslPreSharedKeyAuthenticator* self) {
	QByteArray _qb = self->identityHint();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QSslPreSharedKeyAuthenticator_SetIdentity(QSslPreSharedKeyAuthenticator* self, struct miqt_string identity) {
	QByteArray identity_QByteArray(identity.data, identity.len);
	self->setIdentity(identity_QByteArray);
}

struct miqt_string QSslPreSharedKeyAuthenticator_Identity(const QSslPreSharedKeyAuthenticator* self) {
	QByteArray _qb = self->identity();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QSslPreSharedKeyAuthenticator_MaximumIdentityLength(const QSslPreSharedKeyAuthenticator* self) {
	return self->maximumIdentityLength();
}

void QSslPreSharedKeyAuthenticator_SetPreSharedKey(QSslPreSharedKeyAuthenticator* self, struct miqt_string preSharedKey) {
	QByteArray preSharedKey_QByteArray(preSharedKey.data, preSharedKey.len);
	self->setPreSharedKey(preSharedKey_QByteArray);
}

struct miqt_string QSslPreSharedKeyAuthenticator_PreSharedKey(const QSslPreSharedKeyAuthenticator* self) {
	QByteArray _qb = self->preSharedKey();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QSslPreSharedKeyAuthenticator_MaximumPreSharedKeyLength(const QSslPreSharedKeyAuthenticator* self) {
	return self->maximumPreSharedKeyLength();
}

void QSslPreSharedKeyAuthenticator_Delete(QSslPreSharedKeyAuthenticator* self) {
	delete self;
}

