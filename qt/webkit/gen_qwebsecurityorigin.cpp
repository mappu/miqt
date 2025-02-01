#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebDatabase>
#include <QWebSecurityOrigin>
#include <qwebsecurityorigin.h>
#include "gen_qwebsecurityorigin.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebSecurityOrigin* QWebSecurityOrigin_new(QUrl* url) {
	return new QWebSecurityOrigin(*url);
}

QWebSecurityOrigin* QWebSecurityOrigin_new2(QWebSecurityOrigin* other) {
	return new QWebSecurityOrigin(*other);
}

struct miqt_array /* of QWebSecurityOrigin* */  QWebSecurityOrigin_allOrigins() {
	QList<QWebSecurityOrigin> _ret = QWebSecurityOrigin::allOrigins();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebSecurityOrigin** _arr = static_cast<QWebSecurityOrigin**>(malloc(sizeof(QWebSecurityOrigin*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebSecurityOrigin(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWebSecurityOrigin_addLocalScheme(struct miqt_string scheme) {
	QString scheme_QString = QString::fromUtf8(scheme.data, scheme.len);
	QWebSecurityOrigin::addLocalScheme(scheme_QString);
}

void QWebSecurityOrigin_removeLocalScheme(struct miqt_string scheme) {
	QString scheme_QString = QString::fromUtf8(scheme.data, scheme.len);
	QWebSecurityOrigin::removeLocalScheme(scheme_QString);
}

struct miqt_array /* of struct miqt_string */  QWebSecurityOrigin_localSchemes() {
	QStringList _ret = QWebSecurityOrigin::localSchemes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWebSecurityOrigin_addAccessWhitelistEntry(QWebSecurityOrigin* self, struct miqt_string scheme, struct miqt_string host, int subdomainSetting) {
	QString scheme_QString = QString::fromUtf8(scheme.data, scheme.len);
	QString host_QString = QString::fromUtf8(host.data, host.len);
	self->addAccessWhitelistEntry(scheme_QString, host_QString, static_cast<QWebSecurityOrigin::SubdomainSetting>(subdomainSetting));
}

void QWebSecurityOrigin_removeAccessWhitelistEntry(QWebSecurityOrigin* self, struct miqt_string scheme, struct miqt_string host, int subdomainSetting) {
	QString scheme_QString = QString::fromUtf8(scheme.data, scheme.len);
	QString host_QString = QString::fromUtf8(host.data, host.len);
	self->removeAccessWhitelistEntry(scheme_QString, host_QString, static_cast<QWebSecurityOrigin::SubdomainSetting>(subdomainSetting));
}

struct miqt_string QWebSecurityOrigin_scheme(const QWebSecurityOrigin* self) {
	QString _ret = self->scheme();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSecurityOrigin_host(const QWebSecurityOrigin* self) {
	QString _ret = self->host();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWebSecurityOrigin_port(const QWebSecurityOrigin* self) {
	return self->port();
}

long long QWebSecurityOrigin_databaseUsage(const QWebSecurityOrigin* self) {
	qint64 _ret = self->databaseUsage();
	return static_cast<long long>(_ret);
}

long long QWebSecurityOrigin_databaseQuota(const QWebSecurityOrigin* self) {
	qint64 _ret = self->databaseQuota();
	return static_cast<long long>(_ret);
}

void QWebSecurityOrigin_setDatabaseQuota(QWebSecurityOrigin* self, long long quota) {
	self->setDatabaseQuota(static_cast<qint64>(quota));
}

void QWebSecurityOrigin_setApplicationCacheQuota(QWebSecurityOrigin* self, long long quota) {
	self->setApplicationCacheQuota(static_cast<qint64>(quota));
}

struct miqt_array /* of QWebDatabase* */  QWebSecurityOrigin_databases(const QWebSecurityOrigin* self) {
	QList<QWebDatabase> _ret = self->databases();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebDatabase** _arr = static_cast<QWebDatabase**>(malloc(sizeof(QWebDatabase*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebDatabase(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWebSecurityOrigin_operatorAssign(QWebSecurityOrigin* self, QWebSecurityOrigin* other) {
	self->operator=(*other);
}

void QWebSecurityOrigin_delete(QWebSecurityOrigin* self) {
	delete self;
}

