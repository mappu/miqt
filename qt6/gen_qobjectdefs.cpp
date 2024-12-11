#include <QByteArray>
#include <QGenericArgument>
#include <QGenericReturnArgument>
#include <QMetaClassInfo>
#include <QMetaEnum>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Data
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__SuperData
#include <QMetaProperty>
#include <QMetaType>
#include <QMethodRawArguments>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qobjectdefs.h>
#include "gen_qobjectdefs.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void QMethodRawArguments_Delete(QMethodRawArguments* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMethodRawArguments*>( self );
	} else {
		delete self;
	}
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

QGenericArgument* QGenericArgument_new4(const char* aName, const void* aData) {
	return new QGenericArgument(aName, aData);
}

void* QGenericArgument_Data(const QGenericArgument* self) {
	return self->data();
}

const char* QGenericArgument_Name(const QGenericArgument* self) {
	return (const char*) self->name();
}

void QGenericArgument_Delete(QGenericArgument* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QGenericArgument*>( self );
	} else {
		delete self;
	}
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

QGenericReturnArgument* QGenericReturnArgument_new4(const char* aName, void* aData) {
	return new QGenericReturnArgument(aName, aData);
}

void QGenericReturnArgument_virtbase(QGenericReturnArgument* src, QGenericArgument** outptr_QGenericArgument) {
	*outptr_QGenericArgument = static_cast<QGenericArgument*>(src);
}

void QGenericReturnArgument_Delete(QGenericReturnArgument* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QGenericReturnArgument*>( self );
	} else {
		delete self;
	}
}

QMetaObject* QMetaObject_new() {
	return new QMetaObject();
}

QMetaObject* QMetaObject_new2(QMetaObject* param1) {
	return new QMetaObject(*param1);
}

const char* QMetaObject_ClassName(const QMetaObject* self) {
	return (const char*) self->className();
}

QMetaObject* QMetaObject_SuperClass(const QMetaObject* self) {
	return (QMetaObject*) self->superClass();
}

bool QMetaObject_Inherits(const QMetaObject* self, QMetaObject* metaObject) {
	return self->inherits(metaObject);
}

QObject* QMetaObject_Cast(const QMetaObject* self, QObject* obj) {
	return self->cast(obj);
}

QObject* QMetaObject_CastWithObj(const QMetaObject* self, QObject* obj) {
	return (QObject*) self->cast(obj);
}

struct miqt_string QMetaObject_Tr(const QMetaObject* self, const char* s, const char* c) {
	QString _ret = self->tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMetaType* QMetaObject_MetaType(const QMetaObject* self) {
	return new QMetaType(self->metaType());
}

int QMetaObject_MethodOffset(const QMetaObject* self) {
	return self->methodOffset();
}

int QMetaObject_EnumeratorOffset(const QMetaObject* self) {
	return self->enumeratorOffset();
}

int QMetaObject_PropertyOffset(const QMetaObject* self) {
	return self->propertyOffset();
}

int QMetaObject_ClassInfoOffset(const QMetaObject* self) {
	return self->classInfoOffset();
}

int QMetaObject_ConstructorCount(const QMetaObject* self) {
	return self->constructorCount();
}

int QMetaObject_MethodCount(const QMetaObject* self) {
	return self->methodCount();
}

int QMetaObject_EnumeratorCount(const QMetaObject* self) {
	return self->enumeratorCount();
}

int QMetaObject_PropertyCount(const QMetaObject* self) {
	return self->propertyCount();
}

int QMetaObject_ClassInfoCount(const QMetaObject* self) {
	return self->classInfoCount();
}

int QMetaObject_IndexOfConstructor(const QMetaObject* self, const char* constructor) {
	return self->indexOfConstructor(constructor);
}

int QMetaObject_IndexOfMethod(const QMetaObject* self, const char* method) {
	return self->indexOfMethod(method);
}

int QMetaObject_IndexOfSignal(const QMetaObject* self, const char* signal) {
	return self->indexOfSignal(signal);
}

int QMetaObject_IndexOfSlot(const QMetaObject* self, const char* slot) {
	return self->indexOfSlot(slot);
}

int QMetaObject_IndexOfEnumerator(const QMetaObject* self, const char* name) {
	return self->indexOfEnumerator(name);
}

int QMetaObject_IndexOfProperty(const QMetaObject* self, const char* name) {
	return self->indexOfProperty(name);
}

int QMetaObject_IndexOfClassInfo(const QMetaObject* self, const char* name) {
	return self->indexOfClassInfo(name);
}

QMetaMethod* QMetaObject_Constructor(const QMetaObject* self, int index) {
	return new QMetaMethod(self->constructor(static_cast<int>(index)));
}

QMetaMethod* QMetaObject_Method(const QMetaObject* self, int index) {
	return new QMetaMethod(self->method(static_cast<int>(index)));
}

QMetaEnum* QMetaObject_Enumerator(const QMetaObject* self, int index) {
	return new QMetaEnum(self->enumerator(static_cast<int>(index)));
}

QMetaProperty* QMetaObject_Property(const QMetaObject* self, int index) {
	return new QMetaProperty(self->property(static_cast<int>(index)));
}

QMetaClassInfo* QMetaObject_ClassInfo(const QMetaObject* self, int index) {
	return new QMetaClassInfo(self->classInfo(static_cast<int>(index)));
}

QMetaProperty* QMetaObject_UserProperty(const QMetaObject* self) {
	return new QMetaProperty(self->userProperty());
}

bool QMetaObject_CheckConnectArgs(const char* signal, const char* method) {
	return QMetaObject::checkConnectArgs(signal, method);
}

bool QMetaObject_CheckConnectArgs2(QMetaMethod* signal, QMetaMethod* method) {
	return QMetaObject::checkConnectArgs(*signal, *method);
}

struct miqt_string QMetaObject_NormalizedSignature(const char* method) {
	QByteArray _qb = QMetaObject::normalizedSignature(method);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaObject_NormalizedType(const char* typeVal) {
	QByteArray _qb = QMetaObject::normalizedType(typeVal);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QMetaObject__Connection* QMetaObject_Connect(QObject* sender, int signal_index, QObject* receiver, int method_index) {
	return new QMetaObject::Connection(QMetaObject::connect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index)));
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

bool QMetaObject_InvokeMethod(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal);
}

bool QMetaObject_InvokeMethod2(QObject* obj, const char* member, QGenericReturnArgument* retVal) {
	return QMetaObject::invokeMethod(obj, member, *retVal);
}

bool QMetaObject_InvokeMethod3(QObject* obj, const char* member, int typeVal) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal));
}

bool QMetaObject_InvokeMethod4(QObject* obj, const char* member) {
	return QMetaObject::invokeMethod(obj, member);
}

QObject* QMetaObject_NewInstance(const QMetaObject* self) {
	return self->newInstance();
}

struct miqt_string QMetaObject_Tr3(const QMetaObject* self, const char* s, const char* c, int n) {
	QString _ret = self->tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMetaObject__Connection* QMetaObject_Connect5(QObject* sender, int signal_index, QObject* receiver, int method_index, int typeVal) {
	return new QMetaObject::Connection(QMetaObject::connect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index), static_cast<int>(typeVal)));
}

QMetaObject__Connection* QMetaObject_Connect6(QObject* sender, int signal_index, QObject* receiver, int method_index, int typeVal, int* types) {
	return new QMetaObject::Connection(QMetaObject::connect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index), static_cast<int>(typeVal), static_cast<int*>(types)));
}

bool QMetaObject_InvokeMethod5(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0);
}

bool QMetaObject_InvokeMethod6(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1);
}

bool QMetaObject_InvokeMethod7(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2);
}

bool QMetaObject_InvokeMethod8(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3);
}

bool QMetaObject_InvokeMethod9(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_InvokeMethod10(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_InvokeMethod11(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_InvokeMethod12(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_InvokeMethod13(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *retVal, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_InvokeMethod14(QObject* obj, const char* member, int param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
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

bool QMetaObject_InvokeMethod43(QObject* obj, const char* member, int typeVal, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0);
}

bool QMetaObject_InvokeMethod53(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1);
}

bool QMetaObject_InvokeMethod63(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2);
}

bool QMetaObject_InvokeMethod73(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3);
}

bool QMetaObject_InvokeMethod83(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_InvokeMethod93(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_InvokeMethod103(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_InvokeMethod113(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_InvokeMethod123(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(typeVal), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_InvokeMethod133(QObject* obj, const char* member, int typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
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

QObject* QMetaObject_NewInstance1(const QMetaObject* self, QGenericArgument* val0) {
	return self->newInstance(*val0);
}

QObject* QMetaObject_NewInstance2(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1) {
	return self->newInstance(*val0, *val1);
}

QObject* QMetaObject_NewInstance3(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->newInstance(*val0, *val1, *val2);
}

QObject* QMetaObject_NewInstance4(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->newInstance(*val0, *val1, *val2, *val3);
}

QObject* QMetaObject_NewInstance5(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4);
}

QObject* QMetaObject_NewInstance6(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5);
}

QObject* QMetaObject_NewInstance7(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

QObject* QMetaObject_NewInstance8(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

QObject* QMetaObject_NewInstance9(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

QObject* QMetaObject_NewInstance10(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

void QMetaObject_Delete(QMetaObject* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMetaObject*>( self );
	} else {
		delete self;
	}
}

QMetaObject__Connection* QMetaObject__Connection_new() {
	return new QMetaObject::Connection();
}

QMetaObject__Connection* QMetaObject__Connection_new2(QMetaObject__Connection* other) {
	return new QMetaObject::Connection(*other);
}

void QMetaObject__Connection_OperatorAssign(QMetaObject__Connection* self, QMetaObject__Connection* other) {
	self->operator=(*other);
}

void QMetaObject__Connection_Swap(QMetaObject__Connection* self, QMetaObject__Connection* other) {
	self->swap(*other);
}

void QMetaObject__Connection_Delete(QMetaObject__Connection* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMetaObject::Connection*>( self );
	} else {
		delete self;
	}
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

QMetaObject* QMetaObject__SuperData_OperatorMinusGreater(const QMetaObject__SuperData* self) {
	return (QMetaObject*) self->operator->();
}

void QMetaObject__SuperData_OperatorAssign(QMetaObject__SuperData* self, QMetaObject__SuperData* param1) {
	self->operator=(*param1);
}

void QMetaObject__SuperData_Delete(QMetaObject__SuperData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMetaObject::SuperData*>( self );
	} else {
		delete self;
	}
}

QMetaObject__Data* QMetaObject__Data_new() {
	return new QMetaObject::Data();
}

QMetaObject__Data* QMetaObject__Data_new2(QMetaObject__Data* param1) {
	return new QMetaObject::Data(*param1);
}

void QMetaObject__Data_OperatorAssign(QMetaObject__Data* self, QMetaObject__Data* param1) {
	self->operator=(*param1);
}

void QMetaObject__Data_Delete(QMetaObject__Data* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMetaObject::Data*>( self );
	} else {
		delete self;
	}
}

