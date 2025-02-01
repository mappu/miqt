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
struct miqt_string QMetaMethod_methodSignature(const QMetaMethod* self);
struct miqt_string QMetaMethod_name(const QMetaMethod* self);
const char* QMetaMethod_typeName(const QMetaMethod* self);
int QMetaMethod_returnType(const QMetaMethod* self);
int QMetaMethod_parameterCount(const QMetaMethod* self);
int QMetaMethod_parameterType(const QMetaMethod* self, int index);
void QMetaMethod_getParameterTypes(const QMetaMethod* self, int* types);
struct miqt_array /* of struct miqt_string */  QMetaMethod_parameterTypes(const QMetaMethod* self);
struct miqt_array /* of struct miqt_string */  QMetaMethod_parameterNames(const QMetaMethod* self);
const char* QMetaMethod_tag(const QMetaMethod* self);
int QMetaMethod_access(const QMetaMethod* self);
int QMetaMethod_methodType(const QMetaMethod* self);
int QMetaMethod_attributes(const QMetaMethod* self);
int QMetaMethod_methodIndex(const QMetaMethod* self);
int QMetaMethod_revision(const QMetaMethod* self);
QMetaObject* QMetaMethod_enclosingMetaObject(const QMetaMethod* self);
bool QMetaMethod_invoke(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue);
bool QMetaMethod_invoke2(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue);
bool QMetaMethod_invoke3(const QMetaMethod* self, QObject* object, int connectionType);
bool QMetaMethod_invokeWithObject(const QMetaMethod* self, QObject* object);
bool QMetaMethod_invokeOnGadget(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue);
bool QMetaMethod_invokeOnGadgetWithGadget(const QMetaMethod* self, void* gadget);
bool QMetaMethod_isValid(const QMetaMethod* self);
bool QMetaMethod_invoke4(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0);
bool QMetaMethod_invoke5(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_invoke6(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_invoke7(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_invoke8(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_invoke9(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_invoke10(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_invoke11(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_invoke12(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_invoke13(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_invoke32(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0);
bool QMetaMethod_invoke42(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_invoke52(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_invoke62(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_invoke72(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_invoke82(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_invoke92(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_invoke102(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_invoke112(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_invoke122(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_invoke33(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0);
bool QMetaMethod_invoke43(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_invoke53(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_invoke63(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_invoke73(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_invoke83(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_invoke93(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_invoke103(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_invoke113(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_invoke123(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_invoke22(const QMetaMethod* self, QObject* object, QGenericArgument* val0);
bool QMetaMethod_invoke34(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_invoke44(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_invoke54(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_invoke64(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_invoke74(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_invoke84(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_invoke94(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_invoke104(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_invoke114(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_invokeOnGadget3(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0);
bool QMetaMethod_invokeOnGadget4(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_invokeOnGadget5(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_invokeOnGadget6(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_invokeOnGadget7(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_invokeOnGadget8(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_invokeOnGadget9(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_invokeOnGadget10(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_invokeOnGadget11(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_invokeOnGadget12(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaMethod_invokeOnGadget2(const QMetaMethod* self, void* gadget, QGenericArgument* val0);
bool QMetaMethod_invokeOnGadget32(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaMethod_invokeOnGadget42(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaMethod_invokeOnGadget52(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaMethod_invokeOnGadget62(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaMethod_invokeOnGadget72(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaMethod_invokeOnGadget82(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaMethod_invokeOnGadget92(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaMethod_invokeOnGadget102(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaMethod_invokeOnGadget112(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
void QMetaMethod_delete(QMetaMethod* self);

QMetaEnum* QMetaEnum_new();
QMetaEnum* QMetaEnum_new2(QMetaEnum* param1);
const char* QMetaEnum_name(const QMetaEnum* self);
const char* QMetaEnum_enumName(const QMetaEnum* self);
bool QMetaEnum_isFlag(const QMetaEnum* self);
bool QMetaEnum_isScoped(const QMetaEnum* self);
int QMetaEnum_keyCount(const QMetaEnum* self);
const char* QMetaEnum_key(const QMetaEnum* self, int index);
int QMetaEnum_value(const QMetaEnum* self, int index);
const char* QMetaEnum_scope(const QMetaEnum* self);
int QMetaEnum_keyToValue(const QMetaEnum* self, const char* key);
const char* QMetaEnum_valueToKey(const QMetaEnum* self, int value);
int QMetaEnum_keysToValue(const QMetaEnum* self, const char* keys);
struct miqt_string QMetaEnum_valueToKeys(const QMetaEnum* self, int value);
QMetaObject* QMetaEnum_enclosingMetaObject(const QMetaEnum* self);
bool QMetaEnum_isValid(const QMetaEnum* self);
int QMetaEnum_keyToValue2(const QMetaEnum* self, const char* key, bool* ok);
int QMetaEnum_keysToValue2(const QMetaEnum* self, const char* keys, bool* ok);
void QMetaEnum_delete(QMetaEnum* self);

QMetaProperty* QMetaProperty_new();
const char* QMetaProperty_name(const QMetaProperty* self);
const char* QMetaProperty_typeName(const QMetaProperty* self);
int QMetaProperty_type(const QMetaProperty* self);
int QMetaProperty_userType(const QMetaProperty* self);
int QMetaProperty_propertyIndex(const QMetaProperty* self);
int QMetaProperty_relativePropertyIndex(const QMetaProperty* self);
bool QMetaProperty_isReadable(const QMetaProperty* self);
bool QMetaProperty_isWritable(const QMetaProperty* self);
bool QMetaProperty_isResettable(const QMetaProperty* self);
bool QMetaProperty_isDesignable(const QMetaProperty* self);
bool QMetaProperty_isScriptable(const QMetaProperty* self);
bool QMetaProperty_isStored(const QMetaProperty* self);
bool QMetaProperty_isEditable(const QMetaProperty* self);
bool QMetaProperty_isUser(const QMetaProperty* self);
bool QMetaProperty_isConstant(const QMetaProperty* self);
bool QMetaProperty_isFinal(const QMetaProperty* self);
bool QMetaProperty_isRequired(const QMetaProperty* self);
bool QMetaProperty_isFlagType(const QMetaProperty* self);
bool QMetaProperty_isEnumType(const QMetaProperty* self);
QMetaEnum* QMetaProperty_enumerator(const QMetaProperty* self);
bool QMetaProperty_hasNotifySignal(const QMetaProperty* self);
QMetaMethod* QMetaProperty_notifySignal(const QMetaProperty* self);
int QMetaProperty_notifySignalIndex(const QMetaProperty* self);
int QMetaProperty_revision(const QMetaProperty* self);
QVariant* QMetaProperty_read(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_write(const QMetaProperty* self, QObject* obj, QVariant* value);
bool QMetaProperty_reset(const QMetaProperty* self, QObject* obj);
QVariant* QMetaProperty_readOnGadget(const QMetaProperty* self, const void* gadget);
bool QMetaProperty_writeOnGadget(const QMetaProperty* self, void* gadget, QVariant* value);
bool QMetaProperty_resetOnGadget(const QMetaProperty* self, void* gadget);
bool QMetaProperty_hasStdCppSet(const QMetaProperty* self);
bool QMetaProperty_isValid(const QMetaProperty* self);
QMetaObject* QMetaProperty_enclosingMetaObject(const QMetaProperty* self);
bool QMetaProperty_isDesignable1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_isScriptable1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_isStored1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_isEditable1(const QMetaProperty* self, QObject* obj);
bool QMetaProperty_isUser1(const QMetaProperty* self, QObject* obj);
void QMetaProperty_delete(QMetaProperty* self);

QMetaClassInfo* QMetaClassInfo_new();
const char* QMetaClassInfo_name(const QMetaClassInfo* self);
const char* QMetaClassInfo_value(const QMetaClassInfo* self);
QMetaObject* QMetaClassInfo_enclosingMetaObject(const QMetaClassInfo* self);
void QMetaClassInfo_delete(QMetaClassInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
