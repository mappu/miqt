#include <QAudioInput>
#include <QAudioOutput>
#include <QCamera>
#include <QChildEvent>
#include <QEvent>
#include <QImageCapture>
#include <QMediaCaptureSession>
#include <QMediaRecorder>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoSink>
#include <qmediacapturesession.h>
#include "gen_qmediacapturesession.h"
#include "_cgo_export.h"

class MiqtVirtualQMediaCaptureSession : public virtual QMediaCaptureSession {
public:

	MiqtVirtualQMediaCaptureSession(): QMediaCaptureSession() {};
	MiqtVirtualQMediaCaptureSession(QObject* parent): QMediaCaptureSession(parent) {};

	virtual ~MiqtVirtualQMediaCaptureSession() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QMediaCaptureSession::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMediaCaptureSession_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QMediaCaptureSession::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMediaCaptureSession::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMediaCaptureSession_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QMediaCaptureSession::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QMediaCaptureSession::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMediaCaptureSession_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QMediaCaptureSession::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMediaCaptureSession::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMediaCaptureSession_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMediaCaptureSession::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMediaCaptureSession::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMediaCaptureSession_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMediaCaptureSession::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMediaCaptureSession::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaCaptureSession_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMediaCaptureSession::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMediaCaptureSession::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaCaptureSession_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMediaCaptureSession::disconnectNotify(*signal);

	}

};

void QMediaCaptureSession_new(QMediaCaptureSession** outptr_QMediaCaptureSession, QObject** outptr_QObject) {
	MiqtVirtualQMediaCaptureSession* ret = new MiqtVirtualQMediaCaptureSession();
	*outptr_QMediaCaptureSession = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QMediaCaptureSession_new2(QObject* parent, QMediaCaptureSession** outptr_QMediaCaptureSession, QObject** outptr_QObject) {
	MiqtVirtualQMediaCaptureSession* ret = new MiqtVirtualQMediaCaptureSession(parent);
	*outptr_QMediaCaptureSession = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QMediaCaptureSession_MetaObject(const QMediaCaptureSession* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaCaptureSession_Metacast(QMediaCaptureSession* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaCaptureSession_Tr(const char* s) {
	QString _ret = QMediaCaptureSession::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioInput* QMediaCaptureSession_AudioInput(const QMediaCaptureSession* self) {
	return self->audioInput();
}

void QMediaCaptureSession_SetAudioInput(QMediaCaptureSession* self, QAudioInput* input) {
	self->setAudioInput(input);
}

QCamera* QMediaCaptureSession_Camera(const QMediaCaptureSession* self) {
	return self->camera();
}

void QMediaCaptureSession_SetCamera(QMediaCaptureSession* self, QCamera* camera) {
	self->setCamera(camera);
}

QImageCapture* QMediaCaptureSession_ImageCapture(QMediaCaptureSession* self) {
	return self->imageCapture();
}

void QMediaCaptureSession_SetImageCapture(QMediaCaptureSession* self, QImageCapture* imageCapture) {
	self->setImageCapture(imageCapture);
}

QMediaRecorder* QMediaCaptureSession_Recorder(QMediaCaptureSession* self) {
	return self->recorder();
}

void QMediaCaptureSession_SetRecorder(QMediaCaptureSession* self, QMediaRecorder* recorder) {
	self->setRecorder(recorder);
}

void QMediaCaptureSession_SetVideoOutput(QMediaCaptureSession* self, QObject* output) {
	self->setVideoOutput(output);
}

QObject* QMediaCaptureSession_VideoOutput(const QMediaCaptureSession* self) {
	return self->videoOutput();
}

void QMediaCaptureSession_SetVideoSink(QMediaCaptureSession* self, QVideoSink* sink) {
	self->setVideoSink(sink);
}

QVideoSink* QMediaCaptureSession_VideoSink(const QMediaCaptureSession* self) {
	return self->videoSink();
}

void QMediaCaptureSession_SetAudioOutput(QMediaCaptureSession* self, QAudioOutput* output) {
	self->setAudioOutput(output);
}

QAudioOutput* QMediaCaptureSession_AudioOutput(const QMediaCaptureSession* self) {
	return self->audioOutput();
}

void QMediaCaptureSession_AudioInputChanged(QMediaCaptureSession* self) {
	self->audioInputChanged();
}

void QMediaCaptureSession_connect_AudioInputChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::audioInputChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_AudioInputChanged(slot);
	});
}

void QMediaCaptureSession_CameraChanged(QMediaCaptureSession* self) {
	self->cameraChanged();
}

void QMediaCaptureSession_connect_CameraChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::cameraChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_CameraChanged(slot);
	});
}

void QMediaCaptureSession_ImageCaptureChanged(QMediaCaptureSession* self) {
	self->imageCaptureChanged();
}

void QMediaCaptureSession_connect_ImageCaptureChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::imageCaptureChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_ImageCaptureChanged(slot);
	});
}

void QMediaCaptureSession_RecorderChanged(QMediaCaptureSession* self) {
	self->recorderChanged();
}

void QMediaCaptureSession_connect_RecorderChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::recorderChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_RecorderChanged(slot);
	});
}

void QMediaCaptureSession_VideoOutputChanged(QMediaCaptureSession* self) {
	self->videoOutputChanged();
}

void QMediaCaptureSession_connect_VideoOutputChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::videoOutputChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_VideoOutputChanged(slot);
	});
}

void QMediaCaptureSession_AudioOutputChanged(QMediaCaptureSession* self) {
	self->audioOutputChanged();
}

void QMediaCaptureSession_connect_AudioOutputChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::audioOutputChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_AudioOutputChanged(slot);
	});
}

struct miqt_string QMediaCaptureSession_Tr2(const char* s, const char* c) {
	QString _ret = QMediaCaptureSession::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaCaptureSession_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaCaptureSession::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaCaptureSession_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) )->handle__Event = slot;
}

bool QMediaCaptureSession_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_Event(event);
}

void QMediaCaptureSession_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) )->handle__EventFilter = slot;
}

bool QMediaCaptureSession_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_EventFilter(watched, event);
}

void QMediaCaptureSession_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) )->handle__TimerEvent = slot;
}

void QMediaCaptureSession_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_TimerEvent(event);
}

void QMediaCaptureSession_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) )->handle__ChildEvent = slot;
}

void QMediaCaptureSession_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_ChildEvent(event);
}

void QMediaCaptureSession_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) )->handle__CustomEvent = slot;
}

void QMediaCaptureSession_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_CustomEvent(event);
}

void QMediaCaptureSession_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) )->handle__ConnectNotify = slot;
}

void QMediaCaptureSession_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_ConnectNotify(signal);
}

void QMediaCaptureSession_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) )->handle__DisconnectNotify = slot;
}

void QMediaCaptureSession_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMediaCaptureSession_Delete(QMediaCaptureSession* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQMediaCaptureSession*>( self );
	} else {
		delete self;
	}
}

