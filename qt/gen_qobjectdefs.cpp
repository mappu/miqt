#include "gen_qobjectdefs.h"
#include "qobjectdefs.h"

#include <QByteArray>
#include <QGenericArgument>
#include <QGenericReturnArgument>
#include <QMetaClassInfo>
#include <QMetaEnum>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMetaProperty>
#include <QObject>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGenericArgument* QGenericArgument_new(QGenericArgument* param1) {
	return new QGenericArgument(*param1);
}

char* QGenericArgument_Name(QGenericArgument* self) {
	return (char*) self->name();
}

void QGenericArgument_Delete(QGenericArgument* self) {
	delete self;
}

QGenericReturnArgument* QGenericReturnArgument_new(QGenericReturnArgument* param1) {
	return new QGenericReturnArgument(*param1);
}

void QGenericReturnArgument_Delete(QGenericReturnArgument* self) {
	delete self;
}

QMetaObject* QMetaObject_new() {
	return new QMetaObject();
}

QMetaObject* QMetaObject_new2(QMetaObject* param1) {
	return new QMetaObject(*param1);
}

char* QMetaObject_ClassName(QMetaObject* self) {
	return (char*) self->className();
}

QMetaObject* QMetaObject_SuperClass(QMetaObject* self) {
	return (QMetaObject*) self->superClass();
}

bool QMetaObject_Inherits(QMetaObject* self, QMetaObject* metaObject) {
	return self->inherits(metaObject);
}

QObject* QMetaObject_Cast(QMetaObject* self, QObject* obj) {
	return self->cast(obj);
}

QObject* QMetaObject_CastWithObj(QMetaObject* self, QObject* obj) {
	return (QObject*) self->cast(obj);
}

void QMetaObject_Tr(QMetaObject* self, char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = self->tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QMetaObject_MethodOffset(QMetaObject* self) {
	return self->methodOffset();
}

int QMetaObject_EnumeratorOffset(QMetaObject* self) {
	return self->enumeratorOffset();
}

int QMetaObject_PropertyOffset(QMetaObject* self) {
	return self->propertyOffset();
}

int QMetaObject_ClassInfoOffset(QMetaObject* self) {
	return self->classInfoOffset();
}

int QMetaObject_ConstructorCount(QMetaObject* self) {
	return self->constructorCount();
}

int QMetaObject_MethodCount(QMetaObject* self) {
	return self->methodCount();
}

int QMetaObject_EnumeratorCount(QMetaObject* self) {
	return self->enumeratorCount();
}

int QMetaObject_PropertyCount(QMetaObject* self) {
	return self->propertyCount();
}

int QMetaObject_ClassInfoCount(QMetaObject* self) {
	return self->classInfoCount();
}

int QMetaObject_IndexOfConstructor(QMetaObject* self, char* constructor) {
	return self->indexOfConstructor(constructor);
}

int QMetaObject_IndexOfMethod(QMetaObject* self, char* method) {
	return self->indexOfMethod(method);
}

int QMetaObject_IndexOfSignal(QMetaObject* self, char* signal) {
	return self->indexOfSignal(signal);
}

int QMetaObject_IndexOfSlot(QMetaObject* self, char* slot) {
	return self->indexOfSlot(slot);
}

int QMetaObject_IndexOfEnumerator(QMetaObject* self, char* name) {
	return self->indexOfEnumerator(name);
}

int QMetaObject_IndexOfProperty(QMetaObject* self, char* name) {
	return self->indexOfProperty(name);
}

int QMetaObject_IndexOfClassInfo(QMetaObject* self, char* name) {
	return self->indexOfClassInfo(name);
}

QMetaMethod* QMetaObject_Constructor(QMetaObject* self, int index) {
	QMetaMethod ret = self->constructor(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaMethod*>(new QMetaMethod(ret));
}

QMetaMethod* QMetaObject_Method(QMetaObject* self, int index) {
	QMetaMethod ret = self->method(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaMethod*>(new QMetaMethod(ret));
}

QMetaEnum* QMetaObject_Enumerator(QMetaObject* self, int index) {
	QMetaEnum ret = self->enumerator(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaEnum*>(new QMetaEnum(ret));
}

QMetaProperty* QMetaObject_Property(QMetaObject* self, int index) {
	QMetaProperty ret = self->property(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaProperty*>(new QMetaProperty(ret));
}

QMetaClassInfo* QMetaObject_ClassInfo(QMetaObject* self, int index) {
	QMetaClassInfo ret = self->classInfo(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaClassInfo*>(new QMetaClassInfo(ret));
}

QMetaProperty* QMetaObject_UserProperty(QMetaObject* self) {
	QMetaProperty ret = self->userProperty();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaProperty*>(new QMetaProperty(ret));
}

bool QMetaObject_CheckConnectArgs(char* signal, char* method) {
	return QMetaObject::checkConnectArgs(signal, method);
}

bool QMetaObject_CheckConnectArgs2(QMetaMethod* signal, QMetaMethod* method) {
	return QMetaObject::checkConnectArgs(*signal, *method);
}

QByteArray* QMetaObject_NormalizedSignature(char* method) {
	QByteArray ret = QMetaObject::normalizedSignature(method);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QMetaObject_NormalizedType(char* typeVal) {
	QByteArray ret = QMetaObject::normalizedType(typeVal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

bool QMetaObject_Disconnect(QObject* sender, int signal_index, QObject* receiver, int method_index) {
	return QMetaObject::disconnect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index));
}

bool QMetaObject_DisconnectOne(QObject* sender, int signal_index, QObject* receiver, int method_index) {
	return QMetaObject::disconnectOne(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index));
}

void QMetaObject_ConnectSlotsByName(QObject* o) {
	QMetaObject::connectSlotsByName(o);
}

bool QMetaObject_InvokeMethod(QObject* obj, char* member, QGenericReturnArgument* retVal) {
	return QMetaObject::invokeMethod(obj, member, *retVal);
}

bool QMetaObject_InvokeMethod2(QObject* obj, char* member) {
	return QMetaObject::invokeMethod(obj, member);
}

QObject* QMetaObject_NewInstance(QMetaObject* self) {
	return self->newInstance();
}

void QMetaObject_Tr3(QMetaObject* self, char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = self->tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QMetaObject_InvokeMethod4(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0);
}

bool QMetaObject_InvokeMethod5(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1);
}

bool QMetaObject_InvokeMethod6(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2);
}

bool QMetaObject_InvokeMethod7(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3);
}

bool QMetaObject_InvokeMethod8(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_InvokeMethod9(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_InvokeMethod10(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_InvokeMethod11(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_InvokeMethod12(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_InvokeMethod13(QObject* obj, char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaObject_InvokeMethod3(QObject* obj, char* member, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, *val0);
}

bool QMetaObject_InvokeMethod42(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1);
}

bool QMetaObject_InvokeMethod52(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2);
}

bool QMetaObject_InvokeMethod62(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3);
}

bool QMetaObject_InvokeMethod72(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_InvokeMethod82(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_InvokeMethod92(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_InvokeMethod102(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_InvokeMethod112(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_InvokeMethod122(QObject* obj, char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

QObject* QMetaObject_NewInstance1(QMetaObject* self, QGenericArgument* val0) {
	return self->newInstance(*val0);
}

QObject* QMetaObject_NewInstance2(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1) {
	return self->newInstance(*val0, *val1);
}

QObject* QMetaObject_NewInstance3(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->newInstance(*val0, *val1, *val2);
}

QObject* QMetaObject_NewInstance4(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->newInstance(*val0, *val1, *val2, *val3);
}

QObject* QMetaObject_NewInstance5(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4);
}

QObject* QMetaObject_NewInstance6(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5);
}

QObject* QMetaObject_NewInstance7(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

QObject* QMetaObject_NewInstance8(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

QObject* QMetaObject_NewInstance9(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

QObject* QMetaObject_NewInstance10(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

void QMetaObject_Delete(QMetaObject* self) {
	delete self;
}

