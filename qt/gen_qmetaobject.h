#ifndef GEN_QMETAOBJECT_H
#define GEN_QMETAOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QByteArray* QMetaMethod_MethodSignature(QMetaMethod* self);
QByteArray* QMetaMethod_Name(QMetaMethod* self);
const char* QMetaMethod_TypeName(QMetaMethod* self);
int QMetaMethod_ReturnType(QMetaMethod* self);
int QMetaMethod_ParameterCount(QMetaMethod* self);
int QMetaMethod_ParameterType(QMetaMethod* self, int index);
void QMetaMethod_GetParameterTypes(QMetaMethod* self, int* types);
void QMetaMethod_ParameterTypes(QMetaMethod* self, QByteArray*** _out, size_t* _out_len);
void QMetaMethod_ParameterNames(QMetaMethod* self, QByteArray*** _out, size_t* _out_len);
const char* QMetaMethod_Tag(QMetaMethod* self);
uintptr_t QMetaMethod_Access(QMetaMethod* self);
uintptr_t QMetaMethod_MethodType(QMetaMethod* self);
int QMetaMethod_Attributes(QMetaMethod* self);
int QMetaMethod_MethodIndex(QMetaMethod* self);
int QMetaMethod_Revision(QMetaMethod* self);
QMetaObject* QMetaMethod_EnclosingMetaObject(QMetaMethod* self);
bool QMetaMethod_Invoke(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue);
bool QMetaMethod_Invoke2(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue);
bool QMetaMethod_Invoke3(QMetaMethod* self, QObject* object, uintptr_t connectionType);
bool QMetaMethod_InvokeWithObject(QMetaMethod* self, QObject* object);
bool QMetaMethod_IsValid(QMetaMethod* self);
bool QMetaMethod_Invoke4(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0);
bool QMetaMethod_Invoke5(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_Invoke6(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_Invoke7(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_Invoke8(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_Invoke9(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_Invoke10(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_Invoke11(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_Invoke12(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_Invoke13(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_Invoke32(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0);
bool QMetaMethod_Invoke42(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_Invoke52(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_Invoke62(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_Invoke72(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_Invoke82(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_Invoke92(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_Invoke102(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_Invoke112(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_Invoke122(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_Invoke33(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0);
bool QMetaMethod_Invoke43(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_Invoke53(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_Invoke63(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_Invoke73(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_Invoke83(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_Invoke93(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_Invoke103(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_Invoke113(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_Invoke123(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_Invoke22(QMetaMethod* self, QObject* object, QGenericArgument* val0);
bool QMetaMethod_Invoke34(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_Invoke44(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_Invoke54(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_Invoke64(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_Invoke74(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_Invoke84(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_Invoke94(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_Invoke104(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_Invoke114(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
void QMetaMethod_Delete(QMetaMethod* self);

QMetaEnum* QMetaEnum_new();
QMetaEnum* QMetaEnum_new2(QMetaEnum* param1);
const char* QMetaEnum_Name(QMetaEnum* self);
const char* QMetaEnum_EnumName(QMetaEnum* self);
bool QMetaEnum_IsFlag(QMetaEnum* self);
bool QMetaEnum_IsScoped(QMetaEnum* self);
int QMetaEnum_KeyCount(QMetaEnum* self);
const char* QMetaEnum_Key(QMetaEnum* self, int index);
int QMetaEnum_Value(QMetaEnum* self, int index);
const char* QMetaEnum_Scope(QMetaEnum* self);
int QMetaEnum_KeyToValue(QMetaEnum* self, const char* key);
const char* QMetaEnum_ValueToKey(QMetaEnum* self, int value);
int QMetaEnum_KeysToValue(QMetaEnum* self, const char* keys);
QByteArray* QMetaEnum_ValueToKeys(QMetaEnum* self, int value);
QMetaObject* QMetaEnum_EnclosingMetaObject(QMetaEnum* self);
bool QMetaEnum_IsValid(QMetaEnum* self);
int QMetaEnum_KeyToValue2(QMetaEnum* self, const char* key, bool* ok);
int QMetaEnum_KeysToValue2(QMetaEnum* self, const char* keys, bool* ok);
void QMetaEnum_Delete(QMetaEnum* self);

QMetaProperty* QMetaProperty_new();
const char* QMetaProperty_Name(QMetaProperty* self);
const char* QMetaProperty_TypeName(QMetaProperty* self);
uintptr_t QMetaProperty_Type(QMetaProperty* self);
int QMetaProperty_UserType(QMetaProperty* self);
int QMetaProperty_PropertyIndex(QMetaProperty* self);
int QMetaProperty_RelativePropertyIndex(QMetaProperty* self);
bool QMetaProperty_IsReadable(QMetaProperty* self);
bool QMetaProperty_IsWritable(QMetaProperty* self);
bool QMetaProperty_IsResettable(QMetaProperty* self);
bool QMetaProperty_IsDesignable(QMetaProperty* self);
bool QMetaProperty_IsScriptable(QMetaProperty* self);
bool QMetaProperty_IsStored(QMetaProperty* self);
bool QMetaProperty_IsEditable(QMetaProperty* self);
bool QMetaProperty_IsUser(QMetaProperty* self);
bool QMetaProperty_IsConstant(QMetaProperty* self);
bool QMetaProperty_IsFinal(QMetaProperty* self);
bool QMetaProperty_IsRequired(QMetaProperty* self);
bool QMetaProperty_IsFlagType(QMetaProperty* self);
bool QMetaProperty_IsEnumType(QMetaProperty* self);
QMetaEnum* QMetaProperty_Enumerator(QMetaProperty* self);
bool QMetaProperty_HasNotifySignal(QMetaProperty* self);
QMetaMethod* QMetaProperty_NotifySignal(QMetaProperty* self);
int QMetaProperty_NotifySignalIndex(QMetaProperty* self);
int QMetaProperty_Revision(QMetaProperty* self);
QVariant* QMetaProperty_Read(QMetaProperty* self, QObject* obj);
bool QMetaProperty_Write(QMetaProperty* self, QObject* obj, QVariant* value);
bool QMetaProperty_Reset(QMetaProperty* self, QObject* obj);
bool QMetaProperty_HasStdCppSet(QMetaProperty* self);
bool QMetaProperty_IsValid(QMetaProperty* self);
QMetaObject* QMetaProperty_EnclosingMetaObject(QMetaProperty* self);
bool QMetaProperty_IsDesignable1(QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsScriptable1(QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsStored1(QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsEditable1(QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsUser1(QMetaProperty* self, QObject* obj);
void QMetaProperty_Delete(QMetaProperty* self);

QMetaClassInfo* QMetaClassInfo_new();
const char* QMetaClassInfo_Name(QMetaClassInfo* self);
const char* QMetaClassInfo_Value(QMetaClassInfo* self);
QMetaObject* QMetaClassInfo_EnclosingMetaObject(QMetaClassInfo* self);
void QMetaClassInfo_Delete(QMetaClassInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
