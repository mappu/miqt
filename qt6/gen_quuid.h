#pragma once
#ifndef MIQT_QT6_GEN_QUUID_H
#define MIQT_QT6_GEN_QUUID_H

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
class QByteArrayView;
class QUuid;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QByteArrayView QByteArrayView;
typedef struct QUuid QUuid;
#endif

QUuid* QUuid_new();
QUuid* QUuid_new2(unsigned int l, uint16_t w1, uint16_t w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8);
QUuid* QUuid_new3(QAnyStringView* string);
QUuid* QUuid_new4(QUuid* param1);
QUuid* QUuid_fromString(QAnyStringView* string);
struct miqt_string QUuid_toString(const QUuid* self);
struct miqt_string QUuid_toByteArray(const QUuid* self);
struct miqt_string QUuid_toRfc4122(const QUuid* self);
QUuid* QUuid_fromRfc4122(QByteArrayView* param1);
bool QUuid_isNull(const QUuid* self);
bool QUuid_operatorEqual(const QUuid* self, QUuid* orig);
bool QUuid_operatorNotEqual(const QUuid* self, QUuid* orig);
bool QUuid_operatorLesser(const QUuid* self, QUuid* other);
bool QUuid_operatorGreater(const QUuid* self, QUuid* other);
QUuid* QUuid_createUuid();
QUuid* QUuid_createUuidV3(QUuid* ns, struct miqt_string baseData);
QUuid* QUuid_createUuidV5(QUuid* ns, struct miqt_string baseData);
QUuid* QUuid_createUuidV32(QUuid* ns, struct miqt_string baseData);
QUuid* QUuid_createUuidV52(QUuid* ns, struct miqt_string baseData);
int QUuid_variant(const QUuid* self);
int QUuid_version(const QUuid* self);
struct miqt_string QUuid_toString1(const QUuid* self, int mode);
struct miqt_string QUuid_toByteArray1(const QUuid* self, int mode);
void QUuid_delete(QUuid* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
