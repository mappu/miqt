#include <QChildEvent>
#include <QEvent>
#include <QGesture>
#include <QGestureEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPanGesture>
#include <QPinchGesture>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSwipeGesture>
#include <QTapAndHoldGesture>
#include <QTapGesture>
#include <QTimerEvent>
#include <QWidget>
#include <qgesture.h>
#include "gen_qgesture.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QGesture_event(QGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QGesture_eventFilter(QGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGesture_timerEvent(QGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGesture_childEvent(QGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGesture_customEvent(QGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QGesture_connectNotify(QGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGesture_disconnectNotify(QGesture*, intptr_t, QMetaMethod*);
bool miqt_exec_callback_QPanGesture_event(QPanGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QPanGesture_eventFilter(QPanGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPanGesture_timerEvent(QPanGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPanGesture_childEvent(QPanGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPanGesture_customEvent(QPanGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QPanGesture_connectNotify(QPanGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPanGesture_disconnectNotify(QPanGesture*, intptr_t, QMetaMethod*);
bool miqt_exec_callback_QPinchGesture_event(QPinchGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QPinchGesture_eventFilter(QPinchGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPinchGesture_timerEvent(QPinchGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPinchGesture_childEvent(QPinchGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPinchGesture_customEvent(QPinchGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QPinchGesture_connectNotify(QPinchGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPinchGesture_disconnectNotify(QPinchGesture*, intptr_t, QMetaMethod*);
bool miqt_exec_callback_QSwipeGesture_event(QSwipeGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QSwipeGesture_eventFilter(QSwipeGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSwipeGesture_timerEvent(QSwipeGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSwipeGesture_childEvent(QSwipeGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSwipeGesture_customEvent(QSwipeGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QSwipeGesture_connectNotify(QSwipeGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSwipeGesture_disconnectNotify(QSwipeGesture*, intptr_t, QMetaMethod*);
bool miqt_exec_callback_QTapGesture_event(QTapGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QTapGesture_eventFilter(QTapGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTapGesture_timerEvent(QTapGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTapGesture_childEvent(QTapGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTapGesture_customEvent(QTapGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QTapGesture_connectNotify(QTapGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTapGesture_disconnectNotify(QTapGesture*, intptr_t, QMetaMethod*);
bool miqt_exec_callback_QTapAndHoldGesture_event(QTapAndHoldGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QTapAndHoldGesture_eventFilter(QTapAndHoldGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTapAndHoldGesture_timerEvent(QTapAndHoldGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTapAndHoldGesture_childEvent(QTapAndHoldGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTapAndHoldGesture_customEvent(QTapAndHoldGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QTapAndHoldGesture_connectNotify(QTapAndHoldGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTapAndHoldGesture_disconnectNotify(QTapAndHoldGesture*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGesture final : public QGesture {
public:

	MiqtVirtualQGesture(): QGesture() {};
	MiqtVirtualQGesture(QObject* parent): QGesture(parent) {};

	virtual ~MiqtVirtualQGesture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGesture::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGesture_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QGesture::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGesture::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGesture_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGesture::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGesture::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGesture_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGesture::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGesture::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGesture_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGesture::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGesture::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGesture_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGesture::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGesture::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGesture_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGesture::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGesture::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGesture_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGesture::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGesture* QGesture_new() {
	return new MiqtVirtualQGesture();
}

QGesture* QGesture_new2(QObject* parent) {
	return new MiqtVirtualQGesture(parent);
}

void QGesture_virtbase(QGesture* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGesture_metaObject(const QGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGesture_metacast(QGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGesture_tr(const char* s) {
	QString _ret = QGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGesture_trUtf8(const char* s) {
	QString _ret = QGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QGesture_gestureType(const QGesture* self) {
	Qt::GestureType _ret = self->gestureType();
	return static_cast<int>(_ret);
}

int QGesture_state(const QGesture* self) {
	Qt::GestureState _ret = self->state();
	return static_cast<int>(_ret);
}

QPointF* QGesture_hotSpot(const QGesture* self) {
	return new QPointF(self->hotSpot());
}

void QGesture_setHotSpot(QGesture* self, QPointF* value) {
	self->setHotSpot(*value);
}

bool QGesture_hasHotSpot(const QGesture* self) {
	return self->hasHotSpot();
}

void QGesture_unsetHotSpot(QGesture* self) {
	self->unsetHotSpot();
}

void QGesture_setGestureCancelPolicy(QGesture* self, int policy) {
	self->setGestureCancelPolicy(static_cast<QGesture::GestureCancelPolicy>(policy));
}

int QGesture_gestureCancelPolicy(const QGesture* self) {
	QGesture::GestureCancelPolicy _ret = self->gestureCancelPolicy();
	return static_cast<int>(_ret);
}

struct miqt_string QGesture_tr2(const char* s, const char* c) {
	QString _ret = QGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGesture_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGesture_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGesture*)(self) )->virtualbase_event(event);
}

bool QGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGesture*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGesture*)(self) )->virtualbase_timerEvent(event);
}

bool QGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGesture*)(self) )->virtualbase_childEvent(event);
}

bool QGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGesture_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGesture*)(self) )->virtualbase_customEvent(event);
}

bool QGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGesture*)(self) )->virtualbase_connectNotify(signal);
}

bool QGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGesture*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGesture_delete(QGesture* self) {
	delete self;
}

class MiqtVirtualQPanGesture final : public QPanGesture {
public:

	MiqtVirtualQPanGesture(): QPanGesture() {};
	MiqtVirtualQPanGesture(QObject* parent): QPanGesture(parent) {};

	virtual ~MiqtVirtualQPanGesture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPanGesture::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPanGesture_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QPanGesture::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPanGesture::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPanGesture_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QPanGesture::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPanGesture::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPanGesture_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPanGesture::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPanGesture::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPanGesture_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPanGesture::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPanGesture::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPanGesture_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPanGesture::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPanGesture::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPanGesture_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPanGesture::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPanGesture::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPanGesture_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPanGesture::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QPanGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPanGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPanGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPanGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPanGesture* QPanGesture_new() {
	return new MiqtVirtualQPanGesture();
}

QPanGesture* QPanGesture_new2(QObject* parent) {
	return new MiqtVirtualQPanGesture(parent);
}

void QPanGesture_virtbase(QPanGesture* src, QGesture** outptr_QGesture) {
	*outptr_QGesture = static_cast<QGesture*>(src);
}

QMetaObject* QPanGesture_metaObject(const QPanGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPanGesture_metacast(QPanGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPanGesture_tr(const char* s) {
	QString _ret = QPanGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPanGesture_trUtf8(const char* s) {
	QString _ret = QPanGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointF* QPanGesture_lastOffset(const QPanGesture* self) {
	return new QPointF(self->lastOffset());
}

QPointF* QPanGesture_offset(const QPanGesture* self) {
	return new QPointF(self->offset());
}

QPointF* QPanGesture_delta(const QPanGesture* self) {
	return new QPointF(self->delta());
}

double QPanGesture_acceleration(const QPanGesture* self) {
	qreal _ret = self->acceleration();
	return static_cast<double>(_ret);
}

void QPanGesture_setLastOffset(QPanGesture* self, QPointF* value) {
	self->setLastOffset(*value);
}

void QPanGesture_setOffset(QPanGesture* self, QPointF* value) {
	self->setOffset(*value);
}

void QPanGesture_setAcceleration(QPanGesture* self, double value) {
	self->setAcceleration(static_cast<qreal>(value));
}

struct miqt_string QPanGesture_tr2(const char* s, const char* c) {
	QString _ret = QPanGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPanGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QPanGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPanGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QPanGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPanGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPanGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPanGesture_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPanGesture_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPanGesture*)(self) )->virtualbase_event(event);
}

bool QPanGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPanGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPanGesture*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QPanGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPanGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPanGesture*)(self) )->virtualbase_timerEvent(event);
}

bool QPanGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPanGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPanGesture*)(self) )->virtualbase_childEvent(event);
}

bool QPanGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPanGesture_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPanGesture*)(self) )->virtualbase_customEvent(event);
}

bool QPanGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPanGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPanGesture*)(self) )->virtualbase_connectNotify(signal);
}

bool QPanGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPanGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPanGesture*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QPanGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPanGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPanGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPanGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPanGesture_delete(QPanGesture* self) {
	delete self;
}

class MiqtVirtualQPinchGesture final : public QPinchGesture {
public:

	MiqtVirtualQPinchGesture(): QPinchGesture() {};
	MiqtVirtualQPinchGesture(QObject* parent): QPinchGesture(parent) {};

	virtual ~MiqtVirtualQPinchGesture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPinchGesture::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPinchGesture_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QPinchGesture::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPinchGesture::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPinchGesture_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QPinchGesture::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPinchGesture::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPinchGesture_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPinchGesture::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPinchGesture::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPinchGesture_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPinchGesture::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPinchGesture::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPinchGesture_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPinchGesture::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPinchGesture::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPinchGesture_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPinchGesture::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPinchGesture::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPinchGesture_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPinchGesture::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QPinchGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPinchGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPinchGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPinchGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPinchGesture* QPinchGesture_new() {
	return new MiqtVirtualQPinchGesture();
}

QPinchGesture* QPinchGesture_new2(QObject* parent) {
	return new MiqtVirtualQPinchGesture(parent);
}

void QPinchGesture_virtbase(QPinchGesture* src, QGesture** outptr_QGesture) {
	*outptr_QGesture = static_cast<QGesture*>(src);
}

QMetaObject* QPinchGesture_metaObject(const QPinchGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPinchGesture_metacast(QPinchGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPinchGesture_tr(const char* s) {
	QString _ret = QPinchGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPinchGesture_trUtf8(const char* s) {
	QString _ret = QPinchGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPinchGesture_totalChangeFlags(const QPinchGesture* self) {
	QPinchGesture::ChangeFlags _ret = self->totalChangeFlags();
	return static_cast<int>(_ret);
}

void QPinchGesture_setTotalChangeFlags(QPinchGesture* self, int value) {
	self->setTotalChangeFlags(static_cast<QPinchGesture::ChangeFlags>(value));
}

int QPinchGesture_changeFlags(const QPinchGesture* self) {
	QPinchGesture::ChangeFlags _ret = self->changeFlags();
	return static_cast<int>(_ret);
}

void QPinchGesture_setChangeFlags(QPinchGesture* self, int value) {
	self->setChangeFlags(static_cast<QPinchGesture::ChangeFlags>(value));
}

QPointF* QPinchGesture_startCenterPoint(const QPinchGesture* self) {
	return new QPointF(self->startCenterPoint());
}

QPointF* QPinchGesture_lastCenterPoint(const QPinchGesture* self) {
	return new QPointF(self->lastCenterPoint());
}

QPointF* QPinchGesture_centerPoint(const QPinchGesture* self) {
	return new QPointF(self->centerPoint());
}

void QPinchGesture_setStartCenterPoint(QPinchGesture* self, QPointF* value) {
	self->setStartCenterPoint(*value);
}

void QPinchGesture_setLastCenterPoint(QPinchGesture* self, QPointF* value) {
	self->setLastCenterPoint(*value);
}

void QPinchGesture_setCenterPoint(QPinchGesture* self, QPointF* value) {
	self->setCenterPoint(*value);
}

double QPinchGesture_totalScaleFactor(const QPinchGesture* self) {
	qreal _ret = self->totalScaleFactor();
	return static_cast<double>(_ret);
}

double QPinchGesture_lastScaleFactor(const QPinchGesture* self) {
	qreal _ret = self->lastScaleFactor();
	return static_cast<double>(_ret);
}

double QPinchGesture_scaleFactor(const QPinchGesture* self) {
	qreal _ret = self->scaleFactor();
	return static_cast<double>(_ret);
}

void QPinchGesture_setTotalScaleFactor(QPinchGesture* self, double value) {
	self->setTotalScaleFactor(static_cast<qreal>(value));
}

void QPinchGesture_setLastScaleFactor(QPinchGesture* self, double value) {
	self->setLastScaleFactor(static_cast<qreal>(value));
}

void QPinchGesture_setScaleFactor(QPinchGesture* self, double value) {
	self->setScaleFactor(static_cast<qreal>(value));
}

double QPinchGesture_totalRotationAngle(const QPinchGesture* self) {
	qreal _ret = self->totalRotationAngle();
	return static_cast<double>(_ret);
}

double QPinchGesture_lastRotationAngle(const QPinchGesture* self) {
	qreal _ret = self->lastRotationAngle();
	return static_cast<double>(_ret);
}

double QPinchGesture_rotationAngle(const QPinchGesture* self) {
	qreal _ret = self->rotationAngle();
	return static_cast<double>(_ret);
}

void QPinchGesture_setTotalRotationAngle(QPinchGesture* self, double value) {
	self->setTotalRotationAngle(static_cast<qreal>(value));
}

void QPinchGesture_setLastRotationAngle(QPinchGesture* self, double value) {
	self->setLastRotationAngle(static_cast<qreal>(value));
}

void QPinchGesture_setRotationAngle(QPinchGesture* self, double value) {
	self->setRotationAngle(static_cast<qreal>(value));
}

struct miqt_string QPinchGesture_tr2(const char* s, const char* c) {
	QString _ret = QPinchGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPinchGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QPinchGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPinchGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QPinchGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPinchGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPinchGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPinchGesture_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPinchGesture_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPinchGesture*)(self) )->virtualbase_event(event);
}

bool QPinchGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPinchGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPinchGesture*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QPinchGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPinchGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPinchGesture*)(self) )->virtualbase_timerEvent(event);
}

bool QPinchGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPinchGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPinchGesture*)(self) )->virtualbase_childEvent(event);
}

bool QPinchGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPinchGesture_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPinchGesture*)(self) )->virtualbase_customEvent(event);
}

bool QPinchGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPinchGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPinchGesture*)(self) )->virtualbase_connectNotify(signal);
}

bool QPinchGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPinchGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPinchGesture*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QPinchGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPinchGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPinchGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPinchGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPinchGesture_delete(QPinchGesture* self) {
	delete self;
}

class MiqtVirtualQSwipeGesture final : public QSwipeGesture {
public:

	MiqtVirtualQSwipeGesture(): QSwipeGesture() {};
	MiqtVirtualQSwipeGesture(QObject* parent): QSwipeGesture(parent) {};

	virtual ~MiqtVirtualQSwipeGesture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSwipeGesture::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSwipeGesture_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSwipeGesture::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSwipeGesture::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSwipeGesture_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSwipeGesture::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSwipeGesture::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSwipeGesture_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSwipeGesture::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSwipeGesture::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSwipeGesture_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSwipeGesture::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSwipeGesture::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSwipeGesture_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSwipeGesture::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSwipeGesture::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSwipeGesture_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSwipeGesture::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSwipeGesture::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSwipeGesture_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSwipeGesture::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QSwipeGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSwipeGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSwipeGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSwipeGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSwipeGesture* QSwipeGesture_new() {
	return new MiqtVirtualQSwipeGesture();
}

QSwipeGesture* QSwipeGesture_new2(QObject* parent) {
	return new MiqtVirtualQSwipeGesture(parent);
}

void QSwipeGesture_virtbase(QSwipeGesture* src, QGesture** outptr_QGesture) {
	*outptr_QGesture = static_cast<QGesture*>(src);
}

QMetaObject* QSwipeGesture_metaObject(const QSwipeGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSwipeGesture_metacast(QSwipeGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSwipeGesture_tr(const char* s) {
	QString _ret = QSwipeGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSwipeGesture_trUtf8(const char* s) {
	QString _ret = QSwipeGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSwipeGesture_horizontalDirection(const QSwipeGesture* self) {
	QSwipeGesture::SwipeDirection _ret = self->horizontalDirection();
	return static_cast<int>(_ret);
}

int QSwipeGesture_verticalDirection(const QSwipeGesture* self) {
	QSwipeGesture::SwipeDirection _ret = self->verticalDirection();
	return static_cast<int>(_ret);
}

double QSwipeGesture_swipeAngle(const QSwipeGesture* self) {
	qreal _ret = self->swipeAngle();
	return static_cast<double>(_ret);
}

void QSwipeGesture_setSwipeAngle(QSwipeGesture* self, double value) {
	self->setSwipeAngle(static_cast<qreal>(value));
}

struct miqt_string QSwipeGesture_tr2(const char* s, const char* c) {
	QString _ret = QSwipeGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSwipeGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QSwipeGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSwipeGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QSwipeGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSwipeGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSwipeGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSwipeGesture_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSwipeGesture_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSwipeGesture*)(self) )->virtualbase_event(event);
}

bool QSwipeGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSwipeGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSwipeGesture*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSwipeGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSwipeGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSwipeGesture*)(self) )->virtualbase_timerEvent(event);
}

bool QSwipeGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSwipeGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSwipeGesture*)(self) )->virtualbase_childEvent(event);
}

bool QSwipeGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSwipeGesture_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSwipeGesture*)(self) )->virtualbase_customEvent(event);
}

bool QSwipeGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSwipeGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSwipeGesture*)(self) )->virtualbase_connectNotify(signal);
}

bool QSwipeGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSwipeGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSwipeGesture*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QSwipeGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSwipeGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSwipeGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSwipeGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSwipeGesture_delete(QSwipeGesture* self) {
	delete self;
}

class MiqtVirtualQTapGesture final : public QTapGesture {
public:

	MiqtVirtualQTapGesture(): QTapGesture() {};
	MiqtVirtualQTapGesture(QObject* parent): QTapGesture(parent) {};

	virtual ~MiqtVirtualQTapGesture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTapGesture::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTapGesture_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTapGesture::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTapGesture::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTapGesture_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTapGesture::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTapGesture::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTapGesture_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTapGesture::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTapGesture::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTapGesture_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTapGesture::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTapGesture::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTapGesture_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTapGesture::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTapGesture::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTapGesture_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTapGesture::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTapGesture::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTapGesture_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTapGesture::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QTapGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTapGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTapGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTapGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTapGesture* QTapGesture_new() {
	return new MiqtVirtualQTapGesture();
}

QTapGesture* QTapGesture_new2(QObject* parent) {
	return new MiqtVirtualQTapGesture(parent);
}

void QTapGesture_virtbase(QTapGesture* src, QGesture** outptr_QGesture) {
	*outptr_QGesture = static_cast<QGesture*>(src);
}

QMetaObject* QTapGesture_metaObject(const QTapGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTapGesture_metacast(QTapGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTapGesture_tr(const char* s) {
	QString _ret = QTapGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapGesture_trUtf8(const char* s) {
	QString _ret = QTapGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointF* QTapGesture_position(const QTapGesture* self) {
	return new QPointF(self->position());
}

void QTapGesture_setPosition(QTapGesture* self, QPointF* pos) {
	self->setPosition(*pos);
}

struct miqt_string QTapGesture_tr2(const char* s, const char* c) {
	QString _ret = QTapGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QTapGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QTapGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTapGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTapGesture_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTapGesture_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTapGesture*)(self) )->virtualbase_event(event);
}

bool QTapGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTapGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTapGesture*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTapGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTapGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTapGesture*)(self) )->virtualbase_timerEvent(event);
}

bool QTapGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTapGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTapGesture*)(self) )->virtualbase_childEvent(event);
}

bool QTapGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTapGesture_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTapGesture*)(self) )->virtualbase_customEvent(event);
}

bool QTapGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTapGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTapGesture*)(self) )->virtualbase_connectNotify(signal);
}

bool QTapGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTapGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTapGesture*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QTapGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTapGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTapGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTapGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTapGesture_delete(QTapGesture* self) {
	delete self;
}

class MiqtVirtualQTapAndHoldGesture final : public QTapAndHoldGesture {
public:

	MiqtVirtualQTapAndHoldGesture(): QTapAndHoldGesture() {};
	MiqtVirtualQTapAndHoldGesture(QObject* parent): QTapAndHoldGesture(parent) {};

	virtual ~MiqtVirtualQTapAndHoldGesture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTapAndHoldGesture::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTapAndHoldGesture_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTapAndHoldGesture::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTapAndHoldGesture::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTapAndHoldGesture_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTapAndHoldGesture::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTapAndHoldGesture::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTapAndHoldGesture_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTapAndHoldGesture::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTapAndHoldGesture::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTapAndHoldGesture_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTapAndHoldGesture::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTapAndHoldGesture::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTapAndHoldGesture_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTapAndHoldGesture::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTapAndHoldGesture::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTapAndHoldGesture_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTapAndHoldGesture::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTapAndHoldGesture::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTapAndHoldGesture_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTapAndHoldGesture::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QTapAndHoldGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTapAndHoldGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTapAndHoldGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTapAndHoldGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTapAndHoldGesture* QTapAndHoldGesture_new() {
	return new MiqtVirtualQTapAndHoldGesture();
}

QTapAndHoldGesture* QTapAndHoldGesture_new2(QObject* parent) {
	return new MiqtVirtualQTapAndHoldGesture(parent);
}

void QTapAndHoldGesture_virtbase(QTapAndHoldGesture* src, QGesture** outptr_QGesture) {
	*outptr_QGesture = static_cast<QGesture*>(src);
}

QMetaObject* QTapAndHoldGesture_metaObject(const QTapAndHoldGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTapAndHoldGesture_metacast(QTapAndHoldGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTapAndHoldGesture_tr(const char* s) {
	QString _ret = QTapAndHoldGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapAndHoldGesture_trUtf8(const char* s) {
	QString _ret = QTapAndHoldGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointF* QTapAndHoldGesture_position(const QTapAndHoldGesture* self) {
	return new QPointF(self->position());
}

void QTapAndHoldGesture_setPosition(QTapAndHoldGesture* self, QPointF* pos) {
	self->setPosition(*pos);
}

void QTapAndHoldGesture_setTimeout(int msecs) {
	QTapAndHoldGesture::setTimeout(static_cast<int>(msecs));
}

int QTapAndHoldGesture_timeout() {
	return QTapAndHoldGesture::timeout();
}

struct miqt_string QTapAndHoldGesture_tr2(const char* s, const char* c) {
	QString _ret = QTapAndHoldGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapAndHoldGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QTapAndHoldGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapAndHoldGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QTapAndHoldGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapAndHoldGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTapAndHoldGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTapAndHoldGesture_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTapAndHoldGesture_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTapAndHoldGesture*)(self) )->virtualbase_event(event);
}

bool QTapAndHoldGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTapAndHoldGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTapAndHoldGesture*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTapAndHoldGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTapAndHoldGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTapAndHoldGesture*)(self) )->virtualbase_timerEvent(event);
}

bool QTapAndHoldGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTapAndHoldGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTapAndHoldGesture*)(self) )->virtualbase_childEvent(event);
}

bool QTapAndHoldGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTapAndHoldGesture_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTapAndHoldGesture*)(self) )->virtualbase_customEvent(event);
}

bool QTapAndHoldGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTapAndHoldGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTapAndHoldGesture*)(self) )->virtualbase_connectNotify(signal);
}

bool QTapAndHoldGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTapAndHoldGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTapAndHoldGesture*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QTapAndHoldGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTapAndHoldGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTapAndHoldGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTapAndHoldGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTapAndHoldGesture_delete(QTapAndHoldGesture* self) {
	delete self;
}

QGestureEvent* QGestureEvent_new(struct miqt_array /* of QGesture* */  gestures) {
	QList<QGesture *> gestures_QList;
	gestures_QList.reserve(gestures.len);
	QGesture** gestures_arr = static_cast<QGesture**>(gestures.data);
	for(size_t i = 0; i < gestures.len; ++i) {
		gestures_QList.push_back(gestures_arr[i]);
	}
	return new QGestureEvent(gestures_QList);
}

QGestureEvent* QGestureEvent_new2(QGestureEvent* param1) {
	return new QGestureEvent(*param1);
}

void QGestureEvent_virtbase(QGestureEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

struct miqt_array /* of QGesture* */  QGestureEvent_gestures(const QGestureEvent* self) {
	QList<QGesture *> _ret = self->gestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QGesture* QGestureEvent_gesture(const QGestureEvent* self, int type) {
	return self->gesture(static_cast<Qt::GestureType>(type));
}

struct miqt_array /* of QGesture* */  QGestureEvent_activeGestures(const QGestureEvent* self) {
	QList<QGesture *> _ret = self->activeGestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGesture* */  QGestureEvent_canceledGestures(const QGestureEvent* self) {
	QList<QGesture *> _ret = self->canceledGestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGestureEvent_setAccepted(QGestureEvent* self, QGesture* param1, bool param2) {
	self->setAccepted(param1, param2);
}

void QGestureEvent_accept(QGestureEvent* self, QGesture* param1) {
	self->accept(param1);
}

void QGestureEvent_ignore(QGestureEvent* self, QGesture* param1) {
	self->ignore(param1);
}

bool QGestureEvent_isAccepted(const QGestureEvent* self, QGesture* param1) {
	return self->isAccepted(param1);
}

void QGestureEvent_setAccepted2(QGestureEvent* self, int param1, bool param2) {
	self->setAccepted(static_cast<Qt::GestureType>(param1), param2);
}

void QGestureEvent_acceptWithQtGestureType(QGestureEvent* self, int param1) {
	self->accept(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_ignoreWithQtGestureType(QGestureEvent* self, int param1) {
	self->ignore(static_cast<Qt::GestureType>(param1));
}

bool QGestureEvent_isAcceptedWithQtGestureType(const QGestureEvent* self, int param1) {
	return self->isAccepted(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_setWidget(QGestureEvent* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QGestureEvent_widget(const QGestureEvent* self) {
	return self->widget();
}

QPointF* QGestureEvent_mapToGraphicsScene(const QGestureEvent* self, QPointF* gesturePoint) {
	return new QPointF(self->mapToGraphicsScene(*gesturePoint));
}

void QGestureEvent_delete(QGestureEvent* self) {
	delete self;
}

