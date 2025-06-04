#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QSSLDIFFIEHELLMANPARAMETERS_H
#define MIQT_QT6_NETWORK_GEN_QSSLDIFFIEHELLMANPARAMETERS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QSslDiffieHellmanParameters;
#else
typedef struct QIODevice QIODevice;
typedef struct QSslDiffieHellmanParameters QSslDiffieHellmanParameters;
#endif

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_new();
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_new2(QSslDiffieHellmanParameters* other);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_defaultParameters();
void QSslDiffieHellmanParameters_operatorAssign(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other);
void QSslDiffieHellmanParameters_swap(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_fromEncoded(struct miqt_string encoded);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_fromEncodedWithDevice(QIODevice* device);
bool QSslDiffieHellmanParameters_isEmpty(const QSslDiffieHellmanParameters* self);
bool QSslDiffieHellmanParameters_isValid(const QSslDiffieHellmanParameters* self);
int QSslDiffieHellmanParameters_error(const QSslDiffieHellmanParameters* self);
struct miqt_string QSslDiffieHellmanParameters_errorString(const QSslDiffieHellmanParameters* self);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_fromEncoded2(struct miqt_string encoded, int format);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_fromEncoded3(QIODevice* device, int format);

void QSslDiffieHellmanParameters_delete(QSslDiffieHellmanParameters* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
