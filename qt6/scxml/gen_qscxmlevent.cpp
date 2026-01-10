#include <QScxmlEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qscxmlevent.h>
#include "gen_qscxmlevent.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QScxmlEvent* QScxmlEvent_new() {
	return new (std::nothrow) QScxmlEvent();
}

QScxmlEvent* QScxmlEvent_new2(QScxmlEvent* other) {
	return new (std::nothrow) QScxmlEvent(*other);
}

void QScxmlEvent_operatorAssign(QScxmlEvent* self, QScxmlEvent* other) {
	self->operator=(*other);
}

struct miqt_string QScxmlEvent_name(const QScxmlEvent* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScxmlEvent_setName(QScxmlEvent* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

int QScxmlEvent_eventType(const QScxmlEvent* self) {
	QScxmlEvent::EventType _ret = self->eventType();
	return static_cast<int>(_ret);
}

void QScxmlEvent_setEventType(QScxmlEvent* self, int* type) {
	self->setEventType((const QScxmlEvent::EventType&)(*type));
}

struct miqt_string QScxmlEvent_scxmlType(const QScxmlEvent* self) {
	QString _ret = self->scxmlType();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScxmlEvent_sendId(const QScxmlEvent* self) {
	QString _ret = self->sendId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScxmlEvent_setSendId(QScxmlEvent* self, struct miqt_string sendId) {
	QString sendId_QString = QString::fromUtf8(sendId.data, sendId.len);
	self->setSendId(sendId_QString);
}

struct miqt_string QScxmlEvent_origin(const QScxmlEvent* self) {
	QString _ret = self->origin();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScxmlEvent_setOrigin(QScxmlEvent* self, struct miqt_string origin) {
	QString origin_QString = QString::fromUtf8(origin.data, origin.len);
	self->setOrigin(origin_QString);
}

struct miqt_string QScxmlEvent_originType(const QScxmlEvent* self) {
	QString _ret = self->originType();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScxmlEvent_setOriginType(QScxmlEvent* self, struct miqt_string originType) {
	QString originType_QString = QString::fromUtf8(originType.data, originType.len);
	self->setOriginType(originType_QString);
}

struct miqt_string QScxmlEvent_invokeId(const QScxmlEvent* self) {
	QString _ret = self->invokeId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScxmlEvent_setInvokeId(QScxmlEvent* self, struct miqt_string invokeId) {
	QString invokeId_QString = QString::fromUtf8(invokeId.data, invokeId.len);
	self->setInvokeId(invokeId_QString);
}

int QScxmlEvent_delay(const QScxmlEvent* self) {
	return self->delay();
}

void QScxmlEvent_setDelay(QScxmlEvent* self, int delayInMiliSecs) {
	self->setDelay(static_cast<int>(delayInMiliSecs));
}

void QScxmlEvent_clear(QScxmlEvent* self) {
	self->clear();
}

QVariant* QScxmlEvent_data(const QScxmlEvent* self) {
	return new QVariant(self->data());
}

void QScxmlEvent_setData(QScxmlEvent* self, QVariant* data) {
	self->setData(*data);
}

bool QScxmlEvent_isErrorEvent(const QScxmlEvent* self) {
	return self->isErrorEvent();
}

struct miqt_string QScxmlEvent_errorMessage(const QScxmlEvent* self) {
	QString _ret = self->errorMessage();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScxmlEvent_setErrorMessage(QScxmlEvent* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->setErrorMessage(message_QString);
}

void QScxmlEvent_delete(QScxmlEvent* self) {
	delete self;
}

