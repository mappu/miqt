#ifndef GEN_QMESSAGEAUTHENTICATIONCODE_H
#define GEN_QMESSAGEAUTHENTICATIONCODE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self);
void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, QByteArray* key);
void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, char* data, int length);
void QMessageAuthenticationCode_AddDataWithData(QMessageAuthenticationCode* self, QByteArray* data);
bool QMessageAuthenticationCode_AddDataWithDevice(QMessageAuthenticationCode* self, QIODevice* device);
QByteArray* QMessageAuthenticationCode_Result(QMessageAuthenticationCode* self);
void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
