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

QMessageAuthenticationCode* QMessageAuthenticationCode_new(int method);
QMessageAuthenticationCode* QMessageAuthenticationCode_new2(int method, struct miqt_string key);
void QMessageAuthenticationCode_reset(QMessageAuthenticationCode* self);
void QMessageAuthenticationCode_setKey(QMessageAuthenticationCode* self, struct miqt_string key);
void QMessageAuthenticationCode_addData(QMessageAuthenticationCode* self, const char* data, int length);
void QMessageAuthenticationCode_addDataWithData(QMessageAuthenticationCode* self, struct miqt_string data);
bool QMessageAuthenticationCode_addDataWithDevice(QMessageAuthenticationCode* self, QIODevice* device);
struct miqt_string QMessageAuthenticationCode_result(const QMessageAuthenticationCode* self);
struct miqt_string QMessageAuthenticationCode_hash(struct miqt_string message, struct miqt_string key, int method);
void QMessageAuthenticationCode_delete(QMessageAuthenticationCode* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
