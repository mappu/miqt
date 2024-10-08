#include <QByteArray>
#include <QCryptographicHash>
#include <QIODevice>
#include "qcryptographichash.h"
#include "gen_qcryptographichash.h"
#include "_cgo_export.h"

QCryptographicHash* QCryptographicHash_new(int method) {
	return new QCryptographicHash(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_Reset(QCryptographicHash* self) {
	self->reset();
}

void QCryptographicHash_AddData(QCryptographicHash* self, const char* data, int length) {
	self->addData(data, static_cast<int>(length));
}

void QCryptographicHash_AddDataWithData(QCryptographicHash* self, QByteArray* data) {
	self->addData(*data);
}

bool QCryptographicHash_AddDataWithDevice(QCryptographicHash* self, QIODevice* device) {
	return self->addData(device);
}

QByteArray* QCryptographicHash_Result(const QCryptographicHash* self) {
	return new QByteArray(self->result());
}

QByteArray* QCryptographicHash_Hash(QByteArray* data, int method) {
	return new QByteArray(QCryptographicHash::hash(*data, static_cast<QCryptographicHash::Algorithm>(method)));
}

int QCryptographicHash_HashLength(int method) {
	return QCryptographicHash::hashLength(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_Delete(QCryptographicHash* self) {
	delete self;
}

