#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QEventTransition>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEventTransition>
#include <QObject>
#include <QPainterPath>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qmouseeventtransition.h>
#include "gen_qmouseeventtransition.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMouseEventTransition_OnTransition(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QMouseEventTransition_EventTest(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QMouseEventTransition_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QMouseEventTransition_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMouseEventTransition_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMouseEventTransition_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMouseEventTransition_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMouseEventTransition_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMouseEventTransition_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMouseEventTransition final : public QMouseEventTransition {
public:

	MiqtVirtualQMouseEventTransition(): QMouseEventTransition() {};
	MiqtVirtualQMouseEventTransition(QObject* object, QEvent::Type typeVal, Qt::MouseButton button): QMouseEventTransition(object, typeVal, button) {};
	MiqtVirtualQMouseEventTransition(QState* sourceState): QMouseEventTransition(sourceState) {};
	MiqtVirtualQMouseEventTransition(QObject* object, QEvent::Type typeVal, Qt::MouseButton button, QState* sourceState): QMouseEventTransition(object, typeVal, button, sourceState) {};

	virtual ~MiqtVirtualQMouseEventTransition() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnTransition = 0;

	// Subclass to allow providing a Go implementation
	virtual void onTransition(QEvent* event) override {
		if (handle__OnTransition == 0) {
			QMouseEventTransition::onTransition(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMouseEventTransition_OnTransition(this, handle__OnTransition, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnTransition(QEvent* event) {

		QMouseEventTransition::onTransition(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventTest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventTest(QEvent* event) override {
		if (handle__EventTest == 0) {
			return QMouseEventTransition::eventTest(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMouseEventTransition_EventTest(this, handle__EventTest, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventTest(QEvent* event) {

		return QMouseEventTransition::eventTest(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QMouseEventTransition::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QMouseEventTransition_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QMouseEventTransition::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMouseEventTransition::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMouseEventTransition_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QMouseEventTransition::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QMouseEventTransition::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMouseEventTransition_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QMouseEventTransition::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMouseEventTransition::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMouseEventTransition_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMouseEventTransition::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMouseEventTransition::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMouseEventTransition_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMouseEventTransition::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMouseEventTransition::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMouseEventTransition_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMouseEventTransition::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMouseEventTransition::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMouseEventTransition_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMouseEventTransition::disconnectNotify(*signal);

	}

};

QMouseEventTransition* QMouseEventTransition_new() {
	return new MiqtVirtualQMouseEventTransition();
}

QMouseEventTransition* QMouseEventTransition_new2(QObject* object, int typeVal, int button) {
	return new MiqtVirtualQMouseEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<Qt::MouseButton>(button));
}

QMouseEventTransition* QMouseEventTransition_new3(QState* sourceState) {
	return new MiqtVirtualQMouseEventTransition(sourceState);
}

QMouseEventTransition* QMouseEventTransition_new4(QObject* object, int typeVal, int button, QState* sourceState) {
	return new MiqtVirtualQMouseEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<Qt::MouseButton>(button), sourceState);
}

void QMouseEventTransition_virtbase(QMouseEventTransition* src, QEventTransition** outptr_QEventTransition) {
	*outptr_QEventTransition = static_cast<QEventTransition*>(src);
}

QMetaObject* QMouseEventTransition_MetaObject(const QMouseEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMouseEventTransition_Metacast(QMouseEventTransition* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMouseEventTransition_Tr(const char* s) {
	QString _ret = QMouseEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMouseEventTransition_TrUtf8(const char* s) {
	QString _ret = QMouseEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMouseEventTransition_Button(const QMouseEventTransition* self) {
	Qt::MouseButton _ret = self->button();
	return static_cast<int>(_ret);
}

void QMouseEventTransition_SetButton(QMouseEventTransition* self, int button) {
	self->setButton(static_cast<Qt::MouseButton>(button));
}

int QMouseEventTransition_ModifierMask(const QMouseEventTransition* self) {
	Qt::KeyboardModifiers _ret = self->modifierMask();
	return static_cast<int>(_ret);
}

void QMouseEventTransition_SetModifierMask(QMouseEventTransition* self, int modifiers) {
	self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

QPainterPath* QMouseEventTransition_HitTestPath(const QMouseEventTransition* self) {
	return new QPainterPath(self->hitTestPath());
}

void QMouseEventTransition_SetHitTestPath(QMouseEventTransition* self, QPainterPath* path) {
	self->setHitTestPath(*path);
}

struct miqt_string QMouseEventTransition_Tr2(const char* s, const char* c) {
	QString _ret = QMouseEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMouseEventTransition_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMouseEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMouseEventTransition_TrUtf82(const char* s, const char* c) {
	QString _ret = QMouseEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMouseEventTransition_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMouseEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMouseEventTransition_override_virtual_OnTransition(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OnTransition = slot;
	return true;
}

void QMouseEventTransition_virtualbase_OnTransition(void* self, QEvent* event) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_OnTransition(event);
}

bool QMouseEventTransition_override_virtual_EventTest(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventTest = slot;
	return true;
}

bool QMouseEventTransition_virtualbase_EventTest(void* self, QEvent* event) {
	return ( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_EventTest(event);
}

bool QMouseEventTransition_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QMouseEventTransition_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_Event(e);
}

bool QMouseEventTransition_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QMouseEventTransition_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QMouseEventTransition_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QMouseEventTransition_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_TimerEvent(event);
}

bool QMouseEventTransition_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QMouseEventTransition_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_ChildEvent(event);
}

bool QMouseEventTransition_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QMouseEventTransition_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_CustomEvent(event);
}

bool QMouseEventTransition_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QMouseEventTransition_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QMouseEventTransition_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QMouseEventTransition_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMouseEventTransition_Delete(QMouseEventTransition* self) {
	delete self;
}

