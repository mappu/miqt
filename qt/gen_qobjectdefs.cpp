#include <QByteArray>
#include <QGenericArgument>
#include <QGenericReturnArgument>
#include <QMetaClassInfo>
#include <QMetaEnum>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__SuperData
#include <QMetaProperty>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qobjectdefs.h"

#include "gen_qobjectdefs.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGenericArgument* QGenericArgument_new() {
	return new QGenericArgument();
}

QGenericArgument* QGenericArgument_new2(QGenericArgument* param1) {
	return new QGenericArgument(*param1);
}

QGenericArgument* QGenericArgument_new3(const char* aName) {
	return new QGenericArgument(aName);
}

const char* QGenericArgument_Name(QGenericArgument* self) {
	return (const char*) const_cast<const QGenericArgument*>(self)->name();
}

void QGenericArgument_Delete(QGenericArgument* self) {
	delete self;
}

QGenericReturnArgument* QGenericReturnArgument_new() {
	return new QGenericReturnArgument();
}

QGenericReturnArgument* QGenericReturnArgument_new2(QGenericReturnArgument* param1) {
	return new QGenericReturnArgument(*param1);
}

QGenericReturnArgument* QGenericReturnArgument_new3(const char* aName) {
	return new QGenericReturnArgument(aName);
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

const char* QMetaObject_ClassName(QMetaObject* self) {
	return (const char*) const_cast<const QMetaObject*>(self)->className();
}

QMetaObject* QMetaObject_SuperClass(QMetaObject* self) {
	return (QMetaObject*) const_cast<const QMetaObject*>(self)->superClass();
}

bool QMetaObject_Inherits(QMetaObject* self, QMetaObject* metaObject) {
	return const_cast<const QMetaObject*>(self)->inherits(metaObject);
}

QObject* QMetaObject_Cast(QMetaObject* self, QObject* obj) {
	return const_cast<const QMetaObject*>(self)->cast(obj);
}

QObject* QMetaObject_CastWithObj(QMetaObject* self, QObject* obj) {
	return (QObject*) const_cast<const QMetaObject*>(self)->cast(obj);
}

void QMetaObject_Tr(QMetaObject* self, const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMetaObject*>(self)->tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QMetaObject_MethodOffset(QMetaObject* self) {
	return const_cast<const QMetaObject*>(self)->methodOffset();
}

int QMetaObject_EnumeratorOffset(QMetaObject* self) {
	return const_cast<const QMetaObject*>(self)->enumeratorOffset();
}

int QMetaObject_PropertyOffset(QMetaObject* self) {
	return const_cast<const QMetaObject*>(self)->propertyOffset();
}

int QMetaObject_ClassInfoOffset(QMetaObject* self) {
	return const_cast<const QMetaObject*>(self)->classInfoOffset();
}

int QMetaObject_ConstructorCount(QMetaObject* self) {
	return const_cast<const QMetaObject*>(self)->constructorCount();
}

int QMetaObject_MethodCount(QMetaObject* self) {
	return const_cast<const QMetaObject*>(self)->methodCount();
}

int QMetaObject_EnumeratorCount(QMetaObject* self) {
	return const_cast<const QMetaObject*>(self)->enumeratorCount();
}

int QMetaObject_PropertyCount(QMetaObject* self) {
	return const_cast<const QMetaObject*>(self)->propertyCount();
}

int QMetaObject_ClassInfoCount(QMetaObject* self) {
	return const_cast<const QMetaObject*>(self)->classInfoCount();
}

int QMetaObject_IndexOfConstructor(QMetaObject* self, const char* constructor) {
	return const_cast<const QMetaObject*>(self)->indexOfConstructor(constructor);
}

int QMetaObject_IndexOfMethod(QMetaObject* self, const char* method) {
	return const_cast<const QMetaObject*>(self)->indexOfMethod(method);
}

int QMetaObject_IndexOfSignal(QMetaObject* self, const char* signal) {
	return const_cast<const QMetaObject*>(self)->indexOfSignal(signal);
}

int QMetaObject_IndexOfSlot(QMetaObject* self, const char* slot) {
	return const_cast<const QMetaObject*>(self)->indexOfSlot(slot);
}

int QMetaObject_IndexOfEnumerator(QMetaObject* self, const char* name) {
	return const_cast<const QMetaObject*>(self)->indexOfEnumerator(name);
}

int QMetaObject_IndexOfProperty(QMetaObject* self, const char* name) {
	return const_cast<const QMetaObject*>(self)->indexOfProperty(name);
}

int QMetaObject_IndexOfClassInfo(QMetaObject* self, const char* name) {
	return const_cast<const QMetaObject*>(self)->indexOfClassInfo(name);
}

QMetaMethod* QMetaObject_Constructor(QMetaObject* self, int index) {
	QMetaMethod ret = const_cast<const QMetaObject*>(self)->constructor(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaMethod*>(new QMetaMethod(ret));
}

QMetaMethod* QMetaObject_Method(QMetaObject* self, int index) {
	QMetaMethod ret = const_cast<const QMetaObject*>(self)->method(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaMethod*>(new QMetaMethod(ret));
}

QMetaEnum* QMetaObject_Enumerator(QMetaObject* self, int index) {
	QMetaEnum ret = const_cast<const QMetaObject*>(self)->enumerator(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaEnum*>(new QMetaEnum(ret));
}

QMetaProperty* QMetaObject_Property(QMetaObject* self, int index) {
	QMetaProperty ret = const_cast<const QMetaObject*>(self)->property(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaProperty*>(new QMetaProperty(ret));
}

QMetaClassInfo* QMetaObject_ClassInfo(QMetaObject* self, int index) {
	QMetaClassInfo ret = const_cast<const QMetaObject*>(self)->classInfo(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaClassInfo*>(new QMetaClassInfo(ret));
}

QMetaProperty* QMetaObject_UserProperty(QMetaObject* self) {
	QMetaProperty ret = const_cast<const QMetaObject*>(self)->userProperty();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaProperty*>(new QMetaProperty(ret));
}

bool QMetaObject_CheckConnectArgs(const char* signal, const char* method) {
	return QMetaObject::checkConnectArgs(signal, method);
}

bool QMetaObject_CheckConnectArgs2(QMetaMethod* signal, QMetaMethod* method) {
	return QMetaObject::checkConnectArgs(*signal, *method);
}

QByteArray* QMetaObject_NormalizedSignature(const char* method) {
	QByteArray ret = QMetaObject::normalizedSignature(method);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QMetaObject_NormalizedType(const char* typeVal) {
	QByteArray ret = QMetaObject::normalizedType(typeVal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QMetaObject__Connection* QMetaObject_Connect(QObject* sender, int signal_index, QObject* receiver, int method_index) {
	QMetaObject::Connection ret = QMetaObject::connect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaObject::Connection*>(new QMetaObject::Connection(ret));
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

bool QMetaObject_InvokeMethod(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal);
}

bool QMetaObject_InvokeMethod2(QObject* obj, const char* member, QGenericReturnArgument* retVal) {
	return QMetaObject::invokeMethod(obj, member, *retVal);
}

bool QMetaObject_InvokeMethod3(QObject* obj, const char* member, uintptr_t typeVal) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal));
}

bool QMetaObject_InvokeMethod4(QObject* obj, const char* member) {
	return QMetaObject::invokeMethod(obj, member);
}

QObject* QMetaObject_NewInstance(QMetaObject* self) {
	return const_cast<const QMetaObject*>(self)->newInstance();
}

void QMetaObject_Tr3(QMetaObject* self, const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMetaObject*>(self)->tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QMetaObject__Connection* QMetaObject_Connect5(QObject* sender, int signal_index, QObject* receiver, int method_index, int typeVal) {
	QMetaObject::Connection ret = QMetaObject::connect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index), static_cast<int>(typeVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaObject::Connection*>(new QMetaObject::Connection(ret));
}

QMetaObject__Connection* QMetaObject_Connect6(QObject* sender, int signal_index, QObject* receiver, int method_index, int typeVal, int* types) {
	QMetaObject::Connection ret = QMetaObject::connect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index), static_cast<int>(typeVal), static_cast<int*>(types));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaObject::Connection*>(new QMetaObject::Connection(ret));
}

bool QMetaObject_InvokeMethod5(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0);
}

bool QMetaObject_InvokeMethod6(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1);
}

bool QMetaObject_InvokeMethod7(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2);
}

bool QMetaObject_InvokeMethod8(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3);
}

bool QMetaObject_InvokeMethod9(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_InvokeMethod10(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_InvokeMethod11(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_InvokeMethod12(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_InvokeMethod13(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_InvokeMethod14(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaObject_InvokeMethod42(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0);
}

bool QMetaObject_InvokeMethod52(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1);
}

bool QMetaObject_InvokeMethod62(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2);
}

bool QMetaObject_InvokeMethod72(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3);
}

bool QMetaObject_InvokeMethod82(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_InvokeMethod92(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_InvokeMethod102(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_InvokeMethod112(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_InvokeMethod122(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_InvokeMethod132(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaObject_InvokeMethod43(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0);
}

bool QMetaObject_InvokeMethod53(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1);
}

bool QMetaObject_InvokeMethod63(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2);
}

bool QMetaObject_InvokeMethod73(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3);
}

bool QMetaObject_InvokeMethod83(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_InvokeMethod93(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_InvokeMethod103(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_InvokeMethod113(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_InvokeMethod123(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_InvokeMethod133(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaObject_InvokeMethod32(QObject* obj, const char* member, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, *val0);
}

bool QMetaObject_InvokeMethod44(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1);
}

bool QMetaObject_InvokeMethod54(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2);
}

bool QMetaObject_InvokeMethod64(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3);
}

bool QMetaObject_InvokeMethod74(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_InvokeMethod84(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_InvokeMethod94(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_InvokeMethod104(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_InvokeMethod114(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_InvokeMethod124(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

QObject* QMetaObject_NewInstance1(QMetaObject* self, QGenericArgument* val0) {
	return const_cast<const QMetaObject*>(self)->newInstance(*val0);
}

QObject* QMetaObject_NewInstance2(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1) {
	return const_cast<const QMetaObject*>(self)->newInstance(*val0, *val1);
}

QObject* QMetaObject_NewInstance3(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return const_cast<const QMetaObject*>(self)->newInstance(*val0, *val1, *val2);
}

QObject* QMetaObject_NewInstance4(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return const_cast<const QMetaObject*>(self)->newInstance(*val0, *val1, *val2, *val3);
}

QObject* QMetaObject_NewInstance5(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return const_cast<const QMetaObject*>(self)->newInstance(*val0, *val1, *val2, *val3, *val4);
}

QObject* QMetaObject_NewInstance6(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return const_cast<const QMetaObject*>(self)->newInstance(*val0, *val1, *val2, *val3, *val4, *val5);
}

QObject* QMetaObject_NewInstance7(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return const_cast<const QMetaObject*>(self)->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

QObject* QMetaObject_NewInstance8(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return const_cast<const QMetaObject*>(self)->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

QObject* QMetaObject_NewInstance9(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return const_cast<const QMetaObject*>(self)->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

QObject* QMetaObject_NewInstance10(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return const_cast<const QMetaObject*>(self)->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

void QMetaObject_Delete(QMetaObject* self) {
	delete self;
}

QMetaObject__Connection* QMetaObject__Connection_new() {
	return new QMetaObject::Connection();
}

QMetaObject__Connection* QMetaObject__Connection_new2(QMetaObject__Connection* other) {
	return new QMetaObject::Connection(*other);
}

void QMetaObject__Connection_Delete(QMetaObject__Connection* self) {
	delete self;
}

QMetaObject__SuperData* QMetaObject__SuperData_new() {
	return new QMetaObject::SuperData();
}

QMetaObject__SuperData* QMetaObject__SuperData_new2(QMetaObject* mo) {
	return new QMetaObject::SuperData(mo);
}

QMetaObject__SuperData* QMetaObject__SuperData_new3(QMetaObject__SuperData* param1) {
	return new QMetaObject::SuperData(*param1);
}

QMetaObject* QMetaObject__SuperData_OperatorMinusGreater(QMetaObject__SuperData* self) {
	return (QMetaObject*) const_cast<const QMetaObject::SuperData*>(self)->operator->();
}

void QMetaObject__SuperData_Delete(QMetaObject__SuperData* self) {
	delete self;
}

