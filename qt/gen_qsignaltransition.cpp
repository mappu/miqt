#include <QByteArray>
#include <QMetaObject>
#include <QObject>
#include <QSignalTransition>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qsignaltransition.h"

#include "gen_qsignaltransition.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSignalTransition* QSignalTransition_new() {
	return new QSignalTransition();
}

QSignalTransition* QSignalTransition_new2(QObject* sender, const char* signal) {
	return new QSignalTransition(sender, signal);
}

QSignalTransition* QSignalTransition_new3(QState* sourceState) {
	return new QSignalTransition(sourceState);
}

QSignalTransition* QSignalTransition_new4(QObject* sender, const char* signal, QState* sourceState) {
	return new QSignalTransition(sender, signal, sourceState);
}

QMetaObject* QSignalTransition_MetaObject(QSignalTransition* self) {
	return (QMetaObject*) const_cast<const QSignalTransition*>(self)->metaObject();
}

void QSignalTransition_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSignalTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSignalTransition_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSignalTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QObject* QSignalTransition_SenderObject(QSignalTransition* self) {
	return const_cast<const QSignalTransition*>(self)->senderObject();
}

void QSignalTransition_SetSenderObject(QSignalTransition* self, QObject* sender) {
	self->setSenderObject(sender);
}

QByteArray* QSignalTransition_Signal(QSignalTransition* self) {
	QByteArray ret = const_cast<const QSignalTransition*>(self)->signal();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QSignalTransition_SetSignal(QSignalTransition* self, QByteArray* signal) {
	self->setSignal(*signal);
}

void QSignalTransition_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSignalTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSignalTransition_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSignalTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSignalTransition_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSignalTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSignalTransition_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSignalTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSignalTransition_Delete(QSignalTransition* self) {
	delete self;
}

