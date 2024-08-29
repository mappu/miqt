#include <QAbstractState>
#include <QAbstractTransition>
#include <QHistoryState>
#include <QMetaObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qhistorystate.h"

#include "gen_qhistorystate.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QHistoryState* QHistoryState_new() {
	return new QHistoryState();
}

QHistoryState* QHistoryState_new2(uintptr_t typeVal) {
	return new QHistoryState(static_cast<QHistoryState::HistoryType>(typeVal));
}

QHistoryState* QHistoryState_new3(QState* parent) {
	return new QHistoryState(parent);
}

QHistoryState* QHistoryState_new4(uintptr_t typeVal, QState* parent) {
	return new QHistoryState(static_cast<QHistoryState::HistoryType>(typeVal), parent);
}

QMetaObject* QHistoryState_MetaObject(QHistoryState* self) {
	return (QMetaObject*) const_cast<const QHistoryState*>(self)->metaObject();
}

void QHistoryState_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QHistoryState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHistoryState_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QHistoryState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAbstractTransition* QHistoryState_DefaultTransition(QHistoryState* self) {
	return const_cast<const QHistoryState*>(self)->defaultTransition();
}

void QHistoryState_SetDefaultTransition(QHistoryState* self, QAbstractTransition* transition) {
	self->setDefaultTransition(transition);
}

QAbstractState* QHistoryState_DefaultState(QHistoryState* self) {
	return const_cast<const QHistoryState*>(self)->defaultState();
}

void QHistoryState_SetDefaultState(QHistoryState* self, QAbstractState* state) {
	self->setDefaultState(state);
}

uintptr_t QHistoryState_HistoryType(QHistoryState* self) {
	QHistoryState::HistoryType ret = const_cast<const QHistoryState*>(self)->historyType();
	return static_cast<uintptr_t>(ret);
}

void QHistoryState_SetHistoryType(QHistoryState* self, uintptr_t typeVal) {
	self->setHistoryType(static_cast<QHistoryState::HistoryType>(typeVal));
}

void QHistoryState_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QHistoryState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHistoryState_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QHistoryState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHistoryState_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QHistoryState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHistoryState_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
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

