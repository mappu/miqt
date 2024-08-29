#include <QByteArray>
#include <QCborError>
#include <QCborStreamReader>
#include <QIODevice>
#include "qcborstreamreader.h"

#include "gen_qcborstreamreader.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

QIODevice* QCborStreamReader_Device(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->device();
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
	QCborError ret = self->lastError();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborError*>(new QCborError(ret));
}

long long QCborStreamReader_CurrentOffset(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->currentOffset();
}

bool QCborStreamReader_IsValid(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isValid();
}

int QCborStreamReader_ContainerDepth(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->containerDepth();
}

uintptr_t QCborStreamReader_ParentContainerType(QCborStreamReader* self) {
	QCborStreamReader::Type ret = const_cast<const QCborStreamReader*>(self)->parentContainerType();
	return static_cast<uintptr_t>(ret);
}

bool QCborStreamReader_HasNext(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->hasNext();
}

bool QCborStreamReader_Next(QCborStreamReader* self) {
	return self->next();
}

uintptr_t QCborStreamReader_Type(QCborStreamReader* self) {
	QCborStreamReader::Type ret = const_cast<const QCborStreamReader*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

bool QCborStreamReader_IsUnsignedInteger(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isUnsignedInteger();
}

bool QCborStreamReader_IsNegativeInteger(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isNegativeInteger();
}

bool QCborStreamReader_IsInteger(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isInteger();
}

bool QCborStreamReader_IsByteArray(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isByteArray();
}

bool QCborStreamReader_IsString(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isString();
}

bool QCborStreamReader_IsArray(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isArray();
}

bool QCborStreamReader_IsMap(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isMap();
}

bool QCborStreamReader_IsTag(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isTag();
}

bool QCborStreamReader_IsSimpleType(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isSimpleType();
}

bool QCborStreamReader_IsFloat16(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isFloat16();
}

bool QCborStreamReader_IsFloat(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isFloat();
}

bool QCborStreamReader_IsDouble(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isDouble();
}

bool QCborStreamReader_IsInvalid(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isInvalid();
}

bool QCborStreamReader_IsFalse(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isFalse();
}

bool QCborStreamReader_IsTrue(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isTrue();
}

bool QCborStreamReader_IsBool(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isBool();
}

bool QCborStreamReader_IsNull(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isNull();
}

bool QCborStreamReader_IsUndefined(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isUndefined();
}

bool QCborStreamReader_IsLengthKnown(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isLengthKnown();
}

unsigned long long QCborStreamReader_Length(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->length();
}

bool QCborStreamReader_IsContainer(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->isContainer();
}

bool QCborStreamReader_EnterContainer(QCborStreamReader* self) {
	return self->enterContainer();
}

bool QCborStreamReader_LeaveContainer(QCborStreamReader* self) {
	return self->leaveContainer();
}

size_t QCborStreamReader_CurrentStringChunkSize(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->currentStringChunkSize();
}

bool QCborStreamReader_ToBool(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->toBool();
}

unsigned long long QCborStreamReader_ToUnsignedInteger(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->toUnsignedInteger();
}

float QCborStreamReader_ToFloat(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->toFloat();
}

double QCborStreamReader_ToDouble(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->toDouble();
}

long long QCborStreamReader_ToInteger(QCborStreamReader* self) {
	return const_cast<const QCborStreamReader*>(self)->toInteger();
}

bool QCborStreamReader_Next1(QCborStreamReader* self, int maxRecursion) {
	return self->next(static_cast<int>(maxRecursion));
}

void QCborStreamReader_Delete(QCborStreamReader* self) {
	delete self;
}

