#include <QByteArray>
#include <QCryptographicHash>
#include <QIODevice>
#include "qcryptographichash.h"

#include "gen_qcryptographichash.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCryptographicHash* QCryptographicHash_new(uintptr_t method) {
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

QByteArray* QCryptographicHash_Result(QCryptographicHash* self) {
	QByteArray ret = const_cast<const QCryptographicHash*>(self)->result();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QCryptographicHash_Hash(QByteArray* data, uintptr_t method) {
	QByteArray ret = QCryptographicHash::hash(*data, static_cast<QCryptographicHash::Algorithm>(method));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

int QCryptographicHash_HashLength(uintptr_t method) {
	return QCryptographicHash::hashLength(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_Delete(QCryptographicHash* self) {
	delete self;
}

