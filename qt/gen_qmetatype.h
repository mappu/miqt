#pragma once
#ifndef MIQT_QT_GEN_QMETATYPE_H
#define MIQT_QT_GEN_QMETATYPE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDataStream;
class QDebug;
class QMetaObject;
class QMetaType;
#else
typedef struct QDataStream QDataStream;
typedef struct QDebug QDebug;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaType QMetaType;
#endif

void QMetaType_new(QMetaType** outptr_QMetaType);
void QMetaType_new2(const int typeVal, QMetaType** outptr_QMetaType);
bool QMetaType_UnregisterType(int typeVal);
int QMetaType_RegisterTypedef(const char* typeName, int aliasId);
int QMetaType_RegisterNormalizedTypedef(struct miqt_string normalizedTypeName, int aliasId);
int QMetaType_Type(const char* typeName);
int QMetaType_TypeWithTypeName(struct miqt_string typeName);
const char* QMetaType_TypeName(int typeVal);
int QMetaType_SizeOf(int typeVal);
int QMetaType_TypeFlags(int typeVal);
QMetaObject* QMetaType_MetaObjectForType(int typeVal);
bool QMetaType_IsRegistered(int typeVal);
void* QMetaType_Create(int typeVal);
void QMetaType_Destroy(int typeVal, void* data);
void* QMetaType_Construct(int typeVal, void* where, const void* copyVal);
void QMetaType_Destruct(int typeVal, void* where);
bool QMetaType_Save(QDataStream* stream, int typeVal, const void* data);
bool QMetaType_Load(QDataStream* stream, int typeVal, void* data);
bool QMetaType_IsValid(const QMetaType* self);
bool QMetaType_IsRegistered2(const QMetaType* self);
int QMetaType_Id(const QMetaType* self);
int QMetaType_SizeOf2(const QMetaType* self);
int QMetaType_Flags(const QMetaType* self);
QMetaObject* QMetaType_MetaObject(const QMetaType* self);
struct miqt_string QMetaType_Name(const QMetaType* self);
void* QMetaType_Create2(const QMetaType* self);
void QMetaType_DestroyWithData(const QMetaType* self, void* data);
void* QMetaType_ConstructWithWhere(const QMetaType* self, void* where);
void QMetaType_DestructWithData(const QMetaType* self, void* data);
bool QMetaType_HasRegisteredComparators(int typeId);
bool QMetaType_HasRegisteredDebugStreamOperator(int typeId);
bool QMetaType_Convert(const void* from, int fromTypeId, void* to, int toTypeId);
bool QMetaType_Compare(const void* lhs, const void* rhs, int typeId, int* result);
bool QMetaType_Equals(const void* lhs, const void* rhs, int typeId, int* result);
bool QMetaType_DebugStream(QDebug* dbg, const void* rhs, int typeId);
bool QMetaType_HasRegisteredConverterFunction(int fromTypeId, int toTypeId);
void* QMetaType_Create22(int typeVal, const void* copyVal);
void* QMetaType_Create1(const QMetaType* self, const void* copyVal);
void* QMetaType_Construct2(const QMetaType* self, void* where, const void* copyVal);
void QMetaType_Delete(QMetaType* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
