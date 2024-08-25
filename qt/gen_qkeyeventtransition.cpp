#include "gen_qkeyeventtransition.h"
#include "qkeyeventtransition.h"

#include <QKeyEventTransition>
#include <QMetaObject>
#include <QState>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QKeyEventTransition* QKeyEventTransition_new() {
	return new QKeyEventTransition();
}

QKeyEventTransition* QKeyEventTransition_new2(QState* sourceState) {
	return new QKeyEventTransition(sourceState);
}

QMetaObject* QKeyEventTransition_MetaObject(QKeyEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void QKeyEventTransition_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QKeyEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QKeyEventTransition_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QKeyEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QKeyEventTransition_Key(QKeyEventTransition* self) {
	return self->key();
}

void QKeyEventTransition_SetKey(QKeyEventTransition* self, int key) {
	self->setKey(static_cast<int>(key));
}

void QKeyEventTransition_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QKeyEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QKeyEventTransition_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QKeyEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QKeyEventTransition_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QKeyEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QKeyEventTransition_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QKeyEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QKeyEventTransition_Delete(QKeyEventTransition* self) {
	delete self;
}

