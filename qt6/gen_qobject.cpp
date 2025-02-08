#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QObjectData>
#include <QSignalBlocker>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qobject.h>
#include "gen_qobject.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QObject_destroyed(intptr_t);
void miqt_exec_callback_QObject_destroyed1(intptr_t, QObject*);
bool miqt_exec_callback_QObject_event(QObject*, intptr_t, QEvent*);
bool miqt_exec_callback_QObject_eventFilter(QObject*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QObject_timerEvent(QObject*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QObject_childEvent(QObject*, intptr_t, QChildEvent*);
void miqt_exec_callback_QObject_customEvent(QObject*, intptr_t, QEvent*);
void miqt_exec_callback_QObject_connectNotify(QObject*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QObject_disconnectNotify(QObject*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QMetaObject* QObjectData_dynamicMetaObject(const QObjectData* self) {
	return self->dynamicMetaObject();
}

void QObjectData_delete(QObjectData* self) {
	delete self;
}

class MiqtVirtualQObject final : public QObject {
public:

	MiqtVirtualQObject(): QObject() {};
	MiqtVirtualQObject(QObject* parent): QObject(parent) {};

	virtual ~MiqtVirtualQObject() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QObject::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QObject_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QObject::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QObject::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QObject_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QObject::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QObject::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QObject_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QObject::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QObject::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QObject_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QObject::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QObject::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QObject_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QObject::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QObject::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QObject_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QObject::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QObject::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QObject_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QObject::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QObject_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QObject_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QObject_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QObject_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QObject* QObject_new() {
	return new MiqtVirtualQObject();
}

QObject* QObject_new2(QObject* parent) {
	return new MiqtVirtualQObject(parent);
}

QMetaObject* QObject_metaObject(const QObject* self) {
	return (QMetaObject*) self->metaObject();
}

void* QObject_metacast(QObject* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QObject_tr(const char* s) {
	QString _ret = QObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QObject_event(QObject* self, QEvent* event) {
	return self->event(event);
}

bool QObject_eventFilter(QObject* self, QObject* watched, QEvent* event) {
	return self->eventFilter(watched, event);
}

struct miqt_string QObject_objectName(const QObject* self) {
	QString _ret = self->objectName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QObject_setObjectName(QObject* self, QAnyStringView* name) {
	self->setObjectName(*name);
}

bool QObject_isWidgetType(const QObject* self) {
	return self->isWidgetType();
}

bool QObject_isWindowType(const QObject* self) {
	return self->isWindowType();
}

bool QObject_isQuickItemType(const QObject* self) {
	return self->isQuickItemType();
}

bool QObject_signalsBlocked(const QObject* self) {
	return self->signalsBlocked();
}

bool QObject_blockSignals(QObject* self, bool b) {
	return self->blockSignals(b);
}

QThread* QObject_thread(const QObject* self) {
	return self->thread();
}

void QObject_moveToThread(QObject* self, QThread* thread) {
	self->moveToThread(thread);
}

int QObject_startTimer(QObject* self, int interval) {
	return self->startTimer(static_cast<int>(interval));
}

void QObject_killTimer(QObject* self, int id) {
	self->killTimer(static_cast<int>(id));
}

struct miqt_array /* of QObject* */  QObject_children(const QObject* self) {
	const QObjectList& _ret = self->children();
	// Convert QList<> from C++ memory to manually-managed C memory
	QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QObject_setParent(QObject* self, QObject* parent) {
	self->setParent(parent);
}

void QObject_installEventFilter(QObject* self, QObject* filterObj) {
	self->installEventFilter(filterObj);
}

void QObject_removeEventFilter(QObject* self, QObject* obj) {
	self->removeEventFilter(obj);
}

QMetaObject__Connection* QObject_connect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method) {
	return new QMetaObject::Connection(QObject::connect(sender, *signal, receiver, *method));
}

QMetaObject__Connection* QObject_connect2(const QObject* self, QObject* sender, const char* signal, const char* member) {
	return new QMetaObject::Connection(self->connect(sender, signal, member));
}

bool QObject_disconnect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member) {
	return QObject::disconnect(sender, *signal, receiver, *member);
}

bool QObject_disconnectWithQMetaObjectConnection(QMetaObject__Connection* param1) {
	return QObject::disconnect(*param1);
}

void QObject_dumpObjectTree(const QObject* self) {
	self->dumpObjectTree();
}

void QObject_dumpObjectInfo(const QObject* self) {
	self->dumpObjectInfo();
}

bool QObject_setProperty(QObject* self, const char* name, QVariant* value) {
	return self->setProperty(name, *value);
}

QVariant* QObject_property(const QObject* self, const char* name) {
	return new QVariant(self->property(name));
}

struct miqt_array /* of struct miqt_string */  QObject_dynamicPropertyNames(const QObject* self) {
	QList<QByteArray> _ret = self->dynamicPropertyNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QBindingStorage* QObject_bindingStorage(QObject* self) {
	return self->bindingStorage();
}

QBindingStorage* QObject_bindingStorage2(const QObject* self) {
	return (QBindingStorage*) self->bindingStorage();
}

void QObject_destroyed(QObject* self) {
	self->destroyed();
}

void QObject_connect_destroyed(QObject* self, intptr_t slot) {
	MiqtVirtualQObject::connect(self, static_cast<void (QObject::*)(QObject*)>(&QObject::destroyed), self, [=]() {
		miqt_exec_callback_QObject_destroyed(slot);
	});
}

QObject* QObject_parent(const QObject* self) {
	return self->parent();
}

bool QObject_inherits(const QObject* self, const char* classname) {
	return self->inherits(classname);
}

void QObject_deleteLater(QObject* self) {
	self->deleteLater();
}

struct miqt_string QObject_tr2(const char* s, const char* c) {
	QString _ret = QObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObject_tr3(const char* s, const char* c, int n) {
	QString _ret = QObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QObject_startTimer2(QObject* self, int interval, int timerType) {
	return self->startTimer(static_cast<int>(interval), static_cast<Qt::TimerType>(timerType));
}

QMetaObject__Connection* QObject_connect5(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, int type) {
	return new QMetaObject::Connection(QObject::connect(sender, *signal, receiver, *method, static_cast<Qt::ConnectionType>(type)));
}

QMetaObject__Connection* QObject_connect4(const QObject* self, QObject* sender, const char* signal, const char* member, int type) {
	return new QMetaObject::Connection(self->connect(sender, signal, member, static_cast<Qt::ConnectionType>(type)));
}

void QObject_destroyed1(QObject* self, QObject* param1) {
	self->destroyed(param1);
}

void QObject_connect_destroyed1(QObject* self, intptr_t slot) {
	MiqtVirtualQObject::connect(self, static_cast<void (QObject::*)(QObject*)>(&QObject::destroyed), self, [=](QObject* param1) {
		QObject* sigval1 = param1;
		miqt_exec_callback_QObject_destroyed1(slot, sigval1);
	});
}

bool QObject_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQObject* self_cast = dynamic_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QObject_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQObject*)(self) )->virtualbase_event(event);
}

bool QObject_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQObject* self_cast = dynamic_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QObject_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQObject*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QObject_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQObject* self_cast = dynamic_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QObject_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQObject*)(self) )->virtualbase_timerEvent(event);
}

bool QObject_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQObject* self_cast = dynamic_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QObject_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQObject*)(self) )->virtualbase_childEvent(event);
}

bool QObject_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQObject* self_cast = dynamic_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QObject_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQObject*)(self) )->virtualbase_customEvent(event);
}

bool QObject_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQObject* self_cast = dynamic_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QObject_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQObject*)(self) )->virtualbase_connectNotify(signal);
}

bool QObject_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQObject* self_cast = dynamic_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QObject_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQObject*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QObject_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQObject* self_cast = dynamic_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QObject_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQObject* self_cast = dynamic_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QObject_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQObject* self_cast = dynamic_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QObject_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQObject* self_cast = dynamic_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QObject_delete(QObject* self) {
	delete self;
}

QSignalBlocker* QSignalBlocker_new(QObject* o) {
	return new QSignalBlocker(o);
}

QSignalBlocker* QSignalBlocker_new2(QObject* o) {
	return new QSignalBlocker(*o);
}

void QSignalBlocker_reblock(QSignalBlocker* self) {
	self->reblock();
}

void QSignalBlocker_unblock(QSignalBlocker* self) {
	self->unblock();
}

void QSignalBlocker_delete(QSignalBlocker* self) {
	delete self;
}

