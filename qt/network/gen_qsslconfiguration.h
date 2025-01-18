#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QSSLCONFIGURATION_H
#define MIQT_QT_NETWORK_GEN_QSSLCONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSslCertificate;
class QSslCipher;
class QSslConfiguration;
class QSslDiffieHellmanParameters;
class QSslEllipticCurve;
class QSslKey;
class QVariant;
#else
typedef struct QSslCertificate QSslCertificate;
typedef struct QSslCipher QSslCipher;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslDiffieHellmanParameters QSslDiffieHellmanParameters;
typedef struct QSslEllipticCurve QSslEllipticCurve;
typedef struct QSslKey QSslKey;
typedef struct QVariant QVariant;
#endif

QSslConfiguration* QSslConfiguration_new();
QSslConfiguration* QSslConfiguration_new2(QSslConfiguration* other);
void QSslConfiguration_OperatorAssign(QSslConfiguration* self, QSslConfiguration* other);
void QSslConfiguration_Swap(QSslConfiguration* self, QSslConfiguration* other);
bool QSslConfiguration_OperatorEqual(const QSslConfiguration* self, QSslConfiguration* other);
bool QSslConfiguration_OperatorNotEqual(const QSslConfiguration* self, QSslConfiguration* other);
bool QSslConfiguration_IsNull(const QSslConfiguration* self);
int QSslConfiguration_Protocol(const QSslConfiguration* self);
void QSslConfiguration_SetProtocol(QSslConfiguration* self, int protocol);
int QSslConfiguration_PeerVerifyMode(const QSslConfiguration* self);
void QSslConfiguration_SetPeerVerifyMode(QSslConfiguration* self, int mode);
int QSslConfiguration_PeerVerifyDepth(const QSslConfiguration* self);
void QSslConfiguration_SetPeerVerifyDepth(QSslConfiguration* self, int depth);
struct miqt_array /* of QSslCertificate* */  QSslConfiguration_LocalCertificateChain(const QSslConfiguration* self);
void QSslConfiguration_SetLocalCertificateChain(QSslConfiguration* self, struct miqt_array /* of QSslCertificate* */  localChain);
QSslCertificate* QSslConfiguration_LocalCertificate(const QSslConfiguration* self);
void QSslConfiguration_SetLocalCertificate(QSslConfiguration* self, QSslCertificate* certificate);
QSslCertificate* QSslConfiguration_PeerCertificate(const QSslConfiguration* self);
struct miqt_array /* of QSslCertificate* */  QSslConfiguration_PeerCertificateChain(const QSslConfiguration* self);
QSslCipher* QSslConfiguration_SessionCipher(const QSslConfiguration* self);
int QSslConfiguration_SessionProtocol(const QSslConfiguration* self);
QSslKey* QSslConfiguration_PrivateKey(const QSslConfiguration* self);
void QSslConfiguration_SetPrivateKey(QSslConfiguration* self, QSslKey* key);
struct miqt_array /* of QSslCipher* */  QSslConfiguration_Ciphers(const QSslConfiguration* self);
void QSslConfiguration_SetCiphers(QSslConfiguration* self, struct miqt_array /* of QSslCipher* */  ciphers);
struct miqt_array /* of QSslCipher* */  QSslConfiguration_SupportedCiphers();
struct miqt_array /* of QSslCertificate* */  QSslConfiguration_CaCertificates(const QSslConfiguration* self);
void QSslConfiguration_SetCaCertificates(QSslConfiguration* self, struct miqt_array /* of QSslCertificate* */  certificates);
bool QSslConfiguration_AddCaCertificates(QSslConfiguration* self, struct miqt_string path);
void QSslConfiguration_AddCaCertificate(QSslConfiguration* self, QSslCertificate* certificate);
void QSslConfiguration_AddCaCertificatesWithCertificates(QSslConfiguration* self, struct miqt_array /* of QSslCertificate* */  certificates);
struct miqt_array /* of QSslCertificate* */  QSslConfiguration_SystemCaCertificates();
void QSslConfiguration_SetSslOption(QSslConfiguration* self, int option, bool on);
bool QSslConfiguration_TestSslOption(const QSslConfiguration* self, int option);
struct miqt_string QSslConfiguration_SessionTicket(const QSslConfiguration* self);
void QSslConfiguration_SetSessionTicket(QSslConfiguration* self, struct miqt_string sessionTicket);
int QSslConfiguration_SessionTicketLifeTimeHint(const QSslConfiguration* self);
QSslKey* QSslConfiguration_EphemeralServerKey(const QSslConfiguration* self);
struct miqt_array /* of QSslEllipticCurve* */  QSslConfiguration_EllipticCurves(const QSslConfiguration* self);
void QSslConfiguration_SetEllipticCurves(QSslConfiguration* self, struct miqt_array /* of QSslEllipticCurve* */  curves);
struct miqt_array /* of QSslEllipticCurve* */  QSslConfiguration_SupportedEllipticCurves();
struct miqt_string QSslConfiguration_PreSharedKeyIdentityHint(const QSslConfiguration* self);
void QSslConfiguration_SetPreSharedKeyIdentityHint(QSslConfiguration* self, struct miqt_string hint);
QSslDiffieHellmanParameters* QSslConfiguration_DiffieHellmanParameters(const QSslConfiguration* self);
void QSslConfiguration_SetDiffieHellmanParameters(QSslConfiguration* self, QSslDiffieHellmanParameters* dhparams);
void QSslConfiguration_SetBackendConfigurationOption(QSslConfiguration* self, struct miqt_string name, QVariant* value);
void QSslConfiguration_SetBackendConfiguration(QSslConfiguration* self);
QSslConfiguration* QSslConfiguration_DefaultConfiguration();
void QSslConfiguration_SetDefaultConfiguration(QSslConfiguration* configuration);
bool QSslConfiguration_DtlsCookieVerificationEnabled(const QSslConfiguration* self);
void QSslConfiguration_SetDtlsCookieVerificationEnabled(QSslConfiguration* self, bool enable);
QSslConfiguration* QSslConfiguration_DefaultDtlsConfiguration();
void QSslConfiguration_SetDefaultDtlsConfiguration(QSslConfiguration* configuration);
void QSslConfiguration_SetOcspStaplingEnabled(QSslConfiguration* self, bool enable);
bool QSslConfiguration_OcspStaplingEnabled(const QSslConfiguration* self);
void QSslConfiguration_SetAllowedNextProtocols(QSslConfiguration* self, struct miqt_array /* of struct miqt_string */  protocols);
struct miqt_array /* of struct miqt_string */  QSslConfiguration_AllowedNextProtocols(const QSslConfiguration* self);
struct miqt_string QSslConfiguration_NextNegotiatedProtocol(const QSslConfiguration* self);
int QSslConfiguration_NextProtocolNegotiationStatus(const QSslConfiguration* self);
bool QSslConfiguration_AddCaCertificates2(QSslConfiguration* self, struct miqt_string path, int format);
bool QSslConfiguration_AddCaCertificates3(QSslConfiguration* self, struct miqt_string path, int format, int syntax);
void QSslConfiguration_Delete(QSslConfiguration* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
