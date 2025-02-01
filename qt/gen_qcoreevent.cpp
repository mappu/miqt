#include <QByteArray>
#include <QChildEvent>
#include <QDynamicPropertyChangeEvent>
#include <QEvent>
#include <QObject>
#include <QTimerEvent>
#include <qcoreevent.h>
#include "gen_qcoreevent.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QEvent* QEvent_new(int type) {
	return new QEvent(static_cast<QEvent::Type>(type));
}

QEvent* QEvent_new2(QEvent* other) {
	return new QEvent(*other);
}

void QEvent_operatorAssign(QEvent* self, QEvent* other) {
	self->operator=(*other);
}

int QEvent_type(const QEvent* self) {
	QEvent::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QEvent_spontaneous(const QEvent* self) {
	return self->spontaneous();
}

void QEvent_setAccepted(QEvent* self, bool accepted) {
	self->setAccepted(accepted);
}

bool QEvent_isAccepted(const QEvent* self) {
	return self->isAccepted();
}

void QEvent_accept(QEvent* self) {
	self->accept();
}

void QEvent_ignore(QEvent* self) {
	self->ignore();
}

int QEvent_registerEventType() {
	return QEvent::registerEventType();
}

int QEvent_registerEventType1(int hint) {
	return QEvent::registerEventType(static_cast<int>(hint));
}

void QEvent_delete(QEvent* self) {
	delete self;
}

QTimerEvent* QTimerEvent_new(int timerId) {
	return new QTimerEvent(static_cast<int>(timerId));
}

QTimerEvent* QTimerEvent_new2(QTimerEvent* param1) {
	return new QTimerEvent(*param1);
}

void QTimerEvent_virtbase(QTimerEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

int QTimerEvent_timerId(const QTimerEvent* self) {
	return self->timerId();
}

void QTimerEvent_delete(QTimerEvent* self) {
	delete self;
}

QChildEvent* QChildEvent_new(int type, QObject* child) {
	return new QChildEvent(static_cast<QEvent::Type>(type), child);
}

QChildEvent* QChildEvent_new2(QChildEvent* param1) {
	return new QChildEvent(*param1);
}

void QChildEvent_virtbase(QChildEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QObject* QChildEvent_child(const QChildEvent* self) {
	return self->child();
}

bool QChildEvent_added(const QChildEvent* self) {
	return self->added();
}

bool QChildEvent_polished(const QChildEvent* self) {
	return self->polished();
}

bool QChildEvent_removed(const QChildEvent* self) {
	return self->removed();
}

void QChildEvent_delete(QChildEvent* self) {
	delete self;
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(struct miqt_string name) {
	QByteArray name_QByteArray(name.data, name.len);
	return new QDynamicPropertyChangeEvent(name_QByteArray);
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new2(QDynamicPropertyChangeEvent* param1) {
	return new QDynamicPropertyChangeEvent(*param1);
}

void QDynamicPropertyChangeEvent_virtbase(QDynamicPropertyChangeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

struct miqt_string QDynamicPropertyChangeEvent_propertyName(const QDynamicPropertyChangeEvent* self) {
	QByteArray _qb = self->propertyName();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QDynamicPropertyChangeEvent_delete(QDynamicPropertyChangeEvent* self) {
	delete self;
}

