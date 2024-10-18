#include <QByteArray>
#include <QDataStream>
#include <QDebug>
#include <QMetaObject>
#include <QMetaType>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtMetaTypePrivate__QAssociativeIterableImpl
#define WORKAROUND_INNER_CLASS_DEFINITION_QtMetaTypePrivate__QPairVariantInterfaceImpl
#define WORKAROUND_INNER_CLASS_DEFINITION_QtMetaTypePrivate__QSequentialIterableImpl
#define WORKAROUND_INNER_CLASS_DEFINITION_QtMetaTypePrivate__VariantData
#define WORKAROUND_INNER_CLASS_DEFINITION_QtMetaTypePrivate__VectorBoolElements
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__AbstractComparatorFunction
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__AbstractConverterFunction
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__AbstractDebugStreamFunction
#include <qmetatype.h>
#include "gen_qmetatype.h"
#include "_cgo_export.h"

QtPrivate__AbstractDebugStreamFunction* QtPrivate__AbstractDebugStreamFunction_new() {
	return new QtPrivate::AbstractDebugStreamFunction();
}

void QtPrivate__AbstractDebugStreamFunction_Delete(QtPrivate__AbstractDebugStreamFunction* self) {
	delete self;
}

QtPrivate__AbstractComparatorFunction* QtPrivate__AbstractComparatorFunction_new() {
	return new QtPrivate::AbstractComparatorFunction();
}

void QtPrivate__AbstractComparatorFunction_Delete(QtPrivate__AbstractComparatorFunction* self) {
	delete self;
}

QtPrivate__AbstractConverterFunction* QtPrivate__AbstractConverterFunction_new() {
	return new QtPrivate::AbstractConverterFunction();
}

void QtPrivate__AbstractConverterFunction_Delete(QtPrivate__AbstractConverterFunction* self) {
	delete self;
}

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

QtMetaTypePrivate__VariantData* QtMetaTypePrivate__VariantData_new(const int metaTypeId_, const void* data_, const unsigned int flags_) {
	return new QtMetaTypePrivate::VariantData(static_cast<const int>(metaTypeId_), data_, static_cast<const uint>(flags_));
}

QtMetaTypePrivate__VariantData* QtMetaTypePrivate__VariantData_new2(QtMetaTypePrivate__VariantData* other) {
	return new QtMetaTypePrivate::VariantData(*other);
}

void QtMetaTypePrivate__VariantData_Delete(QtMetaTypePrivate__VariantData* self) {
	delete self;
}

void QtMetaTypePrivate__VectorBoolElements_Delete(QtMetaTypePrivate__VectorBoolElements* self) {
	delete self;
}

QtMetaTypePrivate__QSequentialIterableImpl* QtMetaTypePrivate__QSequentialIterableImpl_new() {
	return new QtMetaTypePrivate::QSequentialIterableImpl();
}

QtMetaTypePrivate__QSequentialIterableImpl* QtMetaTypePrivate__QSequentialIterableImpl_new2(QtMetaTypePrivate__QSequentialIterableImpl* param1) {
	return new QtMetaTypePrivate::QSequentialIterableImpl(*param1);
}

int QtMetaTypePrivate__QSequentialIterableImpl_IteratorCapabilities(QtMetaTypePrivate__QSequentialIterableImpl* self) {
	QtMetaTypePrivate::IteratorCapability _ret = self->iteratorCapabilities();
	return static_cast<int>(_ret);
}

unsigned int QtMetaTypePrivate__QSequentialIterableImpl_Revision(QtMetaTypePrivate__QSequentialIterableImpl* self) {
	uint _ret = self->revision();
	return static_cast<unsigned int>(_ret);
}

unsigned int QtMetaTypePrivate__QSequentialIterableImpl_ContainerCapabilities(QtMetaTypePrivate__QSequentialIterableImpl* self) {
	uint _ret = self->containerCapabilities();
	return static_cast<unsigned int>(_ret);
}

void QtMetaTypePrivate__QSequentialIterableImpl_MoveToBegin(QtMetaTypePrivate__QSequentialIterableImpl* self) {
	self->moveToBegin();
}

void QtMetaTypePrivate__QSequentialIterableImpl_MoveToEnd(QtMetaTypePrivate__QSequentialIterableImpl* self) {
	self->moveToEnd();
}

bool QtMetaTypePrivate__QSequentialIterableImpl_Equal(const QtMetaTypePrivate__QSequentialIterableImpl* self, QtMetaTypePrivate__QSequentialIterableImpl* other) {
	return self->equal(*other);
}

QtMetaTypePrivate__QSequentialIterableImpl* QtMetaTypePrivate__QSequentialIterableImpl_Advance(QtMetaTypePrivate__QSequentialIterableImpl* self, int i) {
	QtMetaTypePrivate::QSequentialIterableImpl& _ret = self->advance(static_cast<int>(i));
	// Cast returned reference into pointer
	return &_ret;
}

void QtMetaTypePrivate__QSequentialIterableImpl_Append(QtMetaTypePrivate__QSequentialIterableImpl* self, const void* newElement) {
	self->append(newElement);
}

QtMetaTypePrivate__VariantData* QtMetaTypePrivate__QSequentialIterableImpl_GetCurrent(const QtMetaTypePrivate__QSequentialIterableImpl* self) {
	return new QtMetaTypePrivate::VariantData(self->getCurrent());
}

QtMetaTypePrivate__VariantData* QtMetaTypePrivate__QSequentialIterableImpl_At(const QtMetaTypePrivate__QSequentialIterableImpl* self, int idx) {
	return new QtMetaTypePrivate::VariantData(self->at(static_cast<int>(idx)));
}

int QtMetaTypePrivate__QSequentialIterableImpl_Size(const QtMetaTypePrivate__QSequentialIterableImpl* self) {
	return self->size();
}

void QtMetaTypePrivate__QSequentialIterableImpl_DestroyIter(QtMetaTypePrivate__QSequentialIterableImpl* self) {
	self->destroyIter();
}

void QtMetaTypePrivate__QSequentialIterableImpl_Copy(QtMetaTypePrivate__QSequentialIterableImpl* self, QtMetaTypePrivate__QSequentialIterableImpl* other) {
	self->copy(*other);
}

void QtMetaTypePrivate__QSequentialIterableImpl_OperatorAssign(QtMetaTypePrivate__QSequentialIterableImpl* self, QtMetaTypePrivate__QSequentialIterableImpl* param1) {
	self->operator=(*param1);
}

void QtMetaTypePrivate__QSequentialIterableImpl_Delete(QtMetaTypePrivate__QSequentialIterableImpl* self) {
	delete self;
}

QtMetaTypePrivate__QAssociativeIterableImpl* QtMetaTypePrivate__QAssociativeIterableImpl_new() {
	return new QtMetaTypePrivate::QAssociativeIterableImpl();
}

QtMetaTypePrivate__QAssociativeIterableImpl* QtMetaTypePrivate__QAssociativeIterableImpl_new2(QtMetaTypePrivate__QAssociativeIterableImpl* param1) {
	return new QtMetaTypePrivate::QAssociativeIterableImpl(*param1);
}

void QtMetaTypePrivate__QAssociativeIterableImpl_Begin(QtMetaTypePrivate__QAssociativeIterableImpl* self) {
	self->begin();
}

void QtMetaTypePrivate__QAssociativeIterableImpl_End(QtMetaTypePrivate__QAssociativeIterableImpl* self) {
	self->end();
}

bool QtMetaTypePrivate__QAssociativeIterableImpl_Equal(const QtMetaTypePrivate__QAssociativeIterableImpl* self, QtMetaTypePrivate__QAssociativeIterableImpl* other) {
	return self->equal(*other);
}

QtMetaTypePrivate__QAssociativeIterableImpl* QtMetaTypePrivate__QAssociativeIterableImpl_Advance(QtMetaTypePrivate__QAssociativeIterableImpl* self, int i) {
	QtMetaTypePrivate::QAssociativeIterableImpl& _ret = self->advance(static_cast<int>(i));
	// Cast returned reference into pointer
	return &_ret;
}

void QtMetaTypePrivate__QAssociativeIterableImpl_DestroyIter(QtMetaTypePrivate__QAssociativeIterableImpl* self) {
	self->destroyIter();
}

QtMetaTypePrivate__VariantData* QtMetaTypePrivate__QAssociativeIterableImpl_GetCurrentKey(const QtMetaTypePrivate__QAssociativeIterableImpl* self) {
	return new QtMetaTypePrivate::VariantData(self->getCurrentKey());
}

QtMetaTypePrivate__VariantData* QtMetaTypePrivate__QAssociativeIterableImpl_GetCurrentValue(const QtMetaTypePrivate__QAssociativeIterableImpl* self) {
	return new QtMetaTypePrivate::VariantData(self->getCurrentValue());
}

void QtMetaTypePrivate__QAssociativeIterableImpl_Find(QtMetaTypePrivate__QAssociativeIterableImpl* self, QtMetaTypePrivate__VariantData* key) {
	self->find(*key);
}

int QtMetaTypePrivate__QAssociativeIterableImpl_Size(const QtMetaTypePrivate__QAssociativeIterableImpl* self) {
	return self->size();
}

void QtMetaTypePrivate__QAssociativeIterableImpl_Copy(QtMetaTypePrivate__QAssociativeIterableImpl* self, QtMetaTypePrivate__QAssociativeIterableImpl* other) {
	self->copy(*other);
}

void QtMetaTypePrivate__QAssociativeIterableImpl_OperatorAssign(QtMetaTypePrivate__QAssociativeIterableImpl* self, QtMetaTypePrivate__QAssociativeIterableImpl* param1) {
	self->operator=(*param1);
}

void QtMetaTypePrivate__QAssociativeIterableImpl_Delete(QtMetaTypePrivate__QAssociativeIterableImpl* self) {
	delete self;
}

QtMetaTypePrivate__QPairVariantInterfaceImpl* QtMetaTypePrivate__QPairVariantInterfaceImpl_new() {
	return new QtMetaTypePrivate::QPairVariantInterfaceImpl();
}

QtMetaTypePrivate__QPairVariantInterfaceImpl* QtMetaTypePrivate__QPairVariantInterfaceImpl_new2(QtMetaTypePrivate__QPairVariantInterfaceImpl* param1) {
	return new QtMetaTypePrivate::QPairVariantInterfaceImpl(*param1);
}

QtMetaTypePrivate__VariantData* QtMetaTypePrivate__QPairVariantInterfaceImpl_First(const QtMetaTypePrivate__QPairVariantInterfaceImpl* self) {
	return new QtMetaTypePrivate::VariantData(self->first());
}

QtMetaTypePrivate__VariantData* QtMetaTypePrivate__QPairVariantInterfaceImpl_Second(const QtMetaTypePrivate__QPairVariantInterfaceImpl* self) {
	return new QtMetaTypePrivate::VariantData(self->second());
}

void QtMetaTypePrivate__QPairVariantInterfaceImpl_Delete(QtMetaTypePrivate__QPairVariantInterfaceImpl* self) {
	delete self;
}

