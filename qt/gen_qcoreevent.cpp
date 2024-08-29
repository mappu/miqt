#include <QByteArray>
#include <QChildEvent>
#include <QDeferredDeleteEvent>
#include <QDynamicPropertyChangeEvent>
#include <QEvent>
#include <QObject>
#include <QTimerEvent>
#include "qcoreevent.h"

#include "gen_qcoreevent.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QEvent* QEvent_new(uintptr_t typeVal) {
	return new QEvent(static_cast<QEvent::Type>(typeVal));
}

QEvent* QEvent_new2(QEvent* other) {
	return new QEvent(*other);
}

void QEvent_OperatorAssign(QEvent* self, QEvent* other) {
	self->operator=(*other);
}

uintptr_t QEvent_Type(QEvent* self) {
	QEvent::Type ret = const_cast<const QEvent*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

bool QEvent_Spontaneous(QEvent* self) {
	return const_cast<const QEvent*>(self)->spontaneous();
}

void QEvent_SetAccepted(QEvent* self, bool accepted) {
	self->setAccepted(accepted);
}

bool QEvent_IsAccepted(QEvent* self) {
	return const_cast<const QEvent*>(self)->isAccepted();
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
	return const_cast<const QTimerEvent*>(self)->timerId();
}

void QTimerEvent_Delete(QTimerEvent* self) {
	delete self;
}

QChildEvent* QChildEvent_new(uintptr_t typeVal, QObject* child) {
	return new QChildEvent(static_cast<QEvent::Type>(typeVal), child);
}

QChildEvent* QChildEvent_new2(QChildEvent* param1) {
	return new QChildEvent(*param1);
}

QObject* QChildEvent_Child(QChildEvent* self) {
	return const_cast<const QChildEvent*>(self)->child();
}

bool QChildEvent_Added(QChildEvent* self) {
	return const_cast<const QChildEvent*>(self)->added();
}

bool QChildEvent_Polished(QChildEvent* self) {
	return const_cast<const QChildEvent*>(self)->polished();
}

bool QChildEvent_Removed(QChildEvent* self) {
	return const_cast<const QChildEvent*>(self)->removed();
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
	QByteArray ret = const_cast<const QDynamicPropertyChangeEvent*>(self)->propertyName();
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
	return const_cast<const QDeferredDeleteEvent*>(self)->loopLevel();
}

void QDeferredDeleteEvent_Delete(QDeferredDeleteEvent* self) {
	delete self;
}

