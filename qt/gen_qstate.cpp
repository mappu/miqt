#include <QAbstractState>
#include <QAbstractTransition>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSignalTransition>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include "qstate.h"

#include "gen_qstate.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QState* QState_new() {
	return new QState();
}

QState* QState_new2(uintptr_t childMode) {
	return new QState(static_cast<QState::ChildMode>(childMode));
}

QState* QState_new3(QState* parent) {
	return new QState(parent);
}

QState* QState_new4(uintptr_t childMode, QState* parent) {
	return new QState(static_cast<QState::ChildMode>(childMode), parent);
}

QMetaObject* QState_MetaObject(const QState* self) {
	return (QMetaObject*) self->metaObject();
}

void QState_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QState_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAbstractState* QState_ErrorState(const QState* self) {
	return self->errorState();
}

void QState_SetErrorState(QState* self, QAbstractState* state) {
	self->setErrorState(state);
}

void QState_AddTransition(QState* self, QAbstractTransition* transition) {
	self->addTransition(transition);
}

QSignalTransition* QState_AddTransition2(QState* self, QObject* sender, const char* signal, QAbstractState* target) {
	return self->addTransition(sender, signal, target);
}

QAbstractTransition* QState_AddTransitionWithTarget(QState* self, QAbstractState* target) {
	return self->addTransition(target);
}

void QState_RemoveTransition(QState* self, QAbstractTransition* transition) {
	self->removeTransition(transition);
}

void QState_Transitions(const QState* self, QAbstractTransition*** _out, size_t* _out_len) {
	QList<QAbstractTransition*> ret = self->transitions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractTransition** __out = static_cast<QAbstractTransition**>(malloc(sizeof(QAbstractTransition*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QAbstractState* QState_InitialState(const QState* self) {
	return self->initialState();
}

void QState_SetInitialState(QState* self, QAbstractState* state) {
	self->setInitialState(state);
}

uintptr_t QState_ChildMode(const QState* self) {
	QState::ChildMode ret = self->childMode();
	return static_cast<uintptr_t>(ret);
}

void QState_SetChildMode(QState* self, uintptr_t mode) {
	self->setChildMode(static_cast<QState::ChildMode>(mode));
}

void QState_AssignProperty(QState* self, QObject* object, const char* name, QVariant* value) {
	self->assignProperty(object, name, *value);
}

void QState_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QState_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QState_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QState_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QState_Delete(QState* self) {
	delete self;
}

