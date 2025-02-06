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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaCaptureSession_audioInputChanged(intptr_t);
void miqt_exec_callback_QMediaCaptureSession_cameraChanged(intptr_t);
void miqt_exec_callback_QMediaCaptureSession_imageCaptureChanged(intptr_t);
void miqt_exec_callback_QMediaCaptureSession_recorderChanged(intptr_t);
void miqt_exec_callback_QMediaCaptureSession_videoOutputChanged(intptr_t);
void miqt_exec_callback_QMediaCaptureSession_audioOutputChanged(intptr_t);
bool miqt_exec_callback_QMediaCaptureSession_event(QMediaCaptureSession*, intptr_t, QEvent*);
bool miqt_exec_callback_QMediaCaptureSession_eventFilter(QMediaCaptureSession*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMediaCaptureSession_timerEvent(QMediaCaptureSession*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMediaCaptureSession_childEvent(QMediaCaptureSession*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMediaCaptureSession_customEvent(QMediaCaptureSession*, intptr_t, QEvent*);
void miqt_exec_callback_QMediaCaptureSession_connectNotify(QMediaCaptureSession*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMediaCaptureSession_disconnectNotify(QMediaCaptureSession*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMediaCaptureSession final : public QMediaCaptureSession {
public:

	MiqtVirtualQMediaCaptureSession(): QMediaCaptureSession() {};
	MiqtVirtualQMediaCaptureSession(QObject* parent): QMediaCaptureSession(parent) {};

	virtual ~MiqtVirtualQMediaCaptureSession() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QMediaCaptureSession::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMediaCaptureSession_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QMediaCaptureSession::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMediaCaptureSession::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMediaCaptureSession_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QMediaCaptureSession::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QMediaCaptureSession::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMediaCaptureSession_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QMediaCaptureSession::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMediaCaptureSession::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMediaCaptureSession_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QMediaCaptureSession::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMediaCaptureSession::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMediaCaptureSession_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QMediaCaptureSession::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMediaCaptureSession::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaCaptureSession_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QMediaCaptureSession::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMediaCaptureSession::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaCaptureSession_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QMediaCaptureSession::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QMediaCaptureSession_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMediaCaptureSession_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMediaCaptureSession_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMediaCaptureSession_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMediaCaptureSession* QMediaCaptureSession_new() {
	return new MiqtVirtualQMediaCaptureSession();
}

QMediaCaptureSession* QMediaCaptureSession_new2(QObject* parent) {
	return new MiqtVirtualQMediaCaptureSession(parent);
}

void QMediaCaptureSession_virtbase(QMediaCaptureSession* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMediaCaptureSession_metaObject(const QMediaCaptureSession* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaCaptureSession_metacast(QMediaCaptureSession* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaCaptureSession_tr(const char* s) {
	QString _ret = QMediaCaptureSession::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioInput* QMediaCaptureSession_audioInput(const QMediaCaptureSession* self) {
	return self->audioInput();
}

void QMediaCaptureSession_setAudioInput(QMediaCaptureSession* self, QAudioInput* input) {
	self->setAudioInput(input);
}

QCamera* QMediaCaptureSession_camera(const QMediaCaptureSession* self) {
	return self->camera();
}

void QMediaCaptureSession_setCamera(QMediaCaptureSession* self, QCamera* camera) {
	self->setCamera(camera);
}

QImageCapture* QMediaCaptureSession_imageCapture(QMediaCaptureSession* self) {
	return self->imageCapture();
}

void QMediaCaptureSession_setImageCapture(QMediaCaptureSession* self, QImageCapture* imageCapture) {
	self->setImageCapture(imageCapture);
}

QMediaRecorder* QMediaCaptureSession_recorder(QMediaCaptureSession* self) {
	return self->recorder();
}

void QMediaCaptureSession_setRecorder(QMediaCaptureSession* self, QMediaRecorder* recorder) {
	self->setRecorder(recorder);
}

void QMediaCaptureSession_setVideoOutput(QMediaCaptureSession* self, QObject* output) {
	self->setVideoOutput(output);
}

QObject* QMediaCaptureSession_videoOutput(const QMediaCaptureSession* self) {
	return self->videoOutput();
}

void QMediaCaptureSession_setVideoSink(QMediaCaptureSession* self, QVideoSink* sink) {
	self->setVideoSink(sink);
}

QVideoSink* QMediaCaptureSession_videoSink(const QMediaCaptureSession* self) {
	return self->videoSink();
}

void QMediaCaptureSession_setAudioOutput(QMediaCaptureSession* self, QAudioOutput* output) {
	self->setAudioOutput(output);
}

QAudioOutput* QMediaCaptureSession_audioOutput(const QMediaCaptureSession* self) {
	return self->audioOutput();
}

void QMediaCaptureSession_audioInputChanged(QMediaCaptureSession* self) {
	self->audioInputChanged();
}

void QMediaCaptureSession_connect_audioInputChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::audioInputChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_audioInputChanged(slot);
	});
}

void QMediaCaptureSession_cameraChanged(QMediaCaptureSession* self) {
	self->cameraChanged();
}

void QMediaCaptureSession_connect_cameraChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::cameraChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_cameraChanged(slot);
	});
}

void QMediaCaptureSession_imageCaptureChanged(QMediaCaptureSession* self) {
	self->imageCaptureChanged();
}

void QMediaCaptureSession_connect_imageCaptureChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::imageCaptureChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_imageCaptureChanged(slot);
	});
}

void QMediaCaptureSession_recorderChanged(QMediaCaptureSession* self) {
	self->recorderChanged();
}

void QMediaCaptureSession_connect_recorderChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::recorderChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_recorderChanged(slot);
	});
}

void QMediaCaptureSession_videoOutputChanged(QMediaCaptureSession* self) {
	self->videoOutputChanged();
}

void QMediaCaptureSession_connect_videoOutputChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::videoOutputChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_videoOutputChanged(slot);
	});
}

void QMediaCaptureSession_audioOutputChanged(QMediaCaptureSession* self) {
	self->audioOutputChanged();
}

void QMediaCaptureSession_connect_audioOutputChanged(QMediaCaptureSession* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession::connect(self, static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::audioOutputChanged), self, [=]() {
		miqt_exec_callback_QMediaCaptureSession_audioOutputChanged(slot);
	});
}

struct miqt_string QMediaCaptureSession_tr2(const char* s, const char* c) {
	QString _ret = QMediaCaptureSession::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaCaptureSession_tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaCaptureSession::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaCaptureSession_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession* self_cast = dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QMediaCaptureSession_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_event(event);
}

bool QMediaCaptureSession_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession* self_cast = dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMediaCaptureSession_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QMediaCaptureSession_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession* self_cast = dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QMediaCaptureSession_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_timerEvent(event);
}

bool QMediaCaptureSession_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession* self_cast = dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QMediaCaptureSession_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_childEvent(event);
}

bool QMediaCaptureSession_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession* self_cast = dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QMediaCaptureSession_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_customEvent(event);
}

bool QMediaCaptureSession_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession* self_cast = dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QMediaCaptureSession_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_connectNotify(signal);
}

bool QMediaCaptureSession_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaCaptureSession* self_cast = dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMediaCaptureSession_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaCaptureSession*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QMediaCaptureSession_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMediaCaptureSession* self_cast = dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QMediaCaptureSession_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMediaCaptureSession* self_cast = dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QMediaCaptureSession_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMediaCaptureSession* self_cast = dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QMediaCaptureSession_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMediaCaptureSession* self_cast = dynamic_cast<MiqtVirtualQMediaCaptureSession*>( (QMediaCaptureSession*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QMediaCaptureSession_delete(QMediaCaptureSession* self) {
	delete self;
}

