#include <QAudioBuffer>
#include <QAudioProbe>
#include <QChildEvent>
#include <QEvent>
#include <QMediaObject>
#include <QMediaRecorder>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudioprobe.h>
#include "gen_qaudioprobe.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioProbe_audioBufferProbed(intptr_t, QAudioBuffer*);
void miqt_exec_callback_QAudioProbe_flush(intptr_t);
bool miqt_exec_callback_QAudioProbe_event(QAudioProbe*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioProbe_eventFilter(QAudioProbe*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioProbe_timerEvent(QAudioProbe*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioProbe_childEvent(QAudioProbe*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioProbe_customEvent(QAudioProbe*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioProbe_connectNotify(QAudioProbe*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioProbe_disconnectNotify(QAudioProbe*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioProbe final : public QAudioProbe {
public:

	MiqtVirtualQAudioProbe(): QAudioProbe() {};
	MiqtVirtualQAudioProbe(QObject* parent): QAudioProbe(parent) {};

	virtual ~MiqtVirtualQAudioProbe() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioProbe::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioProbe_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAudioProbe::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioProbe::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioProbe_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAudioProbe::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioProbe::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioProbe_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAudioProbe::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioProbe::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioProbe_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAudioProbe::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioProbe::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioProbe_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAudioProbe::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioProbe::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioProbe_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAudioProbe::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioProbe::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioProbe_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAudioProbe::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioProbe_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioProbe_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioProbe_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioProbe_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioProbe* QAudioProbe_new() {
	return new MiqtVirtualQAudioProbe();
}

QAudioProbe* QAudioProbe_new2(QObject* parent) {
	return new MiqtVirtualQAudioProbe(parent);
}

void QAudioProbe_virtbase(QAudioProbe* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioProbe_metaObject(const QAudioProbe* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioProbe_metacast(QAudioProbe* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioProbe_tr(const char* s) {
	QString _ret = QAudioProbe::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_trUtf8(const char* s) {
	QString _ret = QAudioProbe::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioProbe_setSource(QAudioProbe* self, QMediaObject* source) {
	return self->setSource(source);
}

bool QAudioProbe_setSourceWithSource(QAudioProbe* self, QMediaRecorder* source) {
	return self->setSource(source);
}

bool QAudioProbe_isActive(const QAudioProbe* self) {
	return self->isActive();
}

void QAudioProbe_audioBufferProbed(QAudioProbe* self, QAudioBuffer* buffer) {
	self->audioBufferProbed(*buffer);
}

void QAudioProbe_connect_audioBufferProbed(QAudioProbe* self, intptr_t slot) {
	MiqtVirtualQAudioProbe::connect(self, static_cast<void (QAudioProbe::*)(const QAudioBuffer&)>(&QAudioProbe::audioBufferProbed), self, [=](const QAudioBuffer& buffer) {
		const QAudioBuffer& buffer_ret = buffer;
		// Cast returned reference into pointer
		QAudioBuffer* sigval1 = const_cast<QAudioBuffer*>(&buffer_ret);
		miqt_exec_callback_QAudioProbe_audioBufferProbed(slot, sigval1);
	});
}

void QAudioProbe_flush(QAudioProbe* self) {
	self->flush();
}

void QAudioProbe_connect_flush(QAudioProbe* self, intptr_t slot) {
	MiqtVirtualQAudioProbe::connect(self, static_cast<void (QAudioProbe::*)()>(&QAudioProbe::flush), self, [=]() {
		miqt_exec_callback_QAudioProbe_flush(slot);
	});
}

struct miqt_string QAudioProbe_tr2(const char* s, const char* c) {
	QString _ret = QAudioProbe::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioProbe::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_trUtf82(const char* s, const char* c) {
	QString _ret = QAudioProbe::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioProbe::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioProbe_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioProbe* self_cast = dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAudioProbe_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_event(event);
}

bool QAudioProbe_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioProbe* self_cast = dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioProbe_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAudioProbe_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioProbe* self_cast = dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioProbe_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_timerEvent(event);
}

bool QAudioProbe_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioProbe* self_cast = dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioProbe_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_childEvent(event);
}

bool QAudioProbe_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioProbe* self_cast = dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioProbe_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_customEvent(event);
}

bool QAudioProbe_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioProbe* self_cast = dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioProbe_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_connectNotify(signal);
}

bool QAudioProbe_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioProbe* self_cast = dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioProbe_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAudioProbe_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioProbe* self_cast = dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAudioProbe_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioProbe* self_cast = dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAudioProbe_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioProbe* self_cast = dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAudioProbe_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioProbe* self_cast = dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAudioProbe_delete(QAudioProbe* self) {
	delete self;
}

