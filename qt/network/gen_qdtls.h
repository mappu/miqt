#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QDTLS_H
#define MIQT_QT_NETWORK_GEN_QDTLS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QDtls;
class QDtlsClientVerifier;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QDtlsClientVerifier__GeneratorParameters)
typedef QDtlsClientVerifier::GeneratorParameters QDtlsClientVerifier__GeneratorParameters;
#else
class QDtlsClientVerifier__GeneratorParameters;
#endif
class QEvent;
class QHostAddress;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSslCipher;
class QSslConfiguration;
class QSslError;
class QSslPreSharedKeyAuthenticator;
class QTimerEvent;
class QUdpSocket;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDtls QDtls;
typedef struct QDtlsClientVerifier QDtlsClientVerifier;
typedef struct QDtlsClientVerifier__GeneratorParameters QDtlsClientVerifier__GeneratorParameters;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSslCipher QSslCipher;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUdpSocket QUdpSocket;
#endif

QDtlsClientVerifier* QDtlsClientVerifier_new();
QDtlsClientVerifier* QDtlsClientVerifier_new2(QObject* parent);
void QDtlsClientVerifier_virtbase(QDtlsClientVerifier* src, QObject** outptr_QObject);
QMetaObject* QDtlsClientVerifier_MetaObject(const QDtlsClientVerifier* self);
void* QDtlsClientVerifier_Metacast(QDtlsClientVerifier* self, const char* param1);
struct miqt_string QDtlsClientVerifier_Tr(const char* s);
struct miqt_string QDtlsClientVerifier_TrUtf8(const char* s);
bool QDtlsClientVerifier_SetCookieGeneratorParameters(QDtlsClientVerifier* self, QDtlsClientVerifier__GeneratorParameters* params);
QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier_CookieGeneratorParameters(const QDtlsClientVerifier* self);
bool QDtlsClientVerifier_VerifyClient(QDtlsClientVerifier* self, QUdpSocket* socket, struct miqt_string dgram, QHostAddress* address, uint16_t port);
struct miqt_string QDtlsClientVerifier_VerifiedHello(const QDtlsClientVerifier* self);
unsigned char QDtlsClientVerifier_DtlsError(const QDtlsClientVerifier* self);
struct miqt_string QDtlsClientVerifier_DtlsErrorString(const QDtlsClientVerifier* self);
struct miqt_string QDtlsClientVerifier_Tr2(const char* s, const char* c);
struct miqt_string QDtlsClientVerifier_Tr3(const char* s, const char* c, int n);
struct miqt_string QDtlsClientVerifier_TrUtf82(const char* s, const char* c);
struct miqt_string QDtlsClientVerifier_TrUtf83(const char* s, const char* c, int n);
void QDtlsClientVerifier_override_virtual_Event(void* self, intptr_t slot);
bool QDtlsClientVerifier_virtualbase_Event(void* self, QEvent* event);
void QDtlsClientVerifier_override_virtual_EventFilter(void* self, intptr_t slot);
bool QDtlsClientVerifier_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QDtlsClientVerifier_override_virtual_TimerEvent(void* self, intptr_t slot);
void QDtlsClientVerifier_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QDtlsClientVerifier_override_virtual_ChildEvent(void* self, intptr_t slot);
void QDtlsClientVerifier_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QDtlsClientVerifier_override_virtual_CustomEvent(void* self, intptr_t slot);
void QDtlsClientVerifier_virtualbase_CustomEvent(void* self, QEvent* event);
void QDtlsClientVerifier_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QDtlsClientVerifier_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QDtlsClientVerifier_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QDtlsClientVerifier_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QDtlsClientVerifier_Delete(QDtlsClientVerifier* self, bool isSubclass);

QDtls* QDtls_new(int mode);
QDtls* QDtls_new2(int mode, QObject* parent);
void QDtls_virtbase(QDtls* src, QObject** outptr_QObject);
QMetaObject* QDtls_MetaObject(const QDtls* self);
void* QDtls_Metacast(QDtls* self, const char* param1);
struct miqt_string QDtls_Tr(const char* s);
struct miqt_string QDtls_TrUtf8(const char* s);
bool QDtls_SetPeer(QDtls* self, QHostAddress* address, uint16_t port);
bool QDtls_SetPeerVerificationName(QDtls* self, struct miqt_string name);
QHostAddress* QDtls_PeerAddress(const QDtls* self);
uint16_t QDtls_PeerPort(const QDtls* self);
struct miqt_string QDtls_PeerVerificationName(const QDtls* self);
int QDtls_SslMode(const QDtls* self);
void QDtls_SetMtuHint(QDtls* self, uint16_t mtuHint);
uint16_t QDtls_MtuHint(const QDtls* self);
bool QDtls_SetCookieGeneratorParameters(QDtls* self, QDtlsClientVerifier__GeneratorParameters* params);
QDtlsClientVerifier__GeneratorParameters* QDtls_CookieGeneratorParameters(const QDtls* self);
bool QDtls_SetDtlsConfiguration(QDtls* self, QSslConfiguration* configuration);
QSslConfiguration* QDtls_DtlsConfiguration(const QDtls* self);
int QDtls_HandshakeState(const QDtls* self);
bool QDtls_DoHandshake(QDtls* self, QUdpSocket* socket);
bool QDtls_HandleTimeout(QDtls* self, QUdpSocket* socket);
bool QDtls_ResumeHandshake(QDtls* self, QUdpSocket* socket);
bool QDtls_AbortHandshake(QDtls* self, QUdpSocket* socket);
bool QDtls_Shutdown(QDtls* self, QUdpSocket* socket);
bool QDtls_IsConnectionEncrypted(const QDtls* self);
QSslCipher* QDtls_SessionCipher(const QDtls* self);
int QDtls_SessionProtocol(const QDtls* self);
long long QDtls_WriteDatagramEncrypted(QDtls* self, QUdpSocket* socket, struct miqt_string dgram);
struct miqt_string QDtls_DecryptDatagram(QDtls* self, QUdpSocket* socket, struct miqt_string dgram);
unsigned char QDtls_DtlsError(const QDtls* self);
struct miqt_string QDtls_DtlsErrorString(const QDtls* self);
struct miqt_array /* of QSslError* */  QDtls_PeerVerificationErrors(const QDtls* self);
void QDtls_IgnoreVerificationErrors(QDtls* self, struct miqt_array /* of QSslError* */  errorsToIgnore);
void QDtls_PskRequired(QDtls* self, QSslPreSharedKeyAuthenticator* authenticator);
void QDtls_connect_PskRequired(QDtls* self, intptr_t slot);
void QDtls_HandshakeTimeout(QDtls* self);
void QDtls_connect_HandshakeTimeout(QDtls* self, intptr_t slot);
struct miqt_string QDtls_Tr2(const char* s, const char* c);
struct miqt_string QDtls_Tr3(const char* s, const char* c, int n);
struct miqt_string QDtls_TrUtf82(const char* s, const char* c);
struct miqt_string QDtls_TrUtf83(const char* s, const char* c, int n);
bool QDtls_SetPeer3(QDtls* self, QHostAddress* address, uint16_t port, struct miqt_string verificationName);
bool QDtls_DoHandshake2(QDtls* self, QUdpSocket* socket, struct miqt_string dgram);
void QDtls_override_virtual_Event(void* self, intptr_t slot);
bool QDtls_virtualbase_Event(void* self, QEvent* event);
void QDtls_override_virtual_EventFilter(void* self, intptr_t slot);
bool QDtls_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QDtls_override_virtual_TimerEvent(void* self, intptr_t slot);
void QDtls_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QDtls_override_virtual_ChildEvent(void* self, intptr_t slot);
void QDtls_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QDtls_override_virtual_CustomEvent(void* self, intptr_t slot);
void QDtls_virtualbase_CustomEvent(void* self, QEvent* event);
void QDtls_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QDtls_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QDtls_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QDtls_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QDtls_Delete(QDtls* self, bool isSubclass);

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new();
QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new2(int a, struct miqt_string s);
QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new3(QDtlsClientVerifier__GeneratorParameters* param1);
void QDtlsClientVerifier__GeneratorParameters_OperatorAssign(QDtlsClientVerifier__GeneratorParameters* self, QDtlsClientVerifier__GeneratorParameters* param1);
void QDtlsClientVerifier__GeneratorParameters_Delete(QDtlsClientVerifier__GeneratorParameters* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
