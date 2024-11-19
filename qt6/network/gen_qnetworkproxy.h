#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QNETWORKPROXY_H
#define MIQT_QT6_NETWORK_GEN_QNETWORKPROXY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QNetworkProxy;
class QNetworkProxyFactory;
class QNetworkProxyQuery;
class QUrl;
class QVariant;
#else
typedef struct QByteArray QByteArray;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QNetworkProxyFactory QNetworkProxyFactory;
typedef struct QNetworkProxyQuery QNetworkProxyQuery;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

void QNetworkProxyQuery_new(QNetworkProxyQuery** outptr_QNetworkProxyQuery);
void QNetworkProxyQuery_new2(QUrl* requestUrl, QNetworkProxyQuery** outptr_QNetworkProxyQuery);
void QNetworkProxyQuery_new3(struct miqt_string hostname, int port, QNetworkProxyQuery** outptr_QNetworkProxyQuery);
void QNetworkProxyQuery_new4(uint16_t bindPort, QNetworkProxyQuery** outptr_QNetworkProxyQuery);
void QNetworkProxyQuery_new5(QNetworkProxyQuery* other, QNetworkProxyQuery** outptr_QNetworkProxyQuery);
void QNetworkProxyQuery_new6(QUrl* requestUrl, int queryType, QNetworkProxyQuery** outptr_QNetworkProxyQuery);
void QNetworkProxyQuery_new7(struct miqt_string hostname, int port, struct miqt_string protocolTag, QNetworkProxyQuery** outptr_QNetworkProxyQuery);
void QNetworkProxyQuery_new8(struct miqt_string hostname, int port, struct miqt_string protocolTag, int queryType, QNetworkProxyQuery** outptr_QNetworkProxyQuery);
void QNetworkProxyQuery_new9(uint16_t bindPort, struct miqt_string protocolTag, QNetworkProxyQuery** outptr_QNetworkProxyQuery);
void QNetworkProxyQuery_new10(uint16_t bindPort, struct miqt_string protocolTag, int queryType, QNetworkProxyQuery** outptr_QNetworkProxyQuery);
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
void QNetworkProxyQuery_Delete(QNetworkProxyQuery* self, bool isSubclass);

void QNetworkProxy_new(QNetworkProxy** outptr_QNetworkProxy);
void QNetworkProxy_new2(int typeVal, QNetworkProxy** outptr_QNetworkProxy);
void QNetworkProxy_new3(QNetworkProxy* other, QNetworkProxy** outptr_QNetworkProxy);
void QNetworkProxy_new4(int typeVal, struct miqt_string hostName, QNetworkProxy** outptr_QNetworkProxy);
void QNetworkProxy_new5(int typeVal, struct miqt_string hostName, uint16_t port, QNetworkProxy** outptr_QNetworkProxy);
void QNetworkProxy_new6(int typeVal, struct miqt_string hostName, uint16_t port, struct miqt_string user, QNetworkProxy** outptr_QNetworkProxy);
void QNetworkProxy_new7(int typeVal, struct miqt_string hostName, uint16_t port, struct miqt_string user, struct miqt_string password, QNetworkProxy** outptr_QNetworkProxy);
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
void QNetworkProxy_Delete(QNetworkProxy* self, bool isSubclass);

struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_QueryProxy(QNetworkProxyFactory* self, QNetworkProxyQuery* query);
bool QNetworkProxyFactory_UsesSystemConfiguration();
void QNetworkProxyFactory_SetUseSystemConfiguration(bool enable);
void QNetworkProxyFactory_SetApplicationProxyFactory(QNetworkProxyFactory* factory);
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_ProxyForQuery(QNetworkProxyQuery* query);
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_SystemProxyForQuery();
void QNetworkProxyFactory_OperatorAssign(QNetworkProxyFactory* self, QNetworkProxyFactory* param1);
struct miqt_array /* of QNetworkProxy* */  QNetworkProxyFactory_SystemProxyForQuery1(QNetworkProxyQuery* query);
void QNetworkProxyFactory_Delete(QNetworkProxyFactory* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
