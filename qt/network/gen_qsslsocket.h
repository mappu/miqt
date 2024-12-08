#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QSSLSOCKET_H
#define MIQT_QT_NETWORK_GEN_QSSLSOCKET_H

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
class QTcpSocket;
class QVariant;
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QIODevice QIODevice;
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
typedef struct QTcpSocket QTcpSocket;
typedef struct QVariant QVariant;
#endif

QSslSocket* QSslSocket_new();
QSslSocket* QSslSocket_new2(QObject* parent);
void QSslSocket_virtbase(QSslSocket* src, QTcpSocket** outptr_QTcpSocket);
QMetaObject* QSslSocket_MetaObject(const QSslSocket* self);
void* QSslSocket_Metacast(QSslSocket* self, const char* param1);
struct miqt_string QSslSocket_Tr(const char* s);
struct miqt_string QSslSocket_TrUtf8(const char* s);
void QSslSocket_Resume(QSslSocket* self);
void QSslSocket_ConnectToHostEncrypted(QSslSocket* self, struct miqt_string hostName, uint16_t port);
void QSslSocket_ConnectToHostEncrypted2(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName);
bool QSslSocket_SetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QSslSocket_ConnectToHost(QSslSocket* self, struct miqt_string hostName, uint16_t port, int openMode, int protocol);
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
bool QSslSocket_Flush(QSslSocket* self);
void QSslSocket_Abort(QSslSocket* self);
void QSslSocket_SetReadBufferSize(QSslSocket* self, long long size);
long long QSslSocket_EncryptedBytesAvailable(const QSslSocket* self);
long long QSslSocket_EncryptedBytesToWrite(const QSslSocket* self);
QSslConfiguration* QSslSocket_SslConfiguration(const QSslSocket* self);
void QSslSocket_SetSslConfiguration(QSslSocket* self, QSslConfiguration* config);
void QSslSocket_SetLocalCertificateChain(QSslSocket* self, struct miqt_array /* of QSslCertificate* */  localChain);
struct miqt_array /* of QSslCertificate* */  QSslSocket_LocalCertificateChain(const QSslSocket* self);
void QSslSocket_SetLocalCertificate(QSslSocket* self, QSslCertificate* certificate);
void QSslSocket_SetLocalCertificateWithFileName(QSslSocket* self, struct miqt_string fileName);
QSslCertificate* QSslSocket_LocalCertificate(const QSslSocket* self);
QSslCertificate* QSslSocket_PeerCertificate(const QSslSocket* self);
struct miqt_array /* of QSslCertificate* */  QSslSocket_PeerCertificateChain(const QSslSocket* self);
QSslCipher* QSslSocket_SessionCipher(const QSslSocket* self);
int QSslSocket_SessionProtocol(const QSslSocket* self);
struct miqt_array /* of QOcspResponse* */  QSslSocket_OcspResponses(const QSslSocket* self);
void QSslSocket_SetPrivateKey(QSslSocket* self, QSslKey* key);
void QSslSocket_SetPrivateKeyWithFileName(QSslSocket* self, struct miqt_string fileName);
QSslKey* QSslSocket_PrivateKey(const QSslSocket* self);
struct miqt_array /* of QSslCipher* */  QSslSocket_Ciphers(const QSslSocket* self);
void QSslSocket_SetCiphers(QSslSocket* self, struct miqt_array /* of QSslCipher* */  ciphers);
void QSslSocket_SetCiphersWithCiphers(QSslSocket* self, struct miqt_string ciphers);
void QSslSocket_SetDefaultCiphers(struct miqt_array /* of QSslCipher* */  ciphers);
struct miqt_array /* of QSslCipher* */  QSslSocket_DefaultCiphers();
struct miqt_array /* of QSslCipher* */  QSslSocket_SupportedCiphers();
bool QSslSocket_AddCaCertificates(QSslSocket* self, struct miqt_string path);
void QSslSocket_AddCaCertificate(QSslSocket* self, QSslCertificate* certificate);
void QSslSocket_AddCaCertificatesWithCertificates(QSslSocket* self, struct miqt_array /* of QSslCertificate* */  certificates);
void QSslSocket_SetCaCertificates(QSslSocket* self, struct miqt_array /* of QSslCertificate* */  certificates);
struct miqt_array /* of QSslCertificate* */  QSslSocket_CaCertificates(const QSslSocket* self);
bool QSslSocket_AddDefaultCaCertificates(struct miqt_string path);
void QSslSocket_AddDefaultCaCertificate(QSslCertificate* certificate);
void QSslSocket_AddDefaultCaCertificatesWithCertificates(struct miqt_array /* of QSslCertificate* */  certificates);
void QSslSocket_SetDefaultCaCertificates(struct miqt_array /* of QSslCertificate* */  certificates);
struct miqt_array /* of QSslCertificate* */  QSslSocket_DefaultCaCertificates();
struct miqt_array /* of QSslCertificate* */  QSslSocket_SystemCaCertificates();
bool QSslSocket_WaitForConnected(QSslSocket* self, int msecs);
bool QSslSocket_WaitForEncrypted(QSslSocket* self);
bool QSslSocket_WaitForReadyRead(QSslSocket* self, int msecs);
bool QSslSocket_WaitForBytesWritten(QSslSocket* self, int msecs);
bool QSslSocket_WaitForDisconnected(QSslSocket* self, int msecs);
struct miqt_array /* of QSslError* */  QSslSocket_SslErrors(const QSslSocket* self);
struct miqt_array /* of QSslError* */  QSslSocket_SslHandshakeErrors(const QSslSocket* self);
bool QSslSocket_SupportsSsl();
long QSslSocket_SslLibraryVersionNumber();
struct miqt_string QSslSocket_SslLibraryVersionString();
long QSslSocket_SslLibraryBuildVersionNumber();
struct miqt_string QSslSocket_SslLibraryBuildVersionString();
void QSslSocket_IgnoreSslErrors(QSslSocket* self, struct miqt_array /* of QSslError* */  errors);
void QSslSocket_StartClientEncryption(QSslSocket* self);
void QSslSocket_StartServerEncryption(QSslSocket* self);
void QSslSocket_IgnoreSslErrors2(QSslSocket* self);
void QSslSocket_Encrypted(QSslSocket* self);
void QSslSocket_connect_Encrypted(QSslSocket* self, intptr_t slot);
void QSslSocket_PeerVerifyError(QSslSocket* self, QSslError* error);
void QSslSocket_connect_PeerVerifyError(QSslSocket* self, intptr_t slot);
void QSslSocket_SslErrorsWithErrors(QSslSocket* self, struct miqt_array /* of QSslError* */  errors);
void QSslSocket_connect_SslErrorsWithErrors(QSslSocket* self, intptr_t slot);
void QSslSocket_ModeChanged(QSslSocket* self, int newMode);
void QSslSocket_connect_ModeChanged(QSslSocket* self, intptr_t slot);
void QSslSocket_EncryptedBytesWritten(QSslSocket* self, long long totalBytes);
void QSslSocket_connect_EncryptedBytesWritten(QSslSocket* self, intptr_t slot);
void QSslSocket_PreSharedKeyAuthenticationRequired(QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator);
void QSslSocket_connect_PreSharedKeyAuthenticationRequired(QSslSocket* self, intptr_t slot);
void QSslSocket_NewSessionTicketReceived(QSslSocket* self);
void QSslSocket_connect_NewSessionTicketReceived(QSslSocket* self, intptr_t slot);
long long QSslSocket_ReadData(QSslSocket* self, char* data, long long maxlen);
long long QSslSocket_WriteData(QSslSocket* self, const char* data, long long lenVal);
struct miqt_string QSslSocket_Tr2(const char* s, const char* c);
struct miqt_string QSslSocket_Tr3(const char* s, const char* c, int n);
struct miqt_string QSslSocket_TrUtf82(const char* s, const char* c);
struct miqt_string QSslSocket_TrUtf83(const char* s, const char* c, int n);
void QSslSocket_ConnectToHostEncrypted3(QSslSocket* self, struct miqt_string hostName, uint16_t port, int mode);
void QSslSocket_ConnectToHostEncrypted4(QSslSocket* self, struct miqt_string hostName, uint16_t port, int mode, int protocol);
void QSslSocket_ConnectToHostEncrypted42(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName, int mode);
void QSslSocket_ConnectToHostEncrypted5(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName, int mode, int protocol);
void QSslSocket_SetLocalCertificate2(QSslSocket* self, struct miqt_string fileName, int format);
void QSslSocket_SetPrivateKey2(QSslSocket* self, struct miqt_string fileName, int algorithm);
void QSslSocket_SetPrivateKey3(QSslSocket* self, struct miqt_string fileName, int algorithm, int format);
void QSslSocket_SetPrivateKey4(QSslSocket* self, struct miqt_string fileName, int algorithm, int format, struct miqt_string passPhrase);
bool QSslSocket_AddCaCertificates2(QSslSocket* self, struct miqt_string path, int format);
bool QSslSocket_AddCaCertificates3(QSslSocket* self, struct miqt_string path, int format, int syntax);
bool QSslSocket_AddDefaultCaCertificates2(struct miqt_string path, int format);
bool QSslSocket_AddDefaultCaCertificates3(struct miqt_string path, int format, int syntax);
bool QSslSocket_WaitForEncrypted1(QSslSocket* self, int msecs);
void QSslSocket_override_virtual_Resume(void* self, intptr_t slot);
void QSslSocket_virtualbase_Resume(void* self);
void QSslSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot);
bool QSslSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode);
void QSslSocket_override_virtual_ConnectToHost(void* self, intptr_t slot);
void QSslSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int openMode, int protocol);
void QSslSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot);
void QSslSocket_virtualbase_DisconnectFromHost(void* self);
void QSslSocket_override_virtual_SetSocketOption(void* self, intptr_t slot);
void QSslSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value);
void QSslSocket_override_virtual_SocketOption(void* self, intptr_t slot);
QVariant* QSslSocket_virtualbase_SocketOption(void* self, int option);
void QSslSocket_override_virtual_BytesAvailable(void* self, intptr_t slot);
long long QSslSocket_virtualbase_BytesAvailable(const void* self);
void QSslSocket_override_virtual_BytesToWrite(void* self, intptr_t slot);
long long QSslSocket_virtualbase_BytesToWrite(const void* self);
void QSslSocket_override_virtual_CanReadLine(void* self, intptr_t slot);
bool QSslSocket_virtualbase_CanReadLine(const void* self);
void QSslSocket_override_virtual_Close(void* self, intptr_t slot);
void QSslSocket_virtualbase_Close(void* self);
void QSslSocket_override_virtual_AtEnd(void* self, intptr_t slot);
bool QSslSocket_virtualbase_AtEnd(const void* self);
void QSslSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot);
void QSslSocket_virtualbase_SetReadBufferSize(void* self, long long size);
void QSslSocket_override_virtual_WaitForConnected(void* self, intptr_t slot);
bool QSslSocket_virtualbase_WaitForConnected(void* self, int msecs);
void QSslSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot);
bool QSslSocket_virtualbase_WaitForReadyRead(void* self, int msecs);
void QSslSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot);
bool QSslSocket_virtualbase_WaitForBytesWritten(void* self, int msecs);
void QSslSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot);
bool QSslSocket_virtualbase_WaitForDisconnected(void* self, int msecs);
void QSslSocket_override_virtual_ReadData(void* self, intptr_t slot);
long long QSslSocket_virtualbase_ReadData(void* self, char* data, long long maxlen);
void QSslSocket_override_virtual_WriteData(void* self, intptr_t slot);
long long QSslSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal);
void QSslSocket_Delete(QSslSocket* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
