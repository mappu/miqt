#ifndef GEN_QUUID_H
#define GEN_QUUID_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QUuid* QUuid_new3(const char* param1, size_t param1_Strlen);
QUuid* QUuid_new4(char* param1);
QUuid* QUuid_new5(QByteArray* param1);
QUuid* QUuid_new6(QUuid* param1);
void QUuid_ToString(QUuid* self, char** _out, int* _out_Strlen);
QByteArray* QUuid_ToByteArray(QUuid* self);
QByteArray* QUuid_ToRfc4122(QUuid* self);
QUuid* QUuid_FromRfc4122(QByteArray* param1);
bool QUuid_IsNull(QUuid* self);
bool QUuid_OperatorEqual(QUuid* self, QUuid* orig);
bool QUuid_OperatorNotEqual(QUuid* self, QUuid* orig);
bool QUuid_OperatorLesser(QUuid* self, QUuid* other);
bool QUuid_OperatorGreater(QUuid* self, QUuid* other);
QUuid* QUuid_CreateUuid();
QUuid* QUuid_CreateUuidV3(QUuid* ns, QByteArray* baseData);
QUuid* QUuid_CreateUuidV5(QUuid* ns, QByteArray* baseData);
QUuid* QUuid_CreateUuidV32(QUuid* ns, const char* baseData, size_t baseData_Strlen);
QUuid* QUuid_CreateUuidV52(QUuid* ns, const char* baseData, size_t baseData_Strlen);
void QUuid_Delete(QUuid* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
