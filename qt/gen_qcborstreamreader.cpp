#include <QByteArray>
#include <QCborError>
#include <QCborStreamReader>
#include <QIODevice>
#include "qcborstreamreader.h"
#include "gen_qcborstreamreader.h"
#include "_cgo_export.h"

QCborStreamReader* QCborStreamReader_new() {
	return new QCborStreamReader();
}

QCborStreamReader* QCborStreamReader_new2(const char* data, size_t lenVal) {
	return new QCborStreamReader(data, static_cast<qsizetype>(lenVal));
}

QCborStreamReader* QCborStreamReader_new3(const unsigned char* data, size_t lenVal) {
	return new QCborStreamReader(static_cast<const quint8*>(data), static_cast<qsizetype>(lenVal));
}

QCborStreamReader* QCborStreamReader_new4(QByteArray* data) {
	return new QCborStreamReader(*data);
}

QCborStreamReader* QCborStreamReader_new5(QIODevice* device) {
	return new QCborStreamReader(device);
}

void QCborStreamReader_SetDevice(QCborStreamReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QCborStreamReader_Device(const QCborStreamReader* self) {
	return self->device();
}

void QCborStreamReader_AddData(QCborStreamReader* self, QByteArray* data) {
	self->addData(*data);
}

void QCborStreamReader_AddData2(QCborStreamReader* self, const char* data, size_t lenVal) {
	self->addData(data, static_cast<qsizetype>(lenVal));
}

void QCborStreamReader_AddData3(QCborStreamReader* self, const unsigned char* data, size_t lenVal) {
	self->addData(static_cast<const quint8*>(data), static_cast<qsizetype>(lenVal));
}

void QCborStreamReader_Reparse(QCborStreamReader* self) {
	self->reparse();
}

void QCborStreamReader_Clear(QCborStreamReader* self) {
	self->clear();
}

void QCborStreamReader_Reset(QCborStreamReader* self) {
	self->reset();
}

QCborError* QCborStreamReader_LastError(QCborStreamReader* self) {
	QCborError _ret = self->lastError();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborError*>(new QCborError(_ret));
}

long long QCborStreamReader_CurrentOffset(const QCborStreamReader* self) {
	return self->currentOffset();
}

bool QCborStreamReader_IsValid(const QCborStreamReader* self) {
	return self->isValid();
}

int QCborStreamReader_ContainerDepth(const QCborStreamReader* self) {
	return self->containerDepth();
}

uintptr_t QCborStreamReader_ParentContainerType(const QCborStreamReader* self) {
	QCborStreamReader::Type _ret = self->parentContainerType();
	return static_cast<uintptr_t>(_ret);
}

bool QCborStreamReader_HasNext(const QCborStreamReader* self) {
	return self->hasNext();
}

bool QCborStreamReader_Next(QCborStreamReader* self) {
	return self->next();
}

uintptr_t QCborStreamReader_Type(const QCborStreamReader* self) {
	QCborStreamReader::Type _ret = self->type();
	return static_cast<uintptr_t>(_ret);
}

bool QCborStreamReader_IsUnsignedInteger(const QCborStreamReader* self) {
	return self->isUnsignedInteger();
}

bool QCborStreamReader_IsNegativeInteger(const QCborStreamReader* self) {
	return self->isNegativeInteger();
}

bool QCborStreamReader_IsInteger(const QCborStreamReader* self) {
	return self->isInteger();
}

bool QCborStreamReader_IsByteArray(const QCborStreamReader* self) {
	return self->isByteArray();
}

bool QCborStreamReader_IsString(const QCborStreamReader* self) {
	return self->isString();
}

bool QCborStreamReader_IsArray(const QCborStreamReader* self) {
	return self->isArray();
}

bool QCborStreamReader_IsMap(const QCborStreamReader* self) {
	return self->isMap();
}

bool QCborStreamReader_IsTag(const QCborStreamReader* self) {
	return self->isTag();
}

bool QCborStreamReader_IsSimpleType(const QCborStreamReader* self) {
	return self->isSimpleType();
}

bool QCborStreamReader_IsFloat16(const QCborStreamReader* self) {
	return self->isFloat16();
}

bool QCborStreamReader_IsFloat(const QCborStreamReader* self) {
	return self->isFloat();
}

bool QCborStreamReader_IsDouble(const QCborStreamReader* self) {
	return self->isDouble();
}

bool QCborStreamReader_IsInvalid(const QCborStreamReader* self) {
	return self->isInvalid();
}

bool QCborStreamReader_IsFalse(const QCborStreamReader* self) {
	return self->isFalse();
}

bool QCborStreamReader_IsTrue(const QCborStreamReader* self) {
	return self->isTrue();
}

bool QCborStreamReader_IsBool(const QCborStreamReader* self) {
	return self->isBool();
}

bool QCborStreamReader_IsNull(const QCborStreamReader* self) {
	return self->isNull();
}

bool QCborStreamReader_IsUndefined(const QCborStreamReader* self) {
	return self->isUndefined();
}

bool QCborStreamReader_IsLengthKnown(const QCborStreamReader* self) {
	return self->isLengthKnown();
}

unsigned long long QCborStreamReader_Length(const QCborStreamReader* self) {
	return self->length();
}

bool QCborStreamReader_IsContainer(const QCborStreamReader* self) {
	return self->isContainer();
}

bool QCborStreamReader_EnterContainer(QCborStreamReader* self) {
	return self->enterContainer();
}

bool QCborStreamReader_LeaveContainer(QCborStreamReader* self) {
	return self->leaveContainer();
}

size_t QCborStreamReader_CurrentStringChunkSize(const QCborStreamReader* self) {
	return self->currentStringChunkSize();
}

bool QCborStreamReader_ToBool(const QCborStreamReader* self) {
	return self->toBool();
}

unsigned long long QCborStreamReader_ToUnsignedInteger(const QCborStreamReader* self) {
	return self->toUnsignedInteger();
}

float QCborStreamReader_ToFloat(const QCborStreamReader* self) {
	return self->toFloat();
}

double QCborStreamReader_ToDouble(const QCborStreamReader* self) {
	return self->toDouble();
}

long long QCborStreamReader_ToInteger(const QCborStreamReader* self) {
	return self->toInteger();
}

bool QCborStreamReader_Next1(QCborStreamReader* self, int maxRecursion) {
	return self->next(static_cast<int>(maxRecursion));
}

void QCborStreamReader_Delete(QCborStreamReader* self) {
	delete self;
}

