#include <QChildEvent>
#include <QEvent>
#include <QFactoryInterface>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QScriptEngine>
#include <QScriptExtensionInterface>
#include <QScriptExtensionPlugin>
#include <QScriptValue>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qscriptextensionplugin.h>
#include "gen_qscriptextensionplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QScriptExtensionPlugin_Keys(void*, intptr_t);
void miqt_exec_callback_QScriptExtensionPlugin_Initialize(void*, intptr_t, struct miqt_string, QScriptEngine*);
bool miqt_exec_callback_QScriptExtensionPlugin_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QScriptExtensionPlugin_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScriptExtensionPlugin_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScriptExtensionPlugin_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScriptExtensionPlugin_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QScriptExtensionPlugin_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScriptExtensionPlugin_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScriptExtensionPlugin : public virtual QScriptExtensionPlugin {
public:

	MiqtVirtualQScriptExtensionPlugin(): QScriptExtensionPlugin() {};
	MiqtVirtualQScriptExtensionPlugin(QObject* parent): QScriptExtensionPlugin(parent) {};

	virtual ~MiqtVirtualQScriptExtensionPlugin() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keys = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList keys() const override {
		if (handle__Keys == 0) {
			return QStringList(); // Pure virtual, there is no base we can call
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QScriptExtensionPlugin_Keys(const_cast<MiqtVirtualQScriptExtensionPlugin*>(this), handle__Keys);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Initialize = 0;

	// Subclass to allow providing a Go implementation
	virtual void initialize(const QString& key, QScriptEngine* engine) override {
		if (handle__Initialize == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval1 = key_ms;
		QScriptEngine* sigval2 = engine;

		miqt_exec_callback_QScriptExtensionPlugin_Initialize(this, handle__Initialize, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QScriptExtensionPlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QScriptExtensionPlugin_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QScriptExtensionPlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QScriptExtensionPlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QScriptExtensionPlugin_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QScriptExtensionPlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QScriptExtensionPlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QScriptExtensionPlugin_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QScriptExtensionPlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QScriptExtensionPlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QScriptExtensionPlugin_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QScriptExtensionPlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QScriptExtensionPlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScriptExtensionPlugin_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QScriptExtensionPlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QScriptExtensionPlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScriptExtensionPlugin_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QScriptExtensionPlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QScriptExtensionPlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScriptExtensionPlugin_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QScriptExtensionPlugin::disconnectNotify(*signal);

	}

};

QScriptExtensionPlugin* QScriptExtensionPlugin_new() {
	return new MiqtVirtualQScriptExtensionPlugin();
}

QScriptExtensionPlugin* QScriptExtensionPlugin_new2(QObject* parent) {
	return new MiqtVirtualQScriptExtensionPlugin(parent);
}

void QScriptExtensionPlugin_virtbase(QScriptExtensionPlugin* src, QObject** outptr_QObject, QScriptExtensionInterface** outptr_QScriptExtensionInterface) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QScriptExtensionInterface = static_cast<QScriptExtensionInterface*>(src);
}

QMetaObject* QScriptExtensionPlugin_MetaObject(const QScriptExtensionPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScriptExtensionPlugin_Metacast(QScriptExtensionPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScriptExtensionPlugin_Tr(const char* s) {
	QString _ret = QScriptExtensionPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptExtensionPlugin_TrUtf8(const char* s) {
	QString _ret = QScriptExtensionPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QScriptExtensionPlugin_Keys(const QScriptExtensionPlugin* self) {
	QStringList _ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QScriptExtensionPlugin_Initialize(QScriptExtensionPlugin* self, struct miqt_string key, QScriptEngine* engine) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->initialize(key_QString, engine);
}

QScriptValue* QScriptExtensionPlugin_SetupPackage(const QScriptExtensionPlugin* self, struct miqt_string key, QScriptEngine* engine) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QScriptValue(self->setupPackage(key_QString, engine));
}

struct miqt_string QScriptExtensionPlugin_Tr2(const char* s, const char* c) {
	QString _ret = QScriptExtensionPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptExtensionPlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScriptExtensionPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptExtensionPlugin_TrUtf82(const char* s, const char* c) {
	QString _ret = QScriptExtensionPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptExtensionPlugin_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QScriptExtensionPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScriptExtensionPlugin_override_virtual_Keys(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) )->handle__Keys = slot;
}

void QScriptExtensionPlugin_override_virtual_Initialize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) )->handle__Initialize = slot;
}

void QScriptExtensionPlugin_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) )->handle__Event = slot;
}

bool QScriptExtensionPlugin_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_Event(event);
}

void QScriptExtensionPlugin_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) )->handle__EventFilter = slot;
}

bool QScriptExtensionPlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_EventFilter(watched, event);
}

void QScriptExtensionPlugin_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) )->handle__TimerEvent = slot;
}

void QScriptExtensionPlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_TimerEvent(event);
}

void QScriptExtensionPlugin_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) )->handle__ChildEvent = slot;
}

void QScriptExtensionPlugin_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_ChildEvent(event);
}

void QScriptExtensionPlugin_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) )->handle__CustomEvent = slot;
}

void QScriptExtensionPlugin_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_CustomEvent(event);
}

void QScriptExtensionPlugin_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) )->handle__ConnectNotify = slot;
}

void QScriptExtensionPlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_ConnectNotify(signal);
}

void QScriptExtensionPlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) )->handle__DisconnectNotify = slot;
}

void QScriptExtensionPlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QScriptExtensionPlugin_Delete(QScriptExtensionPlugin* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( self );
	} else {
		delete self;
	}
}

