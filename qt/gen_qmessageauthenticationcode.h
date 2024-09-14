#ifndef GEN_QMESSAGEAUTHENTICATIONCODE_H
#define GEN_QMESSAGEAUTHENTICATIONCODE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QIODevice;
class QMessageAuthenticationCode;
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QMessageAuthenticationCode QMessageAuthenticationCode;
#endif

QMessageAuthenticationCode* QMessageAuthenticationCode_new(uintptr_t method);
QMessageAuthenticationCode* QMessageAuthenticationCode_new2(uintptr_t method, QByteArray* key);
void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self);
void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, QByteArray* key);
void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, const char* data, int length);
void QMessageAuthenticationCode_AddDataWithData(QMessageAuthenticationCode* self, QByteArray* data);
bool QMessageAuthenticationCode_AddDataWithDevice(QMessageAuthenticationCode* self, QIODevice* device);
QByteArray* QMessageAuthenticationCode_Result(const QMessageAuthenticationCode* self);
QByteArray* QMessageAuthenticationCode_Hash(QByteArray* message, QByteArray* key, uintptr_t method);
void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
