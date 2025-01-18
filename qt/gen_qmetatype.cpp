#include <QByteArray>
#include <QDataStream>
#include <QDebug>
#include <QMetaObject>
#include <QMetaType>
#include <qmetatype.h>
#include "gen_qmetatype.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMetaType* QMetaType_new() {
	return new QMetaType();
}

QMetaType* QMetaType_new2(const int typeVal) {
	return new QMetaType(static_cast<const int>(typeVal));
}

bool QMetaType_UnregisterType(int typeVal) {
	return QMetaType::unregisterType(static_cast<int>(typeVal));
}

int QMetaType_RegisterTypedef(const char* typeName, int aliasId) {
	return QMetaType::registerTypedef(typeName, static_cast<int>(aliasId));
}

int QMetaType_RegisterNormalizedTypedef(struct miqt_string normalizedTypeName, int aliasId) {
	QByteArray normalizedTypeName_QByteArray(normalizedTypeName.data, normalizedTypeName.len);
	return QMetaType::registerNormalizedTypedef(normalizedTypeName_QByteArray, static_cast<int>(aliasId));
}

int QMetaType_Type(const char* typeName) {
	return QMetaType::type(typeName);
}

int QMetaType_TypeWithTypeName(struct miqt_string typeName) {
	QByteArray typeName_QByteArray(typeName.data, typeName.len);
	return QMetaType::type(typeName_QByteArray);
}

const char* QMetaType_TypeName(int typeVal) {
	return (const char*) QMetaType::typeName(static_cast<int>(typeVal));
}

int QMetaType_SizeOf(int typeVal) {
	return QMetaType::sizeOf(static_cast<int>(typeVal));
}

int QMetaType_TypeFlags(int typeVal) {
	QMetaType::TypeFlags _ret = QMetaType::typeFlags(static_cast<int>(typeVal));
	return static_cast<int>(_ret);
}

QMetaObject* QMetaType_MetaObjectForType(int typeVal) {
	return (QMetaObject*) QMetaType::metaObjectForType(static_cast<int>(typeVal));
}

bool QMetaType_IsRegistered(int typeVal) {
	return QMetaType::isRegistered(static_cast<int>(typeVal));
}

void* QMetaType_Create(int typeVal) {
	return QMetaType::create(static_cast<int>(typeVal));
}

void QMetaType_Destroy(int typeVal, void* data) {
	QMetaType::destroy(static_cast<int>(typeVal), data);
}

void* QMetaType_Construct(int typeVal, void* where, const void* copyVal) {
	return QMetaType::construct(static_cast<int>(typeVal), where, copyVal);
}

void QMetaType_Destruct(int typeVal, void* where) {
	QMetaType::destruct(static_cast<int>(typeVal), where);
}

bool QMetaType_Save(QDataStream* stream, int typeVal, const void* data) {
	return QMetaType::save(*stream, static_cast<int>(typeVal), data);
}

bool QMetaType_Load(QDataStream* stream, int typeVal, void* data) {
	return QMetaType::load(*stream, static_cast<int>(typeVal), data);
}

bool QMetaType_IsValid(const QMetaType* self) {
	return self->isValid();
}

bool QMetaType_IsRegistered2(const QMetaType* self) {
	return self->isRegistered();
}

int QMetaType_Id(const QMetaType* self) {
	return self->id();
}

int QMetaType_SizeOf2(const QMetaType* self) {
	return self->sizeOf();
}

int QMetaType_Flags(const QMetaType* self) {
	QMetaType::TypeFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QMetaObject* QMetaType_MetaObject(const QMetaType* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QMetaType_Name(const QMetaType* self) {
	QByteArray _qb = self->name();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void* QMetaType_Create2(const QMetaType* self) {
	return self->create();
}

void QMetaType_DestroyWithData(const QMetaType* self, void* data) {
	self->destroy(data);
}

void* QMetaType_ConstructWithWhere(const QMetaType* self, void* where) {
	return self->construct(where);
}

void QMetaType_DestructWithData(const QMetaType* self, void* data) {
	self->destruct(data);
}

bool QMetaType_HasRegisteredComparators(int typeId) {
	return QMetaType::hasRegisteredComparators(static_cast<int>(typeId));
}

bool QMetaType_HasRegisteredDebugStreamOperator(int typeId) {
	return QMetaType::hasRegisteredDebugStreamOperator(static_cast<int>(typeId));
}

bool QMetaType_Convert(const void* from, int fromTypeId, void* to, int toTypeId) {
	return QMetaType::convert(from, static_cast<int>(fromTypeId), to, static_cast<int>(toTypeId));
}

bool QMetaType_Compare(const void* lhs, const void* rhs, int typeId, int* result) {
	return QMetaType::compare(lhs, rhs, static_cast<int>(typeId), static_cast<int*>(result));
}

bool QMetaType_Equals(const void* lhs, const void* rhs, int typeId, int* result) {
	return QMetaType::equals(lhs, rhs, static_cast<int>(typeId), static_cast<int*>(result));
}

bool QMetaType_DebugStream(QDebug* dbg, const void* rhs, int typeId) {
	return QMetaType::debugStream(*dbg, rhs, static_cast<int>(typeId));
}

bool QMetaType_HasRegisteredConverterFunction(int fromTypeId, int toTypeId) {
	return QMetaType::hasRegisteredConverterFunction(static_cast<int>(fromTypeId), static_cast<int>(toTypeId));
}

void* QMetaType_Create22(int typeVal, const void* copyVal) {
	return QMetaType::create(static_cast<int>(typeVal), copyVal);
}

void* QMetaType_Create1(const QMetaType* self, const void* copyVal) {
	return self->create(copyVal);
}

void* QMetaType_Construct2(const QMetaType* self, void* where, const void* copyVal) {
	return self->construct(where, copyVal);
}

void QMetaType_Delete(QMetaType* self) {
	delete self;
}

