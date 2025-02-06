#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStylePlugin>
#include <QTimerEvent>
#include <qstyleplugin.h>
#include "gen_qstyleplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

QStyle* miqt_exec_callback_QStylePlugin_create(QStylePlugin*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QStylePlugin_event(QStylePlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QStylePlugin_eventFilter(QStylePlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStylePlugin_timerEvent(QStylePlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStylePlugin_childEvent(QStylePlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStylePlugin_customEvent(QStylePlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QStylePlugin_connectNotify(QStylePlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStylePlugin_disconnectNotify(QStylePlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStylePlugin final : public QStylePlugin {
public:

	MiqtVirtualQStylePlugin(): QStylePlugin() {};
	MiqtVirtualQStylePlugin(QObject* parent): QStylePlugin(parent) {};

	virtual ~MiqtVirtualQStylePlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__create = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyle* create(const QString& key) override {
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

		QStyle* callback_return_value = miqt_exec_callback_QStylePlugin_create(this, handle__create, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QStylePlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QStylePlugin_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QStylePlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QStylePlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStylePlugin_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QStylePlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QStylePlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStylePlugin_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QStylePlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QStylePlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QStylePlugin_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QStylePlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QStylePlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStylePlugin_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QStylePlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QStylePlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStylePlugin_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QStylePlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QStylePlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStylePlugin_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QStylePlugin::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QStylePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QStylePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QStylePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QStylePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QStylePlugin* QStylePlugin_new() {
	return new MiqtVirtualQStylePlugin();
}

QStylePlugin* QStylePlugin_new2(QObject* parent) {
	return new MiqtVirtualQStylePlugin(parent);
}

void QStylePlugin_virtbase(QStylePlugin* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QStylePlugin_metaObject(const QStylePlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStylePlugin_metacast(QStylePlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStylePlugin_tr(const char* s) {
	QString _ret = QStylePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QStyle* QStylePlugin_create(QStylePlugin* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->create(key_QString);
}

struct miqt_string QStylePlugin_tr2(const char* s, const char* c) {
	QString _ret = QStylePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStylePlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QStylePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStylePlugin_override_virtual_create(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__create = slot;
	return true;
}

bool QStylePlugin_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QStylePlugin_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_event(event);
}

bool QStylePlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QStylePlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QStylePlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QStylePlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_timerEvent(event);
}

bool QStylePlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QStylePlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_childEvent(event);
}

bool QStylePlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QStylePlugin_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_customEvent(event);
}

bool QStylePlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QStylePlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_connectNotify(signal);
}

bool QStylePlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QStylePlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QStylePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QStylePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QStylePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QStylePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QStylePlugin_delete(QStylePlugin* self) {
	delete self;
}

