#include <QByteArray>
#include <QDataStream>
#include <QIODevice>
#include <qdatastream.h>
#include "gen_qdatastream.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QDataStream* QDataStream_new() {
	return new QDataStream();
}

QDataStream* QDataStream_new2(QIODevice* param1) {
	return new QDataStream(param1);
}

QDataStream* QDataStream_new3(struct miqt_string param1) {
	QByteArray param1_QByteArray(param1.data, param1.len);
	return new QDataStream(param1_QByteArray);
}

QIODevice* QDataStream_device(const QDataStream* self) {
	return self->device();
}

void QDataStream_setDevice(QDataStream* self, QIODevice* device) {
	self->setDevice(device);
}

void QDataStream_unsetDevice(QDataStream* self) {
	self->unsetDevice();
}

bool QDataStream_atEnd(const QDataStream* self) {
	return self->atEnd();
}

int QDataStream_status(const QDataStream* self) {
	QDataStream::Status _ret = self->status();
	return static_cast<int>(_ret);
}

void QDataStream_setStatus(QDataStream* self, int status) {
	self->setStatus(static_cast<QDataStream::Status>(status));
}

void QDataStream_resetStatus(QDataStream* self) {
	self->resetStatus();
}

int QDataStream_floatingPointPrecision(const QDataStream* self) {
	QDataStream::FloatingPointPrecision _ret = self->floatingPointPrecision();
	return static_cast<int>(_ret);
}

void QDataStream_setFloatingPointPrecision(QDataStream* self, int precision) {
	self->setFloatingPointPrecision(static_cast<QDataStream::FloatingPointPrecision>(precision));
}

int QDataStream_byteOrder(const QDataStream* self) {
	QDataStream::ByteOrder _ret = self->byteOrder();
	return static_cast<int>(_ret);
}

void QDataStream_setByteOrder(QDataStream* self, int byteOrder) {
	self->setByteOrder(static_cast<QDataStream::ByteOrder>(byteOrder));
}

int QDataStream_version(const QDataStream* self) {
	return self->version();
}

void QDataStream_setVersion(QDataStream* self, int version) {
	self->setVersion(static_cast<int>(version));
}

void QDataStream_operatorShiftRight(QDataStream* self, signed char* i) {
	self->operator>>(static_cast<qint8&>(*i));
}

void QDataStream_operatorShiftRightWithQuint8(QDataStream* self, unsigned char* i) {
	self->operator>>(static_cast<quint8&>(*i));
}

void QDataStream_operatorShiftRightWithQint16(QDataStream* self, int16_t* i) {
	self->operator>>(static_cast<qint16&>(*i));
}

void QDataStream_operatorShiftRightWithQuint16(QDataStream* self, uint16_t* i) {
	self->operator>>(static_cast<quint16&>(*i));
}

void QDataStream_operatorShiftRightWithQint32(QDataStream* self, int* i) {
	self->operator>>(static_cast<qint32&>(*i));
}

void QDataStream_operatorShiftRightWithQuint32(QDataStream* self, unsigned int* i) {
	self->operator>>(static_cast<quint32&>(*i));
}

void QDataStream_operatorShiftRightWithQint64(QDataStream* self, long long* i) {
	self->operator>>(static_cast<qint64&>(*i));
}

void QDataStream_operatorShiftRightWithQuint64(QDataStream* self, unsigned long long* i) {
	self->operator>>(static_cast<quint64&>(*i));
}

void QDataStream_operatorShiftRightWithBool(QDataStream* self, bool* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithFloat(QDataStream* self, float* f) {
	self->operator>>(static_cast<float&>(*f));
}

void QDataStream_operatorShiftRightWithDouble(QDataStream* self, double* f) {
	self->operator>>(static_cast<double&>(*f));
}

void QDataStream_operatorShiftRightWithStr(QDataStream* self, char* str) {
	self->operator>>(str);
}

void QDataStream_operatorShiftLeft(QDataStream* self, signed char i) {
	self->operator<<(static_cast<qint8>(i));
}

void QDataStream_operatorShiftLeftWithQuint8(QDataStream* self, unsigned char i) {
	self->operator<<(static_cast<quint8>(i));
}

void QDataStream_operatorShiftLeftWithQint16(QDataStream* self, int16_t i) {
	self->operator<<(static_cast<qint16>(i));
}

void QDataStream_operatorShiftLeftWithQuint16(QDataStream* self, uint16_t i) {
	self->operator<<(static_cast<quint16>(i));
}

void QDataStream_operatorShiftLeftWithQint32(QDataStream* self, int i) {
	self->operator<<(static_cast<qint32>(i));
}

void QDataStream_operatorShiftLeftWithQuint32(QDataStream* self, unsigned int i) {
	self->operator<<(static_cast<quint32>(i));
}

void QDataStream_operatorShiftLeftWithQint64(QDataStream* self, long long i) {
	self->operator<<(static_cast<qint64>(i));
}

void QDataStream_operatorShiftLeftWithQuint64(QDataStream* self, unsigned long long i) {
	self->operator<<(static_cast<quint64>(i));
}

void QDataStream_operatorShiftLeftWithBool(QDataStream* self, bool i) {
	self->operator<<(i);
}

void QDataStream_operatorShiftLeftWithFloat(QDataStream* self, float f) {
	self->operator<<(static_cast<float>(f));
}

void QDataStream_operatorShiftLeftWithDouble(QDataStream* self, double f) {
	self->operator<<(static_cast<double>(f));
}

void QDataStream_operatorShiftLeftWithStr(QDataStream* self, const char* str) {
	self->operator<<(str);
}

QDataStream* QDataStream_readBytes(QDataStream* self, char* param1, unsigned int* len) {
	QDataStream& _ret = self->readBytes(param1, static_cast<uint&>(*len));
	// Cast returned reference into pointer
	return &_ret;
}

int QDataStream_readRawData(QDataStream* self, char* param1, int len) {
	return self->readRawData(param1, static_cast<int>(len));
}

void QDataStream_writeBytes(QDataStream* self, const char* param1, unsigned int len) {
	self->writeBytes(param1, static_cast<uint>(len));
}

int QDataStream_writeRawData(QDataStream* self, const char* param1, int len) {
	return self->writeRawData(param1, static_cast<int>(len));
}

int QDataStream_skipRawData(QDataStream* self, int len) {
	return self->skipRawData(static_cast<int>(len));
}

void QDataStream_startTransaction(QDataStream* self) {
	self->startTransaction();
}

bool QDataStream_commitTransaction(QDataStream* self) {
	return self->commitTransaction();
}

void QDataStream_rollbackTransaction(QDataStream* self) {
	self->rollbackTransaction();
}

void QDataStream_abortTransaction(QDataStream* self) {
	self->abortTransaction();
}

void QDataStream_delete(QDataStream* self) {
	delete self;
}

