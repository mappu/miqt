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

void miqt_exec_callback_QAudioProbe_AudioBufferProbed(intptr_t, QAudioBuffer*);
void miqt_exec_callback_QAudioProbe_Flush(intptr_t);
bool miqt_exec_callback_QAudioProbe_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioProbe_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioProbe_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioProbe_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioProbe_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioProbe_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioProbe_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioProbe final : public QAudioProbe {
public:

	MiqtVirtualQAudioProbe(): QAudioProbe() {};
	MiqtVirtualQAudioProbe(QObject* parent): QAudioProbe(parent) {};

	virtual ~MiqtVirtualQAudioProbe() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAudioProbe::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioProbe_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAudioProbe::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAudioProbe::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioProbe_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAudioProbe::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAudioProbe::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioProbe_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAudioProbe::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAudioProbe::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioProbe_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAudioProbe::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAudioProbe::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioProbe_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAudioProbe::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAudioProbe::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioProbe_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAudioProbe::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAudioProbe::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioProbe_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAudioProbe::disconnectNotify(*signal);

	}

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

QMetaObject* QAudioProbe_MetaObject(const QAudioProbe* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioProbe_Metacast(QAudioProbe* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioProbe_Tr(const char* s) {
	QString _ret = QAudioProbe::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_TrUtf8(const char* s) {
	QString _ret = QAudioProbe::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioProbe_SetSource(QAudioProbe* self, QMediaObject* source) {
	return self->setSource(source);
}

bool QAudioProbe_SetSourceWithSource(QAudioProbe* self, QMediaRecorder* source) {
	return self->setSource(source);
}

bool QAudioProbe_IsActive(const QAudioProbe* self) {
	return self->isActive();
}

void QAudioProbe_AudioBufferProbed(QAudioProbe* self, QAudioBuffer* buffer) {
	self->audioBufferProbed(*buffer);
}

void QAudioProbe_connect_AudioBufferProbed(QAudioProbe* self, intptr_t slot) {
	MiqtVirtualQAudioProbe::connect(self, static_cast<void (QAudioProbe::*)(const QAudioBuffer&)>(&QAudioProbe::audioBufferProbed), self, [=](const QAudioBuffer& buffer) {
		const QAudioBuffer& buffer_ret = buffer;
		// Cast returned reference into pointer
		QAudioBuffer* sigval1 = const_cast<QAudioBuffer*>(&buffer_ret);
		miqt_exec_callback_QAudioProbe_AudioBufferProbed(slot, sigval1);
	});
}

void QAudioProbe_Flush(QAudioProbe* self) {
	self->flush();
}

void QAudioProbe_connect_Flush(QAudioProbe* self, intptr_t slot) {
	MiqtVirtualQAudioProbe::connect(self, static_cast<void (QAudioProbe::*)()>(&QAudioProbe::flush), self, [=]() {
		miqt_exec_callback_QAudioProbe_Flush(slot);
	});
}

struct miqt_string QAudioProbe_Tr2(const char* s, const char* c) {
	QString _ret = QAudioProbe::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioProbe::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioProbe::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioProbe::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioProbe_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) )->handle__Event = slot;
}

bool QAudioProbe_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_Event(event);
}

void QAudioProbe_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) )->handle__EventFilter = slot;
}

bool QAudioProbe_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAudioProbe_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) )->handle__TimerEvent = slot;
}

void QAudioProbe_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_TimerEvent(event);
}

void QAudioProbe_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) )->handle__ChildEvent = slot;
}

void QAudioProbe_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_ChildEvent(event);
}

void QAudioProbe_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) )->handle__CustomEvent = slot;
}

void QAudioProbe_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_CustomEvent(event);
}

void QAudioProbe_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) )->handle__ConnectNotify = slot;
}

void QAudioProbe_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAudioProbe_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioProbe*>( (QAudioProbe*)(self) )->handle__DisconnectNotify = slot;
}

void QAudioProbe_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioProbe*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAudioProbe_Delete(QAudioProbe* self) {
	delete self;
}

