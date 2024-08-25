#include "gen_qmouseeventtransition.h"
#include "qmouseeventtransition.h"

#include <QMetaObject>
#include <QMouseEventTransition>
#include <QPainterPath>
#include <QState>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMouseEventTransition* QMouseEventTransition_new() {
	return new QMouseEventTransition();
}

QMouseEventTransition* QMouseEventTransition_new2(QState* sourceState) {
	return new QMouseEventTransition(sourceState);
}

QMetaObject* QMouseEventTransition_MetaObject(QMouseEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void QMouseEventTransition_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMouseEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMouseEventTransition_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMouseEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPainterPath* QMouseEventTransition_HitTestPath(QMouseEventTransition* self) {
	QPainterPath ret = self->hitTestPath();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

void QMouseEventTransition_SetHitTestPath(QMouseEventTransition* self, QPainterPath* path) {
	self->setHitTestPath(*path);
}

void QMouseEventTransition_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMouseEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMouseEventTransition_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMouseEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMouseEventTransition_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMouseEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMouseEventTransition_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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

