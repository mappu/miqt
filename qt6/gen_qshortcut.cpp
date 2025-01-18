#include <QChildEvent>
#include <QEvent>
#include <QKeySequence>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QShortcut>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qshortcut.h>
#include "gen_qshortcut.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QShortcut_Activated(intptr_t);
void miqt_exec_callback_QShortcut_ActivatedAmbiguously(intptr_t);
bool miqt_exec_callback_QShortcut_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QShortcut_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QShortcut_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QShortcut_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QShortcut_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QShortcut_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QShortcut_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQShortcut final : public QShortcut {
public:

	MiqtVirtualQShortcut(QObject* parent): QShortcut(parent) {};
	MiqtVirtualQShortcut(const QKeySequence& key, QObject* parent): QShortcut(key, parent) {};
	MiqtVirtualQShortcut(QKeySequence::StandardKey key, QObject* parent): QShortcut(key, parent) {};
	MiqtVirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member): QShortcut(key, parent, member) {};
	MiqtVirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember): QShortcut(key, parent, member, ambiguousMember) {};
	MiqtVirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context): QShortcut(key, parent, member, ambiguousMember, context) {};
	MiqtVirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member): QShortcut(key, parent, member) {};
	MiqtVirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember): QShortcut(key, parent, member, ambiguousMember) {};
	MiqtVirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context): QShortcut(key, parent, member, ambiguousMember, context) {};

	virtual ~MiqtVirtualQShortcut() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QShortcut::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QShortcut_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QShortcut::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QShortcut::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QShortcut_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QShortcut::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QShortcut::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QShortcut_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QShortcut::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QShortcut::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QShortcut_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QShortcut::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QShortcut::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QShortcut_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QShortcut::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QShortcut::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QShortcut_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QShortcut::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QShortcut::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QShortcut_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QShortcut::disconnectNotify(*signal);

	}

};

QShortcut* QShortcut_new(QObject* parent) {
	return new MiqtVirtualQShortcut(parent);
}

QShortcut* QShortcut_new2(QKeySequence* key, QObject* parent) {
	return new MiqtVirtualQShortcut(*key, parent);
}

QShortcut* QShortcut_new3(int key, QObject* parent) {
	return new MiqtVirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent);
}

QShortcut* QShortcut_new4(QKeySequence* key, QObject* parent, const char* member) {
	return new MiqtVirtualQShortcut(*key, parent, member);
}

QShortcut* QShortcut_new5(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember) {
	return new MiqtVirtualQShortcut(*key, parent, member, ambiguousMember);
}

QShortcut* QShortcut_new6(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember, int context) {
	return new MiqtVirtualQShortcut(*key, parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(context));
}

QShortcut* QShortcut_new7(int key, QObject* parent, const char* member) {
	return new MiqtVirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member);
}

QShortcut* QShortcut_new8(int key, QObject* parent, const char* member, const char* ambiguousMember) {
	return new MiqtVirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member, ambiguousMember);
}

QShortcut* QShortcut_new9(int key, QObject* parent, const char* member, const char* ambiguousMember, int context) {
	return new MiqtVirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(context));
}

void QShortcut_virtbase(QShortcut* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QShortcut_MetaObject(const QShortcut* self) {
	return (QMetaObject*) self->metaObject();
}

void* QShortcut_Metacast(QShortcut* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QShortcut_Tr(const char* s) {
	QString _ret = QShortcut::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QShortcut_SetKey(QShortcut* self, QKeySequence* key) {
	self->setKey(*key);
}

QKeySequence* QShortcut_Key(const QShortcut* self) {
	return new QKeySequence(self->key());
}

void QShortcut_SetKeys(QShortcut* self, int key) {
	self->setKeys(static_cast<QKeySequence::StandardKey>(key));
}

void QShortcut_SetKeysWithKeys(QShortcut* self, struct miqt_array /* of QKeySequence* */  keys) {
	QList<QKeySequence> keys_QList;
	keys_QList.reserve(keys.len);
	QKeySequence** keys_arr = static_cast<QKeySequence**>(keys.data);
	for(size_t i = 0; i < keys.len; ++i) {
		keys_QList.push_back(*(keys_arr[i]));
	}
	self->setKeys(keys_QList);
}

struct miqt_array /* of QKeySequence* */  QShortcut_Keys(const QShortcut* self) {
	QList<QKeySequence> _ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory
	QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QKeySequence(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QShortcut_SetEnabled(QShortcut* self, bool enable) {
	self->setEnabled(enable);
}

bool QShortcut_IsEnabled(const QShortcut* self) {
	return self->isEnabled();
}

void QShortcut_SetContext(QShortcut* self, int context) {
	self->setContext(static_cast<Qt::ShortcutContext>(context));
}

int QShortcut_Context(const QShortcut* self) {
	Qt::ShortcutContext _ret = self->context();
	return static_cast<int>(_ret);
}

void QShortcut_SetAutoRepeat(QShortcut* self, bool on) {
	self->setAutoRepeat(on);
}

bool QShortcut_AutoRepeat(const QShortcut* self) {
	return self->autoRepeat();
}

int QShortcut_Id(const QShortcut* self) {
	return self->id();
}

void QShortcut_SetWhatsThis(QShortcut* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setWhatsThis(text_QString);
}

struct miqt_string QShortcut_WhatsThis(const QShortcut* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QShortcut_Activated(QShortcut* self) {
	self->activated();
}

void QShortcut_connect_Activated(QShortcut* self, intptr_t slot) {
	MiqtVirtualQShortcut::connect(self, static_cast<void (QShortcut::*)()>(&QShortcut::activated), self, [=]() {
		miqt_exec_callback_QShortcut_Activated(slot);
	});
}

void QShortcut_ActivatedAmbiguously(QShortcut* self) {
	self->activatedAmbiguously();
}

void QShortcut_connect_ActivatedAmbiguously(QShortcut* self, intptr_t slot) {
	MiqtVirtualQShortcut::connect(self, static_cast<void (QShortcut::*)()>(&QShortcut::activatedAmbiguously), self, [=]() {
		miqt_exec_callback_QShortcut_ActivatedAmbiguously(slot);
	});
}

struct miqt_string QShortcut_Tr2(const char* s, const char* c) {
	QString _ret = QShortcut::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QShortcut_Tr3(const char* s, const char* c, int n) {
	QString _ret = QShortcut::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QShortcut_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QShortcut_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQShortcut*)(self) )->virtualbase_Event(e);
}

bool QShortcut_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QShortcut_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQShortcut*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QShortcut_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QShortcut_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQShortcut*)(self) )->virtualbase_TimerEvent(event);
}

bool QShortcut_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QShortcut_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQShortcut*)(self) )->virtualbase_ChildEvent(event);
}

bool QShortcut_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QShortcut_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQShortcut*)(self) )->virtualbase_CustomEvent(event);
}

bool QShortcut_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QShortcut_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQShortcut*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QShortcut_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = dynamic_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QShortcut_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQShortcut*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QShortcut_Delete(QShortcut* self) {
	delete self;
}

