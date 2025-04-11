#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QNETWORKDATAGRAM_H
#define MIQT_QT6_NETWORK_GEN_QNETWORKDATAGRAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QHostAddress;
class QNetworkDatagram;
#else
typedef struct QHostAddress QHostAddress;
typedef struct QNetworkDatagram QNetworkDatagram;
#endif

QNetworkDatagram* QNetworkDatagram_new();
QNetworkDatagram* QNetworkDatagram_new2(struct miqt_string data);
QNetworkDatagram* QNetworkDatagram_new3(QNetworkDatagram* other);
QNetworkDatagram* QNetworkDatagram_new4(struct miqt_string data, QHostAddress* destinationAddress);
QNetworkDatagram* QNetworkDatagram_new5(struct miqt_string data, QHostAddress* destinationAddress, unsigned short port);
void QNetworkDatagram_operatorAssign(QNetworkDatagram* self, QNetworkDatagram* other);
void QNetworkDatagram_swap(QNetworkDatagram* self, QNetworkDatagram* other);
void QNetworkDatagram_clear(QNetworkDatagram* self);
bool QNetworkDatagram_isValid(const QNetworkDatagram* self);
bool QNetworkDatagram_isNull(const QNetworkDatagram* self);
unsigned int QNetworkDatagram_interfaceIndex(const QNetworkDatagram* self);
void QNetworkDatagram_setInterfaceIndex(QNetworkDatagram* self, unsigned int index);
QHostAddress* QNetworkDatagram_senderAddress(const QNetworkDatagram* self);
QHostAddress* QNetworkDatagram_destinationAddress(const QNetworkDatagram* self);
int QNetworkDatagram_senderPort(const QNetworkDatagram* self);
int QNetworkDatagram_destinationPort(const QNetworkDatagram* self);
void QNetworkDatagram_setSender(QNetworkDatagram* self, QHostAddress* address);
void QNetworkDatagram_setDestination(QNetworkDatagram* self, QHostAddress* address, unsigned short port);
int QNetworkDatagram_hopLimit(const QNetworkDatagram* self);
void QNetworkDatagram_setHopLimit(QNetworkDatagram* self, int count);
struct miqt_string QNetworkDatagram_data(const QNetworkDatagram* self);
void QNetworkDatagram_setData(QNetworkDatagram* self, struct miqt_string data);
QNetworkDatagram* QNetworkDatagram_makeReply(const QNetworkDatagram* self, struct miqt_string payload);
void QNetworkDatagram_setSender2(QNetworkDatagram* self, QHostAddress* address, unsigned short port);
void QNetworkDatagram_delete(QNetworkDatagram* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
