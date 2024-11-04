#ifndef GEN_QUDPSOCKET_H
#define GEN_QUDPSOCKET_H

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
class QHostAddress;
class QMetaObject;
class QNetworkDatagram;
class QNetworkInterface;
class QObject;
class QUdpSocket;
#else
typedef struct QByteArray QByteArray;
typedef struct QHostAddress QHostAddress;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkDatagram QNetworkDatagram;
typedef struct QNetworkInterface QNetworkInterface;
typedef struct QObject QObject;
typedef struct QUdpSocket QUdpSocket;
#endif

QUdpSocket* QUdpSocket_new();
QUdpSocket* QUdpSocket_new2(QObject* parent);
QMetaObject* QUdpSocket_MetaObject(const QUdpSocket* self);
void* QUdpSocket_Metacast(QUdpSocket* self, const char* param1);
struct miqt_string QUdpSocket_Tr(const char* s);
struct miqt_string QUdpSocket_TrUtf8(const char* s);
bool QUdpSocket_JoinMulticastGroup(QUdpSocket* self, QHostAddress* groupAddress);
bool QUdpSocket_JoinMulticastGroup2(QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface);
bool QUdpSocket_LeaveMulticastGroup(QUdpSocket* self, QHostAddress* groupAddress);
bool QUdpSocket_LeaveMulticastGroup2(QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface);
QNetworkInterface* QUdpSocket_MulticastInterface(const QUdpSocket* self);
void QUdpSocket_SetMulticastInterface(QUdpSocket* self, QNetworkInterface* iface);
bool QUdpSocket_HasPendingDatagrams(const QUdpSocket* self);
long long QUdpSocket_PendingDatagramSize(const QUdpSocket* self);
QNetworkDatagram* QUdpSocket_ReceiveDatagram(QUdpSocket* self);
long long QUdpSocket_ReadDatagram(QUdpSocket* self, char* data, long long maxlen);
long long QUdpSocket_WriteDatagram(QUdpSocket* self, QNetworkDatagram* datagram);
long long QUdpSocket_WriteDatagram2(QUdpSocket* self, const char* data, long long lenVal, QHostAddress* host, uint16_t port);
long long QUdpSocket_WriteDatagram3(QUdpSocket* self, struct miqt_string datagram, QHostAddress* host, uint16_t port);
struct miqt_string QUdpSocket_Tr2(const char* s, const char* c);
struct miqt_string QUdpSocket_Tr3(const char* s, const char* c, int n);
struct miqt_string QUdpSocket_TrUtf82(const char* s, const char* c);
struct miqt_string QUdpSocket_TrUtf83(const char* s, const char* c, int n);
QNetworkDatagram* QUdpSocket_ReceiveDatagram1(QUdpSocket* self, long long maxSize);
long long QUdpSocket_ReadDatagram3(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host);
long long QUdpSocket_ReadDatagram4(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host, uint16_t* port);
void QUdpSocket_Delete(QUdpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
