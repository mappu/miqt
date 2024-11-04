#ifndef GEN_QSSLSOCKET_H
#define GEN_QSSLSOCKET_H

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
class QMetaObject;
class QObject;
class QOcspResponse;
class QSslCertificate;
class QSslCipher;
class QSslConfiguration;
class QSslError;
class QSslKey;
class QSslPreSharedKeyAuthenticator;
class QSslSocket;
class QVariant;
#else
typedef struct QByteArray QByteArray;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QOcspResponse QOcspResponse;
typedef struct QSslCertificate QSslCertificate;
typedef struct QSslCipher QSslCipher;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslKey QSslKey;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QSslSocket QSslSocket;
typedef struct QVariant QVariant;
#endif

QSslSocket* QSslSocket_new();
QSslSocket* QSslSocket_new2(QObject* parent);
QMetaObject* QSslSocket_MetaObject(const QSslSocket* self);
void* QSslSocket_Metacast(QSslSocket* self, const char* param1);
struct miqt_string QSslSocket_Tr(const char* s);
void QSslSocket_Resume(QSslSocket* self);
void QSslSocket_ConnectToHostEncrypted(QSslSocket* self, struct miqt_string hostName, uint16_t port);
void QSslSocket_ConnectToHostEncrypted2(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName);
bool QSslSocket_SetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor);
void QSslSocket_ConnectToHost(QSslSocket* self, struct miqt_string hostName, uint16_t port);
void QSslSocket_DisconnectFromHost(QSslSocket* self);
void QSslSocket_SetSocketOption(QSslSocket* self, int option, QVariant* value);
QVariant* QSslSocket_SocketOption(QSslSocket* self, int option);
int QSslSocket_Mode(const QSslSocket* self);
bool QSslSocket_IsEncrypted(const QSslSocket* self);
int QSslSocket_Protocol(const QSslSocket* self);
void QSslSocket_SetProtocol(QSslSocket* self, int protocol);
int QSslSocket_PeerVerifyMode(const QSslSocket* self);
void QSslSocket_SetPeerVerifyMode(QSslSocket* self, int mode);
int QSslSocket_PeerVerifyDepth(const QSslSocket* self);
void QSslSocket_SetPeerVerifyDepth(QSslSocket* self, int depth);
struct miqt_string QSslSocket_PeerVerifyName(const QSslSocket* self);
void QSslSocket_SetPeerVerifyName(QSslSocket* self, struct miqt_string hostName);
long long QSslSocket_BytesAvailable(const QSslSocket* self);
long long QSslSocket_BytesToWrite(const QSslSocket* self);
bool QSslSocket_CanReadLine(const QSslSocket* self);
void QSslSocket_Close(QSslSocket* self);
bool QSslSocket_AtEnd(const QSslSocket* self);
void QSslSocket_SetReadBufferSize(QSslSocket* self, long long size);
long long QSslSocket_EncryptedBytesAvailable(const QSslSocket* self);
long long QSslSocket_EncryptedBytesToWrite(const QSslSocket* self);
QSslConfiguration* QSslSocket_SslConfiguration(const QSslSocket* self);
void QSslSocket_SetSslConfiguration(QSslSocket* self, QSslConfiguration* config);
void QSslSocket_SetLocalCertificateChain(QSslSocket* self, struct miqt_array /* of QSslCertificate* */ localChain);
struct miqt_array QSslSocket_LocalCertificateChain(const QSslSocket* self);
void QSslSocket_SetLocalCertificate(QSslSocket* self, QSslCertificate* certificate);
void QSslSocket_SetLocalCertificateWithFileName(QSslSocket* self, struct miqt_string fileName);
QSslCertificate* QSslSocket_LocalCertificate(const QSslSocket* self);
QSslCertificate* QSslSocket_PeerCertificate(const QSslSocket* self);
struct miqt_array QSslSocket_PeerCertificateChain(const QSslSocket* self);
QSslCipher* QSslSocket_SessionCipher(const QSslSocket* self);
int QSslSocket_SessionProtocol(const QSslSocket* self);
struct miqt_array QSslSocket_OcspResponses(const QSslSocket* self);
void QSslSocket_SetPrivateKey(QSslSocket* self, QSslKey* key);
void QSslSocket_SetPrivateKeyWithFileName(QSslSocket* self, struct miqt_string fileName);
QSslKey* QSslSocket_PrivateKey(const QSslSocket* self);
bool QSslSocket_WaitForConnected(QSslSocket* self);
bool QSslSocket_WaitForEncrypted(QSslSocket* self);
bool QSslSocket_WaitForReadyRead(QSslSocket* self);
bool QSslSocket_WaitForBytesWritten(QSslSocket* self);
bool QSslSocket_WaitForDisconnected(QSslSocket* self);
struct miqt_array QSslSocket_SslHandshakeErrors(const QSslSocket* self);
bool QSslSocket_SupportsSsl();
long QSslSocket_SslLibraryVersionNumber();
struct miqt_string QSslSocket_SslLibraryVersionString();
long QSslSocket_SslLibraryBuildVersionNumber();
struct miqt_string QSslSocket_SslLibraryBuildVersionString();
struct miqt_array QSslSocket_AvailableBackends();
struct miqt_string QSslSocket_ActiveBackend();
bool QSslSocket_SetActiveBackend(struct miqt_string backendName);
struct miqt_array QSslSocket_SupportedProtocols();
bool QSslSocket_IsProtocolSupported(int protocol);
struct miqt_array QSslSocket_ImplementedClasses();
bool QSslSocket_IsClassImplemented(int cl);
struct miqt_array QSslSocket_SupportedFeatures();
bool QSslSocket_IsFeatureSupported(int feat);
void QSslSocket_IgnoreSslErrors(QSslSocket* self, struct miqt_array /* of QSslError* */ errors);
void QSslSocket_ContinueInterruptedHandshake(QSslSocket* self);
void QSslSocket_StartClientEncryption(QSslSocket* self);
void QSslSocket_StartServerEncryption(QSslSocket* self);
void QSslSocket_IgnoreSslErrors2(QSslSocket* self);
void QSslSocket_Encrypted(QSslSocket* self);
void QSslSocket_connect_Encrypted(QSslSocket* self, intptr_t slot);
void QSslSocket_PeerVerifyError(QSslSocket* self, QSslError* error);
void QSslSocket_connect_PeerVerifyError(QSslSocket* self, intptr_t slot);
void QSslSocket_SslErrors(QSslSocket* self, struct miqt_array /* of QSslError* */ errors);
void QSslSocket_connect_SslErrors(QSslSocket* self, intptr_t slot);
void QSslSocket_ModeChanged(QSslSocket* self, int newMode);
void QSslSocket_connect_ModeChanged(QSslSocket* self, intptr_t slot);
void QSslSocket_EncryptedBytesWritten(QSslSocket* self, long long totalBytes);
void QSslSocket_connect_EncryptedBytesWritten(QSslSocket* self, intptr_t slot);
void QSslSocket_PreSharedKeyAuthenticationRequired(QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator);
void QSslSocket_connect_PreSharedKeyAuthenticationRequired(QSslSocket* self, intptr_t slot);
void QSslSocket_NewSessionTicketReceived(QSslSocket* self);
void QSslSocket_connect_NewSessionTicketReceived(QSslSocket* self, intptr_t slot);
void QSslSocket_AlertSent(QSslSocket* self, int level, int typeVal, struct miqt_string description);
void QSslSocket_connect_AlertSent(QSslSocket* self, intptr_t slot);
void QSslSocket_AlertReceived(QSslSocket* self, int level, int typeVal, struct miqt_string description);
void QSslSocket_connect_AlertReceived(QSslSocket* self, intptr_t slot);
void QSslSocket_HandshakeInterruptedOnError(QSslSocket* self, QSslError* error);
void QSslSocket_connect_HandshakeInterruptedOnError(QSslSocket* self, intptr_t slot);
struct miqt_string QSslSocket_Tr2(const char* s, const char* c);
struct miqt_string QSslSocket_Tr3(const char* s, const char* c, int n);
void QSslSocket_ConnectToHostEncrypted3(QSslSocket* self, struct miqt_string hostName, uint16_t port, int mode);
void QSslSocket_ConnectToHostEncrypted4(QSslSocket* self, struct miqt_string hostName, uint16_t port, int mode, int protocol);
void QSslSocket_ConnectToHostEncrypted42(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName, int mode);
void QSslSocket_ConnectToHostEncrypted5(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName, int mode, int protocol);
bool QSslSocket_SetSocketDescriptor2(QSslSocket* self, intptr_t socketDescriptor, int state);
bool QSslSocket_SetSocketDescriptor3(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QSslSocket_ConnectToHost3(QSslSocket* self, struct miqt_string hostName, uint16_t port, int openMode);
void QSslSocket_ConnectToHost4(QSslSocket* self, struct miqt_string hostName, uint16_t port, int openMode, int protocol);
void QSslSocket_SetLocalCertificate2(QSslSocket* self, struct miqt_string fileName, int format);
void QSslSocket_SetPrivateKey2(QSslSocket* self, struct miqt_string fileName, int algorithm);
void QSslSocket_SetPrivateKey3(QSslSocket* self, struct miqt_string fileName, int algorithm, int format);
void QSslSocket_SetPrivateKey4(QSslSocket* self, struct miqt_string fileName, int algorithm, int format, struct miqt_string passPhrase);
bool QSslSocket_WaitForConnected1(QSslSocket* self, int msecs);
bool QSslSocket_WaitForEncrypted1(QSslSocket* self, int msecs);
bool QSslSocket_WaitForReadyRead1(QSslSocket* self, int msecs);
bool QSslSocket_WaitForBytesWritten1(QSslSocket* self, int msecs);
bool QSslSocket_WaitForDisconnected1(QSslSocket* self, int msecs);
struct miqt_array QSslSocket_SupportedProtocols1(struct miqt_string backendName);
bool QSslSocket_IsProtocolSupported2(int protocol, struct miqt_string backendName);
struct miqt_array QSslSocket_ImplementedClasses1(struct miqt_string backendName);
bool QSslSocket_IsClassImplemented2(int cl, struct miqt_string backendName);
struct miqt_array QSslSocket_SupportedFeatures1(struct miqt_string backendName);
bool QSslSocket_IsFeatureSupported2(int feat, struct miqt_string backendName);
void QSslSocket_Delete(QSslSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
