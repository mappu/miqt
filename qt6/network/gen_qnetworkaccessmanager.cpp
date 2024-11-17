#include <QAbstractNetworkCache>
#include <QAuthenticator>
#include <QByteArray>
#include <QHstsPolicy>
#include <QHttpMultiPart>
#include <QIODevice>
#include <QList>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QNetworkCookieJar>
#include <QNetworkProxy>
#include <QNetworkProxyFactory>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qnetworkaccessmanager.h>
#include "gen_qnetworkaccessmanager.h"
#include "_cgo_export.h"

QNetworkAccessManager* QNetworkAccessManager_new() {
	return new QNetworkAccessManager();
}

QNetworkAccessManager* QNetworkAccessManager_new2(QObject* parent) {
	return new QNetworkAccessManager(parent);
}

QMetaObject* QNetworkAccessManager_MetaObject(const QNetworkAccessManager* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkAccessManager_Metacast(QNetworkAccessManager* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkAccessManager_Tr(const char* s) {
	QString _ret = QNetworkAccessManager::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QNetworkAccessManager_SupportedSchemes(const QNetworkAccessManager* self) {
	QStringList _ret = self->supportedSchemes();
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

void QNetworkAccessManager_ClearAccessCache(QNetworkAccessManager* self) {
	self->clearAccessCache();
}

void QNetworkAccessManager_ClearConnectionCache(QNetworkAccessManager* self) {
	self->clearConnectionCache();
}

QNetworkProxy* QNetworkAccessManager_Proxy(const QNetworkAccessManager* self) {
	return new QNetworkProxy(self->proxy());
}

void QNetworkAccessManager_SetProxy(QNetworkAccessManager* self, QNetworkProxy* proxy) {
	self->setProxy(*proxy);
}

QNetworkProxyFactory* QNetworkAccessManager_ProxyFactory(const QNetworkAccessManager* self) {
	return self->proxyFactory();
}

void QNetworkAccessManager_SetProxyFactory(QNetworkAccessManager* self, QNetworkProxyFactory* factory) {
	self->setProxyFactory(factory);
}

QAbstractNetworkCache* QNetworkAccessManager_Cache(const QNetworkAccessManager* self) {
	return self->cache();
}

void QNetworkAccessManager_SetCache(QNetworkAccessManager* self, QAbstractNetworkCache* cache) {
	self->setCache(cache);
}

QNetworkCookieJar* QNetworkAccessManager_CookieJar(const QNetworkAccessManager* self) {
	return self->cookieJar();
}

void QNetworkAccessManager_SetCookieJar(QNetworkAccessManager* self, QNetworkCookieJar* cookieJar) {
	self->setCookieJar(cookieJar);
}

void QNetworkAccessManager_SetStrictTransportSecurityEnabled(QNetworkAccessManager* self, bool enabled) {
	self->setStrictTransportSecurityEnabled(enabled);
}

bool QNetworkAccessManager_IsStrictTransportSecurityEnabled(const QNetworkAccessManager* self) {
	return self->isStrictTransportSecurityEnabled();
}

void QNetworkAccessManager_EnableStrictTransportSecurityStore(QNetworkAccessManager* self, bool enabled) {
	self->enableStrictTransportSecurityStore(enabled);
}

bool QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(const QNetworkAccessManager* self) {
	return self->isStrictTransportSecurityStoreEnabled();
}

void QNetworkAccessManager_AddStrictTransportSecurityHosts(QNetworkAccessManager* self, struct miqt_array /* of QHstsPolicy* */  knownHosts) {
	QList<QHstsPolicy> knownHosts_QList;
	knownHosts_QList.reserve(knownHosts.len);
	QHstsPolicy** knownHosts_arr = static_cast<QHstsPolicy**>(knownHosts.data);
	for(size_t i = 0; i < knownHosts.len; ++i) {
		knownHosts_QList.push_back(*(knownHosts_arr[i]));
	}
	self->addStrictTransportSecurityHosts(knownHosts_QList);
}

struct miqt_array /* of QHstsPolicy* */  QNetworkAccessManager_StrictTransportSecurityHosts(const QNetworkAccessManager* self) {
	QList<QHstsPolicy> _ret = self->strictTransportSecurityHosts();
	// Convert QList<> from C++ memory to manually-managed C memory
	QHstsPolicy** _arr = static_cast<QHstsPolicy**>(malloc(sizeof(QHstsPolicy*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QHstsPolicy(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QNetworkReply* QNetworkAccessManager_Head(QNetworkAccessManager* self, QNetworkRequest* request) {
	return self->head(*request);
}

QNetworkReply* QNetworkAccessManager_Get(QNetworkAccessManager* self, QNetworkRequest* request) {
	return self->get(*request);
}

QNetworkReply* QNetworkAccessManager_Post(QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data) {
	return self->post(*request, data);
}

QNetworkReply* QNetworkAccessManager_Post2(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->post(*request, data_QByteArray);
}

QNetworkReply* QNetworkAccessManager_Put(QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data) {
	return self->put(*request, data);
}

QNetworkReply* QNetworkAccessManager_Put2(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->put(*request, data_QByteArray);
}

QNetworkReply* QNetworkAccessManager_DeleteResource(QNetworkAccessManager* self, QNetworkRequest* request) {
	return self->deleteResource(*request);
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb) {
	QByteArray verb_QByteArray(verb.data, verb.len);
	return self->sendCustomRequest(*request, verb_QByteArray);
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest2(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb, struct miqt_string data) {
	QByteArray verb_QByteArray(verb.data, verb.len);
	QByteArray data_QByteArray(data.data, data.len);
	return self->sendCustomRequest(*request, verb_QByteArray, data_QByteArray);
}

QNetworkReply* QNetworkAccessManager_Post3(QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart) {
	return self->post(*request, multiPart);
}

QNetworkReply* QNetworkAccessManager_Put3(QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart) {
	return self->put(*request, multiPart);
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest3(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb, QHttpMultiPart* multiPart) {
	QByteArray verb_QByteArray(verb.data, verb.len);
	return self->sendCustomRequest(*request, verb_QByteArray, multiPart);
}

void QNetworkAccessManager_ConnectToHostEncrypted(QNetworkAccessManager* self, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString);
}

void QNetworkAccessManager_ConnectToHostEncrypted2(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port, QSslConfiguration* sslConfiguration, struct miqt_string peerName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString peerName_QString = QString::fromUtf8(peerName.data, peerName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), *sslConfiguration, peerName_QString);
}

void QNetworkAccessManager_ConnectToHost(QNetworkAccessManager* self, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString);
}

void QNetworkAccessManager_SetRedirectPolicy(QNetworkAccessManager* self, int policy) {
	self->setRedirectPolicy(static_cast<QNetworkRequest::RedirectPolicy>(policy));
}

int QNetworkAccessManager_RedirectPolicy(const QNetworkAccessManager* self) {
	QNetworkRequest::RedirectPolicy _ret = self->redirectPolicy();
	return static_cast<int>(_ret);
}

bool QNetworkAccessManager_AutoDeleteReplies(const QNetworkAccessManager* self) {
	return self->autoDeleteReplies();
}

void QNetworkAccessManager_SetAutoDeleteReplies(QNetworkAccessManager* self, bool autoDelete) {
	self->setAutoDeleteReplies(autoDelete);
}

int QNetworkAccessManager_TransferTimeout(const QNetworkAccessManager* self) {
	return self->transferTimeout();
}

void QNetworkAccessManager_SetTransferTimeout(QNetworkAccessManager* self) {
	self->setTransferTimeout();
}

void QNetworkAccessManager_ProxyAuthenticationRequired(QNetworkAccessManager* self, QNetworkProxy* proxy, QAuthenticator* authenticator) {
	self->proxyAuthenticationRequired(*proxy, authenticator);
}

void QNetworkAccessManager_connect_ProxyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
	QNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(const QNetworkProxy&, QAuthenticator*)>(&QNetworkAccessManager::proxyAuthenticationRequired), self, [=](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
		const QNetworkProxy& proxy_ret = proxy;
		// Cast returned reference into pointer
		QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
		QAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QNetworkAccessManager_ProxyAuthenticationRequired(slot, sigval1, sigval2);
	});
}

void QNetworkAccessManager_AuthenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QAuthenticator* authenticator) {
	self->authenticationRequired(reply, authenticator);
}

void QNetworkAccessManager_connect_AuthenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
	QNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(QNetworkReply*, QAuthenticator*)>(&QNetworkAccessManager::authenticationRequired), self, [=](QNetworkReply* reply, QAuthenticator* authenticator) {
		QNetworkReply* sigval1 = reply;
		QAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QNetworkAccessManager_AuthenticationRequired(slot, sigval1, sigval2);
	});
}

void QNetworkAccessManager_Finished(QNetworkAccessManager* self, QNetworkReply* reply) {
	self->finished(reply);
}

void QNetworkAccessManager_connect_Finished(QNetworkAccessManager* self, intptr_t slot) {
	QNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(QNetworkReply*)>(&QNetworkAccessManager::finished), self, [=](QNetworkReply* reply) {
		QNetworkReply* sigval1 = reply;
		miqt_exec_callback_QNetworkAccessManager_Finished(slot, sigval1);
	});
}

void QNetworkAccessManager_Encrypted(QNetworkAccessManager* self, QNetworkReply* reply) {
	self->encrypted(reply);
}

void QNetworkAccessManager_connect_Encrypted(QNetworkAccessManager* self, intptr_t slot) {
	QNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(QNetworkReply*)>(&QNetworkAccessManager::encrypted), self, [=](QNetworkReply* reply) {
		QNetworkReply* sigval1 = reply;
		miqt_exec_callback_QNetworkAccessManager_Encrypted(slot, sigval1);
	});
}

void QNetworkAccessManager_SslErrors(QNetworkAccessManager* self, QNetworkReply* reply, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->sslErrors(reply, errors_QList);
}

void QNetworkAccessManager_connect_SslErrors(QNetworkAccessManager* self, intptr_t slot) {
	QNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(QNetworkReply*, const QList<QSslError>&)>(&QNetworkAccessManager::sslErrors), self, [=](QNetworkReply* reply, const QList<QSslError>& errors) {
		QNetworkReply* sigval1 = reply;
		const QList<QSslError>& errors_ret = errors;
		// Convert QList<> from C++ memory to manually-managed C memory
		QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * errors_ret.length()));
		for (size_t i = 0, e = errors_ret.length(); i < e; ++i) {
			errors_arr[i] = new QSslError(errors_ret[i]);
		}
		struct miqt_array errors_out;
		errors_out.len = errors_ret.length();
		errors_out.data = static_cast<void*>(errors_arr);
		struct miqt_array /* of QSslError* */  sigval2 = errors_out;
		miqt_exec_callback_QNetworkAccessManager_SslErrors(slot, sigval1, sigval2);
	});
}

void QNetworkAccessManager_PreSharedKeyAuthenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(reply, authenticator);
}

void QNetworkAccessManager_connect_PreSharedKeyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
	QNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(QNetworkReply*, QSslPreSharedKeyAuthenticator*)>(&QNetworkAccessManager::preSharedKeyAuthenticationRequired), self, [=](QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator) {
		QNetworkReply* sigval1 = reply;
		QSslPreSharedKeyAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QNetworkAccessManager_PreSharedKeyAuthenticationRequired(slot, sigval1, sigval2);
	});
}

struct miqt_string QNetworkAccessManager_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkAccessManager::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkAccessManager_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkAccessManager::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkAccessManager_EnableStrictTransportSecurityStore2(QNetworkAccessManager* self, bool enabled, struct miqt_string storeDir) {
	QString storeDir_QString = QString::fromUtf8(storeDir.data, storeDir.len);
	self->enableStrictTransportSecurityStore(enabled, storeDir_QString);
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest32(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb, QIODevice* data) {
	QByteArray verb_QByteArray(verb.data, verb.len);
	return self->sendCustomRequest(*request, verb_QByteArray, data);
}

void QNetworkAccessManager_ConnectToHostEncrypted22(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port));
}

void QNetworkAccessManager_ConnectToHostEncrypted3(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port, QSslConfiguration* sslConfiguration) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), *sslConfiguration);
}

void QNetworkAccessManager_ConnectToHost2(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port));
}

void QNetworkAccessManager_SetTransferTimeout1(QNetworkAccessManager* self, int timeout) {
	self->setTransferTimeout(static_cast<int>(timeout));
}

void QNetworkAccessManager_Delete(QNetworkAccessManager* self) {
	delete self;
}

