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

void miqt_exec_callback_QMediaRecorder_RecorderStateChanged(intptr_t, int);
void miqt_exec_callback_QMediaRecorder_DurationChanged(intptr_t, long long);
void miqt_exec_callback_QMediaRecorder_ActualLocationChanged(intptr_t, QUrl*);
void miqt_exec_callback_QMediaRecorder_EncoderSettingsChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_ErrorOccurred(intptr_t, int, struct miqt_string);
void miqt_exec_callback_QMediaRecorder_ErrorChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_MetaDataChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_MediaFormatChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_EncodingModeChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_QualityChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_VideoResolutionChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_VideoFrameRateChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_VideoBitRateChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_AudioBitRateChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_AudioChannelCountChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_AudioSampleRateChanged(intptr_t);
bool miqt_exec_callback_QMediaRecorder_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QMediaRecorder_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMediaRecorder_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMediaRecorder_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMediaRecorder_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMediaRecorder_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMediaRecorder_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMediaRecorder final : public QMediaRecorder {
public:

	MiqtVirtualQMediaRecorder(): QMediaRecorder() {};
	MiqtVirtualQMediaRecorder(QObject* parent): QMediaRecorder(parent) {};

	virtual ~MiqtVirtualQMediaRecorder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QMediaRecorder::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMediaRecorder_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QMediaRecorder::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMediaRecorder::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMediaRecorder_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QMediaRecorder::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QMediaRecorder::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMediaRecorder_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QMediaRecorder::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMediaRecorder::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMediaRecorder_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMediaRecorder::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMediaRecorder::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMediaRecorder_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMediaRecorder::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMediaRecorder::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaRecorder_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMediaRecorder::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMediaRecorder::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaRecorder_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMediaRecorder::disconnectNotify(*signal);

	}

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

QMetaObject* QMediaRecorder_MetaObject(const QMediaRecorder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaRecorder_Metacast(QMediaRecorder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaRecorder_Tr(const char* s) {
	QString _ret = QMediaRecorder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaRecorder_IsAvailable(const QMediaRecorder* self) {
	return self->isAvailable();
}

QUrl* QMediaRecorder_OutputLocation(const QMediaRecorder* self) {
	return new QUrl(self->outputLocation());
}

void QMediaRecorder_SetOutputLocation(QMediaRecorder* self, QUrl* location) {
	self->setOutputLocation(*location);
}

QUrl* QMediaRecorder_ActualLocation(const QMediaRecorder* self) {
	return new QUrl(self->actualLocation());
}

int QMediaRecorder_RecorderState(const QMediaRecorder* self) {
	QMediaRecorder::RecorderState _ret = self->recorderState();
	return static_cast<int>(_ret);
}

int QMediaRecorder_Error(const QMediaRecorder* self) {
	QMediaRecorder::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QMediaRecorder_ErrorString(const QMediaRecorder* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QMediaRecorder_Duration(const QMediaRecorder* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

QMediaFormat* QMediaRecorder_MediaFormat(const QMediaRecorder* self) {
	return new QMediaFormat(self->mediaFormat());
}

void QMediaRecorder_SetMediaFormat(QMediaRecorder* self, QMediaFormat* format) {
	self->setMediaFormat(*format);
}

int QMediaRecorder_EncodingMode(const QMediaRecorder* self) {
	QMediaRecorder::EncodingMode _ret = self->encodingMode();
	return static_cast<int>(_ret);
}

void QMediaRecorder_SetEncodingMode(QMediaRecorder* self, int encodingMode) {
	self->setEncodingMode(static_cast<QMediaRecorder::EncodingMode>(encodingMode));
}

int QMediaRecorder_Quality(const QMediaRecorder* self) {
	QMediaRecorder::Quality _ret = self->quality();
	return static_cast<int>(_ret);
}

void QMediaRecorder_SetQuality(QMediaRecorder* self, int quality) {
	self->setQuality(static_cast<QMediaRecorder::Quality>(quality));
}

QSize* QMediaRecorder_VideoResolution(const QMediaRecorder* self) {
	return new QSize(self->videoResolution());
}

void QMediaRecorder_SetVideoResolution(QMediaRecorder* self, QSize* videoResolution) {
	self->setVideoResolution(*videoResolution);
}

void QMediaRecorder_SetVideoResolution2(QMediaRecorder* self, int width, int height) {
	self->setVideoResolution(static_cast<int>(width), static_cast<int>(height));
}

double QMediaRecorder_VideoFrameRate(const QMediaRecorder* self) {
	qreal _ret = self->videoFrameRate();
	return static_cast<double>(_ret);
}

void QMediaRecorder_SetVideoFrameRate(QMediaRecorder* self, double frameRate) {
	self->setVideoFrameRate(static_cast<qreal>(frameRate));
}

int QMediaRecorder_VideoBitRate(const QMediaRecorder* self) {
	return self->videoBitRate();
}

void QMediaRecorder_SetVideoBitRate(QMediaRecorder* self, int bitRate) {
	self->setVideoBitRate(static_cast<int>(bitRate));
}

int QMediaRecorder_AudioBitRate(const QMediaRecorder* self) {
	return self->audioBitRate();
}

void QMediaRecorder_SetAudioBitRate(QMediaRecorder* self, int bitRate) {
	self->setAudioBitRate(static_cast<int>(bitRate));
}

int QMediaRecorder_AudioChannelCount(const QMediaRecorder* self) {
	return self->audioChannelCount();
}

void QMediaRecorder_SetAudioChannelCount(QMediaRecorder* self, int channels) {
	self->setAudioChannelCount(static_cast<int>(channels));
}

int QMediaRecorder_AudioSampleRate(const QMediaRecorder* self) {
	return self->audioSampleRate();
}

void QMediaRecorder_SetAudioSampleRate(QMediaRecorder* self, int sampleRate) {
	self->setAudioSampleRate(static_cast<int>(sampleRate));
}

QMediaMetaData* QMediaRecorder_MetaData(const QMediaRecorder* self) {
	return new QMediaMetaData(self->metaData());
}

void QMediaRecorder_SetMetaData(QMediaRecorder* self, QMediaMetaData* metaData) {
	self->setMetaData(*metaData);
}

void QMediaRecorder_AddMetaData(QMediaRecorder* self, QMediaMetaData* metaData) {
	self->addMetaData(*metaData);
}

QMediaCaptureSession* QMediaRecorder_CaptureSession(const QMediaRecorder* self) {
	return self->captureSession();
}

void QMediaRecorder_Record(QMediaRecorder* self) {
	self->record();
}

void QMediaRecorder_Pause(QMediaRecorder* self) {
	self->pause();
}

void QMediaRecorder_Stop(QMediaRecorder* self) {
	self->stop();
}

void QMediaRecorder_RecorderStateChanged(QMediaRecorder* self, int state) {
	self->recorderStateChanged(static_cast<QMediaRecorder::RecorderState>(state));
}

void QMediaRecorder_connect_RecorderStateChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(QMediaRecorder::RecorderState)>(&QMediaRecorder::recorderStateChanged), self, [=](QMediaRecorder::RecorderState state) {
		QMediaRecorder::RecorderState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QMediaRecorder_RecorderStateChanged(slot, sigval1);
	});
}

void QMediaRecorder_DurationChanged(QMediaRecorder* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QMediaRecorder_connect_DurationChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(qint64)>(&QMediaRecorder::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QMediaRecorder_DurationChanged(slot, sigval1);
	});
}

void QMediaRecorder_ActualLocationChanged(QMediaRecorder* self, QUrl* location) {
	self->actualLocationChanged(*location);
}

void QMediaRecorder_connect_ActualLocationChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(const QUrl&)>(&QMediaRecorder::actualLocationChanged), self, [=](const QUrl& location) {
		const QUrl& location_ret = location;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&location_ret);
		miqt_exec_callback_QMediaRecorder_ActualLocationChanged(slot, sigval1);
	});
}

void QMediaRecorder_EncoderSettingsChanged(QMediaRecorder* self) {
	self->encoderSettingsChanged();
}

void QMediaRecorder_connect_EncoderSettingsChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::encoderSettingsChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_EncoderSettingsChanged(slot);
	});
}

void QMediaRecorder_ErrorOccurred(QMediaRecorder* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<QMediaRecorder::Error>(error), errorString_QString);
}

void QMediaRecorder_connect_ErrorOccurred(QMediaRecorder* self, intptr_t slot) {
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
		miqt_exec_callback_QMediaRecorder_ErrorOccurred(slot, sigval1, sigval2);
	});
}

void QMediaRecorder_ErrorChanged(QMediaRecorder* self) {
	self->errorChanged();
}

void QMediaRecorder_connect_ErrorChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::errorChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_ErrorChanged(slot);
	});
}

void QMediaRecorder_MetaDataChanged(QMediaRecorder* self) {
	self->metaDataChanged();
}

void QMediaRecorder_connect_MetaDataChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::metaDataChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_MetaDataChanged(slot);
	});
}

void QMediaRecorder_MediaFormatChanged(QMediaRecorder* self) {
	self->mediaFormatChanged();
}

void QMediaRecorder_connect_MediaFormatChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::mediaFormatChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_MediaFormatChanged(slot);
	});
}

void QMediaRecorder_EncodingModeChanged(QMediaRecorder* self) {
	self->encodingModeChanged();
}

void QMediaRecorder_connect_EncodingModeChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::encodingModeChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_EncodingModeChanged(slot);
	});
}

void QMediaRecorder_QualityChanged(QMediaRecorder* self) {
	self->qualityChanged();
}

void QMediaRecorder_connect_QualityChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::qualityChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_QualityChanged(slot);
	});
}

void QMediaRecorder_VideoResolutionChanged(QMediaRecorder* self) {
	self->videoResolutionChanged();
}

void QMediaRecorder_connect_VideoResolutionChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoResolutionChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_VideoResolutionChanged(slot);
	});
}

void QMediaRecorder_VideoFrameRateChanged(QMediaRecorder* self) {
	self->videoFrameRateChanged();
}

void QMediaRecorder_connect_VideoFrameRateChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoFrameRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_VideoFrameRateChanged(slot);
	});
}

void QMediaRecorder_VideoBitRateChanged(QMediaRecorder* self) {
	self->videoBitRateChanged();
}

void QMediaRecorder_connect_VideoBitRateChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoBitRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_VideoBitRateChanged(slot);
	});
}

void QMediaRecorder_AudioBitRateChanged(QMediaRecorder* self) {
	self->audioBitRateChanged();
}

void QMediaRecorder_connect_AudioBitRateChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioBitRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_AudioBitRateChanged(slot);
	});
}

void QMediaRecorder_AudioChannelCountChanged(QMediaRecorder* self) {
	self->audioChannelCountChanged();
}

void QMediaRecorder_connect_AudioChannelCountChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioChannelCountChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_AudioChannelCountChanged(slot);
	});
}

void QMediaRecorder_AudioSampleRateChanged(QMediaRecorder* self) {
	self->audioSampleRateChanged();
}

void QMediaRecorder_connect_AudioSampleRateChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioSampleRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_AudioSampleRateChanged(slot);
	});
}

struct miqt_string QMediaRecorder_Tr2(const char* s, const char* c) {
	QString _ret = QMediaRecorder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaRecorder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaRecorder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaRecorder_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QMediaRecorder_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_Event(event);
}

bool QMediaRecorder_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QMediaRecorder_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QMediaRecorder_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QMediaRecorder_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_TimerEvent(event);
}

bool QMediaRecorder_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QMediaRecorder_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_ChildEvent(event);
}

bool QMediaRecorder_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QMediaRecorder_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_CustomEvent(event);
}

bool QMediaRecorder_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QMediaRecorder_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QMediaRecorder_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QMediaRecorder_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMediaRecorder_Delete(QMediaRecorder* self) {
	delete self;
}

