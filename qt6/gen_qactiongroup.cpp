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

void miqt_exec_callback_QActionGroup_triggered(intptr_t, QAction*);
void miqt_exec_callback_QActionGroup_hovered(intptr_t, QAction*);
bool miqt_exec_callback_QActionGroup_event(QActionGroup*, intptr_t, QEvent*);
bool miqt_exec_callback_QActionGroup_eventFilter(QActionGroup*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QActionGroup_timerEvent(QActionGroup*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QActionGroup_childEvent(QActionGroup*, intptr_t, QChildEvent*);
void miqt_exec_callback_QActionGroup_customEvent(QActionGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QActionGroup_connectNotify(QActionGroup*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QActionGroup_disconnectNotify(QActionGroup*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQActionGroup final : public QActionGroup {
public:

	MiqtVirtualQActionGroup(QObject* parent): QActionGroup(parent) {};

	virtual ~MiqtVirtualQActionGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QActionGroup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QActionGroup_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QActionGroup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QActionGroup::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QActionGroup_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QActionGroup::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QActionGroup::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QActionGroup_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QActionGroup::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QActionGroup::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QActionGroup_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QActionGroup::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QActionGroup::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QActionGroup_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QActionGroup::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QActionGroup::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QActionGroup_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QActionGroup::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QActionGroup::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QActionGroup_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QActionGroup::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QActionGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QActionGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QActionGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QActionGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QActionGroup* QActionGroup_new(QObject* parent) {
	return new MiqtVirtualQActionGroup(parent);
}

void QActionGroup_virtbase(QActionGroup* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QActionGroup_metaObject(const QActionGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QActionGroup_metacast(QActionGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QActionGroup_tr(const char* s) {
	QString _ret = QActionGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QActionGroup_addAction(QActionGroup* self, QAction* a) {
	return self->addAction(a);
}

QAction* QActionGroup_addActionWithText(QActionGroup* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString);
}

QAction* QActionGroup_addAction2(QActionGroup* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(*icon, text_QString);
}

void QActionGroup_removeAction(QActionGroup* self, QAction* a) {
	self->removeAction(a);
}

struct miqt_array /* of QAction* */  QActionGroup_actions(const QActionGroup* self) {
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

QAction* QActionGroup_checkedAction(const QActionGroup* self) {
	return self->checkedAction();
}

bool QActionGroup_isExclusive(const QActionGroup* self) {
	return self->isExclusive();
}

bool QActionGroup_isEnabled(const QActionGroup* self) {
	return self->isEnabled();
}

bool QActionGroup_isVisible(const QActionGroup* self) {
	return self->isVisible();
}

int QActionGroup_exclusionPolicy(const QActionGroup* self) {
	QActionGroup::ExclusionPolicy _ret = self->exclusionPolicy();
	return static_cast<int>(_ret);
}

void QActionGroup_setEnabled(QActionGroup* self, bool enabled) {
	self->setEnabled(enabled);
}

void QActionGroup_setDisabled(QActionGroup* self, bool b) {
	self->setDisabled(b);
}

void QActionGroup_setVisible(QActionGroup* self, bool visible) {
	self->setVisible(visible);
}

void QActionGroup_setExclusive(QActionGroup* self, bool exclusive) {
	self->setExclusive(exclusive);
}

void QActionGroup_setExclusionPolicy(QActionGroup* self, int policy) {
	self->setExclusionPolicy(static_cast<QActionGroup::ExclusionPolicy>(policy));
}

void QActionGroup_triggered(QActionGroup* self, QAction* param1) {
	self->triggered(param1);
}

void QActionGroup_connect_triggered(QActionGroup* self, intptr_t slot) {
	MiqtVirtualQActionGroup::connect(self, static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::triggered), self, [=](QAction* param1) {
		QAction* sigval1 = param1;
		miqt_exec_callback_QActionGroup_triggered(slot, sigval1);
	});
}

void QActionGroup_hovered(QActionGroup* self, QAction* param1) {
	self->hovered(param1);
}

void QActionGroup_connect_hovered(QActionGroup* self, intptr_t slot) {
	MiqtVirtualQActionGroup::connect(self, static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::hovered), self, [=](QAction* param1) {
		QAction* sigval1 = param1;
		miqt_exec_callback_QActionGroup_hovered(slot, sigval1);
	});
}

struct miqt_string QActionGroup_tr2(const char* s, const char* c) {
	QString _ret = QActionGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QActionGroup_tr3(const char* s, const char* c, int n) {
	QString _ret = QActionGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QActionGroup_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQActionGroup* self_cast = dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QActionGroup_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQActionGroup*)(self) )->virtualbase_event(event);
}

bool QActionGroup_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQActionGroup* self_cast = dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QActionGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQActionGroup*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QActionGroup_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQActionGroup* self_cast = dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QActionGroup_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQActionGroup*)(self) )->virtualbase_timerEvent(event);
}

bool QActionGroup_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQActionGroup* self_cast = dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QActionGroup_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQActionGroup*)(self) )->virtualbase_childEvent(event);
}

bool QActionGroup_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQActionGroup* self_cast = dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QActionGroup_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQActionGroup*)(self) )->virtualbase_customEvent(event);
}

bool QActionGroup_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQActionGroup* self_cast = dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QActionGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQActionGroup*)(self) )->virtualbase_connectNotify(signal);
}

bool QActionGroup_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQActionGroup* self_cast = dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QActionGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQActionGroup*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QActionGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQActionGroup* self_cast = dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QActionGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQActionGroup* self_cast = dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QActionGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQActionGroup* self_cast = dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QActionGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQActionGroup* self_cast = dynamic_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QActionGroup_delete(QActionGroup* self) {
	delete self;
}

