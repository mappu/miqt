#include <QAccessibleBridge>
#include <QAccessibleBridgePlugin>
#include <QAccessibleEvent>
#include <QAccessibleInterface>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaccessiblebridge.h>
#include "gen_qaccessiblebridge.h"

#ifdef __cplusplus
extern "C" {
#endif

QAccessibleBridge* miqt_exec_callback_QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QAccessibleBridgePlugin_Event(QAccessibleBridgePlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QAccessibleBridgePlugin_EventFilter(QAccessibleBridgePlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAccessibleBridgePlugin_TimerEvent(QAccessibleBridgePlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAccessibleBridgePlugin_ChildEvent(QAccessibleBridgePlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAccessibleBridgePlugin_CustomEvent(QAccessibleBridgePlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QAccessibleBridgePlugin_ConnectNotify(QAccessibleBridgePlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAccessibleBridgePlugin_DisconnectNotify(QAccessibleBridgePlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

void QAccessibleBridge_SetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject) {
	self->setRootObject(rootObject);
}

void QAccessibleBridge_NotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event) {
	self->notifyAccessibilityUpdate(event);
}

void QAccessibleBridge_OperatorAssign(QAccessibleBridge* self, QAccessibleBridge* param1) {
	self->operator=(*param1);
}

void QAccessibleBridge_Delete(QAccessibleBridge* self) {
	delete self;
}

class MiqtVirtualQAccessibleBridgePlugin final : public QAccessibleBridgePlugin {
public:

	MiqtVirtualQAccessibleBridgePlugin(): QAccessibleBridgePlugin() {};
	MiqtVirtualQAccessibleBridgePlugin(QObject* parent): QAccessibleBridgePlugin(parent) {};

	virtual ~MiqtVirtualQAccessibleBridgePlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Create = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleBridge* create(const QString& key) override {
		if (handle__Create == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval1 = key_ms;

		QAccessibleBridge* callback_return_value = miqt_exec_callback_QAccessibleBridgePlugin_Create(this, handle__Create, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAccessibleBridgePlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAccessibleBridgePlugin_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAccessibleBridgePlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAccessibleBridgePlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAccessibleBridgePlugin_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAccessibleBridgePlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAccessibleBridgePlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAccessibleBridgePlugin_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAccessibleBridgePlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAccessibleBridgePlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAccessibleBridgePlugin_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAccessibleBridgePlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAccessibleBridgePlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAccessibleBridgePlugin_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAccessibleBridgePlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAccessibleBridgePlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAccessibleBridgePlugin_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAccessibleBridgePlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAccessibleBridgePlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAccessibleBridgePlugin_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAccessibleBridgePlugin::disconnectNotify(*signal);

	}

};

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new() {
	return new MiqtVirtualQAccessibleBridgePlugin();
}

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new2(QObject* parent) {
	return new MiqtVirtualQAccessibleBridgePlugin(parent);
}

void QAccessibleBridgePlugin_virtbase(QAccessibleBridgePlugin* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAccessibleBridgePlugin_MetaObject(const QAccessibleBridgePlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAccessibleBridgePlugin_Metacast(QAccessibleBridgePlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAccessibleBridgePlugin_Tr(const char* s) {
	QString _ret = QAccessibleBridgePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleBridgePlugin_TrUtf8(const char* s) {
	QString _ret = QAccessibleBridgePlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->create(key_QString);
}

struct miqt_string QAccessibleBridgePlugin_Tr2(const char* s, const char* c) {
	QString _ret = QAccessibleBridgePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAccessibleBridgePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleBridgePlugin_TrUtf82(const char* s, const char* c) {
	QString _ret = QAccessibleBridgePlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleBridgePlugin_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAccessibleBridgePlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAccessibleBridgePlugin_override_virtual_Create(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Create = slot;
	return true;
}

bool QAccessibleBridgePlugin_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAccessibleBridgePlugin_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_Event(event);
}

bool QAccessibleBridgePlugin_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAccessibleBridgePlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAccessibleBridgePlugin_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAccessibleBridgePlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_TimerEvent(event);
}

bool QAccessibleBridgePlugin_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAccessibleBridgePlugin_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_ChildEvent(event);
}

bool QAccessibleBridgePlugin_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAccessibleBridgePlugin_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_CustomEvent(event);
}

bool QAccessibleBridgePlugin_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAccessibleBridgePlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAccessibleBridgePlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAccessibleBridgePlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self) {
	delete self;
}

