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

QSocketNotifier* QSocketNotifier_new(ptrdiff_t socket, uintptr_t param2) {
	return new QSocketNotifier(static_cast<qintptr>(socket), static_cast<QSocketNotifier::Type>(param2));
}

QSocketNotifier* QSocketNotifier_new2(ptrdiff_t socket, uintptr_t param2, QObject* parent) {
	return new QSocketNotifier(static_cast<qintptr>(socket), static_cast<QSocketNotifier::Type>(param2), parent);
}

QMetaObject* QSocketNotifier_MetaObject(QSocketNotifier* self) {
	return (QMetaObject*) const_cast<const QSocketNotifier*>(self)->metaObject();
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

ptrdiff_t QSocketNotifier_Socket(QSocketNotifier* self) {
	return const_cast<const QSocketNotifier*>(self)->socket();
}

uintptr_t QSocketNotifier_Type(QSocketNotifier* self) {
	QSocketNotifier::Type ret = const_cast<const QSocketNotifier*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

bool QSocketNotifier_IsEnabled(QSocketNotifier* self) {
	return const_cast<const QSocketNotifier*>(self)->isEnabled();
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
	return new QSocketDescriptor(static_cast<QSocketDescriptor::DescriptorType>(descriptor));
}

bool QSocketDescriptor_IsValid(QSocketDescriptor* self) {
	return const_cast<const QSocketDescriptor*>(self)->isValid();
}

void QSocketDescriptor_Delete(QSocketDescriptor* self) {
	delete self;
}

