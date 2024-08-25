#include "gen_qsocketnotifier.h"
#include "qsocketnotifier.h"

#include <QMetaObject>
#include <QSocketDescriptor>
#include <QSocketNotifier>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QSocketNotifier_MetaObject(QSocketNotifier* self) {
	return (QMetaObject*) self->metaObject();
}

void QSocketNotifier_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSocketNotifier::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSocketNotifier_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSocketNotifier::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

intptr_t QSocketNotifier_Socket(QSocketNotifier* self) {
	return self->socket();
}

bool QSocketNotifier_IsEnabled(QSocketNotifier* self) {
	return self->isEnabled();
}

void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled) {
	self->setEnabled(enabled);
}

void QSocketNotifier_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSocketNotifier::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSocketNotifier_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSocketNotifier::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSocketNotifier_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSocketNotifier::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSocketNotifier_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSocketNotifier::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSocketNotifier_Delete(QSocketNotifier* self) {
	delete self;
}

QSocketDescriptor* QSocketDescriptor_new(QSocketDescriptor* param1) {
	return new QSocketDescriptor(*param1);
}

bool QSocketDescriptor_IsValid(QSocketDescriptor* self) {
	return self->isValid();
}

void QSocketDescriptor_Delete(QSocketDescriptor* self) {
	delete self;
}

