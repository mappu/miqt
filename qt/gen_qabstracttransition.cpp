#include "gen_qabstracttransition.h"
#include "qabstracttransition.h"

#include <QAbstractAnimation>
#include <QAbstractState>
#include <QAbstractTransition>
#include <QList>
#include <QMetaObject>
#include <QState>
#include <QStateMachine>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractTransition_MetaObject(QAbstractTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void QAbstractTransition_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTransition_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QState* QAbstractTransition_SourceState(QAbstractTransition* self) {
	return self->sourceState();
}

QAbstractState* QAbstractTransition_TargetState(QAbstractTransition* self) {
	return self->targetState();
}

void QAbstractTransition_SetTargetState(QAbstractTransition* self, QAbstractState* target) {
	self->setTargetState(target);
}

void QAbstractTransition_TargetStates(QAbstractTransition* self, QAbstractState*** _out, size_t* _out_len) {
	QList<QAbstractState *> ret = self->targetStates();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractState** __out = static_cast<QAbstractState**>(malloc(sizeof(QAbstractState*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QAbstractTransition_SetTargetStates(QAbstractTransition* self, QAbstractState** targets, size_t targets_len) {
	QList<QAbstractState *> targets_QList;
	targets_QList.reserve(targets_len);
	for(size_t i = 0; i < targets_len; ++i) {
		targets_QList.push_back(targets[i]);
	}
	self->setTargetStates(targets_QList);
}

QStateMachine* QAbstractTransition_Machine(QAbstractTransition* self) {
	return self->machine();
}

void QAbstractTransition_AddAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
	self->addAnimation(animation);
}

void QAbstractTransition_RemoveAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
	self->removeAnimation(animation);
}

void QAbstractTransition_Animations(QAbstractTransition* self, QAbstractAnimation*** _out, size_t* _out_len) {
	QList<QAbstractAnimation *> ret = self->animations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAnimation** __out = static_cast<QAbstractAnimation**>(malloc(sizeof(QAbstractAnimation*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QAbstractTransition_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTransition_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTransition_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTransition_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTransition_Delete(QAbstractTransition* self) {
	delete self;
}

