#include <QByteArray>
#include <QGenericArgument>
#include <QGenericReturnArgument>
#include <QList>
#include <QMetaClassInfo>
#include <QMetaEnum>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMetaProperty>
#include <QMetaType>
#include <QObject>
#include <QUntypedBindable>
#include <QVariant>
#include <qmetaobject.h>
#include "gen_qmetaobject.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMetaMethod* QMetaMethod_new() {
	return new QMetaMethod();
}

QMetaMethod* QMetaMethod_new2(QMetaMethod* param1) {
	return new QMetaMethod(*param1);
}

struct miqt_string QMetaMethod_methodSignature(const QMetaMethod* self) {
	QByteArray _qb = self->methodSignature();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaMethod_name(const QMetaMethod* self) {
	QByteArray _qb = self->name();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

const char* QMetaMethod_typeName(const QMetaMethod* self) {
	return (const char*) self->typeName();
}

int QMetaMethod_returnType(const QMetaMethod* self) {
	return self->returnType();
}

QMetaType* QMetaMethod_returnMetaType(const QMetaMethod* self) {
	return new QMetaType(self->returnMetaType());
}

int QMetaMethod_parameterCount(const QMetaMethod* self) {
	return self->parameterCount();
}

int QMetaMethod_parameterType(const QMetaMethod* self, int index) {
	return self->parameterType(static_cast<int>(index));
}

QMetaType* QMetaMethod_parameterMetaType(const QMetaMethod* self, int index) {
	return new QMetaType(self->parameterMetaType(static_cast<int>(index)));
}

void QMetaMethod_getParameterTypes(const QMetaMethod* self, int* types) {
	self->getParameterTypes(static_cast<int*>(types));
}

struct miqt_array /* of struct miqt_string */  QMetaMethod_parameterTypes(const QMetaMethod* self) {
	QList<QByteArray> _ret = self->parameterTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QMetaMethod_parameterTypeName(const QMetaMethod* self, int index) {
	QByteArray _qb = self->parameterTypeName(static_cast<int>(index));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QMetaMethod_parameterNames(const QMetaMethod* self) {
	QList<QByteArray> _ret = self->parameterNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

const char* QMetaMethod_tag(const QMetaMethod* self) {
	return (const char*) self->tag();
}

int QMetaMethod_access(const QMetaMethod* self) {
	QMetaMethod::Access _ret = self->access();
	return static_cast<int>(_ret);
}

int QMetaMethod_methodType(const QMetaMethod* self) {
	QMetaMethod::MethodType _ret = self->methodType();
	return static_cast<int>(_ret);
}

int QMetaMethod_attributes(const QMetaMethod* self) {
	return self->attributes();
}

int QMetaMethod_methodIndex(const QMetaMethod* self) {
	return self->methodIndex();
}

int QMetaMethod_relativeMethodIndex(const QMetaMethod* self) {
	return self->relativeMethodIndex();
}

int QMetaMethod_revision(const QMetaMethod* self) {
	return self->revision();
}

bool QMetaMethod_isConst(const QMetaMethod* self) {
	return self->isConst();
}

QMetaObject* QMetaMethod_enclosingMetaObject(const QMetaMethod* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

bool QMetaMethod_invoke(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue);
}

bool QMetaMethod_invoke2(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue) {
	return self->invoke(object, *returnValue);
}

bool QMetaMethod_invoke3(const QMetaMethod* self, QObject* object, int connectionType) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType));
}

bool QMetaMethod_invokeWithObject(const QMetaMethod* self, QObject* object) {
	return self->invoke(object);
}

bool QMetaMethod_invokeOnGadget(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue) {
	return self->invokeOnGadget(gadget, *returnValue);
}

bool QMetaMethod_invokeOnGadgetWithGadget(const QMetaMethod* self, void* gadget) {
	return self->invokeOnGadget(gadget);
}

bool QMetaMethod_isValid(const QMetaMethod* self) {
	return self->isValid();
}

bool QMetaMethod_invoke4(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0);
}

bool QMetaMethod_invoke5(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1);
}

bool QMetaMethod_invoke6(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2);
}

bool QMetaMethod_invoke7(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_invoke8(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_invoke9(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_invoke10(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_invoke11(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_invoke12(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_invoke13(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_invoke32(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0) {
	return self->invoke(object, *returnValue, *val0);
}

bool QMetaMethod_invoke42(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, *returnValue, *val0, *val1);
}

bool QMetaMethod_invoke52(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2);
}

bool QMetaMethod_invoke62(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_invoke72(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_invoke82(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_invoke92(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_invoke102(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_invoke112(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_invoke122(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_invoke33(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0);
}

bool QMetaMethod_invoke43(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1);
}

bool QMetaMethod_invoke53(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2);
}

bool QMetaMethod_invoke63(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3);
}

bool QMetaMethod_invoke73(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_invoke83(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_invoke93(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_invoke103(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_invoke113(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_invoke123(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_invoke22(const QMetaMethod* self, QObject* object, QGenericArgument* val0) {
	return self->invoke(object, *val0);
}

bool QMetaMethod_invoke34(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, *val0, *val1);
}

bool QMetaMethod_invoke44(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, *val0, *val1, *val2);
}

bool QMetaMethod_invoke54(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_invoke64(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_invoke74(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_invoke84(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_invoke94(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_invoke104(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_invoke114(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_invokeOnGadget3(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0) {
	return self->invokeOnGadget(gadget, *returnValue, *val0);
}

bool QMetaMethod_invokeOnGadget4(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invokeOnGadget(gadget, *returnValue, *val0, *val1);
}

bool QMetaMethod_invokeOnGadget5(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invokeOnGadget(gadget, *returnValue, *val0, *val1, *val2);
}

bool QMetaMethod_invokeOnGadget6(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invokeOnGadget(gadget, *returnValue, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_invokeOnGadget7(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invokeOnGadget(gadget, *returnValue, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_invokeOnGadget8(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invokeOnGadget(gadget, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_invokeOnGadget9(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invokeOnGadget(gadget, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_invokeOnGadget10(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invokeOnGadget(gadget, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_invokeOnGadget11(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invokeOnGadget(gadget, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_invokeOnGadget12(const QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invokeOnGadget(gadget, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_invokeOnGadget2(const QMetaMethod* self, void* gadget, QGenericArgument* val0) {
	return self->invokeOnGadget(gadget, *val0);
}

bool QMetaMethod_invokeOnGadget32(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invokeOnGadget(gadget, *val0, *val1);
}

bool QMetaMethod_invokeOnGadget42(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invokeOnGadget(gadget, *val0, *val1, *val2);
}

bool QMetaMethod_invokeOnGadget52(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invokeOnGadget(gadget, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_invokeOnGadget62(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invokeOnGadget(gadget, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_invokeOnGadget72(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invokeOnGadget(gadget, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_invokeOnGadget82(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invokeOnGadget(gadget, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_invokeOnGadget92(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invokeOnGadget(gadget, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_invokeOnGadget102(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invokeOnGadget(gadget, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_invokeOnGadget112(const QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invokeOnGadget(gadget, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

void QMetaMethod_delete(QMetaMethod* self) {
	delete self;
}

QMetaEnum* QMetaEnum_new() {
	return new QMetaEnum();
}

QMetaEnum* QMetaEnum_new2(QMetaEnum* param1) {
	return new QMetaEnum(*param1);
}

const char* QMetaEnum_name(const QMetaEnum* self) {
	return (const char*) self->name();
}

const char* QMetaEnum_enumName(const QMetaEnum* self) {
	return (const char*) self->enumName();
}

bool QMetaEnum_isFlag(const QMetaEnum* self) {
	return self->isFlag();
}

bool QMetaEnum_isScoped(const QMetaEnum* self) {
	return self->isScoped();
}

int QMetaEnum_keyCount(const QMetaEnum* self) {
	return self->keyCount();
}

const char* QMetaEnum_key(const QMetaEnum* self, int index) {
	return (const char*) self->key(static_cast<int>(index));
}

int QMetaEnum_value(const QMetaEnum* self, int index) {
	return self->value(static_cast<int>(index));
}

const char* QMetaEnum_scope(const QMetaEnum* self) {
	return (const char*) self->scope();
}

int QMetaEnum_keyToValue(const QMetaEnum* self, const char* key) {
	return self->keyToValue(key);
}

const char* QMetaEnum_valueToKey(const QMetaEnum* self, int value) {
	return (const char*) self->valueToKey(static_cast<int>(value));
}

int QMetaEnum_keysToValue(const QMetaEnum* self, const char* keys) {
	return self->keysToValue(keys);
}

struct miqt_string QMetaEnum_valueToKeys(const QMetaEnum* self, int value) {
	QByteArray _qb = self->valueToKeys(static_cast<int>(value));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QMetaObject* QMetaEnum_enclosingMetaObject(const QMetaEnum* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

bool QMetaEnum_isValid(const QMetaEnum* self) {
	return self->isValid();
}

int QMetaEnum_keyToValue2(const QMetaEnum* self, const char* key, bool* ok) {
	return self->keyToValue(key, ok);
}

int QMetaEnum_keysToValue2(const QMetaEnum* self, const char* keys, bool* ok) {
	return self->keysToValue(keys, ok);
}

void QMetaEnum_delete(QMetaEnum* self) {
	delete self;
}

QMetaProperty* QMetaProperty_new() {
	return new QMetaProperty();
}

const char* QMetaProperty_name(const QMetaProperty* self) {
	return (const char*) self->name();
}

const char* QMetaProperty_typeName(const QMetaProperty* self) {
	return (const char*) self->typeName();
}

int QMetaProperty_type(const QMetaProperty* self) {
	QVariant::Type _ret = self->type();
	return static_cast<int>(_ret);
}

int QMetaProperty_userType(const QMetaProperty* self) {
	return self->userType();
}

int QMetaProperty_typeId(const QMetaProperty* self) {
	return self->typeId();
}

QMetaType* QMetaProperty_metaType(const QMetaProperty* self) {
	return new QMetaType(self->metaType());
}

int QMetaProperty_propertyIndex(const QMetaProperty* self) {
	return self->propertyIndex();
}

int QMetaProperty_relativePropertyIndex(const QMetaProperty* self) {
	return self->relativePropertyIndex();
}

bool QMetaProperty_isReadable(const QMetaProperty* self) {
	return self->isReadable();
}

bool QMetaProperty_isWritable(const QMetaProperty* self) {
	return self->isWritable();
}

bool QMetaProperty_isResettable(const QMetaProperty* self) {
	return self->isResettable();
}

bool QMetaProperty_isDesignable(const QMetaProperty* self) {
	return self->isDesignable();
}

bool QMetaProperty_isScriptable(const QMetaProperty* self) {
	return self->isScriptable();
}

bool QMetaProperty_isStored(const QMetaProperty* self) {
	return self->isStored();
}

bool QMetaProperty_isUser(const QMetaProperty* self) {
	return self->isUser();
}

bool QMetaProperty_isConstant(const QMetaProperty* self) {
	return self->isConstant();
}

bool QMetaProperty_isFinal(const QMetaProperty* self) {
	return self->isFinal();
}

bool QMetaProperty_isRequired(const QMetaProperty* self) {
	return self->isRequired();
}

bool QMetaProperty_isBindable(const QMetaProperty* self) {
	return self->isBindable();
}

bool QMetaProperty_isFlagType(const QMetaProperty* self) {
	return self->isFlagType();
}

bool QMetaProperty_isEnumType(const QMetaProperty* self) {
	return self->isEnumType();
}

QMetaEnum* QMetaProperty_enumerator(const QMetaProperty* self) {
	return new QMetaEnum(self->enumerator());
}

bool QMetaProperty_hasNotifySignal(const QMetaProperty* self) {
	return self->hasNotifySignal();
}

QMetaMethod* QMetaProperty_notifySignal(const QMetaProperty* self) {
	return new QMetaMethod(self->notifySignal());
}

int QMetaProperty_notifySignalIndex(const QMetaProperty* self) {
	return self->notifySignalIndex();
}

int QMetaProperty_revision(const QMetaProperty* self) {
	return self->revision();
}

QVariant* QMetaProperty_read(const QMetaProperty* self, QObject* obj) {
	return new QVariant(self->read(obj));
}

bool QMetaProperty_write(const QMetaProperty* self, QObject* obj, QVariant* value) {
	return self->write(obj, *value);
}

bool QMetaProperty_reset(const QMetaProperty* self, QObject* obj) {
	return self->reset(obj);
}

QUntypedBindable* QMetaProperty_bindable(const QMetaProperty* self, QObject* object) {
	return new QUntypedBindable(self->bindable(object));
}

QVariant* QMetaProperty_readOnGadget(const QMetaProperty* self, const void* gadget) {
	return new QVariant(self->readOnGadget(gadget));
}

bool QMetaProperty_writeOnGadget(const QMetaProperty* self, void* gadget, QVariant* value) {
	return self->writeOnGadget(gadget, *value);
}

bool QMetaProperty_resetOnGadget(const QMetaProperty* self, void* gadget) {
	return self->resetOnGadget(gadget);
}

bool QMetaProperty_hasStdCppSet(const QMetaProperty* self) {
	return self->hasStdCppSet();
}

bool QMetaProperty_isAlias(const QMetaProperty* self) {
	return self->isAlias();
}

bool QMetaProperty_isValid(const QMetaProperty* self) {
	return self->isValid();
}

QMetaObject* QMetaProperty_enclosingMetaObject(const QMetaProperty* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

void QMetaProperty_delete(QMetaProperty* self) {
	delete self;
}

QMetaClassInfo* QMetaClassInfo_new() {
	return new QMetaClassInfo();
}

const char* QMetaClassInfo_name(const QMetaClassInfo* self) {
	return (const char*) self->name();
}

const char* QMetaClassInfo_value(const QMetaClassInfo* self) {
	return (const char*) self->value();
}

QMetaObject* QMetaClassInfo_enclosingMetaObject(const QMetaClassInfo* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

void QMetaClassInfo_delete(QMetaClassInfo* self) {
	delete self;
}

