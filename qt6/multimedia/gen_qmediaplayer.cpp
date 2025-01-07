#include <QAudioOutput>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMediaMetaData>
#include <QMediaPlayer>
#include <QMediaTimeRange>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVideoSink>
#include <qmediaplayer.h>
#include "gen_qmediaplayer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaPlayer_SourceChanged(intptr_t, QUrl*);
void miqt_exec_callback_QMediaPlayer_PlaybackStateChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayer_MediaStatusChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayer_DurationChanged(intptr_t, long long);
void miqt_exec_callback_QMediaPlayer_PositionChanged(intptr_t, long long);
void miqt_exec_callback_QMediaPlayer_HasAudioChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayer_HasVideoChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayer_BufferProgressChanged(intptr_t, float);
void miqt_exec_callback_QMediaPlayer_SeekableChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayer_PlaybackRateChanged(intptr_t, double);
void miqt_exec_callback_QMediaPlayer_LoopsChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_MetaDataChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_VideoOutputChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_AudioOutputChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_TracksChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_ActiveTracksChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_ErrorChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_ErrorOccurred(intptr_t, int, struct miqt_string);
bool miqt_exec_callback_QMediaPlayer_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QMediaPlayer_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMediaPlayer_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMediaPlayer_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMediaPlayer_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMediaPlayer_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMediaPlayer_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMediaPlayer : public virtual QMediaPlayer {
public:

	MiqtVirtualQMediaPlayer(): QMediaPlayer() {};
	MiqtVirtualQMediaPlayer(QObject* parent): QMediaPlayer(parent) {};

	virtual ~MiqtVirtualQMediaPlayer() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QMediaPlayer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMediaPlayer_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QMediaPlayer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMediaPlayer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMediaPlayer_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QMediaPlayer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QMediaPlayer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlayer_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QMediaPlayer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMediaPlayer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlayer_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMediaPlayer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMediaPlayer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlayer_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMediaPlayer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMediaPlayer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaPlayer_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMediaPlayer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMediaPlayer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaPlayer_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMediaPlayer::disconnectNotify(*signal);

	}

};

QMediaPlayer* QMediaPlayer_new() {
	return new MiqtVirtualQMediaPlayer();
}

QMediaPlayer* QMediaPlayer_new2(QObject* parent) {
	return new MiqtVirtualQMediaPlayer(parent);
}

void QMediaPlayer_virtbase(QMediaPlayer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMediaPlayer_MetaObject(const QMediaPlayer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaPlayer_Metacast(QMediaPlayer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaPlayer_Tr(const char* s) {
	QString _ret = QMediaPlayer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_AudioTracks(const QMediaPlayer* self) {
	QList<QMediaMetaData> _ret = self->audioTracks();
	// Convert QList<> from C++ memory to manually-managed C memory
	QMediaMetaData** _arr = static_cast<QMediaMetaData**>(malloc(sizeof(QMediaMetaData*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QMediaMetaData(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_VideoTracks(const QMediaPlayer* self) {
	QList<QMediaMetaData> _ret = self->videoTracks();
	// Convert QList<> from C++ memory to manually-managed C memory
	QMediaMetaData** _arr = static_cast<QMediaMetaData**>(malloc(sizeof(QMediaMetaData*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QMediaMetaData(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_SubtitleTracks(const QMediaPlayer* self) {
	QList<QMediaMetaData> _ret = self->subtitleTracks();
	// Convert QList<> from C++ memory to manually-managed C memory
	QMediaMetaData** _arr = static_cast<QMediaMetaData**>(malloc(sizeof(QMediaMetaData*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QMediaMetaData(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QMediaPlayer_ActiveAudioTrack(const QMediaPlayer* self) {
	return self->activeAudioTrack();
}

int QMediaPlayer_ActiveVideoTrack(const QMediaPlayer* self) {
	return self->activeVideoTrack();
}

int QMediaPlayer_ActiveSubtitleTrack(const QMediaPlayer* self) {
	return self->activeSubtitleTrack();
}

void QMediaPlayer_SetActiveAudioTrack(QMediaPlayer* self, int index) {
	self->setActiveAudioTrack(static_cast<int>(index));
}

void QMediaPlayer_SetActiveVideoTrack(QMediaPlayer* self, int index) {
	self->setActiveVideoTrack(static_cast<int>(index));
}

void QMediaPlayer_SetActiveSubtitleTrack(QMediaPlayer* self, int index) {
	self->setActiveSubtitleTrack(static_cast<int>(index));
}

void QMediaPlayer_SetAudioOutput(QMediaPlayer* self, QAudioOutput* output) {
	self->setAudioOutput(output);
}

QAudioOutput* QMediaPlayer_AudioOutput(const QMediaPlayer* self) {
	return self->audioOutput();
}

void QMediaPlayer_SetVideoOutput(QMediaPlayer* self, QObject* videoOutput) {
	self->setVideoOutput(videoOutput);
}

QObject* QMediaPlayer_VideoOutput(const QMediaPlayer* self) {
	return self->videoOutput();
}

void QMediaPlayer_SetVideoSink(QMediaPlayer* self, QVideoSink* sink) {
	self->setVideoSink(sink);
}

QVideoSink* QMediaPlayer_VideoSink(const QMediaPlayer* self) {
	return self->videoSink();
}

QUrl* QMediaPlayer_Source(const QMediaPlayer* self) {
	return new QUrl(self->source());
}

QIODevice* QMediaPlayer_SourceDevice(const QMediaPlayer* self) {
	return (QIODevice*) self->sourceDevice();
}

int QMediaPlayer_PlaybackState(const QMediaPlayer* self) {
	QMediaPlayer::PlaybackState _ret = self->playbackState();
	return static_cast<int>(_ret);
}

int QMediaPlayer_MediaStatus(const QMediaPlayer* self) {
	QMediaPlayer::MediaStatus _ret = self->mediaStatus();
	return static_cast<int>(_ret);
}

long long QMediaPlayer_Duration(const QMediaPlayer* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

long long QMediaPlayer_Position(const QMediaPlayer* self) {
	qint64 _ret = self->position();
	return static_cast<long long>(_ret);
}

bool QMediaPlayer_HasAudio(const QMediaPlayer* self) {
	return self->hasAudio();
}

bool QMediaPlayer_HasVideo(const QMediaPlayer* self) {
	return self->hasVideo();
}

float QMediaPlayer_BufferProgress(const QMediaPlayer* self) {
	return self->bufferProgress();
}

QMediaTimeRange* QMediaPlayer_BufferedTimeRange(const QMediaPlayer* self) {
	return new QMediaTimeRange(self->bufferedTimeRange());
}

bool QMediaPlayer_IsSeekable(const QMediaPlayer* self) {
	return self->isSeekable();
}

double QMediaPlayer_PlaybackRate(const QMediaPlayer* self) {
	qreal _ret = self->playbackRate();
	return static_cast<double>(_ret);
}

int QMediaPlayer_Loops(const QMediaPlayer* self) {
	return self->loops();
}

void QMediaPlayer_SetLoops(QMediaPlayer* self, int loops) {
	self->setLoops(static_cast<int>(loops));
}

int QMediaPlayer_Error(const QMediaPlayer* self) {
	QMediaPlayer::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QMediaPlayer_ErrorString(const QMediaPlayer* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaPlayer_IsAvailable(const QMediaPlayer* self) {
	return self->isAvailable();
}

QMediaMetaData* QMediaPlayer_MetaData(const QMediaPlayer* self) {
	return new QMediaMetaData(self->metaData());
}

void QMediaPlayer_Play(QMediaPlayer* self) {
	self->play();
}

void QMediaPlayer_Pause(QMediaPlayer* self) {
	self->pause();
}

void QMediaPlayer_Stop(QMediaPlayer* self) {
	self->stop();
}

void QMediaPlayer_SetPosition(QMediaPlayer* self, long long position) {
	self->setPosition(static_cast<qint64>(position));
}

void QMediaPlayer_SetPlaybackRate(QMediaPlayer* self, double rate) {
	self->setPlaybackRate(static_cast<qreal>(rate));
}

void QMediaPlayer_SetSource(QMediaPlayer* self, QUrl* source) {
	self->setSource(*source);
}

void QMediaPlayer_SetSourceDevice(QMediaPlayer* self, QIODevice* device) {
	self->setSourceDevice(device);
}

void QMediaPlayer_SourceChanged(QMediaPlayer* self, QUrl* media) {
	self->sourceChanged(*media);
}

void QMediaPlayer_connect_SourceChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(const QUrl&)>(&QMediaPlayer::sourceChanged), self, [=](const QUrl& media) {
		const QUrl& media_ret = media;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&media_ret);
		miqt_exec_callback_QMediaPlayer_SourceChanged(slot, sigval1);
	});
}

void QMediaPlayer_PlaybackStateChanged(QMediaPlayer* self, int newState) {
	self->playbackStateChanged(static_cast<QMediaPlayer::PlaybackState>(newState));
}

void QMediaPlayer_connect_PlaybackStateChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::PlaybackState)>(&QMediaPlayer::playbackStateChanged), self, [=](QMediaPlayer::PlaybackState newState) {
		QMediaPlayer::PlaybackState newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		miqt_exec_callback_QMediaPlayer_PlaybackStateChanged(slot, sigval1);
	});
}

void QMediaPlayer_MediaStatusChanged(QMediaPlayer* self, int status) {
	self->mediaStatusChanged(static_cast<QMediaPlayer::MediaStatus>(status));
}

void QMediaPlayer_connect_MediaStatusChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::MediaStatus)>(&QMediaPlayer::mediaStatusChanged), self, [=](QMediaPlayer::MediaStatus status) {
		QMediaPlayer::MediaStatus status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		miqt_exec_callback_QMediaPlayer_MediaStatusChanged(slot, sigval1);
	});
}

void QMediaPlayer_DurationChanged(QMediaPlayer* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QMediaPlayer_connect_DurationChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(qint64)>(&QMediaPlayer::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QMediaPlayer_DurationChanged(slot, sigval1);
	});
}

void QMediaPlayer_PositionChanged(QMediaPlayer* self, long long position) {
	self->positionChanged(static_cast<qint64>(position));
}

void QMediaPlayer_connect_PositionChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(qint64)>(&QMediaPlayer::positionChanged), self, [=](qint64 position) {
		qint64 position_ret = position;
		long long sigval1 = static_cast<long long>(position_ret);
		miqt_exec_callback_QMediaPlayer_PositionChanged(slot, sigval1);
	});
}

void QMediaPlayer_HasAudioChanged(QMediaPlayer* self, bool available) {
	self->hasAudioChanged(available);
}

void QMediaPlayer_connect_HasAudioChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::hasAudioChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QMediaPlayer_HasAudioChanged(slot, sigval1);
	});
}

void QMediaPlayer_HasVideoChanged(QMediaPlayer* self, bool videoAvailable) {
	self->hasVideoChanged(videoAvailable);
}

void QMediaPlayer_connect_HasVideoChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::hasVideoChanged), self, [=](bool videoAvailable) {
		bool sigval1 = videoAvailable;
		miqt_exec_callback_QMediaPlayer_HasVideoChanged(slot, sigval1);
	});
}

void QMediaPlayer_BufferProgressChanged(QMediaPlayer* self, float progress) {
	self->bufferProgressChanged(static_cast<float>(progress));
}

void QMediaPlayer_connect_BufferProgressChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(float)>(&QMediaPlayer::bufferProgressChanged), self, [=](float progress) {
		float sigval1 = progress;
		miqt_exec_callback_QMediaPlayer_BufferProgressChanged(slot, sigval1);
	});
}

void QMediaPlayer_SeekableChanged(QMediaPlayer* self, bool seekable) {
	self->seekableChanged(seekable);
}

void QMediaPlayer_connect_SeekableChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::seekableChanged), self, [=](bool seekable) {
		bool sigval1 = seekable;
		miqt_exec_callback_QMediaPlayer_SeekableChanged(slot, sigval1);
	});
}

void QMediaPlayer_PlaybackRateChanged(QMediaPlayer* self, double rate) {
	self->playbackRateChanged(static_cast<qreal>(rate));
}

void QMediaPlayer_connect_PlaybackRateChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(qreal)>(&QMediaPlayer::playbackRateChanged), self, [=](qreal rate) {
		qreal rate_ret = rate;
		double sigval1 = static_cast<double>(rate_ret);
		miqt_exec_callback_QMediaPlayer_PlaybackRateChanged(slot, sigval1);
	});
}

void QMediaPlayer_LoopsChanged(QMediaPlayer* self) {
	self->loopsChanged();
}

void QMediaPlayer_connect_LoopsChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::loopsChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_LoopsChanged(slot);
	});
}

void QMediaPlayer_MetaDataChanged(QMediaPlayer* self) {
	self->metaDataChanged();
}

void QMediaPlayer_connect_MetaDataChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::metaDataChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_MetaDataChanged(slot);
	});
}

void QMediaPlayer_VideoOutputChanged(QMediaPlayer* self) {
	self->videoOutputChanged();
}

void QMediaPlayer_connect_VideoOutputChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::videoOutputChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_VideoOutputChanged(slot);
	});
}

void QMediaPlayer_AudioOutputChanged(QMediaPlayer* self) {
	self->audioOutputChanged();
}

void QMediaPlayer_connect_AudioOutputChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::audioOutputChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_AudioOutputChanged(slot);
	});
}

void QMediaPlayer_TracksChanged(QMediaPlayer* self) {
	self->tracksChanged();
}

void QMediaPlayer_connect_TracksChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::tracksChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_TracksChanged(slot);
	});
}

void QMediaPlayer_ActiveTracksChanged(QMediaPlayer* self) {
	self->activeTracksChanged();
}

void QMediaPlayer_connect_ActiveTracksChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::activeTracksChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_ActiveTracksChanged(slot);
	});
}

void QMediaPlayer_ErrorChanged(QMediaPlayer* self) {
	self->errorChanged();
}

void QMediaPlayer_connect_ErrorChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::errorChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_ErrorChanged(slot);
	});
}

void QMediaPlayer_ErrorOccurred(QMediaPlayer* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<QMediaPlayer::Error>(error), errorString_QString);
}

void QMediaPlayer_connect_ErrorOccurred(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::Error, const QString&)>(&QMediaPlayer::errorOccurred), self, [=](QMediaPlayer::Error error, const QString& errorString) {
		QMediaPlayer::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval2 = errorString_ms;
		miqt_exec_callback_QMediaPlayer_ErrorOccurred(slot, sigval1, sigval2);
	});
}

struct miqt_string QMediaPlayer_Tr2(const char* s, const char* c) {
	QString _ret = QMediaPlayer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaPlayer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaPlayer_SetSourceDevice2(QMediaPlayer* self, QIODevice* device, QUrl* sourceUrl) {
	self->setSourceDevice(device, *sourceUrl);
}

void QMediaPlayer_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) )->handle__Event = slot;
}

bool QMediaPlayer_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_Event(event);
}

void QMediaPlayer_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) )->handle__EventFilter = slot;
}

bool QMediaPlayer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_EventFilter(watched, event);
}

void QMediaPlayer_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) )->handle__TimerEvent = slot;
}

void QMediaPlayer_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_TimerEvent(event);
}

void QMediaPlayer_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) )->handle__ChildEvent = slot;
}

void QMediaPlayer_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_ChildEvent(event);
}

void QMediaPlayer_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) )->handle__CustomEvent = slot;
}

void QMediaPlayer_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_CustomEvent(event);
}

void QMediaPlayer_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) )->handle__ConnectNotify = slot;
}

void QMediaPlayer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_ConnectNotify(signal);
}

void QMediaPlayer_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) )->handle__DisconnectNotify = slot;
}

void QMediaPlayer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMediaPlayer_Delete(QMediaPlayer* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQMediaPlayer*>( self );
	} else {
		delete self;
	}
}

