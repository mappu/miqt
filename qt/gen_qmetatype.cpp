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

QMetaType* QMetaType_new2(const int type) {
	return new QMetaType(static_cast<const int>(type));
}

bool QMetaType_unregisterType(int type) {
	return QMetaType::unregisterType(static_cast<int>(type));
}

int QMetaType_registerTypedef(const char* typeName, int aliasId) {
	return QMetaType::registerTypedef(typeName, static_cast<int>(aliasId));
}

int QMetaType_registerNormalizedTypedef(struct miqt_string normalizedTypeName, int aliasId) {
	QByteArray normalizedTypeName_QByteArray(normalizedTypeName.data, normalizedTypeName.len);
	return QMetaType::registerNormalizedTypedef(normalizedTypeName_QByteArray, static_cast<int>(aliasId));
}

int QMetaType_type(const char* typeName) {
	return QMetaType::type(typeName);
}

int QMetaType_typeWithTypeName(struct miqt_string typeName) {
	QByteArray typeName_QByteArray(typeName.data, typeName.len);
	return QMetaType::type(typeName_QByteArray);
}

const char* QMetaType_typeName(int type) {
	return (const char*) QMetaType::typeName(static_cast<int>(type));
}

int QMetaType_sizeOf(int type) {
	return QMetaType::sizeOf(static_cast<int>(type));
}

int QMetaType_typeFlags(int type) {
	QMetaType::TypeFlags _ret = QMetaType::typeFlags(static_cast<int>(type));
	return static_cast<int>(_ret);
}

QMetaObject* QMetaType_metaObjectForType(int type) {
	return (QMetaObject*) QMetaType::metaObjectForType(static_cast<int>(type));
}

bool QMetaType_isRegistered(int type) {
	return QMetaType::isRegistered(static_cast<int>(type));
}

void* QMetaType_create(int type) {
	return QMetaType::create(static_cast<int>(type));
}

void QMetaType_destroy(int type, void* data) {
	QMetaType::destroy(static_cast<int>(type), data);
}

void* QMetaType_construct(int type, void* where, const void* copy) {
	return QMetaType::construct(static_cast<int>(type), where, copy);
}

void QMetaType_destruct(int type, void* where) {
	QMetaType::destruct(static_cast<int>(type), where);
}

bool QMetaType_save(QDataStream* stream, int type, const void* data) {
	return QMetaType::save(*stream, static_cast<int>(type), data);
}

bool QMetaType_load(QDataStream* stream, int type, void* data) {
	return QMetaType::load(*stream, static_cast<int>(type), data);
}

bool QMetaType_isValid(const QMetaType* self) {
	return self->isValid();
}

bool QMetaType_isRegistered2(const QMetaType* self) {
	return self->isRegistered();
}

int QMetaType_id(const QMetaType* self) {
	return self->id();
}

int QMetaType_sizeOf2(const QMetaType* self) {
	return self->sizeOf();
}

int QMetaType_flags(const QMetaType* self) {
	QMetaType::TypeFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QMetaObject* QMetaType_metaObject(const QMetaType* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QMetaType_name(const QMetaType* self) {
	QByteArray _qb = self->name();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void* QMetaType_create2(const QMetaType* self) {
	return self->create();
}

void QMetaType_destroyWithData(const QMetaType* self, void* data) {
	self->destroy(data);
}

void* QMetaType_constructWithWhere(const QMetaType* self, void* where) {
	return self->construct(where);
}

void QMetaType_destructWithData(const QMetaType* self, void* data) {
	self->destruct(data);
}

bool QMetaType_hasRegisteredComparators(int typeId) {
	return QMetaType::hasRegisteredComparators(static_cast<int>(typeId));
}

bool QMetaType_hasRegisteredDebugStreamOperator(int typeId) {
	return QMetaType::hasRegisteredDebugStreamOperator(static_cast<int>(typeId));
}

bool QMetaType_convert(const void* from, int fromTypeId, void* to, int toTypeId) {
	return QMetaType::convert(from, static_cast<int>(fromTypeId), to, static_cast<int>(toTypeId));
}

bool QMetaType_compare(const void* lhs, const void* rhs, int typeId, int* result) {
	return QMetaType::compare(lhs, rhs, static_cast<int>(typeId), static_cast<int*>(result));
}

bool QMetaType_equals(const void* lhs, const void* rhs, int typeId, int* result) {
	return QMetaType::equals(lhs, rhs, static_cast<int>(typeId), static_cast<int*>(result));
}

bool QMetaType_debugStream(QDebug* dbg, const void* rhs, int typeId) {
	return QMetaType::debugStream(*dbg, rhs, static_cast<int>(typeId));
}

bool QMetaType_hasRegisteredConverterFunction(int fromTypeId, int toTypeId) {
	return QMetaType::hasRegisteredConverterFunction(static_cast<int>(fromTypeId), static_cast<int>(toTypeId));
}

void* QMetaType_create22(int type, const void* copy) {
	return QMetaType::create(static_cast<int>(type), copy);
}

void* QMetaType_create1(const QMetaType* self, const void* copy) {
	return self->create(copy);
}

void* QMetaType_construct2(const QMetaType* self, void* where, const void* copy) {
	return self->construct(where, copy);
}

void QMetaType_delete(QMetaType* self) {
	delete self;
}

