#include <QAbstractNetworkCache>
#include <QAuthenticator>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHstsPolicy>
#include <QHttpMultiPart>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
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
#include <QTimerEvent>
#include <qnetworkaccessmanager.h>
#include "gen_qnetworkaccessmanager.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QNetworkAccessManager_proxyAuthenticationRequired(intptr_t, QNetworkProxy*, QAuthenticator*);
void miqt_exec_callback_QNetworkAccessManager_authenticationRequired(intptr_t, QNetworkReply*, QAuthenticator*);
void miqt_exec_callback_QNetworkAccessManager_finished(intptr_t, QNetworkReply*);
void miqt_exec_callback_QNetworkAccessManager_encrypted(intptr_t, QNetworkReply*);
void miqt_exec_callback_QNetworkAccessManager_sslErrors(intptr_t, QNetworkReply*, struct miqt_array /* of QSslError* */ );
void miqt_exec_callback_QNetworkAccessManager_preSharedKeyAuthenticationRequired(intptr_t, QNetworkReply*, QSslPreSharedKeyAuthenticator*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QNetworkAccessManager_supportedSchemes(const QNetworkAccessManager*, intptr_t);
QNetworkReply* miqt_exec_callback_QNetworkAccessManager_createRequest(QNetworkAccessManager*, intptr_t, int, QNetworkRequest*, QIODevice*);
bool miqt_exec_callback_QNetworkAccessManager_event(QNetworkAccessManager*, intptr_t, QEvent*);
bool miqt_exec_callback_QNetworkAccessManager_eventFilter(QNetworkAccessManager*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNetworkAccessManager_timerEvent(QNetworkAccessManager*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNetworkAccessManager_childEvent(QNetworkAccessManager*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNetworkAccessManager_customEvent(QNetworkAccessManager*, intptr_t, QEvent*);
void miqt_exec_callback_QNetworkAccessManager_connectNotify(QNetworkAccessManager*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNetworkAccessManager_disconnectNotify(QNetworkAccessManager*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNetworkAccessManager final : public QNetworkAccessManager {
public:

	MiqtVirtualQNetworkAccessManager(): QNetworkAccessManager() {};
	MiqtVirtualQNetworkAccessManager(QObject* parent): QNetworkAccessManager(parent) {};

	virtual ~MiqtVirtualQNetworkAccessManager() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedSchemes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList supportedSchemes() const override {
		if (handle__supportedSchemes == 0) {
			return QNetworkAccessManager::supportedSchemes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QNetworkAccessManager_supportedSchemes(this, handle__supportedSchemes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of struct miqt_string */  virtualbase_supportedSchemes() const {

		QStringList _ret = QNetworkAccessManager::supportedSchemes();
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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createRequest = 0;

	// Subclass to allow providing a Go implementation
	virtual QNetworkReply* createRequest(QNetworkAccessManager::Operation op, const QNetworkRequest& request, QIODevice* outgoingData) override {
		if (handle__createRequest == 0) {
			return QNetworkAccessManager::createRequest(op, request, outgoingData);
		}
		
		QNetworkAccessManager::Operation op_ret = op;
		int sigval1 = static_cast<int>(op_ret);
		const QNetworkRequest& request_ret = request;
		// Cast returned reference into pointer
		QNetworkRequest* sigval2 = const_cast<QNetworkRequest*>(&request_ret);
		QIODevice* sigval3 = outgoingData;

		QNetworkReply* callback_return_value = miqt_exec_callback_QNetworkAccessManager_createRequest(this, handle__createRequest, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QNetworkReply* virtualbase_createRequest(int op, QNetworkRequest* request, QIODevice* outgoingData) {

		return QNetworkAccessManager::createRequest(static_cast<QNetworkAccessManager::Operation>(op), *request, outgoingData);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QNetworkAccessManager::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkAccessManager_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QNetworkAccessManager::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QNetworkAccessManager::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkAccessManager_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QNetworkAccessManager::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QNetworkAccessManager::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QNetworkAccessManager_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QNetworkAccessManager::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QNetworkAccessManager::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QNetworkAccessManager_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QNetworkAccessManager::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QNetworkAccessManager::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QNetworkAccessManager_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QNetworkAccessManager::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QNetworkAccessManager::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkAccessManager_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QNetworkAccessManager::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QNetworkAccessManager::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkAccessManager_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QNetworkAccessManager::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend struct miqt_array /* of struct miqt_string */  QNetworkAccessManager_protectedbase_supportedSchemesImplementation(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QNetworkAccessManager_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QNetworkAccessManager_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QNetworkAccessManager_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QNetworkAccessManager_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QNetworkAccessManager* QNetworkAccessManager_new() {
	return new MiqtVirtualQNetworkAccessManager();
}

QNetworkAccessManager* QNetworkAccessManager_new2(QObject* parent) {
	return new MiqtVirtualQNetworkAccessManager(parent);
}

void QNetworkAccessManager_virtbase(QNetworkAccessManager* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QNetworkAccessManager_metaObject(const QNetworkAccessManager* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkAccessManager_metacast(QNetworkAccessManager* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkAccessManager_tr(const char* s) {
	QString _ret = QNetworkAccessManager::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QNetworkAccessManager_supportedSchemes(const QNetworkAccessManager* self) {
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

void QNetworkAccessManager_clearAccessCache(QNetworkAccessManager* self) {
	self->clearAccessCache();
}

void QNetworkAccessManager_clearConnectionCache(QNetworkAccessManager* self) {
	self->clearConnectionCache();
}

QNetworkProxy* QNetworkAccessManager_proxy(const QNetworkAccessManager* self) {
	return new QNetworkProxy(self->proxy());
}

void QNetworkAccessManager_setProxy(QNetworkAccessManager* self, QNetworkProxy* proxy) {
	self->setProxy(*proxy);
}

QNetworkProxyFactory* QNetworkAccessManager_proxyFactory(const QNetworkAccessManager* self) {
	return self->proxyFactory();
}

void QNetworkAccessManager_setProxyFactory(QNetworkAccessManager* self, QNetworkProxyFactory* factory) {
	self->setProxyFactory(factory);
}

QAbstractNetworkCache* QNetworkAccessManager_cache(const QNetworkAccessManager* self) {
	return self->cache();
}

void QNetworkAccessManager_setCache(QNetworkAccessManager* self, QAbstractNetworkCache* cache) {
	self->setCache(cache);
}

QNetworkCookieJar* QNetworkAccessManager_cookieJar(const QNetworkAccessManager* self) {
	return self->cookieJar();
}

void QNetworkAccessManager_setCookieJar(QNetworkAccessManager* self, QNetworkCookieJar* cookieJar) {
	self->setCookieJar(cookieJar);
}

void QNetworkAccessManager_setStrictTransportSecurityEnabled(QNetworkAccessManager* self, bool enabled) {
	self->setStrictTransportSecurityEnabled(enabled);
}

bool QNetworkAccessManager_isStrictTransportSecurityEnabled(const QNetworkAccessManager* self) {
	return self->isStrictTransportSecurityEnabled();
}

void QNetworkAccessManager_enableStrictTransportSecurityStore(QNetworkAccessManager* self, bool enabled) {
	self->enableStrictTransportSecurityStore(enabled);
}

bool QNetworkAccessManager_isStrictTransportSecurityStoreEnabled(const QNetworkAccessManager* self) {
	return self->isStrictTransportSecurityStoreEnabled();
}

void QNetworkAccessManager_addStrictTransportSecurityHosts(QNetworkAccessManager* self, struct miqt_array /* of QHstsPolicy* */  knownHosts) {
	QList<QHstsPolicy> knownHosts_QList;
	knownHosts_QList.reserve(knownHosts.len);
	QHstsPolicy** knownHosts_arr = static_cast<QHstsPolicy**>(knownHosts.data);
	for(size_t i = 0; i < knownHosts.len; ++i) {
		knownHosts_QList.push_back(*(knownHosts_arr[i]));
	}
	self->addStrictTransportSecurityHosts(knownHosts_QList);
}

struct miqt_array /* of QHstsPolicy* */  QNetworkAccessManager_strictTransportSecurityHosts(const QNetworkAccessManager* self) {
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

QNetworkReply* QNetworkAccessManager_head(QNetworkAccessManager* self, QNetworkRequest* request) {
	return self->head(*request);
}

QNetworkReply* QNetworkAccessManager_get(QNetworkAccessManager* self, QNetworkRequest* request) {
	return self->get(*request);
}

QNetworkReply* QNetworkAccessManager_post(QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data) {
	return self->post(*request, data);
}

QNetworkReply* QNetworkAccessManager_post2(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->post(*request, data_QByteArray);
}

QNetworkReply* QNetworkAccessManager_put(QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data) {
	return self->put(*request, data);
}

QNetworkReply* QNetworkAccessManager_put2(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->put(*request, data_QByteArray);
}

QNetworkReply* QNetworkAccessManager_deleteResource(QNetworkAccessManager* self, QNetworkRequest* request) {
	return self->deleteResource(*request);
}

QNetworkReply* QNetworkAccessManager_sendCustomRequest(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb) {
	QByteArray verb_QByteArray(verb.data, verb.len);
	return self->sendCustomRequest(*request, verb_QByteArray);
}

QNetworkReply* QNetworkAccessManager_sendCustomRequest2(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb, struct miqt_string data) {
	QByteArray verb_QByteArray(verb.data, verb.len);
	QByteArray data_QByteArray(data.data, data.len);
	return self->sendCustomRequest(*request, verb_QByteArray, data_QByteArray);
}

QNetworkReply* QNetworkAccessManager_post3(QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart) {
	return self->post(*request, multiPart);
}

QNetworkReply* QNetworkAccessManager_put3(QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart) {
	return self->put(*request, multiPart);
}

QNetworkReply* QNetworkAccessManager_sendCustomRequest3(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb, QHttpMultiPart* multiPart) {
	QByteArray verb_QByteArray(verb.data, verb.len);
	return self->sendCustomRequest(*request, verb_QByteArray, multiPart);
}

void QNetworkAccessManager_connectToHostEncrypted(QNetworkAccessManager* self, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString);
}

void QNetworkAccessManager_connectToHostEncrypted2(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port, QSslConfiguration* sslConfiguration, struct miqt_string peerName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString peerName_QString = QString::fromUtf8(peerName.data, peerName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), *sslConfiguration, peerName_QString);
}

void QNetworkAccessManager_connectToHost(QNetworkAccessManager* self, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString);
}

void QNetworkAccessManager_setRedirectPolicy(QNetworkAccessManager* self, int policy) {
	self->setRedirectPolicy(static_cast<QNetworkRequest::RedirectPolicy>(policy));
}

int QNetworkAccessManager_redirectPolicy(const QNetworkAccessManager* self) {
	QNetworkRequest::RedirectPolicy _ret = self->redirectPolicy();
	return static_cast<int>(_ret);
}

bool QNetworkAccessManager_autoDeleteReplies(const QNetworkAccessManager* self) {
	return self->autoDeleteReplies();
}

void QNetworkAccessManager_setAutoDeleteReplies(QNetworkAccessManager* self, bool autoDelete) {
	self->setAutoDeleteReplies(autoDelete);
}

int QNetworkAccessManager_transferTimeout(const QNetworkAccessManager* self) {
	return self->transferTimeout();
}

void QNetworkAccessManager_setTransferTimeout(QNetworkAccessManager* self) {
	self->setTransferTimeout();
}

void QNetworkAccessManager_proxyAuthenticationRequired(QNetworkAccessManager* self, QNetworkProxy* proxy, QAuthenticator* authenticator) {
	self->proxyAuthenticationRequired(*proxy, authenticator);
}

void QNetworkAccessManager_connect_proxyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(const QNetworkProxy&, QAuthenticator*)>(&QNetworkAccessManager::proxyAuthenticationRequired), self, [=](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
		const QNetworkProxy& proxy_ret = proxy;
		// Cast returned reference into pointer
		QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
		QAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QNetworkAccessManager_proxyAuthenticationRequired(slot, sigval1, sigval2);
	});
}

void QNetworkAccessManager_authenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QAuthenticator* authenticator) {
	self->authenticationRequired(reply, authenticator);
}

void QNetworkAccessManager_connect_authenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(QNetworkReply*, QAuthenticator*)>(&QNetworkAccessManager::authenticationRequired), self, [=](QNetworkReply* reply, QAuthenticator* authenticator) {
		QNetworkReply* sigval1 = reply;
		QAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QNetworkAccessManager_authenticationRequired(slot, sigval1, sigval2);
	});
}

void QNetworkAccessManager_finished(QNetworkAccessManager* self, QNetworkReply* reply) {
	self->finished(reply);
}

void QNetworkAccessManager_connect_finished(QNetworkAccessManager* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(QNetworkReply*)>(&QNetworkAccessManager::finished), self, [=](QNetworkReply* reply) {
		QNetworkReply* sigval1 = reply;
		miqt_exec_callback_QNetworkAccessManager_finished(slot, sigval1);
	});
}

void QNetworkAccessManager_encrypted(QNetworkAccessManager* self, QNetworkReply* reply) {
	self->encrypted(reply);
}

void QNetworkAccessManager_connect_encrypted(QNetworkAccessManager* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(QNetworkReply*)>(&QNetworkAccessManager::encrypted), self, [=](QNetworkReply* reply) {
		QNetworkReply* sigval1 = reply;
		miqt_exec_callback_QNetworkAccessManager_encrypted(slot, sigval1);
	});
}

void QNetworkAccessManager_sslErrors(QNetworkAccessManager* self, QNetworkReply* reply, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->sslErrors(reply, errors_QList);
}

void QNetworkAccessManager_connect_sslErrors(QNetworkAccessManager* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(QNetworkReply*, const QList<QSslError>&)>(&QNetworkAccessManager::sslErrors), self, [=](QNetworkReply* reply, const QList<QSslError>& errors) {
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
		miqt_exec_callback_QNetworkAccessManager_sslErrors(slot, sigval1, sigval2);
	});
}

void QNetworkAccessManager_preSharedKeyAuthenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(reply, authenticator);
}

void QNetworkAccessManager_connect_preSharedKeyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager::connect(self, static_cast<void (QNetworkAccessManager::*)(QNetworkReply*, QSslPreSharedKeyAuthenticator*)>(&QNetworkAccessManager::preSharedKeyAuthenticationRequired), self, [=](QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator) {
		QNetworkReply* sigval1 = reply;
		QSslPreSharedKeyAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QNetworkAccessManager_preSharedKeyAuthenticationRequired(slot, sigval1, sigval2);
	});
}

struct miqt_string QNetworkAccessManager_tr2(const char* s, const char* c) {
	QString _ret = QNetworkAccessManager::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkAccessManager_tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkAccessManager::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkAccessManager_enableStrictTransportSecurityStore2(QNetworkAccessManager* self, bool enabled, struct miqt_string storeDir) {
	QString storeDir_QString = QString::fromUtf8(storeDir.data, storeDir.len);
	self->enableStrictTransportSecurityStore(enabled, storeDir_QString);
}

QNetworkReply* QNetworkAccessManager_sendCustomRequest32(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb, QIODevice* data) {
	QByteArray verb_QByteArray(verb.data, verb.len);
	return self->sendCustomRequest(*request, verb_QByteArray, data);
}

void QNetworkAccessManager_connectToHostEncrypted22(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port));
}

void QNetworkAccessManager_connectToHostEncrypted3(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port, QSslConfiguration* sslConfiguration) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), *sslConfiguration);
}

void QNetworkAccessManager_connectToHost2(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port));
}

void QNetworkAccessManager_setTransferTimeout1(QNetworkAccessManager* self, int timeout) {
	self->setTransferTimeout(static_cast<int>(timeout));
}

bool QNetworkAccessManager_override_virtual_supportedSchemes(void* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedSchemes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QNetworkAccessManager_virtualbase_supportedSchemes(const void* self) {
	return ( (const MiqtVirtualQNetworkAccessManager*)(self) )->virtualbase_supportedSchemes();
}

bool QNetworkAccessManager_override_virtual_createRequest(void* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createRequest = slot;
	return true;
}

QNetworkReply* QNetworkAccessManager_virtualbase_createRequest(void* self, int op, QNetworkRequest* request, QIODevice* outgoingData) {
	return ( (MiqtVirtualQNetworkAccessManager*)(self) )->virtualbase_createRequest(op, request, outgoingData);
}

bool QNetworkAccessManager_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QNetworkAccessManager_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQNetworkAccessManager*)(self) )->virtualbase_event(event);
}

bool QNetworkAccessManager_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QNetworkAccessManager_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQNetworkAccessManager*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QNetworkAccessManager_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QNetworkAccessManager_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQNetworkAccessManager*)(self) )->virtualbase_timerEvent(event);
}

bool QNetworkAccessManager_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QNetworkAccessManager_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQNetworkAccessManager*)(self) )->virtualbase_childEvent(event);
}

bool QNetworkAccessManager_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QNetworkAccessManager_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQNetworkAccessManager*)(self) )->virtualbase_customEvent(event);
}

bool QNetworkAccessManager_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QNetworkAccessManager_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkAccessManager*)(self) )->virtualbase_connectNotify(signal);
}

bool QNetworkAccessManager_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QNetworkAccessManager_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkAccessManager*)(self) )->virtualbase_disconnectNotify(signal);
}

struct miqt_array /* of struct miqt_string */  QNetworkAccessManager_protectedbase_supportedSchemesImplementation(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}
	
	*_dynamic_cast_ok = true;
	
	QStringList _ret = self_cast->supportedSchemesImplementation();
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

QObject* QNetworkAccessManager_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QNetworkAccessManager_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QNetworkAccessManager_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QNetworkAccessManager_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQNetworkAccessManager* self_cast = dynamic_cast<MiqtVirtualQNetworkAccessManager*>( (QNetworkAccessManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QNetworkAccessManager_delete(QNetworkAccessManager* self) {
	delete self;
}

