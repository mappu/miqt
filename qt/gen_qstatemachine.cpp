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
#include "_cgo_export.h"

QStateMachine* QStateMachine_new() {
	return new QStateMachine();
}

QStateMachine* QStateMachine_new2(int childMode) {
	return new QStateMachine(static_cast<QState::ChildMode>(childMode));
}

QStateMachine* QStateMachine_new3(QObject* parent) {
	return new QStateMachine(parent);
}

QStateMachine* QStateMachine_new4(int childMode, QObject* parent) {
	return new QStateMachine(static_cast<QState::ChildMode>(childMode), parent);
}

QMetaObject* QStateMachine_MetaObject(const QStateMachine* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QStateMachine_Tr(const char* s) {
	QString _ret = QStateMachine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStateMachine_TrUtf8(const char* s) {
	QString _ret = QStateMachine::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QStateMachine_AddState(QStateMachine* self, QAbstractState* state) {
	self->addState(state);
}

void QStateMachine_RemoveState(QStateMachine* self, QAbstractState* state) {
	self->removeState(state);
}

int QStateMachine_Error(const QStateMachine* self) {
	QStateMachine::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string* QStateMachine_ErrorString(const QStateMachine* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

struct miqt_array* QStateMachine_DefaultAnimations(const QStateMachine* self) {
	QList<QAbstractAnimation *> _ret = self->defaultAnimations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAnimation** _arr = static_cast<QAbstractAnimation**>(malloc(sizeof(QAbstractAnimation*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QStateMachine_RemoveDefaultAnimation(QStateMachine* self, QAbstractAnimation* animation) {
	self->removeDefaultAnimation(animation);
}

int QStateMachine_GlobalRestorePolicy(const QStateMachine* self) {
	QState::RestorePolicy _ret = self->globalRestorePolicy();
	return static_cast<int>(_ret);
}

void QStateMachine_SetGlobalRestorePolicy(QStateMachine* self, int restorePolicy) {
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

struct miqt_array* QStateMachine_Configuration(const QStateMachine* self) {
	QSet<QAbstractState *> _ret = self->configuration();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractState** _arr = static_cast<QAbstractState**>(malloc(sizeof(QAbstractState*) * _ret.size()));
	int _ctr = 0;
	QSetIterator<QAbstractState*> _itr(_ret);
	while (_itr.hasNext()) {
		_arr[_ctr++] = _itr.next();
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.size();
	_out->data = static_cast<void*>(_arr);
	return _out;
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
		bool sigval1 = running;
		miqt_exec_callback_QStateMachine_RunningChanged(slot, sigval1);
	});
}

struct miqt_string* QStateMachine_Tr2(const char* s, const char* c) {
	QString _ret = QStateMachine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStateMachine_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStateMachine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStateMachine_TrUtf82(const char* s, const char* c) {
	QString _ret = QStateMachine::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStateMachine_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStateMachine::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QStateMachine_PostEvent2(QStateMachine* self, QEvent* event, int priority) {
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

