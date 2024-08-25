#ifndef GEN_QOBJECTDEFS_H
#define GEN_QOBJECTDEFS_H

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
#endif

QGenericArgument* QGenericArgument_new(QGenericArgument* param1);
char* QGenericArgument_Name(QGenericArgument* self);
void QGenericArgument_Delete(QGenericArgument* self);

QGenericReturnArgument* QGenericReturnArgument_new(QGenericReturnArgument* param1);
void QGenericReturnArgument_Delete(QGenericReturnArgument* self);

QMetaObject* QMetaObject_new();
QMetaObject* QMetaObject_new2(QMetaObject* param1);
char* QMetaObject_ClassName(QMetaObject* self);
QMetaObject* QMetaObject_SuperClass(QMetaObject* self);
bool QMetaObject_Inherits(QMetaObject* self, QMetaObject* metaObject);
QObject* QMetaObject_Cast(QMetaObject* self, QObject* obj);
QObject* QMetaObject_CastWithObj(QMetaObject* self, QObject* obj);
void QMetaObject_Tr(QMetaObject* self, char* s, char* c, char** _out, int* _out_Strlen);
int QMetaObject_MethodOffset(QMetaObject* self);
int QMetaObject_EnumeratorOffset(QMetaObject* self);
int QMetaObject_PropertyOffset(QMetaObject* self);
int QMetaObject_ClassInfoOffset(QMetaObject* self);
int QMetaObject_ConstructorCount(QMetaObject* self);
int QMetaObject_MethodCount(QMetaObject* self);
int QMetaObject_EnumeratorCount(QMetaObject* self);
int QMetaObject_PropertyCount(QMetaObject* self);
int QMetaObject_ClassInfoCount(QMetaObject* self);
int QMetaObject_IndexOfConstructor(QMetaObject* self, char* constructor);
int QMetaObject_IndexOfMethod(QMetaObject* self, char* method);
int QMetaObject_IndexOfSignal(QMetaObject* self, char* signal);
int QMetaObject_IndexOfSlot(QMetaObject* self, char* slot);
int QMetaObject_IndexOfEnumerator(QMetaObject* self, char* name);
int QMetaObject_IndexOfProperty(QMetaObject* self, char* name);
int QMetaObject_IndexOfClassInfo(QMetaObject* self, char* name);
QMetaMethod* QMetaObject_Constructor(QMetaObject* self, int index);
QMetaMethod* QMetaObject_Method(QMetaObject* self, int index);
QMetaEnum* QMetaObject_Enumerator(QMetaObject* self, int index);
QMetaProperty* QMetaObject_Property(QMetaObject* self, int index);
QMetaClassInfo* QMetaObject_ClassInfo(QMetaObject* self, int index);
QMetaProperty* QMetaObject_UserProperty(QMetaObject* self);
bool QMetaObject_CheckConnectArgs(char* signal, char* method);
bool QMetaObject_CheckConnectArgs2(QMetaMethod* signal, QMetaMethod* method);
QByteArray* QMetaObject_NormalizedSignature(char* method);
QByteArray* QMetaObject_NormalizedType(char* typeVal);
bool QMetaObject_Disconnect(QObject* sender, int signal_index, QObject* receiver, int method_index);
bool QMetaObject_DisconnectOne(QObject* sender, int signal_index, QObject* receiver, int method_index);
void QMetaObject_ConnectSlotsByName(QObject* o);
bool QMetaObject_InvokeMethod(QObject* obj, char* member, QGenericReturnArgument* retVal);
bool QMetaObject_InvokeMethod2(QObject* obj, char* member);
QObject* QMetaObject_NewInstance(QMetaObject* self);
void QMetaObject_Tr3(QMetaObject* self, char* s, char* c, int n, char** _out, int* _out_Strlen);
bool QMetaObject_InvokeMethod4(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0);
bool QMetaObject_InvokeMethod5(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_InvokeMethod6(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_InvokeMethod7(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_InvokeMethod8(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_InvokeMethod9(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_InvokeMethod10(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_InvokeMethod11(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_InvokeMethod12(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_InvokeMethod13(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaObject_InvokeMethod3(QObject* obj, char* member, QGenericArgument* val0);
bool QMetaObject_InvokeMethod42(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_InvokeMethod52(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_InvokeMethod62(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_InvokeMethod72(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_InvokeMethod82(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_InvokeMethod92(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_InvokeMethod102(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_InvokeMethod112(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_InvokeMethod122(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
QObject* QMetaObject_NewInstance1(QMetaObject* self, QGenericArgument* val0);
QObject* QMetaObject_NewInstance2(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1);
QObject* QMetaObject_NewInstance3(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
QObject* QMetaObject_NewInstance4(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
QObject* QMetaObject_NewInstance5(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
QObject* QMetaObject_NewInstance6(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
QObject* QMetaObject_NewInstance7(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
QObject* QMetaObject_NewInstance8(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
QObject* QMetaObject_NewInstance9(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
QObject* QMetaObject_NewInstance10(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
void QMetaObject_Delete(QMetaObject* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
