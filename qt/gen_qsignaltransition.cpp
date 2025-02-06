#include <QAbstractTransition>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSignalTransition>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsignaltransition.h>
#include "gen_qsignaltransition.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QSignalTransition_eventTest(QSignalTransition*, intptr_t, QEvent*);
void miqt_exec_callback_QSignalTransition_onTransition(QSignalTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QSignalTransition_event(QSignalTransition*, intptr_t, QEvent*);
bool miqt_exec_callback_QSignalTransition_eventFilter(QSignalTransition*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSignalTransition_timerEvent(QSignalTransition*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSignalTransition_childEvent(QSignalTransition*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSignalTransition_customEvent(QSignalTransition*, intptr_t, QEvent*);
void miqt_exec_callback_QSignalTransition_connectNotify(QSignalTransition*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSignalTransition_disconnectNotify(QSignalTransition*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSignalTransition final : public QSignalTransition {
public:

	MiqtVirtualQSignalTransition(): QSignalTransition() {};
	MiqtVirtualQSignalTransition(const QObject* sender, const char* signal): QSignalTransition(sender, signal) {};
	MiqtVirtualQSignalTransition(QState* sourceState): QSignalTransition(sourceState) {};
	MiqtVirtualQSignalTransition(const QObject* sender, const char* signal, QState* sourceState): QSignalTransition(sender, signal, sourceState) {};

	virtual ~MiqtVirtualQSignalTransition() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventTest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventTest(QEvent* event) override {
		if (handle__eventTest == 0) {
			return QSignalTransition::eventTest(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSignalTransition_eventTest(this, handle__eventTest, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventTest(QEvent* event) {

		return QSignalTransition::eventTest(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__onTransition = 0;

	// Subclass to allow providing a Go implementation
	virtual void onTransition(QEvent* event) override {
		if (handle__onTransition == 0) {
			QSignalTransition::onTransition(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSignalTransition_onTransition(this, handle__onTransition, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_onTransition(QEvent* event) {

		QSignalTransition::onTransition(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QSignalTransition::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QSignalTransition_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QSignalTransition::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSignalTransition::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSignalTransition_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSignalTransition::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSignalTransition::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSignalTransition_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSignalTransition::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSignalTransition::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSignalTransition_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSignalTransition::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSignalTransition::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSignalTransition_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSignalTransition::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSignalTransition::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSignalTransition_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSignalTransition::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSignalTransition::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSignalTransition_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSignalTransition::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QSignalTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSignalTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSignalTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSignalTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSignalTransition* QSignalTransition_new() {
	return new MiqtVirtualQSignalTransition();
}

QSignalTransition* QSignalTransition_new2(QObject* sender, const char* signal) {
	return new MiqtVirtualQSignalTransition(sender, signal);
}

QSignalTransition* QSignalTransition_new3(QState* sourceState) {
	return new MiqtVirtualQSignalTransition(sourceState);
}

QSignalTransition* QSignalTransition_new4(QObject* sender, const char* signal, QState* sourceState) {
	return new MiqtVirtualQSignalTransition(sender, signal, sourceState);
}

void QSignalTransition_virtbase(QSignalTransition* src, QAbstractTransition** outptr_QAbstractTransition) {
	*outptr_QAbstractTransition = static_cast<QAbstractTransition*>(src);
}

QMetaObject* QSignalTransition_metaObject(const QSignalTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSignalTransition_metacast(QSignalTransition* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSignalTransition_tr(const char* s) {
	QString _ret = QSignalTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSignalTransition_trUtf8(const char* s) {
	QString _ret = QSignalTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QSignalTransition_senderObject(const QSignalTransition* self) {
	return self->senderObject();
}

void QSignalTransition_setSenderObject(QSignalTransition* self, QObject* sender) {
	self->setSenderObject(sender);
}

struct miqt_string QSignalTransition_signal(const QSignalTransition* self) {
	QByteArray _qb = self->signal();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QSignalTransition_setSignal(QSignalTransition* self, struct miqt_string signal) {
	QByteArray signal_QByteArray(signal.data, signal.len);
	self->setSignal(signal_QByteArray);
}

struct miqt_string QSignalTransition_tr2(const char* s, const char* c) {
	QString _ret = QSignalTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSignalTransition_tr3(const char* s, const char* c, int n) {
	QString _ret = QSignalTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSignalTransition_trUtf82(const char* s, const char* c) {
	QString _ret = QSignalTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSignalTransition_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSignalTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSignalTransition_override_virtual_eventTest(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventTest = slot;
	return true;
}

bool QSignalTransition_virtualbase_eventTest(void* self, QEvent* event) {
	return ( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_eventTest(event);
}

bool QSignalTransition_override_virtual_onTransition(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__onTransition = slot;
	return true;
}

void QSignalTransition_virtualbase_onTransition(void* self, QEvent* event) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_onTransition(event);
}

bool QSignalTransition_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSignalTransition_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_event(e);
}

bool QSignalTransition_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSignalTransition_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSignalTransition_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSignalTransition_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_timerEvent(event);
}

bool QSignalTransition_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSignalTransition_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_childEvent(event);
}

bool QSignalTransition_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSignalTransition_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_customEvent(event);
}

bool QSignalTransition_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSignalTransition_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_connectNotify(signal);
}

bool QSignalTransition_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSignalTransition_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSignalTransition*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QSignalTransition_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSignalTransition_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSignalTransition_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSignalTransition_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSignalTransition* self_cast = dynamic_cast<MiqtVirtualQSignalTransition*>( (QSignalTransition*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSignalTransition_delete(QSignalTransition* self) {
	delete self;
}

