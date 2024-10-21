#ifndef GEN_QUUID_H
#define GEN_QUUID_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QByteArray;
class QByteArrayView;
class QUuid;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QByteArray QByteArray;
typedef struct QByteArrayView QByteArrayView;
typedef struct QUuid QUuid;
#endif

QUuid* QUuid_new();
QUuid* QUuid_new2(unsigned int l, uint16_t w1, uint16_t w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8);
QUuid* QUuid_new3(QAnyStringView* stringVal);
QUuid* QUuid_new4(QUuid* param1);
QUuid* QUuid_FromString(QAnyStringView* stringVal);
struct miqt_string QUuid_ToString(const QUuid* self);
struct miqt_string QUuid_ToByteArray(const QUuid* self);
struct miqt_string QUuid_ToRfc4122(const QUuid* self);
QUuid* QUuid_FromRfc4122(QByteArrayView* param1);
bool QUuid_IsNull(const QUuid* self);
bool QUuid_OperatorEqual(const QUuid* self, QUuid* orig);
bool QUuid_OperatorNotEqual(const QUuid* self, QUuid* orig);
bool QUuid_OperatorLesser(const QUuid* self, QUuid* other);
bool QUuid_OperatorGreater(const QUuid* self, QUuid* other);
QUuid* QUuid_CreateUuid();
QUuid* QUuid_CreateUuidV3(QUuid* ns, struct miqt_string baseData);
QUuid* QUuid_CreateUuidV5(QUuid* ns, struct miqt_string baseData);
QUuid* QUuid_CreateUuidV32(QUuid* ns, struct miqt_string baseData);
QUuid* QUuid_CreateUuidV52(QUuid* ns, struct miqt_string baseData);
int QUuid_Variant(const QUuid* self);
int QUuid_Version(const QUuid* self);
struct miqt_string QUuid_ToString1(const QUuid* self, int mode);
struct miqt_string QUuid_ToByteArray1(const QUuid* self, int mode);
void QUuid_Delete(QUuid* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
