#include <QAudioEngine>
#include <QAudioListener>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QQuaternion>
#include <QTimerEvent>
#include <QVector3D>
#include <qaudiolistener.h>
#include "gen_qaudiolistener.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QAudioListener_event(QAudioListener*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioListener_eventFilter(QAudioListener*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioListener_timerEvent(QAudioListener*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioListener_childEvent(QAudioListener*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioListener_customEvent(QAudioListener*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioListener_connectNotify(QAudioListener*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioListener_disconnectNotify(QAudioListener*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioListener final : public QAudioListener {
public:

	MiqtVirtualQAudioListener(QAudioEngine* engine): QAudioListener(engine) {};

	virtual ~MiqtVirtualQAudioListener() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioListener::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioListener_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAudioListener::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioListener::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioListener_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAudioListener::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioListener::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioListener_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAudioListener::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioListener::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioListener_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAudioListener::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioListener::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioListener_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAudioListener::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioListener::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioListener_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAudioListener::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioListener::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioListener_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAudioListener::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioListener_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioListener_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioListener_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioListener_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioListener* QAudioListener_new(QAudioEngine* engine) {
	return new MiqtVirtualQAudioListener(engine);
}

void QAudioListener_virtbase(QAudioListener* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

void QAudioListener_setPosition(QAudioListener* self, QVector3D* pos) {
	self->setPosition(*pos);
}

QVector3D* QAudioListener_position(const QAudioListener* self) {
	return new QVector3D(self->position());
}

void QAudioListener_setRotation(QAudioListener* self, QQuaternion* q) {
	self->setRotation(*q);
}

QQuaternion* QAudioListener_rotation(const QAudioListener* self) {
	return new QQuaternion(self->rotation());
}

QAudioEngine* QAudioListener_engine(const QAudioListener* self) {
	return self->engine();
}

bool QAudioListener_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAudioListener_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioListener*)(self) )->virtualbase_event(event);
}

bool QAudioListener_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioListener_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioListener*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAudioListener_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioListener_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioListener*)(self) )->virtualbase_timerEvent(event);
}

bool QAudioListener_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioListener_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioListener*)(self) )->virtualbase_childEvent(event);
}

bool QAudioListener_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioListener_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioListener*)(self) )->virtualbase_customEvent(event);
}

bool QAudioListener_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioListener_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioListener*)(self) )->virtualbase_connectNotify(signal);
}

bool QAudioListener_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioListener_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioListener*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAudioListener_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAudioListener_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAudioListener_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAudioListener_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAudioListener_delete(QAudioListener* self) {
	delete self;
}

