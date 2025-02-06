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

struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QScriptExtensionPlugin_keys(const QScriptExtensionPlugin*, intptr_t);
void miqt_exec_callback_QScriptExtensionPlugin_initialize(QScriptExtensionPlugin*, intptr_t, struct miqt_string, QScriptEngine*);
bool miqt_exec_callback_QScriptExtensionPlugin_event(QScriptExtensionPlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QScriptExtensionPlugin_eventFilter(QScriptExtensionPlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScriptExtensionPlugin_timerEvent(QScriptExtensionPlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScriptExtensionPlugin_childEvent(QScriptExtensionPlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScriptExtensionPlugin_customEvent(QScriptExtensionPlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QScriptExtensionPlugin_connectNotify(QScriptExtensionPlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScriptExtensionPlugin_disconnectNotify(QScriptExtensionPlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScriptExtensionPlugin final : public QScriptExtensionPlugin {
public:

	MiqtVirtualQScriptExtensionPlugin(): QScriptExtensionPlugin() {};
	MiqtVirtualQScriptExtensionPlugin(QObject* parent): QScriptExtensionPlugin(parent) {};

	virtual ~MiqtVirtualQScriptExtensionPlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keys = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList keys() const override {
		if (handle__keys == 0) {
			return QStringList(); // Pure virtual, there is no base we can call
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QScriptExtensionPlugin_keys(this, handle__keys);
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
	intptr_t handle__initialize = 0;

	// Subclass to allow providing a Go implementation
	virtual void initialize(const QString& key, QScriptEngine* engine) override {
		if (handle__initialize == 0) {
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

		miqt_exec_callback_QScriptExtensionPlugin_initialize(this, handle__initialize, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScriptExtensionPlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QScriptExtensionPlugin_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QScriptExtensionPlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScriptExtensionPlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QScriptExtensionPlugin_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QScriptExtensionPlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScriptExtensionPlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QScriptExtensionPlugin_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QScriptExtensionPlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScriptExtensionPlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QScriptExtensionPlugin_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QScriptExtensionPlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScriptExtensionPlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScriptExtensionPlugin_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QScriptExtensionPlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScriptExtensionPlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScriptExtensionPlugin_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QScriptExtensionPlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScriptExtensionPlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScriptExtensionPlugin_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QScriptExtensionPlugin::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QScriptExtensionPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScriptExtensionPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScriptExtensionPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScriptExtensionPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QScriptExtensionPlugin_metaObject(const QScriptExtensionPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScriptExtensionPlugin_metacast(QScriptExtensionPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScriptExtensionPlugin_tr(const char* s) {
	QString _ret = QScriptExtensionPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptExtensionPlugin_trUtf8(const char* s) {
	QString _ret = QScriptExtensionPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QScriptExtensionPlugin_keys(const QScriptExtensionPlugin* self) {
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

void QScriptExtensionPlugin_initialize(QScriptExtensionPlugin* self, struct miqt_string key, QScriptEngine* engine) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->initialize(key_QString, engine);
}

QScriptValue* QScriptExtensionPlugin_setupPackage(const QScriptExtensionPlugin* self, struct miqt_string key, QScriptEngine* engine) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QScriptValue(self->setupPackage(key_QString, engine));
}

struct miqt_string QScriptExtensionPlugin_tr2(const char* s, const char* c) {
	QString _ret = QScriptExtensionPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptExtensionPlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QScriptExtensionPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptExtensionPlugin_trUtf82(const char* s, const char* c) {
	QString _ret = QScriptExtensionPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptExtensionPlugin_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QScriptExtensionPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScriptExtensionPlugin_override_virtual_keys(void* self, intptr_t slot) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keys = slot;
	return true;
}

bool QScriptExtensionPlugin_override_virtual_initialize(void* self, intptr_t slot) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initialize = slot;
	return true;
}

bool QScriptExtensionPlugin_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QScriptExtensionPlugin_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_event(event);
}

bool QScriptExtensionPlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScriptExtensionPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QScriptExtensionPlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QScriptExtensionPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_timerEvent(event);
}

bool QScriptExtensionPlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QScriptExtensionPlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_childEvent(event);
}

bool QScriptExtensionPlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QScriptExtensionPlugin_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_customEvent(event);
}

bool QScriptExtensionPlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QScriptExtensionPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_connectNotify(signal);
}

bool QScriptExtensionPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScriptExtensionPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScriptExtensionPlugin*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QScriptExtensionPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QScriptExtensionPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QScriptExtensionPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QScriptExtensionPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScriptExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQScriptExtensionPlugin*>( (QScriptExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QScriptExtensionPlugin_delete(QScriptExtensionPlugin* self) {
	delete self;
}

