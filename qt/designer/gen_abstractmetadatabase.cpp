#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerMetaDataBaseInterface>
#include <QDesignerMetaDataBaseItemInterface>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <abstractmetadatabase.h>
#include "gen_abstractmetadatabase.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDesignerMetaDataBaseInterface_changed(intptr_t);
QDesignerMetaDataBaseItemInterface* miqt_exec_callback_QDesignerMetaDataBaseInterface_item(const QDesignerMetaDataBaseInterface*, intptr_t, QObject*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_add(QDesignerMetaDataBaseInterface*, intptr_t, QObject*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_remove(QDesignerMetaDataBaseInterface*, intptr_t, QObject*);
struct miqt_array /* of QObject* */  miqt_exec_callback_QDesignerMetaDataBaseInterface_objects(const QDesignerMetaDataBaseInterface*, intptr_t);
QDesignerFormEditorInterface* miqt_exec_callback_QDesignerMetaDataBaseInterface_core(const QDesignerMetaDataBaseInterface*, intptr_t);
bool miqt_exec_callback_QDesignerMetaDataBaseInterface_event(QDesignerMetaDataBaseInterface*, intptr_t, QEvent*);
bool miqt_exec_callback_QDesignerMetaDataBaseInterface_eventFilter(QDesignerMetaDataBaseInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_timerEvent(QDesignerMetaDataBaseInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_childEvent(QDesignerMetaDataBaseInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_customEvent(QDesignerMetaDataBaseInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_connectNotify(QDesignerMetaDataBaseInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_disconnectNotify(QDesignerMetaDataBaseInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string QDesignerMetaDataBaseItemInterface_name(const QDesignerMetaDataBaseItemInterface* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerMetaDataBaseItemInterface_setName(QDesignerMetaDataBaseItemInterface* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_array /* of QWidget* */  QDesignerMetaDataBaseItemInterface_tabOrder(const QDesignerMetaDataBaseItemInterface* self) {
	QList<QWidget *> _ret = self->tabOrder();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDesignerMetaDataBaseItemInterface_setTabOrder(QDesignerMetaDataBaseItemInterface* self, struct miqt_array /* of QWidget* */  tabOrder) {
	QList<QWidget *> tabOrder_QList;
	tabOrder_QList.reserve(tabOrder.len);
	QWidget** tabOrder_arr = static_cast<QWidget**>(tabOrder.data);
	for(size_t i = 0; i < tabOrder.len; ++i) {
		tabOrder_QList.push_back(tabOrder_arr[i]);
	}
	self->setTabOrder(tabOrder_QList);
}

bool QDesignerMetaDataBaseItemInterface_enabled(const QDesignerMetaDataBaseItemInterface* self) {
	return self->enabled();
}

void QDesignerMetaDataBaseItemInterface_setEnabled(QDesignerMetaDataBaseItemInterface* self, bool b) {
	self->setEnabled(b);
}

void QDesignerMetaDataBaseItemInterface_operatorAssign(QDesignerMetaDataBaseItemInterface* self, QDesignerMetaDataBaseItemInterface* param1) {
	self->operator=(*param1);
}

void QDesignerMetaDataBaseItemInterface_delete(QDesignerMetaDataBaseItemInterface* self) {
	delete self;
}

class MiqtVirtualQDesignerMetaDataBaseInterface final : public QDesignerMetaDataBaseInterface {
public:

	MiqtVirtualQDesignerMetaDataBaseInterface(): QDesignerMetaDataBaseInterface() {}
	MiqtVirtualQDesignerMetaDataBaseInterface(QObject* parent): QDesignerMetaDataBaseInterface(parent) {}

	virtual ~MiqtVirtualQDesignerMetaDataBaseInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__item = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerMetaDataBaseItemInterface* item(QObject* object) const override {
		if (handle__item == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = object;
		QDesignerMetaDataBaseItemInterface* callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseInterface_item(this, handle__item, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__add = 0;

	// Subclass to allow providing a Go implementation
	virtual void add(QObject* object) override {
		if (handle__add == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = object;
		miqt_exec_callback_QDesignerMetaDataBaseInterface_add(this, handle__add, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__remove = 0;

	// Subclass to allow providing a Go implementation
	virtual void remove(QObject* object) override {
		if (handle__remove == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = object;
		miqt_exec_callback_QDesignerMetaDataBaseInterface_remove(this, handle__remove, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__objects = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QObject *> objects() const override {
		if (handle__objects == 0) {
			return QList<QObject *>(); // Pure virtual, there is no base we can call
		}

		struct miqt_array /* of QObject* */  callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseInterface_objects(this, handle__objects);
		QList<QObject *> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QObject** callback_return_value_arr = static_cast<QObject**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(callback_return_value_arr[i]);
		}
		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__core = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormEditorInterface* core() const override {
		if (handle__core == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QDesignerFormEditorInterface* callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseInterface_core(this, handle__core);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDesignerMetaDataBaseInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseInterface_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerMetaDataBaseInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDesignerMetaDataBaseInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseInterface_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerMetaDataBaseInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDesignerMetaDataBaseInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerMetaDataBaseInterface_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDesignerMetaDataBaseInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDesignerMetaDataBaseInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerMetaDataBaseInterface_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDesignerMetaDataBaseInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDesignerMetaDataBaseInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerMetaDataBaseInterface_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDesignerMetaDataBaseInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDesignerMetaDataBaseInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerMetaDataBaseInterface_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDesignerMetaDataBaseInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDesignerMetaDataBaseInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerMetaDataBaseInterface_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDesignerMetaDataBaseInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QDesignerMetaDataBaseInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerMetaDataBaseInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerMetaDataBaseInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerMetaDataBaseInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerMetaDataBaseInterface();
}

QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerMetaDataBaseInterface(parent);
}

void QDesignerMetaDataBaseInterface_virtbase(QDesignerMetaDataBaseInterface* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDesignerMetaDataBaseInterface_metaObject(const QDesignerMetaDataBaseInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerMetaDataBaseInterface_metacast(QDesignerMetaDataBaseInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerMetaDataBaseInterface_tr(const char* s) {
	QString _ret = QDesignerMetaDataBaseInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerMetaDataBaseInterface_trUtf8(const char* s) {
	QString _ret = QDesignerMetaDataBaseInterface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseInterface_item(const QDesignerMetaDataBaseInterface* self, QObject* object) {
	return self->item(object);
}

void QDesignerMetaDataBaseInterface_add(QDesignerMetaDataBaseInterface* self, QObject* object) {
	self->add(object);
}

void QDesignerMetaDataBaseInterface_remove(QDesignerMetaDataBaseInterface* self, QObject* object) {
	self->remove(object);
}

struct miqt_array /* of QObject* */  QDesignerMetaDataBaseInterface_objects(const QDesignerMetaDataBaseInterface* self) {
	QList<QObject *> _ret = self->objects();
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

QDesignerFormEditorInterface* QDesignerMetaDataBaseInterface_core(const QDesignerMetaDataBaseInterface* self) {
	return self->core();
}

void QDesignerMetaDataBaseInterface_changed(QDesignerMetaDataBaseInterface* self) {
	self->changed();
}

void QDesignerMetaDataBaseInterface_connect_changed(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
	QDesignerMetaDataBaseInterface::connect(self, static_cast<void (QDesignerMetaDataBaseInterface::*)()>(&QDesignerMetaDataBaseInterface::changed), self, [=]() {
		miqt_exec_callback_QDesignerMetaDataBaseInterface_changed(slot);
	});
}

struct miqt_string QDesignerMetaDataBaseInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerMetaDataBaseInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerMetaDataBaseInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerMetaDataBaseInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerMetaDataBaseInterface_trUtf82(const char* s, const char* c) {
	QString _ret = QDesignerMetaDataBaseInterface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerMetaDataBaseInterface_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDesignerMetaDataBaseInterface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerMetaDataBaseInterface_override_virtual_item(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__item = slot;
	return true;
}

bool QDesignerMetaDataBaseInterface_override_virtual_add(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__add = slot;
	return true;
}

bool QDesignerMetaDataBaseInterface_override_virtual_remove(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__remove = slot;
	return true;
}

bool QDesignerMetaDataBaseInterface_override_virtual_objects(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__objects = slot;
	return true;
}

bool QDesignerMetaDataBaseInterface_override_virtual_core(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__core = slot;
	return true;
}

bool QDesignerMetaDataBaseInterface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDesignerMetaDataBaseInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::event(event);
}

bool QDesignerMetaDataBaseInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDesignerMetaDataBaseInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::eventFilter(watched, event);
}

bool QDesignerMetaDataBaseInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDesignerMetaDataBaseInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::timerEvent(event);
}

bool QDesignerMetaDataBaseInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDesignerMetaDataBaseInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::childEvent(event);
}

bool QDesignerMetaDataBaseInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDesignerMetaDataBaseInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::customEvent(event);
}

bool QDesignerMetaDataBaseInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDesignerMetaDataBaseInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::connectNotify(*signal);
}

bool QDesignerMetaDataBaseInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDesignerMetaDataBaseInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::disconnectNotify(*signal);
}

QObject* QDesignerMetaDataBaseInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerMetaDataBaseInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerMetaDataBaseInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerMetaDataBaseInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerMetaDataBaseInterface_delete(QDesignerMetaDataBaseInterface* self) {
	delete self;
}

