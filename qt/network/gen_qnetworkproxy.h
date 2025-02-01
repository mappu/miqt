#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QNETWORKPROXY_H
#define MIQT_QT_NETWORK_GEN_QNETWORKPROXY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QNetworkConfiguration;
class QNetworkProxy;
class QNetworkProxyFactory;
class QNetworkProxyQuery;
class QUrl;
class QVariant;
#else
typedef struct QNetworkConfiguration QNetworkConfiguration;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QNetworkProxyFactory QNetworkProxyFactory;
typedef struct QNetworkProxyQuery QNetworkProxyQuery;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QNetworkProxyQuery* QNetworkProxyQuery_new();
QNetworkProxyQuery* QNetworkProxyQuery_new2(QUrl* requestUrl);
QNetworkProxyQuery* QNetworkProxyQuery_new3(struct miqt_string hostname, int port);
QNetworkProxyQuery* QNetworkProxyQuery_new4(uint16_t bindPort);
QNetworkProxyQuery* QNetworkProxyQuery_new5(QNetworkConfiguration* networkConfiguration, QUrl* requestUrl);
QNetworkProxyQuery* QNetworkProxyQuery_new6(QNetworkConfiguration* networkConfiguration, struct miqt_string hostname, int port);
QNetworkProxyQuery* QNetworkProxyQuery_new7(QNetworkConfiguration* networkConfiguration, uint16_t bindPort);
QNetworkProxyQuery* QNetworkProxyQuery_new8(QNetworkProxyQuery* other);
QNetworkProxyQuery* QNetworkProxyQuery_new9(QUrl* requestUrl, int queryType);
QNetworkProxyQuery* QNetworkProxyQuery_new10(struct miqt_string hostname, int port, struct miqt_string protocolTag);
QNetworkProxyQuery* QNetworkProxyQuery_new11(struct miqt_string hostname, int port, struct miqt_string protocolTag, int queryType);
QNetworkProxyQuery* QNetworkProxyQuery_new12(uint16_t bindPort, struct miqt_string protocolTag);
QNetworkProxyQuery* QNetworkProxyQuery_new13(uint16_t bindPort, struct miqt_string protocolTag, int queryType);
QNetworkProxyQuery* QNetworkProxyQuery_new14(QNetworkConfiguration* networkConfiguration, QUrl* requestUrl, int queryType);
QNetworkProxyQuery* QNetworkProxyQuery_new15(QNetworkConfiguration* networkConfiguration, struct miqt_string hostname, int port, struct miqt_string protocolTag);
QNetworkProxyQuery* QNetworkProxyQuery_new16(QNetworkConfiguration* networkConfiguration, struct miqt_string hostname, int port, struct miqt_string protocolTag, int queryType);
QNetworkProxyQuery* QNetworkProxyQuery_new17(QNetworkConfiguration* networkConfiguration, uint16_t bindPort, struct miqt_string protocolTag);
QNetworkProxyQuery* QNetworkProxyQuery_new18(QNetworkConfiguration* networkConfiguration, uint16_t bindPort, struct miqt_string protocolTag, int queryType);
void QNetworkProxyQuery_operatorAssign(QNetworkProxyQuery* self, QNetworkProxyQuery* other);
void QNetworkProxyQuery_swap(QNetworkProxyQuery* self, QNetworkProxyQuery* other);
bool QNetworkProxyQuery_operatorEqual(const QNetworkProxyQuery* self, QNetworkProxyQuery* other);
bool QNetworkProxyQuery_operatorNotEqual(const QNetworkProxyQuery* self, QNetworkProxyQuery* other);
int QNetworkProxyQuery_queryType(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_setQueryType(QNetworkProxyQuery* self, int type);
int QNetworkProxyQuery_peerPort(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_setPeerPort(QNetworkProxyQuery* self, int port);
struct miqt_string QNetworkProxyQuery_peerHostName(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_setPeerHostName(QNetworkProxyQuery* self, struct miqt_string hostname);
int QNetworkProxyQuery_localPort(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_setLocalPort(QNetworkProxyQuery* self, int port);
struct miqt_string QNetworkProxyQuery_protocolTag(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_setProtocolTag(QNetworkProxyQuery* self, struct miqt_string protocolTag);
QUrl* QNetworkProxyQuery_url(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_setUrl(QNetworkProxyQuery* self, QUrl* url);
QNetworkConfiguration* QNetworkProxyQuery_networkConfiguration(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_setNetworkConfiguration(QNetworkProxyQuery* self, QNetworkConfiguration* networkConfiguration);
void QNetworkProxyQuery_delete(QNetworkProxyQuery* self);

QNetworkProxy* QNetworkProxy_new();
QNetworkProxy* QNetworkProxy_new2(int type);
QNetworkProxy* QNetworkProxy_new3(QNetworkProxy* other);
QNetworkProxy* QNetworkProxy_new4(int type, struct miqt_string hostName);
QNetworkProxy* QNetworkProxy_new5(int type, struct miqt_string hostName, uint16_t port);
QNetworkProxy* QNetworkProxy_new6(int type, struct miqt_string hostName, uint16_t port, struct miqt_string user);
QNetworkProxy* QNetworkProxy_new7(int type, struct miqt_string hostName, uint16_t port, struct miqt_string user, struct miqt_string password);
void QNetworkProxy_operatorAssign(QNetworkProxy* self, QNetworkProxy* other);
void QNetworkProxy_swap(QNetworkProxy* self, QNetworkProxy* other);
bool QNetworkProxy_operatorEqual(const QNetworkProxy* self, QNetworkProxy* other);
bool QNetworkProxy_operatorNotEqual(const QNetworkProxy* self, QNetworkProxy* other);
void QNetworkProxy_setType(QNetworkProxy* self, int type);
int QNetworkProxy_type(const QNetworkProxy* self);
void QNetworkProxy_setCapabilities(QNetworkProxy* self, int capab);
int QNetworkProxy_capabilities(const QNetworkProxy* self);
bool QNetworkProxy_isCachingProxy(const QNetworkProxy* self);
bool QNetworkProxy_isTransparentProxy(const QNetworkProxy* self);
void QNetworkProxy_setUser(QNetworkProxy* self, struct miqt_string userName);
struct miqt_string QNetworkProxy_user(const QNetworkProxy* self);
void QNetworkProxy_setPassword(QNetworkProxy* self, struct miqt_string password);
struct miqt_string QNetworkProxy_password(const QNetworkProxy* self);
void QNetworkProxy_setHostName(QNetworkProxy* self, struct miqt_string hostName);
struct miqt_string QNetworkProxy_hostName(const QNetworkProxy* self);
void QNetworkProxy_setPort(QNetworkProxy* self, uint16_t port);
uint16_t QNetworkProxy_port(const QNetworkProxy* self);
void QNetworkProxy_setApplicationProxy(QNetworkProxy* proxy);
QNetworkProxy* QNetworkProxy_applicationProxy();
QVariant* QNetworkProxy_header(const QNetworkProxy* self, int header);
void QNetworkProxy_setHeader(QNetworkProxy* self, int header, QVariant* value);
bool QNetworkProxy_hasRawHeader(const QNetworkProxy* self, struct miqt_string headerName);
struct miqt_array /* of struct miqt_string */  QNetworkProxy_rawHeaderList(const QNetworkProxy* self);
struct miqt_string QNetworkProxy_rawHeader(const QNetworkProxy* self, struct miqt_string headerName);
void QNetworkProxy_setRawHeader(QNetworkProxy* self, struct miqt_string headerName, struct miqt_string value);
void QNetworkProxy_delete(QNetworkProxy* self);

QNetworkProxyFactory* QNetworkProxyFactory_new();
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_queryProxy(QNetworkProxyFactory* self, QNetworkProxyQuery* query);
bool QNetworkProxyFactory_usesSystemConfiguration();
void QNetworkProxyFactory_setUseSystemConfiguration(bool enable);
void QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFactory* factory);
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_proxyForQuery(QNetworkProxyQuery* query);
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_systemProxyForQuery();
void QNetworkProxyFactory_operatorAssign(QNetworkProxyFactory* self, QNetworkProxyFactory* param1);
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_systemProxyForQuery1(QNetworkProxyQuery* query);
bool QNetworkProxyFactory_override_virtual_queryProxy(void* self, intptr_t slot);
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_virtualbase_queryProxy(void* self, QNetworkProxyQuery* query);
void QNetworkProxyFactory_delete(QNetworkProxyFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
