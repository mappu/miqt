#include <QChildEvent>
#include <QEvent>
#include <QGenericPlugin>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qgenericplugin.h>
#include "gen_qgenericplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

QObject* miqt_exec_callback_QGenericPlugin_create(QGenericPlugin*, intptr_t, struct miqt_string, struct miqt_string);
bool miqt_exec_callback_QGenericPlugin_event(QGenericPlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QGenericPlugin_eventFilter(QGenericPlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGenericPlugin_timerEvent(QGenericPlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGenericPlugin_childEvent(QGenericPlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGenericPlugin_customEvent(QGenericPlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QGenericPlugin_connectNotify(QGenericPlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGenericPlugin_disconnectNotify(QGenericPlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGenericPlugin final : public QGenericPlugin {
public:

	MiqtVirtualQGenericPlugin(): QGenericPlugin() {};
	MiqtVirtualQGenericPlugin(QObject* parent): QGenericPlugin(parent) {};

	virtual ~MiqtVirtualQGenericPlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__create = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* create(const QString& name, const QString& spec) override {
		if (handle__create == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QString spec_ret = spec;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray spec_b = spec_ret.toUtf8();
		struct miqt_string spec_ms;
		spec_ms.len = spec_b.length();
		spec_ms.data = static_cast<char*>(malloc(spec_ms.len));
		memcpy(spec_ms.data, spec_b.data(), spec_ms.len);
		struct miqt_string sigval2 = spec_ms;

		QObject* callback_return_value = miqt_exec_callback_QGenericPlugin_create(this, handle__create, sigval1, sigval2);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGenericPlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGenericPlugin_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QGenericPlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGenericPlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGenericPlugin_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGenericPlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGenericPlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGenericPlugin_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGenericPlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGenericPlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGenericPlugin_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGenericPlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGenericPlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGenericPlugin_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGenericPlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGenericPlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGenericPlugin_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGenericPlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGenericPlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGenericPlugin_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGenericPlugin::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QGenericPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGenericPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGenericPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGenericPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGenericPlugin* QGenericPlugin_new() {
	return new MiqtVirtualQGenericPlugin();
}

QGenericPlugin* QGenericPlugin_new2(QObject* parent) {
	return new MiqtVirtualQGenericPlugin(parent);
}

void QGenericPlugin_virtbase(QGenericPlugin* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGenericPlugin_metaObject(const QGenericPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGenericPlugin_metacast(QGenericPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGenericPlugin_tr(const char* s) {
	QString _ret = QGenericPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QGenericPlugin_create(QGenericPlugin* self, struct miqt_string name, struct miqt_string spec) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString spec_QString = QString::fromUtf8(spec.data, spec.len);
	return self->create(name_QString, spec_QString);
}

struct miqt_string QGenericPlugin_tr2(const char* s, const char* c) {
	QString _ret = QGenericPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGenericPlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QGenericPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGenericPlugin_override_virtual_create(void* self, intptr_t slot) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__create = slot;
	return true;
}

bool QGenericPlugin_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGenericPlugin_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGenericPlugin*)(self) )->virtualbase_event(event);
}

bool QGenericPlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGenericPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGenericPlugin*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGenericPlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGenericPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGenericPlugin*)(self) )->virtualbase_timerEvent(event);
}

bool QGenericPlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGenericPlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGenericPlugin*)(self) )->virtualbase_childEvent(event);
}

bool QGenericPlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGenericPlugin_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGenericPlugin*)(self) )->virtualbase_customEvent(event);
}

bool QGenericPlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGenericPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGenericPlugin*)(self) )->virtualbase_connectNotify(signal);
}

bool QGenericPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGenericPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGenericPlugin*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QGenericPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGenericPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGenericPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGenericPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGenericPlugin* self_cast = dynamic_cast<MiqtVirtualQGenericPlugin*>( (QGenericPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGenericPlugin_delete(QGenericPlugin* self) {
	delete self;
}

