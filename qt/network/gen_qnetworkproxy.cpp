#include <QByteArray>
#include <QList>
#include <QNetworkConfiguration>
#include <QNetworkProxy>
#include <QNetworkProxyFactory>
#include <QNetworkProxyQuery>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qnetworkproxy.h>
#include "gen_qnetworkproxy.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_array /* of QNetworkProxy* */  miqt_exec_callback_QNetworkProxyFactory_queryProxy(QNetworkProxyFactory*, intptr_t, QNetworkProxyQuery*);
#ifdef __cplusplus
} /* extern C */
#endif

QNetworkProxyQuery* QNetworkProxyQuery_new() {
	return new QNetworkProxyQuery();
}

QNetworkProxyQuery* QNetworkProxyQuery_new2(QUrl* requestUrl) {
	return new QNetworkProxyQuery(*requestUrl);
}

QNetworkProxyQuery* QNetworkProxyQuery_new3(struct miqt_string hostname, int port) {
	QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
	return new QNetworkProxyQuery(hostname_QString, static_cast<int>(port));
}

QNetworkProxyQuery* QNetworkProxyQuery_new4(uint16_t bindPort) {
	return new QNetworkProxyQuery(static_cast<quint16>(bindPort));
}

QNetworkProxyQuery* QNetworkProxyQuery_new5(QNetworkConfiguration* networkConfiguration, QUrl* requestUrl) {
	return new QNetworkProxyQuery(*networkConfiguration, *requestUrl);
}

QNetworkProxyQuery* QNetworkProxyQuery_new6(QNetworkConfiguration* networkConfiguration, struct miqt_string hostname, int port) {
	QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
	return new QNetworkProxyQuery(*networkConfiguration, hostname_QString, static_cast<int>(port));
}

QNetworkProxyQuery* QNetworkProxyQuery_new7(QNetworkConfiguration* networkConfiguration, uint16_t bindPort) {
	return new QNetworkProxyQuery(*networkConfiguration, static_cast<quint16>(bindPort));
}

QNetworkProxyQuery* QNetworkProxyQuery_new8(QNetworkProxyQuery* other) {
	return new QNetworkProxyQuery(*other);
}

QNetworkProxyQuery* QNetworkProxyQuery_new9(QUrl* requestUrl, int queryType) {
	return new QNetworkProxyQuery(*requestUrl, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

QNetworkProxyQuery* QNetworkProxyQuery_new10(struct miqt_string hostname, int port, struct miqt_string protocolTag) {
	QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(hostname_QString, static_cast<int>(port), protocolTag_QString);
}

QNetworkProxyQuery* QNetworkProxyQuery_new11(struct miqt_string hostname, int port, struct miqt_string protocolTag, int queryType) {
	QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(hostname_QString, static_cast<int>(port), protocolTag_QString, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

QNetworkProxyQuery* QNetworkProxyQuery_new12(uint16_t bindPort, struct miqt_string protocolTag) {
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(static_cast<quint16>(bindPort), protocolTag_QString);
}

QNetworkProxyQuery* QNetworkProxyQuery_new13(uint16_t bindPort, struct miqt_string protocolTag, int queryType) {
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(static_cast<quint16>(bindPort), protocolTag_QString, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

QNetworkProxyQuery* QNetworkProxyQuery_new14(QNetworkConfiguration* networkConfiguration, QUrl* requestUrl, int queryType) {
	return new QNetworkProxyQuery(*networkConfiguration, *requestUrl, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

QNetworkProxyQuery* QNetworkProxyQuery_new15(QNetworkConfiguration* networkConfiguration, struct miqt_string hostname, int port, struct miqt_string protocolTag) {
	QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(*networkConfiguration, hostname_QString, static_cast<int>(port), protocolTag_QString);
}

QNetworkProxyQuery* QNetworkProxyQuery_new16(QNetworkConfiguration* networkConfiguration, struct miqt_string hostname, int port, struct miqt_string protocolTag, int queryType) {
	QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(*networkConfiguration, hostname_QString, static_cast<int>(port), protocolTag_QString, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

QNetworkProxyQuery* QNetworkProxyQuery_new17(QNetworkConfiguration* networkConfiguration, uint16_t bindPort, struct miqt_string protocolTag) {
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(*networkConfiguration, static_cast<quint16>(bindPort), protocolTag_QString);
}

QNetworkProxyQuery* QNetworkProxyQuery_new18(QNetworkConfiguration* networkConfiguration, uint16_t bindPort, struct miqt_string protocolTag, int queryType) {
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(*networkConfiguration, static_cast<quint16>(bindPort), protocolTag_QString, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

void QNetworkProxyQuery_operatorAssign(QNetworkProxyQuery* self, QNetworkProxyQuery* other) {
	self->operator=(*other);
}

void QNetworkProxyQuery_swap(QNetworkProxyQuery* self, QNetworkProxyQuery* other) {
	self->swap(*other);
}

bool QNetworkProxyQuery_operatorEqual(const QNetworkProxyQuery* self, QNetworkProxyQuery* other) {
	return (*self == *other);
}

bool QNetworkProxyQuery_operatorNotEqual(const QNetworkProxyQuery* self, QNetworkProxyQuery* other) {
	return (*self != *other);
}

int QNetworkProxyQuery_queryType(const QNetworkProxyQuery* self) {
	QNetworkProxyQuery::QueryType _ret = self->queryType();
	return static_cast<int>(_ret);
}

void QNetworkProxyQuery_setQueryType(QNetworkProxyQuery* self, int type) {
	self->setQueryType(static_cast<QNetworkProxyQuery::QueryType>(type));
}

int QNetworkProxyQuery_peerPort(const QNetworkProxyQuery* self) {
	return self->peerPort();
}

void QNetworkProxyQuery_setPeerPort(QNetworkProxyQuery* self, int port) {
	self->setPeerPort(static_cast<int>(port));
}

struct miqt_string QNetworkProxyQuery_peerHostName(const QNetworkProxyQuery* self) {
	QString _ret = self->peerHostName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkProxyQuery_setPeerHostName(QNetworkProxyQuery* self, struct miqt_string hostname) {
	QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
	self->setPeerHostName(hostname_QString);
}

int QNetworkProxyQuery_localPort(const QNetworkProxyQuery* self) {
	return self->localPort();
}

void QNetworkProxyQuery_setLocalPort(QNetworkProxyQuery* self, int port) {
	self->setLocalPort(static_cast<int>(port));
}

struct miqt_string QNetworkProxyQuery_protocolTag(const QNetworkProxyQuery* self) {
	QString _ret = self->protocolTag();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkProxyQuery_setProtocolTag(QNetworkProxyQuery* self, struct miqt_string protocolTag) {
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	self->setProtocolTag(protocolTag_QString);
}

QUrl* QNetworkProxyQuery_url(const QNetworkProxyQuery* self) {
	return new QUrl(self->url());
}

void QNetworkProxyQuery_setUrl(QNetworkProxyQuery* self, QUrl* url) {
	self->setUrl(*url);
}

QNetworkConfiguration* QNetworkProxyQuery_networkConfiguration(const QNetworkProxyQuery* self) {
	return new QNetworkConfiguration(self->networkConfiguration());
}

void QNetworkProxyQuery_setNetworkConfiguration(QNetworkProxyQuery* self, QNetworkConfiguration* networkConfiguration) {
	self->setNetworkConfiguration(*networkConfiguration);
}

void QNetworkProxyQuery_delete(QNetworkProxyQuery* self) {
	delete self;
}

QNetworkProxy* QNetworkProxy_new() {
	return new QNetworkProxy();
}

QNetworkProxy* QNetworkProxy_new2(int type) {
	return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(type));
}

QNetworkProxy* QNetworkProxy_new3(QNetworkProxy* other) {
	return new QNetworkProxy(*other);
}

QNetworkProxy* QNetworkProxy_new4(int type, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(type), hostName_QString);
}

QNetworkProxy* QNetworkProxy_new5(int type, struct miqt_string hostName, uint16_t port) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(type), hostName_QString, static_cast<quint16>(port));
}

QNetworkProxy* QNetworkProxy_new6(int type, struct miqt_string hostName, uint16_t port, struct miqt_string user) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString user_QString = QString::fromUtf8(user.data, user.len);
	return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(type), hostName_QString, static_cast<quint16>(port), user_QString);
}

QNetworkProxy* QNetworkProxy_new7(int type, struct miqt_string hostName, uint16_t port, struct miqt_string user, struct miqt_string password) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString user_QString = QString::fromUtf8(user.data, user.len);
	QString password_QString = QString::fromUtf8(password.data, password.len);
	return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(type), hostName_QString, static_cast<quint16>(port), user_QString, password_QString);
}

void QNetworkProxy_operatorAssign(QNetworkProxy* self, QNetworkProxy* other) {
	self->operator=(*other);
}

void QNetworkProxy_swap(QNetworkProxy* self, QNetworkProxy* other) {
	self->swap(*other);
}

bool QNetworkProxy_operatorEqual(const QNetworkProxy* self, QNetworkProxy* other) {
	return (*self == *other);
}

bool QNetworkProxy_operatorNotEqual(const QNetworkProxy* self, QNetworkProxy* other) {
	return (*self != *other);
}

void QNetworkProxy_setType(QNetworkProxy* self, int type) {
	self->setType(static_cast<QNetworkProxy::ProxyType>(type));
}

int QNetworkProxy_type(const QNetworkProxy* self) {
	QNetworkProxy::ProxyType _ret = self->type();
	return static_cast<int>(_ret);
}

void QNetworkProxy_setCapabilities(QNetworkProxy* self, int capab) {
	self->setCapabilities(static_cast<QNetworkProxy::Capabilities>(capab));
}

int QNetworkProxy_capabilities(const QNetworkProxy* self) {
	QNetworkProxy::Capabilities _ret = self->capabilities();
	return static_cast<int>(_ret);
}

bool QNetworkProxy_isCachingProxy(const QNetworkProxy* self) {
	return self->isCachingProxy();
}

bool QNetworkProxy_isTransparentProxy(const QNetworkProxy* self) {
	return self->isTransparentProxy();
}

void QNetworkProxy_setUser(QNetworkProxy* self, struct miqt_string userName) {
	QString userName_QString = QString::fromUtf8(userName.data, userName.len);
	self->setUser(userName_QString);
}

struct miqt_string QNetworkProxy_user(const QNetworkProxy* self) {
	QString _ret = self->user();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkProxy_setPassword(QNetworkProxy* self, struct miqt_string password) {
	QString password_QString = QString::fromUtf8(password.data, password.len);
	self->setPassword(password_QString);
}

struct miqt_string QNetworkProxy_password(const QNetworkProxy* self) {
	QString _ret = self->password();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkProxy_setHostName(QNetworkProxy* self, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->setHostName(hostName_QString);
}

struct miqt_string QNetworkProxy_hostName(const QNetworkProxy* self) {
	QString _ret = self->hostName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkProxy_setPort(QNetworkProxy* self, uint16_t port) {
	self->setPort(static_cast<quint16>(port));
}

uint16_t QNetworkProxy_port(const QNetworkProxy* self) {
	quint16 _ret = self->port();
	return static_cast<uint16_t>(_ret);
}

void QNetworkProxy_setApplicationProxy(QNetworkProxy* proxy) {
	QNetworkProxy::setApplicationProxy(*proxy);
}

QNetworkProxy* QNetworkProxy_applicationProxy() {
	return new QNetworkProxy(QNetworkProxy::applicationProxy());
}

QVariant* QNetworkProxy_header(const QNetworkProxy* self, int header) {
	return new QVariant(self->header(static_cast<QNetworkRequest::KnownHeaders>(header)));
}

void QNetworkProxy_setHeader(QNetworkProxy* self, int header, QVariant* value) {
	self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

bool QNetworkProxy_hasRawHeader(const QNetworkProxy* self, struct miqt_string headerName) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	return self->hasRawHeader(headerName_QByteArray);
}

struct miqt_array /* of struct miqt_string */  QNetworkProxy_rawHeaderList(const QNetworkProxy* self) {
	QList<QByteArray> _ret = self->rawHeaderList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QNetworkProxy_rawHeader(const QNetworkProxy* self, struct miqt_string headerName) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray _qb = self->rawHeader(headerName_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QNetworkProxy_setRawHeader(QNetworkProxy* self, struct miqt_string headerName, struct miqt_string value) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray value_QByteArray(value.data, value.len);
	self->setRawHeader(headerName_QByteArray, value_QByteArray);
}

void QNetworkProxy_delete(QNetworkProxy* self) {
	delete self;
}

class MiqtVirtualQNetworkProxyFactory final : public QNetworkProxyFactory {
public:

	MiqtVirtualQNetworkProxyFactory(): QNetworkProxyFactory() {};

	virtual ~MiqtVirtualQNetworkProxyFactory() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__queryProxy = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery& query) override {
		if (handle__queryProxy == 0) {
			return QList<QNetworkProxy>(); // Pure virtual, there is no base we can call
		}
		
		const QNetworkProxyQuery& query_ret = query;
		// Cast returned reference into pointer
		QNetworkProxyQuery* sigval1 = const_cast<QNetworkProxyQuery*>(&query_ret);

		struct miqt_array /* of QNetworkProxy* */  callback_return_value = miqt_exec_callback_QNetworkProxyFactory_queryProxy(this, handle__queryProxy, sigval1);
		QList<QNetworkProxy> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QNetworkProxy** callback_return_value_arr = static_cast<QNetworkProxy**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

};

QNetworkProxyFactory* QNetworkProxyFactory_new() {
	return new MiqtVirtualQNetworkProxyFactory();
}

struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_queryProxy(QNetworkProxyFactory* self, QNetworkProxyQuery* query) {
	QList<QNetworkProxy> _ret = self->queryProxy(*query);
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkProxy** _arr = static_cast<QNetworkProxy**>(malloc(sizeof(QNetworkProxy*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkProxy(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QNetworkProxyFactory_usesSystemConfiguration() {
	return QNetworkProxyFactory::usesSystemConfiguration();
}

void QNetworkProxyFactory_setUseSystemConfiguration(bool enable) {
	QNetworkProxyFactory::setUseSystemConfiguration(enable);
}

void QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFactory* factory) {
	QNetworkProxyFactory::setApplicationProxyFactory(factory);
}

struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_proxyForQuery(QNetworkProxyQuery* query) {
	QList<QNetworkProxy> _ret = QNetworkProxyFactory::proxyForQuery(*query);
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkProxy** _arr = static_cast<QNetworkProxy**>(malloc(sizeof(QNetworkProxy*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkProxy(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_systemProxyForQuery() {
	QList<QNetworkProxy> _ret = QNetworkProxyFactory::systemProxyForQuery();
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkProxy** _arr = static_cast<QNetworkProxy**>(malloc(sizeof(QNetworkProxy*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkProxy(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QNetworkProxyFactory_operatorAssign(QNetworkProxyFactory* self, QNetworkProxyFactory* param1) {
	self->operator=(*param1);
}

struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_systemProxyForQuery1(QNetworkProxyQuery* query) {
	QList<QNetworkProxy> _ret = QNetworkProxyFactory::systemProxyForQuery(*query);
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkProxy** _arr = static_cast<QNetworkProxy**>(malloc(sizeof(QNetworkProxy*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkProxy(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QNetworkProxyFactory_override_virtual_queryProxy(void* self, intptr_t slot) {
	MiqtVirtualQNetworkProxyFactory* self_cast = dynamic_cast<MiqtVirtualQNetworkProxyFactory*>( (QNetworkProxyFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__queryProxy = slot;
	return true;
}

void QNetworkProxyFactory_delete(QNetworkProxyFactory* self) {
	delete self;
}

