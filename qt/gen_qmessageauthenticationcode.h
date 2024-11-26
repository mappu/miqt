#pragma once
#ifndef MIQT_QT_GEN_QMESSAGEAUTHENTICATIONCODE_H
#define MIQT_QT_GEN_QMESSAGEAUTHENTICATIONCODE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QMessageAuthenticationCode;
#else
typedef struct QIODevice QIODevice;
typedef struct QMessageAuthenticationCode QMessageAuthenticationCode;
#endif

void QMessageAuthenticationCode_new(int method, QMessageAuthenticationCode** outptr_QMessageAuthenticationCode);
void QMessageAuthenticationCode_new2(int method, struct miqt_string key, QMessageAuthenticationCode** outptr_QMessageAuthenticationCode);
void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self);
void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, struct miqt_string key);
void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, const char* data, int length);
void QMessageAuthenticationCode_AddDataWithData(QMessageAuthenticationCode* self, struct miqt_string data);
bool QMessageAuthenticationCode_AddDataWithDevice(QMessageAuthenticationCode* self, QIODevice* device);
struct miqt_string QMessageAuthenticationCode_Result(const QMessageAuthenticationCode* self);
struct miqt_string QMessageAuthenticationCode_Hash(struct miqt_string message, struct miqt_string key, int method);
void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
