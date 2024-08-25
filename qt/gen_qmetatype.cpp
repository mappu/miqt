#include "gen_qmetatype.h"
#include "qmetatype.h"

#include <QMetaObject>
#include <QMetaType>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaType* QMetaType_new() {
	return new QMetaType();
}

QMetaType* QMetaType_new2(int typeVal) {
	return new QMetaType(static_cast<int>(typeVal));
}

bool QMetaType_UnregisterType(int typeVal) {
	return QMetaType::unregisterType(static_cast<int>(typeVal));
}

int QMetaType_RegisterTypedef(char* typeName, int aliasId) {
	return QMetaType::registerTypedef(typeName, static_cast<int>(aliasId));
}

int QMetaType_Type(char* typeName) {
	return QMetaType::type(typeName);
}

char* QMetaType_TypeName(int typeVal) {
	return (char*) QMetaType::typeName(static_cast<int>(typeVal));
}

int QMetaType_SizeOf(int typeVal) {
	return QMetaType::sizeOf(static_cast<int>(typeVal));
}

QMetaObject* QMetaType_MetaObjectForType(int typeVal) {
	return (QMetaObject*) QMetaType::metaObjectForType(static_cast<int>(typeVal));
}

bool QMetaType_IsRegistered(int typeVal) {
	return QMetaType::isRegistered(static_cast<int>(typeVal));
}

bool QMetaType_IsValid(QMetaType* self) {
	return self->isValid();
}

bool QMetaType_IsRegistered2(QMetaType* self) {
	return self->isRegistered();
}

int QMetaType_Id(QMetaType* self) {
	return self->id();
}

int QMetaType_SizeOf2(QMetaType* self) {
	return self->sizeOf();
}

QMetaObject* QMetaType_MetaObject(QMetaType* self) {
	return (QMetaObject*) self->metaObject();
}

bool QMetaType_HasRegisteredComparators(int typeId) {
	return QMetaType::hasRegisteredComparators(static_cast<int>(typeId));
}

bool QMetaType_HasRegisteredDebugStreamOperator(int typeId) {
	return QMetaType::hasRegisteredDebugStreamOperator(static_cast<int>(typeId));
}

bool QMetaType_HasRegisteredConverterFunction(int fromTypeId, int toTypeId) {
	return QMetaType::hasRegisteredConverterFunction(static_cast<int>(fromTypeId), static_cast<int>(toTypeId));
}

void QMetaType_Delete(QMetaType* self) {
	delete self;
}

