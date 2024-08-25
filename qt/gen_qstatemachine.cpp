#include "gen_qstatemachine.h"
#include "qstatemachine.h"

#include <QAbstractAnimation>
#include <QAbstractState>
#include <QEvent>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QStateMachine>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStateMachine* QStateMachine_new() {
	return new QStateMachine();
}

QStateMachine* QStateMachine_new2(QObject* parent) {
	return new QStateMachine(parent);
}

QMetaObject* QStateMachine_MetaObject(QStateMachine* self) {
	return (QMetaObject*) self->metaObject();
}

void QStateMachine_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStateMachine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStateMachine::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_AddState(QStateMachine* self, QAbstractState* state) {
	self->addState(state);
}

void QStateMachine_RemoveState(QStateMachine* self, QAbstractState* state) {
	self->removeState(state);
}

void QStateMachine_ErrorString(QStateMachine* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_ClearError(QStateMachine* self) {
	self->clearError();
}

bool QStateMachine_IsRunning(QStateMachine* self) {
	return self->isRunning();
}

bool QStateMachine_IsAnimated(QStateMachine* self) {
	return self->isAnimated();
}

void QStateMachine_SetAnimated(QStateMachine* self, bool enabled) {
	self->setAnimated(enabled);
}

void QStateMachine_AddDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation) {
	self->addDefaultAnimation(animation);
}

void QStateMachine_DefaultAnimations(QStateMachine* self, QAbstractAnimation*** _out, size_t* _out_len) {
	QList<QAbstractAnimation *> ret = self->defaultAnimations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAnimation** __out = static_cast<QAbstractAnimation**>(malloc(sizeof(QAbstractAnimation*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QStateMachine_RemoveDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation) {
	self->removeDefaultAnimation(animation);
}

int QStateMachine_PostDelayedEvent(QStateMachine* self, QEvent* event, int delay) {
	return self->postDelayedEvent(event, static_cast<int>(delay));
}

bool QStateMachine_CancelDelayedEvent(QStateMachine* self, int id) {
	return self->cancelDelayedEvent(static_cast<int>(id));
}

bool QStateMachine_EventFilter(QStateMachine* self, QObject* watched, QEvent* event) {
	return self->eventFilter(watched, event);
}

void QStateMachine_Start(QStateMachine* self) {
	self->start();
}

void QStateMachine_Stop(QStateMachine* self) {
	self->stop();
}

void QStateMachine_SetRunning(QStateMachine* self, bool running) {
	self->setRunning(running);
}

void QStateMachine_RunningChanged(QStateMachine* self, bool running) {
	self->runningChanged(running);
}

void QStateMachine_connect_RunningChanged(QStateMachine* self, void* slot) {
	QStateMachine::connect(self, static_cast<void (QStateMachine::*)(bool)>(&QStateMachine::runningChanged), self, [=](bool running) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStateMachine_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStateMachine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStateMachine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStateMachine::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStateMachine::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_Delete(QStateMachine* self) {
	delete self;
}

