#include <QMetaObject>
#include <QObject>
#include <QSocketDescriptor>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qsocketnotifier.h"

#include "gen_qsocketnotifier.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSocketNotifier* QSocketNotifier_new(uintptr_t socket, uintptr_t param2) {
	return new QSocketNotifier(static_cast<qptrdiff>(socket), static_cast<QSocketNotifier::Type>(param2));
}

QSocketNotifier* QSocketNotifier_new2(uintptr_t socket, uintptr_t param2, QObject* parent) {
	return new QSocketNotifier(static_cast<qptrdiff>(socket), static_cast<QSocketNotifier::Type>(param2), parent);
}

QMetaObject* QSocketNotifier_MetaObject(const QSocketNotifier* self) {
	return (QMetaObject*) self->metaObject();
}

void QSocketNotifier_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSocketNotifier::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSocketNotifier_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSocketNotifier::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

ptrdiff_t QSocketNotifier_Socket(const QSocketNotifier* self) {
	return self->socket();
}

uintptr_t QSocketNotifier_Type(const QSocketNotifier* self) {
	QSocketNotifier::Type ret = self->type();
	return static_cast<uintptr_t>(ret);
}

bool QSocketNotifier_IsEnabled(const QSocketNotifier* self) {
	return self->isEnabled();
}

void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled) {
	self->setEnabled(enabled);
}

void QSocketNotifier_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSocketNotifier::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSocketNotifier_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSocketNotifier::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSocketNotifier_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSocketNotifier::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSocketNotifier_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
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

QSocketDescriptor* QSocketDescriptor_new() {
	return new QSocketDescriptor();
}

QSocketDescriptor* QSocketDescriptor_new2(QSocketDescriptor* param1) {
	return new QSocketDescriptor(*param1);
}

QSocketDescriptor* QSocketDescriptor_new3(uintptr_t descriptor) {
#ifdef Q_OS_LINUX
	return new QSocketDescriptor(static_cast<QSocketDescriptor::DescriptorType>(descriptor));
#else
	return nullptr;
#endif
}

bool QSocketDescriptor_IsValid(const QSocketDescriptor* self) {
	return self->isValid();
}

void QSocketDescriptor_Delete(QSocketDescriptor* self) {
	delete self;
}

