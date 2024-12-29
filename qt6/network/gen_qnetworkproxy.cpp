#include <QByteArray>
#include <QList>
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

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

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

QNetworkProxyQuery* QNetworkProxyQuery_new5(QNetworkProxyQuery* other) {
	return new QNetworkProxyQuery(*other);
}

QNetworkProxyQuery* QNetworkProxyQuery_new6(QUrl* requestUrl, int queryType) {
	return new QNetworkProxyQuery(*requestUrl, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

QNetworkProxyQuery* QNetworkProxyQuery_new7(struct miqt_string hostname, int port, struct miqt_string protocolTag) {
	QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(hostname_QString, static_cast<int>(port), protocolTag_QString);
}

QNetworkProxyQuery* QNetworkProxyQuery_new8(struct miqt_string hostname, int port, struct miqt_string protocolTag, int queryType) {
	QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(hostname_QString, static_cast<int>(port), protocolTag_QString, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

QNetworkProxyQuery* QNetworkProxyQuery_new9(uint16_t bindPort, struct miqt_string protocolTag) {
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(static_cast<quint16>(bindPort), protocolTag_QString);
}

QNetworkProxyQuery* QNetworkProxyQuery_new10(uint16_t bindPort, struct miqt_string protocolTag, int queryType) {
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	return new QNetworkProxyQuery(static_cast<quint16>(bindPort), protocolTag_QString, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

void QNetworkProxyQuery_OperatorAssign(QNetworkProxyQuery* self, QNetworkProxyQuery* other) {
	self->operator=(*other);
}

void QNetworkProxyQuery_Swap(QNetworkProxyQuery* self, QNetworkProxyQuery* other) {
	self->swap(*other);
}

bool QNetworkProxyQuery_OperatorEqual(const QNetworkProxyQuery* self, QNetworkProxyQuery* other) {
	return (*self == *other);
}

bool QNetworkProxyQuery_OperatorNotEqual(const QNetworkProxyQuery* self, QNetworkProxyQuery* other) {
	return (*self != *other);
}

int QNetworkProxyQuery_QueryType(const QNetworkProxyQuery* self) {
	QNetworkProxyQuery::QueryType _ret = self->queryType();
	return static_cast<int>(_ret);
}

void QNetworkProxyQuery_SetQueryType(QNetworkProxyQuery* self, int typeVal) {
	self->setQueryType(static_cast<QNetworkProxyQuery::QueryType>(typeVal));
}

int QNetworkProxyQuery_PeerPort(const QNetworkProxyQuery* self) {
	return self->peerPort();
}

void QNetworkProxyQuery_SetPeerPort(QNetworkProxyQuery* self, int port) {
	self->setPeerPort(static_cast<int>(port));
}

struct miqt_string QNetworkProxyQuery_PeerHostName(const QNetworkProxyQuery* self) {
	QString _ret = self->peerHostName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkProxyQuery_SetPeerHostName(QNetworkProxyQuery* self, struct miqt_string hostname) {
	QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
	self->setPeerHostName(hostname_QString);
}

int QNetworkProxyQuery_LocalPort(const QNetworkProxyQuery* self) {
	return self->localPort();
}

void QNetworkProxyQuery_SetLocalPort(QNetworkProxyQuery* self, int port) {
	self->setLocalPort(static_cast<int>(port));
}

struct miqt_string QNetworkProxyQuery_ProtocolTag(const QNetworkProxyQuery* self) {
	QString _ret = self->protocolTag();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkProxyQuery_SetProtocolTag(QNetworkProxyQuery* self, struct miqt_string protocolTag) {
	QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
	self->setProtocolTag(protocolTag_QString);
}

QUrl* QNetworkProxyQuery_Url(const QNetworkProxyQuery* self) {
	return new QUrl(self->url());
}

void QNetworkProxyQuery_SetUrl(QNetworkProxyQuery* self, QUrl* url) {
	self->setUrl(*url);
}

void QNetworkProxyQuery_Delete(QNetworkProxyQuery* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QNetworkProxyQuery*>( self );
	} else {
		delete self;
	}
}

QNetworkProxy* QNetworkProxy_new() {
	return new QNetworkProxy();
}

QNetworkProxy* QNetworkProxy_new2(int typeVal) {
	return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal));
}

QNetworkProxy* QNetworkProxy_new3(QNetworkProxy* other) {
	return new QNetworkProxy(*other);
}

QNetworkProxy* QNetworkProxy_new4(int typeVal, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), hostName_QString);
}

QNetworkProxy* QNetworkProxy_new5(int typeVal, struct miqt_string hostName, uint16_t port) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), hostName_QString, static_cast<quint16>(port));
}

QNetworkProxy* QNetworkProxy_new6(int typeVal, struct miqt_string hostName, uint16_t port, struct miqt_string user) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString user_QString = QString::fromUtf8(user.data, user.len);
	return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), hostName_QString, static_cast<quint16>(port), user_QString);
}

QNetworkProxy* QNetworkProxy_new7(int typeVal, struct miqt_string hostName, uint16_t port, struct miqt_string user, struct miqt_string password) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString user_QString = QString::fromUtf8(user.data, user.len);
	QString password_QString = QString::fromUtf8(password.data, password.len);
	return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), hostName_QString, static_cast<quint16>(port), user_QString, password_QString);
}

void QNetworkProxy_OperatorAssign(QNetworkProxy* self, QNetworkProxy* other) {
	self->operator=(*other);
}

void QNetworkProxy_Swap(QNetworkProxy* self, QNetworkProxy* other) {
	self->swap(*other);
}

bool QNetworkProxy_OperatorEqual(const QNetworkProxy* self, QNetworkProxy* other) {
	return (*self == *other);
}

bool QNetworkProxy_OperatorNotEqual(const QNetworkProxy* self, QNetworkProxy* other) {
	return (*self != *other);
}

void QNetworkProxy_SetType(QNetworkProxy* self, int typeVal) {
	self->setType(static_cast<QNetworkProxy::ProxyType>(typeVal));
}

int QNetworkProxy_Type(const QNetworkProxy* self) {
	QNetworkProxy::ProxyType _ret = self->type();
	return static_cast<int>(_ret);
}

void QNetworkProxy_SetCapabilities(QNetworkProxy* self, int capab) {
	self->setCapabilities(static_cast<QNetworkProxy::Capabilities>(capab));
}

int QNetworkProxy_Capabilities(const QNetworkProxy* self) {
	QNetworkProxy::Capabilities _ret = self->capabilities();
	return static_cast<int>(_ret);
}

bool QNetworkProxy_IsCachingProxy(const QNetworkProxy* self) {
	return self->isCachingProxy();
}

bool QNetworkProxy_IsTransparentProxy(const QNetworkProxy* self) {
	return self->isTransparentProxy();
}

void QNetworkProxy_SetUser(QNetworkProxy* self, struct miqt_string userName) {
	QString userName_QString = QString::fromUtf8(userName.data, userName.len);
	self->setUser(userName_QString);
}

struct miqt_string QNetworkProxy_User(const QNetworkProxy* self) {
	QString _ret = self->user();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkProxy_SetPassword(QNetworkProxy* self, struct miqt_string password) {
	QString password_QString = QString::fromUtf8(password.data, password.len);
	self->setPassword(password_QString);
}

struct miqt_string QNetworkProxy_Password(const QNetworkProxy* self) {
	QString _ret = self->password();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkProxy_SetHostName(QNetworkProxy* self, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->setHostName(hostName_QString);
}

struct miqt_string QNetworkProxy_HostName(const QNetworkProxy* self) {
	QString _ret = self->hostName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkProxy_SetPort(QNetworkProxy* self, uint16_t port) {
	self->setPort(static_cast<quint16>(port));
}

uint16_t QNetworkProxy_Port(const QNetworkProxy* self) {
	quint16 _ret = self->port();
	return static_cast<uint16_t>(_ret);
}

void QNetworkProxy_SetApplicationProxy(QNetworkProxy* proxy) {
	QNetworkProxy::setApplicationProxy(*proxy);
}

QNetworkProxy* QNetworkProxy_ApplicationProxy() {
	return new QNetworkProxy(QNetworkProxy::applicationProxy());
}

QVariant* QNetworkProxy_Header(const QNetworkProxy* self, int header) {
	return new QVariant(self->header(static_cast<QNetworkRequest::KnownHeaders>(header)));
}

void QNetworkProxy_SetHeader(QNetworkProxy* self, int header, QVariant* value) {
	self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

bool QNetworkProxy_HasRawHeader(const QNetworkProxy* self, struct miqt_string headerName) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	return self->hasRawHeader(headerName_QByteArray);
}

struct miqt_array /* of struct miqt_string */  QNetworkProxy_RawHeaderList(const QNetworkProxy* self) {
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

struct miqt_string QNetworkProxy_RawHeader(const QNetworkProxy* self, struct miqt_string headerName) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray _qb = self->rawHeader(headerName_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QNetworkProxy_SetRawHeader(QNetworkProxy* self, struct miqt_string headerName, struct miqt_string value) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray value_QByteArray(value.data, value.len);
	self->setRawHeader(headerName_QByteArray, value_QByteArray);
}

void QNetworkProxy_Delete(QNetworkProxy* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QNetworkProxy*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQNetworkProxyFactory : public virtual QNetworkProxyFactory {
public:

	MiqtVirtualQNetworkProxyFactory(): QNetworkProxyFactory() {};

	virtual ~MiqtVirtualQNetworkProxyFactory() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__QueryProxy = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery& query) override {
		if (handle__QueryProxy == 0) {
			return QList<QNetworkProxy>(); // Pure virtual, there is no base we can call
		}
		
		const QNetworkProxyQuery& query_ret = query;
		// Cast returned reference into pointer
		QNetworkProxyQuery* sigval1 = const_cast<QNetworkProxyQuery*>(&query_ret);

		struct miqt_array /* of QNetworkProxy* */  callback_return_value = miqt_exec_callback_QNetworkProxyFactory_QueryProxy(this, handle__QueryProxy, sigval1);
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

struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_QueryProxy(QNetworkProxyFactory* self, QNetworkProxyQuery* query) {
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

bool QNetworkProxyFactory_UsesSystemConfiguration() {
	return QNetworkProxyFactory::usesSystemConfiguration();
}

void QNetworkProxyFactory_SetUseSystemConfiguration(bool enable) {
	QNetworkProxyFactory::setUseSystemConfiguration(enable);
}

void QNetworkProxyFactory_SetApplicationProxyFactory(QNetworkProxyFactory* factory) {
	QNetworkProxyFactory::setApplicationProxyFactory(factory);
}

struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_ProxyForQuery(QNetworkProxyQuery* query) {
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

struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_SystemProxyForQuery() {
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

void QNetworkProxyFactory_OperatorAssign(QNetworkProxyFactory* self, QNetworkProxyFactory* param1) {
	self->operator=(*param1);
}

struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_SystemProxyForQuery1(QNetworkProxyQuery* query) {
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

void QNetworkProxyFactory_override_virtual_QueryProxy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkProxyFactory*>( (QNetworkProxyFactory*)(self) )->handle__QueryProxy = slot;
}

void QNetworkProxyFactory_Delete(QNetworkProxyFactory* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQNetworkProxyFactory*>( self );
	} else {
		delete self;
	}
}

