#include "gen_qiconengine.h"
#include "qiconengine.h"

#include <QDataStream>
#include <QIconEngine>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QIconEngine_Key(QIconEngine* self, char** _out, int* _out_Strlen) {
	QString ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QIconEngine* QIconEngine_Clone(QIconEngine* self) {
	return self->clone();
}

bool QIconEngine_Read(QIconEngine* self, QDataStream* in) {
	return self->read(*in);
}

bool QIconEngine_Write(QIconEngine* self, QDataStream* out) {
	return self->write(*out);
}

void QIconEngine_IconName(QIconEngine* self, char** _out, int* _out_Strlen) {
	QString ret = self->iconName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QIconEngine_IsNull(QIconEngine* self) {
	return self->isNull();
}

void QIconEngine_Delete(QIconEngine* self) {
	delete self;
}

