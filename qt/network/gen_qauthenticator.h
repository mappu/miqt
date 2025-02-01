#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QAUTHENTICATOR_H
#define MIQT_QT_NETWORK_GEN_QAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAuthenticator;
class QVariant;
#else
typedef struct QAuthenticator QAuthenticator;
typedef struct QVariant QVariant;
#endif

QAuthenticator* QAuthenticator_new();
QAuthenticator* QAuthenticator_new2(QAuthenticator* other);
void QAuthenticator_operatorAssign(QAuthenticator* self, QAuthenticator* other);
bool QAuthenticator_operatorEqual(const QAuthenticator* self, QAuthenticator* other);
bool QAuthenticator_operatorNotEqual(const QAuthenticator* self, QAuthenticator* other);
struct miqt_string QAuthenticator_user(const QAuthenticator* self);
void QAuthenticator_setUser(QAuthenticator* self, struct miqt_string user);
struct miqt_string QAuthenticator_password(const QAuthenticator* self);
void QAuthenticator_setPassword(QAuthenticator* self, struct miqt_string password);
struct miqt_string QAuthenticator_realm(const QAuthenticator* self);
void QAuthenticator_setRealm(QAuthenticator* self, struct miqt_string realm);
QVariant* QAuthenticator_option(const QAuthenticator* self, struct miqt_string opt);
struct miqt_map /* of struct miqt_string to QVariant* */  QAuthenticator_options(const QAuthenticator* self);
void QAuthenticator_setOption(QAuthenticator* self, struct miqt_string opt, QVariant* value);
bool QAuthenticator_isNull(const QAuthenticator* self);
void QAuthenticator_detach(QAuthenticator* self);
void QAuthenticator_delete(QAuthenticator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
