#include <QMetaObject>
#include <QObject>
#include <QSocketDescriptor>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qsocketnotifier.h"
#include "gen_qsocketnotifier.h"
#include "_cgo_export.h"

QSocketNotifier* QSocketNotifier_new(intptr_t socket, int param2) {
	return new QSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2));
}

QSocketNotifier* QSocketNotifier_new2(intptr_t socket, int param2, QObject* parent) {
	return new QSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2), parent);
}

QMetaObject* QSocketNotifier_MetaObject(const QSocketNotifier* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSocketNotifier_Metacast(QSocketNotifier* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QSocketNotifier_Tr(const char* s) {
	QString _ret = QSocketNotifier::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSocketNotifier_TrUtf8(const char* s) {
	QString _ret = QSocketNotifier::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

intptr_t QSocketNotifier_Socket(const QSocketNotifier* self) {
	qintptr _ret = self->socket();
	return static_cast<intptr_t>(_ret);
}

int QSocketNotifier_Type(const QSocketNotifier* self) {
	QSocketNotifier::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QSocketNotifier_IsEnabled(const QSocketNotifier* self) {
	return self->isEnabled();
}

void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled) {
	self->setEnabled(enabled);
}

struct miqt_string* QSocketNotifier_Tr2(const char* s, const char* c) {
	QString _ret = QSocketNotifier::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSocketNotifier_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSocketNotifier::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSocketNotifier_TrUtf82(const char* s, const char* c) {
	QString _ret = QSocketNotifier::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSocketNotifier_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSocketNotifier::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

