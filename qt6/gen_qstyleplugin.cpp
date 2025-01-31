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

QStyle* miqt_exec_callback_QStylePlugin_Create(QStylePlugin*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QStylePlugin_Event(QStylePlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QStylePlugin_EventFilter(QStylePlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStylePlugin_TimerEvent(QStylePlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStylePlugin_ChildEvent(QStylePlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStylePlugin_CustomEvent(QStylePlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QStylePlugin_ConnectNotify(QStylePlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStylePlugin_DisconnectNotify(QStylePlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStylePlugin final : public QStylePlugin {
public:

	MiqtVirtualQStylePlugin(): QStylePlugin() {};
	MiqtVirtualQStylePlugin(QObject* parent): QStylePlugin(parent) {};

	virtual ~MiqtVirtualQStylePlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Create = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyle* create(const QString& key) override {
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

		QStyle* callback_return_value = miqt_exec_callback_QStylePlugin_Create(this, handle__Create, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QStylePlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QStylePlugin_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QStylePlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QStylePlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStylePlugin_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QStylePlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QStylePlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStylePlugin_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QStylePlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QStylePlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QStylePlugin_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QStylePlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QStylePlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStylePlugin_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QStylePlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QStylePlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStylePlugin_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QStylePlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QStylePlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStylePlugin_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QStylePlugin::disconnectNotify(*signal);

	}

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

QMetaObject* QStylePlugin_MetaObject(const QStylePlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStylePlugin_Metacast(QStylePlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStylePlugin_Tr(const char* s) {
	QString _ret = QStylePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QStyle* QStylePlugin_Create(QStylePlugin* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->create(key_QString);
}

struct miqt_string QStylePlugin_Tr2(const char* s, const char* c) {
	QString _ret = QStylePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStylePlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStylePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStylePlugin_override_virtual_Create(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Create = slot;
	return true;
}

bool QStylePlugin_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QStylePlugin_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_Event(event);
}

bool QStylePlugin_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QStylePlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QStylePlugin_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QStylePlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_TimerEvent(event);
}

bool QStylePlugin_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QStylePlugin_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_ChildEvent(event);
}

bool QStylePlugin_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QStylePlugin_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_CustomEvent(event);
}

bool QStylePlugin_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QStylePlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QStylePlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStylePlugin* self_cast = dynamic_cast<MiqtVirtualQStylePlugin*>( (QStylePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QStylePlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStylePlugin*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QStylePlugin_Delete(QStylePlugin* self) {
	delete self;
}

