#include <QAudioDevice>
#include <QAudioFormat>
#include <QAudioSink>
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
#include <qaudiosink.h>
#include "gen_qaudiosink.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioSink_StateChanged(intptr_t, int);
bool miqt_exec_callback_QAudioSink_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioSink_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioSink_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioSink_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioSink_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioSink_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioSink_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioSink final : public QAudioSink {
public:

	MiqtVirtualQAudioSink(): QAudioSink() {};
	MiqtVirtualQAudioSink(const QAudioDevice& audioDeviceInfo): QAudioSink(audioDeviceInfo) {};
	MiqtVirtualQAudioSink(const QAudioFormat& format): QAudioSink(format) {};
	MiqtVirtualQAudioSink(const QAudioFormat& format, QObject* parent): QAudioSink(format, parent) {};
	MiqtVirtualQAudioSink(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format): QAudioSink(audioDeviceInfo, format) {};
	MiqtVirtualQAudioSink(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format, QObject* parent): QAudioSink(audioDeviceInfo, format, parent) {};

	virtual ~MiqtVirtualQAudioSink() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAudioSink::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioSink_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAudioSink::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAudioSink::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioSink_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAudioSink::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAudioSink::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioSink_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAudioSink::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAudioSink::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioSink_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAudioSink::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAudioSink::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioSink_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAudioSink::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAudioSink::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioSink_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAudioSink::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAudioSink::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioSink_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAudioSink::disconnectNotify(*signal);

	}

};

QAudioSink* QAudioSink_new() {
	return new MiqtVirtualQAudioSink();
}

QAudioSink* QAudioSink_new2(QAudioDevice* audioDeviceInfo) {
	return new MiqtVirtualQAudioSink(*audioDeviceInfo);
}

QAudioSink* QAudioSink_new3(QAudioFormat* format) {
	return new MiqtVirtualQAudioSink(*format);
}

QAudioSink* QAudioSink_new4(QAudioFormat* format, QObject* parent) {
	return new MiqtVirtualQAudioSink(*format, parent);
}

QAudioSink* QAudioSink_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format) {
	return new MiqtVirtualQAudioSink(*audioDeviceInfo, *format);
}

QAudioSink* QAudioSink_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent) {
	return new MiqtVirtualQAudioSink(*audioDeviceInfo, *format, parent);
}

void QAudioSink_virtbase(QAudioSink* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioSink_MetaObject(const QAudioSink* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioSink_Metacast(QAudioSink* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioSink_Tr(const char* s) {
	QString _ret = QAudioSink::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioSink_IsNull(const QAudioSink* self) {
	return self->isNull();
}

QAudioFormat* QAudioSink_Format(const QAudioSink* self) {
	return new QAudioFormat(self->format());
}

void QAudioSink_Start(QAudioSink* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioSink_Start2(QAudioSink* self) {
	return self->start();
}

void QAudioSink_Stop(QAudioSink* self) {
	self->stop();
}

void QAudioSink_Reset(QAudioSink* self) {
	self->reset();
}

void QAudioSink_Suspend(QAudioSink* self) {
	self->suspend();
}

void QAudioSink_Resume(QAudioSink* self) {
	self->resume();
}

void QAudioSink_SetBufferSize(QAudioSink* self, ptrdiff_t bytes) {
	self->setBufferSize((qsizetype)(bytes));
}

ptrdiff_t QAudioSink_BufferSize(const QAudioSink* self) {
	qsizetype _ret = self->bufferSize();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QAudioSink_BytesFree(const QAudioSink* self) {
	qsizetype _ret = self->bytesFree();
	return static_cast<ptrdiff_t>(_ret);
}

long long QAudioSink_ProcessedUSecs(const QAudioSink* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioSink_ElapsedUSecs(const QAudioSink* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioSink_Error(const QAudioSink* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioSink_State(const QAudioSink* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioSink_SetVolume(QAudioSink* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioSink_Volume(const QAudioSink* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

void QAudioSink_StateChanged(QAudioSink* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioSink_connect_StateChanged(QAudioSink* self, intptr_t slot) {
	MiqtVirtualQAudioSink::connect(self, static_cast<void (QAudioSink::*)(QAudio::State)>(&QAudioSink::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioSink_StateChanged(slot, sigval1);
	});
}

struct miqt_string QAudioSink_Tr2(const char* s, const char* c) {
	QString _ret = QAudioSink::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSink_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioSink::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioSink_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAudioSink_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioSink*)(self) )->virtualbase_Event(event);
}

bool QAudioSink_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAudioSink_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioSink*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAudioSink_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAudioSink_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioSink*)(self) )->virtualbase_TimerEvent(event);
}

bool QAudioSink_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAudioSink_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioSink*)(self) )->virtualbase_ChildEvent(event);
}

bool QAudioSink_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAudioSink_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioSink*)(self) )->virtualbase_CustomEvent(event);
}

bool QAudioSink_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAudioSink_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioSink*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAudioSink_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAudioSink_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioSink*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAudioSink_Delete(QAudioSink* self) {
	delete self;
}

