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

#ifdef __cplusplus
extern "C" {
#endif

QAccessibleInterface* miqt_exec_callback_QAccessiblePlugin_create(QAccessiblePlugin*, intptr_t, struct miqt_string, QObject*);
bool miqt_exec_callback_QAccessiblePlugin_event(QAccessiblePlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QAccessiblePlugin_eventFilter(QAccessiblePlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAccessiblePlugin_timerEvent(QAccessiblePlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAccessiblePlugin_childEvent(QAccessiblePlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAccessiblePlugin_customEvent(QAccessiblePlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QAccessiblePlugin_connectNotify(QAccessiblePlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAccessiblePlugin_disconnectNotify(QAccessiblePlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAccessiblePlugin final : public QAccessiblePlugin {
public:

	MiqtVirtualQAccessiblePlugin(): QAccessiblePlugin() {};
	MiqtVirtualQAccessiblePlugin(QObject* parent): QAccessiblePlugin(parent) {};

	virtual ~MiqtVirtualQAccessiblePlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__create = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* create(const QString& key, QObject* object) override {
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
		QObject* sigval2 = object;

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QAccessiblePlugin_create(this, handle__create, sigval1, sigval2);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAccessiblePlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAccessiblePlugin_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAccessiblePlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAccessiblePlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAccessiblePlugin_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAccessiblePlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAccessiblePlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAccessiblePlugin_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAccessiblePlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAccessiblePlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAccessiblePlugin_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAccessiblePlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAccessiblePlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAccessiblePlugin_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAccessiblePlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAccessiblePlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAccessiblePlugin_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAccessiblePlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAccessiblePlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAccessiblePlugin_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAccessiblePlugin::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAccessiblePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAccessiblePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAccessiblePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAccessiblePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAccessiblePlugin_metaObject(const QAccessiblePlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAccessiblePlugin_metacast(QAccessiblePlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAccessiblePlugin_tr(const char* s) {
	QString _ret = QAccessiblePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessiblePlugin_trUtf8(const char* s) {
	QString _ret = QAccessiblePlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAccessibleInterface* QAccessiblePlugin_create(QAccessiblePlugin* self, struct miqt_string key, QObject* object) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->create(key_QString, object);
}

struct miqt_string QAccessiblePlugin_tr2(const char* s, const char* c) {
	QString _ret = QAccessiblePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessiblePlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QAccessiblePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessiblePlugin_trUtf82(const char* s, const char* c) {
	QString _ret = QAccessiblePlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessiblePlugin_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAccessiblePlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAccessiblePlugin_override_virtual_create(void* self, intptr_t slot) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__create = slot;
	return true;
}

bool QAccessiblePlugin_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAccessiblePlugin_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_event(event);
}

bool QAccessiblePlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAccessiblePlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAccessiblePlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAccessiblePlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_timerEvent(event);
}

bool QAccessiblePlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAccessiblePlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_childEvent(event);
}

bool QAccessiblePlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAccessiblePlugin_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_customEvent(event);
}

bool QAccessiblePlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAccessiblePlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_connectNotify(signal);
}

bool QAccessiblePlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAccessiblePlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAccessiblePlugin*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAccessiblePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAccessiblePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAccessiblePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAccessiblePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAccessiblePlugin* self_cast = dynamic_cast<MiqtVirtualQAccessiblePlugin*>( (QAccessiblePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAccessiblePlugin_delete(QAccessiblePlugin* self) {
	delete self;
}

