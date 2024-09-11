#include <QByteArray>
#include <QMetaObject>
#include <QObject>
#include <QPropertyAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qpropertyanimation.h"

#include "gen_qpropertyanimation.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPropertyAnimation* QPropertyAnimation_new() {
	return new QPropertyAnimation();
}

QPropertyAnimation* QPropertyAnimation_new2(QObject* target, QByteArray* propertyName) {
	return new QPropertyAnimation(target, *propertyName);
}

QPropertyAnimation* QPropertyAnimation_new3(QObject* parent) {
	return new QPropertyAnimation(parent);
}

QPropertyAnimation* QPropertyAnimation_new4(QObject* target, QByteArray* propertyName, QObject* parent) {
	return new QPropertyAnimation(target, *propertyName, parent);
}

QMetaObject* QPropertyAnimation_MetaObject(const QPropertyAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void QPropertyAnimation_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QPropertyAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPropertyAnimation_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QPropertyAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self) {
	return self->targetObject();
}

void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target) {
	self->setTargetObject(target);
}

QByteArray* QPropertyAnimation_PropertyName(const QPropertyAnimation* self) {
	QByteArray ret = self->propertyName();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, QByteArray* propertyName) {
	self->setPropertyName(*propertyName);
}

void QPropertyAnimation_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QPropertyAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPropertyAnimation_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPropertyAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPropertyAnimation_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QPropertyAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPropertyAnimation_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPropertyAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPropertyAnimation_Delete(QPropertyAnimation* self) {
	delete self;
}

