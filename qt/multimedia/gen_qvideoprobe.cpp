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
#include <QVideoFrame>
#include <QVideoProbe>
#include <qvideoprobe.h>
#include "gen_qvideoprobe.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVideoProbe_videoFrameProbed(intptr_t, QVideoFrame*);
void miqt_exec_callback_QVideoProbe_flush(intptr_t);
bool miqt_exec_callback_QVideoProbe_event(QVideoProbe*, intptr_t, QEvent*);
bool miqt_exec_callback_QVideoProbe_eventFilter(QVideoProbe*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVideoProbe_timerEvent(QVideoProbe*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVideoProbe_childEvent(QVideoProbe*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVideoProbe_customEvent(QVideoProbe*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoProbe_connectNotify(QVideoProbe*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVideoProbe_disconnectNotify(QVideoProbe*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVideoProbe final : public QVideoProbe {
public:

	MiqtVirtualQVideoProbe(): QVideoProbe() {};
	MiqtVirtualQVideoProbe(QObject* parent): QVideoProbe(parent) {};

	virtual ~MiqtVirtualQVideoProbe() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QVideoProbe::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVideoProbe_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QVideoProbe::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QVideoProbe::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QVideoProbe_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QVideoProbe::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QVideoProbe::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QVideoProbe_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QVideoProbe::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QVideoProbe::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QVideoProbe_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QVideoProbe::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QVideoProbe::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVideoProbe_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QVideoProbe::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QVideoProbe::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoProbe_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QVideoProbe::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QVideoProbe::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoProbe_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QVideoProbe::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QVideoProbe_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVideoProbe_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVideoProbe_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVideoProbe_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QVideoProbe* QVideoProbe_new() {
	return new MiqtVirtualQVideoProbe();
}

QVideoProbe* QVideoProbe_new2(QObject* parent) {
	return new MiqtVirtualQVideoProbe(parent);
}

void QVideoProbe_virtbase(QVideoProbe* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QVideoProbe_metaObject(const QVideoProbe* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoProbe_metacast(QVideoProbe* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoProbe_tr(const char* s) {
	QString _ret = QVideoProbe::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoProbe_trUtf8(const char* s) {
	QString _ret = QVideoProbe::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVideoProbe_setSource(QVideoProbe* self, QMediaObject* source) {
	return self->setSource(source);
}

bool QVideoProbe_setSourceWithSource(QVideoProbe* self, QMediaRecorder* source) {
	return self->setSource(source);
}

bool QVideoProbe_isActive(const QVideoProbe* self) {
	return self->isActive();
}

void QVideoProbe_videoFrameProbed(QVideoProbe* self, QVideoFrame* frame) {
	self->videoFrameProbed(*frame);
}

void QVideoProbe_connect_videoFrameProbed(QVideoProbe* self, intptr_t slot) {
	MiqtVirtualQVideoProbe::connect(self, static_cast<void (QVideoProbe::*)(const QVideoFrame&)>(&QVideoProbe::videoFrameProbed), self, [=](const QVideoFrame& frame) {
		const QVideoFrame& frame_ret = frame;
		// Cast returned reference into pointer
		QVideoFrame* sigval1 = const_cast<QVideoFrame*>(&frame_ret);
		miqt_exec_callback_QVideoProbe_videoFrameProbed(slot, sigval1);
	});
}

void QVideoProbe_flush(QVideoProbe* self) {
	self->flush();
}

void QVideoProbe_connect_flush(QVideoProbe* self, intptr_t slot) {
	MiqtVirtualQVideoProbe::connect(self, static_cast<void (QVideoProbe::*)()>(&QVideoProbe::flush), self, [=]() {
		miqt_exec_callback_QVideoProbe_flush(slot);
	});
}

struct miqt_string QVideoProbe_tr2(const char* s, const char* c) {
	QString _ret = QVideoProbe::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoProbe_tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoProbe::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoProbe_trUtf82(const char* s, const char* c) {
	QString _ret = QVideoProbe::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoProbe_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QVideoProbe::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVideoProbe_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQVideoProbe* self_cast = dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QVideoProbe_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_event(event);
}

bool QVideoProbe_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVideoProbe* self_cast = dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QVideoProbe_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QVideoProbe_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoProbe* self_cast = dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QVideoProbe_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_timerEvent(event);
}

bool QVideoProbe_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoProbe* self_cast = dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QVideoProbe_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_childEvent(event);
}

bool QVideoProbe_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoProbe* self_cast = dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QVideoProbe_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_customEvent(event);
}

bool QVideoProbe_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVideoProbe* self_cast = dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QVideoProbe_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_connectNotify(signal);
}

bool QVideoProbe_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVideoProbe* self_cast = dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QVideoProbe_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QVideoProbe_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVideoProbe* self_cast = dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QVideoProbe_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVideoProbe* self_cast = dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QVideoProbe_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVideoProbe* self_cast = dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QVideoProbe_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVideoProbe* self_cast = dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QVideoProbe_delete(QVideoProbe* self) {
	delete self;
}

