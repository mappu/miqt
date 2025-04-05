#include <QChildEvent>
#include <QEvent>
#include <QJSValue>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlContext>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQmlContext__PropertyPair
#include <QQmlEngine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qqmlcontext.h>
#include "gen_qqmlcontext.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QQmlContext_event(QQmlContext*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlContext_eventFilter(QQmlContext*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlContext_timerEvent(QQmlContext*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlContext_childEvent(QQmlContext*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlContext_customEvent(QQmlContext*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlContext_connectNotify(QQmlContext*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlContext_disconnectNotify(QQmlContext*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlContext final : public QQmlContext {
public:

	MiqtVirtualQQmlContext(QQmlEngine* parent): QQmlContext(parent) {};
	MiqtVirtualQQmlContext(QQmlContext* parent): QQmlContext(parent) {};
	MiqtVirtualQQmlContext(QQmlEngine* parent, QObject* objParent): QQmlContext(parent, objParent) {};
	MiqtVirtualQQmlContext(QQmlContext* parent, QObject* objParent): QQmlContext(parent, objParent) {};

	virtual ~MiqtVirtualQQmlContext() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QQmlContext::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QQmlContext_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QQmlContext_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QQmlContext::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QQmlContext_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QQmlContext_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QQmlContext::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QQmlContext_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QQmlContext_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QQmlContext::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QQmlContext_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QQmlContext_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QQmlContext::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QQmlContext_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QQmlContext_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QQmlContext::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QQmlContext_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QQmlContext_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QQmlContext::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QQmlContext_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QQmlContext_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QQmlContext_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlContext_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlContext_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QQmlContext_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QQmlContext* QQmlContext_new(QQmlEngine* parent) {
	return new MiqtVirtualQQmlContext(parent);
}

QQmlContext* QQmlContext_new2(QQmlContext* parent) {
	return new MiqtVirtualQQmlContext(parent);
}

QQmlContext* QQmlContext_new3(QQmlEngine* parent, QObject* objParent) {
	return new MiqtVirtualQQmlContext(parent, objParent);
}

QQmlContext* QQmlContext_new4(QQmlContext* parent, QObject* objParent) {
	return new MiqtVirtualQQmlContext(parent, objParent);
}

void QQmlContext_virtbase(QQmlContext* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QQmlContext_metaObject(const QQmlContext* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlContext_metacast(QQmlContext* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlContext_tr(const char* s) {
	QString _ret = QQmlContext::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QQmlContext_isValid(const QQmlContext* self) {
	return self->isValid();
}

QQmlEngine* QQmlContext_engine(const QQmlContext* self) {
	return self->engine();
}

QQmlContext* QQmlContext_parentContext(const QQmlContext* self) {
	return self->parentContext();
}

QObject* QQmlContext_contextObject(const QQmlContext* self) {
	return self->contextObject();
}

void QQmlContext_setContextObject(QQmlContext* self, QObject* contextObject) {
	self->setContextObject(contextObject);
}

QVariant* QQmlContext_contextProperty(const QQmlContext* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return new QVariant(self->contextProperty(param1_QString));
}

void QQmlContext_setContextProperty(QQmlContext* self, struct miqt_string param1, QObject* param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setContextProperty(param1_QString, param2);
}

void QQmlContext_setContextProperty2(QQmlContext* self, struct miqt_string param1, QVariant* param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setContextProperty(param1_QString, *param2);
}

void QQmlContext_setContextProperties(QQmlContext* self, struct miqt_array /* of QQmlContext__PropertyPair* */  properties) {
	QList<QQmlContext::PropertyPair> properties_QList;
	properties_QList.reserve(properties.len);
	QQmlContext__PropertyPair** properties_arr = static_cast<QQmlContext__PropertyPair**>(properties.data);
	for(size_t i = 0; i < properties.len; ++i) {
		properties_QList.push_back(*(properties_arr[i]));
	}
	self->setContextProperties(properties_QList);
}

struct miqt_string QQmlContext_nameForObject(const QQmlContext* self, QObject* param1) {
	QString _ret = self->nameForObject(param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QQmlContext_objectForName(const QQmlContext* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->objectForName(param1_QString);
}

QUrl* QQmlContext_resolvedUrl(const QQmlContext* self, QUrl* param1) {
	return new QUrl(self->resolvedUrl(*param1));
}

void QQmlContext_setBaseUrl(QQmlContext* self, QUrl* baseUrl) {
	self->setBaseUrl(*baseUrl);
}

QUrl* QQmlContext_baseUrl(const QQmlContext* self) {
	return new QUrl(self->baseUrl());
}

QJSValue* QQmlContext_importedScript(const QQmlContext* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QJSValue(self->importedScript(name_QString));
}

struct miqt_string QQmlContext_tr2(const char* s, const char* c) {
	QString _ret = QQmlContext::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlContext_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlContext::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QQmlContext_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQQmlContext* self_cast = dynamic_cast<MiqtVirtualQQmlContext*>( (QQmlContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QQmlContext_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQQmlContext*)(self) )->QQmlContext::event(event);

}

bool QQmlContext_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQQmlContext* self_cast = dynamic_cast<MiqtVirtualQQmlContext*>( (QQmlContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QQmlContext_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQQmlContext*)(self) )->QQmlContext::eventFilter(watched, event);

}

bool QQmlContext_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlContext* self_cast = dynamic_cast<MiqtVirtualQQmlContext*>( (QQmlContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QQmlContext_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQQmlContext*)(self) )->QQmlContext::timerEvent(event);

}

bool QQmlContext_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlContext* self_cast = dynamic_cast<MiqtVirtualQQmlContext*>( (QQmlContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QQmlContext_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQQmlContext*)(self) )->QQmlContext::childEvent(event);

}

bool QQmlContext_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlContext* self_cast = dynamic_cast<MiqtVirtualQQmlContext*>( (QQmlContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QQmlContext_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQQmlContext*)(self) )->QQmlContext::customEvent(event);

}

bool QQmlContext_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlContext* self_cast = dynamic_cast<MiqtVirtualQQmlContext*>( (QQmlContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QQmlContext_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQQmlContext*)(self) )->QQmlContext::connectNotify(*signal);

}

bool QQmlContext_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlContext* self_cast = dynamic_cast<MiqtVirtualQQmlContext*>( (QQmlContext*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QQmlContext_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQQmlContext*)(self) )->QQmlContext::disconnectNotify(*signal);

}

QObject* QQmlContext_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlContext* self_cast = dynamic_cast<MiqtVirtualQQmlContext*>( (QQmlContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QQmlContext_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlContext* self_cast = dynamic_cast<MiqtVirtualQQmlContext*>( (QQmlContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QQmlContext_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQQmlContext* self_cast = dynamic_cast<MiqtVirtualQQmlContext*>( (QQmlContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QQmlContext_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQQmlContext* self_cast = dynamic_cast<MiqtVirtualQQmlContext*>( (QQmlContext*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QQmlContext_delete(QQmlContext* self) {
	delete self;
}

QQmlContext__PropertyPair* QQmlContext__PropertyPair_new(QQmlContext__PropertyPair* param1) {
	return new QQmlContext::PropertyPair(*param1);
}

void QQmlContext__PropertyPair_operatorAssign(QQmlContext__PropertyPair* self, QQmlContext__PropertyPair* param1) {
	self->operator=(*param1);
}

void QQmlContext__PropertyPair_delete(QQmlContext__PropertyPair* self) {
	delete self;
}

