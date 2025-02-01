#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QSSLCIPHER_H
#define MIQT_QT6_NETWORK_GEN_QSSLCIPHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSslCipher;
#else
typedef struct QSslCipher QSslCipher;
#endif

QSslCipher* QSslCipher_new();
QSslCipher* QSslCipher_new2(struct miqt_string name);
QSslCipher* QSslCipher_new3(struct miqt_string name, int protocol);
QSslCipher* QSslCipher_new4(QSslCipher* other);
void QSslCipher_operatorAssign(QSslCipher* self, QSslCipher* other);
void QSslCipher_swap(QSslCipher* self, QSslCipher* other);
bool QSslCipher_operatorEqual(const QSslCipher* self, QSslCipher* other);
bool QSslCipher_operatorNotEqual(const QSslCipher* self, QSslCipher* other);
bool QSslCipher_isNull(const QSslCipher* self);
struct miqt_string QSslCipher_name(const QSslCipher* self);
int QSslCipher_supportedBits(const QSslCipher* self);
int QSslCipher_usedBits(const QSslCipher* self);
struct miqt_string QSslCipher_keyExchangeMethod(const QSslCipher* self);
struct miqt_string QSslCipher_authenticationMethod(const QSslCipher* self);
struct miqt_string QSslCipher_encryptionMethod(const QSslCipher* self);
struct miqt_string QSslCipher_protocolString(const QSslCipher* self);
int QSslCipher_protocol(const QSslCipher* self);
void QSslCipher_delete(QSslCipher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
