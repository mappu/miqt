#include <QAudioOutput>
#include <QIODevice>
#include <QList>
#include <QMediaMetaData>
#include <QMediaPlayer>
#include <QMediaTimeRange>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVideoSink>
#include <qmediaplayer.h>
#include "gen_qmediaplayer.h"
#include "_cgo_export.h"

QMediaPlayer* QMediaPlayer_new() {
	return new QMediaPlayer();
}

QMediaPlayer* QMediaPlayer_new2(QObject* parent) {
	return new QMediaPlayer(parent);
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
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(const QUrl&)>(&QMediaPlayer::sourceChanged), self, [=](const QUrl& media) {
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
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::PlaybackState)>(&QMediaPlayer::playbackStateChanged), self, [=](QMediaPlayer::PlaybackState newState) {
		QMediaPlayer::PlaybackState newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		miqt_exec_callback_QMediaPlayer_PlaybackStateChanged(slot, sigval1);
	});
}

void QMediaPlayer_MediaStatusChanged(QMediaPlayer* self, int status) {
	self->mediaStatusChanged(static_cast<QMediaPlayer::MediaStatus>(status));
}

void QMediaPlayer_connect_MediaStatusChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::MediaStatus)>(&QMediaPlayer::mediaStatusChanged), self, [=](QMediaPlayer::MediaStatus status) {
		QMediaPlayer::MediaStatus status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		miqt_exec_callback_QMediaPlayer_MediaStatusChanged(slot, sigval1);
	});
}

void QMediaPlayer_DurationChanged(QMediaPlayer* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QMediaPlayer_connect_DurationChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(qint64)>(&QMediaPlayer::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QMediaPlayer_DurationChanged(slot, sigval1);
	});
}

void QMediaPlayer_PositionChanged(QMediaPlayer* self, long long position) {
	self->positionChanged(static_cast<qint64>(position));
}

void QMediaPlayer_connect_PositionChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(qint64)>(&QMediaPlayer::positionChanged), self, [=](qint64 position) {
		qint64 position_ret = position;
		long long sigval1 = static_cast<long long>(position_ret);
		miqt_exec_callback_QMediaPlayer_PositionChanged(slot, sigval1);
	});
}

void QMediaPlayer_HasAudioChanged(QMediaPlayer* self, bool available) {
	self->hasAudioChanged(available);
}

void QMediaPlayer_connect_HasAudioChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::hasAudioChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QMediaPlayer_HasAudioChanged(slot, sigval1);
	});
}

void QMediaPlayer_HasVideoChanged(QMediaPlayer* self, bool videoAvailable) {
	self->hasVideoChanged(videoAvailable);
}

void QMediaPlayer_connect_HasVideoChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::hasVideoChanged), self, [=](bool videoAvailable) {
		bool sigval1 = videoAvailable;
		miqt_exec_callback_QMediaPlayer_HasVideoChanged(slot, sigval1);
	});
}

void QMediaPlayer_BufferProgressChanged(QMediaPlayer* self, float progress) {
	self->bufferProgressChanged(static_cast<float>(progress));
}

void QMediaPlayer_connect_BufferProgressChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(float)>(&QMediaPlayer::bufferProgressChanged), self, [=](float progress) {
		float sigval1 = progress;
		miqt_exec_callback_QMediaPlayer_BufferProgressChanged(slot, sigval1);
	});
}

void QMediaPlayer_SeekableChanged(QMediaPlayer* self, bool seekable) {
	self->seekableChanged(seekable);
}

void QMediaPlayer_connect_SeekableChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::seekableChanged), self, [=](bool seekable) {
		bool sigval1 = seekable;
		miqt_exec_callback_QMediaPlayer_SeekableChanged(slot, sigval1);
	});
}

void QMediaPlayer_PlaybackRateChanged(QMediaPlayer* self, double rate) {
	self->playbackRateChanged(static_cast<qreal>(rate));
}

void QMediaPlayer_connect_PlaybackRateChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(qreal)>(&QMediaPlayer::playbackRateChanged), self, [=](qreal rate) {
		qreal rate_ret = rate;
		double sigval1 = static_cast<double>(rate_ret);
		miqt_exec_callback_QMediaPlayer_PlaybackRateChanged(slot, sigval1);
	});
}

void QMediaPlayer_LoopsChanged(QMediaPlayer* self) {
	self->loopsChanged();
}

void QMediaPlayer_connect_LoopsChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::loopsChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_LoopsChanged(slot);
	});
}

void QMediaPlayer_MetaDataChanged(QMediaPlayer* self) {
	self->metaDataChanged();
}

void QMediaPlayer_connect_MetaDataChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::metaDataChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_MetaDataChanged(slot);
	});
}

void QMediaPlayer_VideoOutputChanged(QMediaPlayer* self) {
	self->videoOutputChanged();
}

void QMediaPlayer_connect_VideoOutputChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::videoOutputChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_VideoOutputChanged(slot);
	});
}

void QMediaPlayer_AudioOutputChanged(QMediaPlayer* self) {
	self->audioOutputChanged();
}

void QMediaPlayer_connect_AudioOutputChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::audioOutputChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_AudioOutputChanged(slot);
	});
}

void QMediaPlayer_TracksChanged(QMediaPlayer* self) {
	self->tracksChanged();
}

void QMediaPlayer_connect_TracksChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::tracksChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_TracksChanged(slot);
	});
}

void QMediaPlayer_ActiveTracksChanged(QMediaPlayer* self) {
	self->activeTracksChanged();
}

void QMediaPlayer_connect_ActiveTracksChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::activeTracksChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_ActiveTracksChanged(slot);
	});
}

void QMediaPlayer_ErrorChanged(QMediaPlayer* self) {
	self->errorChanged();
}

void QMediaPlayer_connect_ErrorChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)()>(&QMediaPlayer::errorChanged), self, [=]() {
		miqt_exec_callback_QMediaPlayer_ErrorChanged(slot);
	});
}

void QMediaPlayer_ErrorOccurred(QMediaPlayer* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<QMediaPlayer::Error>(error), errorString_QString);
}

void QMediaPlayer_connect_ErrorOccurred(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::Error, const QString&)>(&QMediaPlayer::errorOccurred), self, [=](QMediaPlayer::Error error, const QString& errorString) {
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

void QMediaPlayer_Delete(QMediaPlayer* self) {
	delete self;
}

