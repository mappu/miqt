#ifndef GEN_QTCPSOCKET_H
#define GEN_QTCPSOCKET_H

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
struct miqt_string QTcpSocket_TrUtf8(const char* s);
struct miqt_string QTcpSocket_Tr2(const char* s, const char* c);
struct miqt_string QTcpSocket_Tr3(const char* s, const char* c, int n);
struct miqt_string QTcpSocket_TrUtf82(const char* s, const char* c);
struct miqt_string QTcpSocket_TrUtf83(const char* s, const char* c, int n);
void QTcpSocket_Delete(QTcpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
