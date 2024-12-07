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
void QSslCipher_OperatorAssign(QSslCipher* self, QSslCipher* other);
void QSslCipher_Swap(QSslCipher* self, QSslCipher* other);
bool QSslCipher_OperatorEqual(const QSslCipher* self, QSslCipher* other);
bool QSslCipher_OperatorNotEqual(const QSslCipher* self, QSslCipher* other);
bool QSslCipher_IsNull(const QSslCipher* self);
struct miqt_string QSslCipher_Name(const QSslCipher* self);
int QSslCipher_SupportedBits(const QSslCipher* self);
int QSslCipher_UsedBits(const QSslCipher* self);
struct miqt_string QSslCipher_KeyExchangeMethod(const QSslCipher* self);
struct miqt_string QSslCipher_AuthenticationMethod(const QSslCipher* self);
struct miqt_string QSslCipher_EncryptionMethod(const QSslCipher* self);
struct miqt_string QSslCipher_ProtocolString(const QSslCipher* self);
int QSslCipher_Protocol(const QSslCipher* self);
void QSslCipher_Delete(QSslCipher* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
