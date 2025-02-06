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

QAccessibleBridge* miqt_exec_callback_QAccessibleBridgePlugin_create(QAccessibleBridgePlugin*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QAccessibleBridgePlugin_event(QAccessibleBridgePlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QAccessibleBridgePlugin_eventFilter(QAccessibleBridgePlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAccessibleBridgePlugin_timerEvent(QAccessibleBridgePlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAccessibleBridgePlugin_childEvent(QAccessibleBridgePlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAccessibleBridgePlugin_customEvent(QAccessibleBridgePlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QAccessibleBridgePlugin_connectNotify(QAccessibleBridgePlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAccessibleBridgePlugin_disconnectNotify(QAccessibleBridgePlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

void QAccessibleBridge_setRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject) {
	self->setRootObject(rootObject);
}

void QAccessibleBridge_notifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event) {
	self->notifyAccessibilityUpdate(event);
}

void QAccessibleBridge_operatorAssign(QAccessibleBridge* self, QAccessibleBridge* param1) {
	self->operator=(*param1);
}

void QAccessibleBridge_delete(QAccessibleBridge* self) {
	delete self;
}

class MiqtVirtualQAccessibleBridgePlugin final : public QAccessibleBridgePlugin {
public:

	MiqtVirtualQAccessibleBridgePlugin(): QAccessibleBridgePlugin() {};
	MiqtVirtualQAccessibleBridgePlugin(QObject* parent): QAccessibleBridgePlugin(parent) {};

	virtual ~MiqtVirtualQAccessibleBridgePlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__create = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleBridge* create(const QString& key) override {
		if (handle__create == 0) {
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

		QAccessibleBridge* callback_return_value = miqt_exec_callback_QAccessibleBridgePlugin_create(this, handle__create, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAccessibleBridgePlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAccessibleBridgePlugin_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAccessibleBridgePlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAccessibleBridgePlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAccessibleBridgePlugin_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAccessibleBridgePlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAccessibleBridgePlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAccessibleBridgePlugin_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAccessibleBridgePlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAccessibleBridgePlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAccessibleBridgePlugin_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAccessibleBridgePlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAccessibleBridgePlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAccessibleBridgePlugin_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAccessibleBridgePlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAccessibleBridgePlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAccessibleBridgePlugin_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAccessibleBridgePlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAccessibleBridgePlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAccessibleBridgePlugin_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAccessibleBridgePlugin::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAccessibleBridgePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAccessibleBridgePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAccessibleBridgePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAccessibleBridgePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAccessibleBridgePlugin_metaObject(const QAccessibleBridgePlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAccessibleBridgePlugin_metacast(QAccessibleBridgePlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAccessibleBridgePlugin_tr(const char* s) {
	QString _ret = QAccessibleBridgePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAccessibleBridge* QAccessibleBridgePlugin_create(QAccessibleBridgePlugin* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->create(key_QString);
}

struct miqt_string QAccessibleBridgePlugin_tr2(const char* s, const char* c) {
	QString _ret = QAccessibleBridgePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleBridgePlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QAccessibleBridgePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAccessibleBridgePlugin_override_virtual_create(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__create = slot;
	return true;
}

bool QAccessibleBridgePlugin_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAccessibleBridgePlugin_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_event(event);
}

bool QAccessibleBridgePlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAccessibleBridgePlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAccessibleBridgePlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAccessibleBridgePlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_timerEvent(event);
}

bool QAccessibleBridgePlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAccessibleBridgePlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_childEvent(event);
}

bool QAccessibleBridgePlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAccessibleBridgePlugin_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_customEvent(event);
}

bool QAccessibleBridgePlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAccessibleBridgePlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_connectNotify(signal);
}

bool QAccessibleBridgePlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAccessibleBridgePlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAccessibleBridgePlugin*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAccessibleBridgePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAccessibleBridgePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAccessibleBridgePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAccessibleBridgePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAccessibleBridgePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessibleBridgePlugin*>( (QAccessibleBridgePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAccessibleBridgePlugin_delete(QAccessibleBridgePlugin* self) {
	delete self;
}

