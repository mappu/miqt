#include <QByteArray>
#include <QChildEvent>
#include <QDtls>
#include <QDtlsClientVerifier>
#define WORKAROUND_INNER_CLASS_DEFINITION_QDtlsClientVerifier__GeneratorParameters
#include <QEvent>
#include <QHostAddress>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUdpSocket>
#include <qdtls.h>
#include "gen_qdtls.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QDtlsClientVerifier_event(QDtlsClientVerifier*, intptr_t, QEvent*);
bool miqt_exec_callback_QDtlsClientVerifier_eventFilter(QDtlsClientVerifier*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDtlsClientVerifier_timerEvent(QDtlsClientVerifier*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDtlsClientVerifier_childEvent(QDtlsClientVerifier*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDtlsClientVerifier_customEvent(QDtlsClientVerifier*, intptr_t, QEvent*);
void miqt_exec_callback_QDtlsClientVerifier_connectNotify(QDtlsClientVerifier*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDtlsClientVerifier_disconnectNotify(QDtlsClientVerifier*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDtls_pskRequired(intptr_t, QSslPreSharedKeyAuthenticator*);
void miqt_exec_callback_QDtls_handshakeTimeout(intptr_t);
bool miqt_exec_callback_QDtls_event(QDtls*, intptr_t, QEvent*);
bool miqt_exec_callback_QDtls_eventFilter(QDtls*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDtls_timerEvent(QDtls*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDtls_childEvent(QDtls*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDtls_customEvent(QDtls*, intptr_t, QEvent*);
void miqt_exec_callback_QDtls_connectNotify(QDtls*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDtls_disconnectNotify(QDtls*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDtlsClientVerifier final : public QDtlsClientVerifier {
public:

	MiqtVirtualQDtlsClientVerifier(): QDtlsClientVerifier() {};
	MiqtVirtualQDtlsClientVerifier(QObject* parent): QDtlsClientVerifier(parent) {};

	virtual ~MiqtVirtualQDtlsClientVerifier() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDtlsClientVerifier::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDtlsClientVerifier_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QDtlsClientVerifier::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDtlsClientVerifier::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDtlsClientVerifier_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDtlsClientVerifier::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDtlsClientVerifier::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDtlsClientVerifier_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QDtlsClientVerifier::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDtlsClientVerifier::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDtlsClientVerifier_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDtlsClientVerifier::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDtlsClientVerifier::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDtlsClientVerifier_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDtlsClientVerifier::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDtlsClientVerifier::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDtlsClientVerifier_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDtlsClientVerifier::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDtlsClientVerifier::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDtlsClientVerifier_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDtlsClientVerifier::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QDtlsClientVerifier_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDtlsClientVerifier_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDtlsClientVerifier_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDtlsClientVerifier_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDtlsClientVerifier* QDtlsClientVerifier_new() {
	return new MiqtVirtualQDtlsClientVerifier();
}

QDtlsClientVerifier* QDtlsClientVerifier_new2(QObject* parent) {
	return new MiqtVirtualQDtlsClientVerifier(parent);
}

void QDtlsClientVerifier_virtbase(QDtlsClientVerifier* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDtlsClientVerifier_metaObject(const QDtlsClientVerifier* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDtlsClientVerifier_metacast(QDtlsClientVerifier* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDtlsClientVerifier_tr(const char* s) {
	QString _ret = QDtlsClientVerifier::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDtlsClientVerifier_setCookieGeneratorParameters(QDtlsClientVerifier* self, QDtlsClientVerifier__GeneratorParameters* params) {
	return self->setCookieGeneratorParameters(*params);
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier_cookieGeneratorParameters(const QDtlsClientVerifier* self) {
	return new QDtlsClientVerifier::GeneratorParameters(self->cookieGeneratorParameters());
}

bool QDtlsClientVerifier_verifyClient(QDtlsClientVerifier* self, QUdpSocket* socket, struct miqt_string dgram, QHostAddress* address, uint16_t port) {
	QByteArray dgram_QByteArray(dgram.data, dgram.len);
	return self->verifyClient(socket, dgram_QByteArray, *address, static_cast<quint16>(port));
}

struct miqt_string QDtlsClientVerifier_verifiedHello(const QDtlsClientVerifier* self) {
	QByteArray _qb = self->verifiedHello();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

unsigned char QDtlsClientVerifier_dtlsError(const QDtlsClientVerifier* self) {
	QDtlsError _ret = self->dtlsError();
	return static_cast<unsigned char>(_ret);
}

struct miqt_string QDtlsClientVerifier_dtlsErrorString(const QDtlsClientVerifier* self) {
	QString _ret = self->dtlsErrorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDtlsClientVerifier_tr2(const char* s, const char* c) {
	QString _ret = QDtlsClientVerifier::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDtlsClientVerifier_tr3(const char* s, const char* c, int n) {
	QString _ret = QDtlsClientVerifier::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDtlsClientVerifier_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDtlsClientVerifier* self_cast = dynamic_cast<MiqtVirtualQDtlsClientVerifier*>( (QDtlsClientVerifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDtlsClientVerifier_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDtlsClientVerifier*)(self) )->virtualbase_event(event);
}

bool QDtlsClientVerifier_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDtlsClientVerifier* self_cast = dynamic_cast<MiqtVirtualQDtlsClientVerifier*>( (QDtlsClientVerifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDtlsClientVerifier_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDtlsClientVerifier*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDtlsClientVerifier_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDtlsClientVerifier* self_cast = dynamic_cast<MiqtVirtualQDtlsClientVerifier*>( (QDtlsClientVerifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDtlsClientVerifier_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDtlsClientVerifier*)(self) )->virtualbase_timerEvent(event);
}

bool QDtlsClientVerifier_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDtlsClientVerifier* self_cast = dynamic_cast<MiqtVirtualQDtlsClientVerifier*>( (QDtlsClientVerifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDtlsClientVerifier_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDtlsClientVerifier*)(self) )->virtualbase_childEvent(event);
}

bool QDtlsClientVerifier_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDtlsClientVerifier* self_cast = dynamic_cast<MiqtVirtualQDtlsClientVerifier*>( (QDtlsClientVerifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDtlsClientVerifier_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDtlsClientVerifier*)(self) )->virtualbase_customEvent(event);
}

bool QDtlsClientVerifier_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDtlsClientVerifier* self_cast = dynamic_cast<MiqtVirtualQDtlsClientVerifier*>( (QDtlsClientVerifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDtlsClientVerifier_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDtlsClientVerifier*)(self) )->virtualbase_connectNotify(signal);
}

bool QDtlsClientVerifier_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDtlsClientVerifier* self_cast = dynamic_cast<MiqtVirtualQDtlsClientVerifier*>( (QDtlsClientVerifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDtlsClientVerifier_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDtlsClientVerifier*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QDtlsClientVerifier_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDtlsClientVerifier* self_cast = dynamic_cast<MiqtVirtualQDtlsClientVerifier*>( (QDtlsClientVerifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDtlsClientVerifier_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDtlsClientVerifier* self_cast = dynamic_cast<MiqtVirtualQDtlsClientVerifier*>( (QDtlsClientVerifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDtlsClientVerifier_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDtlsClientVerifier* self_cast = dynamic_cast<MiqtVirtualQDtlsClientVerifier*>( (QDtlsClientVerifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDtlsClientVerifier_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDtlsClientVerifier* self_cast = dynamic_cast<MiqtVirtualQDtlsClientVerifier*>( (QDtlsClientVerifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDtlsClientVerifier_delete(QDtlsClientVerifier* self) {
	delete self;
}

class MiqtVirtualQDtls final : public QDtls {
public:

	MiqtVirtualQDtls(QSslSocket::SslMode mode): QDtls(mode) {};
	MiqtVirtualQDtls(QSslSocket::SslMode mode, QObject* parent): QDtls(mode, parent) {};

	virtual ~MiqtVirtualQDtls() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDtls::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDtls_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QDtls::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDtls::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDtls_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDtls::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDtls::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDtls_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QDtls::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDtls::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDtls_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDtls::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDtls::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDtls_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDtls::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDtls::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDtls_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDtls::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDtls::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDtls_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDtls::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QDtls_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDtls_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDtls_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDtls_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDtls* QDtls_new(int mode) {
	return new MiqtVirtualQDtls(static_cast<QSslSocket::SslMode>(mode));
}

QDtls* QDtls_new2(int mode, QObject* parent) {
	return new MiqtVirtualQDtls(static_cast<QSslSocket::SslMode>(mode), parent);
}

void QDtls_virtbase(QDtls* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDtls_metaObject(const QDtls* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDtls_metacast(QDtls* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDtls_tr(const char* s) {
	QString _ret = QDtls::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDtls_setPeer(QDtls* self, QHostAddress* address, uint16_t port) {
	return self->setPeer(*address, static_cast<quint16>(port));
}

bool QDtls_setPeerVerificationName(QDtls* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->setPeerVerificationName(name_QString);
}

QHostAddress* QDtls_peerAddress(const QDtls* self) {
	return new QHostAddress(self->peerAddress());
}

uint16_t QDtls_peerPort(const QDtls* self) {
	quint16 _ret = self->peerPort();
	return static_cast<uint16_t>(_ret);
}

struct miqt_string QDtls_peerVerificationName(const QDtls* self) {
	QString _ret = self->peerVerificationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDtls_sslMode(const QDtls* self) {
	QSslSocket::SslMode _ret = self->sslMode();
	return static_cast<int>(_ret);
}

void QDtls_setMtuHint(QDtls* self, uint16_t mtuHint) {
	self->setMtuHint(static_cast<quint16>(mtuHint));
}

uint16_t QDtls_mtuHint(const QDtls* self) {
	quint16 _ret = self->mtuHint();
	return static_cast<uint16_t>(_ret);
}

bool QDtls_setCookieGeneratorParameters(QDtls* self, QDtlsClientVerifier__GeneratorParameters* params) {
	return self->setCookieGeneratorParameters(*params);
}

QDtlsClientVerifier__GeneratorParameters* QDtls_cookieGeneratorParameters(const QDtls* self) {
	return new QDtlsClientVerifier::GeneratorParameters(self->cookieGeneratorParameters());
}

bool QDtls_setDtlsConfiguration(QDtls* self, QSslConfiguration* configuration) {
	return self->setDtlsConfiguration(*configuration);
}

QSslConfiguration* QDtls_dtlsConfiguration(const QDtls* self) {
	return new QSslConfiguration(self->dtlsConfiguration());
}

int QDtls_handshakeState(const QDtls* self) {
	QDtls::HandshakeState _ret = self->handshakeState();
	return static_cast<int>(_ret);
}

bool QDtls_doHandshake(QDtls* self, QUdpSocket* socket) {
	return self->doHandshake(socket);
}

bool QDtls_handleTimeout(QDtls* self, QUdpSocket* socket) {
	return self->handleTimeout(socket);
}

bool QDtls_resumeHandshake(QDtls* self, QUdpSocket* socket) {
	return self->resumeHandshake(socket);
}

bool QDtls_abortHandshake(QDtls* self, QUdpSocket* socket) {
	return self->abortHandshake(socket);
}

bool QDtls_shutdown(QDtls* self, QUdpSocket* socket) {
	return self->shutdown(socket);
}

bool QDtls_isConnectionEncrypted(const QDtls* self) {
	return self->isConnectionEncrypted();
}

QSslCipher* QDtls_sessionCipher(const QDtls* self) {
	return new QSslCipher(self->sessionCipher());
}

int QDtls_sessionProtocol(const QDtls* self) {
	QSsl::SslProtocol _ret = self->sessionProtocol();
	return static_cast<int>(_ret);
}

long long QDtls_writeDatagramEncrypted(QDtls* self, QUdpSocket* socket, struct miqt_string dgram) {
	QByteArray dgram_QByteArray(dgram.data, dgram.len);
	qint64 _ret = self->writeDatagramEncrypted(socket, dgram_QByteArray);
	return static_cast<long long>(_ret);
}

struct miqt_string QDtls_decryptDatagram(QDtls* self, QUdpSocket* socket, struct miqt_string dgram) {
	QByteArray dgram_QByteArray(dgram.data, dgram.len);
	QByteArray _qb = self->decryptDatagram(socket, dgram_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

unsigned char QDtls_dtlsError(const QDtls* self) {
	QDtlsError _ret = self->dtlsError();
	return static_cast<unsigned char>(_ret);
}

struct miqt_string QDtls_dtlsErrorString(const QDtls* self) {
	QString _ret = self->dtlsErrorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QSslError* */  QDtls_peerVerificationErrors(const QDtls* self) {
	QList<QSslError> _ret = self->peerVerificationErrors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslError** _arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslError(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDtls_ignoreVerificationErrors(QDtls* self, struct miqt_array /* of QSslError* */  errorsToIgnore) {
	QList<QSslError> errorsToIgnore_QList;
	errorsToIgnore_QList.reserve(errorsToIgnore.len);
	QSslError** errorsToIgnore_arr = static_cast<QSslError**>(errorsToIgnore.data);
	for(size_t i = 0; i < errorsToIgnore.len; ++i) {
		errorsToIgnore_QList.push_back(*(errorsToIgnore_arr[i]));
	}
	self->ignoreVerificationErrors(errorsToIgnore_QList);
}

void QDtls_pskRequired(QDtls* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->pskRequired(authenticator);
}

void QDtls_connect_pskRequired(QDtls* self, intptr_t slot) {
	MiqtVirtualQDtls::connect(self, static_cast<void (QDtls::*)(QSslPreSharedKeyAuthenticator*)>(&QDtls::pskRequired), self, [=](QSslPreSharedKeyAuthenticator* authenticator) {
		QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
		miqt_exec_callback_QDtls_pskRequired(slot, sigval1);
	});
}

void QDtls_handshakeTimeout(QDtls* self) {
	self->handshakeTimeout();
}

void QDtls_connect_handshakeTimeout(QDtls* self, intptr_t slot) {
	MiqtVirtualQDtls::connect(self, static_cast<void (QDtls::*)()>(&QDtls::handshakeTimeout), self, [=]() {
		miqt_exec_callback_QDtls_handshakeTimeout(slot);
	});
}

struct miqt_string QDtls_tr2(const char* s, const char* c) {
	QString _ret = QDtls::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDtls_tr3(const char* s, const char* c, int n) {
	QString _ret = QDtls::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDtls_setPeer3(QDtls* self, QHostAddress* address, uint16_t port, struct miqt_string verificationName) {
	QString verificationName_QString = QString::fromUtf8(verificationName.data, verificationName.len);
	return self->setPeer(*address, static_cast<quint16>(port), verificationName_QString);
}

bool QDtls_doHandshake2(QDtls* self, QUdpSocket* socket, struct miqt_string dgram) {
	QByteArray dgram_QByteArray(dgram.data, dgram.len);
	return self->doHandshake(socket, dgram_QByteArray);
}

bool QDtls_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDtls* self_cast = dynamic_cast<MiqtVirtualQDtls*>( (QDtls*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDtls_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDtls*)(self) )->virtualbase_event(event);
}

bool QDtls_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDtls* self_cast = dynamic_cast<MiqtVirtualQDtls*>( (QDtls*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDtls_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDtls*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDtls_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDtls* self_cast = dynamic_cast<MiqtVirtualQDtls*>( (QDtls*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDtls_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDtls*)(self) )->virtualbase_timerEvent(event);
}

bool QDtls_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDtls* self_cast = dynamic_cast<MiqtVirtualQDtls*>( (QDtls*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDtls_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDtls*)(self) )->virtualbase_childEvent(event);
}

bool QDtls_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDtls* self_cast = dynamic_cast<MiqtVirtualQDtls*>( (QDtls*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDtls_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDtls*)(self) )->virtualbase_customEvent(event);
}

bool QDtls_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDtls* self_cast = dynamic_cast<MiqtVirtualQDtls*>( (QDtls*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDtls_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDtls*)(self) )->virtualbase_connectNotify(signal);
}

bool QDtls_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDtls* self_cast = dynamic_cast<MiqtVirtualQDtls*>( (QDtls*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDtls_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDtls*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QDtls_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDtls* self_cast = dynamic_cast<MiqtVirtualQDtls*>( (QDtls*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDtls_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDtls* self_cast = dynamic_cast<MiqtVirtualQDtls*>( (QDtls*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDtls_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDtls* self_cast = dynamic_cast<MiqtVirtualQDtls*>( (QDtls*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDtls_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDtls* self_cast = dynamic_cast<MiqtVirtualQDtls*>( (QDtls*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDtls_delete(QDtls* self) {
	delete self;
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new() {
	return new QDtlsClientVerifier::GeneratorParameters();
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new2(int a, struct miqt_string s) {
	QByteArray s_QByteArray(s.data, s.len);
	return new QDtlsClientVerifier::GeneratorParameters(static_cast<QCryptographicHash::Algorithm>(a), s_QByteArray);
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new3(QDtlsClientVerifier__GeneratorParameters* param1) {
	return new QDtlsClientVerifier::GeneratorParameters(*param1);
}

void QDtlsClientVerifier__GeneratorParameters_operatorAssign(QDtlsClientVerifier__GeneratorParameters* self, QDtlsClientVerifier__GeneratorParameters* param1) {
	self->operator=(*param1);
}

void QDtlsClientVerifier__GeneratorParameters_delete(QDtlsClientVerifier__GeneratorParameters* self) {
	delete self;
}

