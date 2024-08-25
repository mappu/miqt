#include "gen_qhistorystate.h"
#include "qhistorystate.h"

#include <QAbstractState>
#include <QAbstractTransition>
#include <QHistoryState>
#include <QMetaObject>
#include <QState>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QHistoryState* QHistoryState_new() {
	return new QHistoryState();
}

QHistoryState* QHistoryState_new2(QState* parent) {
	return new QHistoryState(parent);
}

QMetaObject* QHistoryState_MetaObject(QHistoryState* self) {
	return (QMetaObject*) self->metaObject();
}

void QHistoryState_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QHistoryState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHistoryState_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QHistoryState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAbstractTransition* QHistoryState_DefaultTransition(QHistoryState* self) {
	return self->defaultTransition();
}

void QHistoryState_SetDefaultTransition(QHistoryState* self, QAbstractTransition* transition) {
	self->setDefaultTransition(transition);
}

QAbstractState* QHistoryState_DefaultState(QHistoryState* self) {
	return self->defaultState();
}

void QHistoryState_SetDefaultState(QHistoryState* self, QAbstractState* state) {
	self->setDefaultState(state);
}

void QHistoryState_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QHistoryState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHistoryState_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QHistoryState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHistoryState_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QHistoryState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHistoryState_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QHistoryState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHistoryState_Delete(QHistoryState* self) {
	delete self;
}

