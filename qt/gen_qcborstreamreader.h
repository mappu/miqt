#ifndef GEN_QCBORSTREAMREADER_H
#define GEN_QCBORSTREAMREADER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QCborError;
class QCborStreamReader;
class QIODevice;
#else
typedef struct QByteArray QByteArray;
typedef struct QCborError QCborError;
typedef struct QCborStreamReader QCborStreamReader;
typedef struct QIODevice QIODevice;
#endif

QCborStreamReader* QCborStreamReader_new();
QCborStreamReader* QCborStreamReader_new2(const char* data, size_t lenVal);
QCborStreamReader* QCborStreamReader_new3(const unsigned char* data, size_t lenVal);
QCborStreamReader* QCborStreamReader_new4(QByteArray* data);
QCborStreamReader* QCborStreamReader_new5(QIODevice* device);
void QCborStreamReader_SetDevice(QCborStreamReader* self, QIODevice* device);
QIODevice* QCborStreamReader_Device(QCborStreamReader* self);
void QCborStreamReader_AddData(QCborStreamReader* self, QByteArray* data);
void QCborStreamReader_AddData2(QCborStreamReader* self, const char* data, size_t lenVal);
void QCborStreamReader_AddData3(QCborStreamReader* self, const unsigned char* data, size_t lenVal);
void QCborStreamReader_Reparse(QCborStreamReader* self);
void QCborStreamReader_Clear(QCborStreamReader* self);
void QCborStreamReader_Reset(QCborStreamReader* self);
QCborError* QCborStreamReader_LastError(QCborStreamReader* self);
long long QCborStreamReader_CurrentOffset(QCborStreamReader* self);
bool QCborStreamReader_IsValid(QCborStreamReader* self);
int QCborStreamReader_ContainerDepth(QCborStreamReader* self);
uintptr_t QCborStreamReader_ParentContainerType(QCborStreamReader* self);
bool QCborStreamReader_HasNext(QCborStreamReader* self);
bool QCborStreamReader_Next(QCborStreamReader* self);
uintptr_t QCborStreamReader_Type(QCborStreamReader* self);
bool QCborStreamReader_IsUnsignedInteger(QCborStreamReader* self);
bool QCborStreamReader_IsNegativeInteger(QCborStreamReader* self);
bool QCborStreamReader_IsInteger(QCborStreamReader* self);
bool QCborStreamReader_IsByteArray(QCborStreamReader* self);
bool QCborStreamReader_IsString(QCborStreamReader* self);
bool QCborStreamReader_IsArray(QCborStreamReader* self);
bool QCborStreamReader_IsMap(QCborStreamReader* self);
bool QCborStreamReader_IsTag(QCborStreamReader* self);
bool QCborStreamReader_IsSimpleType(QCborStreamReader* self);
bool QCborStreamReader_IsFloat16(QCborStreamReader* self);
bool QCborStreamReader_IsFloat(QCborStreamReader* self);
bool QCborStreamReader_IsDouble(QCborStreamReader* self);
bool QCborStreamReader_IsInvalid(QCborStreamReader* self);
bool QCborStreamReader_IsFalse(QCborStreamReader* self);
bool QCborStreamReader_IsTrue(QCborStreamReader* self);
bool QCborStreamReader_IsBool(QCborStreamReader* self);
bool QCborStreamReader_IsNull(QCborStreamReader* self);
bool QCborStreamReader_IsUndefined(QCborStreamReader* self);
bool QCborStreamReader_IsLengthKnown(QCborStreamReader* self);
unsigned long long QCborStreamReader_Length(QCborStreamReader* self);
bool QCborStreamReader_IsContainer(QCborStreamReader* self);
bool QCborStreamReader_EnterContainer(QCborStreamReader* self);
bool QCborStreamReader_LeaveContainer(QCborStreamReader* self);
size_t QCborStreamReader_CurrentStringChunkSize(QCborStreamReader* self);
bool QCborStreamReader_ToBool(QCborStreamReader* self);
unsigned long long QCborStreamReader_ToUnsignedInteger(QCborStreamReader* self);
float QCborStreamReader_ToFloat(QCborStreamReader* self);
double QCborStreamReader_ToDouble(QCborStreamReader* self);
long long QCborStreamReader_ToInteger(QCborStreamReader* self);
bool QCborStreamReader_Next1(QCborStreamReader* self, int maxRecursion);
void QCborStreamReader_Delete(QCborStreamReader* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
