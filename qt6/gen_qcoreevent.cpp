#include <QByteArray>
#include <QChildEvent>
#include <QDeferredDeleteEvent>
#include <QDynamicPropertyChangeEvent>
#include <QEvent>
#include <QObject>
#include <QTimerEvent>
#include <qcoreevent.h>
#include "gen_qcoreevent.h"
#include "_cgo_export.h"

QEvent* QEvent_new(int typeVal) {
	return new QEvent(static_cast<QEvent::Type>(typeVal));
}

int QEvent_Type(const QEvent* self) {
	QEvent::Type _ret = self->type();
	return static_cast<int>(_ret);
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

bool QEvent_IsInputEvent(const QEvent* self) {
	return self->isInputEvent();
}

bool QEvent_IsPointerEvent(const QEvent* self) {
	return self->isPointerEvent();
}

bool QEvent_IsSinglePointEvent(const QEvent* self) {
	return self->isSinglePointEvent();
}

int QEvent_RegisterEventType() {
	return QEvent::registerEventType();
}

QEvent* QEvent_Clone(const QEvent* self) {
	return self->clone();
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

QTimerEvent* QTimerEvent_Clone(const QTimerEvent* self) {
	return self->clone();
}

int QTimerEvent_TimerId(const QTimerEvent* self) {
	return self->timerId();
}

void QTimerEvent_Delete(QTimerEvent* self) {
	delete self;
}

QChildEvent* QChildEvent_new(int typeVal, QObject* child) {
	return new QChildEvent(static_cast<QEvent::Type>(typeVal), child);
}

QChildEvent* QChildEvent_Clone(const QChildEvent* self) {
	return self->clone();
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

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(struct miqt_string name) {
	QByteArray name_QByteArray(name.data, name.len);
	return new QDynamicPropertyChangeEvent(name_QByteArray);
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_Clone(const QDynamicPropertyChangeEvent* self) {
	return self->clone();
}

struct miqt_string QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self) {
	QByteArray _qb = self->propertyName();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self) {
	delete self;
}

QDeferredDeleteEvent* QDeferredDeleteEvent_new() {
	return new QDeferredDeleteEvent();
}

QDeferredDeleteEvent* QDeferredDeleteEvent_Clone(const QDeferredDeleteEvent* self) {
	return self->clone();
}

int QDeferredDeleteEvent_LoopLevel(const QDeferredDeleteEvent* self) {
	return self->loopLevel();
}

void QDeferredDeleteEvent_Delete(QDeferredDeleteEvent* self) {
	delete self;
}

