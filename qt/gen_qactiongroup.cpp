#include <QAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qactiongroup.h>
#include "gen_qactiongroup.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QActionGroup_Triggered(intptr_t, QAction*);
void miqt_exec_callback_QActionGroup_Hovered(intptr_t, QAction*);
bool miqt_exec_callback_QActionGroup_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QActionGroup_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QActionGroup_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QActionGroup_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QActionGroup_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QActionGroup_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QActionGroup_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQActionGroup : public virtual QActionGroup {
public:

	MiqtVirtualQActionGroup(QObject* parent): QActionGroup(parent) {};

	virtual ~MiqtVirtualQActionGroup() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QActionGroup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QActionGroup_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QActionGroup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QActionGroup::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QActionGroup_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QActionGroup::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QActionGroup::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QActionGroup_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QActionGroup::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QActionGroup::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QActionGroup_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QActionGroup::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QActionGroup::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QActionGroup_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QActionGroup::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QActionGroup::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QActionGroup_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QActionGroup::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QActionGroup::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QActionGroup_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QActionGroup::disconnectNotify(*signal);

	}

};

QActionGroup* QActionGroup_new(QObject* parent) {
	return new MiqtVirtualQActionGroup(parent);
}

void QActionGroup_virtbase(QActionGroup* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QActionGroup_MetaObject(const QActionGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QActionGroup_Metacast(QActionGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QActionGroup_Tr(const char* s) {
	QString _ret = QActionGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QActionGroup_TrUtf8(const char* s) {
	QString _ret = QActionGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QActionGroup_AddAction(QActionGroup* self, QAction* a) {
	return self->addAction(a);
}

QAction* QActionGroup_AddActionWithText(QActionGroup* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString);
}

QAction* QActionGroup_AddAction2(QActionGroup* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(*icon, text_QString);
}

void QActionGroup_RemoveAction(QActionGroup* self, QAction* a) {
	self->removeAction(a);
}

struct miqt_array /* of QAction* */  QActionGroup_Actions(const QActionGroup* self) {
	QList<QAction *> _ret = self->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAction* QActionGroup_CheckedAction(const QActionGroup* self) {
	return self->checkedAction();
}

bool QActionGroup_IsExclusive(const QActionGroup* self) {
	return self->isExclusive();
}

bool QActionGroup_IsEnabled(const QActionGroup* self) {
	return self->isEnabled();
}

bool QActionGroup_IsVisible(const QActionGroup* self) {
	return self->isVisible();
}

int QActionGroup_ExclusionPolicy(const QActionGroup* self) {
	QActionGroup::ExclusionPolicy _ret = self->exclusionPolicy();
	return static_cast<int>(_ret);
}

void QActionGroup_SetEnabled(QActionGroup* self, bool enabled) {
	self->setEnabled(enabled);
}

void QActionGroup_SetDisabled(QActionGroup* self, bool b) {
	self->setDisabled(b);
}

void QActionGroup_SetVisible(QActionGroup* self, bool visible) {
	self->setVisible(visible);
}

void QActionGroup_SetExclusive(QActionGroup* self, bool exclusive) {
	self->setExclusive(exclusive);
}

void QActionGroup_SetExclusionPolicy(QActionGroup* self, int policy) {
	self->setExclusionPolicy(static_cast<QActionGroup::ExclusionPolicy>(policy));
}

void QActionGroup_Triggered(QActionGroup* self, QAction* param1) {
	self->triggered(param1);
}

void QActionGroup_connect_Triggered(QActionGroup* self, intptr_t slot) {
	MiqtVirtualQActionGroup::connect(self, static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::triggered), self, [=](QAction* param1) {
		QAction* sigval1 = param1;
		miqt_exec_callback_QActionGroup_Triggered(slot, sigval1);
	});
}

void QActionGroup_Hovered(QActionGroup* self, QAction* param1) {
	self->hovered(param1);
}

void QActionGroup_connect_Hovered(QActionGroup* self, intptr_t slot) {
	MiqtVirtualQActionGroup::connect(self, static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::hovered), self, [=](QAction* param1) {
		QAction* sigval1 = param1;
		miqt_exec_callback_QActionGroup_Hovered(slot, sigval1);
	});
}

struct miqt_string QActionGroup_Tr2(const char* s, const char* c) {
	QString _ret = QActionGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QActionGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QActionGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QActionGroup_TrUtf82(const char* s, const char* c) {
	QString _ret = QActionGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QActionGroup_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QActionGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QActionGroup_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) )->handle__Event = slot;
}

bool QActionGroup_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQActionGroup*)(self) )->virtualbase_Event(event);
}

void QActionGroup_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) )->handle__EventFilter = slot;
}

bool QActionGroup_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQActionGroup*)(self) )->virtualbase_EventFilter(watched, event);
}

void QActionGroup_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) )->handle__TimerEvent = slot;
}

void QActionGroup_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQActionGroup*)(self) )->virtualbase_TimerEvent(event);
}

void QActionGroup_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) )->handle__ChildEvent = slot;
}

void QActionGroup_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQActionGroup*)(self) )->virtualbase_ChildEvent(event);
}

void QActionGroup_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) )->handle__CustomEvent = slot;
}

void QActionGroup_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQActionGroup*)(self) )->virtualbase_CustomEvent(event);
}

void QActionGroup_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) )->handle__ConnectNotify = slot;
}

void QActionGroup_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQActionGroup*)(self) )->virtualbase_ConnectNotify(signal);
}

void QActionGroup_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) )->handle__DisconnectNotify = slot;
}

void QActionGroup_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQActionGroup*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QActionGroup_Delete(QActionGroup* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQActionGroup*>( self );
	} else {
		delete self;
	}
}

