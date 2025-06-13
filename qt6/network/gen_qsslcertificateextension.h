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
void QSslCertificateExtension_operatorAssign(QSslCertificateExtension* self, QSslCertificateExtension* other);
void QSslCertificateExtension_swap(QSslCertificateExtension* self, QSslCertificateExtension* other);
struct miqt_string QSslCertificateExtension_oid(const QSslCertificateExtension* self);
struct miqt_string QSslCertificateExtension_name(const QSslCertificateExtension* self);
QVariant* QSslCertificateExtension_value(const QSslCertificateExtension* self);
bool QSslCertificateExtension_isCritical(const QSslCertificateExtension* self);
bool QSslCertificateExtension_isSupported(const QSslCertificateExtension* self);

void QSslCertificateExtension_delete(QSslCertificateExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
