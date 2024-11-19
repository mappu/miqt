#include <QByteArray>
#include <QChildEvent>
#include <QDynamicPropertyChangeEvent>
#include <QEvent>
#include <QObject>
#include <QTimerEvent>
#include <qcoreevent.h>
#include "gen_qcoreevent.h"
#include "_cgo_export.h"

void QEvent_new(int typeVal, QEvent** outptr_QEvent) {
	QEvent* ret = new QEvent(static_cast<QEvent::Type>(typeVal));
	*outptr_QEvent = ret;
}

void QEvent_new2(QEvent* other, QEvent** outptr_QEvent) {
	QEvent* ret = new QEvent(*other);
	*outptr_QEvent = ret;
}

void QEvent_OperatorAssign(QEvent* self, QEvent* other) {
	self->operator=(*other);
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

int QEvent_RegisterEventType() {
	return QEvent::registerEventType();
}

int QEvent_RegisterEventType1(int hint) {
	return QEvent::registerEventType(static_cast<int>(hint));
}

void QEvent_Delete(QEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QEvent*>( self );
	} else {
		delete self;
	}
}

void QTimerEvent_new(int timerId, QTimerEvent** outptr_QTimerEvent, QEvent** outptr_QEvent) {
	QTimerEvent* ret = new QTimerEvent(static_cast<int>(timerId));
	*outptr_QTimerEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QTimerEvent_new2(QTimerEvent* param1, QTimerEvent** outptr_QTimerEvent, QEvent** outptr_QEvent) {
	QTimerEvent* ret = new QTimerEvent(*param1);
	*outptr_QTimerEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

int QTimerEvent_TimerId(const QTimerEvent* self) {
	return self->timerId();
}

void QTimerEvent_Delete(QTimerEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTimerEvent*>( self );
	} else {
		delete self;
	}
}

void QChildEvent_new(int typeVal, QObject* child, QChildEvent** outptr_QChildEvent, QEvent** outptr_QEvent) {
	QChildEvent* ret = new QChildEvent(static_cast<QEvent::Type>(typeVal), child);
	*outptr_QChildEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QChildEvent_new2(QChildEvent* param1, QChildEvent** outptr_QChildEvent, QEvent** outptr_QEvent) {
	QChildEvent* ret = new QChildEvent(*param1);
	*outptr_QChildEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QChildEvent_Delete(QChildEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QChildEvent*>( self );
	} else {
		delete self;
	}
}

void QDynamicPropertyChangeEvent_new(struct miqt_string name, QDynamicPropertyChangeEvent** outptr_QDynamicPropertyChangeEvent, QEvent** outptr_QEvent) {
	QByteArray name_QByteArray(name.data, name.len);
	QDynamicPropertyChangeEvent* ret = new QDynamicPropertyChangeEvent(name_QByteArray);
	*outptr_QDynamicPropertyChangeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QDynamicPropertyChangeEvent_new2(QDynamicPropertyChangeEvent* param1, QDynamicPropertyChangeEvent** outptr_QDynamicPropertyChangeEvent, QEvent** outptr_QEvent) {
	QDynamicPropertyChangeEvent* ret = new QDynamicPropertyChangeEvent(*param1);
	*outptr_QDynamicPropertyChangeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

struct miqt_string QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self) {
	QByteArray _qb = self->propertyName();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QDynamicPropertyChangeEvent*>( self );
	} else {
		delete self;
	}
}

