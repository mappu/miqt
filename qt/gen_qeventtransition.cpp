#include "gen_qeventtransition.h"
#include "qeventtransition.h"

#include <QEventTransition>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QEventTransition* QEventTransition_new() {
	return new QEventTransition();
}

QEventTransition* QEventTransition_new2(QState* sourceState) {
	return new QEventTransition(sourceState);
}

QMetaObject* QEventTransition_MetaObject(QEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void QEventTransition_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventTransition_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QObject* QEventTransition_EventSource(QEventTransition* self) {
	return self->eventSource();
}

void QEventTransition_SetEventSource(QEventTransition* self, QObject* object) {
	self->setEventSource(object);
}

void QEventTransition_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventTransition_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventTransition_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventTransition_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventTransition_Delete(QEventTransition* self) {
	delete self;
}

