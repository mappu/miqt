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

void miqt_exec_callback_QNetworkSession_StateChanged(intptr_t, int);
void miqt_exec_callback_QNetworkSession_Opened(intptr_t);
void miqt_exec_callback_QNetworkSession_Closed(intptr_t);
void miqt_exec_callback_QNetworkSession_ErrorWithQNetworkSessionSessionError(intptr_t, int);
void miqt_exec_callback_QNetworkSession_PreferredConfigurationChanged(intptr_t, QNetworkConfiguration*, bool);
void miqt_exec_callback_QNetworkSession_NewConfigurationActivated(intptr_t);
void miqt_exec_callback_QNetworkSession_UsagePoliciesChanged(intptr_t, int);
void miqt_exec_callback_QNetworkSession_ConnectNotify(QNetworkSession*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNetworkSession_DisconnectNotify(QNetworkSession*, intptr_t, QMetaMethod*);
bool miqt_exec_callback_QNetworkSession_Event(QNetworkSession*, intptr_t, QEvent*);
bool miqt_exec_callback_QNetworkSession_EventFilter(QNetworkSession*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNetworkSession_TimerEvent(QNetworkSession*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNetworkSession_ChildEvent(QNetworkSession*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNetworkSession_CustomEvent(QNetworkSession*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNetworkSession final : public QNetworkSession {
public:

	MiqtVirtualQNetworkSession(const QNetworkConfiguration& connConfig): QNetworkSession(connConfig) {};
	MiqtVirtualQNetworkSession(const QNetworkConfiguration& connConfig, QObject* parent): QNetworkSession(connConfig, parent) {};

	virtual ~MiqtVirtualQNetworkSession() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QNetworkSession::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkSession_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QNetworkSession::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QNetworkSession::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkSession_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QNetworkSession::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QNetworkSession::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkSession_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QNetworkSession::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QNetworkSession::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkSession_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QNetworkSession::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QNetworkSession::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QNetworkSession_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QNetworkSession::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QNetworkSession::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QNetworkSession_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QNetworkSession::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QNetworkSession::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QNetworkSession_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QNetworkSession::customEvent(event);

	}

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

QMetaObject* QNetworkSession_MetaObject(const QNetworkSession* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkSession_Metacast(QNetworkSession* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkSession_Tr(const char* s) {
	QString _ret = QNetworkSession::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkSession_TrUtf8(const char* s) {
	QString _ret = QNetworkSession::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNetworkSession_IsOpen(const QNetworkSession* self) {
	return self->isOpen();
}

QNetworkConfiguration* QNetworkSession_Configuration(const QNetworkSession* self) {
	return new QNetworkConfiguration(self->configuration());
}

QNetworkInterface* QNetworkSession_Interface(const QNetworkSession* self) {
	return new QNetworkInterface(self->interface());
}

int QNetworkSession_State(const QNetworkSession* self) {
	QNetworkSession::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QNetworkSession_Error(const QNetworkSession* self) {
	QNetworkSession::SessionError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QNetworkSession_ErrorString(const QNetworkSession* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QNetworkSession_SessionProperty(const QNetworkSession* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->sessionProperty(key_QString));
}

void QNetworkSession_SetSessionProperty(QNetworkSession* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setSessionProperty(key_QString, *value);
}

unsigned long long QNetworkSession_BytesWritten(const QNetworkSession* self) {
	quint64 _ret = self->bytesWritten();
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QNetworkSession_BytesReceived(const QNetworkSession* self) {
	quint64 _ret = self->bytesReceived();
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QNetworkSession_ActiveTime(const QNetworkSession* self) {
	quint64 _ret = self->activeTime();
	return static_cast<unsigned long long>(_ret);
}

int QNetworkSession_UsagePolicies(const QNetworkSession* self) {
	QNetworkSession::UsagePolicies _ret = self->usagePolicies();
	return static_cast<int>(_ret);
}

bool QNetworkSession_WaitForOpened(QNetworkSession* self) {
	return self->waitForOpened();
}

void QNetworkSession_Open(QNetworkSession* self) {
	self->open();
}

void QNetworkSession_Close(QNetworkSession* self) {
	self->close();
}

void QNetworkSession_Stop(QNetworkSession* self) {
	self->stop();
}

void QNetworkSession_Migrate(QNetworkSession* self) {
	self->migrate();
}

void QNetworkSession_Ignore(QNetworkSession* self) {
	self->ignore();
}

void QNetworkSession_Accept(QNetworkSession* self) {
	self->accept();
}

void QNetworkSession_Reject(QNetworkSession* self) {
	self->reject();
}

void QNetworkSession_StateChanged(QNetworkSession* self, int param1) {
	self->stateChanged(static_cast<QNetworkSession::State>(param1));
}

void QNetworkSession_connect_StateChanged(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)(QNetworkSession::State)>(&QNetworkSession::stateChanged), self, [=](QNetworkSession::State param1) {
		QNetworkSession::State param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QNetworkSession_StateChanged(slot, sigval1);
	});
}

void QNetworkSession_Opened(QNetworkSession* self) {
	self->opened();
}

void QNetworkSession_connect_Opened(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)()>(&QNetworkSession::opened), self, [=]() {
		miqt_exec_callback_QNetworkSession_Opened(slot);
	});
}

void QNetworkSession_Closed(QNetworkSession* self) {
	self->closed();
}

void QNetworkSession_connect_Closed(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)()>(&QNetworkSession::closed), self, [=]() {
		miqt_exec_callback_QNetworkSession_Closed(slot);
	});
}

void QNetworkSession_ErrorWithQNetworkSessionSessionError(QNetworkSession* self, int param1) {
	self->error(static_cast<QNetworkSession::SessionError>(param1));
}

void QNetworkSession_connect_ErrorWithQNetworkSessionSessionError(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)(QNetworkSession::SessionError)>(&QNetworkSession::error), self, [=](QNetworkSession::SessionError param1) {
		QNetworkSession::SessionError param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QNetworkSession_ErrorWithQNetworkSessionSessionError(slot, sigval1);
	});
}

void QNetworkSession_PreferredConfigurationChanged(QNetworkSession* self, QNetworkConfiguration* config, bool isSeamless) {
	self->preferredConfigurationChanged(*config, isSeamless);
}

void QNetworkSession_connect_PreferredConfigurationChanged(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)(const QNetworkConfiguration&, bool)>(&QNetworkSession::preferredConfigurationChanged), self, [=](const QNetworkConfiguration& config, bool isSeamless) {
		const QNetworkConfiguration& config_ret = config;
		// Cast returned reference into pointer
		QNetworkConfiguration* sigval1 = const_cast<QNetworkConfiguration*>(&config_ret);
		bool sigval2 = isSeamless;
		miqt_exec_callback_QNetworkSession_PreferredConfigurationChanged(slot, sigval1, sigval2);
	});
}

void QNetworkSession_NewConfigurationActivated(QNetworkSession* self) {
	self->newConfigurationActivated();
}

void QNetworkSession_connect_NewConfigurationActivated(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)()>(&QNetworkSession::newConfigurationActivated), self, [=]() {
		miqt_exec_callback_QNetworkSession_NewConfigurationActivated(slot);
	});
}

void QNetworkSession_UsagePoliciesChanged(QNetworkSession* self, int usagePolicies) {
	self->usagePoliciesChanged(static_cast<QNetworkSession::UsagePolicies>(usagePolicies));
}

void QNetworkSession_connect_UsagePoliciesChanged(QNetworkSession* self, intptr_t slot) {
	MiqtVirtualQNetworkSession::connect(self, static_cast<void (QNetworkSession::*)(QNetworkSession::UsagePolicies)>(&QNetworkSession::usagePoliciesChanged), self, [=](QNetworkSession::UsagePolicies usagePolicies) {
		QNetworkSession::UsagePolicies usagePolicies_ret = usagePolicies;
		int sigval1 = static_cast<int>(usagePolicies_ret);
		miqt_exec_callback_QNetworkSession_UsagePoliciesChanged(slot, sigval1);
	});
}

struct miqt_string QNetworkSession_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkSession::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkSession_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkSession::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkSession_TrUtf82(const char* s, const char* c) {
	QString _ret = QNetworkSession::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkSession_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QNetworkSession::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNetworkSession_WaitForOpened1(QNetworkSession* self, int msecs) {
	return self->waitForOpened(static_cast<int>(msecs));
}

bool QNetworkSession_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QNetworkSession_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QNetworkSession_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QNetworkSession_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QNetworkSession_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QNetworkSession_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_Event(event);
}

bool QNetworkSession_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QNetworkSession_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QNetworkSession_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QNetworkSession_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_TimerEvent(event);
}

bool QNetworkSession_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QNetworkSession_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_ChildEvent(event);
}

bool QNetworkSession_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkSession* self_cast = dynamic_cast<MiqtVirtualQNetworkSession*>( (QNetworkSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QNetworkSession_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQNetworkSession*)(self) )->virtualbase_CustomEvent(event);
}

void QNetworkSession_Delete(QNetworkSession* self) {
	delete self;
}

