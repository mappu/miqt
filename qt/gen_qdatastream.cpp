#include <QByteArray>
#include <QDataStream>
#include <QIODevice>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__StreamStateSaver
#include "qdatastream.h"

#include "gen_qdatastream.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDataStream* QDataStream_new() {
	return new QDataStream();
}

QDataStream* QDataStream_new2(QIODevice* param1) {
	return new QDataStream(param1);
}

QDataStream* QDataStream_new3(QByteArray* param1, int flags) {
	return new QDataStream(param1, static_cast<QIODevice::OpenMode>(flags));
}

QDataStream* QDataStream_new4(QByteArray* param1) {
	return new QDataStream(*param1);
}

QIODevice* QDataStream_Device(QDataStream* self) {
	return const_cast<const QDataStream*>(self)->device();
}

void QDataStream_SetDevice(QDataStream* self, QIODevice* device) {
	self->setDevice(device);
}

void QDataStream_UnsetDevice(QDataStream* self) {
	self->unsetDevice();
}

bool QDataStream_AtEnd(QDataStream* self) {
	return const_cast<const QDataStream*>(self)->atEnd();
}

uintptr_t QDataStream_Status(QDataStream* self) {
	QDataStream::Status ret = const_cast<const QDataStream*>(self)->status();
	return static_cast<uintptr_t>(ret);
}

void QDataStream_SetStatus(QDataStream* self, uintptr_t status) {
	self->setStatus(static_cast<QDataStream::Status>(status));
}

void QDataStream_ResetStatus(QDataStream* self) {
	self->resetStatus();
}

uintptr_t QDataStream_FloatingPointPrecision(QDataStream* self) {
	QDataStream::FloatingPointPrecision ret = const_cast<const QDataStream*>(self)->floatingPointPrecision();
	return static_cast<uintptr_t>(ret);
}

void QDataStream_SetFloatingPointPrecision(QDataStream* self, uintptr_t precision) {
	self->setFloatingPointPrecision(static_cast<QDataStream::FloatingPointPrecision>(precision));
}

uintptr_t QDataStream_ByteOrder(QDataStream* self) {
	QDataStream::ByteOrder ret = const_cast<const QDataStream*>(self)->byteOrder();
	return static_cast<uintptr_t>(ret);
}

void QDataStream_SetByteOrder(QDataStream* self, uintptr_t byteOrder) {
	self->setByteOrder(static_cast<QDataStream::ByteOrder>(byteOrder));
}

int QDataStream_Version(QDataStream* self) {
	return const_cast<const QDataStream*>(self)->version();
}

void QDataStream_SetVersion(QDataStream* self, int version) {
	self->setVersion(static_cast<int>(version));
}

void QDataStream_OperatorShiftRight(QDataStream* self, signed char* i) {
	self->operator>>(static_cast<qint8&>(*i));
}

void QDataStream_OperatorShiftRightWithQuint8(QDataStream* self, unsigned char* i) {
	self->operator>>(static_cast<quint8&>(*i));
}

void QDataStream_OperatorShiftRightWithQint16(QDataStream* self, int16_t* i) {
	self->operator>>(static_cast<qint16&>(*i));
}

void QDataStream_OperatorShiftRightWithQuint16(QDataStream* self, uint16_t* i) {
	self->operator>>(static_cast<quint16&>(*i));
}

void QDataStream_OperatorShiftRightWithQint32(QDataStream* self, int* i) {
	self->operator>>(static_cast<qint32&>(*i));
}

void QDataStream_OperatorShiftRightWithQuint32(QDataStream* self, unsigned int* i) {
	self->operator>>(static_cast<quint32&>(*i));
}

void QDataStream_OperatorShiftRightWithQint64(QDataStream* self, long long* i) {
	self->operator>>(static_cast<qint64&>(*i));
}

void QDataStream_OperatorShiftRightWithQuint64(QDataStream* self, unsigned long long* i) {
	self->operator>>(static_cast<quint64&>(*i));
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

void QDataStream_OperatorShiftRightWithStr(QDataStream* self, char* str) {
	self->operator>>(str);
}

void QDataStream_OperatorShiftLeft(QDataStream* self, signed char i) {
	self->operator<<(static_cast<qint8>(i));
}

void QDataStream_OperatorShiftLeftWithQuint8(QDataStream* self, unsigned char i) {
	self->operator<<(static_cast<quint8>(i));
}

void QDataStream_OperatorShiftLeftWithQint16(QDataStream* self, int16_t i) {
	self->operator<<(static_cast<qint16>(i));
}

void QDataStream_OperatorShiftLeftWithQuint16(QDataStream* self, uint16_t i) {
	self->operator<<(static_cast<quint16>(i));
}

void QDataStream_OperatorShiftLeftWithQint32(QDataStream* self, int i) {
	self->operator<<(static_cast<qint32>(i));
}

void QDataStream_OperatorShiftLeftWithQuint32(QDataStream* self, unsigned int i) {
	self->operator<<(static_cast<quint32>(i));
}

void QDataStream_OperatorShiftLeftWithQint64(QDataStream* self, long long i) {
	self->operator<<(static_cast<qint64>(i));
}

void QDataStream_OperatorShiftLeftWithQuint64(QDataStream* self, unsigned long long i) {
	self->operator<<(static_cast<quint64>(i));
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

void QDataStream_OperatorShiftLeftWithStr(QDataStream* self, const char* str) {
	self->operator<<(str);
}

QDataStream* QDataStream_ReadBytes(QDataStream* self, char* param1, unsigned int* lenVal) {
	QDataStream& ret = self->readBytes(param1, static_cast<uint&>(*lenVal));
	// Cast returned reference into pointer
	return &ret;
}

int QDataStream_ReadRawData(QDataStream* self, char* param1, int lenVal) {
	return self->readRawData(param1, static_cast<int>(lenVal));
}

void QDataStream_WriteBytes(QDataStream* self, const char* param1, unsigned int lenVal) {
	self->writeBytes(param1, static_cast<uint>(lenVal));
}

int QDataStream_WriteRawData(QDataStream* self, const char* param1, int lenVal) {
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

QtPrivate__StreamStateSaver* QtPrivate__StreamStateSaver_new(QDataStream* s) {
	return new QtPrivate::StreamStateSaver(s);
}

QtPrivate__StreamStateSaver* QtPrivate__StreamStateSaver_new2(QtPrivate__StreamStateSaver* param1) {
	return new QtPrivate::StreamStateSaver(*param1);
}

void QtPrivate__StreamStateSaver_Delete(QtPrivate__StreamStateSaver* self) {
	delete self;
}

