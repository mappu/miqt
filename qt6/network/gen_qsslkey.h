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
class QIODevice;
class QSslKey;
#else
typedef struct QIODevice QIODevice;
typedef struct QSslKey QSslKey;
#endif

QSslKey* QSslKey_new();
QSslKey* QSslKey_new2(struct miqt_string encoded, int algorithm);
QSslKey* QSslKey_new3(QIODevice* device, int algorithm);
QSslKey* QSslKey_new4(void* handle);
QSslKey* QSslKey_new5(QSslKey* other);
QSslKey* QSslKey_new6(struct miqt_string encoded, int algorithm, int format);
QSslKey* QSslKey_new7(struct miqt_string encoded, int algorithm, int format, int type);
QSslKey* QSslKey_new8(struct miqt_string encoded, int algorithm, int format, int type, struct miqt_string passPhrase);
QSslKey* QSslKey_new9(QIODevice* device, int algorithm, int format);
QSslKey* QSslKey_new10(QIODevice* device, int algorithm, int format, int type);
QSslKey* QSslKey_new11(QIODevice* device, int algorithm, int format, int type, struct miqt_string passPhrase);
QSslKey* QSslKey_new12(void* handle, int type);
void QSslKey_operatorAssign(QSslKey* self, QSslKey* other);
void QSslKey_swap(QSslKey* self, QSslKey* other);
bool QSslKey_isNull(const QSslKey* self);
void QSslKey_clear(QSslKey* self);
int QSslKey_length(const QSslKey* self);
int QSslKey_type(const QSslKey* self);
int QSslKey_algorithm(const QSslKey* self);
struct miqt_string QSslKey_toPem(const QSslKey* self);
struct miqt_string QSslKey_toDer(const QSslKey* self);
void* QSslKey_handle(const QSslKey* self);
bool QSslKey_operatorEqual(const QSslKey* self, QSslKey* key);
bool QSslKey_operatorNotEqual(const QSslKey* self, QSslKey* key);
struct miqt_string QSslKey_toPemWithPassPhrase(const QSslKey* self, struct miqt_string passPhrase);
struct miqt_string QSslKey_toDerWithPassPhrase(const QSslKey* self, struct miqt_string passPhrase);

void QSslKey_delete(QSslKey* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
