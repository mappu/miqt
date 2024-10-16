#include <QByteArray>
#include <QIODevice>
#include <QMessageAuthenticationCode>
#include <qmessageauthenticationcode.h>
#include "gen_qmessageauthenticationcode.h"
#include "_cgo_export.h"

QMessageAuthenticationCode* QMessageAuthenticationCode_new(int method) {
	return new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method));
}

QMessageAuthenticationCode* QMessageAuthenticationCode_new2(int method, QByteArray* key) {
	return new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method), *key);
}

void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self) {
	self->reset();
}

void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, QByteArray* key) {
	self->setKey(*key);
}

void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, const char* data, int length) {
	self->addData(data, static_cast<int>(length));
}

void QMessageAuthenticationCode_AddDataWithData(QMessageAuthenticationCode* self, QByteArray* data) {
	self->addData(*data);
}

bool QMessageAuthenticationCode_AddDataWithDevice(QMessageAuthenticationCode* self, QIODevice* device) {
	return self->addData(device);
}

QByteArray* QMessageAuthenticationCode_Result(const QMessageAuthenticationCode* self) {
	return new QByteArray(self->result());
}

QByteArray* QMessageAuthenticationCode_Hash(QByteArray* message, QByteArray* key, int method) {
	return new QByteArray(QMessageAuthenticationCode::hash(*message, *key, static_cast<QCryptographicHash::Algorithm>(method)));
}

void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self) {
	delete self;
}

