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

bool miqt_exec_callback_QHttpMultiPart_event(QHttpMultiPart*, intptr_t, QEvent*);
bool miqt_exec_callback_QHttpMultiPart_eventFilter(QHttpMultiPart*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHttpMultiPart_timerEvent(QHttpMultiPart*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHttpMultiPart_childEvent(QHttpMultiPart*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHttpMultiPart_customEvent(QHttpMultiPart*, intptr_t, QEvent*);
void miqt_exec_callback_QHttpMultiPart_connectNotify(QHttpMultiPart*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHttpMultiPart_disconnectNotify(QHttpMultiPart*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QHttpPart* QHttpPart_new() {
	return new QHttpPart();
}

QHttpPart* QHttpPart_new2(QHttpPart* other) {
	return new QHttpPart(*other);
}

void QHttpPart_operatorAssign(QHttpPart* self, QHttpPart* other) {
	self->operator=(*other);
}

void QHttpPart_swap(QHttpPart* self, QHttpPart* other) {
	self->swap(*other);
}

bool QHttpPart_operatorEqual(const QHttpPart* self, QHttpPart* other) {
	return (*self == *other);
}

bool QHttpPart_operatorNotEqual(const QHttpPart* self, QHttpPart* other) {
	return (*self != *other);
}

void QHttpPart_setHeader(QHttpPart* self, int header, QVariant* value) {
	self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

void QHttpPart_setRawHeader(QHttpPart* self, struct miqt_string headerName, struct miqt_string headerValue) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray headerValue_QByteArray(headerValue.data, headerValue.len);
	self->setRawHeader(headerName_QByteArray, headerValue_QByteArray);
}

void QHttpPart_setBody(QHttpPart* self, struct miqt_string body) {
	QByteArray body_QByteArray(body.data, body.len);
	self->setBody(body_QByteArray);
}

void QHttpPart_setBodyDevice(QHttpPart* self, QIODevice* device) {
	self->setBodyDevice(device);
}

void QHttpPart_delete(QHttpPart* self) {
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
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QHttpMultiPart::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QHttpMultiPart_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QHttpMultiPart::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QHttpMultiPart::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QHttpMultiPart_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QHttpMultiPart::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QHttpMultiPart::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QHttpMultiPart_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QHttpMultiPart::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QHttpMultiPart::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QHttpMultiPart_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QHttpMultiPart::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QHttpMultiPart::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHttpMultiPart_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QHttpMultiPart::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QHttpMultiPart::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHttpMultiPart_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QHttpMultiPart::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QHttpMultiPart::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHttpMultiPart_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QHttpMultiPart::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QHttpMultiPart_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHttpMultiPart_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHttpMultiPart_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHttpMultiPart_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QHttpMultiPart_metaObject(const QHttpMultiPart* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHttpMultiPart_metacast(QHttpMultiPart* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHttpMultiPart_tr(const char* s) {
	QString _ret = QHttpMultiPart::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHttpMultiPart_append(QHttpMultiPart* self, QHttpPart* httpPart) {
	self->append(*httpPart);
}

void QHttpMultiPart_setContentType(QHttpMultiPart* self, int contentType) {
	self->setContentType(static_cast<QHttpMultiPart::ContentType>(contentType));
}

struct miqt_string QHttpMultiPart_boundary(const QHttpMultiPart* self) {
	QByteArray _qb = self->boundary();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QHttpMultiPart_setBoundary(QHttpMultiPart* self, struct miqt_string boundary) {
	QByteArray boundary_QByteArray(boundary.data, boundary.len);
	self->setBoundary(boundary_QByteArray);
}

struct miqt_string QHttpMultiPart_tr2(const char* s, const char* c) {
	QString _ret = QHttpMultiPart::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHttpMultiPart_tr3(const char* s, const char* c, int n) {
	QString _ret = QHttpMultiPart::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHttpMultiPart_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QHttpMultiPart_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_event(event);
}

bool QHttpMultiPart_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QHttpMultiPart_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QHttpMultiPart_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QHttpMultiPart_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_timerEvent(event);
}

bool QHttpMultiPart_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QHttpMultiPart_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_childEvent(event);
}

bool QHttpMultiPart_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QHttpMultiPart_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_customEvent(event);
}

bool QHttpMultiPart_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QHttpMultiPart_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_connectNotify(signal);
}

bool QHttpMultiPart_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QHttpMultiPart_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHttpMultiPart*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QHttpMultiPart_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QHttpMultiPart_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QHttpMultiPart_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QHttpMultiPart_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QHttpMultiPart_delete(QHttpMultiPart* self) {
	delete self;
}

