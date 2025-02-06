#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkConfiguration>
#include <QNetworkInterface>
#include <QNetworkSession>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qnetworksession.h>
#include "gen_qnetworksession.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QNetworkSession_stateChanged(intptr_t, int);
void miqt_exec_callback_QNetworkSession_opened(intptr_t);
void miqt_exec_callback_QNetworkSession_closed(intptr_t);
void miqt_exec_callback_QNetworkSession_errorWithQNetworkSessionSessionError(intptr_t, int);
void miqt_exec_callback_QNetworkSession_preferredConfigurationChanged(intptr_t, QNetworkConfiguration*, bool);
void miqt_exec_callback_QNetworkSession_newConfigurationActivated(intptr_t);
void miqt_exec_callback_QNetworkSession_usagePoliciesChanged(intptr_t, int);
void miqt_exec_callback_QNetworkSession_connectNotify(QNetworkSession*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNetworkSession_disconnectNotify(QNetworkSession*, intptr_t, QMetaMethod*);
bool miqt_exec_callback_QNetworkSession_event(QNetworkSession*, intptr_t, QEvent*);
bool miqt_exec_callback_QNetworkSession_eventFilter(QNetworkSession*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNetworkSession_timerEvent(QNetworkSession*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNetworkSession_childEvent(QNetworkSession*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNetworkSession_customEvent(QNetworkSession*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNetworkSession final : public QNetworkSession {
public:

	MiqtVirtualQNetworkSession(const QNetworkConfiguration& connConfig): QNetworkSession(connConfig) {};
	MiqtVirtualQNetworkSession(const QNetworkConfiguration& connConfig, QObject* parent): QNetworkSession(connConfig, parent) {};

	virtual ~MiqtVirtualQNetworkSession() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QNetworkSession::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkSession_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QNetworkSession::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QNetworkSession::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkSession_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QNetworkSession::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QNetworkSession::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkSession_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QNetworkSession::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QNetworkSession::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkSession_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QNetworkSession::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QNetworkSession::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QNetworkSession_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QNetworkSession::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QNetworkSession::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QNetworkSession_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QNetworkSession::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QNetworkSession::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QNetworkSession_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QNetworkSession::customEvent(event);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QNetworkSession_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QNetworkSession_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QNetworkSession_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QNetworkSession_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QNetworkSession* QNetworkSession_new(QNetworkConfiguration* connConfig) {
	return new MiqtVirtualQNetworkSession(*connConfig);
}

QNetworkSession* QNetworkSession_new2(QNetworkConfiguration* connConfig, QObject* parent) {
	return new MiqtVirtualQNetworkSession(*connConfig, parent);
}

void QNetworkSession_virtbase(QNetworkSession* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QNetworkSession_metaObject(const QNetworkSession* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkSession_metacast(QNetworkSession* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkSession_tr(const char* s) {
	QString _ret = QNetworkSession::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkSession_trUtf8(const char* s) {
	QString _ret = QNetworkSession::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNetworkSession_isOpen(const QNetworkSession* self) {
	return self->isOpen();
}

QNetworkConfiguration* QNetworkSession_configuration(const QNetworkSession* self) {
	return new QNetworkConfiguration(self->configuration());
}

QNetworkInterface* QNetworkSession_interface(const QNetworkSession* self) {
	return new QNetworkInterface(self->interface());
}

int QNetworkSession_state(const QNetworkSession* self) {
	QNetworkSession::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QNetworkSession_error(const QNetworkSession* self) {
	QNetworkSession::SessionError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QNetworkSession_errorString(const QNetworkSession* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QNetworkSession_sessionProperty(const QNetworkSession* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->sessionProperty(key_QString));
}

void QNetworkSession_setSessionProperty(QNetworkSession* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setSessionProperty(key_QString, *value);
}

unsigned long long QNetworkSession_bytesWritten(const QNetworkSession* self) {
	quint64 _ret = self->bytesWritten();
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QNetworkSession_bytesReceived(const QNetworkSession* self) {
	quint64 _ret = self->bytesReceived();
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QNetworkSession_activeTime(const QNetworkSession* self) {
	quint64 _ret = self->activeTime();
	return static_cast<unsigned long long>(_ret);
}

int QNetworkSession_usagePolicies(const QNetworkSession* self) {
	QNetworkSession::UsagePolicies _ret = self->usagePolicies();
	return static_cast<int>(_ret);
}

bool QNetworkSession_waitForOpened(QNetworkSession* self) {
	return self->waitForOpened();
}

void QNetworkSession_open(QNetworkSession* self) {
	self->open();
}

void QNetworkSession_close(QNetworkSession* self) {
	self->close();
}

void QNetworkSession_stop(QNetworkSession* self) {
	self->stop();
}

void QNetworkSession_migrate(QNetworkSession* self) {
	self->migrate();
}

void QNetworkSession_ignore(QNetworkSession* self) {
	self->ignore();
}

void QNetworkSession_accept(QNetworkSession* self) {
	self->accept();
}

void QNetworkSession_reject(QNetworkSession* self) {
	self->reject();
}

void QNetworkSession_stateChanged(QNetworkSession* self, int param1) {
	self->stateChanged(static_cast<QNetworkSession::State>(param1));
}

void QNetworkSession_connect_stateChanged(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)(QNetworkSession::State)>(&QNetworkSession::stateChanged), self, [=](QNetworkSession::State param1) {
		QNetworkSession::State param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QNetworkSession_stateChanged(slot, sigval1);
	});
}

void QNetworkSession_opened(QNetworkSession* self) {
	self->opened();
}

void QNetworkSession_connect_opened(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)()>(&QNetworkSession::opened), self, [=]() {
		miqt_exec_callback_QNetworkSession_opened(slot);
	});
}

void QNetworkSession_closed(QNetworkSession* self) {
	self->closed();
}

void QNetworkSession_connect_closed(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)()>(&QNetworkSession::closed), self, [=]() {
		miqt_exec_callback_QNetworkSession_closed(slot);
	});
}

void QNetworkSession_errorWithQNetworkSessionSessionError(QNetworkSession* self, int param1) {
	self->error(static_cast<QNetworkSession::SessionError>(param1));
}

void QNetworkSession_connect_errorWithQNetworkSessionSessionError(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)(QNetworkSession::SessionError)>(&QNetworkSession::error), self, [=](QNetworkSession::SessionError param1) {
		QNetworkSession::SessionError param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QNetworkSession_errorWithQNetworkSessionSessionError(slot, sigval1);
	});
}

void QNetworkSession_preferredConfigurationChanged(QNetworkSession* self, QNetworkConfiguration* config, bool isSeamless) {
	self->preferredConfigurationChanged(*config, isSeamless);
}

void QNetworkSession_connect_preferredConfigurationChanged(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)(const QNetworkConfiguration&, bool)>(&QNetworkSession::preferredConfigurationChanged), self, [=](const QNetworkConfiguration& config, bool isSeamless) {
		const QNetworkConfiguration& config_ret = config;
		// Cast returned reference into pointer
		QNetworkConfiguration* sigval1 = const_cast<QNetworkConfiguration*>(&config_ret);
		bool sigval2 = isSeamless;
		miqt_exec_callback_QNetworkSession_preferredConfigurationChanged(slot, sigval1, sigval2);
	});
}

void QNetworkSession_newConfigurationActivated(QNetworkSession* self) {
	self->newConfigurationActivated();
}

void QNetworkSession_connect_newConfigurationActivated(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)()>(&QNetworkSession::newConfigurationActivated), self, [=]() {
		miqt_exec_callback_QNetworkSession_newConfigurationActivated(slot);
	});
}

void QNetworkSession_usagePoliciesChanged(QNetworkSession* self, int usagePolicies) {
	self->usagePoliciesChanged(static_cast<QNetworkSession::UsagePolicies>(usagePolicies));
}

void QNetworkSession_connect_usagePoliciesChanged(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)(QNetworkSession::UsagePolicies)>(&QNetworkSession::usagePoliciesChanged), self, [=](QNetworkSession::UsagePolicies usagePolicies) {
		QNetworkSession::UsagePolicies usagePolicies_ret = usagePolicies;
		int sigval1 = static_cast<int>(usagePolicies_ret);
		miqt_exec_callback_QNetworkSession_usagePoliciesChanged(slot, sigval1);
	});
}

struct miqt_string QNetworkSession_tr2(const char* s, const char* c) {
	QString _ret = QNetworkSession::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkSession_tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkSession::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkSession_trUtf82(const char* s, const char* c) {
	QString _ret = QNetworkSession::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkSession_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QNetworkSession::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNetworkSession_waitForOpened1(QNetworkSession* self, int msecs) {
	return self->waitForOpened(static_cast<int>(msecs));
}

bool QNetworkSession_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QNetworkSession_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_connectNotify(signal);
}

bool QNetworkSession_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QNetworkSession_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QNetworkSession_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QNetworkSession_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_event(event);
}

bool QNetworkSession_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QNetworkSession_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QNetworkSession_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QNetworkSession_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_timerEvent(event);
}

bool QNetworkSession_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QNetworkSession_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_childEvent(event);
}

bool QNetworkSession_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QNetworkSession_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_customEvent(event);
}

QObject* QNetworkSession_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QNetworkSession_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QNetworkSession_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QNetworkSession_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QNetworkSession_delete(QNetworkSession* self) {
	delete self;
}

