#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QSCTPSOCKET_H
#define MIQT_QT6_NETWORK_GEN_QSCTPSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QNetworkDatagram;
class QObject;
class QSctpSocket;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkDatagram QNetworkDatagram;
typedef struct QObject QObject;
typedef struct QSctpSocket QSctpSocket;
#endif

QSctpSocket* QSctpSocket_new();
QSctpSocket* QSctpSocket_new2(QObject* parent);
QMetaObject* QSctpSocket_MetaObject(const QSctpSocket* self);
void* QSctpSocket_Metacast(QSctpSocket* self, const char* param1);
struct miqt_string QSctpSocket_Tr(const char* s);
void QSctpSocket_Close(QSctpSocket* self);
void QSctpSocket_DisconnectFromHost(QSctpSocket* self);
void QSctpSocket_SetMaximumChannelCount(QSctpSocket* self, int count);
int QSctpSocket_MaximumChannelCount(const QSctpSocket* self);
bool QSctpSocket_IsInDatagramMode(const QSctpSocket* self);
QNetworkDatagram* QSctpSocket_ReadDatagram(QSctpSocket* self);
bool QSctpSocket_WriteDatagram(QSctpSocket* self, QNetworkDatagram* datagram);
struct miqt_string QSctpSocket_Tr2(const char* s, const char* c);
struct miqt_string QSctpSocket_Tr3(const char* s, const char* c, int n);
void QSctpSocket_Delete(QSctpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
