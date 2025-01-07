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

void miqt_exec_callback_QVideoProbe_VideoFrameProbed(intptr_t, QVideoFrame*);
void miqt_exec_callback_QVideoProbe_Flush(intptr_t);
bool miqt_exec_callback_QVideoProbe_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QVideoProbe_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVideoProbe_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVideoProbe_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVideoProbe_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoProbe_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVideoProbe_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVideoProbe : public virtual QVideoProbe {
public:

	MiqtVirtualQVideoProbe(): QVideoProbe() {};
	MiqtVirtualQVideoProbe(QObject* parent): QVideoProbe(parent) {};

	virtual ~MiqtVirtualQVideoProbe() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QVideoProbe::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVideoProbe_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QVideoProbe::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QVideoProbe::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QVideoProbe_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QVideoProbe::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QVideoProbe::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QVideoProbe_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QVideoProbe::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QVideoProbe::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QVideoProbe_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QVideoProbe::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QVideoProbe::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVideoProbe_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QVideoProbe::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QVideoProbe::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoProbe_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QVideoProbe::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QVideoProbe::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoProbe_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QVideoProbe::disconnectNotify(*signal);

	}

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

QMetaObject* QVideoProbe_MetaObject(const QVideoProbe* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoProbe_Metacast(QVideoProbe* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoProbe_Tr(const char* s) {
	QString _ret = QVideoProbe::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoProbe_TrUtf8(const char* s) {
	QString _ret = QVideoProbe::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVideoProbe_SetSource(QVideoProbe* self, QMediaObject* source) {
	return self->setSource(source);
}

bool QVideoProbe_SetSourceWithSource(QVideoProbe* self, QMediaRecorder* source) {
	return self->setSource(source);
}

bool QVideoProbe_IsActive(const QVideoProbe* self) {
	return self->isActive();
}

void QVideoProbe_VideoFrameProbed(QVideoProbe* self, QVideoFrame* frame) {
	self->videoFrameProbed(*frame);
}

void QVideoProbe_connect_VideoFrameProbed(QVideoProbe* self, intptr_t slot) {
	MiqtVirtualQVideoProbe::connect(self, static_cast<void (QVideoProbe::*)(const QVideoFrame&)>(&QVideoProbe::videoFrameProbed), self, [=](const QVideoFrame& frame) {
		const QVideoFrame& frame_ret = frame;
		// Cast returned reference into pointer
		QVideoFrame* sigval1 = const_cast<QVideoFrame*>(&frame_ret);
		miqt_exec_callback_QVideoProbe_VideoFrameProbed(slot, sigval1);
	});
}

void QVideoProbe_Flush(QVideoProbe* self) {
	self->flush();
}

void QVideoProbe_connect_Flush(QVideoProbe* self, intptr_t slot) {
	MiqtVirtualQVideoProbe::connect(self, static_cast<void (QVideoProbe::*)()>(&QVideoProbe::flush), self, [=]() {
		miqt_exec_callback_QVideoProbe_Flush(slot);
	});
}

struct miqt_string QVideoProbe_Tr2(const char* s, const char* c) {
	QString _ret = QVideoProbe::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoProbe_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoProbe::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoProbe_TrUtf82(const char* s, const char* c) {
	QString _ret = QVideoProbe::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoProbe_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QVideoProbe::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoProbe_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) )->handle__Event = slot;
}

bool QVideoProbe_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_Event(event);
}

void QVideoProbe_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) )->handle__EventFilter = slot;
}

bool QVideoProbe_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_EventFilter(watched, event);
}

void QVideoProbe_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) )->handle__TimerEvent = slot;
}

void QVideoProbe_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_TimerEvent(event);
}

void QVideoProbe_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) )->handle__ChildEvent = slot;
}

void QVideoProbe_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_ChildEvent(event);
}

void QVideoProbe_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) )->handle__CustomEvent = slot;
}

void QVideoProbe_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_CustomEvent(event);
}

void QVideoProbe_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) )->handle__ConnectNotify = slot;
}

void QVideoProbe_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_ConnectNotify(signal);
}

void QVideoProbe_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoProbe*>( (QVideoProbe*)(self) )->handle__DisconnectNotify = slot;
}

void QVideoProbe_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoProbe*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QVideoProbe_Delete(QVideoProbe* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQVideoProbe*>( self );
	} else {
		delete self;
	}
}

