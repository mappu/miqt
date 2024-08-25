#include "gen_qmessageauthenticationcode.h"
#include "qmessageauthenticationcode.h"

#include <QByteArray>
#include <QIODevice>
#include <QMessageAuthenticationCode>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self) {
	self->reset();
}

void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, QByteArray* key) {
	self->setKey(*key);
}

void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, char* data, int length) {
	self->addData(data, static_cast<int>(length));
}

void QMessageAuthenticationCode_AddDataWithData(QMessageAuthenticationCode* self, QByteArray* data) {
	self->addData(*data);
}

bool QMessageAuthenticationCode_AddDataWithDevice(QMessageAuthenticationCode* self, QIODevice* device) {
	return self->addData(device);
}

QByteArray* QMessageAuthenticationCode_Result(QMessageAuthenticationCode* self) {
	QByteArray ret = self->result();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self) {
	delete self;
}

