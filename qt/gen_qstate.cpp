#include "gen_qstate.h"
#include "qstate.h"

#include <QAbstractState>
#include <QAbstractTransition>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSignalTransition>
#include <QState>
#include <QString>
#include <QVariant>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QState* QState_new() {
	return new QState();
}

QState* QState_new2(QState* parent) {
	return new QState(parent);
}

QMetaObject* QState_MetaObject(QState* self) {
	return (QMetaObject*) self->metaObject();
}

void QState_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QState_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAbstractState* QState_ErrorState(QState* self) {
	return self->errorState();
}

void QState_SetErrorState(QState* self, QAbstractState* state) {
	self->setErrorState(state);
}

void QState_AddTransition(QState* self, QAbstractTransition* transition) {
	self->addTransition(transition);
}

QSignalTransition* QState_AddTransition2(QState* self, QObject* sender, char* signal, QAbstractState* target) {
	return self->addTransition(sender, signal, target);
}

QAbstractTransition* QState_AddTransitionWithTarget(QState* self, QAbstractState* target) {
	return self->addTransition(target);
}

void QState_RemoveTransition(QState* self, QAbstractTransition* transition) {
	self->removeTransition(transition);
}

void QState_Transitions(QState* self, QAbstractTransition*** _out, size_t* _out_len) {
	QList<QAbstractTransition *> ret = self->transitions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractTransition** __out = static_cast<QAbstractTransition**>(malloc(sizeof(QAbstractTransition*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QAbstractState* QState_InitialState(QState* self) {
	return self->initialState();
}

void QState_SetInitialState(QState* self, QAbstractState* state) {
	self->setInitialState(state);
}

void QState_AssignProperty(QState* self, QObject* object, char* name, QVariant* value) {
	self->assignProperty(object, name, *value);
}

void QState_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QState_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QState_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QState_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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

