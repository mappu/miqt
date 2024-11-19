#pragma once
#ifndef MIQT_QT_GEN_QMETAOBJECT_H
#define MIQT_QT_GEN_QMETAOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

void QMetaMethod_new(QMetaMethod** outptr_QMetaMethod);
void QMetaMethod_new2(QMetaMethod* param1, QMetaMethod** outptr_QMetaMethod);
struct miqt_string QMetaMethod_MethodSignature(const QMetaMethod* self);
struct miqt_string QMetaMethod_Name(const QMetaMethod* self);
const char* QMetaMethod_TypeName(const QMetaMethod* self);
int QMetaMethod_ReturnType(const QMetaMethod* self);
int QMetaMethod_ParameterCount(const QMetaMethod* self);
int QMetaMethod_ParameterType(const QMetaMethod* self, int index);
void QMetaMethod_GetParameterTypes(const QMetaMethod* self, int* types);
struct miqt_array /* of struct miqt_string */  QMetaMethod_ParameterTypes(const QMetaMethod* self);
struct miqt_array /* of struct miqt_string */  QMetaMethod_ParameterNames(const QMetaMethod* self);
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
bool QMetaMethod_InvokeOnGadget(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue);
bool QMetaMethod_InvokeOnGadgetWithGadget(const QMetaMethod* self, void* gadget);
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
bool QMetaMethod_InvokeOnGadget3(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0);
bool QMetaMethod_InvokeOnGadget4(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_InvokeOnGadget5(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_InvokeOnGadget6(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_InvokeOnGadget7(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_InvokeOnGadget8(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_InvokeOnGadget9(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_InvokeOnGadget10(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_InvokeOnGadget11(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_InvokeOnGadget12(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_InvokeOnGadget2(const QMetaMethod* self, void* gadget, QGenericArgument* val0);
bool QMetaMethod_InvokeOnGadget32(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_InvokeOnGadget42(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_InvokeOnGadget52(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_InvokeOnGadget62(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_InvokeOnGadget72(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_InvokeOnGadget82(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_InvokeOnGadget92(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_InvokeOnGadget102(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_InvokeOnGadget112(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
void QMetaMethod_Delete(QMetaMethod* self, bool isSubclass);

void QMetaEnum_new(QMetaEnum** outptr_QMetaEnum);
void QMetaEnum_new2(QMetaEnum* param1, QMetaEnum** outptr_QMetaEnum);
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
struct miqt_string QMetaEnum_ValueToKeys(const QMetaEnum* self, int value);
QMetaObject* QMetaEnum_EnclosingMetaObject(const QMetaEnum* self);
bool QMetaEnum_IsValid(const QMetaEnum* self);
int QMetaEnum_KeyToValue2(const QMetaEnum* self, const char* key, bool* ok);
int QMetaEnum_KeysToValue2(const QMetaEnum* self, const char* keys, bool* ok);
void QMetaEnum_Delete(QMetaEnum* self, bool isSubclass);

void QMetaProperty_new(QMetaProperty** outptr_QMetaProperty);
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
QVariant* QMetaProperty_ReadOnGadget(const QMetaProperty* self, const void* gadget);
bool QMetaProperty_WriteOnGadget(const QMetaProperty* self, void* gadget, QVariant* value);
bool QMetaProperty_ResetOnGadget(const QMetaProperty* self, void* gadget);
bool QMetaProperty_HasStdCppSet(const QMetaProperty* self);
bool QMetaProperty_IsValid(const QMetaProperty* self);
QMetaObject* QMetaProperty_EnclosingMetaObject(const QMetaProperty* self);
bool QMetaProperty_IsDesignable1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsScriptable1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsStored1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsEditable1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_IsUser1(const QMetaProperty* self, QObject* obj);
void QMetaProperty_Delete(QMetaProperty* self, bool isSubclass);

void QMetaClassInfo_new(QMetaClassInfo** outptr_QMetaClassInfo);
const char* QMetaClassInfo_Name(const QMetaClassInfo* self);
const char* QMetaClassInfo_Value(const QMetaClassInfo* self);
QMetaObject* QMetaClassInfo_EnclosingMetaObject(const QMetaClassInfo* self);
void QMetaClassInfo_Delete(QMetaClassInfo* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
