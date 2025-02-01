#pragma once
#ifndef MIQT_QT6_GEN_QOBJECTDEFS_H
#define MIQT_QT6_GEN_QOBJECTDEFS_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#else
class QMetaObject__Connection;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Data)
typedef QMetaObject::Data QMetaObject__Data;
#else
class QMetaObject__Data;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__SuperData)
typedef QMetaObject::SuperData QMetaObject__SuperData;
#else
class QMetaObject__SuperData;
#endif
class QMetaProperty;
class QMetaType;
class QMethodRawArguments;
class QObject;
#else
typedef struct QGenericArgument QGenericArgument;
typedef struct QGenericReturnArgument QGenericReturnArgument;
typedef struct QMetaClassInfo QMetaClassInfo;
typedef struct QMetaEnum QMetaEnum;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMetaObject__Data QMetaObject__Data;
typedef struct QMetaObject__SuperData QMetaObject__SuperData;
typedef struct QMetaProperty QMetaProperty;
typedef struct QMetaType QMetaType;
typedef struct QMethodRawArguments QMethodRawArguments;
typedef struct QObject QObject;
#endif

void QMethodRawArguments_delete(QMethodRawArguments* self);

QGenericArgument* QGenericArgument_new();
QGenericArgument* QGenericArgument_new2(QGenericArgument* param1);
QGenericArgument* QGenericArgument_new3(const char* aName);
QGenericArgument* QGenericArgument_new4(const char* aName, const void* aData);
void* QGenericArgument_data(const QGenericArgument* self);
const char* QGenericArgument_name(const QGenericArgument* self);
void QGenericArgument_delete(QGenericArgument* self);

QGenericReturnArgument* QGenericReturnArgument_new();
QGenericReturnArgument* QGenericReturnArgument_new2(QGenericReturnArgument* param1);
QGenericReturnArgument* QGenericReturnArgument_new3(const char* aName);
QGenericReturnArgument* QGenericReturnArgument_new4(const char* aName, void* aData);
void QGenericReturnArgument_virtbase(QGenericReturnArgument* src, QGenericArgument** outptr_QGenericArgument);
void QGenericReturnArgument_delete(QGenericReturnArgument* self);

QMetaObject* QMetaObject_new();
QMetaObject* QMetaObject_new2(QMetaObject* param1);
const char* QMetaObject_className(const QMetaObject* self);
QMetaObject* QMetaObject_superClass(const QMetaObject* self);
bool QMetaObject_inherits(const QMetaObject* self, QMetaObject* metaObject);
QObject* QMetaObject_cast(const QMetaObject* self, QObject* obj);
QObject* QMetaObject_castWithObj(const QMetaObject* self, QObject* obj);
struct miqt_string QMetaObject_tr(const QMetaObject* self, const char* s, const char* c);
QMetaType* QMetaObject_metaType(const QMetaObject* self);
int QMetaObject_methodOffset(const QMetaObject* self);
int QMetaObject_enumeratorOffset(const QMetaObject* self);
int QMetaObject_propertyOffset(const QMetaObject* self);
int QMetaObject_classInfoOffset(const QMetaObject* self);
int QMetaObject_constructorCount(const QMetaObject* self);
int QMetaObject_methodCount(const QMetaObject* self);
int QMetaObject_enumeratorCount(const QMetaObject* self);
int QMetaObject_propertyCount(const QMetaObject* self);
int QMetaObject_classInfoCount(const QMetaObject* self);
int QMetaObject_indexOfConstructor(const QMetaObject* self, const char* constructor);
int QMetaObject_indexOfMethod(const QMetaObject* self, const char* method);
int QMetaObject_indexOfSignal(const QMetaObject* self, const char* signal);
int QMetaObject_indexOfSlot(const QMetaObject* self, const char* slot);
int QMetaObject_indexOfEnumerator(const QMetaObject* self, const char* name);
int QMetaObject_indexOfProperty(const QMetaObject* self, const char* name);
int QMetaObject_indexOfClassInfo(const QMetaObject* self, const char* name);
QMetaMethod* QMetaObject_constructor(const QMetaObject* self, int index);
QMetaMethod* QMetaObject_method(const QMetaObject* self, int index);
QMetaEnum* QMetaObject_enumerator(const QMetaObject* self, int index);
QMetaProperty* QMetaObject_property(const QMetaObject* self, int index);
QMetaClassInfo* QMetaObject_classInfo(const QMetaObject* self, int index);
QMetaProperty* QMetaObject_userProperty(const QMetaObject* self);
bool QMetaObject_checkConnectArgs(const char* signal, const char* method);
bool QMetaObject_checkConnectArgs2(QMetaMethod* signal, QMetaMethod* method);
struct miqt_string QMetaObject_normalizedSignature(const char* method);
struct miqt_string QMetaObject_normalizedType(const char* type);
QMetaObject__Connection* QMetaObject_connect(QObject* sender, int signal_index, QObject* receiver, int method_index);
bool QMetaObject_disconnect(QObject* sender, int signal_index, QObject* receiver, int method_index);
bool QMetaObject_disconnectOne(QObject* sender, int signal_index, QObject* receiver, int method_index);
void QMetaObject_connectSlotsByName(QObject* o);
bool QMetaObject_invokeMethod(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret);
bool QMetaObject_invokeMethod2(QObject* obj, const char* member, QGenericReturnArgument* ret);
bool QMetaObject_invokeMethod3(QObject* obj, const char* member, int type);
bool QMetaObject_invokeMethod4(QObject* obj, const char* member);
QObject* QMetaObject_newInstance(const QMetaObject* self);
struct miqt_string QMetaObject_tr3(const QMetaObject* self, const char* s, const char* c, int n);
QMetaObject__Connection* QMetaObject_connect5(QObject* sender, int signal_index, QObject* receiver, int method_index, int type);
QMetaObject__Connection* QMetaObject_connect6(QObject* sender, int signal_index, QObject* receiver, int method_index, int type, int* types);
bool QMetaObject_invokeMethod5(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0);
bool QMetaObject_invokeMethod6(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_invokeMethod7(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_invokeMethod8(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_invokeMethod9(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_invokeMethod10(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_invokeMethod11(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_invokeMethod12(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_invokeMethod13(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_invokeMethod14(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaObject_invokeMethod42(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0);
bool QMetaObject_invokeMethod52(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_invokeMethod62(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_invokeMethod72(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_invokeMethod82(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_invokeMethod92(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_invokeMethod102(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_invokeMethod112(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_invokeMethod122(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_invokeMethod132(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaObject_invokeMethod43(QObject* obj, const char* member, int type, QGenericArgument* val0);
bool QMetaObject_invokeMethod53(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_invokeMethod63(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_invokeMethod73(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_invokeMethod83(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_invokeMethod93(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_invokeMethod103(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_invokeMethod113(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_invokeMethod123(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_invokeMethod133(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaObject_invokeMethod32(QObject* obj, const char* member, QGenericArgument* val0);
bool QMetaObject_invokeMethod44(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_invokeMethod54(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_invokeMethod64(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_invokeMethod74(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_invokeMethod84(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_invokeMethod94(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_invokeMethod104(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_invokeMethod114(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_invokeMethod124(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
QObject* QMetaObject_newInstance1(const QMetaObject* self, QGenericArgument* val0);
QObject* QMetaObject_newInstance2(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1);
QObject* QMetaObject_newInstance3(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
QObject* QMetaObject_newInstance4(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
QObject* QMetaObject_newInstance5(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
QObject* QMetaObject_newInstance6(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
QObject* QMetaObject_newInstance7(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
QObject* QMetaObject_newInstance8(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
QObject* QMetaObject_newInstance9(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
QObject* QMetaObject_newInstance10(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
void QMetaObject_delete(QMetaObject* self);

QMetaObject__Connection* QMetaObject__Connection_new();
QMetaObject__Connection* QMetaObject__Connection_new2(QMetaObject__Connection* other);
void QMetaObject__Connection_operatorAssign(QMetaObject__Connection* self, QMetaObject__Connection* other);
void QMetaObject__Connection_swap(QMetaObject__Connection* self, QMetaObject__Connection* other);
void QMetaObject__Connection_delete(QMetaObject__Connection* self);

QMetaObject__SuperData* QMetaObject__SuperData_new();
QMetaObject__SuperData* QMetaObject__SuperData_new2(QMetaObject* mo);
QMetaObject__SuperData* QMetaObject__SuperData_new3(QMetaObject__SuperData* param1);
QMetaObject* QMetaObject__SuperData_operatorMinusGreater(const QMetaObject__SuperData* self);
QMetaObject* QMetaObject__SuperData_ToConstQMetaObjectMultiply(const QMetaObject__SuperData* self);
void QMetaObject__SuperData_operatorAssign(QMetaObject__SuperData* self, QMetaObject__SuperData* param1);
void QMetaObject__SuperData_delete(QMetaObject__SuperData* self);

QMetaObject__Data* QMetaObject__Data_new();
QMetaObject__Data* QMetaObject__Data_new2(QMetaObject__Data* param1);
void QMetaObject__Data_operatorAssign(QMetaObject__Data* self, QMetaObject__Data* param1);
void QMetaObject__Data_delete(QMetaObject__Data* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
