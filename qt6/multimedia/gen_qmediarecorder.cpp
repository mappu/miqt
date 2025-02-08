#include <QChildEvent>
#include <QEvent>
#include <QMediaCaptureSession>
#include <QMediaFormat>
#include <QMediaMetaData>
#include <QMediaRecorder>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <qmediarecorder.h>
#include "gen_qmediarecorder.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaRecorder_recorderStateChanged(intptr_t, int);
void miqt_exec_callback_QMediaRecorder_durationChanged(intptr_t, long long);
void miqt_exec_callback_QMediaRecorder_actualLocationChanged(intptr_t, QUrl*);
void miqt_exec_callback_QMediaRecorder_encoderSettingsChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_errorOccurred(intptr_t, int, struct miqt_string);
void miqt_exec_callback_QMediaRecorder_errorChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_metaDataChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_mediaFormatChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_encodingModeChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_qualityChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_videoResolutionChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_videoFrameRateChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_videoBitRateChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_audioBitRateChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_audioChannelCountChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_audioSampleRateChanged(intptr_t);
bool miqt_exec_callback_QMediaRecorder_event(QMediaRecorder*, intptr_t, QEvent*);
bool miqt_exec_callback_QMediaRecorder_eventFilter(QMediaRecorder*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMediaRecorder_timerEvent(QMediaRecorder*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMediaRecorder_childEvent(QMediaRecorder*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMediaRecorder_customEvent(QMediaRecorder*, intptr_t, QEvent*);
void miqt_exec_callback_QMediaRecorder_connectNotify(QMediaRecorder*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMediaRecorder_disconnectNotify(QMediaRecorder*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMediaRecorder final : public QMediaRecorder {
public:

	MiqtVirtualQMediaRecorder(): QMediaRecorder() {};
	MiqtVirtualQMediaRecorder(QObject* parent): QMediaRecorder(parent) {};

	virtual ~MiqtVirtualQMediaRecorder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QMediaRecorder::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMediaRecorder_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QMediaRecorder::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMediaRecorder::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMediaRecorder_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QMediaRecorder::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QMediaRecorder::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMediaRecorder_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QMediaRecorder::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMediaRecorder::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMediaRecorder_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QMediaRecorder::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMediaRecorder::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMediaRecorder_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QMediaRecorder::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMediaRecorder::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaRecorder_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QMediaRecorder::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMediaRecorder::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaRecorder_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QMediaRecorder::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QMediaRecorder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMediaRecorder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMediaRecorder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMediaRecorder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMediaRecorder* QMediaRecorder_new() {
	return new MiqtVirtualQMediaRecorder();
}

QMediaRecorder* QMediaRecorder_new2(QObject* parent) {
	return new MiqtVirtualQMediaRecorder(parent);
}

void QMediaRecorder_virtbase(QMediaRecorder* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMediaRecorder_metaObject(const QMediaRecorder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaRecorder_metacast(QMediaRecorder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaRecorder_tr(const char* s) {
	QString _ret = QMediaRecorder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaRecorder_isAvailable(const QMediaRecorder* self) {
	return self->isAvailable();
}

QUrl* QMediaRecorder_outputLocation(const QMediaRecorder* self) {
	return new QUrl(self->outputLocation());
}

void QMediaRecorder_setOutputLocation(QMediaRecorder* self, QUrl* location) {
	self->setOutputLocation(*location);
}

QUrl* QMediaRecorder_actualLocation(const QMediaRecorder* self) {
	return new QUrl(self->actualLocation());
}

int QMediaRecorder_recorderState(const QMediaRecorder* self) {
	QMediaRecorder::RecorderState _ret = self->recorderState();
	return static_cast<int>(_ret);
}

int QMediaRecorder_error(const QMediaRecorder* self) {
	QMediaRecorder::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QMediaRecorder_errorString(const QMediaRecorder* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QMediaRecorder_duration(const QMediaRecorder* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

QMediaFormat* QMediaRecorder_mediaFormat(const QMediaRecorder* self) {
	return new QMediaFormat(self->mediaFormat());
}

void QMediaRecorder_setMediaFormat(QMediaRecorder* self, QMediaFormat* format) {
	self->setMediaFormat(*format);
}

int QMediaRecorder_encodingMode(const QMediaRecorder* self) {
	QMediaRecorder::EncodingMode _ret = self->encodingMode();
	return static_cast<int>(_ret);
}

void QMediaRecorder_setEncodingMode(QMediaRecorder* self, int encodingMode) {
	self->setEncodingMode(static_cast<QMediaRecorder::EncodingMode>(encodingMode));
}

int QMediaRecorder_quality(const QMediaRecorder* self) {
	QMediaRecorder::Quality _ret = self->quality();
	return static_cast<int>(_ret);
}

void QMediaRecorder_setQuality(QMediaRecorder* self, int quality) {
	self->setQuality(static_cast<QMediaRecorder::Quality>(quality));
}

QSize* QMediaRecorder_videoResolution(const QMediaRecorder* self) {
	return new QSize(self->videoResolution());
}

void QMediaRecorder_setVideoResolution(QMediaRecorder* self, QSize* videoResolution) {
	self->setVideoResolution(*videoResolution);
}

void QMediaRecorder_setVideoResolution2(QMediaRecorder* self, int width, int height) {
	self->setVideoResolution(static_cast<int>(width), static_cast<int>(height));
}

double QMediaRecorder_videoFrameRate(const QMediaRecorder* self) {
	qreal _ret = self->videoFrameRate();
	return static_cast<double>(_ret);
}

void QMediaRecorder_setVideoFrameRate(QMediaRecorder* self, double frameRate) {
	self->setVideoFrameRate(static_cast<qreal>(frameRate));
}

int QMediaRecorder_videoBitRate(const QMediaRecorder* self) {
	return self->videoBitRate();
}

void QMediaRecorder_setVideoBitRate(QMediaRecorder* self, int bitRate) {
	self->setVideoBitRate(static_cast<int>(bitRate));
}

int QMediaRecorder_audioBitRate(const QMediaRecorder* self) {
	return self->audioBitRate();
}

void QMediaRecorder_setAudioBitRate(QMediaRecorder* self, int bitRate) {
	self->setAudioBitRate(static_cast<int>(bitRate));
}

int QMediaRecorder_audioChannelCount(const QMediaRecorder* self) {
	return self->audioChannelCount();
}

void QMediaRecorder_setAudioChannelCount(QMediaRecorder* self, int channels) {
	self->setAudioChannelCount(static_cast<int>(channels));
}

int QMediaRecorder_audioSampleRate(const QMediaRecorder* self) {
	return self->audioSampleRate();
}

void QMediaRecorder_setAudioSampleRate(QMediaRecorder* self, int sampleRate) {
	self->setAudioSampleRate(static_cast<int>(sampleRate));
}

QMediaMetaData* QMediaRecorder_metaData(const QMediaRecorder* self) {
	return new QMediaMetaData(self->metaData());
}

void QMediaRecorder_setMetaData(QMediaRecorder* self, QMediaMetaData* metaData) {
	self->setMetaData(*metaData);
}

void QMediaRecorder_addMetaData(QMediaRecorder* self, QMediaMetaData* metaData) {
	self->addMetaData(*metaData);
}

QMediaCaptureSession* QMediaRecorder_captureSession(const QMediaRecorder* self) {
	return self->captureSession();
}

void QMediaRecorder_record(QMediaRecorder* self) {
	self->record();
}

void QMediaRecorder_pause(QMediaRecorder* self) {
	self->pause();
}

void QMediaRecorder_stop(QMediaRecorder* self) {
	self->stop();
}

void QMediaRecorder_recorderStateChanged(QMediaRecorder* self, int state) {
	self->recorderStateChanged(static_cast<QMediaRecorder::RecorderState>(state));
}

void QMediaRecorder_connect_recorderStateChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(QMediaRecorder::RecorderState)>(&QMediaRecorder::recorderStateChanged), self, [=](QMediaRecorder::RecorderState state) {
		QMediaRecorder::RecorderState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QMediaRecorder_recorderStateChanged(slot, sigval1);
	});
}

void QMediaRecorder_durationChanged(QMediaRecorder* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QMediaRecorder_connect_durationChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(qint64)>(&QMediaRecorder::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QMediaRecorder_durationChanged(slot, sigval1);
	});
}

void QMediaRecorder_actualLocationChanged(QMediaRecorder* self, QUrl* location) {
	self->actualLocationChanged(*location);
}

void QMediaRecorder_connect_actualLocationChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(const QUrl&)>(&QMediaRecorder::actualLocationChanged), self, [=](const QUrl& location) {
		const QUrl& location_ret = location;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&location_ret);
		miqt_exec_callback_QMediaRecorder_actualLocationChanged(slot, sigval1);
	});
}

void QMediaRecorder_encoderSettingsChanged(QMediaRecorder* self) {
	self->encoderSettingsChanged();
}

void QMediaRecorder_connect_encoderSettingsChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::encoderSettingsChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_encoderSettingsChanged(slot);
	});
}

void QMediaRecorder_errorOccurred(QMediaRecorder* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<QMediaRecorder::Error>(error), errorString_QString);
}

void QMediaRecorder_connect_errorOccurred(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(QMediaRecorder::Error, const QString&)>(&QMediaRecorder::errorOccurred), self, [=](QMediaRecorder::Error error, const QString& errorString) {
		QMediaRecorder::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval2 = errorString_ms;
		miqt_exec_callback_QMediaRecorder_errorOccurred(slot, sigval1, sigval2);
	});
}

void QMediaRecorder_errorChanged(QMediaRecorder* self) {
	self->errorChanged();
}

void QMediaRecorder_connect_errorChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::errorChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_errorChanged(slot);
	});
}

void QMediaRecorder_metaDataChanged(QMediaRecorder* self) {
	self->metaDataChanged();
}

void QMediaRecorder_connect_metaDataChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::metaDataChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_metaDataChanged(slot);
	});
}

void QMediaRecorder_mediaFormatChanged(QMediaRecorder* self) {
	self->mediaFormatChanged();
}

void QMediaRecorder_connect_mediaFormatChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::mediaFormatChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_mediaFormatChanged(slot);
	});
}

void QMediaRecorder_encodingModeChanged(QMediaRecorder* self) {
	self->encodingModeChanged();
}

void QMediaRecorder_connect_encodingModeChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::encodingModeChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_encodingModeChanged(slot);
	});
}

void QMediaRecorder_qualityChanged(QMediaRecorder* self) {
	self->qualityChanged();
}

void QMediaRecorder_connect_qualityChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::qualityChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_qualityChanged(slot);
	});
}

void QMediaRecorder_videoResolutionChanged(QMediaRecorder* self) {
	self->videoResolutionChanged();
}

void QMediaRecorder_connect_videoResolutionChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoResolutionChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_videoResolutionChanged(slot);
	});
}

void QMediaRecorder_videoFrameRateChanged(QMediaRecorder* self) {
	self->videoFrameRateChanged();
}

void QMediaRecorder_connect_videoFrameRateChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoFrameRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_videoFrameRateChanged(slot);
	});
}

void QMediaRecorder_videoBitRateChanged(QMediaRecorder* self) {
	self->videoBitRateChanged();
}

void QMediaRecorder_connect_videoBitRateChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoBitRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_videoBitRateChanged(slot);
	});
}

void QMediaRecorder_audioBitRateChanged(QMediaRecorder* self) {
	self->audioBitRateChanged();
}

void QMediaRecorder_connect_audioBitRateChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioBitRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_audioBitRateChanged(slot);
	});
}

void QMediaRecorder_audioChannelCountChanged(QMediaRecorder* self) {
	self->audioChannelCountChanged();
}

void QMediaRecorder_connect_audioChannelCountChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioChannelCountChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_audioChannelCountChanged(slot);
	});
}

void QMediaRecorder_audioSampleRateChanged(QMediaRecorder* self) {
	self->audioSampleRateChanged();
}

void QMediaRecorder_connect_audioSampleRateChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioSampleRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_audioSampleRateChanged(slot);
	});
}

struct miqt_string QMediaRecorder_tr2(const char* s, const char* c) {
	QString _ret = QMediaRecorder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaRecorder_tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaRecorder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaRecorder_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QMediaRecorder_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_event(event);
}

bool QMediaRecorder_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMediaRecorder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QMediaRecorder_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QMediaRecorder_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_timerEvent(event);
}

bool QMediaRecorder_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QMediaRecorder_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_childEvent(event);
}

bool QMediaRecorder_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QMediaRecorder_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_customEvent(event);
}

bool QMediaRecorder_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QMediaRecorder_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_connectNotify(signal);
}

bool QMediaRecorder_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMediaRecorder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QMediaRecorder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QMediaRecorder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QMediaRecorder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QMediaRecorder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QMediaRecorder_delete(QMediaRecorder* self) {
	delete self;
}

