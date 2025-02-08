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

void miqt_exec_callback_QMouseEventTransition_onTransition(QMouseEventTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QMouseEventTransition_eventTest(QMouseEventTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QMouseEventTransition_event(QMouseEventTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QMouseEventTransition_eventFilter(QMouseEventTransition*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMouseEventTransition_timerEvent(QMouseEventTransition*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMouseEventTransition_childEvent(QMouseEventTransition*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMouseEventTransition_customEvent(QMouseEventTransition*, intptr_t, QEvent*);
void miqt_exec_callback_QMouseEventTransition_connectNotify(QMouseEventTransition*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMouseEventTransition_disconnectNotify(QMouseEventTransition*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMouseEventTransition final : public QMouseEventTransition {
public:

	MiqtVirtualQMouseEventTransition(): QMouseEventTransition() {};
	MiqtVirtualQMouseEventTransition(QObject* object, QEvent::Type type, Qt::MouseButton button): QMouseEventTransition(object, type, button) {};
	MiqtVirtualQMouseEventTransition(QState* sourceState): QMouseEventTransition(sourceState) {};
	MiqtVirtualQMouseEventTransition(QObject* object, QEvent::Type type, Qt::MouseButton button, QState* sourceState): QMouseEventTransition(object, type, button, sourceState) {};

	virtual ~MiqtVirtualQMouseEventTransition() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onTransition = 0;

	// Subclass to allow providing a Go implementation
	virtual void onTransition(QEvent* event) override {
		if (handle__onTransition == 0) {
			QMouseEventTransition::onTransition(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMouseEventTransition_onTransition(this, handle__onTransition, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onTransition(QEvent* event) {

		QMouseEventTransition::onTransition(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventTest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventTest(QEvent* event) override {
		if (handle__eventTest == 0) {
			return QMouseEventTransition::eventTest(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMouseEventTransition_eventTest(this, handle__eventTest, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventTest(QEvent* event) {

		return QMouseEventTransition::eventTest(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QMouseEventTransition::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QMouseEventTransition_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QMouseEventTransition::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMouseEventTransition::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMouseEventTransition_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QMouseEventTransition::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QMouseEventTransition::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMouseEventTransition_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QMouseEventTransition::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMouseEventTransition::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMouseEventTransition_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QMouseEventTransition::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMouseEventTransition::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMouseEventTransition_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QMouseEventTransition::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMouseEventTransition::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMouseEventTransition_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QMouseEventTransition::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMouseEventTransition::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMouseEventTransition_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QMouseEventTransition::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QMouseEventTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMouseEventTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMouseEventTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMouseEventTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMouseEventTransition* QMouseEventTransition_new() {
	return new MiqtVirtualQMouseEventTransition();
}

QMouseEventTransition* QMouseEventTransition_new2(QObject* object, int type, int button) {
	return new MiqtVirtualQMouseEventTransition(object, static_cast<QEvent::Type>(type), static_cast<Qt::MouseButton>(button));
}

QMouseEventTransition* QMouseEventTransition_new3(QState* sourceState) {
	return new MiqtVirtualQMouseEventTransition(sourceState);
}

QMouseEventTransition* QMouseEventTransition_new4(QObject* object, int type, int button, QState* sourceState) {
	return new MiqtVirtualQMouseEventTransition(object, static_cast<QEvent::Type>(type), static_cast<Qt::MouseButton>(button), sourceState);
}

void QMouseEventTransition_virtbase(QMouseEventTransition* src, QEventTransition** outptr_QEventTransition) {
	*outptr_QEventTransition = static_cast<QEventTransition*>(src);
}

QMetaObject* QMouseEventTransition_metaObject(const QMouseEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMouseEventTransition_metacast(QMouseEventTransition* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMouseEventTransition_tr(const char* s) {
	QString _ret = QMouseEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMouseEventTransition_trUtf8(const char* s) {
	QString _ret = QMouseEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMouseEventTransition_button(const QMouseEventTransition* self) {
	Qt::MouseButton _ret = self->button();
	return static_cast<int>(_ret);
}

void QMouseEventTransition_setButton(QMouseEventTransition* self, int button) {
	self->setButton(static_cast<Qt::MouseButton>(button));
}

int QMouseEventTransition_modifierMask(const QMouseEventTransition* self) {
	Qt::KeyboardModifiers _ret = self->modifierMask();
	return static_cast<int>(_ret);
}

void QMouseEventTransition_setModifierMask(QMouseEventTransition* self, int modifiers) {
	self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

QPainterPath* QMouseEventTransition_hitTestPath(const QMouseEventTransition* self) {
	return new QPainterPath(self->hitTestPath());
}

void QMouseEventTransition_setHitTestPath(QMouseEventTransition* self, QPainterPath* path) {
	self->setHitTestPath(*path);
}

struct miqt_string QMouseEventTransition_tr2(const char* s, const char* c) {
	QString _ret = QMouseEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMouseEventTransition_tr3(const char* s, const char* c, int n) {
	QString _ret = QMouseEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMouseEventTransition_trUtf82(const char* s, const char* c) {
	QString _ret = QMouseEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMouseEventTransition_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMouseEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMouseEventTransition_override_virtual_onTransition(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onTransition = slot;
	return true;
}

void QMouseEventTransition_virtualbase_onTransition(void* self, QEvent* event) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_onTransition(event);
}

bool QMouseEventTransition_override_virtual_eventTest(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventTest = slot;
	return true;
}

bool QMouseEventTransition_virtualbase_eventTest(void* self, QEvent* event) {
	return ( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_eventTest(event);
}

bool QMouseEventTransition_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QMouseEventTransition_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_event(e);
}

bool QMouseEventTransition_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMouseEventTransition_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QMouseEventTransition_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QMouseEventTransition_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_timerEvent(event);
}

bool QMouseEventTransition_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QMouseEventTransition_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_childEvent(event);
}

bool QMouseEventTransition_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QMouseEventTransition_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_customEvent(event);
}

bool QMouseEventTransition_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QMouseEventTransition_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_connectNotify(signal);
}

bool QMouseEventTransition_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMouseEventTransition_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMouseEventTransition*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QMouseEventTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QMouseEventTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QMouseEventTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QMouseEventTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMouseEventTransition* self_cast = dynamic_cast<MiqtVirtualQMouseEventTransition*>( (QMouseEventTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QMouseEventTransition_delete(QMouseEventTransition* self) {
	delete self;
}

