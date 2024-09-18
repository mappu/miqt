#ifndef GEN_QMETAOBJECT_H
#define GEN_QMETAOBJECT_H

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
class QGenericArgument;
class QGenericReturnArgument;
class QMetaClassInfo;
class QMetaEnum;
class QMetaMethod;
class QMetaObject;
class QMetaProperty;
class QObject;
class QVariant;
#else
typedef struct QByteArray QByteArray;
typedef struct QGenericArgument QGenericArgument;
typedef struct QGenericReturnArgument QGenericReturnArgument;
typedef struct QMetaClassInfo QMetaClassInfo;
typedef struct QMetaEnum QMetaEnum;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaProperty QMetaProperty;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QMetaMethod* QMetaMethod_new();
QMetaMethod* QMetaMethod_new2(QMetaMethod* param1);
QByteArray* QMetaMethod_MethodSignature(const QMetaMethod* self);
QByteArray* QMetaMethod_Name(const QMetaMethod* self);
const char* QMetaMethod_TypeName(const QMetaMethod* self);
int QMetaMethod_ReturnType(const QMetaMethod* self);
int QMetaMethod_ParameterCount(const QMetaMethod* self);
int QMetaMethod_ParameterType(const QMetaMethod* self, int index);
void QMetaMethod_GetParameterTypes(const QMetaMethod* self, int* types);
struct miqt_array* QMetaMethod_ParameterTypes(const QMetaMethod* self);
struct miqt_array* QMetaMethod_ParameterNames(const QMetaMethod* self);
const char* QMetaMethod_Tag(const QMetaMethod* self);
int QMetaMethod_Access(const QMetaMethod* self);
int QMetaMethod_MethodType(const QMetaMethod* self);
int QMetaMethod_Attributes(const QMetaMethod* self);
int QMetaMethod_MethodIndex(const QMetaMethod* self);
int QMetaMethod_Revision(const QMetaMethod* self);
QMetaObject* QMetaMethod_EnclosingMetaObject(const QMetaMethod* self);
bool QMetaMethod_Invoke(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue);
bool QMetaMethod_Invoke2(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue);
bool QMetaMethod_Invoke3(const QMetaMethod* self, QObject* object, int connectionType);
bool QMetaMethod_InvokeWithObject(const QMetaMethod* self, QObject* object);
bool QMetaMethod_IsValid(const QMetaMethod* self);
bool QMetaMethod_Invoke4(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0);
bool QMetaMethod_Invoke5(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_Invoke6(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_Invoke7(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_Invoke8(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_Invoke9(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_Invoke10(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_Invoke11(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_Invoke12(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_Invoke13(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_Invoke32(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0);
bool QMetaMethod_Invoke42(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_Invoke52(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_Invoke62(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_Invoke72(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_Invoke82(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_Invoke92(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_Invoke102(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_Invoke112(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_Invoke122(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_Invoke33(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0);
bool QMetaMethod_Invoke43(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_Invoke53(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_Invoke63(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_Invoke73(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_Invoke83(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_Invoke93(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_Invoke103(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_Invoke113(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_Invoke123(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_Invoke22(const QMetaMethod* self, QObject* object, QGenericArgument* val0);
bool QMetaMethod_Invoke34(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_Invoke44(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_Invoke54(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_Invoke64(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_Invoke74(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_Invoke84(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_Invoke94(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_Invoke104(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_Invoke114(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
void QMetaMethod_Delete(QMetaMethod* self);

QMetaEnum* QMetaEnum_new();
QMetaEnum* QMetaEnum_new2(QMetaEnum* param1);
const char* QMetaEnum_Name(const QMetaEnum* self);
const char* QMetaEnum_EnumName(const QMetaEnum* self);
bool QMetaEnum_IsFlag(const QMetaEnum* self);
bool QMetaEnum_IsScoped(const QMetaEnum* self);
int QMetaEnum_KeyCount(const QMetaEnum* self);
const char* QMetaEnum_Key(const QMetaEnum* self, int index);
int QMetaEnum_Value(const QMetaEnum* self, int index);
const char* QMetaEnum_Scope(const QMetaEnum* self);
int QMetaEnum_KeyToValue(const QMetaEnum* self, const char* key);
const char* QMetaEnum_ValueToKey(const QMetaEnum* self, int value);
int QMetaEnum_KeysToValue(const QMetaEnum* self, const char* keys);
QByteArray* QMetaEnum_ValueToKeys(const QMetaEnum* self, int value);
QMetaObject* QMetaEnum_EnclosingMetaObject(const QMetaEnum* self);
bool QMetaEnum_IsValid(const QMetaEnum* self);
int QMetaEnum_KeyToValue2(const QMetaEnum* self, const char* key, bool* ok);
int QMetaEnum_KeysToValue2(const QMetaEnum* self, const char* keys, bool* ok);
void QMetaEnum_Delete(QMetaEnum* self);

QMetaProperty* QMetaProperty_new();
const char* QMetaProperty_Name(const QMetaProperty* self);
const char* QMetaProperty_TypeName(const QMetaProperty* self);
int QMetaProperty_Type(const QMetaProperty* self);
int QMetaProperty_UserType(const QMetaProperty* self);
int QMetaProperty_PropertyIndex(const QMetaProperty* self);
int QMetaProperty_RelativePropertyIndex(const QMetaProperty* self);
bool QMetaProperty_IsReadable(const QMetaProperty* self);
bool QMetaProperty_IsWritable(const QMetaProperty* self);
bool QMetaProperty_IsResettable(const QMetaProperty* self);
bool QMetaProperty_IsDesignable(const QMetaProperty* self);
bool QMetaProperty_IsScriptable(const QMetaProperty* self);
bool QMetaProperty_IsStored(const QMetaProperty* self);
bool QMetaProperty_IsEditable(const QMetaProperty* self);
bool QMetaProperty_IsUser(const QMetaProperty* self);
bool QMetaProperty_IsConstant(const QMetaProperty* self);
bool QMetaProperty_IsFinal(const QMetaProperty* self);
bool QMetaProperty_IsRequired(const QMetaProperty* self);
bool QMetaProperty_IsFlagType(const QMetaProperty* self);
bool QMetaProperty_IsEnumType(const QMetaProperty* self);
QMetaEnum* QMetaProperty_Enumerator(const QMetaProperty* self);
bool QMetaProperty_HasNotifySignal(const QMetaProperty* self);
QMetaMethod* QMetaProperty_NotifySignal(const QMetaProperty* self);
int QMetaProperty_NotifySignalIndex(const QMetaProperty* self);
int QMetaProperty_Revision(const QMetaProperty* self);
QVariant* QMetaProperty_Read(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_Write(const QMetaProperty* self, QObject* obj, QVariant* value);
bool QMetaProperty_Reset(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_HasStdCppSet(const QMetaProperty* self);
bool QMetaProperty_IsValid(const QMetaProperty* self);
QMetaObject* QMetaProperty_EnclosingMetaObject(const QMetaProperty* self);
bool QMetaProperty_IsDesignable1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsScriptable1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsStored1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsEditable1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsUser1(const QMetaProperty* self, QObject* obj);
void QMetaProperty_Delete(QMetaProperty* self);

QMetaClassInfo* QMetaClassInfo_new();
const char* QMetaClassInfo_Name(const QMetaClassInfo* self);
const char* QMetaClassInfo_Value(const QMetaClassInfo* self);
QMetaObject* QMetaClassInfo_EnclosingMetaObject(const QMetaClassInfo* self);
void QMetaClassInfo_Delete(QMetaClassInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
