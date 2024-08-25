#include "gen_qfinalstate.h"
#include "qfinalstate.h"

#include <QFinalState>
#include <QMetaObject>
#include <QState>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFinalState* QFinalState_new() {
	return new QFinalState();
}

QFinalState* QFinalState_new2(QState* parent) {
	return new QFinalState(parent);
}

QMetaObject* QFinalState_MetaObject(QFinalState* self) {
	return (QMetaObject*) self->metaObject();
}

void QFinalState_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFinalState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFinalState_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFinalState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFinalState_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFinalState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFinalState_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFinalState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFinalState_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFinalState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFinalState_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFinalState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFinalState_Delete(QFinalState* self) {
	delete self;
}

