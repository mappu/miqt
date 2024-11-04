#include <QAuthenticator>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qauthenticator.h>
#include "gen_qauthenticator.h"
#include "_cgo_export.h"

QAuthenticator* QAuthenticator_new() {
	return new QAuthenticator();
}

QAuthenticator* QAuthenticator_new2(QAuthenticator* other) {
	return new QAuthenticator(*other);
}

void QAuthenticator_OperatorAssign(QAuthenticator* self, QAuthenticator* other) {
	self->operator=(*other);
}

bool QAuthenticator_OperatorEqual(const QAuthenticator* self, QAuthenticator* other) {
	return self->operator==(*other);
}

bool QAuthenticator_OperatorNotEqual(const QAuthenticator* self, QAuthenticator* other) {
	return self->operator!=(*other);
}

struct miqt_string QAuthenticator_User(const QAuthenticator* self) {
	QString _ret = self->user();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAuthenticator_SetUser(QAuthenticator* self, struct miqt_string user) {
	QString user_QString = QString::fromUtf8(user.data, user.len);
	self->setUser(user_QString);
}

struct miqt_string QAuthenticator_Password(const QAuthenticator* self) {
	QString _ret = self->password();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAuthenticator_SetPassword(QAuthenticator* self, struct miqt_string password) {
	QString password_QString = QString::fromUtf8(password.data, password.len);
	self->setPassword(password_QString);
}

struct miqt_string QAuthenticator_Realm(const QAuthenticator* self) {
	QString _ret = self->realm();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAuthenticator_SetRealm(QAuthenticator* self, struct miqt_string realm) {
	QString realm_QString = QString::fromUtf8(realm.data, realm.len);
	self->setRealm(realm_QString);
}

QVariant* QAuthenticator_Option(const QAuthenticator* self, struct miqt_string opt) {
	QString opt_QString = QString::fromUtf8(opt.data, opt.len);
	return new QVariant(self->option(opt_QString));
}

struct miqt_map QAuthenticator_Options(const QAuthenticator* self) {
	QVariantHash _ret = self->options();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _hashkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _hashkey_b = _hashkey_ret.toUtf8();
		struct miqt_string _hashkey_ms;
		_hashkey_ms.len = _hashkey_b.length();
		_hashkey_ms.data = static_cast<char*>(malloc(_hashkey_ms.len));
		memcpy(_hashkey_ms.data, _hashkey_b.data(), _hashkey_ms.len);
		_karr[_ctr] = _hashkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QAuthenticator_SetOption(QAuthenticator* self, struct miqt_string opt, QVariant* value) {
	QString opt_QString = QString::fromUtf8(opt.data, opt.len);
	self->setOption(opt_QString, *value);
}

bool QAuthenticator_IsNull(const QAuthenticator* self) {
	return self->isNull();
}

void QAuthenticator_Detach(QAuthenticator* self) {
	self->detach();
}

void QAuthenticator_Delete(QAuthenticator* self) {
	delete self;
}

