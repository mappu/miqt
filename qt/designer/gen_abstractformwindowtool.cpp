#include <QAction>
#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerFormWindowToolInterface>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <abstractformwindowtool.h>
#include "gen_abstractformwindowtool.h"

#ifdef __cplusplus
extern "C" {
#endif

QDesignerFormEditorInterface* miqt_exec_callback_QDesignerFormWindowToolInterface_core(const QDesignerFormWindowToolInterface*, intptr_t);
QDesignerFormWindowInterface* miqt_exec_callback_QDesignerFormWindowToolInterface_formWindow(const QDesignerFormWindowToolInterface*, intptr_t);
QWidget* miqt_exec_callback_QDesignerFormWindowToolInterface_editor(const QDesignerFormWindowToolInterface*, intptr_t);
QAction* miqt_exec_callback_QDesignerFormWindowToolInterface_action(const QDesignerFormWindowToolInterface*, intptr_t);
void miqt_exec_callback_QDesignerFormWindowToolInterface_activated(QDesignerFormWindowToolInterface*, intptr_t);
void miqt_exec_callback_QDesignerFormWindowToolInterface_deactivated(QDesignerFormWindowToolInterface*, intptr_t);
bool miqt_exec_callback_QDesignerFormWindowToolInterface_handleEvent(QDesignerFormWindowToolInterface*, intptr_t, QWidget*, QWidget*, QEvent*);
bool miqt_exec_callback_QDesignerFormWindowToolInterface_event(QDesignerFormWindowToolInterface*, intptr_t, QEvent*);
bool miqt_exec_callback_QDesignerFormWindowToolInterface_eventFilter(QDesignerFormWindowToolInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerFormWindowToolInterface_timerEvent(QDesignerFormWindowToolInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerFormWindowToolInterface_childEvent(QDesignerFormWindowToolInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerFormWindowToolInterface_customEvent(QDesignerFormWindowToolInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerFormWindowToolInterface_connectNotify(QDesignerFormWindowToolInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerFormWindowToolInterface_disconnectNotify(QDesignerFormWindowToolInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerFormWindowToolInterface final : public QDesignerFormWindowToolInterface {
public:

	MiqtVirtualQDesignerFormWindowToolInterface(): QDesignerFormWindowToolInterface() {}
	MiqtVirtualQDesignerFormWindowToolInterface(QObject* parent): QDesignerFormWindowToolInterface(parent) {}

	virtual ~MiqtVirtualQDesignerFormWindowToolInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__core = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormEditorInterface* core() const override {
		if (handle__core == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QDesignerFormEditorInterface* callback_return_value = miqt_exec_callback_QDesignerFormWindowToolInterface_core(this, handle__core);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__formWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormWindowInterface* formWindow() const override {
		if (handle__formWindow == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowInterface* callback_return_value = miqt_exec_callback_QDesignerFormWindowToolInterface_formWindow(this, handle__formWindow);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editor = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* editor() const override {
		if (handle__editor == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QWidget* callback_return_value = miqt_exec_callback_QDesignerFormWindowToolInterface_editor(this, handle__editor);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__action = 0;

	// Subclass to allow providing a Go implementation
	virtual QAction* action() const override {
		if (handle__action == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QAction* callback_return_value = miqt_exec_callback_QDesignerFormWindowToolInterface_action(this, handle__action);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__activated = 0;

	// Subclass to allow providing a Go implementation
	virtual void activated() override {
		if (handle__activated == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QDesignerFormWindowToolInterface_activated(this, handle__activated);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__deactivated = 0;

	// Subclass to allow providing a Go implementation
	virtual void deactivated() override {
		if (handle__deactivated == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QDesignerFormWindowToolInterface_deactivated(this, handle__deactivated);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__handleEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool handleEvent(QWidget* widget, QWidget* managedWidget, QEvent* event) override {
		if (handle__handleEvent == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = widget;
		QWidget* sigval2 = managedWidget;
		QEvent* sigval3 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerFormWindowToolInterface_handleEvent(this, handle__handleEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDesignerFormWindowToolInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerFormWindowToolInterface_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerFormWindowToolInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDesignerFormWindowToolInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerFormWindowToolInterface_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerFormWindowToolInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDesignerFormWindowToolInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerFormWindowToolInterface_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDesignerFormWindowToolInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDesignerFormWindowToolInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerFormWindowToolInterface_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDesignerFormWindowToolInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDesignerFormWindowToolInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerFormWindowToolInterface_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDesignerFormWindowToolInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDesignerFormWindowToolInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerFormWindowToolInterface_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDesignerFormWindowToolInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDesignerFormWindowToolInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerFormWindowToolInterface_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDesignerFormWindowToolInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QDesignerFormWindowToolInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerFormWindowToolInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerFormWindowToolInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerFormWindowToolInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerFormWindowToolInterface* QDesignerFormWindowToolInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerFormWindowToolInterface();
}

QDesignerFormWindowToolInterface* QDesignerFormWindowToolInterface_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerFormWindowToolInterface(parent);
}

void QDesignerFormWindowToolInterface_virtbase(QDesignerFormWindowToolInterface* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDesignerFormWindowToolInterface_metaObject(const QDesignerFormWindowToolInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerFormWindowToolInterface_metacast(QDesignerFormWindowToolInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerFormWindowToolInterface_tr(const char* s) {
	QString _ret = QDesignerFormWindowToolInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerFormWindowToolInterface_trUtf8(const char* s) {
	QString _ret = QDesignerFormWindowToolInterface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDesignerFormEditorInterface* QDesignerFormWindowToolInterface_core(const QDesignerFormWindowToolInterface* self) {
	return self->core();
}

QDesignerFormWindowInterface* QDesignerFormWindowToolInterface_formWindow(const QDesignerFormWindowToolInterface* self) {
	return self->formWindow();
}

QWidget* QDesignerFormWindowToolInterface_editor(const QDesignerFormWindowToolInterface* self) {
	return self->editor();
}

QAction* QDesignerFormWindowToolInterface_action(const QDesignerFormWindowToolInterface* self) {
	return self->action();
}

void QDesignerFormWindowToolInterface_activated(QDesignerFormWindowToolInterface* self) {
	self->activated();
}

void QDesignerFormWindowToolInterface_deactivated(QDesignerFormWindowToolInterface* self) {
	self->deactivated();
}

bool QDesignerFormWindowToolInterface_handleEvent(QDesignerFormWindowToolInterface* self, QWidget* widget, QWidget* managedWidget, QEvent* event) {
	return self->handleEvent(widget, managedWidget, event);
}

struct miqt_string QDesignerFormWindowToolInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerFormWindowToolInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerFormWindowToolInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerFormWindowToolInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerFormWindowToolInterface_trUtf82(const char* s, const char* c) {
	QString _ret = QDesignerFormWindowToolInterface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerFormWindowToolInterface_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDesignerFormWindowToolInterface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerFormWindowToolInterface_override_virtual_core(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__core = slot;
	return true;
}

bool QDesignerFormWindowToolInterface_override_virtual_formWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__formWindow = slot;
	return true;
}

bool QDesignerFormWindowToolInterface_override_virtual_editor(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__editor = slot;
	return true;
}

bool QDesignerFormWindowToolInterface_override_virtual_action(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__action = slot;
	return true;
}

bool QDesignerFormWindowToolInterface_override_virtual_activated(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__activated = slot;
	return true;
}

bool QDesignerFormWindowToolInterface_override_virtual_deactivated(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__deactivated = slot;
	return true;
}

bool QDesignerFormWindowToolInterface_override_virtual_handleEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__handleEvent = slot;
	return true;
}

bool QDesignerFormWindowToolInterface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDesignerFormWindowToolInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerFormWindowToolInterface*>(self)->QDesignerFormWindowToolInterface::event(event);
}

bool QDesignerFormWindowToolInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDesignerFormWindowToolInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerFormWindowToolInterface*>(self)->QDesignerFormWindowToolInterface::eventFilter(watched, event);
}

bool QDesignerFormWindowToolInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDesignerFormWindowToolInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerFormWindowToolInterface*>(self)->QDesignerFormWindowToolInterface::timerEvent(event);
}

bool QDesignerFormWindowToolInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDesignerFormWindowToolInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerFormWindowToolInterface*>(self)->QDesignerFormWindowToolInterface::childEvent(event);
}

bool QDesignerFormWindowToolInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDesignerFormWindowToolInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerFormWindowToolInterface*>(self)->QDesignerFormWindowToolInterface::customEvent(event);
}

bool QDesignerFormWindowToolInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDesignerFormWindowToolInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerFormWindowToolInterface*>(self)->QDesignerFormWindowToolInterface::connectNotify(*signal);
}

bool QDesignerFormWindowToolInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDesignerFormWindowToolInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerFormWindowToolInterface*>(self)->QDesignerFormWindowToolInterface::disconnectNotify(*signal);
}

QObject* QDesignerFormWindowToolInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerFormWindowToolInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerFormWindowToolInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerFormWindowToolInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerFormWindowToolInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowToolInterface*>( (QDesignerFormWindowToolInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerFormWindowToolInterface_delete(QDesignerFormWindowToolInterface* self) {
	delete self;
}

