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
class QDateTime;
class QIODevice;
class QSslCertificate;
class QSslCertificateExtension;
class QSslError;
class QSslKey;
#else
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
typedef struct QSslCertificate QSslCertificate;
typedef struct QSslCertificateExtension QSslCertificateExtension;
typedef struct QSslError QSslError;
typedef struct QSslKey QSslKey;
#endif

QSslCertificate* QSslCertificate_new(QIODevice* device);
QSslCertificate* QSslCertificate_new2();
QSslCertificate* QSslCertificate_new3(QSslCertificate* other);
QSslCertificate* QSslCertificate_new4(QIODevice* device, int format);
QSslCertificate* QSslCertificate_new5(struct miqt_string data);
QSslCertificate* QSslCertificate_new6(struct miqt_string data, int format);
void QSslCertificate_operatorAssign(QSslCertificate* self, QSslCertificate* other);
void QSslCertificate_swap(QSslCertificate* self, QSslCertificate* other);
bool QSslCertificate_operatorEqual(const QSslCertificate* self, QSslCertificate* other);
bool QSslCertificate_operatorNotEqual(const QSslCertificate* self, QSslCertificate* other);
bool QSslCertificate_isNull(const QSslCertificate* self);
bool QSslCertificate_isBlacklisted(const QSslCertificate* self);
bool QSslCertificate_isSelfSigned(const QSslCertificate* self);
void QSslCertificate_clear(QSslCertificate* self);
struct miqt_string QSslCertificate_version(const QSslCertificate* self);
struct miqt_string QSslCertificate_serialNumber(const QSslCertificate* self);
struct miqt_string QSslCertificate_digest(const QSslCertificate* self);
struct miqt_array /* of struct miqt_string */  QSslCertificate_issuerInfo(const QSslCertificate* self, int info);
struct miqt_array /* of struct miqt_string */  QSslCertificate_issuerInfoWithAttribute(const QSslCertificate* self, struct miqt_string attribute);
struct miqt_array /* of struct miqt_string */  QSslCertificate_subjectInfo(const QSslCertificate* self, int info);
struct miqt_array /* of struct miqt_string */  QSslCertificate_subjectInfoWithAttribute(const QSslCertificate* self, struct miqt_string attribute);
struct miqt_string QSslCertificate_issuerDisplayName(const QSslCertificate* self);
struct miqt_string QSslCertificate_subjectDisplayName(const QSslCertificate* self);
struct miqt_array /* of struct miqt_string */  QSslCertificate_subjectInfoAttributes(const QSslCertificate* self);
struct miqt_array /* of struct miqt_string */  QSslCertificate_issuerInfoAttributes(const QSslCertificate* self);
QDateTime* QSslCertificate_effectiveDate(const QSslCertificate* self);
QDateTime* QSslCertificate_expiryDate(const QSslCertificate* self);
QSslKey* QSslCertificate_publicKey(const QSslCertificate* self);
struct miqt_array /* of QSslCertificateExtension* */  QSslCertificate_extensions(const QSslCertificate* self);
struct miqt_string QSslCertificate_toPem(const QSslCertificate* self);
struct miqt_string QSslCertificate_toDer(const QSslCertificate* self);
struct miqt_string QSslCertificate_toText(const QSslCertificate* self);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromPath(struct miqt_string path, int format, int syntax);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromPathWithPath(struct miqt_string path);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromDevice(QIODevice* device);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromData(struct miqt_string data);
struct miqt_array /* of QSslError* */  QSslCertificate_verify(struct miqt_array /* of QSslCertificate* */  certificateChain);
bool QSslCertificate_importPkcs12(QIODevice* device, QSslKey* key, QSslCertificate* cert);
void* QSslCertificate_handle(const QSslCertificate* self);
struct miqt_string QSslCertificate_digestWithAlgorithm(const QSslCertificate* self, int algorithm);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromPath2(struct miqt_string path, int format);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromPath3(struct miqt_string path, int format, int syntax);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromDevice2(QIODevice* device, int format);
struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromData2(struct miqt_string data, int format);
struct miqt_array /* of QSslError* */  QSslCertificate_verify2(struct miqt_array /* of QSslCertificate* */  certificateChain, struct miqt_string hostName);
bool QSslCertificate_importPkcs122(QIODevice* device, QSslKey* key, QSslCertificate* cert, struct miqt_array /* of QSslCertificate* */  caCertificates);
bool QSslCertificate_importPkcs123(QIODevice* device, QSslKey* key, QSslCertificate* cert, struct miqt_array /* of QSslCertificate* */  caCertificates, struct miqt_string passPhrase);

void QSslCertificate_delete(QSslCertificate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
