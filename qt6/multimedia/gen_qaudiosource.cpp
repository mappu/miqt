#include <QAudioDevice>
#include <QAudioFormat>
#include <QAudioSource>
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
#include <qaudiosource.h>
#include "gen_qaudiosource.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioSource_stateChanged(intptr_t, int);
bool miqt_exec_callback_QAudioSource_event(QAudioSource*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioSource_eventFilter(QAudioSource*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioSource_timerEvent(QAudioSource*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioSource_childEvent(QAudioSource*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioSource_customEvent(QAudioSource*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioSource_connectNotify(QAudioSource*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioSource_disconnectNotify(QAudioSource*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioSource final : public QAudioSource {
public:

	MiqtVirtualQAudioSource(): QAudioSource() {};
	MiqtVirtualQAudioSource(const QAudioDevice& audioDeviceInfo): QAudioSource(audioDeviceInfo) {};
	MiqtVirtualQAudioSource(const QAudioFormat& format): QAudioSource(format) {};
	MiqtVirtualQAudioSource(const QAudioFormat& format, QObject* parent): QAudioSource(format, parent) {};
	MiqtVirtualQAudioSource(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format): QAudioSource(audioDeviceInfo, format) {};
	MiqtVirtualQAudioSource(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format, QObject* parent): QAudioSource(audioDeviceInfo, format, parent) {};

	virtual ~MiqtVirtualQAudioSource() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioSource::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioSource_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAudioSource::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioSource::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioSource_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAudioSource::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioSource::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioSource_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAudioSource::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioSource::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioSource_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAudioSource::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioSource::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioSource_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAudioSource::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioSource::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioSource_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAudioSource::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioSource::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioSource_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAudioSource::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioSource* QAudioSource_new() {
	return new MiqtVirtualQAudioSource();
}

QAudioSource* QAudioSource_new2(QAudioDevice* audioDeviceInfo) {
	return new MiqtVirtualQAudioSource(*audioDeviceInfo);
}

QAudioSource* QAudioSource_new3(QAudioFormat* format) {
	return new MiqtVirtualQAudioSource(*format);
}

QAudioSource* QAudioSource_new4(QAudioFormat* format, QObject* parent) {
	return new MiqtVirtualQAudioSource(*format, parent);
}

QAudioSource* QAudioSource_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format) {
	return new MiqtVirtualQAudioSource(*audioDeviceInfo, *format);
}

QAudioSource* QAudioSource_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent) {
	return new MiqtVirtualQAudioSource(*audioDeviceInfo, *format, parent);
}

void QAudioSource_virtbase(QAudioSource* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioSource_metaObject(const QAudioSource* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioSource_metacast(QAudioSource* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioSource_tr(const char* s) {
	QString _ret = QAudioSource::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioSource_isNull(const QAudioSource* self) {
	return self->isNull();
}

QAudioFormat* QAudioSource_format(const QAudioSource* self) {
	return new QAudioFormat(self->format());
}

void QAudioSource_start(QAudioSource* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioSource_start2(QAudioSource* self) {
	return self->start();
}

void QAudioSource_stop(QAudioSource* self) {
	self->stop();
}

void QAudioSource_reset(QAudioSource* self) {
	self->reset();
}

void QAudioSource_suspend(QAudioSource* self) {
	self->suspend();
}

void QAudioSource_resume(QAudioSource* self) {
	self->resume();
}

void QAudioSource_setBufferSize(QAudioSource* self, ptrdiff_t bytes) {
	self->setBufferSize((qsizetype)(bytes));
}

ptrdiff_t QAudioSource_bufferSize(const QAudioSource* self) {
	qsizetype _ret = self->bufferSize();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QAudioSource_bytesAvailable(const QAudioSource* self) {
	qsizetype _ret = self->bytesAvailable();
	return static_cast<ptrdiff_t>(_ret);
}

void QAudioSource_setVolume(QAudioSource* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioSource_volume(const QAudioSource* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

long long QAudioSource_processedUSecs(const QAudioSource* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioSource_elapsedUSecs(const QAudioSource* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioSource_error(const QAudioSource* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioSource_state(const QAudioSource* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioSource_stateChanged(QAudioSource* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioSource_connect_stateChanged(QAudioSource* self, intptr_t slot) {
	MiqtVirtualQAudioSource::connect(self, static_cast<void (QAudioSource::*)(QAudio::State)>(&QAudioSource::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioSource_stateChanged(slot, sigval1);
	});
}

struct miqt_string QAudioSource_tr2(const char* s, const char* c) {
	QString _ret = QAudioSource::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSource_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioSource::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioSource_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioSource* self_cast = dynamic_cast<MiqtVirtualQAudioSource*>( (QAudioSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAudioSource_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioSource*)(self) )->virtualbase_event(event);
}

bool QAudioSource_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioSource* self_cast = dynamic_cast<MiqtVirtualQAudioSource*>( (QAudioSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioSource*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAudioSource_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSource* self_cast = dynamic_cast<MiqtVirtualQAudioSource*>( (QAudioSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioSource_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioSource*)(self) )->virtualbase_timerEvent(event);
}

bool QAudioSource_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSource* self_cast = dynamic_cast<MiqtVirtualQAudioSource*>( (QAudioSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioSource_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioSource*)(self) )->virtualbase_childEvent(event);
}

bool QAudioSource_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSource* self_cast = dynamic_cast<MiqtVirtualQAudioSource*>( (QAudioSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioSource_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioSource*)(self) )->virtualbase_customEvent(event);
}

bool QAudioSource_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioSource* self_cast = dynamic_cast<MiqtVirtualQAudioSource*>( (QAudioSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioSource_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioSource*)(self) )->virtualbase_connectNotify(signal);
}

bool QAudioSource_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioSource* self_cast = dynamic_cast<MiqtVirtualQAudioSource*>( (QAudioSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioSource*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAudioSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioSource* self_cast = dynamic_cast<MiqtVirtualQAudioSource*>( (QAudioSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAudioSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioSource* self_cast = dynamic_cast<MiqtVirtualQAudioSource*>( (QAudioSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAudioSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioSource* self_cast = dynamic_cast<MiqtVirtualQAudioSource*>( (QAudioSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAudioSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioSource* self_cast = dynamic_cast<MiqtVirtualQAudioSource*>( (QAudioSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAudioSource_delete(QAudioSource* self) {
	delete self;
}

