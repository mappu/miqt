#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QSSLCERTIFICATEEXTENSION_H
#define MIQT_QT6_NETWORK_GEN_QSSLCERTIFICATEEXTENSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSslCertificateExtension;
class QVariant;
#else
typedef struct QSslCertificateExtension QSslCertificateExtension;
typedef struct QVariant QVariant;
#endif

QSslCertificateExtension* QSslCertificateExtension_new();
QSslCertificateExtension* QSslCertificateExtension_new2(QSslCertificateExtension* other);
void QSslCertificateExtension_OperatorAssign(QSslCertificateExtension* self, QSslCertificateExtension* other);
void QSslCertificateExtension_Swap(QSslCertificateExtension* self, QSslCertificateExtension* other);
struct miqt_string QSslCertificateExtension_Oid(const QSslCertificateExtension* self);
struct miqt_string QSslCertificateExtension_Name(const QSslCertificateExtension* self);
QVariant* QSslCertificateExtension_Value(const QSslCertificateExtension* self);
bool QSslCertificateExtension_IsCritical(const QSslCertificateExtension* self);
bool QSslCertificateExtension_IsSupported(const QSslCertificateExtension* self);
void QSslCertificateExtension_Delete(QSslCertificateExtension* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
