#include <QAbstractButton>
#include <QButtonGroup>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qbuttongroup.h>
#include "gen_qbuttongroup.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QButtonGroup_buttonClicked(intptr_t, QAbstractButton*);
void miqt_exec_callback_QButtonGroup_buttonPressed(intptr_t, QAbstractButton*);
void miqt_exec_callback_QButtonGroup_buttonReleased(intptr_t, QAbstractButton*);
void miqt_exec_callback_QButtonGroup_buttonToggled(intptr_t, QAbstractButton*, bool);
void miqt_exec_callback_QButtonGroup_idClicked(intptr_t, int);
void miqt_exec_callback_QButtonGroup_idPressed(intptr_t, int);
void miqt_exec_callback_QButtonGroup_idReleased(intptr_t, int);
void miqt_exec_callback_QButtonGroup_idToggled(intptr_t, int, bool);
void miqt_exec_callback_QButtonGroup_buttonClickedWithInt(intptr_t, int);
void miqt_exec_callback_QButtonGroup_buttonPressedWithInt(intptr_t, int);
void miqt_exec_callback_QButtonGroup_buttonReleasedWithInt(intptr_t, int);
void miqt_exec_callback_QButtonGroup_buttonToggled2(intptr_t, int, bool);
bool miqt_exec_callback_QButtonGroup_event(QButtonGroup*, intptr_t, QEvent*);
bool miqt_exec_callback_QButtonGroup_eventFilter(QButtonGroup*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QButtonGroup_timerEvent(QButtonGroup*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QButtonGroup_childEvent(QButtonGroup*, intptr_t, QChildEvent*);
void miqt_exec_callback_QButtonGroup_customEvent(QButtonGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QButtonGroup_connectNotify(QButtonGroup*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QButtonGroup_disconnectNotify(QButtonGroup*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQButtonGroup final : public QButtonGroup {
public:

	MiqtVirtualQButtonGroup(): QButtonGroup() {};
	MiqtVirtualQButtonGroup(QObject* parent): QButtonGroup(parent) {};

	virtual ~MiqtVirtualQButtonGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QButtonGroup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QButtonGroup_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QButtonGroup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QButtonGroup::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QButtonGroup_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QButtonGroup::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QButtonGroup::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QButtonGroup_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QButtonGroup::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QButtonGroup::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QButtonGroup_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QButtonGroup::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QButtonGroup::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QButtonGroup_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QButtonGroup::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QButtonGroup::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QButtonGroup_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QButtonGroup::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QButtonGroup::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QButtonGroup_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QButtonGroup::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QButtonGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QButtonGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QButtonGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QButtonGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QButtonGroup* QButtonGroup_new() {
	return new MiqtVirtualQButtonGroup();
}

QButtonGroup* QButtonGroup_new2(QObject* parent) {
	return new MiqtVirtualQButtonGroup(parent);
}

void QButtonGroup_virtbase(QButtonGroup* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QButtonGroup_metaObject(const QButtonGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QButtonGroup_metacast(QButtonGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QButtonGroup_tr(const char* s) {
	QString _ret = QButtonGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QButtonGroup_trUtf8(const char* s) {
	QString _ret = QButtonGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QButtonGroup_setExclusive(QButtonGroup* self, bool exclusive) {
	self->setExclusive(exclusive);
}

bool QButtonGroup_exclusive(const QButtonGroup* self) {
	return self->exclusive();
}

void QButtonGroup_addButton(QButtonGroup* self, QAbstractButton* param1) {
	self->addButton(param1);
}

void QButtonGroup_removeButton(QButtonGroup* self, QAbstractButton* param1) {
	self->removeButton(param1);
}

struct miqt_array /* of QAbstractButton* */  QButtonGroup_buttons(const QButtonGroup* self) {
	QList<QAbstractButton *> _ret = self->buttons();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAbstractButton* QButtonGroup_checkedButton(const QButtonGroup* self) {
	return self->checkedButton();
}

QAbstractButton* QButtonGroup_button(const QButtonGroup* self, int id) {
	return self->button(static_cast<int>(id));
}

void QButtonGroup_setId(QButtonGroup* self, QAbstractButton* button, int id) {
	self->setId(button, static_cast<int>(id));
}

int QButtonGroup_id(const QButtonGroup* self, QAbstractButton* button) {
	return self->id(button);
}

int QButtonGroup_checkedId(const QButtonGroup* self) {
	return self->checkedId();
}

void QButtonGroup_buttonClicked(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonClicked(param1);
}

void QButtonGroup_connect_buttonClicked(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonClicked), self, [=](QAbstractButton* param1) {
		QAbstractButton* sigval1 = param1;
		miqt_exec_callback_QButtonGroup_buttonClicked(slot, sigval1);
	});
}

void QButtonGroup_buttonPressed(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonPressed(param1);
}

void QButtonGroup_connect_buttonPressed(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonPressed), self, [=](QAbstractButton* param1) {
		QAbstractButton* sigval1 = param1;
		miqt_exec_callback_QButtonGroup_buttonPressed(slot, sigval1);
	});
}

void QButtonGroup_buttonReleased(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonReleased(param1);
}

void QButtonGroup_connect_buttonReleased(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonReleased), self, [=](QAbstractButton* param1) {
		QAbstractButton* sigval1 = param1;
		miqt_exec_callback_QButtonGroup_buttonReleased(slot, sigval1);
	});
}

void QButtonGroup_buttonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2) {
	self->buttonToggled(param1, param2);
}

void QButtonGroup_connect_buttonToggled(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*, bool)>(&QButtonGroup::buttonToggled), self, [=](QAbstractButton* param1, bool param2) {
		QAbstractButton* sigval1 = param1;
		bool sigval2 = param2;
		miqt_exec_callback_QButtonGroup_buttonToggled(slot, sigval1, sigval2);
	});
}

void QButtonGroup_idClicked(QButtonGroup* self, int param1) {
	self->idClicked(static_cast<int>(param1));
}

void QButtonGroup_connect_idClicked(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idClicked), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_idClicked(slot, sigval1);
	});
}

void QButtonGroup_idPressed(QButtonGroup* self, int param1) {
	self->idPressed(static_cast<int>(param1));
}

void QButtonGroup_connect_idPressed(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idPressed), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_idPressed(slot, sigval1);
	});
}

void QButtonGroup_idReleased(QButtonGroup* self, int param1) {
	self->idReleased(static_cast<int>(param1));
}

void QButtonGroup_connect_idReleased(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idReleased), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_idReleased(slot, sigval1);
	});
}

void QButtonGroup_idToggled(QButtonGroup* self, int param1, bool param2) {
	self->idToggled(static_cast<int>(param1), param2);
}

void QButtonGroup_connect_idToggled(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int, bool)>(&QButtonGroup::idToggled), self, [=](int param1, bool param2) {
		int sigval1 = param1;
		bool sigval2 = param2;
		miqt_exec_callback_QButtonGroup_idToggled(slot, sigval1, sigval2);
	});
}

void QButtonGroup_buttonClickedWithInt(QButtonGroup* self, int param1) {
	self->buttonClicked(static_cast<int>(param1));
}

void QButtonGroup_connect_buttonClickedWithInt(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_buttonClickedWithInt(slot, sigval1);
	});
}

void QButtonGroup_buttonPressedWithInt(QButtonGroup* self, int param1) {
	self->buttonPressed(static_cast<int>(param1));
}

void QButtonGroup_connect_buttonPressedWithInt(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonPressed), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_buttonPressedWithInt(slot, sigval1);
	});
}

void QButtonGroup_buttonReleasedWithInt(QButtonGroup* self, int param1) {
	self->buttonReleased(static_cast<int>(param1));
}

void QButtonGroup_connect_buttonReleasedWithInt(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonReleased), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_buttonReleasedWithInt(slot, sigval1);
	});
}

void QButtonGroup_buttonToggled2(QButtonGroup* self, int param1, bool param2) {
	self->buttonToggled(static_cast<int>(param1), param2);
}

void QButtonGroup_connect_buttonToggled2(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int, bool)>(&QButtonGroup::buttonToggled), self, [=](int param1, bool param2) {
		int sigval1 = param1;
		bool sigval2 = param2;
		miqt_exec_callback_QButtonGroup_buttonToggled2(slot, sigval1, sigval2);
	});
}

struct miqt_string QButtonGroup_tr2(const char* s, const char* c) {
	QString _ret = QButtonGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QButtonGroup_tr3(const char* s, const char* c, int n) {
	QString _ret = QButtonGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QButtonGroup_trUtf82(const char* s, const char* c) {
	QString _ret = QButtonGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QButtonGroup_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QButtonGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QButtonGroup_addButton2(QButtonGroup* self, QAbstractButton* param1, int id) {
	self->addButton(param1, static_cast<int>(id));
}

bool QButtonGroup_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQButtonGroup* self_cast = dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QButtonGroup_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_event(event);
}

bool QButtonGroup_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQButtonGroup* self_cast = dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QButtonGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QButtonGroup_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQButtonGroup* self_cast = dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QButtonGroup_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_timerEvent(event);
}

bool QButtonGroup_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQButtonGroup* self_cast = dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QButtonGroup_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_childEvent(event);
}

bool QButtonGroup_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQButtonGroup* self_cast = dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QButtonGroup_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_customEvent(event);
}

bool QButtonGroup_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQButtonGroup* self_cast = dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QButtonGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_connectNotify(signal);
}

bool QButtonGroup_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQButtonGroup* self_cast = dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QButtonGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QButtonGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQButtonGroup* self_cast = dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QButtonGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQButtonGroup* self_cast = dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QButtonGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQButtonGroup* self_cast = dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QButtonGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQButtonGroup* self_cast = dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QButtonGroup_delete(QButtonGroup* self) {
	delete self;
}

