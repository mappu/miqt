#include "gen_qcryptographichash.h"
#include "qcryptographichash.h"

#include <QByteArray>
#include <QCryptographicHash>
#include <QIODevice>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QCryptographicHash_Reset(QCryptographicHash* self) {
	self->reset();
}

void QCryptographicHash_AddData(QCryptographicHash* self, char* data, int length) {
	self->addData(data, static_cast<int>(length));
}

void QCryptographicHash_AddDataWithData(QCryptographicHash* self, QByteArray* data) {
	self->addData(*data);
}

bool QCryptographicHash_AddDataWithDevice(QCryptographicHash* self, QIODevice* device) {
	return self->addData(device);
}

QByteArray* QCryptographicHash_Result(QCryptographicHash* self) {
	QByteArray ret = self->result();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QCryptographicHash_Delete(QCryptographicHash* self) {
	delete self;
}

