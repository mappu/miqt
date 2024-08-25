#include "gen_qdatastream.h"
#include "qdatastream.h"

#include <QByteArray>
#include <QDataStream>
#include <QIODevice>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDataStream* QDataStream_new() {
	return new QDataStream();
}

QDataStream* QDataStream_new2(QIODevice* param1) {
	return new QDataStream(param1);
}

QDataStream* QDataStream_new3(QByteArray* param1) {
	return new QDataStream(*param1);
}

QIODevice* QDataStream_Device(QDataStream* self) {
	return self->device();
}

void QDataStream_SetDevice(QDataStream* self, QIODevice* device) {
	self->setDevice(device);
}

void QDataStream_UnsetDevice(QDataStream* self) {
	self->unsetDevice();
}

bool QDataStream_AtEnd(QDataStream* self) {
	return self->atEnd();
}

void QDataStream_ResetStatus(QDataStream* self) {
	self->resetStatus();
}

int QDataStream_Version(QDataStream* self) {
	return self->version();
}

void QDataStream_SetVersion(QDataStream* self, int version) {
	self->setVersion(static_cast<int>(version));
}

void QDataStream_OperatorShiftRight(QDataStream* self, int8_t* i) {
	self->operator>>(static_cast<qint8&>(*i));
}

void QDataStream_OperatorShiftRightWithQuint8(QDataStream* self, uint8_t* i) {
	self->operator>>(static_cast<quint8&>(*i));
}

void QDataStream_OperatorShiftRightWithQint16(QDataStream* self, int16_t* i) {
	self->operator>>(static_cast<qint16&>(*i));
}

void QDataStream_OperatorShiftRightWithQuint16(QDataStream* self, uint16_t* i) {
	self->operator>>(static_cast<quint16&>(*i));
}

void QDataStream_OperatorShiftRightWithQint32(QDataStream* self, int32_t* i) {
	self->operator>>(static_cast<qint32&>(*i));
}

void QDataStream_OperatorShiftRightWithQuint32(QDataStream* self, uint32_t* i) {
	self->operator>>(static_cast<quint32&>(*i));
}

void QDataStream_OperatorShiftRightWithQint64(QDataStream* self, int64_t* i) {
	self->operator>>((qint64&)(*i));
}

void QDataStream_OperatorShiftRightWithQuint64(QDataStream* self, uint64_t* i) {
	self->operator>>((quint64&)(*i));
}

void QDataStream_OperatorShiftRightWithBool(QDataStream* self, bool* i) {
	self->operator>>(*i);
}

void QDataStream_OperatorShiftRightWithFloat(QDataStream* self, float* f) {
	self->operator>>(static_cast<float&>(*f));
}

void QDataStream_OperatorShiftRightWithDouble(QDataStream* self, double* f) {
	self->operator>>(static_cast<double&>(*f));
}

void QDataStream_OperatorShiftLeft(QDataStream* self, int8_t i) {
	self->operator<<(static_cast<qint8>(i));
}

void QDataStream_OperatorShiftLeftWithQuint8(QDataStream* self, uint8_t i) {
	self->operator<<(static_cast<quint8>(i));
}

void QDataStream_OperatorShiftLeftWithQint16(QDataStream* self, int16_t i) {
	self->operator<<(static_cast<qint16>(i));
}

void QDataStream_OperatorShiftLeftWithQuint16(QDataStream* self, uint16_t i) {
	self->operator<<(static_cast<quint16>(i));
}

void QDataStream_OperatorShiftLeftWithQint32(QDataStream* self, int32_t i) {
	self->operator<<(static_cast<qint32>(i));
}

void QDataStream_OperatorShiftLeftWithQuint32(QDataStream* self, uint32_t i) {
	self->operator<<(static_cast<quint32>(i));
}

void QDataStream_OperatorShiftLeftWithQint64(QDataStream* self, int64_t i) {
	self->operator<<((qint64)(i));
}

void QDataStream_OperatorShiftLeftWithQuint64(QDataStream* self, uint64_t i) {
	self->operator<<((quint64)(i));
}

void QDataStream_OperatorShiftLeftWithBool(QDataStream* self, bool i) {
	self->operator<<(i);
}

void QDataStream_OperatorShiftLeftWithFloat(QDataStream* self, float f) {
	self->operator<<(static_cast<float>(f));
}

void QDataStream_OperatorShiftLeftWithDouble(QDataStream* self, double f) {
	self->operator<<(static_cast<double>(f));
}

void QDataStream_OperatorShiftLeftWithStr(QDataStream* self, char* str) {
	self->operator<<(str);
}

int QDataStream_ReadRawData(QDataStream* self, char* param1, int lenVal) {
	return self->readRawData(param1, static_cast<int>(lenVal));
}

void QDataStream_WriteBytes(QDataStream* self, char* param1, unsigned int lenVal) {
	self->writeBytes(param1, static_cast<uint>(lenVal));
}

int QDataStream_WriteRawData(QDataStream* self, char* param1, int lenVal) {
	return self->writeRawData(param1, static_cast<int>(lenVal));
}

int QDataStream_SkipRawData(QDataStream* self, int lenVal) {
	return self->skipRawData(static_cast<int>(lenVal));
}

void QDataStream_StartTransaction(QDataStream* self) {
	self->startTransaction();
}

bool QDataStream_CommitTransaction(QDataStream* self) {
	return self->commitTransaction();
}

void QDataStream_RollbackTransaction(QDataStream* self) {
	self->rollbackTransaction();
}

void QDataStream_AbortTransaction(QDataStream* self) {
	self->abortTransaction();
}

void QDataStream_Delete(QDataStream* self) {
	delete self;
}

