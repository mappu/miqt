#ifndef GEN_QUUID_H
#define GEN_QUUID_H

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
class QUuid;
#else
typedef struct QByteArray QByteArray;
typedef struct QUuid QUuid;
#endif

QUuid* QUuid_new();
QUuid* QUuid_new2(unsigned int l, uint16_t w1, uint16_t w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8);
QUuid* QUuid_new3(struct miqt_string* param1);
QUuid* QUuid_new4(const char* param1);
QUuid* QUuid_new5(QByteArray* param1);
QUuid* QUuid_new6(QUuid* param1);
struct miqt_string* QUuid_ToString(const QUuid* self);
struct miqt_string* QUuid_ToStringWithMode(const QUuid* self, int mode);
QByteArray* QUuid_ToByteArray(const QUuid* self);
QByteArray* QUuid_ToByteArrayWithMode(const QUuid* self, int mode);
QByteArray* QUuid_ToRfc4122(const QUuid* self);
QUuid* QUuid_FromRfc4122(QByteArray* param1);
bool QUuid_IsNull(const QUuid* self);
bool QUuid_OperatorEqual(const QUuid* self, QUuid* orig);
bool QUuid_OperatorNotEqual(const QUuid* self, QUuid* orig);
bool QUuid_OperatorLesser(const QUuid* self, QUuid* other);
bool QUuid_OperatorGreater(const QUuid* self, QUuid* other);
QUuid* QUuid_CreateUuid();
QUuid* QUuid_CreateUuidV3(QUuid* ns, QByteArray* baseData);
QUuid* QUuid_CreateUuidV5(QUuid* ns, QByteArray* baseData);
QUuid* QUuid_CreateUuidV32(QUuid* ns, struct miqt_string* baseData);
QUuid* QUuid_CreateUuidV52(QUuid* ns, struct miqt_string* baseData);
int QUuid_Variant(const QUuid* self);
int QUuid_Version(const QUuid* self);
void QUuid_Delete(QUuid* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
