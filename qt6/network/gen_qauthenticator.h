#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QAUTHENTICATOR_H
#define MIQT_QT6_NETWORK_GEN_QAUTHENTICATOR_H

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
void QAuthenticator_OperatorAssign(QAuthenticator* self, QAuthenticator* other);
bool QAuthenticator_OperatorEqual(const QAuthenticator* self, QAuthenticator* other);
bool QAuthenticator_OperatorNotEqual(const QAuthenticator* self, QAuthenticator* other);
struct miqt_string QAuthenticator_User(const QAuthenticator* self);
void QAuthenticator_SetUser(QAuthenticator* self, struct miqt_string user);
struct miqt_string QAuthenticator_Password(const QAuthenticator* self);
void QAuthenticator_SetPassword(QAuthenticator* self, struct miqt_string password);
struct miqt_string QAuthenticator_Realm(const QAuthenticator* self);
void QAuthenticator_SetRealm(QAuthenticator* self, struct miqt_string realm);
QVariant* QAuthenticator_Option(const QAuthenticator* self, struct miqt_string opt);
struct miqt_map /* of struct miqt_string to QVariant* */  QAuthenticator_Options(const QAuthenticator* self);
void QAuthenticator_SetOption(QAuthenticator* self, struct miqt_string opt, QVariant* value);
bool QAuthenticator_IsNull(const QAuthenticator* self);
void QAuthenticator_Detach(QAuthenticator* self);
void QAuthenticator_Delete(QAuthenticator* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
