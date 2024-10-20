#include <QMetaObject>
#include <QObject>
#include <QSocketDescriptor>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsocketnotifier.h>
#include "gen_qsocketnotifier.h"
#include "_cgo_export.h"

QSocketNotifier* QSocketNotifier_new(int param1) {
	return new QSocketNotifier(static_cast<QSocketNotifier::Type>(param1));
}

QSocketNotifier* QSocketNotifier_new2(intptr_t socket, int param2) {
	return new QSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2));
}

QSocketNotifier* QSocketNotifier_new3(int param1, QObject* parent) {
	return new QSocketNotifier(static_cast<QSocketNotifier::Type>(param1), parent);
}

QSocketNotifier* QSocketNotifier_new4(intptr_t socket, int param2, QObject* parent) {
	return new QSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2), parent);
}

QMetaObject* QSocketNotifier_MetaObject(const QSocketNotifier* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSocketNotifier_Metacast(QSocketNotifier* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSocketNotifier_Tr(const char* s) {
	QString _ret = QSocketNotifier::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSocketNotifier_SetSocket(QSocketNotifier* self, intptr_t socket) {
	self->setSocket((qintptr)(socket));
}

intptr_t QSocketNotifier_Socket(const QSocketNotifier* self) {
	qintptr _ret = self->socket();
	return static_cast<intptr_t>(_ret);
}

int QSocketNotifier_Type(const QSocketNotifier* self) {
	QSocketNotifier::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QSocketNotifier_IsValid(const QSocketNotifier* self) {
	return self->isValid();
}

bool QSocketNotifier_IsEnabled(const QSocketNotifier* self) {
	return self->isEnabled();
}

void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled) {
	self->setEnabled(enabled);
}

struct miqt_string QSocketNotifier_Tr2(const char* s, const char* c) {
	QString _ret = QSocketNotifier::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSocketNotifier_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSocketNotifier::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

QSocketDescriptor* QSocketDescriptor_new3(int descriptor) {
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

