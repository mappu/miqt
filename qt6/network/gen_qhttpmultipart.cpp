#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHttpMultiPart>
#include <QHttpPart>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qhttpmultipart.h>
#include "gen_qhttpmultipart.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QHttpMultiPart_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QHttpMultiPart_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHttpMultiPart_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHttpMultiPart_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHttpMultiPart_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QHttpMultiPart_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHttpMultiPart_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QHttpPart* QHttpPart_new() {
	return new QHttpPart();
}

QHttpPart* QHttpPart_new2(QHttpPart* other) {
	return new QHttpPart(*other);
}

void QHttpPart_OperatorAssign(QHttpPart* self, QHttpPart* other) {
	self->operator=(*other);
}

void QHttpPart_Swap(QHttpPart* self, QHttpPart* other) {
	self->swap(*other);
}

bool QHttpPart_OperatorEqual(const QHttpPart* self, QHttpPart* other) {
	return (*self == *other);
}

bool QHttpPart_OperatorNotEqual(const QHttpPart* self, QHttpPart* other) {
	return (*self != *other);
}

void QHttpPart_SetHeader(QHttpPart* self, int header, QVariant* value) {
	self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

void QHttpPart_SetRawHeader(QHttpPart* self, struct miqt_string headerName, struct miqt_string headerValue) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray headerValue_QByteArray(headerValue.data, headerValue.len);
	self->setRawHeader(headerName_QByteArray, headerValue_QByteArray);
}

void QHttpPart_SetBody(QHttpPart* self, struct miqt_string body) {
	QByteArray body_QByteArray(body.data, body.len);
	self->setBody(body_QByteArray);
}

void QHttpPart_SetBodyDevice(QHttpPart* self, QIODevice* device) {
	self->setBodyDevice(device);
}

void QHttpPart_Delete(QHttpPart* self) {
	delete self;
}

class MiqtVirtualQHttpMultiPart final : public QHttpMultiPart {
public:

	MiqtVirtualQHttpMultiPart(): QHttpMultiPart() {};
	MiqtVirtualQHttpMultiPart(QHttpMultiPart::ContentType contentType): QHttpMultiPart(contentType) {};
	MiqtVirtualQHttpMultiPart(QObject* parent): QHttpMultiPart(parent) {};
	MiqtVirtualQHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject* parent): QHttpMultiPart(contentType, parent) {};

	virtual ~MiqtVirtualQHttpMultiPart() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QHttpMultiPart::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QHttpMultiPart_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QHttpMultiPart::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QHttpMultiPart::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QHttpMultiPart_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QHttpMultiPart::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QHttpMultiPart::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QHttpMultiPart_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QHttpMultiPart::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QHttpMultiPart::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QHttpMultiPart_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QHttpMultiPart::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QHttpMultiPart::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHttpMultiPart_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QHttpMultiPart::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QHttpMultiPart::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHttpMultiPart_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QHttpMultiPart::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QHttpMultiPart::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHttpMultiPart_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QHttpMultiPart::disconnectNotify(*signal);

	}

};

QHttpMultiPart* QHttpMultiPart_new() {
	return new MiqtVirtualQHttpMultiPart();
}

QHttpMultiPart* QHttpMultiPart_new2(int contentType) {
	return new MiqtVirtualQHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType));
}

QHttpMultiPart* QHttpMultiPart_new3(QObject* parent) {
	return new MiqtVirtualQHttpMultiPart(parent);
}

QHttpMultiPart* QHttpMultiPart_new4(int contentType, QObject* parent) {
	return new MiqtVirtualQHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType), parent);
}

void QHttpMultiPart_virtbase(QHttpMultiPart* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QHttpMultiPart_MetaObject(const QHttpMultiPart* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHttpMultiPart_Metacast(QHttpMultiPart* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHttpMultiPart_Tr(const char* s) {
	QString _ret = QHttpMultiPart::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHttpMultiPart_Append(QHttpMultiPart* self, QHttpPart* httpPart) {
	self->append(*httpPart);
}

void QHttpMultiPart_SetContentType(QHttpMultiPart* self, int contentType) {
	self->setContentType(static_cast<QHttpMultiPart::ContentType>(contentType));
}

struct miqt_string QHttpMultiPart_Boundary(const QHttpMultiPart* self) {
	QByteArray _qb = self->boundary();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QHttpMultiPart_SetBoundary(QHttpMultiPart* self, struct miqt_string boundary) {
	QByteArray boundary_QByteArray(boundary.data, boundary.len);
	self->setBoundary(boundary_QByteArray);
}

struct miqt_string QHttpMultiPart_Tr2(const char* s, const char* c) {
	QString _ret = QHttpMultiPart::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHttpMultiPart_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHttpMultiPart::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHttpMultiPart_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) )->handle__Event = slot;
}

bool QHttpMultiPart_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_Event(event);
}

void QHttpMultiPart_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) )->handle__EventFilter = slot;
}

bool QHttpMultiPart_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_EventFilter(watched, event);
}

void QHttpMultiPart_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) )->handle__TimerEvent = slot;
}

void QHttpMultiPart_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_TimerEvent(event);
}

void QHttpMultiPart_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) )->handle__ChildEvent = slot;
}

void QHttpMultiPart_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_ChildEvent(event);
}

void QHttpMultiPart_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) )->handle__CustomEvent = slot;
}

void QHttpMultiPart_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_CustomEvent(event);
}

void QHttpMultiPart_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) )->handle__ConnectNotify = slot;
}

void QHttpMultiPart_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_ConnectNotify(signal);
}

void QHttpMultiPart_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) )->handle__DisconnectNotify = slot;
}

void QHttpMultiPart_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QHttpMultiPart_Delete(QHttpMultiPart* self) {
	delete self;
}

