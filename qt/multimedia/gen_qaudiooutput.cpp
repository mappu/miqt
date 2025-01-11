#include <QAudioDeviceInfo>
#include <QAudioFormat>
#include <QAudioOutput>
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
#include <qaudiooutput.h>
#include "gen_qaudiooutput.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioOutput_StateChanged(intptr_t, int);
void miqt_exec_callback_QAudioOutput_Notify(intptr_t);
bool miqt_exec_callback_QAudioOutput_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioOutput_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioOutput_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioOutput_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioOutput_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioOutput_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioOutput_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioOutput : public virtual QAudioOutput {
public:

	MiqtVirtualQAudioOutput(): QAudioOutput() {};
	MiqtVirtualQAudioOutput(const QAudioDeviceInfo& audioDeviceInfo): QAudioOutput(audioDeviceInfo) {};
	MiqtVirtualQAudioOutput(const QAudioFormat& format): QAudioOutput(format) {};
	MiqtVirtualQAudioOutput(const QAudioFormat& format, QObject* parent): QAudioOutput(format, parent) {};
	MiqtVirtualQAudioOutput(const QAudioDeviceInfo& audioDeviceInfo, const QAudioFormat& format): QAudioOutput(audioDeviceInfo, format) {};
	MiqtVirtualQAudioOutput(const QAudioDeviceInfo& audioDeviceInfo, const QAudioFormat& format, QObject* parent): QAudioOutput(audioDeviceInfo, format, parent) {};

	virtual ~MiqtVirtualQAudioOutput() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAudioOutput::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioOutput_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAudioOutput::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAudioOutput::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioOutput_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAudioOutput::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAudioOutput::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAudioOutput::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAudioOutput::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAudioOutput::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAudioOutput::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAudioOutput::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAudioOutput::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioOutput_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAudioOutput::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAudioOutput::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioOutput_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAudioOutput::disconnectNotify(*signal);

	}

};

QAudioOutput* QAudioOutput_new() {
	return new MiqtVirtualQAudioOutput();
}

QAudioOutput* QAudioOutput_new2(QAudioDeviceInfo* audioDeviceInfo) {
	return new MiqtVirtualQAudioOutput(*audioDeviceInfo);
}

QAudioOutput* QAudioOutput_new3(QAudioFormat* format) {
	return new MiqtVirtualQAudioOutput(*format);
}

QAudioOutput* QAudioOutput_new4(QAudioFormat* format, QObject* parent) {
	return new MiqtVirtualQAudioOutput(*format, parent);
}

QAudioOutput* QAudioOutput_new5(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format) {
	return new MiqtVirtualQAudioOutput(*audioDeviceInfo, *format);
}

QAudioOutput* QAudioOutput_new6(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format, QObject* parent) {
	return new MiqtVirtualQAudioOutput(*audioDeviceInfo, *format, parent);
}

void QAudioOutput_virtbase(QAudioOutput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioOutput_MetaObject(const QAudioOutput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioOutput_Metacast(QAudioOutput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioOutput_Tr(const char* s) {
	QString _ret = QAudioOutput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_TrUtf8(const char* s) {
	QString _ret = QAudioOutput::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QAudioOutput_Format(const QAudioOutput* self) {
	return new QAudioFormat(self->format());
}

void QAudioOutput_Start(QAudioOutput* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioOutput_Start2(QAudioOutput* self) {
	return self->start();
}

void QAudioOutput_Stop(QAudioOutput* self) {
	self->stop();
}

void QAudioOutput_Reset(QAudioOutput* self) {
	self->reset();
}

void QAudioOutput_Suspend(QAudioOutput* self) {
	self->suspend();
}

void QAudioOutput_Resume(QAudioOutput* self) {
	self->resume();
}

void QAudioOutput_SetBufferSize(QAudioOutput* self, int bytes) {
	self->setBufferSize(static_cast<int>(bytes));
}

int QAudioOutput_BufferSize(const QAudioOutput* self) {
	return self->bufferSize();
}

int QAudioOutput_BytesFree(const QAudioOutput* self) {
	return self->bytesFree();
}

int QAudioOutput_PeriodSize(const QAudioOutput* self) {
	return self->periodSize();
}

void QAudioOutput_SetNotifyInterval(QAudioOutput* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

int QAudioOutput_NotifyInterval(const QAudioOutput* self) {
	return self->notifyInterval();
}

long long QAudioOutput_ProcessedUSecs(const QAudioOutput* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioOutput_ElapsedUSecs(const QAudioOutput* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioOutput_Error(const QAudioOutput* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioOutput_State(const QAudioOutput* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioOutput_SetVolume(QAudioOutput* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioOutput_Volume(const QAudioOutput* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

struct miqt_string QAudioOutput_Category(const QAudioOutput* self) {
	QString _ret = self->category();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioOutput_SetCategory(QAudioOutput* self, struct miqt_string category) {
	QString category_QString = QString::fromUtf8(category.data, category.len);
	self->setCategory(category_QString);
}

void QAudioOutput_StateChanged(QAudioOutput* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioOutput_connect_StateChanged(QAudioOutput* self, intptr_t slot) {
	MiqtVirtualQAudioOutput::connect(self, static_cast<void (QAudioOutput::*)(QAudio::State)>(&QAudioOutput::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioOutput_StateChanged(slot, sigval1);
	});
}

void QAudioOutput_Notify(QAudioOutput* self) {
	self->notify();
}

void QAudioOutput_connect_Notify(QAudioOutput* self, intptr_t slot) {
	MiqtVirtualQAudioOutput::connect(self, static_cast<void (QAudioOutput::*)()>(&QAudioOutput::notify), self, [=]() {
		miqt_exec_callback_QAudioOutput_Notify(slot);
	});
}

struct miqt_string QAudioOutput_Tr2(const char* s, const char* c) {
	QString _ret = QAudioOutput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioOutput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioOutput::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioOutput::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioOutput_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__Event = slot;
}

bool QAudioOutput_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_Event(event);
}

void QAudioOutput_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__EventFilter = slot;
}

bool QAudioOutput_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAudioOutput_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__TimerEvent = slot;
}

void QAudioOutput_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_TimerEvent(event);
}

void QAudioOutput_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__ChildEvent = slot;
}

void QAudioOutput_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_ChildEvent(event);
}

void QAudioOutput_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__CustomEvent = slot;
}

void QAudioOutput_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_CustomEvent(event);
}

void QAudioOutput_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__ConnectNotify = slot;
}

void QAudioOutput_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAudioOutput_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__DisconnectNotify = slot;
}

void QAudioOutput_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAudioOutput_Delete(QAudioOutput* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAudioOutput*>( self );
	} else {
		delete self;
	}
}

