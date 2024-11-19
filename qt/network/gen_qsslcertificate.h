#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QSSLCERTIFICATE_H
#define MIQT_QT_NETWORK_GEN_QSSLCERTIFICATE_H

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
class QDateTime;
class QIODevice;
class QSslCertificate;
class QSslCertificateExtension;
class QSslError;
class QSslKey;
#else
typedef struct QByteArray QByteArray;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
typedef struct QSslCertificate QSslCertificate;
typedef struct QSslCertificateExtension QSslCertificateExtension;
typedef struct QSslError QSslError;
typedef struct QSslKey QSslKey;
#endif

void QSslCertificate_new(QIODevice* device, QSslCertificate** outptr_QSslCertificate);
void QSslCertificate_new2(QSslCertificate** outptr_QSslCertificate);
void QSslCertificate_new3(QSslCertificate* other, QSslCertificate** outptr_QSslCertificate);
void QSslCertificate_new4(QIODevice* device, int format, QSslCertificate** outptr_QSslCertificate);
void QSslCertificate_new5(struct miqt_string data, QSslCertificate** outptr_QSslCertificate);
void QSslCertificate_new6(struct miqt_string data, int format, QSslCertificate** outptr_QSslCertificate);
void QSslCertificate_OperatorAssign(QSslCertificate* self, QSslCertificate* other);
void QSslCertificate_Swap(QSslCertificate* self, QSslCertificate* other);
bool QSslCertificate_OperatorEqual(const QSslCertificate* self, QSslCertificate* other);
bool QSslCertificate_OperatorNotEqual(const QSslCertificate* self, QSslCertificate* other);
bool QSslCertificate_IsNull(const QSslCertificate* self);
bool QSslCertificate_IsBlacklisted(const QSslCertificate* self);
bool QSslCertificate_IsSelfSigned(const QSslCertificate* self);
void QSslCertificate_Clear(QSslCertificate* self);
struct miqt_string QSslCertificate_Version(const QSslCertificate* self);
struct miqt_string QSslCertificate_SerialNumber(const QSslCertificate* self);
struct miqt_string QSslCertificate_Digest(const QSslCertificate* self);
struct miqt_array /* of struct miqt_string */  QSslCertificate_IssuerInfo(const QSslCertificate* self, int info);
struct miqt_array /* of struct miqt_string */  QSslCertificate_IssuerInfoWithAttribute(const QSslCertificate* self, struct miqt_string attribute);
struct miqt_array /* of struct miqt_string */  QSslCertificate_SubjectInfo(const QSslCertificate* self, int info);
struct miqt_array /* of struct miqt_string */  QSslCertificate_SubjectInfoWithAttribute(const QSslCertificate* self, struct miqt_string attribute);
struct miqt_string QSslCertificate_IssuerDisplayName(const QSslCertificate* self);
struct miqt_string QSslCertificate_SubjectDisplayName(const QSslCertificate* self);
struct miqt_array /* of struct miqt_string */  QSslCertificate_SubjectInfoAttributes(const QSslCertificate* self);
struct miqt_array /* of struct miqt_string */  QSslCertificate_IssuerInfoAttributes(const QSslCertificate* self);
QDateTime* QSslCertificate_EffectiveDate(const QSslCertificate* self);
QDateTime* QSslCertificate_ExpiryDate(const QSslCertificate* self);
QSslKey* QSslCertificate_PublicKey(const QSslCertificate* self);
struct miqt_array /* of QSslCertificateExtension* */  QSslCertificate_Extensions(const QSslCertificate* self);
struct miqt_string QSslCertificate_ToPem(const QSslCertificate* self);
struct miqt_string QSslCertificate_ToDer(const QSslCertificate* self);
struct miqt_string QSslCertificate_ToText(const QSslCertificate* self);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_FromPath(struct miqt_string path, int format, int syntax);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_FromPathWithPath(struct miqt_string path);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_FromDevice(QIODevice* device);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_FromData(struct miqt_string data);
struct miqt_array /* of QSslError* */  QSslCertificate_Verify(struct miqt_array /* of QSslCertificate* */  certificateChain);
bool QSslCertificate_ImportPkcs12(QIODevice* device, QSslKey* key, QSslCertificate* cert);
void* QSslCertificate_Handle(const QSslCertificate* self);
struct miqt_string QSslCertificate_Digest1(const QSslCertificate* self, int algorithm);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_FromPath2(struct miqt_string path, int format);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_FromPath3(struct miqt_string path, int format, int syntax);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_FromDevice2(QIODevice* device, int format);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_FromData2(struct miqt_string data, int format);
struct miqt_array /* of QSslError* */  QSslCertificate_Verify2(struct miqt_array /* of QSslCertificate* */  certificateChain, struct miqt_string hostName);
bool QSslCertificate_ImportPkcs124(QIODevice* device, QSslKey* key, QSslCertificate* cert, struct miqt_array /* of QSslCertificate* */  caCertificates);
bool QSslCertificate_ImportPkcs125(QIODevice* device, QSslKey* key, QSslCertificate* cert, struct miqt_array /* of QSslCertificate* */  caCertificates, struct miqt_string passPhrase);
void QSslCertificate_Delete(QSslCertificate* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
