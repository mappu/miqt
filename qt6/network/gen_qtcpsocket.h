#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QTCPSOCKET_H
#define MIQT_QT6_NETWORK_GEN_QTCPSOCKET_H

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
class QObject;
class QTcpSocket;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTcpSocket QTcpSocket;
#endif

QTcpSocket* QTcpSocket_new();
QTcpSocket* QTcpSocket_new2(QObject* parent);
QMetaObject* QTcpSocket_MetaObject(const QTcpSocket* self);
void* QTcpSocket_Metacast(QTcpSocket* self, const char* param1);
struct miqt_string QTcpSocket_Tr(const char* s);
bool QTcpSocket_Bind(QTcpSocket* self, int addr);
struct miqt_string QTcpSocket_Tr2(const char* s, const char* c);
struct miqt_string QTcpSocket_Tr3(const char* s, const char* c, int n);
bool QTcpSocket_Bind2(QTcpSocket* self, int addr, uint16_t port);
bool QTcpSocket_Bind3(QTcpSocket* self, int addr, uint16_t port, int mode);
void QTcpSocket_Delete(QTcpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
