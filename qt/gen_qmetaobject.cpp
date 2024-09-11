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

QByteArray* QMetaMethod_MethodSignature(const QMetaMethod* self) {
	QByteArray ret = self->methodSignature();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QMetaMethod_Name(const QMetaMethod* self) {
	QByteArray ret = self->name();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

const char* QMetaMethod_TypeName(const QMetaMethod* self) {
	return (const char*) self->typeName();
}

int QMetaMethod_ReturnType(const QMetaMethod* self) {
	return self->returnType();
}

int QMetaMethod_ParameterCount(const QMetaMethod* self) {
	return self->parameterCount();
}

int QMetaMethod_ParameterType(const QMetaMethod* self, int index) {
	return self->parameterType(static_cast<int>(index));
}

void QMetaMethod_GetParameterTypes(const QMetaMethod* self, int* types) {
	self->getParameterTypes(static_cast<int*>(types));
}

void QMetaMethod_ParameterTypes(const QMetaMethod* self, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = self->parameterTypes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QMetaMethod_ParameterNames(const QMetaMethod* self, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = self->parameterNames();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

const char* QMetaMethod_Tag(const QMetaMethod* self) {
	return (const char*) self->tag();
}

uintptr_t QMetaMethod_Access(const QMetaMethod* self) {
	QMetaMethod::Access ret = self->access();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMetaMethod_MethodType(const QMetaMethod* self) {
	QMetaMethod::MethodType ret = self->methodType();
	return static_cast<uintptr_t>(ret);
}

int QMetaMethod_Attributes(const QMetaMethod* self) {
	return self->attributes();
}

int QMetaMethod_MethodIndex(const QMetaMethod* self) {
	return self->methodIndex();
}

int QMetaMethod_Revision(const QMetaMethod* self) {
	return self->revision();
}

QMetaObject* QMetaMethod_EnclosingMetaObject(const QMetaMethod* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

bool QMetaMethod_Invoke(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue);
}

bool QMetaMethod_Invoke2(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue) {
	return self->invoke(object, *returnValue);
}

bool QMetaMethod_Invoke3(const QMetaMethod* self, QObject* object, uintptr_t connectionType) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType));
}

bool QMetaMethod_InvokeWithObject(const QMetaMethod* self, QObject* object) {
	return self->invoke(object);
}

bool QMetaMethod_IsValid(const QMetaMethod* self) {
	return self->isValid();
}

bool QMetaMethod_Invoke4(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0);
}

bool QMetaMethod_Invoke5(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1);
}

bool QMetaMethod_Invoke6(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2);
}

bool QMetaMethod_Invoke7(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_Invoke8(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_Invoke9(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_Invoke10(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_Invoke11(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_Invoke12(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_Invoke13(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_Invoke32(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0) {
	return self->invoke(object, *returnValue, *val0);
}

bool QMetaMethod_Invoke42(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, *returnValue, *val0, *val1);
}

bool QMetaMethod_Invoke52(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2);
}

bool QMetaMethod_Invoke62(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_Invoke72(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_Invoke82(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_Invoke92(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_Invoke102(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_Invoke112(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_Invoke122(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_Invoke33(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0);
}

bool QMetaMethod_Invoke43(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1);
}

bool QMetaMethod_Invoke53(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2);
}

bool QMetaMethod_Invoke63(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3);
}

bool QMetaMethod_Invoke73(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_Invoke83(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_Invoke93(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_Invoke103(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_Invoke113(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_Invoke123(const QMetaMethod* self, QObject* object, uintptr_t connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_Invoke22(const QMetaMethod* self, QObject* object, QGenericArgument* val0) {
	return self->invoke(object, *val0);
}

bool QMetaMethod_Invoke34(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, *val0, *val1);
}

bool QMetaMethod_Invoke44(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, *val0, *val1, *val2);
}

bool QMetaMethod_Invoke54(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_Invoke64(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_Invoke74(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_Invoke84(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_Invoke94(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_Invoke104(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_Invoke114(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
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

const char* QMetaEnum_Name(const QMetaEnum* self) {
	return (const char*) self->name();
}

const char* QMetaEnum_EnumName(const QMetaEnum* self) {
	return (const char*) self->enumName();
}

bool QMetaEnum_IsFlag(const QMetaEnum* self) {
	return self->isFlag();
}

bool QMetaEnum_IsScoped(const QMetaEnum* self) {
	return self->isScoped();
}

int QMetaEnum_KeyCount(const QMetaEnum* self) {
	return self->keyCount();
}

const char* QMetaEnum_Key(const QMetaEnum* self, int index) {
	return (const char*) self->key(static_cast<int>(index));
}

int QMetaEnum_Value(const QMetaEnum* self, int index) {
	return self->value(static_cast<int>(index));
}

const char* QMetaEnum_Scope(const QMetaEnum* self) {
	return (const char*) self->scope();
}

int QMetaEnum_KeyToValue(const QMetaEnum* self, const char* key) {
	return self->keyToValue(key);
}

const char* QMetaEnum_ValueToKey(const QMetaEnum* self, int value) {
	return (const char*) self->valueToKey(static_cast<int>(value));
}

int QMetaEnum_KeysToValue(const QMetaEnum* self, const char* keys) {
	return self->keysToValue(keys);
}

QByteArray* QMetaEnum_ValueToKeys(const QMetaEnum* self, int value) {
	QByteArray ret = self->valueToKeys(static_cast<int>(value));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QMetaObject* QMetaEnum_EnclosingMetaObject(const QMetaEnum* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

bool QMetaEnum_IsValid(const QMetaEnum* self) {
	return self->isValid();
}

int QMetaEnum_KeyToValue2(const QMetaEnum* self, const char* key, bool* ok) {
	return self->keyToValue(key, ok);
}

int QMetaEnum_KeysToValue2(const QMetaEnum* self, const char* keys, bool* ok) {
	return self->keysToValue(keys, ok);
}

void QMetaEnum_Delete(QMetaEnum* self) {
	delete self;
}

QMetaProperty* QMetaProperty_new() {
	return new QMetaProperty();
}

const char* QMetaProperty_Name(const QMetaProperty* self) {
	return (const char*) self->name();
}

const char* QMetaProperty_TypeName(const QMetaProperty* self) {
	return (const char*) self->typeName();
}

uintptr_t QMetaProperty_Type(const QMetaProperty* self) {
	QVariant::Type ret = self->type();
	return static_cast<uintptr_t>(ret);
}

int QMetaProperty_UserType(const QMetaProperty* self) {
	return self->userType();
}

int QMetaProperty_PropertyIndex(const QMetaProperty* self) {
	return self->propertyIndex();
}

int QMetaProperty_RelativePropertyIndex(const QMetaProperty* self) {
	return self->relativePropertyIndex();
}

bool QMetaProperty_IsReadable(const QMetaProperty* self) {
	return self->isReadable();
}

bool QMetaProperty_IsWritable(const QMetaProperty* self) {
	return self->isWritable();
}

bool QMetaProperty_IsResettable(const QMetaProperty* self) {
	return self->isResettable();
}

bool QMetaProperty_IsDesignable(const QMetaProperty* self) {
	return self->isDesignable();
}

bool QMetaProperty_IsScriptable(const QMetaProperty* self) {
	return self->isScriptable();
}

bool QMetaProperty_IsStored(const QMetaProperty* self) {
	return self->isStored();
}

bool QMetaProperty_IsEditable(const QMetaProperty* self) {
	return self->isEditable();
}

bool QMetaProperty_IsUser(const QMetaProperty* self) {
	return self->isUser();
}

bool QMetaProperty_IsConstant(const QMetaProperty* self) {
	return self->isConstant();
}

bool QMetaProperty_IsFinal(const QMetaProperty* self) {
	return self->isFinal();
}

bool QMetaProperty_IsRequired(const QMetaProperty* self) {
	return self->isRequired();
}

bool QMetaProperty_IsFlagType(const QMetaProperty* self) {
	return self->isFlagType();
}

bool QMetaProperty_IsEnumType(const QMetaProperty* self) {
	return self->isEnumType();
}

QMetaEnum* QMetaProperty_Enumerator(const QMetaProperty* self) {
	QMetaEnum ret = self->enumerator();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaEnum*>(new QMetaEnum(ret));
}

bool QMetaProperty_HasNotifySignal(const QMetaProperty* self) {
	return self->hasNotifySignal();
}

QMetaMethod* QMetaProperty_NotifySignal(const QMetaProperty* self) {
	QMetaMethod ret = self->notifySignal();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMetaMethod*>(new QMetaMethod(ret));
}

int QMetaProperty_NotifySignalIndex(const QMetaProperty* self) {
	return self->notifySignalIndex();
}

int QMetaProperty_Revision(const QMetaProperty* self) {
	return self->revision();
}

QVariant* QMetaProperty_Read(const QMetaProperty* self, QObject* obj) {
	QVariant ret = self->read(obj);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QMetaProperty_Write(const QMetaProperty* self, QObject* obj, QVariant* value) {
	return self->write(obj, *value);
}

bool QMetaProperty_Reset(const QMetaProperty* self, QObject* obj) {
	return self->reset(obj);
}

bool QMetaProperty_HasStdCppSet(const QMetaProperty* self) {
	return self->hasStdCppSet();
}

bool QMetaProperty_IsValid(const QMetaProperty* self) {
	return self->isValid();
}

QMetaObject* QMetaProperty_EnclosingMetaObject(const QMetaProperty* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

bool QMetaProperty_IsDesignable1(const QMetaProperty* self, QObject* obj) {
	return self->isDesignable(obj);
}

bool QMetaProperty_IsScriptable1(const QMetaProperty* self, QObject* obj) {
	return self->isScriptable(obj);
}

bool QMetaProperty_IsStored1(const QMetaProperty* self, QObject* obj) {
	return self->isStored(obj);
}

bool QMetaProperty_IsEditable1(const QMetaProperty* self, QObject* obj) {
	return self->isEditable(obj);
}

bool QMetaProperty_IsUser1(const QMetaProperty* self, QObject* obj) {
	return self->isUser(obj);
}

void QMetaProperty_Delete(QMetaProperty* self) {
	delete self;
}

QMetaClassInfo* QMetaClassInfo_new() {
	return new QMetaClassInfo();
}

const char* QMetaClassInfo_Name(const QMetaClassInfo* self) {
	return (const char*) self->name();
}

const char* QMetaClassInfo_Value(const QMetaClassInfo* self) {
	return (const char*) self->value();
}

QMetaObject* QMetaClassInfo_EnclosingMetaObject(const QMetaClassInfo* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

void QMetaClassInfo_Delete(QMetaClassInfo* self) {
	delete self;
}

