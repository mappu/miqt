#ifndef GEN_QSSLSERVER_H
#define GEN_QSSLSERVER_H

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
class QSslConfiguration;
class QSslError;
class QSslPreSharedKeyAuthenticator;
class QSslServer;
class QSslSocket;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QSslServer QSslServer;
typedef struct QSslSocket QSslSocket;
#endif

QSslServer* QSslServer_new();
QSslServer* QSslServer_new2(QObject* parent);
QMetaObject* QSslServer_MetaObject(const QSslServer* self);
void* QSslServer_Metacast(QSslServer* self, const char* param1);
struct miqt_string QSslServer_Tr(const char* s);
void QSslServer_SetSslConfiguration(QSslServer* self, QSslConfiguration* sslConfiguration);
QSslConfiguration* QSslServer_SslConfiguration(const QSslServer* self);
void QSslServer_SetHandshakeTimeout(QSslServer* self, int timeout);
int QSslServer_HandshakeTimeout(const QSslServer* self);
void QSslServer_SslErrors(QSslServer* self, QSslSocket* socket, struct miqt_array /* of QSslError* */ errors);
void QSslServer_connect_SslErrors(QSslServer* self, intptr_t slot);
void QSslServer_PeerVerifyError(QSslServer* self, QSslSocket* socket, QSslError* error);
void QSslServer_connect_PeerVerifyError(QSslServer* self, intptr_t slot);
void QSslServer_ErrorOccurred(QSslServer* self, QSslSocket* socket, int error);
void QSslServer_connect_ErrorOccurred(QSslServer* self, intptr_t slot);
void QSslServer_PreSharedKeyAuthenticationRequired(QSslServer* self, QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator);
void QSslServer_connect_PreSharedKeyAuthenticationRequired(QSslServer* self, intptr_t slot);
void QSslServer_AlertSent(QSslServer* self, QSslSocket* socket, int level, int typeVal, struct miqt_string description);
void QSslServer_connect_AlertSent(QSslServer* self, intptr_t slot);
void QSslServer_AlertReceived(QSslServer* self, QSslSocket* socket, int level, int typeVal, struct miqt_string description);
void QSslServer_connect_AlertReceived(QSslServer* self, intptr_t slot);
void QSslServer_HandshakeInterruptedOnError(QSslServer* self, QSslSocket* socket, QSslError* error);
void QSslServer_connect_HandshakeInterruptedOnError(QSslServer* self, intptr_t slot);
void QSslServer_StartedEncryptionHandshake(QSslServer* self, QSslSocket* socket);
void QSslServer_connect_StartedEncryptionHandshake(QSslServer* self, intptr_t slot);
struct miqt_string QSslServer_Tr2(const char* s, const char* c);
struct miqt_string QSslServer_Tr3(const char* s, const char* c, int n);
void QSslServer_Delete(QSslServer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
