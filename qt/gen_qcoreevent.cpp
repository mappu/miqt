#include <QByteArray>
#include <QChildEvent>
#include <QDeferredDeleteEvent>
#include <QDynamicPropertyChangeEvent>
#include <QEvent>
#include <QObject>
#include <QTimerEvent>
#include "qcoreevent.h"
#include "gen_qcoreevent.h"
#include "_cgo_export.h"

QEvent* QEvent_new(uintptr_t typeVal) {
	return new QEvent(static_cast<QEvent::Type>(typeVal));
}

QEvent* QEvent_new2(QEvent* other) {
	return new QEvent(*other);
}

void QEvent_OperatorAssign(QEvent* self, QEvent* other) {
	self->operator=(*other);
}

uintptr_t QEvent_Type(const QEvent* self) {
	QEvent::Type _ret = self->type();
	return static_cast<uintptr_t>(_ret);
}

bool QEvent_Spontaneous(const QEvent* self) {
	return self->spontaneous();
}

void QEvent_SetAccepted(QEvent* self, bool accepted) {
	self->setAccepted(accepted);
}

bool QEvent_IsAccepted(const QEvent* self) {
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

int QTimerEvent_TimerId(const QTimerEvent* self) {
	return self->timerId();
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

QObject* QChildEvent_Child(const QChildEvent* self) {
	return self->child();
}

bool QChildEvent_Added(const QChildEvent* self) {
	return self->added();
}

bool QChildEvent_Polished(const QChildEvent* self) {
	return self->polished();
}

bool QChildEvent_Removed(const QChildEvent* self) {
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

QByteArray* QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self) {
	QByteArray _ret = self->propertyName();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
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

int QDeferredDeleteEvent_LoopLevel(const QDeferredDeleteEvent* self) {
	return self->loopLevel();
}

void QDeferredDeleteEvent_Delete(QDeferredDeleteEvent* self) {
	delete self;
}

