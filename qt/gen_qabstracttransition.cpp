#include <QAbstractAnimation>
#include <QAbstractState>
#include <QAbstractTransition>
#include <QList>
#include <QMetaObject>
#include <QState>
#include <QStateMachine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qabstracttransition.h"

#include "gen_qabstracttransition.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractTransition_MetaObject(QAbstractTransition* self) {
	return (QMetaObject*) const_cast<const QAbstractTransition*>(self)->metaObject();
}

void QAbstractTransition_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTransition_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QState* QAbstractTransition_SourceState(QAbstractTransition* self) {
	return const_cast<const QAbstractTransition*>(self)->sourceState();
}

QAbstractState* QAbstractTransition_TargetState(QAbstractTransition* self) {
	return const_cast<const QAbstractTransition*>(self)->targetState();
}

void QAbstractTransition_SetTargetState(QAbstractTransition* self, QAbstractState* target) {
	self->setTargetState(target);
}

void QAbstractTransition_TargetStates(QAbstractTransition* self, QAbstractState*** _out, size_t* _out_len) {
	QList<QAbstractState*> ret = const_cast<const QAbstractTransition*>(self)->targetStates();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractState** __out = static_cast<QAbstractState**>(malloc(sizeof(QAbstractState*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QAbstractTransition_SetTargetStates(QAbstractTransition* self, QAbstractState** targets, size_t targets_len) {
	QList<QAbstractState*> targets_QList;
	targets_QList.reserve(targets_len);
	for(size_t i = 0; i < targets_len; ++i) {
		targets_QList.push_back(targets[i]);
	}
	self->setTargetStates(targets_QList);
}

uintptr_t QAbstractTransition_TransitionType(QAbstractTransition* self) {
	QAbstractTransition::TransitionType ret = const_cast<const QAbstractTransition*>(self)->transitionType();
	return static_cast<uintptr_t>(ret);
}

void QAbstractTransition_SetTransitionType(QAbstractTransition* self, uintptr_t typeVal) {
	self->setTransitionType(static_cast<QAbstractTransition::TransitionType>(typeVal));
}

QStateMachine* QAbstractTransition_Machine(QAbstractTransition* self) {
	return const_cast<const QAbstractTransition*>(self)->machine();
}

void QAbstractTransition_AddAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
	self->addAnimation(animation);
}

void QAbstractTransition_RemoveAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
	self->removeAnimation(animation);
}

void QAbstractTransition_Animations(QAbstractTransition* self, QAbstractAnimation*** _out, size_t* _out_len) {
	QList<QAbstractAnimation*> ret = const_cast<const QAbstractTransition*>(self)->animations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAnimation** __out = static_cast<QAbstractAnimation**>(malloc(sizeof(QAbstractAnimation*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QAbstractTransition_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTransition_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTransition_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractTransition_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
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

