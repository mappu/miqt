#include <QMetaObject>
#include <QMouseEventTransition>
#include <QObject>
#include <QPainterPath>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qmouseeventtransition.h"

#include "gen_qmouseeventtransition.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMouseEventTransition* QMouseEventTransition_new() {
	return new QMouseEventTransition();
}

QMouseEventTransition* QMouseEventTransition_new2(QObject* object, uintptr_t typeVal, uintptr_t button) {
	return new QMouseEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<Qt::MouseButton>(button));
}

QMouseEventTransition* QMouseEventTransition_new3(QState* sourceState) {
	return new QMouseEventTransition(sourceState);
}

QMouseEventTransition* QMouseEventTransition_new4(QObject* object, uintptr_t typeVal, uintptr_t button, QState* sourceState) {
	return new QMouseEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<Qt::MouseButton>(button), sourceState);
}

QMetaObject* QMouseEventTransition_MetaObject(QMouseEventTransition* self) {
	return (QMetaObject*) const_cast<const QMouseEventTransition*>(self)->metaObject();
}

void QMouseEventTransition_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMouseEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMouseEventTransition_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMouseEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QMouseEventTransition_Button(QMouseEventTransition* self) {
	Qt::MouseButton ret = const_cast<const QMouseEventTransition*>(self)->button();
	return static_cast<uintptr_t>(ret);
}

void QMouseEventTransition_SetButton(QMouseEventTransition* self, uintptr_t button) {
	self->setButton(static_cast<Qt::MouseButton>(button));
}

int QMouseEventTransition_ModifierMask(QMouseEventTransition* self) {
	Qt::KeyboardModifiers ret = const_cast<const QMouseEventTransition*>(self)->modifierMask();
	return static_cast<int>(ret);
}

void QMouseEventTransition_SetModifierMask(QMouseEventTransition* self, int modifiers) {
	self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

QPainterPath* QMouseEventTransition_HitTestPath(QMouseEventTransition* self) {
	QPainterPath ret = const_cast<const QMouseEventTransition*>(self)->hitTestPath();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

void QMouseEventTransition_SetHitTestPath(QMouseEventTransition* self, QPainterPath* path) {
	self->setHitTestPath(*path);
}

void QMouseEventTransition_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMouseEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMouseEventTransition_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMouseEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMouseEventTransition_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMouseEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMouseEventTransition_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMouseEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMouseEventTransition_Delete(QMouseEventTransition* self) {
	delete self;
}

