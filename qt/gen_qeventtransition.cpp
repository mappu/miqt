#include <QEventTransition>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qeventtransition.h"

#include "gen_qeventtransition.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QEventTransition* QEventTransition_new() {
	return new QEventTransition();
}

QEventTransition* QEventTransition_new2(QObject* object, uintptr_t typeVal) {
	return new QEventTransition(object, static_cast<QEvent::Type>(typeVal));
}

QEventTransition* QEventTransition_new3(QState* sourceState) {
	return new QEventTransition(sourceState);
}

QEventTransition* QEventTransition_new4(QObject* object, uintptr_t typeVal, QState* sourceState) {
	return new QEventTransition(object, static_cast<QEvent::Type>(typeVal), sourceState);
}

QMetaObject* QEventTransition_MetaObject(const QEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void QEventTransition_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventTransition_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QObject* QEventTransition_EventSource(const QEventTransition* self) {
	return self->eventSource();
}

void QEventTransition_SetEventSource(QEventTransition* self, QObject* object) {
	self->setEventSource(object);
}

uintptr_t QEventTransition_EventType(const QEventTransition* self) {
	QEvent::Type ret = self->eventType();
	return static_cast<uintptr_t>(ret);
}

void QEventTransition_SetEventType(QEventTransition* self, uintptr_t typeVal) {
	self->setEventType(static_cast<QEvent::Type>(typeVal));
}

void QEventTransition_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventTransition_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventTransition_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QEventTransition_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
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

