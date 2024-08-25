#ifndef GEN_QMETATYPE_H
#define GEN_QMETATYPE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QMetaType;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QMetaType QMetaType;
#endif

QMetaType* QMetaType_new();
QMetaType* QMetaType_new2(int typeVal);
bool QMetaType_UnregisterType(int typeVal);
int QMetaType_RegisterTypedef(char* typeName, int aliasId);
int QMetaType_Type(char* typeName);
char* QMetaType_TypeName(int typeVal);
int QMetaType_SizeOf(int typeVal);
QMetaObject* QMetaType_MetaObjectForType(int typeVal);
bool QMetaType_IsRegistered(int typeVal);
bool QMetaType_IsValid(QMetaType* self);
bool QMetaType_IsRegistered2(QMetaType* self);
int QMetaType_Id(QMetaType* self);
int QMetaType_SizeOf2(QMetaType* self);
QMetaObject* QMetaType_MetaObject(QMetaType* self);
bool QMetaType_HasRegisteredComparators(int typeId);
bool QMetaType_HasRegisteredDebugStreamOperator(int typeId);
bool QMetaType_HasRegisteredConverterFunction(int fromTypeId, int toTypeId);
void QMetaType_Delete(QMetaType* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
