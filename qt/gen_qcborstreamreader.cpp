#include "gen_qcborstreamreader.h"
#include "qcborstreamreader.h"

#include <QByteArray>
#include <QCborError>
#include <QCborStreamReader>
#include <QIODevice>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCborStreamReader* QCborStreamReader_new() {
	return new QCborStreamReader();
}

QCborStreamReader* QCborStreamReader_new2(char* data, size_t lenVal) {
	return new QCborStreamReader(data, static_cast<qsizetype>(lenVal));
}

QCborStreamReader* QCborStreamReader_new3(uint8_t* data, size_t lenVal) {
	return new QCborStreamReader(static_cast<quint8*>(data), static_cast<qsizetype>(lenVal));
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
	return self->device();
}

void QCborStreamReader_AddData(QCborStreamReader* self, QByteArray* data) {
	self->addData(*data);
}

void QCborStreamReader_AddData2(QCborStreamReader* self, char* data, size_t lenVal) {
	self->addData(data, static_cast<qsizetype>(lenVal));
}

void QCborStreamReader_AddData3(QCborStreamReader* self, uint8_t* data, size_t lenVal) {
	self->addData(static_cast<quint8*>(data), static_cast<qsizetype>(lenVal));
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

int64_t QCborStreamReader_CurrentOffset(QCborStreamReader* self) {
	return self->currentOffset();
}

bool QCborStreamReader_IsValid(QCborStreamReader* self) {
	return self->isValid();
}

int QCborStreamReader_ContainerDepth(QCborStreamReader* self) {
	return self->containerDepth();
}

bool QCborStreamReader_HasNext(QCborStreamReader* self) {
	return self->hasNext();
}

bool QCborStreamReader_Next(QCborStreamReader* self) {
	return self->next();
}

bool QCborStreamReader_IsUnsignedInteger(QCborStreamReader* self) {
	return self->isUnsignedInteger();
}

bool QCborStreamReader_IsNegativeInteger(QCborStreamReader* self) {
	return self->isNegativeInteger();
}

bool QCborStreamReader_IsInteger(QCborStreamReader* self) {
	return self->isInteger();
}

bool QCborStreamReader_IsByteArray(QCborStreamReader* self) {
	return self->isByteArray();
}

bool QCborStreamReader_IsString(QCborStreamReader* self) {
	return self->isString();
}

bool QCborStreamReader_IsArray(QCborStreamReader* self) {
	return self->isArray();
}

bool QCborStreamReader_IsMap(QCborStreamReader* self) {
	return self->isMap();
}

bool QCborStreamReader_IsTag(QCborStreamReader* self) {
	return self->isTag();
}

bool QCborStreamReader_IsSimpleType(QCborStreamReader* self) {
	return self->isSimpleType();
}

bool QCborStreamReader_IsFloat16(QCborStreamReader* self) {
	return self->isFloat16();
}

bool QCborStreamReader_IsFloat(QCborStreamReader* self) {
	return self->isFloat();
}

bool QCborStreamReader_IsDouble(QCborStreamReader* self) {
	return self->isDouble();
}

bool QCborStreamReader_IsInvalid(QCborStreamReader* self) {
	return self->isInvalid();
}

bool QCborStreamReader_IsFalse(QCborStreamReader* self) {
	return self->isFalse();
}

bool QCborStreamReader_IsTrue(QCborStreamReader* self) {
	return self->isTrue();
}

bool QCborStreamReader_IsBool(QCborStreamReader* self) {
	return self->isBool();
}

bool QCborStreamReader_IsNull(QCborStreamReader* self) {
	return self->isNull();
}

bool QCborStreamReader_IsUndefined(QCborStreamReader* self) {
	return self->isUndefined();
}

bool QCborStreamReader_IsLengthKnown(QCborStreamReader* self) {
	return self->isLengthKnown();
}

uint64_t QCborStreamReader_Length(QCborStreamReader* self) {
	return self->length();
}

bool QCborStreamReader_IsContainer(QCborStreamReader* self) {
	return self->isContainer();
}

bool QCborStreamReader_EnterContainer(QCborStreamReader* self) {
	return self->enterContainer();
}

bool QCborStreamReader_LeaveContainer(QCborStreamReader* self) {
	return self->leaveContainer();
}

size_t QCborStreamReader_CurrentStringChunkSize(QCborStreamReader* self) {
	return self->currentStringChunkSize();
}

bool QCborStreamReader_ToBool(QCborStreamReader* self) {
	return self->toBool();
}

uint64_t QCborStreamReader_ToUnsignedInteger(QCborStreamReader* self) {
	return self->toUnsignedInteger();
}

float QCborStreamReader_ToFloat(QCborStreamReader* self) {
	return self->toFloat();
}

double QCborStreamReader_ToDouble(QCborStreamReader* self) {
	return self->toDouble();
}

int64_t QCborStreamReader_ToInteger(QCborStreamReader* self) {
	return self->toInteger();
}

bool QCborStreamReader_Next1(QCborStreamReader* self, int maxRecursion) {
	return self->next(static_cast<int>(maxRecursion));
}

void QCborStreamReader_Delete(QCborStreamReader* self) {
	delete self;
}

