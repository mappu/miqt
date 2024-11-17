#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QSSLKEY_H
#define MIQT_QT6_NETWORK_GEN_QSSLKEY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QIODevice;
class QSslKey;
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QSslKey QSslKey;
#endif

QSslKey* QSslKey_new();
QSslKey* QSslKey_new2(struct miqt_string encoded, int algorithm);
QSslKey* QSslKey_new3(QIODevice* device, int algorithm);
QSslKey* QSslKey_new4(void* handle);
QSslKey* QSslKey_new5(QSslKey* other);
QSslKey* QSslKey_new6(struct miqt_string encoded, int algorithm, int format);
QSslKey* QSslKey_new7(struct miqt_string encoded, int algorithm, int format, int typeVal);
QSslKey* QSslKey_new8(struct miqt_string encoded, int algorithm, int format, int typeVal, struct miqt_string passPhrase);
QSslKey* QSslKey_new9(QIODevice* device, int algorithm, int format);
QSslKey* QSslKey_new10(QIODevice* device, int algorithm, int format, int typeVal);
QSslKey* QSslKey_new11(QIODevice* device, int algorithm, int format, int typeVal, struct miqt_string passPhrase);
QSslKey* QSslKey_new12(void* handle, int typeVal);
void QSslKey_OperatorAssign(QSslKey* self, QSslKey* other);
void QSslKey_Swap(QSslKey* self, QSslKey* other);
bool QSslKey_IsNull(const QSslKey* self);
void QSslKey_Clear(QSslKey* self);
int QSslKey_Length(const QSslKey* self);
int QSslKey_Type(const QSslKey* self);
int QSslKey_Algorithm(const QSslKey* self);
struct miqt_string QSslKey_ToPem(const QSslKey* self);
struct miqt_string QSslKey_ToDer(const QSslKey* self);
void* QSslKey_Handle(const QSslKey* self);
bool QSslKey_OperatorEqual(const QSslKey* self, QSslKey* key);
bool QSslKey_OperatorNotEqual(const QSslKey* self, QSslKey* key);
struct miqt_string QSslKey_ToPem1(const QSslKey* self, struct miqt_string passPhrase);
struct miqt_string QSslKey_ToDer1(const QSslKey* self, struct miqt_string passPhrase);
void QSslKey_Delete(QSslKey* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
