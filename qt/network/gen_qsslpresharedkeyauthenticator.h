#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QSSLPRESHAREDKEYAUTHENTICATOR_H
#define MIQT_QT_NETWORK_GEN_QSSLPRESHAREDKEYAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSslPreSharedKeyAuthenticator;
#else
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
#endif

QSslPreSharedKeyAuthenticator* QSslPreSharedKeyAuthenticator_new();
QSslPreSharedKeyAuthenticator* QSslPreSharedKeyAuthenticator_new2(QSslPreSharedKeyAuthenticator* authenticator);
void QSslPreSharedKeyAuthenticator_operatorAssign(QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* authenticator);
void QSslPreSharedKeyAuthenticator_swap(QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* other);
struct miqt_string QSslPreSharedKeyAuthenticator_identityHint(const QSslPreSharedKeyAuthenticator* self);
void QSslPreSharedKeyAuthenticator_setIdentity(QSslPreSharedKeyAuthenticator* self, struct miqt_string identity);
struct miqt_string QSslPreSharedKeyAuthenticator_identity(const QSslPreSharedKeyAuthenticator* self);
int QSslPreSharedKeyAuthenticator_maximumIdentityLength(const QSslPreSharedKeyAuthenticator* self);
void QSslPreSharedKeyAuthenticator_setPreSharedKey(QSslPreSharedKeyAuthenticator* self, struct miqt_string preSharedKey);
struct miqt_string QSslPreSharedKeyAuthenticator_preSharedKey(const QSslPreSharedKeyAuthenticator* self);
int QSslPreSharedKeyAuthenticator_maximumPreSharedKeyLength(const QSslPreSharedKeyAuthenticator* self);
void QSslPreSharedKeyAuthenticator_delete(QSslPreSharedKeyAuthenticator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
