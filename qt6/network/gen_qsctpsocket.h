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
class QAbstractSocket;
class QIODevice;
class QIODeviceBase;
class QMetaObject;
class QNetworkDatagram;
class QObject;
class QSctpSocket;
class QTcpSocket;
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkDatagram QNetworkDatagram;
typedef struct QObject QObject;
typedef struct QSctpSocket QSctpSocket;
typedef struct QTcpSocket QTcpSocket;
#endif

void QSctpSocket_new(QSctpSocket** outptr_QSctpSocket, QTcpSocket** outptr_QTcpSocket, QAbstractSocket** outptr_QAbstractSocket, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase);
void QSctpSocket_new2(QObject* parent, QSctpSocket** outptr_QSctpSocket, QTcpSocket** outptr_QTcpSocket, QAbstractSocket** outptr_QAbstractSocket, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase);
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
long long QSctpSocket_ReadData(QSctpSocket* self, char* data, long long maxlen);
long long QSctpSocket_ReadLineData(QSctpSocket* self, char* data, long long maxlen);
struct miqt_string QSctpSocket_Tr2(const char* s, const char* c);
struct miqt_string QSctpSocket_Tr3(const char* s, const char* c, int n);
void QSctpSocket_override_virtual_Close(void* self, intptr_t slot);
void QSctpSocket_virtualbase_Close(void* self);
void QSctpSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot);
void QSctpSocket_virtualbase_DisconnectFromHost(void* self);
void QSctpSocket_override_virtual_ReadData(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_ReadData(void* self, char* data, long long maxlen);
void QSctpSocket_override_virtual_ReadLineData(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen);
void QSctpSocket_Delete(QSctpSocket* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
