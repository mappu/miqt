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

void QSslDiffieHellmanParameters_new(QSslDiffieHellmanParameters** outptr_QSslDiffieHellmanParameters);
void QSslDiffieHellmanParameters_new2(QSslDiffieHellmanParameters* other, QSslDiffieHellmanParameters** outptr_QSslDiffieHellmanParameters);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_DefaultParameters();
void QSslDiffieHellmanParameters_OperatorAssign(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other);
void QSslDiffieHellmanParameters_Swap(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded(struct miqt_string encoded);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncodedWithDevice(QIODevice* device);
bool QSslDiffieHellmanParameters_IsEmpty(const QSslDiffieHellmanParameters* self);
bool QSslDiffieHellmanParameters_IsValid(const QSslDiffieHellmanParameters* self);
int QSslDiffieHellmanParameters_Error(const QSslDiffieHellmanParameters* self);
struct miqt_string QSslDiffieHellmanParameters_ErrorString(const QSslDiffieHellmanParameters* self);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded2(struct miqt_string encoded, int format);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded22(QIODevice* device, int format);
void QSslDiffieHellmanParameters_Delete(QSslDiffieHellmanParameters* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
