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
#include "_cgo_export.h"

class MiqtVirtualQButtonGroup : public virtual QButtonGroup {
public:

	MiqtVirtualQButtonGroup(): QButtonGroup() {};
	MiqtVirtualQButtonGroup(QObject* parent): QButtonGroup(parent) {};

	virtual ~MiqtVirtualQButtonGroup() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QButtonGroup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QButtonGroup_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QButtonGroup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QButtonGroup::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QButtonGroup_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QButtonGroup::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QButtonGroup::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QButtonGroup_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QButtonGroup::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QButtonGroup::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QButtonGroup_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QButtonGroup::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QButtonGroup::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QButtonGroup_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QButtonGroup::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QButtonGroup::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QButtonGroup_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QButtonGroup::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QButtonGroup::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QButtonGroup_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QButtonGroup::disconnectNotify(*signal);

	}

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

QMetaObject* QButtonGroup_MetaObject(const QButtonGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QButtonGroup_Metacast(QButtonGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QButtonGroup_Tr(const char* s) {
	QString _ret = QButtonGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QButtonGroup_TrUtf8(const char* s) {
	QString _ret = QButtonGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QButtonGroup_SetExclusive(QButtonGroup* self, bool exclusive) {
	self->setExclusive(exclusive);
}

bool QButtonGroup_Exclusive(const QButtonGroup* self) {
	return self->exclusive();
}

void QButtonGroup_AddButton(QButtonGroup* self, QAbstractButton* param1) {
	self->addButton(param1);
}

void QButtonGroup_RemoveButton(QButtonGroup* self, QAbstractButton* param1) {
	self->removeButton(param1);
}

struct miqt_array /* of QAbstractButton* */  QButtonGroup_Buttons(const QButtonGroup* self) {
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

QAbstractButton* QButtonGroup_CheckedButton(const QButtonGroup* self) {
	return self->checkedButton();
}

QAbstractButton* QButtonGroup_Button(const QButtonGroup* self, int id) {
	return self->button(static_cast<int>(id));
}

void QButtonGroup_SetId(QButtonGroup* self, QAbstractButton* button, int id) {
	self->setId(button, static_cast<int>(id));
}

int QButtonGroup_Id(const QButtonGroup* self, QAbstractButton* button) {
	return self->id(button);
}

int QButtonGroup_CheckedId(const QButtonGroup* self) {
	return self->checkedId();
}

void QButtonGroup_ButtonClicked(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonClicked(param1);
}

void QButtonGroup_connect_ButtonClicked(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonClicked), self, [=](QAbstractButton* param1) {
		QAbstractButton* sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonClicked(slot, sigval1);
	});
}

void QButtonGroup_ButtonPressed(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonPressed(param1);
}

void QButtonGroup_connect_ButtonPressed(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonPressed), self, [=](QAbstractButton* param1) {
		QAbstractButton* sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonPressed(slot, sigval1);
	});
}

void QButtonGroup_ButtonReleased(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonReleased(param1);
}

void QButtonGroup_connect_ButtonReleased(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonReleased), self, [=](QAbstractButton* param1) {
		QAbstractButton* sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonReleased(slot, sigval1);
	});
}

void QButtonGroup_ButtonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2) {
	self->buttonToggled(param1, param2);
}

void QButtonGroup_connect_ButtonToggled(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*, bool)>(&QButtonGroup::buttonToggled), self, [=](QAbstractButton* param1, bool param2) {
		QAbstractButton* sigval1 = param1;
		bool sigval2 = param2;
		miqt_exec_callback_QButtonGroup_ButtonToggled(slot, sigval1, sigval2);
	});
}

void QButtonGroup_IdClicked(QButtonGroup* self, int param1) {
	self->idClicked(static_cast<int>(param1));
}

void QButtonGroup_connect_IdClicked(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idClicked), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_IdClicked(slot, sigval1);
	});
}

void QButtonGroup_IdPressed(QButtonGroup* self, int param1) {
	self->idPressed(static_cast<int>(param1));
}

void QButtonGroup_connect_IdPressed(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idPressed), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_IdPressed(slot, sigval1);
	});
}

void QButtonGroup_IdReleased(QButtonGroup* self, int param1) {
	self->idReleased(static_cast<int>(param1));
}

void QButtonGroup_connect_IdReleased(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idReleased), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_IdReleased(slot, sigval1);
	});
}

void QButtonGroup_IdToggled(QButtonGroup* self, int param1, bool param2) {
	self->idToggled(static_cast<int>(param1), param2);
}

void QButtonGroup_connect_IdToggled(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int, bool)>(&QButtonGroup::idToggled), self, [=](int param1, bool param2) {
		int sigval1 = param1;
		bool sigval2 = param2;
		miqt_exec_callback_QButtonGroup_IdToggled(slot, sigval1, sigval2);
	});
}

void QButtonGroup_ButtonClickedWithInt(QButtonGroup* self, int param1) {
	self->buttonClicked(static_cast<int>(param1));
}

void QButtonGroup_connect_ButtonClickedWithInt(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonClickedWithInt(slot, sigval1);
	});
}

void QButtonGroup_ButtonPressedWithInt(QButtonGroup* self, int param1) {
	self->buttonPressed(static_cast<int>(param1));
}

void QButtonGroup_connect_ButtonPressedWithInt(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonPressed), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonPressedWithInt(slot, sigval1);
	});
}

void QButtonGroup_ButtonReleasedWithInt(QButtonGroup* self, int param1) {
	self->buttonReleased(static_cast<int>(param1));
}

void QButtonGroup_connect_ButtonReleasedWithInt(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonReleased), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonReleasedWithInt(slot, sigval1);
	});
}

void QButtonGroup_ButtonToggled2(QButtonGroup* self, int param1, bool param2) {
	self->buttonToggled(static_cast<int>(param1), param2);
}

void QButtonGroup_connect_ButtonToggled2(QButtonGroup* self, intptr_t slot) {
	MiqtVirtualQButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int, bool)>(&QButtonGroup::buttonToggled), self, [=](int param1, bool param2) {
		int sigval1 = param1;
		bool sigval2 = param2;
		miqt_exec_callback_QButtonGroup_ButtonToggled2(slot, sigval1, sigval2);
	});
}

struct miqt_string QButtonGroup_Tr2(const char* s, const char* c) {
	QString _ret = QButtonGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QButtonGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QButtonGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QButtonGroup_TrUtf82(const char* s, const char* c) {
	QString _ret = QButtonGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QButtonGroup_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QButtonGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QButtonGroup_AddButton2(QButtonGroup* self, QAbstractButton* param1, int id) {
	self->addButton(param1, static_cast<int>(id));
}

void QButtonGroup_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) )->handle__Event = slot;
}

bool QButtonGroup_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_Event(event);
}

void QButtonGroup_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) )->handle__EventFilter = slot;
}

bool QButtonGroup_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_EventFilter(watched, event);
}

void QButtonGroup_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) )->handle__TimerEvent = slot;
}

void QButtonGroup_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_TimerEvent(event);
}

void QButtonGroup_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) )->handle__ChildEvent = slot;
}

void QButtonGroup_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_ChildEvent(event);
}

void QButtonGroup_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) )->handle__CustomEvent = slot;
}

void QButtonGroup_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_CustomEvent(event);
}

void QButtonGroup_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) )->handle__ConnectNotify = slot;
}

void QButtonGroup_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_ConnectNotify(signal);
}

void QButtonGroup_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQButtonGroup*>( (QButtonGroup*)(self) )->handle__DisconnectNotify = slot;
}

void QButtonGroup_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQButtonGroup*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QButtonGroup_Delete(QButtonGroup* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQButtonGroup*>( self );
	} else {
		delete self;
	}
}

