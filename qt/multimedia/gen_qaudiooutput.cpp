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

void miqt_exec_callback_QAudioOutput_stateChanged(intptr_t, int);
void miqt_exec_callback_QAudioOutput_notify(intptr_t);
bool miqt_exec_callback_QAudioOutput_event(QAudioOutput*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioOutput_eventFilter(QAudioOutput*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioOutput_timerEvent(QAudioOutput*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioOutput_childEvent(QAudioOutput*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioOutput_customEvent(QAudioOutput*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioOutput_connectNotify(QAudioOutput*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioOutput_disconnectNotify(QAudioOutput*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioOutput final : public QAudioOutput {
public:

	MiqtVirtualQAudioOutput(): QAudioOutput() {};
	MiqtVirtualQAudioOutput(const QAudioDeviceInfo& audioDeviceInfo): QAudioOutput(audioDeviceInfo) {};
	MiqtVirtualQAudioOutput(const QAudioFormat& format): QAudioOutput(format) {};
	MiqtVirtualQAudioOutput(const QAudioFormat& format, QObject* parent): QAudioOutput(format, parent) {};
	MiqtVirtualQAudioOutput(const QAudioDeviceInfo& audioDeviceInfo, const QAudioFormat& format): QAudioOutput(audioDeviceInfo, format) {};
	MiqtVirtualQAudioOutput(const QAudioDeviceInfo& audioDeviceInfo, const QAudioFormat& format, QObject* parent): QAudioOutput(audioDeviceInfo, format, parent) {};

	virtual ~MiqtVirtualQAudioOutput() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioOutput::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioOutput_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAudioOutput::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioOutput::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioOutput_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAudioOutput::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioOutput::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAudioOutput::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioOutput::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAudioOutput::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioOutput::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAudioOutput::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioOutput::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioOutput_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAudioOutput::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioOutput::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioOutput_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAudioOutput::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioOutput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioOutput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioOutput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioOutput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAudioOutput_metaObject(const QAudioOutput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioOutput_metacast(QAudioOutput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioOutput_tr(const char* s) {
	QString _ret = QAudioOutput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_trUtf8(const char* s) {
	QString _ret = QAudioOutput::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QAudioOutput_format(const QAudioOutput* self) {
	return new QAudioFormat(self->format());
}

void QAudioOutput_start(QAudioOutput* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioOutput_start2(QAudioOutput* self) {
	return self->start();
}

void QAudioOutput_stop(QAudioOutput* self) {
	self->stop();
}

void QAudioOutput_reset(QAudioOutput* self) {
	self->reset();
}

void QAudioOutput_suspend(QAudioOutput* self) {
	self->suspend();
}

void QAudioOutput_resume(QAudioOutput* self) {
	self->resume();
}

void QAudioOutput_setBufferSize(QAudioOutput* self, int bytes) {
	self->setBufferSize(static_cast<int>(bytes));
}

int QAudioOutput_bufferSize(const QAudioOutput* self) {
	return self->bufferSize();
}

int QAudioOutput_bytesFree(const QAudioOutput* self) {
	return self->bytesFree();
}

int QAudioOutput_periodSize(const QAudioOutput* self) {
	return self->periodSize();
}

void QAudioOutput_setNotifyInterval(QAudioOutput* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

int QAudioOutput_notifyInterval(const QAudioOutput* self) {
	return self->notifyInterval();
}

long long QAudioOutput_processedUSecs(const QAudioOutput* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioOutput_elapsedUSecs(const QAudioOutput* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioOutput_error(const QAudioOutput* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioOutput_state(const QAudioOutput* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioOutput_setVolume(QAudioOutput* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioOutput_volume(const QAudioOutput* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

struct miqt_string QAudioOutput_category(const QAudioOutput* self) {
	QString _ret = self->category();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioOutput_setCategory(QAudioOutput* self, struct miqt_string category) {
	QString category_QString = QString::fromUtf8(category.data, category.len);
	self->setCategory(category_QString);
}

void QAudioOutput_stateChanged(QAudioOutput* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioOutput_connect_stateChanged(QAudioOutput* self, intptr_t slot) {
	MiqtVirtualQAudioOutput::connect(self, static_cast<void (QAudioOutput::*)(QAudio::State)>(&QAudioOutput::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioOutput_stateChanged(slot, sigval1);
	});
}

void QAudioOutput_notify(QAudioOutput* self) {
	self->notify();
}

void QAudioOutput_connect_notify(QAudioOutput* self, intptr_t slot) {
	MiqtVirtualQAudioOutput::connect(self, static_cast<void (QAudioOutput::*)()>(&QAudioOutput::notify), self, [=]() {
		miqt_exec_callback_QAudioOutput_notify(slot);
	});
}

struct miqt_string QAudioOutput_tr2(const char* s, const char* c) {
	QString _ret = QAudioOutput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioOutput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_trUtf82(const char* s, const char* c) {
	QString _ret = QAudioOutput::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioOutput::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioOutput_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAudioOutput_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_event(event);
}

bool QAudioOutput_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioOutput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAudioOutput_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioOutput_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_timerEvent(event);
}

bool QAudioOutput_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioOutput_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_childEvent(event);
}

bool QAudioOutput_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioOutput_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_customEvent(event);
}

bool QAudioOutput_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioOutput_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_connectNotify(signal);
}

bool QAudioOutput_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioOutput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAudioOutput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAudioOutput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAudioOutput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAudioOutput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAudioOutput_delete(QAudioOutput* self) {
	delete self;
}

