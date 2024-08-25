#include "gen_qcoreevent.h"
#include "qcoreevent.h"

#include <QByteArray>
#include <QChildEvent>
#include <QDeferredDeleteEvent>
#include <QDynamicPropertyChangeEvent>
#include <QEvent>
#include <QObject>
#include <QTimerEvent>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QEvent* QEvent_new(QEvent* other) {
	return new QEvent(*other);
}

void QEvent_OperatorAssign(QEvent* self, QEvent* other) {
	self->operator=(*other);
}

bool QEvent_Spontaneous(QEvent* self) {
	return self->spontaneous();
}

void QEvent_SetAccepted(QEvent* self, bool accepted) {
	self->setAccepted(accepted);
}

bool QEvent_IsAccepted(QEvent* self) {
	return self->isAccepted();
}

void QEvent_Accept(QEvent* self) {
	self->accept();
}

void QEvent_Ignore(QEvent* self) {
	self->ignore();
}

int QEvent_RegisterEventType() {
	return QEvent::registerEventType();
}

int QEvent_RegisterEventType1(int hint) {
	return QEvent::registerEventType(static_cast<int>(hint));
}

void QEvent_Delete(QEvent* self) {
	delete self;
}

QTimerEvent* QTimerEvent_new(int timerId) {
	return new QTimerEvent(static_cast<int>(timerId));
}

QTimerEvent* QTimerEvent_new2(QTimerEvent* param1) {
	return new QTimerEvent(*param1);
}

int QTimerEvent_TimerId(QTimerEvent* self) {
	return self->timerId();
}

void QTimerEvent_Delete(QTimerEvent* self) {
	delete self;
}

QChildEvent* QChildEvent_new(QChildEvent* param1) {
	return new QChildEvent(*param1);
}

QObject* QChildEvent_Child(QChildEvent* self) {
	return self->child();
}

bool QChildEvent_Added(QChildEvent* self) {
	return self->added();
}

bool QChildEvent_Polished(QChildEvent* self) {
	return self->polished();
}

bool QChildEvent_Removed(QChildEvent* self) {
	return self->removed();
}

void QChildEvent_Delete(QChildEvent* self) {
	delete self;
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(QByteArray* name) {
	return new QDynamicPropertyChangeEvent(*name);
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new2(QDynamicPropertyChangeEvent* param1) {
	return new QDynamicPropertyChangeEvent(*param1);
}

QByteArray* QDynamicPropertyChangeEvent_PropertyName(QDynamicPropertyChangeEvent* self) {
	QByteArray ret = self->propertyName();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self) {
	delete self;
}

QDeferredDeleteEvent* QDeferredDeleteEvent_new() {
	return new QDeferredDeleteEvent();
}

QDeferredDeleteEvent* QDeferredDeleteEvent_new2(QDeferredDeleteEvent* param1) {
	return new QDeferredDeleteEvent(*param1);
}

int QDeferredDeleteEvent_LoopLevel(QDeferredDeleteEvent* self) {
	return self->loopLevel();
}

void QDeferredDeleteEvent_Delete(QDeferredDeleteEvent* self) {
	delete self;
}

