#include <QByteArray>
#include <QGenericArgument>
#include <QGenericReturnArgument>
#include <QList>
#include <QMetaClassInfo>
#include <QMetaEnum>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMetaProperty>
#include <QObject>
#include <QVariant>
#include "qmetaobject.h"

#include "gen_qmetaobject.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaMethod* QMetaMethod_new() {
	return new QMetaMethod();
}

QMetaMethod* QMetaMethod_new2(QMetaMethod* param1) {
	return new QMetaMethod(*param1);
}

QByteArray* QMetaMethod_MethodSignature(QMetaMethod* self) {
	QByteArray ret = const_cast<const QMetaMethod*>(self)->methodSignature();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QMetaMethod_Name(QMetaMethod* self) {
	QByteArray ret = const_cast<const QMetaMethod*>(self)->name();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

const char* QMetaMethod_TypeName(QMetaMethod* self) {
	return (const char*) const_cast<const QMetaMethod*>(self)->typeName();
}

int QMetaMethod_ReturnType(QMetaMethod* self) {
	return const_cast<const QMetaMethod*>(self)->returnType();
}

int QMetaMethod_ParameterCount(QMetaMethod* self) {
	return const_cast<const QMetaMethod*>(self)->parameterCount();
}

int QMetaMethod_ParameterType(QMetaMethod* self, int index) {
	return const_cast<const QMetaMethod*>(self)->parameterType(static_cast<int>(index));
}

void QMetaMethod_GetParameterTypes(QMetaMethod* self, int* types) {
	const_cast<const QMetaMethod*>(self)->getParameterTypes(static_cast<int*>(types));
}

void QMetaMethod_ParameterTypes(QMetaMethod* self, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = const_cast<const QMetaMethod*>(self)->parameterTypes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QMetaMethod_ParameterNames(QMetaMethod* self, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = const_cast<const QMetaMethod*>(self)->parameterNames();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

const char* QMetaMethod_Tag(QMetaMethod* self) {
	return (const char*) const_cast<const QMetaMethod*>(self)->tag();
}

uintptr_t QMetaMethod_Access(QMetaMethod* self) {
	QMetaMethod::Access ret = const_cast<const QMetaMethod*>(self)->access();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMetaMethod_MethodType(QMetaMethod* self) {
	QMetaMethod::MethodType ret = const_cast<const QMetaMethod*>(self)->methodType();
	return static_cast<uintptr_t>(ret);
}

int QMetaMethod_Attributes(QMetaMethod* self) {
	return const_cast<const QMetaMethod*>(self)->attributes();
}

int QMetaMethod_MethodIndex(QMetaMethod* self) {
	return const_cast<const QMetaMethod*>(self)->methodIndex();
}

int QMetaMethod_Revision(QMetaMethod* self) {
	return const_cast<const QMetaMethod*>(self)->revision();
}

QMetaObject* QMetaMethod_EnclosingMetaObject(QMetaMethod* self) {
	return (QMetaObject*) const_cast<const QMetaMethod*>(self)->enclosingMetaObject();
}

bool QMetaMethod_Invoke(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue) {
	return const_cast<const QMetaMethod*>(self)->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue);
}

bool QMetaMethod_Invoke2(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue) {
	return const_cast<const QMetaMethod*>(self)->invoke(object, *returnValue);
}

bool QMetaMethod_Invoke3(QMetaMethod* self, QObject* object, uintptr_t connectionType) {
	return const_cast<const QMetaMethod*>(self)->invoke(object, static_cast<Qt::ConnectionType>(connectionType));
}

bool QMetaMethod_InvokeWithObject(QMetaMethod* self, QObject* object) {
	return const_cast<const QMetaMethod*>(self)->invoke(object);
}

bool QMetaMethod_IsValid(QMetaMethod* self) {
	return const_cast<const QMetaMethod*>(self)->isValid();
}

bool QMetaMethod_Invoke4(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0);
}

bool QMetaMethod_Invoke5(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1);
}

bool QMetaMethod_Invoke6(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2);
}

bool QMetaMethod_Invoke7(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_Invoke8(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_Invoke9(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_Invoke10(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_Invoke11(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_Invoke12(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_Invoke13(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_Invoke32(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0) {
	return self->invoke(object, *returnValue, *val0);
}

bool QMetaMethod_Invoke42(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, *returnValue, *val0, *val1);
}

bool QMetaMethod_Invoke52(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2);
}

bool QMetaMethod_Invoke62(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_Invoke72(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_Invoke82(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_Invoke92(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_Invoke102(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_Invoke112(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_Invoke122(QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_Invoke33(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0);
}

bool QMetaMethod_Invoke43(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1);
}

bool QMetaMethod_Invoke53(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2);
}

bool QMetaMethod_Invoke63(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3);
}

bool QMetaMethod_Invoke73(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_Invoke83(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_Invoke93(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_Invoke103(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_Invoke113(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_Invoke123(QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_Invoke22(QMetaMethod* self, QObject* object, QGenericArgument* val0) {
	return self->invoke(object, *val0);
}

bool QMetaMethod_Invoke34(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, *val0, *val1);
}

bool QMetaMethod_Invoke44(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, *val0, *val1, *val2);
}

bool QMetaMethod_Invoke54(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_Invoke64(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_Invoke74(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_Invoke84(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_Invoke94(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_Invoke104(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_Invoke114(QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

void QMetaMethod_Delete(QMetaMethod* self) {
	delete self;
}

QMetaEnum* QMetaEnum_new() {
	return new QMetaEnum();
}

QMetaEnum* QMetaEnum_new2(QMetaEnum* param1) {
	return new QMetaEnum(*param1);
}

const char* QMetaEnum_Name(QMetaEnum* self) {
	return (const char*) const_cast<const QMetaEnum*>(self)->name();
}

const char* QMetaEnum_EnumName(QMetaEnum* self) {
	return (const char*) const_cast<const QMetaEnum*>(self)->enumName();
}

bool QMetaEnum_IsFlag(QMetaEnum* self) {
	return const_cast<const QMetaEnum*>(self)->isFlag();
}

bool QMetaEnum_IsScoped(QMetaEnum* self) {
	return const_cast<const QMetaEnum*>(self)->isScoped();
}

int QMetaEnum_KeyCount(QMetaEnum* self) {
	return const_cast<const QMetaEnum*>(self)->keyCount();
}

const char* QMetaEnum_Key(QMetaEnum* self, int index) {
	return (const char*) const_cast<const QMetaEnum*>(self)->key(static_cast<int>(index));
}

int QMetaEnum_Value(QMetaEnum* self, int index) {
	return const_cast<const QMetaEnum*>(self)->value(static_cast<int>(index));
}

const char* QMetaEnum_Scope(QMetaEnum* self) {
	return (const char*) const_cast<const QMetaEnum*>(self)->scope();
}

int QMetaEnum_KeyToValue(QMetaEnum* self, const char* key) {
	return const_cast<const QMetaEnum*>(self)->keyToValue(key);
}

const char* QMetaEnum_ValueToKey(QMetaEnum* self, int value) {
	return (const char*) const_cast<const QMetaEnum*>(self)->valueToKey(static_cast<int>(value));
}

int QMetaEnum_KeysToValue(QMetaEnum* self, const char* keys) {
	return const_cast<const QMetaEnum*>(self)->keysToValue(keys);
}

QByteArray* QMetaEnum_ValueToKeys(QMetaEnum* self, int value) {
	QByteArray ret = const_cast<const QMetaEnum*>(self)->valueToKeys(static_cast<int>(value));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QMetaObject* QMetaEnum_EnclosingMetaObject(QMetaEnum* self) {
	return (QMetaObject*) const_cast<const QMetaEnum*>(self)->enclosingMetaObject();
}

bool QMetaEnum_IsValid(QMetaEnum* self) {
	return const_cast<const QMetaEnum*>(self)->isValid();
}

int QMetaEnum_KeyToValue2(QMetaEnum* self, const char* key, bool* ok) {
	return self->keyToValue(key, ok);
}

int QMetaEnum_KeysToValue2(QMetaEnum* self, const char* keys, bool* ok) {
	return self->keysToValue(keys, ok);
}

void QMetaEnum_Delete(QMetaEnum* self) {
	delete self;
}

QMetaProperty* QMetaProperty_new() {
	return new QMetaProperty();
}

const char* QMetaProperty_Name(QMetaProperty* self) {
	return (const char*) const_cast<const QMetaProperty*>(self)->name();
}

const char* QMetaProperty_TypeName(QMetaProperty* self) {
	return (const char*) const_cast<const QMetaProperty*>(self)->typeName();
}

uintptr_t QMetaProperty_Type(QMetaProperty* self) {
	QVariant::Type ret = const_cast<const QMetaProperty*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

int QMetaProperty_UserType(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->userType();
}

int QMetaProperty_PropertyIndex(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->propertyIndex();
}

int QMetaProperty_RelativePropertyIndex(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->relativePropertyIndex();
}

bool QMetaProperty_IsReadable(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isReadable();
}

bool QMetaProperty_IsWritable(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isWritable();
}

bool QMetaProperty_IsResettable(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isResettable();
}

bool QMetaProperty_IsDesignable(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isDesignable();
}

bool QMetaProperty_IsScriptable(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isScriptable();
}

bool QMetaProperty_IsStored(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isStored();
}

bool QMetaProperty_IsEditable(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isEditable();
}

bool QMetaProperty_IsUser(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isUser();
}

bool QMetaProperty_IsConstant(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isConstant();
}

bool QMetaProperty_IsFinal(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isFinal();
}

bool QMetaProperty_IsRequired(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isRequired();
}

bool QMetaProperty_IsFlagType(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isFlagType();
}

bool QMetaProperty_IsEnumType(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isEnumType();
}

QMetaEnum* QMetaProperty_Enumerator(QMetaProperty* self) {
	QMetaEnum ret = const_cast<const QMetaProperty*>(self)->enumerator();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaEnum*>(new QMetaEnum(ret));
}

bool QMetaProperty_HasNotifySignal(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->hasNotifySignal();
}

QMetaMethod* QMetaProperty_NotifySignal(QMetaProperty* self) {
	QMetaMethod ret = const_cast<const QMetaProperty*>(self)->notifySignal();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaMethod*>(new QMetaMethod(ret));
}

int QMetaProperty_NotifySignalIndex(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->notifySignalIndex();
}

int QMetaProperty_Revision(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->revision();
}

QVariant* QMetaProperty_Read(QMetaProperty* self, QObject* obj) {
	QVariant ret = const_cast<const QMetaProperty*>(self)->read(obj);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QMetaProperty_Write(QMetaProperty* self, QObject* obj, QVariant* value) {
	return const_cast<const QMetaProperty*>(self)->write(obj, *value);
}

bool QMetaProperty_Reset(QMetaProperty* self, QObject* obj) {
	return const_cast<const QMetaProperty*>(self)->reset(obj);
}

bool QMetaProperty_HasStdCppSet(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->hasStdCppSet();
}

bool QMetaProperty_IsValid(QMetaProperty* self) {
	return const_cast<const QMetaProperty*>(self)->isValid();
}

QMetaObject* QMetaProperty_EnclosingMetaObject(QMetaProperty* self) {
	return (QMetaObject*) const_cast<const QMetaProperty*>(self)->enclosingMetaObject();
}

bool QMetaProperty_IsDesignable1(QMetaProperty* self, QObject* obj) {
	return self->isDesignable(obj);
}

bool QMetaProperty_IsScriptable1(QMetaProperty* self, QObject* obj) {
	return self->isScriptable(obj);
}

bool QMetaProperty_IsStored1(QMetaProperty* self, QObject* obj) {
	return self->isStored(obj);
}

bool QMetaProperty_IsEditable1(QMetaProperty* self, QObject* obj) {
	return self->isEditable(obj);
}

bool QMetaProperty_IsUser1(QMetaProperty* self, QObject* obj) {
	return self->isUser(obj);
}

void QMetaProperty_Delete(QMetaProperty* self) {
	delete self;
}

QMetaClassInfo* QMetaClassInfo_new() {
	return new QMetaClassInfo();
}

const char* QMetaClassInfo_Name(QMetaClassInfo* self) {
	return (const char*) const_cast<const QMetaClassInfo*>(self)->name();
}

const char* QMetaClassInfo_Value(QMetaClassInfo* self) {
	return (const char*) const_cast<const QMetaClassInfo*>(self)->value();
}

QMetaObject* QMetaClassInfo_EnclosingMetaObject(QMetaClassInfo* self) {
	return (QMetaObject*) const_cast<const QMetaClassInfo*>(self)->enclosingMetaObject();
}

void QMetaClassInfo_Delete(QMetaClassInfo* self) {
	delete self;
}

