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

void miqt_exec_callback_QMediaPlayer_sourceChanged(intptr_t, QUrl*);
void miqt_exec_callback_QMediaPlayer_playbackStateChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayer_mediaStatusChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayer_durationChanged(intptr_t, long long);
void miqt_exec_callback_QMediaPlayer_positionChanged(intptr_t, long long);
void miqt_exec_callback_QMediaPlayer_hasAudioChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayer_hasVideoChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayer_bufferProgressChanged(intptr_t, float);
void miqt_exec_callback_QMediaPlayer_seekableChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayer_playbackRateChanged(intptr_t, double);
void miqt_exec_callback_QMediaPlayer_loopsChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_metaDataChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_videoOutputChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_audioOutputChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_tracksChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_activeTracksChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_errorChanged(intptr_t);
void miqt_exec_callback_QMediaPlayer_errorOccurred(intptr_t, int, struct miqt_string);
bool miqt_exec_callback_QMediaPlayer_event(QMediaPlayer*, intptr_t, QEvent*);
bool miqt_exec_callback_QMediaPlayer_eventFilter(QMediaPlayer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMediaPlayer_timerEvent(QMediaPlayer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMediaPlayer_childEvent(QMediaPlayer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMediaPlayer_customEvent(QMediaPlayer*, intptr_t, QEvent*);
void miqt_exec_callback_QMediaPlayer_connectNotify(QMediaPlayer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMediaPlayer_disconnectNotify(QMediaPlayer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMediaPlayer final : public QMediaPlayer {
public:

	MiqtVirtualQMediaPlayer(): QMediaPlayer() {};
	MiqtVirtualQMediaPlayer(QObject* parent): QMediaPlayer(parent) {};

	virtual ~MiqtVirtualQMediaPlayer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QMediaPlayer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMediaPlayer_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QMediaPlayer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMediaPlayer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMediaPlayer_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QMediaPlayer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QMediaPlayer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlayer_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QMediaPlayer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMediaPlayer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlayer_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QMediaPlayer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMediaPlayer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlayer_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QMediaPlayer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMediaPlayer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaPlayer_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QMediaPlayer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMediaPlayer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaPlayer_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QMediaPlayer::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QMediaPlayer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMediaPlayer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMediaPlayer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMediaPlayer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QMediaPlayer_metaObject(const QMediaPlayer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaPlayer_metacast(QMediaPlayer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaPlayer_tr(const char* s) {
	QString _ret = QMediaPlayer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_audioTracks(const QMediaPlayer* self) {
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

struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_videoTracks(const QMediaPlayer* self) {
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

struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_subtitleTracks(const QMediaPlayer* self) {
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

int QMediaPlayer_activeAudioTrack(const QMediaPlayer* self) {
	return self->activeAudioTrack();
}

int QMediaPlayer_activeVideoTrack(const QMediaPlayer* self) {
	return self->activeVideoTrack();
}

int QMediaPlayer_activeSubtitleTrack(const QMediaPlayer* self) {
	return self->activeSubtitleTrack();
}

void QMediaPlayer_setActiveAudioTrack(QMediaPlayer* self, int index) {
	self->setActiveAudioTrack(static_cast<int>(index));
}

void QMediaPlayer_setActiveVideoTrack(QMediaPlayer* self, int index) {
	self->setActiveVideoTrack(static_cast<int>(index));
}

void QMediaPlayer_setActiveSubtitleTrack(QMediaPlayer* self, int index) {
	self->setActiveSubtitleTrack(static_cast<int>(index));
}

void QMediaPlayer_setAudioOutput(QMediaPlayer* self, QAudioOutput* output) {
	self->setAudioOutput(output);
}

QAudioOutput* QMediaPlayer_audioOutput(const QMediaPlayer* self) {
	return self->audioOutput();
}

void QMediaPlayer_setVideoOutput(QMediaPlayer* self, QObject* videoOutput) {
	self->setVideoOutput(videoOutput);
}

QObject* QMediaPlayer_videoOutput(const QMediaPlayer* self) {
	return self->videoOutput();
}

void QMediaPlayer_setVideoSink(QMediaPlayer* self, QVideoSink* sink) {
	self->setVideoSink(sink);
}

QVideoSink* QMediaPlayer_videoSink(const QMediaPlayer* self) {
	return self->videoSink();
}

QUrl* QMediaPlayer_source(const QMediaPlayer* self) {
	return new QUrl(self->source());
}

QIODevice* QMediaPlayer_sourceDevice(const QMediaPlayer* self) {
	return (QIODevice*) self->sourceDevice();
}

int QMediaPlayer_playbackState(const QMediaPlayer* self) {
	QMediaPlayer::PlaybackState _ret = self->playbackState();
	return static_cast<int>(_ret);
}

int QMediaPlayer_mediaStatus(const QMediaPlayer* self) {
	QMediaPlayer::MediaStatus _ret = self->mediaStatus();
	return static_cast<int>(_ret);
}

long long QMediaPlayer_duration(const QMediaPlayer* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

long long QMediaPlayer_position(const QMediaPlayer* self) {
	qint64 _ret = self->position();
	return static_cast<long long>(_ret);
}

bool QMediaPlayer_hasAudio(const QMediaPlayer* self) {
	return self->hasAudio();
}

bool QMediaPlayer_hasVideo(const QMediaPlayer* self) {
	return self->hasVideo();
}

float QMediaPlayer_bufferProgress(const QMediaPlayer* self) {
	return self->bufferProgress();
}

QMediaTimeRange* QMediaPlayer_bufferedTimeRange(const QMediaPlayer* self) {
	return new QMediaTimeRange(self->bufferedTimeRange());
}

bool QMediaPlayer_isSeekable(const QMediaPlayer* self) {
	return self->isSeekable();
}

double QMediaPlayer_playbackRate(const QMediaPlayer* self) {
	qreal _ret = self->playbackRate();
	return static_cast<double>(_ret);
}

int QMediaPlayer_loops(const QMediaPlayer* self) {
	return self->loops();
}

void QMediaPlayer_setLoops(QMediaPlayer* self, int loops) {
	self->setLoops(static_cast<int>(loops));
}

int QMediaPlayer_error(const QMediaPlayer* self) {
	QMediaPlayer::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QMediaPlayer_errorString(const QMediaPlayer* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaPlayer_isAvailable(const QMediaPlayer* self) {
	return self->isAvailable();
}

QMediaMetaData* QMediaPlayer_metaData(const QMediaPlayer* self) {
	return new QMediaMetaData(self->metaData());
}

void QMediaPlayer_play(QMediaPlayer* self) {
	self->play();
}

void QMediaPlayer_pause(QMediaPlayer* self) {
	self->pause();
}

void QMediaPlayer_stop(QMediaPlayer* self) {
	self->stop();
}

void QMediaPlayer_setPosition(QMediaPlayer* self, long long position) {
	self->setPosition(static_cast<qint64>(position));
}

void QMediaPlayer_setPlaybackRate(QMediaPlayer* self, double rate) {
	self->setPlaybackRate(static_cast<qreal>(rate));
}

void QMediaPlayer_setSource(QMediaPlayer* self, QUrl* source) {
	self->setSource(*source);
}

void QMediaPlayer_setSourceDevice(QMediaPlayer* self, QIODevice* device) {
	self->setSourceDevice(device);
}

void QMediaPlayer_sourceChanged(QMediaPlayer* self, QUrl* media) {
	self->sourceChanged(*media);
}

void QMediaPlayer_connect_sourceChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(const QUrl&)>(&QMediaPlayer::sourceChanged), self, [=](const QUrl& media) {
		const QUrl& media_ret = media;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&media_ret);
		miqt_exec_callback_QMediaPlayer_sourceChanged(slot, sigval1);
	});
}

void QMediaPlayer_playbackStateChanged(QMediaPlayer* self, int newState) {
	self->playbackStateChanged(static_cast<QMediaPlayer::PlaybackState>(newState));
}

void QMediaPlayer_connect_playbackStateChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::PlaybackState)>(&QMediaPlayer::playbackStateChanged), self, [=](QMediaPlayer::PlaybackState newState) {
		QMediaPlayer::PlaybackState newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		miqt_exec_callback_QMediaPlayer_playbackStateChanged(slot, sigval1);
	});
}

void QMediaPlayer_mediaStatusChanged(QMediaPlayer* self, int status) {
	self->mediaStatusChanged(static_cast<QMediaPlayer::MediaStatus>(status));
}

void QMediaPlayer_connect_mediaStatusChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::MediaStatus)>(&QMediaPlayer::mediaStatusChanged), self, [=](QMediaPlayer::MediaStatus status) {
		QMediaPlayer::MediaStatus status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		miqt_exec_callback_QMediaPlayer_mediaStatusChanged(slot, sigval1);
	});
}

void QMediaPlayer_durationChanged(QMediaPlayer* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QMediaPlayer_connect_durationChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(qint64)>(&QMediaPlayer::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QMediaPlayer_durationChanged(slot, sigval1);
	});
}

void QMediaPlayer_positionChanged(QMediaPlayer* self, long long position) {
	self->positionChanged(static_cast<qint64>(position));
}

void QMediaPlayer_connect_positionChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(qint64)>(&QMediaPlayer::positionChanged), self, [=](qint64 position) {
		qint64 position_ret = position;
		long long sigval1 = static_cast<long long>(position_ret);
		miqt_exec_callback_QMediaPlayer_positionChanged(slot, sigval1);
	});
}

void QMediaPlayer_hasAudioChanged(QMediaPlayer* self, bool available) {
	self->hasAudioChanged(available);
}

void QMediaPlayer_connect_hasAudioChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::hasAudioChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QMediaPlayer_hasAudioChanged(slot, sigval1);
	});
}

void QMediaPlayer_hasVideoChanged(QMediaPlayer* self, bool videoAvailable) {
	self->hasVideoChanged(videoAvailable);
}

void QMediaPlayer_connect_hasVideoChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::hasVideoChanged), self, [=](bool videoAvailable) {
		bool sigval1 = videoAvailable;
		miqt_exec_callback_QMediaPlayer_hasVideoChanged(slot, sigval1);
	});
}

void QMediaPlayer_bufferProgressChanged(QMediaPlayer* self, float progress) {
	self->bufferProgressChanged(static_cast<float>(progress));
}

void QMediaPlayer_connect_bufferProgressChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(float)>(&QMediaPlayer::bufferProgressChanged), self, [=](float progress) {
		float sigval1 = progress;
		miqt_exec_callback_QMediaPlayer_bufferProgressChanged(slot, sigval1);
	});
}

void QMediaPlayer_seekableChanged(QMediaPlayer* self, bool seekable) {
	self->seekableChanged(seekable);
}

void QMediaPlayer_connect_seekableChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::seekableChanged), self, [=](bool seekable) {
		bool sigval1 = seekable;
		miqt_exec_callback_QMediaPlayer_seekableChanged(slot, sigval1);
	});
}

void QMediaPlayer_playbackRateChanged(QMediaPlayer* self, double rate) {
	self->playbackRateChanged(static_cast<qreal>(rate));
}

void QMediaPlayer_connect_playbackRateChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(qreal)>(&QMediaPlayer::playbackRateChanged), self, [=](qreal rate) {
		qreal rate_ret = rate;
		double sigval1 = static_cast<double>(rate_ret);
		miqt_exec_callback_QMediaPlayer_playbackRateChanged(slot, sigval1);
	});
}

void QMediaPlayer_loopsChanged(QMediaPlayer* self) {
	self->loopsChanged();
}

void QMediaPlayer_connect_loopsChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::loopsChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_loopsChanged(slot);
	});
}

void QMediaPlayer_metaDataChanged(QMediaPlayer* self) {
	self->metaDataChanged();
}

void QMediaPlayer_connect_metaDataChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::metaDataChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_metaDataChanged(slot);
	});
}

void QMediaPlayer_videoOutputChanged(QMediaPlayer* self) {
	self->videoOutputChanged();
}

void QMediaPlayer_connect_videoOutputChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::videoOutputChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_videoOutputChanged(slot);
	});
}

void QMediaPlayer_audioOutputChanged(QMediaPlayer* self) {
	self->audioOutputChanged();
}

void QMediaPlayer_connect_audioOutputChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::audioOutputChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_audioOutputChanged(slot);
	});
}

void QMediaPlayer_tracksChanged(QMediaPlayer* self) {
	self->tracksChanged();
}

void QMediaPlayer_connect_tracksChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::tracksChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_tracksChanged(slot);
	});
}

void QMediaPlayer_activeTracksChanged(QMediaPlayer* self) {
	self->activeTracksChanged();
}

void QMediaPlayer_connect_activeTracksChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::activeTracksChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_activeTracksChanged(slot);
	});
}

void QMediaPlayer_errorChanged(QMediaPlayer* self) {
	self->errorChanged();
}

void QMediaPlayer_connect_errorChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::errorChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_errorChanged(slot);
	});
}

void QMediaPlayer_errorOccurred(QMediaPlayer* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<QMediaPlayer::Error>(error), errorString_QString);
}

void QMediaPlayer_connect_errorOccurred(QMediaPlayer* self, intptr_t slot) {
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
		miqt_exec_callback_QMediaPlayer_errorOccurred(slot, sigval1, sigval2);
	});
}

struct miqt_string QMediaPlayer_tr2(const char* s, const char* c) {
	QString _ret = QMediaPlayer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayer_tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaPlayer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaPlayer_setSourceDevice2(QMediaPlayer* self, QIODevice* device, QUrl* sourceUrl) {
	self->setSourceDevice(device, *sourceUrl);
}

bool QMediaPlayer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QMediaPlayer_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_event(event);
}

bool QMediaPlayer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMediaPlayer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QMediaPlayer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QMediaPlayer_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_timerEvent(event);
}

bool QMediaPlayer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QMediaPlayer_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_childEvent(event);
}

bool QMediaPlayer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QMediaPlayer_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_customEvent(event);
}

bool QMediaPlayer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QMediaPlayer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_connectNotify(signal);
}

bool QMediaPlayer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMediaPlayer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaPlayer*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QMediaPlayer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QMediaPlayer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QMediaPlayer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QMediaPlayer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QMediaPlayer_delete(QMediaPlayer* self) {
	delete self;
}

