#pragma once
#ifndef MIQT_QT6_GEN_QMETATYPE_H
#define MIQT_QT6_GEN_QMETATYPE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArrayView;
class QDataStream;
class QDebug;
class QMetaObject;
class QMetaType;
class QPartialOrdering;
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QDataStream QDataStream;
typedef struct QDebug QDebug;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaType QMetaType;
typedef struct QPartialOrdering QPartialOrdering;
#endif

QMetaType* QMetaType_new(int type);
QMetaType* QMetaType_new2();
QMetaType* QMetaType_new3(QMetaType* param1);
void QMetaType_registerNormalizedTypedef(struct miqt_string normalizedTypeName, QMetaType* type);
int QMetaType_type(const char* typeName);
int QMetaType_typeWithTypeName(struct miqt_string typeName);
const char* QMetaType_typeName(int type);
int QMetaType_sizeOf(int type);
int QMetaType_typeFlags(int type);
QMetaObject* QMetaType_metaObjectForType(int type);
void* QMetaType_create(int type);
void QMetaType_destroy(int type, void* data);
void* QMetaType_construct(int type, void* where, const void* copy);
void QMetaType_destruct(int type, void* where);
bool QMetaType_isRegistered(int type);
bool QMetaType_isValid(const QMetaType* self);
bool QMetaType_isRegistered2(const QMetaType* self);
int QMetaType_id(const QMetaType* self);
ptrdiff_t QMetaType_sizeOf2(const QMetaType* self);
ptrdiff_t QMetaType_alignOf(const QMetaType* self);
int QMetaType_flags(const QMetaType* self);
QMetaObject* QMetaType_metaObject(const QMetaType* self);
const char* QMetaType_name(const QMetaType* self);
void* QMetaType_create2(const QMetaType* self);
void QMetaType_destroyWithData(const QMetaType* self, void* data);
void* QMetaType_constructWithWhere(const QMetaType* self, void* where);
void QMetaType_destructWithData(const QMetaType* self, void* data);
QPartialOrdering* QMetaType_compare(const QMetaType* self, const void* lhs, const void* rhs);
bool QMetaType_equals(const QMetaType* self, const void* lhs, const void* rhs);
bool QMetaType_isEqualityComparable(const QMetaType* self);
bool QMetaType_isOrdered(const QMetaType* self);
bool QMetaType_save(const QMetaType* self, QDataStream* stream, const void* data);
bool QMetaType_load(const QMetaType* self, QDataStream* stream, void* data);
bool QMetaType_hasRegisteredDataStreamOperators(const QMetaType* self);
bool QMetaType_save2(QDataStream* stream, int type, const void* data);
bool QMetaType_load2(QDataStream* stream, int type, void* data);
QMetaType* QMetaType_fromName(QByteArrayView* name);
bool QMetaType_debugStream(QMetaType* self, QDebug* dbg, const void* rhs);
bool QMetaType_hasRegisteredDebugStreamOperator(const QMetaType* self);
bool QMetaType_debugStream2(QDebug* dbg, const void* rhs, int typeId);
bool QMetaType_hasRegisteredDebugStreamOperatorWithTypeId(int typeId);
bool QMetaType_convert(QMetaType* fromType, const void* from, QMetaType* toType, void* to);
bool QMetaType_canConvert(QMetaType* fromType, QMetaType* toType);
bool QMetaType_view(QMetaType* fromType, void* from, QMetaType* toType, void* to);
bool QMetaType_canView(QMetaType* fromType, QMetaType* toType);
bool QMetaType_convert2(const void* from, int fromTypeId, void* to, int toTypeId);
bool QMetaType_compare2(const void* lhs, const void* rhs, int typeId, int* result);
bool QMetaType_equals2(const void* lhs, const void* rhs, int typeId, int* result);
bool QMetaType_hasRegisteredConverterFunction(QMetaType* fromType, QMetaType* toType);
bool QMetaType_hasRegisteredMutableViewFunction(QMetaType* fromType, QMetaType* toType);
void QMetaType_unregisterConverterFunction(QMetaType* from, QMetaType* to);
void QMetaType_unregisterMutableViewFunction(QMetaType* from, QMetaType* to);
void QMetaType_unregisterMetaType(QMetaType* type);
void* QMetaType_create3(int type, const void* copy);
int QMetaType_idWithInt(const QMetaType* self, int param1);
void* QMetaType_createWithCopy(const QMetaType* self, const void* copy);
void* QMetaType_construct2(const QMetaType* self, void* where, const void* copy);
void QMetaType_delete(QMetaType* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
