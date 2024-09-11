#include <QAbstractAnimation>
#include <QAbstractState>
#include <QEvent>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QStateMachine>
#define WORKAROUND_INNER_CLASS_DEFINITION_QStateMachine__SignalEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_QStateMachine__WrappedEvent
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qstatemachine.h"

#include "gen_qstatemachine.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStateMachine* QStateMachine_new() {
	return new QStateMachine();
}

QStateMachine* QStateMachine_new2(uintptr_t childMode) {
	return new QStateMachine(static_cast<QState::ChildMode>(childMode));
}

QStateMachine* QStateMachine_new3(QObject* parent) {
	return new QStateMachine(parent);
}

QStateMachine* QStateMachine_new4(uintptr_t childMode, QObject* parent) {
	return new QStateMachine(static_cast<QState::ChildMode>(childMode), parent);
}

QMetaObject* QStateMachine_MetaObject(const QStateMachine* self) {
	return (QMetaObject*) self->metaObject();
}

void QStateMachine_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStateMachine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
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

uintptr_t QStateMachine_Error(const QStateMachine* self) {
	QStateMachine::Error ret = self->error();
	return static_cast<uintptr_t>(ret);
}

void QStateMachine_ErrorString(const QStateMachine* self, char** _out, int* _out_Strlen) {
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

bool QStateMachine_IsRunning(const QStateMachine* self) {
	return self->isRunning();
}

bool QStateMachine_IsAnimated(const QStateMachine* self) {
	return self->isAnimated();
}

void QStateMachine_SetAnimated(QStateMachine* self, bool enabled) {
	self->setAnimated(enabled);
}

void QStateMachine_AddDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation) {
	self->addDefaultAnimation(animation);
}

void QStateMachine_DefaultAnimations(const QStateMachine* self, QAbstractAnimation*** _out, size_t* _out_len) {
	QList<QAbstractAnimation*> ret = self->defaultAnimations();
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

uintptr_t QStateMachine_GlobalRestorePolicy(const QStateMachine* self) {
	QState::RestorePolicy ret = self->globalRestorePolicy();
	return static_cast<uintptr_t>(ret);
}

void QStateMachine_SetGlobalRestorePolicy(QStateMachine* self, uintptr_t restorePolicy) {
	self->setGlobalRestorePolicy(static_cast<QState::RestorePolicy>(restorePolicy));
}

void QStateMachine_PostEvent(QStateMachine* self, QEvent* event) {
	self->postEvent(event);
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

void QStateMachine_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStateMachine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStateMachine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStateMachine::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStateMachine::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStateMachine_PostEvent2(QStateMachine* self, QEvent* event, uintptr_t priority) {
	self->postEvent(event, static_cast<QStateMachine::EventPriority>(priority));
}

void QStateMachine_Delete(QStateMachine* self) {
	delete self;
}

QStateMachine__SignalEvent* QStateMachine__SignalEvent_new(QStateMachine__SignalEvent* param1) {
	return new QStateMachine::SignalEvent(*param1);
}

QObject* QStateMachine__SignalEvent_Sender(const QStateMachine__SignalEvent* self) {
	return self->sender();
}

int QStateMachine__SignalEvent_SignalIndex(const QStateMachine__SignalEvent* self) {
	return self->signalIndex();
}

void QStateMachine__SignalEvent_Delete(QStateMachine__SignalEvent* self) {
	delete self;
}

QStateMachine__WrappedEvent* QStateMachine__WrappedEvent_new(QObject* object, QEvent* event) {
	return new QStateMachine::WrappedEvent(object, event);
}

QStateMachine__WrappedEvent* QStateMachine__WrappedEvent_new2(QStateMachine__WrappedEvent* param1) {
	return new QStateMachine::WrappedEvent(*param1);
}

QObject* QStateMachine__WrappedEvent_Object(const QStateMachine__WrappedEvent* self) {
	return self->object();
}

QEvent* QStateMachine__WrappedEvent_Event(const QStateMachine__WrappedEvent* self) {
	return self->event();
}

void QStateMachine__WrappedEvent_Delete(QStateMachine__WrappedEvent* self) {
	delete self;
}

