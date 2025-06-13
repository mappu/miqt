#include <QChildEvent>
#include <QEvent>
#include <QKeySequence>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QShortcut>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qshortcut.h>
#include "gen_qshortcut.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QShortcut_activated(intptr_t);
void miqt_exec_callback_QShortcut_activatedAmbiguously(intptr_t);
bool miqt_exec_callback_QShortcut_event(QShortcut*, intptr_t, QEvent*);
bool miqt_exec_callback_QShortcut_eventFilter(QShortcut*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QShortcut_timerEvent(QShortcut*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QShortcut_childEvent(QShortcut*, intptr_t, QChildEvent*);
void miqt_exec_callback_QShortcut_customEvent(QShortcut*, intptr_t, QEvent*);
void miqt_exec_callback_QShortcut_connectNotify(QShortcut*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QShortcut_disconnectNotify(QShortcut*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQShortcut final : public QShortcut {
public:

	MiqtVirtualQShortcut(QWidget* parent): QShortcut(parent) {}
	MiqtVirtualQShortcut(const QKeySequence& key, QWidget* parent): QShortcut(key, parent) {}
	MiqtVirtualQShortcut(const QKeySequence& key, QWidget* parent, const char* member): QShortcut(key, parent, member) {}
	MiqtVirtualQShortcut(const QKeySequence& key, QWidget* parent, const char* member, const char* ambiguousMember): QShortcut(key, parent, member, ambiguousMember) {}
	MiqtVirtualQShortcut(const QKeySequence& key, QWidget* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext shortcutContext): QShortcut(key, parent, member, ambiguousMember, shortcutContext) {}

	virtual ~MiqtVirtualQShortcut() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QShortcut::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QShortcut_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QShortcut_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QShortcut::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QShortcut_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QShortcut_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QShortcut::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QShortcut_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QShortcut_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QShortcut::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QShortcut_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QShortcut_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QShortcut::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QShortcut_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QShortcut_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QShortcut::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QShortcut_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QShortcut_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QShortcut::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QShortcut_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QShortcut_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QShortcut_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QShortcut_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QShortcut_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QShortcut_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QShortcut* QShortcut_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQShortcut(parent);
}

QShortcut* QShortcut_new2(QKeySequence* key, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQShortcut(*key, parent);
}

QShortcut* QShortcut_new3(QKeySequence* key, QWidget* parent, const char* member) {
	return new (std::nothrow) MiqtVirtualQShortcut(*key, parent, member);
}

QShortcut* QShortcut_new4(QKeySequence* key, QWidget* parent, const char* member, const char* ambiguousMember) {
	return new (std::nothrow) MiqtVirtualQShortcut(*key, parent, member, ambiguousMember);
}

QShortcut* QShortcut_new5(QKeySequence* key, QWidget* parent, const char* member, const char* ambiguousMember, int shortcutContext) {
	return new (std::nothrow) MiqtVirtualQShortcut(*key, parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(shortcutContext));
}

void QShortcut_virtbase(QShortcut* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QShortcut_metaObject(const QShortcut* self) {
	return (QMetaObject*) self->metaObject();
}

void* QShortcut_metacast(QShortcut* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QShortcut_tr(const char* s) {
	QString _ret = QShortcut::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QShortcut_trUtf8(const char* s) {
	QString _ret = QShortcut::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QShortcut_setKey(QShortcut* self, QKeySequence* key) {
	self->setKey(*key);
}

QKeySequence* QShortcut_key(const QShortcut* self) {
	return new QKeySequence(self->key());
}

void QShortcut_setEnabled(QShortcut* self, bool enable) {
	self->setEnabled(enable);
}

bool QShortcut_isEnabled(const QShortcut* self) {
	return self->isEnabled();
}

void QShortcut_setContext(QShortcut* self, int context) {
	self->setContext(static_cast<Qt::ShortcutContext>(context));
}

int QShortcut_context(const QShortcut* self) {
	Qt::ShortcutContext _ret = self->context();
	return static_cast<int>(_ret);
}

void QShortcut_setWhatsThis(QShortcut* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setWhatsThis(text_QString);
}

struct miqt_string QShortcut_whatsThis(const QShortcut* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QShortcut_setAutoRepeat(QShortcut* self, bool on) {
	self->setAutoRepeat(on);
}

bool QShortcut_autoRepeat(const QShortcut* self) {
	return self->autoRepeat();
}

int QShortcut_id(const QShortcut* self) {
	return self->id();
}

QWidget* QShortcut_parentWidget(const QShortcut* self) {
	return self->parentWidget();
}

void QShortcut_activated(QShortcut* self) {
	self->activated();
}

void QShortcut_connect_activated(QShortcut* self, intptr_t slot) {
	QShortcut::connect(self, static_cast<void (QShortcut::*)()>(&QShortcut::activated), self, [=]() {
		miqt_exec_callback_QShortcut_activated(slot);
	});
}

void QShortcut_activatedAmbiguously(QShortcut* self) {
	self->activatedAmbiguously();
}

void QShortcut_connect_activatedAmbiguously(QShortcut* self, intptr_t slot) {
	QShortcut::connect(self, static_cast<void (QShortcut::*)()>(&QShortcut::activatedAmbiguously), self, [=]() {
		miqt_exec_callback_QShortcut_activatedAmbiguously(slot);
	});
}

struct miqt_string QShortcut_tr2(const char* s, const char* c) {
	QString _ret = QShortcut::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QShortcut_tr3(const char* s, const char* c, int n) {
	QString _ret = QShortcut::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QShortcut_trUtf82(const char* s, const char* c) {
	QString _ret = QShortcut::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QShortcut_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QShortcut::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QShortcut_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QShortcut_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQShortcut*>(self)->QShortcut::event(e);
}

bool QShortcut_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QShortcut_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQShortcut*>(self)->QShortcut::eventFilter(watched, event);
}

bool QShortcut_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QShortcut_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQShortcut*>(self)->QShortcut::timerEvent(event);
}

bool QShortcut_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QShortcut_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQShortcut*>(self)->QShortcut::childEvent(event);
}

bool QShortcut_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QShortcut_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQShortcut*>(self)->QShortcut::customEvent(event);
}

bool QShortcut_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QShortcut_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQShortcut*>(self)->QShortcut::connectNotify(*signal);
}

bool QShortcut_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QShortcut_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQShortcut*>(self)->QShortcut::disconnectNotify(*signal);
}

QObject* QShortcut_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QShortcut_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QShortcut_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QShortcut_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QShortcut_delete(QShortcut* self) {
	delete self;
}

