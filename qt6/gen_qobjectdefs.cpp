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

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QMethodRawArguments_delete(QMethodRawArguments* self) {
	delete self;
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

void* QGenericArgument_data(const QGenericArgument* self) {
	return self->data();
}

const char* QGenericArgument_name(const QGenericArgument* self) {
	return (const char*) self->name();
}

void QGenericArgument_delete(QGenericArgument* self) {
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

QGenericReturnArgument* QGenericReturnArgument_new4(const char* aName, void* aData) {
	return new QGenericReturnArgument(aName, aData);
}

void QGenericReturnArgument_virtbase(QGenericReturnArgument* src, QGenericArgument** outptr_QGenericArgument) {
	*outptr_QGenericArgument = static_cast<QGenericArgument*>(src);
}

void QGenericReturnArgument_delete(QGenericReturnArgument* self) {
	delete self;
}

QMetaObject* QMetaObject_new() {
	return new QMetaObject();
}

QMetaObject* QMetaObject_new2(QMetaObject* param1) {
	return new QMetaObject(*param1);
}

const char* QMetaObject_className(const QMetaObject* self) {
	return (const char*) self->className();
}

QMetaObject* QMetaObject_superClass(const QMetaObject* self) {
	return (QMetaObject*) self->superClass();
}

bool QMetaObject_inherits(const QMetaObject* self, QMetaObject* metaObject) {
	return self->inherits(metaObject);
}

QObject* QMetaObject_cast(const QMetaObject* self, QObject* obj) {
	return self->cast(obj);
}

QObject* QMetaObject_castWithObj(const QMetaObject* self, QObject* obj) {
	return (QObject*) self->cast(obj);
}

struct miqt_string QMetaObject_tr(const QMetaObject* self, const char* s, const char* c) {
	QString _ret = self->tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMetaType* QMetaObject_metaType(const QMetaObject* self) {
	return new QMetaType(self->metaType());
}

int QMetaObject_methodOffset(const QMetaObject* self) {
	return self->methodOffset();
}

int QMetaObject_enumeratorOffset(const QMetaObject* self) {
	return self->enumeratorOffset();
}

int QMetaObject_propertyOffset(const QMetaObject* self) {
	return self->propertyOffset();
}

int QMetaObject_classInfoOffset(const QMetaObject* self) {
	return self->classInfoOffset();
}

int QMetaObject_constructorCount(const QMetaObject* self) {
	return self->constructorCount();
}

int QMetaObject_methodCount(const QMetaObject* self) {
	return self->methodCount();
}

int QMetaObject_enumeratorCount(const QMetaObject* self) {
	return self->enumeratorCount();
}

int QMetaObject_propertyCount(const QMetaObject* self) {
	return self->propertyCount();
}

int QMetaObject_classInfoCount(const QMetaObject* self) {
	return self->classInfoCount();
}

int QMetaObject_indexOfConstructor(const QMetaObject* self, const char* constructor) {
	return self->indexOfConstructor(constructor);
}

int QMetaObject_indexOfMethod(const QMetaObject* self, const char* method) {
	return self->indexOfMethod(method);
}

int QMetaObject_indexOfSignal(const QMetaObject* self, const char* signal) {
	return self->indexOfSignal(signal);
}

int QMetaObject_indexOfSlot(const QMetaObject* self, const char* slot) {
	return self->indexOfSlot(slot);
}

int QMetaObject_indexOfEnumerator(const QMetaObject* self, const char* name) {
	return self->indexOfEnumerator(name);
}

int QMetaObject_indexOfProperty(const QMetaObject* self, const char* name) {
	return self->indexOfProperty(name);
}

int QMetaObject_indexOfClassInfo(const QMetaObject* self, const char* name) {
	return self->indexOfClassInfo(name);
}

QMetaMethod* QMetaObject_constructor(const QMetaObject* self, int index) {
	return new QMetaMethod(self->constructor(static_cast<int>(index)));
}

QMetaMethod* QMetaObject_method(const QMetaObject* self, int index) {
	return new QMetaMethod(self->method(static_cast<int>(index)));
}

QMetaEnum* QMetaObject_enumerator(const QMetaObject* self, int index) {
	return new QMetaEnum(self->enumerator(static_cast<int>(index)));
}

QMetaProperty* QMetaObject_property(const QMetaObject* self, int index) {
	return new QMetaProperty(self->property(static_cast<int>(index)));
}

QMetaClassInfo* QMetaObject_classInfo(const QMetaObject* self, int index) {
	return new QMetaClassInfo(self->classInfo(static_cast<int>(index)));
}

QMetaProperty* QMetaObject_userProperty(const QMetaObject* self) {
	return new QMetaProperty(self->userProperty());
}

bool QMetaObject_checkConnectArgs(const char* signal, const char* method) {
	return QMetaObject::checkConnectArgs(signal, method);
}

bool QMetaObject_checkConnectArgs2(QMetaMethod* signal, QMetaMethod* method) {
	return QMetaObject::checkConnectArgs(*signal, *method);
}

struct miqt_string QMetaObject_normalizedSignature(const char* method) {
	QByteArray _qb = QMetaObject::normalizedSignature(method);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaObject_normalizedType(const char* type) {
	QByteArray _qb = QMetaObject::normalizedType(type);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QMetaObject__Connection* QMetaObject_connect(QObject* sender, int signal_index, QObject* receiver, int method_index) {
	return new QMetaObject::Connection(QMetaObject::connect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index)));
}

bool QMetaObject_disconnect(QObject* sender, int signal_index, QObject* receiver, int method_index) {
	return QMetaObject::disconnect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index));
}

bool QMetaObject_disconnectOne(QObject* sender, int signal_index, QObject* receiver, int method_index) {
	return QMetaObject::disconnectOne(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index));
}

void QMetaObject_connectSlotsByName(QObject* o) {
	QMetaObject::connectSlotsByName(o);
}

bool QMetaObject_invokeMethod(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret);
}

bool QMetaObject_invokeMethod2(QObject* obj, const char* member, QGenericReturnArgument* ret) {
	return QMetaObject::invokeMethod(obj, member, *ret);
}

bool QMetaObject_invokeMethod3(QObject* obj, const char* member, int type) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type));
}

bool QMetaObject_invokeMethod4(QObject* obj, const char* member) {
	return QMetaObject::invokeMethod(obj, member);
}

QObject* QMetaObject_newInstance(const QMetaObject* self) {
	return self->newInstance();
}

struct miqt_string QMetaObject_tr3(const QMetaObject* self, const char* s, const char* c, int n) {
	QString _ret = self->tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMetaObject__Connection* QMetaObject_connect5(QObject* sender, int signal_index, QObject* receiver, int method_index, int type) {
	return new QMetaObject::Connection(QMetaObject::connect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index), static_cast<int>(type)));
}

QMetaObject__Connection* QMetaObject_connect6(QObject* sender, int signal_index, QObject* receiver, int method_index, int type, int* types) {
	return new QMetaObject::Connection(QMetaObject::connect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index), static_cast<int>(type), static_cast<int*>(types)));
}

bool QMetaObject_invokeMethod5(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0);
}

bool QMetaObject_invokeMethod6(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1);
}

bool QMetaObject_invokeMethod7(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2);
}

bool QMetaObject_invokeMethod8(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3);
}

bool QMetaObject_invokeMethod9(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_invokeMethod10(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_invokeMethod11(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_invokeMethod12(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_invokeMethod13(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_invokeMethod14(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaObject_invokeMethod42(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0);
}

bool QMetaObject_invokeMethod52(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1);
}

bool QMetaObject_invokeMethod62(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2);
}

bool QMetaObject_invokeMethod72(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3);
}

bool QMetaObject_invokeMethod82(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_invokeMethod92(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_invokeMethod102(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_invokeMethod112(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_invokeMethod122(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_invokeMethod132(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaObject_invokeMethod43(QObject* obj, const char* member, int type, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0);
}

bool QMetaObject_invokeMethod53(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1);
}

bool QMetaObject_invokeMethod63(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2);
}

bool QMetaObject_invokeMethod73(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3);
}

bool QMetaObject_invokeMethod83(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_invokeMethod93(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_invokeMethod103(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_invokeMethod113(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_invokeMethod123(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_invokeMethod133(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaObject_invokeMethod32(QObject* obj, const char* member, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, *val0);
}

bool QMetaObject_invokeMethod44(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1);
}

bool QMetaObject_invokeMethod54(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2);
}

bool QMetaObject_invokeMethod64(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3);
}

bool QMetaObject_invokeMethod74(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_invokeMethod84(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_invokeMethod94(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_invokeMethod104(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_invokeMethod114(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_invokeMethod124(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

QObject* QMetaObject_newInstance1(const QMetaObject* self, QGenericArgument* val0) {
	return self->newInstance(*val0);
}

QObject* QMetaObject_newInstance2(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1) {
	return self->newInstance(*val0, *val1);
}

QObject* QMetaObject_newInstance3(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->newInstance(*val0, *val1, *val2);
}

QObject* QMetaObject_newInstance4(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->newInstance(*val0, *val1, *val2, *val3);
}

QObject* QMetaObject_newInstance5(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4);
}

QObject* QMetaObject_newInstance6(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5);
}

QObject* QMetaObject_newInstance7(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

QObject* QMetaObject_newInstance8(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

QObject* QMetaObject_newInstance9(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

QObject* QMetaObject_newInstance10(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

void QMetaObject_delete(QMetaObject* self) {
	delete self;
}

QMetaObject__Connection* QMetaObject__Connection_new() {
	return new QMetaObject::Connection();
}

QMetaObject__Connection* QMetaObject__Connection_new2(QMetaObject__Connection* other) {
	return new QMetaObject::Connection(*other);
}

void QMetaObject__Connection_operatorAssign(QMetaObject__Connection* self, QMetaObject__Connection* other) {
	self->operator=(*other);
}

void QMetaObject__Connection_swap(QMetaObject__Connection* self, QMetaObject__Connection* other) {
	self->swap(*other);
}

void QMetaObject__Connection_delete(QMetaObject__Connection* self) {
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

QMetaObject* QMetaObject__SuperData_operatorMinusGreater(const QMetaObject__SuperData* self) {
	return (QMetaObject*) self->operator->();
}

QMetaObject* QMetaObject__SuperData_ToConstQMetaObjectMultiply(const QMetaObject__SuperData* self) {
	return (QMetaObject*) self->operator const QMetaObject *();
}

void QMetaObject__SuperData_operatorAssign(QMetaObject__SuperData* self, QMetaObject__SuperData* param1) {
	self->operator=(*param1);
}

void QMetaObject__SuperData_delete(QMetaObject__SuperData* self) {
	delete self;
}

QMetaObject__Data* QMetaObject__Data_new() {
	return new QMetaObject::Data();
}

QMetaObject__Data* QMetaObject__Data_new2(QMetaObject__Data* param1) {
	return new QMetaObject::Data(*param1);
}

void QMetaObject__Data_operatorAssign(QMetaObject__Data* self, QMetaObject__Data* param1) {
	self->operator=(*param1);
}

void QMetaObject__Data_delete(QMetaObject__Data* self) {
	delete self;
}

