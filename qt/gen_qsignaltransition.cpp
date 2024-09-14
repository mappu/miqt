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
#include "_cgo_export.h"

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

QMetaObject* QSignalTransition_MetaObject(const QSignalTransition* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QSignalTransition_Tr(const char* s) {
	QString _ret = QSignalTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSignalTransition_TrUtf8(const char* s) {
	QString _ret = QSignalTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QObject* QSignalTransition_SenderObject(const QSignalTransition* self) {
	return self->senderObject();
}

void QSignalTransition_SetSenderObject(QSignalTransition* self, QObject* sender) {
	self->setSenderObject(sender);
}

QByteArray* QSignalTransition_Signal(const QSignalTransition* self) {
	QByteArray _ret = self->signal();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

void QSignalTransition_SetSignal(QSignalTransition* self, QByteArray* signal) {
	self->setSignal(*signal);
}

struct miqt_string* QSignalTransition_Tr2(const char* s, const char* c) {
	QString _ret = QSignalTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSignalTransition_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSignalTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSignalTransition_TrUtf82(const char* s, const char* c) {
	QString _ret = QSignalTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSignalTransition_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSignalTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSignalTransition_Delete(QSignalTransition* self) {
	delete self;
}

