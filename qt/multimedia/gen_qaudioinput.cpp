#include <QAudioDeviceInfo>
#include <QAudioFormat>
#include <QAudioInput>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudioinput.h>
#include "gen_qaudioinput.h"
#include "_cgo_export.h"

class MiqtVirtualQAudioInput : public virtual QAudioInput {
public:

	MiqtVirtualQAudioInput(): QAudioInput() {};
	MiqtVirtualQAudioInput(const QAudioDeviceInfo& audioDeviceInfo): QAudioInput(audioDeviceInfo) {};
	MiqtVirtualQAudioInput(const QAudioFormat& format): QAudioInput(format) {};
	MiqtVirtualQAudioInput(const QAudioFormat& format, QObject* parent): QAudioInput(format, parent) {};
	MiqtVirtualQAudioInput(const QAudioDeviceInfo& audioDeviceInfo, const QAudioFormat& format): QAudioInput(audioDeviceInfo, format) {};
	MiqtVirtualQAudioInput(const QAudioDeviceInfo& audioDeviceInfo, const QAudioFormat& format, QObject* parent): QAudioInput(audioDeviceInfo, format, parent) {};

	virtual ~MiqtVirtualQAudioInput() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAudioInput::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioInput_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAudioInput::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAudioInput::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioInput_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAudioInput::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAudioInput::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioInput_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAudioInput::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAudioInput::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioInput_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAudioInput::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAudioInput::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioInput_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAudioInput::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAudioInput::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioInput_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAudioInput::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAudioInput::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioInput_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAudioInput::disconnectNotify(*signal);

	}

};

QAudioInput* QAudioInput_new() {
	return new MiqtVirtualQAudioInput();
}

QAudioInput* QAudioInput_new2(QAudioDeviceInfo* audioDeviceInfo) {
	return new MiqtVirtualQAudioInput(*audioDeviceInfo);
}

QAudioInput* QAudioInput_new3(QAudioFormat* format) {
	return new MiqtVirtualQAudioInput(*format);
}

QAudioInput* QAudioInput_new4(QAudioFormat* format, QObject* parent) {
	return new MiqtVirtualQAudioInput(*format, parent);
}

QAudioInput* QAudioInput_new5(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format) {
	return new MiqtVirtualQAudioInput(*audioDeviceInfo, *format);
}

QAudioInput* QAudioInput_new6(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format, QObject* parent) {
	return new MiqtVirtualQAudioInput(*audioDeviceInfo, *format, parent);
}

void QAudioInput_virtbase(QAudioInput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioInput_MetaObject(const QAudioInput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioInput_Metacast(QAudioInput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioInput_Tr(const char* s) {
	QString _ret = QAudioInput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_TrUtf8(const char* s) {
	QString _ret = QAudioInput::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QAudioInput_Format(const QAudioInput* self) {
	return new QAudioFormat(self->format());
}

void QAudioInput_Start(QAudioInput* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioInput_Start2(QAudioInput* self) {
	return self->start();
}

void QAudioInput_Stop(QAudioInput* self) {
	self->stop();
}

void QAudioInput_Reset(QAudioInput* self) {
	self->reset();
}

void QAudioInput_Suspend(QAudioInput* self) {
	self->suspend();
}

void QAudioInput_Resume(QAudioInput* self) {
	self->resume();
}

void QAudioInput_SetBufferSize(QAudioInput* self, int bytes) {
	self->setBufferSize(static_cast<int>(bytes));
}

int QAudioInput_BufferSize(const QAudioInput* self) {
	return self->bufferSize();
}

int QAudioInput_BytesReady(const QAudioInput* self) {
	return self->bytesReady();
}

int QAudioInput_PeriodSize(const QAudioInput* self) {
	return self->periodSize();
}

void QAudioInput_SetNotifyInterval(QAudioInput* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

int QAudioInput_NotifyInterval(const QAudioInput* self) {
	return self->notifyInterval();
}

void QAudioInput_SetVolume(QAudioInput* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioInput_Volume(const QAudioInput* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

long long QAudioInput_ProcessedUSecs(const QAudioInput* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioInput_ElapsedUSecs(const QAudioInput* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioInput_Error(const QAudioInput* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioInput_State(const QAudioInput* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioInput_StateChanged(QAudioInput* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioInput_connect_StateChanged(QAudioInput* self, intptr_t slot) {
	MiqtVirtualQAudioInput::connect(self, static_cast<void (QAudioInput::*)(QAudio::State)>(&QAudioInput::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioInput_StateChanged(slot, sigval1);
	});
}

void QAudioInput_Notify(QAudioInput* self) {
	self->notify();
}

void QAudioInput_connect_Notify(QAudioInput* self, intptr_t slot) {
	MiqtVirtualQAudioInput::connect(self, static_cast<void (QAudioInput::*)()>(&QAudioInput::notify), self, [=]() {
		miqt_exec_callback_QAudioInput_Notify(slot);
	});
}

struct miqt_string QAudioInput_Tr2(const char* s, const char* c) {
	QString _ret = QAudioInput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioInput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioInput::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioInput::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioInput_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) )->handle__Event = slot;
}

bool QAudioInput_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioInput*)(self) )->virtualbase_Event(event);
}

void QAudioInput_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) )->handle__EventFilter = slot;
}

bool QAudioInput_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioInput*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAudioInput_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) )->handle__TimerEvent = slot;
}

void QAudioInput_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioInput*)(self) )->virtualbase_TimerEvent(event);
}

void QAudioInput_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) )->handle__ChildEvent = slot;
}

void QAudioInput_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioInput*)(self) )->virtualbase_ChildEvent(event);
}

void QAudioInput_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) )->handle__CustomEvent = slot;
}

void QAudioInput_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioInput*)(self) )->virtualbase_CustomEvent(event);
}

void QAudioInput_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) )->handle__ConnectNotify = slot;
}

void QAudioInput_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioInput*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAudioInput_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) )->handle__DisconnectNotify = slot;
}

void QAudioInput_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioInput*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAudioInput_Delete(QAudioInput* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAudioInput*>( self );
	} else {
		delete self;
	}
}

