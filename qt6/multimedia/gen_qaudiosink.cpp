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

void miqt_exec_callback_QAudioSink_stateChanged(intptr_t, int);
bool miqt_exec_callback_QAudioSink_event(QAudioSink*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioSink_eventFilter(QAudioSink*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioSink_timerEvent(QAudioSink*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioSink_childEvent(QAudioSink*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioSink_customEvent(QAudioSink*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioSink_connectNotify(QAudioSink*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioSink_disconnectNotify(QAudioSink*, intptr_t, QMetaMethod*);
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
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioSink::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioSink_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAudioSink::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioSink::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioSink_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAudioSink::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioSink::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioSink_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAudioSink::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioSink::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioSink_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAudioSink::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioSink::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioSink_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAudioSink::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioSink::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioSink_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAudioSink::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioSink::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioSink_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAudioSink::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioSink_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioSink_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioSink_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioSink_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAudioSink_metaObject(const QAudioSink* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioSink_metacast(QAudioSink* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioSink_tr(const char* s) {
	QString _ret = QAudioSink::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioSink_isNull(const QAudioSink* self) {
	return self->isNull();
}

QAudioFormat* QAudioSink_format(const QAudioSink* self) {
	return new QAudioFormat(self->format());
}

void QAudioSink_start(QAudioSink* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioSink_start2(QAudioSink* self) {
	return self->start();
}

void QAudioSink_stop(QAudioSink* self) {
	self->stop();
}

void QAudioSink_reset(QAudioSink* self) {
	self->reset();
}

void QAudioSink_suspend(QAudioSink* self) {
	self->suspend();
}

void QAudioSink_resume(QAudioSink* self) {
	self->resume();
}

void QAudioSink_setBufferSize(QAudioSink* self, ptrdiff_t bytes) {
	self->setBufferSize((qsizetype)(bytes));
}

ptrdiff_t QAudioSink_bufferSize(const QAudioSink* self) {
	qsizetype _ret = self->bufferSize();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QAudioSink_bytesFree(const QAudioSink* self) {
	qsizetype _ret = self->bytesFree();
	return static_cast<ptrdiff_t>(_ret);
}

long long QAudioSink_processedUSecs(const QAudioSink* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioSink_elapsedUSecs(const QAudioSink* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioSink_error(const QAudioSink* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioSink_state(const QAudioSink* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioSink_setVolume(QAudioSink* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioSink_volume(const QAudioSink* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

void QAudioSink_stateChanged(QAudioSink* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioSink_connect_stateChanged(QAudioSink* self, intptr_t slot) {
	MiqtVirtualQAudioSink::connect(self, static_cast<void (QAudioSink::*)(QAudio::State)>(&QAudioSink::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioSink_stateChanged(slot, sigval1);
	});
}

struct miqt_string QAudioSink_tr2(const char* s, const char* c) {
	QString _ret = QAudioSink::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSink_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioSink::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioSink_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAudioSink_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioSink*)(self) )->virtualbase_event(event);
}

bool QAudioSink_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioSink_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioSink*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAudioSink_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioSink_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioSink*)(self) )->virtualbase_timerEvent(event);
}

bool QAudioSink_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioSink_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioSink*)(self) )->virtualbase_childEvent(event);
}

bool QAudioSink_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioSink_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioSink*)(self) )->virtualbase_customEvent(event);
}

bool QAudioSink_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioSink_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioSink*)(self) )->virtualbase_connectNotify(signal);
}

bool QAudioSink_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioSink_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioSink*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAudioSink_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAudioSink_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAudioSink_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAudioSink_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioSink* self_cast = dynamic_cast<MiqtVirtualQAudioSink*>( (QAudioSink*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAudioSink_delete(QAudioSink* self) {
	delete self;
}

