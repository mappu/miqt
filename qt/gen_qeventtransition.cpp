#include <QEventTransition>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qeventtransition.h"
#include "gen_qeventtransition.h"
#include "_cgo_export.h"

QEventTransition* QEventTransition_new() {
	return new QEventTransition();
}

QEventTransition* QEventTransition_new2(QObject* object, int typeVal) {
	return new QEventTransition(object, static_cast<QEvent::Type>(typeVal));
}

QEventTransition* QEventTransition_new3(QState* sourceState) {
	return new QEventTransition(sourceState);
}

QEventTransition* QEventTransition_new4(QObject* object, int typeVal, QState* sourceState) {
	return new QEventTransition(object, static_cast<QEvent::Type>(typeVal), sourceState);
}

QMetaObject* QEventTransition_MetaObject(const QEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QEventTransition_Tr(const char* s) {
	QString _ret = QEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QEventTransition_TrUtf8(const char* s) {
	QString _ret = QEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QObject* QEventTransition_EventSource(const QEventTransition* self) {
	return self->eventSource();
}

void QEventTransition_SetEventSource(QEventTransition* self, QObject* object) {
	self->setEventSource(object);
}

int QEventTransition_EventType(const QEventTransition* self) {
	QEvent::Type _ret = self->eventType();
	return static_cast<int>(_ret);
}

void QEventTransition_SetEventType(QEventTransition* self, int typeVal) {
	self->setEventType(static_cast<QEvent::Type>(typeVal));
}

struct miqt_string* QEventTransition_Tr2(const char* s, const char* c) {
	QString _ret = QEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QEventTransition_Tr3(const char* s, const char* c, int n) {
	QString _ret = QEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QEventTransition_TrUtf82(const char* s, const char* c) {
	QString _ret = QEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QEventTransition_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QEventTransition_Delete(QEventTransition* self) {
	delete self;
}

