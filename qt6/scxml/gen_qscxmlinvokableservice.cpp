#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QScxmlDynamicScxmlServiceFactory>
#include <QScxmlEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__InvokeInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__ParameterInfo
#include <QScxmlInvokableService>
#include <QScxmlInvokableServiceFactory>
#include <QScxmlStateMachine>
#include <QScxmlStaticScxmlServiceFactory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qscxmlinvokableservice.h>
#include "gen_qscxmlinvokableservice.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QScxmlInvokableService_start(QScxmlInvokableService*, intptr_t);
struct miqt_string miqt_exec_callback_QScxmlInvokableService_id(const QScxmlInvokableService*, intptr_t);
struct miqt_string miqt_exec_callback_QScxmlInvokableService_name(const QScxmlInvokableService*, intptr_t);
void miqt_exec_callback_QScxmlInvokableService_postEvent(QScxmlInvokableService*, intptr_t, QScxmlEvent*);
bool miqt_exec_callback_QScxmlInvokableService_event(QScxmlInvokableService*, intptr_t, QEvent*);
bool miqt_exec_callback_QScxmlInvokableService_eventFilter(QScxmlInvokableService*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScxmlInvokableService_timerEvent(QScxmlInvokableService*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScxmlInvokableService_childEvent(QScxmlInvokableService*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScxmlInvokableService_customEvent(QScxmlInvokableService*, intptr_t, QEvent*);
void miqt_exec_callback_QScxmlInvokableService_connectNotify(QScxmlInvokableService*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScxmlInvokableService_disconnectNotify(QScxmlInvokableService*, intptr_t, QMetaMethod*);
QScxmlInvokableService* miqt_exec_callback_QScxmlInvokableServiceFactory_invoke(QScxmlInvokableServiceFactory*, intptr_t, QScxmlStateMachine*);
bool miqt_exec_callback_QScxmlInvokableServiceFactory_event(QScxmlInvokableServiceFactory*, intptr_t, QEvent*);
bool miqt_exec_callback_QScxmlInvokableServiceFactory_eventFilter(QScxmlInvokableServiceFactory*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScxmlInvokableServiceFactory_timerEvent(QScxmlInvokableServiceFactory*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScxmlInvokableServiceFactory_childEvent(QScxmlInvokableServiceFactory*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScxmlInvokableServiceFactory_customEvent(QScxmlInvokableServiceFactory*, intptr_t, QEvent*);
void miqt_exec_callback_QScxmlInvokableServiceFactory_connectNotify(QScxmlInvokableServiceFactory*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScxmlInvokableServiceFactory_disconnectNotify(QScxmlInvokableServiceFactory*, intptr_t, QMetaMethod*);
QScxmlInvokableService* miqt_exec_callback_QScxmlStaticScxmlServiceFactory_invoke(QScxmlStaticScxmlServiceFactory*, intptr_t, QScxmlStateMachine*);
bool miqt_exec_callback_QScxmlStaticScxmlServiceFactory_event(QScxmlStaticScxmlServiceFactory*, intptr_t, QEvent*);
bool miqt_exec_callback_QScxmlStaticScxmlServiceFactory_eventFilter(QScxmlStaticScxmlServiceFactory*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScxmlStaticScxmlServiceFactory_timerEvent(QScxmlStaticScxmlServiceFactory*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScxmlStaticScxmlServiceFactory_childEvent(QScxmlStaticScxmlServiceFactory*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScxmlStaticScxmlServiceFactory_customEvent(QScxmlStaticScxmlServiceFactory*, intptr_t, QEvent*);
void miqt_exec_callback_QScxmlStaticScxmlServiceFactory_connectNotify(QScxmlStaticScxmlServiceFactory*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScxmlStaticScxmlServiceFactory_disconnectNotify(QScxmlStaticScxmlServiceFactory*, intptr_t, QMetaMethod*);
QScxmlInvokableService* miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_invoke(QScxmlDynamicScxmlServiceFactory*, intptr_t, QScxmlStateMachine*);
bool miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_event(QScxmlDynamicScxmlServiceFactory*, intptr_t, QEvent*);
bool miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_eventFilter(QScxmlDynamicScxmlServiceFactory*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_timerEvent(QScxmlDynamicScxmlServiceFactory*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_childEvent(QScxmlDynamicScxmlServiceFactory*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_customEvent(QScxmlDynamicScxmlServiceFactory*, intptr_t, QEvent*);
void miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_connectNotify(QScxmlDynamicScxmlServiceFactory*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_disconnectNotify(QScxmlDynamicScxmlServiceFactory*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScxmlInvokableService final : public QScxmlInvokableService {
public:

	MiqtVirtualQScxmlInvokableService(QScxmlStateMachine* parentStateMachine, QScxmlInvokableServiceFactory* parent): QScxmlInvokableService(parentStateMachine, parent) {}

	virtual ~MiqtVirtualQScxmlInvokableService() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__start = 0;

	// Subclass to allow providing a Go implementation
	virtual bool start() override {
		if (handle__start == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QScxmlInvokableService_start(this, handle__start);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__id = 0;

	// Subclass to allow providing a Go implementation
	virtual QString id() const override {
		if (handle__id == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QScxmlInvokableService_id(this, handle__id);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__name = 0;

	// Subclass to allow providing a Go implementation
	virtual QString name() const override {
		if (handle__name == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QScxmlInvokableService_name(this, handle__name);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__postEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void postEvent(QScxmlEvent* event) override {
		if (handle__postEvent == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QScxmlEvent* sigval1 = event;
		miqt_exec_callback_QScxmlInvokableService_postEvent(this, handle__postEvent, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScxmlInvokableService::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlInvokableService_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QScxmlInvokableService_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScxmlInvokableService::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlInvokableService_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QScxmlInvokableService_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScxmlInvokableService::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QScxmlInvokableService_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QScxmlInvokableService_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScxmlInvokableService::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QScxmlInvokableService_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QScxmlInvokableService_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScxmlInvokableService::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScxmlInvokableService_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QScxmlInvokableService_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScxmlInvokableService::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlInvokableService_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QScxmlInvokableService_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScxmlInvokableService::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlInvokableService_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QScxmlInvokableService_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QScxmlInvokableService_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlInvokableService_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlInvokableService_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScxmlInvokableService_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScxmlInvokableService* QScxmlInvokableService_new(QScxmlStateMachine* parentStateMachine, QScxmlInvokableServiceFactory* parent) {
	return new (std::nothrow) MiqtVirtualQScxmlInvokableService(parentStateMachine, parent);
}

void QScxmlInvokableService_virtbase(QScxmlInvokableService* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QScxmlInvokableService_metaObject(const QScxmlInvokableService* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScxmlInvokableService_metacast(QScxmlInvokableService* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScxmlInvokableService_tr(const char* s) {
	QString _ret = QScxmlInvokableService::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScxmlStateMachine* QScxmlInvokableService_parentStateMachine(const QScxmlInvokableService* self) {
	return self->parentStateMachine();
}

bool QScxmlInvokableService_start(QScxmlInvokableService* self) {
	return self->start();
}

struct miqt_string QScxmlInvokableService_id(const QScxmlInvokableService* self) {
	QString _ret = self->id();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScxmlInvokableService_name(const QScxmlInvokableService* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScxmlInvokableService_postEvent(QScxmlInvokableService* self, QScxmlEvent* event) {
	self->postEvent(event);
}

struct miqt_string QScxmlInvokableService_tr2(const char* s, const char* c) {
	QString _ret = QScxmlInvokableService::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScxmlInvokableService_tr3(const char* s, const char* c, int n) {
	QString _ret = QScxmlInvokableService::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlInvokableService_override_virtual_start(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__start = slot;
	return true;
}

bool QScxmlInvokableService_override_virtual_id(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__id = slot;
	return true;
}

bool QScxmlInvokableService_override_virtual_name(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__name = slot;
	return true;
}

bool QScxmlInvokableService_override_virtual_postEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__postEvent = slot;
	return true;
}

bool QScxmlInvokableService_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QScxmlInvokableService_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlInvokableService*>(self)->QScxmlInvokableService::event(event);
}

bool QScxmlInvokableService_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScxmlInvokableService_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlInvokableService*>(self)->QScxmlInvokableService::eventFilter(watched, event);
}

bool QScxmlInvokableService_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QScxmlInvokableService_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQScxmlInvokableService*>(self)->QScxmlInvokableService::timerEvent(event);
}

bool QScxmlInvokableService_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QScxmlInvokableService_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQScxmlInvokableService*>(self)->QScxmlInvokableService::childEvent(event);
}

bool QScxmlInvokableService_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QScxmlInvokableService_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScxmlInvokableService*>(self)->QScxmlInvokableService::customEvent(event);
}

bool QScxmlInvokableService_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QScxmlInvokableService_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlInvokableService*>(self)->QScxmlInvokableService::connectNotify(*signal);
}

bool QScxmlInvokableService_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScxmlInvokableService_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlInvokableService*>(self)->QScxmlInvokableService::disconnectNotify(*signal);
}

QObject* QScxmlInvokableService_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QScxmlInvokableService_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QScxmlInvokableService_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QScxmlInvokableService_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScxmlInvokableService* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableService*>( (QScxmlInvokableService*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QScxmlInvokableService_delete(QScxmlInvokableService* self) {
	delete self;
}

class MiqtVirtualQScxmlInvokableServiceFactory final : public QScxmlInvokableServiceFactory {
public:

	MiqtVirtualQScxmlInvokableServiceFactory(const QScxmlExecutableContent::InvokeInfo& invokeInfo, const QList<QScxmlExecutableContent::StringId>& names, const QList<QScxmlExecutableContent::ParameterInfo>& parameters): QScxmlInvokableServiceFactory(invokeInfo, names, parameters) {}
	MiqtVirtualQScxmlInvokableServiceFactory(const QScxmlExecutableContent::InvokeInfo& invokeInfo, const QList<QScxmlExecutableContent::StringId>& names, const QList<QScxmlExecutableContent::ParameterInfo>& parameters, QObject* parent): QScxmlInvokableServiceFactory(invokeInfo, names, parameters, parent) {}

	virtual ~MiqtVirtualQScxmlInvokableServiceFactory() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invoke = 0;

	// Subclass to allow providing a Go implementation
	virtual QScxmlInvokableService* invoke(QScxmlStateMachine* parentStateMachine) override {
		if (handle__invoke == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QScxmlStateMachine* sigval1 = parentStateMachine;
		QScxmlInvokableService* callback_return_value = miqt_exec_callback_QScxmlInvokableServiceFactory_invoke(this, handle__invoke, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScxmlInvokableServiceFactory::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlInvokableServiceFactory_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QScxmlInvokableServiceFactory_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScxmlInvokableServiceFactory::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlInvokableServiceFactory_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QScxmlInvokableServiceFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScxmlInvokableServiceFactory::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QScxmlInvokableServiceFactory_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QScxmlInvokableServiceFactory_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScxmlInvokableServiceFactory::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QScxmlInvokableServiceFactory_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QScxmlInvokableServiceFactory_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScxmlInvokableServiceFactory::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScxmlInvokableServiceFactory_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QScxmlInvokableServiceFactory_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScxmlInvokableServiceFactory::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlInvokableServiceFactory_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QScxmlInvokableServiceFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScxmlInvokableServiceFactory::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlInvokableServiceFactory_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QScxmlInvokableServiceFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QScxmlInvokableServiceFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlInvokableServiceFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlInvokableServiceFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScxmlInvokableServiceFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScxmlInvokableServiceFactory* QScxmlInvokableServiceFactory_new(QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  names, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters) {
	QList<QScxmlExecutableContent::StringId> names_QList;
	names_QList.reserve(names.len);
	int* names_arr = static_cast<int*>(names.data);
	for(size_t i = 0; i < names.len; ++i) {
		names_QList.push_back(static_cast<int>(names_arr[i]));
	}
	QList<QScxmlExecutableContent::ParameterInfo> parameters_QList;
	parameters_QList.reserve(parameters.len);
	QScxmlExecutableContent__ParameterInfo** parameters_arr = static_cast<QScxmlExecutableContent__ParameterInfo**>(parameters.data);
	for(size_t i = 0; i < parameters.len; ++i) {
		parameters_QList.push_back(*(parameters_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQScxmlInvokableServiceFactory(*invokeInfo, names_QList, parameters_QList);
}

QScxmlInvokableServiceFactory* QScxmlInvokableServiceFactory_new2(QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  names, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters, QObject* parent) {
	QList<QScxmlExecutableContent::StringId> names_QList;
	names_QList.reserve(names.len);
	int* names_arr = static_cast<int*>(names.data);
	for(size_t i = 0; i < names.len; ++i) {
		names_QList.push_back(static_cast<int>(names_arr[i]));
	}
	QList<QScxmlExecutableContent::ParameterInfo> parameters_QList;
	parameters_QList.reserve(parameters.len);
	QScxmlExecutableContent__ParameterInfo** parameters_arr = static_cast<QScxmlExecutableContent__ParameterInfo**>(parameters.data);
	for(size_t i = 0; i < parameters.len; ++i) {
		parameters_QList.push_back(*(parameters_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQScxmlInvokableServiceFactory(*invokeInfo, names_QList, parameters_QList, parent);
}

void QScxmlInvokableServiceFactory_virtbase(QScxmlInvokableServiceFactory* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QScxmlInvokableServiceFactory_metaObject(const QScxmlInvokableServiceFactory* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScxmlInvokableServiceFactory_metacast(QScxmlInvokableServiceFactory* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScxmlInvokableServiceFactory_tr(const char* s) {
	QString _ret = QScxmlInvokableServiceFactory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScxmlInvokableService* QScxmlInvokableServiceFactory_invoke(QScxmlInvokableServiceFactory* self, QScxmlStateMachine* parentStateMachine) {
	return self->invoke(parentStateMachine);
}

QScxmlExecutableContent__InvokeInfo* QScxmlInvokableServiceFactory_invokeInfo(const QScxmlInvokableServiceFactory* self) {
	const QScxmlExecutableContent::InvokeInfo& _ret = self->invokeInfo();
	// Cast returned reference into pointer
	return const_cast<QScxmlExecutableContent::InvokeInfo*>(&_ret);
}

struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  QScxmlInvokableServiceFactory_parameters(const QScxmlInvokableServiceFactory* self) {
	const QList<QScxmlExecutableContent::ParameterInfo>& _ret = self->parameters();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScxmlExecutableContent__ParameterInfo** _arr = static_cast<QScxmlExecutableContent__ParameterInfo**>(malloc(sizeof(QScxmlExecutableContent__ParameterInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QScxmlExecutableContent::ParameterInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QScxmlInvokableServiceFactory_names(const QScxmlInvokableServiceFactory* self) {
	const QList<QScxmlExecutableContent::StringId>& _ret = self->names();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QScxmlInvokableServiceFactory_tr2(const char* s, const char* c) {
	QString _ret = QScxmlInvokableServiceFactory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScxmlInvokableServiceFactory_tr3(const char* s, const char* c, int n) {
	QString _ret = QScxmlInvokableServiceFactory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlInvokableServiceFactory_override_virtual_invoke(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invoke = slot;
	return true;
}

bool QScxmlInvokableServiceFactory_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QScxmlInvokableServiceFactory_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlInvokableServiceFactory*>(self)->QScxmlInvokableServiceFactory::event(event);
}

bool QScxmlInvokableServiceFactory_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScxmlInvokableServiceFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlInvokableServiceFactory*>(self)->QScxmlInvokableServiceFactory::eventFilter(watched, event);
}

bool QScxmlInvokableServiceFactory_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QScxmlInvokableServiceFactory_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQScxmlInvokableServiceFactory*>(self)->QScxmlInvokableServiceFactory::timerEvent(event);
}

bool QScxmlInvokableServiceFactory_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QScxmlInvokableServiceFactory_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQScxmlInvokableServiceFactory*>(self)->QScxmlInvokableServiceFactory::childEvent(event);
}

bool QScxmlInvokableServiceFactory_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QScxmlInvokableServiceFactory_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScxmlInvokableServiceFactory*>(self)->QScxmlInvokableServiceFactory::customEvent(event);
}

bool QScxmlInvokableServiceFactory_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QScxmlInvokableServiceFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlInvokableServiceFactory*>(self)->QScxmlInvokableServiceFactory::connectNotify(*signal);
}

bool QScxmlInvokableServiceFactory_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScxmlInvokableServiceFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlInvokableServiceFactory*>(self)->QScxmlInvokableServiceFactory::disconnectNotify(*signal);
}

QObject* QScxmlInvokableServiceFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QScxmlInvokableServiceFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QScxmlInvokableServiceFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QScxmlInvokableServiceFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScxmlInvokableServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlInvokableServiceFactory*>( (QScxmlInvokableServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QScxmlInvokableServiceFactory_delete(QScxmlInvokableServiceFactory* self) {
	delete self;
}

class MiqtVirtualQScxmlStaticScxmlServiceFactory final : public QScxmlStaticScxmlServiceFactory {
public:

	MiqtVirtualQScxmlStaticScxmlServiceFactory(const QMetaObject* metaObject, const QScxmlExecutableContent::InvokeInfo& invokeInfo, const QList<QScxmlExecutableContent::StringId>& nameList, const QList<QScxmlExecutableContent::ParameterInfo>& parameters): QScxmlStaticScxmlServiceFactory(metaObject, invokeInfo, nameList, parameters) {}
	MiqtVirtualQScxmlStaticScxmlServiceFactory(const QMetaObject* metaObject, const QScxmlExecutableContent::InvokeInfo& invokeInfo, const QList<QScxmlExecutableContent::StringId>& nameList, const QList<QScxmlExecutableContent::ParameterInfo>& parameters, QObject* parent): QScxmlStaticScxmlServiceFactory(metaObject, invokeInfo, nameList, parameters, parent) {}

	virtual ~MiqtVirtualQScxmlStaticScxmlServiceFactory() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invoke = 0;

	// Subclass to allow providing a Go implementation
	virtual QScxmlInvokableService* invoke(QScxmlStateMachine* parentStateMachine) override {
		if (handle__invoke == 0) {
			return QScxmlStaticScxmlServiceFactory::invoke(parentStateMachine);
		}

		QScxmlStateMachine* sigval1 = parentStateMachine;
		QScxmlInvokableService* callback_return_value = miqt_exec_callback_QScxmlStaticScxmlServiceFactory_invoke(this, handle__invoke, sigval1);
		return callback_return_value;
	}

	friend QScxmlInvokableService* QScxmlStaticScxmlServiceFactory_virtualbase_invoke(void* self, QScxmlStateMachine* parentStateMachine);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScxmlStaticScxmlServiceFactory::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlStaticScxmlServiceFactory_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QScxmlStaticScxmlServiceFactory_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScxmlStaticScxmlServiceFactory::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlStaticScxmlServiceFactory_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QScxmlStaticScxmlServiceFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScxmlStaticScxmlServiceFactory::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QScxmlStaticScxmlServiceFactory_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QScxmlStaticScxmlServiceFactory_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScxmlStaticScxmlServiceFactory::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QScxmlStaticScxmlServiceFactory_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QScxmlStaticScxmlServiceFactory_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScxmlStaticScxmlServiceFactory::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScxmlStaticScxmlServiceFactory_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QScxmlStaticScxmlServiceFactory_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScxmlStaticScxmlServiceFactory::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlStaticScxmlServiceFactory_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QScxmlStaticScxmlServiceFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScxmlStaticScxmlServiceFactory::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlStaticScxmlServiceFactory_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QScxmlStaticScxmlServiceFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QScxmlStaticScxmlServiceFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlStaticScxmlServiceFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlStaticScxmlServiceFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScxmlStaticScxmlServiceFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScxmlStaticScxmlServiceFactory* QScxmlStaticScxmlServiceFactory_new(QMetaObject* metaObject, QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  nameList, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters) {
	QList<QScxmlExecutableContent::StringId> nameList_QList;
	nameList_QList.reserve(nameList.len);
	int* nameList_arr = static_cast<int*>(nameList.data);
	for(size_t i = 0; i < nameList.len; ++i) {
		nameList_QList.push_back(static_cast<int>(nameList_arr[i]));
	}
	QList<QScxmlExecutableContent::ParameterInfo> parameters_QList;
	parameters_QList.reserve(parameters.len);
	QScxmlExecutableContent__ParameterInfo** parameters_arr = static_cast<QScxmlExecutableContent__ParameterInfo**>(parameters.data);
	for(size_t i = 0; i < parameters.len; ++i) {
		parameters_QList.push_back(*(parameters_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQScxmlStaticScxmlServiceFactory(metaObject, *invokeInfo, nameList_QList, parameters_QList);
}

QScxmlStaticScxmlServiceFactory* QScxmlStaticScxmlServiceFactory_new2(QMetaObject* metaObject, QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  nameList, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters, QObject* parent) {
	QList<QScxmlExecutableContent::StringId> nameList_QList;
	nameList_QList.reserve(nameList.len);
	int* nameList_arr = static_cast<int*>(nameList.data);
	for(size_t i = 0; i < nameList.len; ++i) {
		nameList_QList.push_back(static_cast<int>(nameList_arr[i]));
	}
	QList<QScxmlExecutableContent::ParameterInfo> parameters_QList;
	parameters_QList.reserve(parameters.len);
	QScxmlExecutableContent__ParameterInfo** parameters_arr = static_cast<QScxmlExecutableContent__ParameterInfo**>(parameters.data);
	for(size_t i = 0; i < parameters.len; ++i) {
		parameters_QList.push_back(*(parameters_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQScxmlStaticScxmlServiceFactory(metaObject, *invokeInfo, nameList_QList, parameters_QList, parent);
}

void QScxmlStaticScxmlServiceFactory_virtbase(QScxmlStaticScxmlServiceFactory* src, QScxmlInvokableServiceFactory** outptr_QScxmlInvokableServiceFactory) {
	*outptr_QScxmlInvokableServiceFactory = static_cast<QScxmlInvokableServiceFactory*>(src);
}

QMetaObject* QScxmlStaticScxmlServiceFactory_metaObject(const QScxmlStaticScxmlServiceFactory* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScxmlStaticScxmlServiceFactory_metacast(QScxmlStaticScxmlServiceFactory* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScxmlStaticScxmlServiceFactory_tr(const char* s) {
	QString _ret = QScxmlStaticScxmlServiceFactory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScxmlInvokableService* QScxmlStaticScxmlServiceFactory_invoke(QScxmlStaticScxmlServiceFactory* self, QScxmlStateMachine* parentStateMachine) {
	return self->invoke(parentStateMachine);
}

struct miqt_string QScxmlStaticScxmlServiceFactory_tr2(const char* s, const char* c) {
	QString _ret = QScxmlStaticScxmlServiceFactory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScxmlStaticScxmlServiceFactory_tr3(const char* s, const char* c, int n) {
	QString _ret = QScxmlStaticScxmlServiceFactory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlStaticScxmlServiceFactory_override_virtual_invoke(void* self, intptr_t slot) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invoke = slot;
	return true;
}

QScxmlInvokableService* QScxmlStaticScxmlServiceFactory_virtualbase_invoke(void* self, QScxmlStateMachine* parentStateMachine) {
	return static_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>(self)->QScxmlStaticScxmlServiceFactory::invoke(parentStateMachine);
}

bool QScxmlStaticScxmlServiceFactory_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QScxmlStaticScxmlServiceFactory_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>(self)->QScxmlStaticScxmlServiceFactory::event(event);
}

bool QScxmlStaticScxmlServiceFactory_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScxmlStaticScxmlServiceFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>(self)->QScxmlStaticScxmlServiceFactory::eventFilter(watched, event);
}

bool QScxmlStaticScxmlServiceFactory_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QScxmlStaticScxmlServiceFactory_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>(self)->QScxmlStaticScxmlServiceFactory::timerEvent(event);
}

bool QScxmlStaticScxmlServiceFactory_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QScxmlStaticScxmlServiceFactory_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>(self)->QScxmlStaticScxmlServiceFactory::childEvent(event);
}

bool QScxmlStaticScxmlServiceFactory_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QScxmlStaticScxmlServiceFactory_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>(self)->QScxmlStaticScxmlServiceFactory::customEvent(event);
}

bool QScxmlStaticScxmlServiceFactory_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QScxmlStaticScxmlServiceFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>(self)->QScxmlStaticScxmlServiceFactory::connectNotify(*signal);
}

bool QScxmlStaticScxmlServiceFactory_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScxmlStaticScxmlServiceFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>(self)->QScxmlStaticScxmlServiceFactory::disconnectNotify(*signal);
}

QObject* QScxmlStaticScxmlServiceFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QScxmlStaticScxmlServiceFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QScxmlStaticScxmlServiceFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QScxmlStaticScxmlServiceFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScxmlStaticScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlStaticScxmlServiceFactory*>( (QScxmlStaticScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QScxmlStaticScxmlServiceFactory_delete(QScxmlStaticScxmlServiceFactory* self) {
	delete self;
}

class MiqtVirtualQScxmlDynamicScxmlServiceFactory final : public QScxmlDynamicScxmlServiceFactory {
public:

	MiqtVirtualQScxmlDynamicScxmlServiceFactory(const QScxmlExecutableContent::InvokeInfo& invokeInfo, const QList<QScxmlExecutableContent::StringId>& names, const QList<QScxmlExecutableContent::ParameterInfo>& parameters): QScxmlDynamicScxmlServiceFactory(invokeInfo, names, parameters) {}
	MiqtVirtualQScxmlDynamicScxmlServiceFactory(const QScxmlExecutableContent::InvokeInfo& invokeInfo, const QList<QScxmlExecutableContent::StringId>& names, const QList<QScxmlExecutableContent::ParameterInfo>& parameters, QObject* parent): QScxmlDynamicScxmlServiceFactory(invokeInfo, names, parameters, parent) {}

	virtual ~MiqtVirtualQScxmlDynamicScxmlServiceFactory() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invoke = 0;

	// Subclass to allow providing a Go implementation
	virtual QScxmlInvokableService* invoke(QScxmlStateMachine* parentStateMachine) override {
		if (handle__invoke == 0) {
			return QScxmlDynamicScxmlServiceFactory::invoke(parentStateMachine);
		}

		QScxmlStateMachine* sigval1 = parentStateMachine;
		QScxmlInvokableService* callback_return_value = miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_invoke(this, handle__invoke, sigval1);
		return callback_return_value;
	}

	friend QScxmlInvokableService* QScxmlDynamicScxmlServiceFactory_virtualbase_invoke(void* self, QScxmlStateMachine* parentStateMachine);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScxmlDynamicScxmlServiceFactory::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QScxmlDynamicScxmlServiceFactory_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScxmlDynamicScxmlServiceFactory::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QScxmlDynamicScxmlServiceFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScxmlDynamicScxmlServiceFactory::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QScxmlDynamicScxmlServiceFactory_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScxmlDynamicScxmlServiceFactory::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QScxmlDynamicScxmlServiceFactory_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScxmlDynamicScxmlServiceFactory::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QScxmlDynamicScxmlServiceFactory_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScxmlDynamicScxmlServiceFactory::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QScxmlDynamicScxmlServiceFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScxmlDynamicScxmlServiceFactory::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QScxmlDynamicScxmlServiceFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QScxmlDynamicScxmlServiceFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlDynamicScxmlServiceFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlDynamicScxmlServiceFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScxmlDynamicScxmlServiceFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScxmlDynamicScxmlServiceFactory* QScxmlDynamicScxmlServiceFactory_new(QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  names, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters) {
	QList<QScxmlExecutableContent::StringId> names_QList;
	names_QList.reserve(names.len);
	int* names_arr = static_cast<int*>(names.data);
	for(size_t i = 0; i < names.len; ++i) {
		names_QList.push_back(static_cast<int>(names_arr[i]));
	}
	QList<QScxmlExecutableContent::ParameterInfo> parameters_QList;
	parameters_QList.reserve(parameters.len);
	QScxmlExecutableContent__ParameterInfo** parameters_arr = static_cast<QScxmlExecutableContent__ParameterInfo**>(parameters.data);
	for(size_t i = 0; i < parameters.len; ++i) {
		parameters_QList.push_back(*(parameters_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQScxmlDynamicScxmlServiceFactory(*invokeInfo, names_QList, parameters_QList);
}

QScxmlDynamicScxmlServiceFactory* QScxmlDynamicScxmlServiceFactory_new2(QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  names, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters, QObject* parent) {
	QList<QScxmlExecutableContent::StringId> names_QList;
	names_QList.reserve(names.len);
	int* names_arr = static_cast<int*>(names.data);
	for(size_t i = 0; i < names.len; ++i) {
		names_QList.push_back(static_cast<int>(names_arr[i]));
	}
	QList<QScxmlExecutableContent::ParameterInfo> parameters_QList;
	parameters_QList.reserve(parameters.len);
	QScxmlExecutableContent__ParameterInfo** parameters_arr = static_cast<QScxmlExecutableContent__ParameterInfo**>(parameters.data);
	for(size_t i = 0; i < parameters.len; ++i) {
		parameters_QList.push_back(*(parameters_arr[i]));
	}
	return new (std::nothrow) MiqtVirtualQScxmlDynamicScxmlServiceFactory(*invokeInfo, names_QList, parameters_QList, parent);
}

void QScxmlDynamicScxmlServiceFactory_virtbase(QScxmlDynamicScxmlServiceFactory* src, QScxmlInvokableServiceFactory** outptr_QScxmlInvokableServiceFactory) {
	*outptr_QScxmlInvokableServiceFactory = static_cast<QScxmlInvokableServiceFactory*>(src);
}

QMetaObject* QScxmlDynamicScxmlServiceFactory_metaObject(const QScxmlDynamicScxmlServiceFactory* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScxmlDynamicScxmlServiceFactory_metacast(QScxmlDynamicScxmlServiceFactory* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScxmlDynamicScxmlServiceFactory_tr(const char* s) {
	QString _ret = QScxmlDynamicScxmlServiceFactory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScxmlInvokableService* QScxmlDynamicScxmlServiceFactory_invoke(QScxmlDynamicScxmlServiceFactory* self, QScxmlStateMachine* parentStateMachine) {
	return self->invoke(parentStateMachine);
}

struct miqt_string QScxmlDynamicScxmlServiceFactory_tr2(const char* s, const char* c) {
	QString _ret = QScxmlDynamicScxmlServiceFactory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScxmlDynamicScxmlServiceFactory_tr3(const char* s, const char* c, int n) {
	QString _ret = QScxmlDynamicScxmlServiceFactory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlDynamicScxmlServiceFactory_override_virtual_invoke(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invoke = slot;
	return true;
}

QScxmlInvokableService* QScxmlDynamicScxmlServiceFactory_virtualbase_invoke(void* self, QScxmlStateMachine* parentStateMachine) {
	return static_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>(self)->QScxmlDynamicScxmlServiceFactory::invoke(parentStateMachine);
}

bool QScxmlDynamicScxmlServiceFactory_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QScxmlDynamicScxmlServiceFactory_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>(self)->QScxmlDynamicScxmlServiceFactory::event(event);
}

bool QScxmlDynamicScxmlServiceFactory_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScxmlDynamicScxmlServiceFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>(self)->QScxmlDynamicScxmlServiceFactory::eventFilter(watched, event);
}

bool QScxmlDynamicScxmlServiceFactory_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QScxmlDynamicScxmlServiceFactory_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>(self)->QScxmlDynamicScxmlServiceFactory::timerEvent(event);
}

bool QScxmlDynamicScxmlServiceFactory_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QScxmlDynamicScxmlServiceFactory_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>(self)->QScxmlDynamicScxmlServiceFactory::childEvent(event);
}

bool QScxmlDynamicScxmlServiceFactory_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QScxmlDynamicScxmlServiceFactory_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>(self)->QScxmlDynamicScxmlServiceFactory::customEvent(event);
}

bool QScxmlDynamicScxmlServiceFactory_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QScxmlDynamicScxmlServiceFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>(self)->QScxmlDynamicScxmlServiceFactory::connectNotify(*signal);
}

bool QScxmlDynamicScxmlServiceFactory_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScxmlDynamicScxmlServiceFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>(self)->QScxmlDynamicScxmlServiceFactory::disconnectNotify(*signal);
}

QObject* QScxmlDynamicScxmlServiceFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QScxmlDynamicScxmlServiceFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QScxmlDynamicScxmlServiceFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QScxmlDynamicScxmlServiceFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScxmlDynamicScxmlServiceFactory* self_cast = dynamic_cast<MiqtVirtualQScxmlDynamicScxmlServiceFactory*>( (QScxmlDynamicScxmlServiceFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QScxmlDynamicScxmlServiceFactory_delete(QScxmlDynamicScxmlServiceFactory* self) {
	delete self;
}

