#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QSSLCONFIGURATION_H
#define MIQT_QT6_NETWORK_GEN_QSSLCONFIGURATION_H

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
void QSslConfiguration_operatorAssign(QSslConfiguration* self, QSslConfiguration* other);
void QSslConfiguration_swap(QSslConfiguration* self, QSslConfiguration* other);
bool QSslConfiguration_operatorEqual(const QSslConfiguration* self, QSslConfiguration* other);
bool QSslConfiguration_operatorNotEqual(const QSslConfiguration* self, QSslConfiguration* other);
bool QSslConfiguration_isNull(const QSslConfiguration* self);
int QSslConfiguration_protocol(const QSslConfiguration* self);
void QSslConfiguration_setProtocol(QSslConfiguration* self, int protocol);
int QSslConfiguration_peerVerifyMode(const QSslConfiguration* self);
void QSslConfiguration_setPeerVerifyMode(QSslConfiguration* self, int mode);
int QSslConfiguration_peerVerifyDepth(const QSslConfiguration* self);
void QSslConfiguration_setPeerVerifyDepth(QSslConfiguration* self, int depth);
struct miqt_array /* of QSslCertificate* */  QSslConfiguration_localCertificateChain(const QSslConfiguration* self);
void QSslConfiguration_setLocalCertificateChain(QSslConfiguration* self, struct miqt_array /* of QSslCertificate* */  localChain);
QSslCertificate* QSslConfiguration_localCertificate(const QSslConfiguration* self);
void QSslConfiguration_setLocalCertificate(QSslConfiguration* self, QSslCertificate* certificate);
QSslCertificate* QSslConfiguration_peerCertificate(const QSslConfiguration* self);
struct miqt_array /* of QSslCertificate* */  QSslConfiguration_peerCertificateChain(const QSslConfiguration* self);
QSslCipher* QSslConfiguration_sessionCipher(const QSslConfiguration* self);
int QSslConfiguration_sessionProtocol(const QSslConfiguration* self);
QSslKey* QSslConfiguration_privateKey(const QSslConfiguration* self);
void QSslConfiguration_setPrivateKey(QSslConfiguration* self, QSslKey* key);
struct miqt_array /* of QSslCipher* */  QSslConfiguration_ciphers(const QSslConfiguration* self);
void QSslConfiguration_setCiphers(QSslConfiguration* self, struct miqt_array /* of QSslCipher* */  ciphers);
void QSslConfiguration_setCiphersWithCiphers(QSslConfiguration* self, struct miqt_string ciphers);
struct miqt_array /* of QSslCipher* */  QSslConfiguration_supportedCiphers();
struct miqt_array /* of QSslCertificate* */  QSslConfiguration_caCertificates(const QSslConfiguration* self);
void QSslConfiguration_setCaCertificates(QSslConfiguration* self, struct miqt_array /* of QSslCertificate* */  certificates);
bool QSslConfiguration_addCaCertificates(QSslConfiguration* self, struct miqt_string path);
void QSslConfiguration_addCaCertificate(QSslConfiguration* self, QSslCertificate* certificate);
void QSslConfiguration_addCaCertificatesWithCertificates(QSslConfiguration* self, struct miqt_array /* of QSslCertificate* */  certificates);
struct miqt_array /* of QSslCertificate* */  QSslConfiguration_systemCaCertificates();
void QSslConfiguration_setSslOption(QSslConfiguration* self, int option, bool on);
bool QSslConfiguration_testSslOption(const QSslConfiguration* self, int option);
struct miqt_string QSslConfiguration_sessionTicket(const QSslConfiguration* self);
void QSslConfiguration_setSessionTicket(QSslConfiguration* self, struct miqt_string sessionTicket);
int QSslConfiguration_sessionTicketLifeTimeHint(const QSslConfiguration* self);
QSslKey* QSslConfiguration_ephemeralServerKey(const QSslConfiguration* self);
struct miqt_array /* of QSslEllipticCurve* */  QSslConfiguration_ellipticCurves(const QSslConfiguration* self);
void QSslConfiguration_setEllipticCurves(QSslConfiguration* self, struct miqt_array /* of QSslEllipticCurve* */  curves);
struct miqt_array /* of QSslEllipticCurve* */  QSslConfiguration_supportedEllipticCurves();
struct miqt_string QSslConfiguration_preSharedKeyIdentityHint(const QSslConfiguration* self);
void QSslConfiguration_setPreSharedKeyIdentityHint(QSslConfiguration* self, struct miqt_string hint);
QSslDiffieHellmanParameters* QSslConfiguration_diffieHellmanParameters(const QSslConfiguration* self);
void QSslConfiguration_setDiffieHellmanParameters(QSslConfiguration* self, QSslDiffieHellmanParameters* dhparams);
void QSslConfiguration_setBackendConfigurationOption(QSslConfiguration* self, struct miqt_string name, QVariant* value);
void QSslConfiguration_setBackendConfiguration(QSslConfiguration* self);
QSslConfiguration* QSslConfiguration_defaultConfiguration();
void QSslConfiguration_setDefaultConfiguration(QSslConfiguration* configuration);
bool QSslConfiguration_dtlsCookieVerificationEnabled(const QSslConfiguration* self);
void QSslConfiguration_setDtlsCookieVerificationEnabled(QSslConfiguration* self, bool enable);
QSslConfiguration* QSslConfiguration_defaultDtlsConfiguration();
void QSslConfiguration_setDefaultDtlsConfiguration(QSslConfiguration* configuration);
bool QSslConfiguration_handshakeMustInterruptOnError(const QSslConfiguration* self);
void QSslConfiguration_setHandshakeMustInterruptOnError(QSslConfiguration* self, bool interrupt);
bool QSslConfiguration_missingCertificateIsFatal(const QSslConfiguration* self);
void QSslConfiguration_setMissingCertificateIsFatal(QSslConfiguration* self, bool cannotRecover);
void QSslConfiguration_setOcspStaplingEnabled(QSslConfiguration* self, bool enable);
bool QSslConfiguration_ocspStaplingEnabled(const QSslConfiguration* self);
void QSslConfiguration_setAllowedNextProtocols(QSslConfiguration* self, struct miqt_array /* of struct miqt_string */  protocols);
struct miqt_array /* of struct miqt_string */  QSslConfiguration_allowedNextProtocols(const QSslConfiguration* self);
struct miqt_string QSslConfiguration_nextNegotiatedProtocol(const QSslConfiguration* self);
int QSslConfiguration_nextProtocolNegotiationStatus(const QSslConfiguration* self);
bool QSslConfiguration_addCaCertificates2(QSslConfiguration* self, struct miqt_string path, int format);
bool QSslConfiguration_addCaCertificates3(QSslConfiguration* self, struct miqt_string path, int format, int syntax);
void QSslConfiguration_delete(QSslConfiguration* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
