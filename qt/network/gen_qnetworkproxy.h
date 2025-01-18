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
void QNetworkProxyQuery_OperatorAssign(QNetworkProxyQuery* self, QNetworkProxyQuery* other);
void QNetworkProxyQuery_Swap(QNetworkProxyQuery* self, QNetworkProxyQuery* other);
bool QNetworkProxyQuery_OperatorEqual(const QNetworkProxyQuery* self, QNetworkProxyQuery* other);
bool QNetworkProxyQuery_OperatorNotEqual(const QNetworkProxyQuery* self, QNetworkProxyQuery* other);
int QNetworkProxyQuery_QueryType(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetQueryType(QNetworkProxyQuery* self, int typeVal);
int QNetworkProxyQuery_PeerPort(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetPeerPort(QNetworkProxyQuery* self, int port);
struct miqt_string QNetworkProxyQuery_PeerHostName(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetPeerHostName(QNetworkProxyQuery* self, struct miqt_string hostname);
int QNetworkProxyQuery_LocalPort(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetLocalPort(QNetworkProxyQuery* self, int port);
struct miqt_string QNetworkProxyQuery_ProtocolTag(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetProtocolTag(QNetworkProxyQuery* self, struct miqt_string protocolTag);
QUrl* QNetworkProxyQuery_Url(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetUrl(QNetworkProxyQuery* self, QUrl* url);
QNetworkConfiguration* QNetworkProxyQuery_NetworkConfiguration(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetNetworkConfiguration(QNetworkProxyQuery* self, QNetworkConfiguration* networkConfiguration);
void QNetworkProxyQuery_Delete(QNetworkProxyQuery* self);

QNetworkProxy* QNetworkProxy_new();
QNetworkProxy* QNetworkProxy_new2(int typeVal);
QNetworkProxy* QNetworkProxy_new3(QNetworkProxy* other);
QNetworkProxy* QNetworkProxy_new4(int typeVal, struct miqt_string hostName);
QNetworkProxy* QNetworkProxy_new5(int typeVal, struct miqt_string hostName, uint16_t port);
QNetworkProxy* QNetworkProxy_new6(int typeVal, struct miqt_string hostName, uint16_t port, struct miqt_string user);
QNetworkProxy* QNetworkProxy_new7(int typeVal, struct miqt_string hostName, uint16_t port, struct miqt_string user, struct miqt_string password);
void QNetworkProxy_OperatorAssign(QNetworkProxy* self, QNetworkProxy* other);
void QNetworkProxy_Swap(QNetworkProxy* self, QNetworkProxy* other);
bool QNetworkProxy_OperatorEqual(const QNetworkProxy* self, QNetworkProxy* other);
bool QNetworkProxy_OperatorNotEqual(const QNetworkProxy* self, QNetworkProxy* other);
void QNetworkProxy_SetType(QNetworkProxy* self, int typeVal);
int QNetworkProxy_Type(const QNetworkProxy* self);
void QNetworkProxy_SetCapabilities(QNetworkProxy* self, int capab);
int QNetworkProxy_Capabilities(const QNetworkProxy* self);
bool QNetworkProxy_IsCachingProxy(const QNetworkProxy* self);
bool QNetworkProxy_IsTransparentProxy(const QNetworkProxy* self);
void QNetworkProxy_SetUser(QNetworkProxy* self, struct miqt_string userName);
struct miqt_string QNetworkProxy_User(const QNetworkProxy* self);
void QNetworkProxy_SetPassword(QNetworkProxy* self, struct miqt_string password);
struct miqt_string QNetworkProxy_Password(const QNetworkProxy* self);
void QNetworkProxy_SetHostName(QNetworkProxy* self, struct miqt_string hostName);
struct miqt_string QNetworkProxy_HostName(const QNetworkProxy* self);
void QNetworkProxy_SetPort(QNetworkProxy* self, uint16_t port);
uint16_t QNetworkProxy_Port(const QNetworkProxy* self);
void QNetworkProxy_SetApplicationProxy(QNetworkProxy* proxy);
QNetworkProxy* QNetworkProxy_ApplicationProxy();
QVariant* QNetworkProxy_Header(const QNetworkProxy* self, int header);
void QNetworkProxy_SetHeader(QNetworkProxy* self, int header, QVariant* value);
bool QNetworkProxy_HasRawHeader(const QNetworkProxy* self, struct miqt_string headerName);
struct miqt_array /* of struct miqt_string */  QNetworkProxy_RawHeaderList(const QNetworkProxy* self);
struct miqt_string QNetworkProxy_RawHeader(const QNetworkProxy* self, struct miqt_string headerName);
void QNetworkProxy_SetRawHeader(QNetworkProxy* self, struct miqt_string headerName, struct miqt_string value);
void QNetworkProxy_Delete(QNetworkProxy* self);

QNetworkProxyFactory* QNetworkProxyFactory_new();
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_QueryProxy(QNetworkProxyFactory* self, QNetworkProxyQuery* query);
bool QNetworkProxyFactory_UsesSystemConfiguration();
void QNetworkProxyFactory_SetUseSystemConfiguration(bool enable);
void QNetworkProxyFactory_SetApplicationProxyFactory(QNetworkProxyFactory* factory);
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_ProxyForQuery(QNetworkProxyQuery* query);
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_SystemProxyForQuery();
void QNetworkProxyFactory_OperatorAssign(QNetworkProxyFactory* self, QNetworkProxyFactory* param1);
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_SystemProxyForQuery1(QNetworkProxyQuery* query);
bool QNetworkProxyFactory_override_virtual_QueryProxy(void* self, intptr_t slot);
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_virtualbase_QueryProxy(void* self, QNetworkProxyQuery* query);
void QNetworkProxyFactory_Delete(QNetworkProxyFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
