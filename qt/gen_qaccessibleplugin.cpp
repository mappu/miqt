#include <QAccessibleInterface>
#include <QAccessiblePlugin>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaccessibleplugin.h>
#include "gen_qaccessibleplugin.h"
#include "_cgo_export.h"

class MiqtVirtualQAccessiblePlugin : public virtual QAccessiblePlugin {
public:

	MiqtVirtualQAccessiblePlugin(): QAccessiblePlugin() {};
	MiqtVirtualQAccessiblePlugin(QObject* parent): QAccessiblePlugin(parent) {};

	virtual ~MiqtVirtualQAccessiblePlugin() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Create = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* create(const QString& key, QObject* object) override {
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
		QObject* sigval2 = object;

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QAccessiblePlugin_Create(this, handle__Create, sigval1, sigval2);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAccessiblePlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAccessiblePlugin_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAccessiblePlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAccessiblePlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAccessiblePlugin_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAccessiblePlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAccessiblePlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAccessiblePlugin_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAccessiblePlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAccessiblePlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAccessiblePlugin_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAccessiblePlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAccessiblePlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAccessiblePlugin_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAccessiblePlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAccessiblePlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAccessiblePlugin_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAccessiblePlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAccessiblePlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAccessiblePlugin_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAccessiblePlugin::disconnectNotify(*signal);

	}

};

QAccessiblePlugin* QAccessiblePlugin_new() {
	return new MiqtVirtualQAccessiblePlugin();
}

QAccessiblePlugin* QAccessiblePlugin_new2(QObject* parent) {
	return new MiqtVirtualQAccessiblePlugin(parent);
}

void QAccessiblePlugin_virtbase(QAccessiblePlugin* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAccessiblePlugin_MetaObject(const QAccessiblePlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAccessiblePlugin_Metacast(QAccessiblePlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAccessiblePlugin_Tr(const char* s) {
	QString _ret = QAccessiblePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessiblePlugin_TrUtf8(const char* s) {
	QString _ret = QAccessiblePlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAccessibleInterface* QAccessiblePlugin_Create(QAccessiblePlugin* self, struct miqt_string key, QObject* object) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->create(key_QString, object);
}

struct miqt_string QAccessiblePlugin_Tr2(const char* s, const char* c) {
	QString _ret = QAccessiblePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessiblePlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAccessiblePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessiblePlugin_TrUtf82(const char* s, const char* c) {
	QString _ret = QAccessiblePlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessiblePlugin_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAccessiblePlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessiblePlugin_override_virtual_Create(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) )->handle__Create = slot;
}

void QAccessiblePlugin_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) )->handle__Event = slot;
}

bool QAccessiblePlugin_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_Event(event);
}

void QAccessiblePlugin_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) )->handle__EventFilter = slot;
}

bool QAccessiblePlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAccessiblePlugin_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) )->handle__TimerEvent = slot;
}

void QAccessiblePlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_TimerEvent(event);
}

void QAccessiblePlugin_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) )->handle__ChildEvent = slot;
}

void QAccessiblePlugin_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_ChildEvent(event);
}

void QAccessiblePlugin_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) )->handle__CustomEvent = slot;
}

void QAccessiblePlugin_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_CustomEvent(event);
}

void QAccessiblePlugin_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) )->handle__ConnectNotify = slot;
}

void QAccessiblePlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAccessiblePlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) )->handle__DisconnectNotify = slot;
}

void QAccessiblePlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAccessiblePlugin_Delete(QAccessiblePlugin* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAccessiblePlugin*>( self );
	} else {
		delete self;
	}
}

