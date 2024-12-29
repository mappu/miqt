#include <QIODevice>
#include <QMediaContent>
#include <QMediaControl>
#include <QMediaPlayerControl>
#include <QMediaTimeRange>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediaplayercontrol.h>
#include "gen_qmediaplayercontrol.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void QMediaPlayerControl_virtbase(QMediaPlayerControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QMediaPlayerControl_MetaObject(const QMediaPlayerControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaPlayerControl_Metacast(QMediaPlayerControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaPlayerControl_Tr(const char* s) {
	QString _ret = QMediaPlayerControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayerControl_TrUtf8(const char* s) {
	QString _ret = QMediaPlayerControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMediaPlayerControl_State(const QMediaPlayerControl* self) {
	QMediaPlayer::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QMediaPlayerControl_MediaStatus(const QMediaPlayerControl* self) {
	QMediaPlayer::MediaStatus _ret = self->mediaStatus();
	return static_cast<int>(_ret);
}

long long QMediaPlayerControl_Duration(const QMediaPlayerControl* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

long long QMediaPlayerControl_Position(const QMediaPlayerControl* self) {
	qint64 _ret = self->position();
	return static_cast<long long>(_ret);
}

void QMediaPlayerControl_SetPosition(QMediaPlayerControl* self, long long position) {
	self->setPosition(static_cast<qint64>(position));
}

int QMediaPlayerControl_Volume(const QMediaPlayerControl* self) {
	return self->volume();
}

void QMediaPlayerControl_SetVolume(QMediaPlayerControl* self, int volume) {
	self->setVolume(static_cast<int>(volume));
}

bool QMediaPlayerControl_IsMuted(const QMediaPlayerControl* self) {
	return self->isMuted();
}

void QMediaPlayerControl_SetMuted(QMediaPlayerControl* self, bool mute) {
	self->setMuted(mute);
}

int QMediaPlayerControl_BufferStatus(const QMediaPlayerControl* self) {
	return self->bufferStatus();
}

bool QMediaPlayerControl_IsAudioAvailable(const QMediaPlayerControl* self) {
	return self->isAudioAvailable();
}

bool QMediaPlayerControl_IsVideoAvailable(const QMediaPlayerControl* self) {
	return self->isVideoAvailable();
}

bool QMediaPlayerControl_IsSeekable(const QMediaPlayerControl* self) {
	return self->isSeekable();
}

QMediaTimeRange* QMediaPlayerControl_AvailablePlaybackRanges(const QMediaPlayerControl* self) {
	return new QMediaTimeRange(self->availablePlaybackRanges());
}

double QMediaPlayerControl_PlaybackRate(const QMediaPlayerControl* self) {
	qreal _ret = self->playbackRate();
	return static_cast<double>(_ret);
}

void QMediaPlayerControl_SetPlaybackRate(QMediaPlayerControl* self, double rate) {
	self->setPlaybackRate(static_cast<qreal>(rate));
}

QMediaContent* QMediaPlayerControl_Media(const QMediaPlayerControl* self) {
	return new QMediaContent(self->media());
}

QIODevice* QMediaPlayerControl_MediaStream(const QMediaPlayerControl* self) {
	return (QIODevice*) self->mediaStream();
}

void QMediaPlayerControl_SetMedia(QMediaPlayerControl* self, QMediaContent* media, QIODevice* stream) {
	self->setMedia(*media, stream);
}

void QMediaPlayerControl_Play(QMediaPlayerControl* self) {
	self->play();
}

void QMediaPlayerControl_Pause(QMediaPlayerControl* self) {
	self->pause();
}

void QMediaPlayerControl_Stop(QMediaPlayerControl* self) {
	self->stop();
}

void QMediaPlayerControl_MediaChanged(QMediaPlayerControl* self, QMediaContent* content) {
	self->mediaChanged(*content);
}

void QMediaPlayerControl_connect_MediaChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(const QMediaContent&)>(&QMediaPlayerControl::mediaChanged), self, [=](const QMediaContent& content) {
		const QMediaContent& content_ret = content;
		// Cast returned reference into pointer
		QMediaContent* sigval1 = const_cast<QMediaContent*>(&content_ret);
		miqt_exec_callback_QMediaPlayerControl_MediaChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_DurationChanged(QMediaPlayerControl* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QMediaPlayerControl_connect_DurationChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(qint64)>(&QMediaPlayerControl::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QMediaPlayerControl_DurationChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_PositionChanged(QMediaPlayerControl* self, long long position) {
	self->positionChanged(static_cast<qint64>(position));
}

void QMediaPlayerControl_connect_PositionChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(qint64)>(&QMediaPlayerControl::positionChanged), self, [=](qint64 position) {
		qint64 position_ret = position;
		long long sigval1 = static_cast<long long>(position_ret);
		miqt_exec_callback_QMediaPlayerControl_PositionChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_StateChanged(QMediaPlayerControl* self, int newState) {
	self->stateChanged(static_cast<QMediaPlayer::State>(newState));
}

void QMediaPlayerControl_connect_StateChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(QMediaPlayer::State)>(&QMediaPlayerControl::stateChanged), self, [=](QMediaPlayer::State newState) {
		QMediaPlayer::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		miqt_exec_callback_QMediaPlayerControl_StateChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_MediaStatusChanged(QMediaPlayerControl* self, int status) {
	self->mediaStatusChanged(static_cast<QMediaPlayer::MediaStatus>(status));
}

void QMediaPlayerControl_connect_MediaStatusChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(QMediaPlayer::MediaStatus)>(&QMediaPlayerControl::mediaStatusChanged), self, [=](QMediaPlayer::MediaStatus status) {
		QMediaPlayer::MediaStatus status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		miqt_exec_callback_QMediaPlayerControl_MediaStatusChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_VolumeChanged(QMediaPlayerControl* self, int volume) {
	self->volumeChanged(static_cast<int>(volume));
}

void QMediaPlayerControl_connect_VolumeChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(int)>(&QMediaPlayerControl::volumeChanged), self, [=](int volume) {
		int sigval1 = volume;
		miqt_exec_callback_QMediaPlayerControl_VolumeChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_MutedChanged(QMediaPlayerControl* self, bool mute) {
	self->mutedChanged(mute);
}

void QMediaPlayerControl_connect_MutedChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(bool)>(&QMediaPlayerControl::mutedChanged), self, [=](bool mute) {
		bool sigval1 = mute;
		miqt_exec_callback_QMediaPlayerControl_MutedChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_AudioAvailableChanged(QMediaPlayerControl* self, bool audioAvailable) {
	self->audioAvailableChanged(audioAvailable);
}

void QMediaPlayerControl_connect_AudioAvailableChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(bool)>(&QMediaPlayerControl::audioAvailableChanged), self, [=](bool audioAvailable) {
		bool sigval1 = audioAvailable;
		miqt_exec_callback_QMediaPlayerControl_AudioAvailableChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_VideoAvailableChanged(QMediaPlayerControl* self, bool videoAvailable) {
	self->videoAvailableChanged(videoAvailable);
}

void QMediaPlayerControl_connect_VideoAvailableChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(bool)>(&QMediaPlayerControl::videoAvailableChanged), self, [=](bool videoAvailable) {
		bool sigval1 = videoAvailable;
		miqt_exec_callback_QMediaPlayerControl_VideoAvailableChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_BufferStatusChanged(QMediaPlayerControl* self, int percentFilled) {
	self->bufferStatusChanged(static_cast<int>(percentFilled));
}

void QMediaPlayerControl_connect_BufferStatusChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(int)>(&QMediaPlayerControl::bufferStatusChanged), self, [=](int percentFilled) {
		int sigval1 = percentFilled;
		miqt_exec_callback_QMediaPlayerControl_BufferStatusChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_SeekableChanged(QMediaPlayerControl* self, bool seekable) {
	self->seekableChanged(seekable);
}

void QMediaPlayerControl_connect_SeekableChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(bool)>(&QMediaPlayerControl::seekableChanged), self, [=](bool seekable) {
		bool sigval1 = seekable;
		miqt_exec_callback_QMediaPlayerControl_SeekableChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_AvailablePlaybackRangesChanged(QMediaPlayerControl* self, QMediaTimeRange* ranges) {
	self->availablePlaybackRangesChanged(*ranges);
}

void QMediaPlayerControl_connect_AvailablePlaybackRangesChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(const QMediaTimeRange&)>(&QMediaPlayerControl::availablePlaybackRangesChanged), self, [=](const QMediaTimeRange& ranges) {
		const QMediaTimeRange& ranges_ret = ranges;
		// Cast returned reference into pointer
		QMediaTimeRange* sigval1 = const_cast<QMediaTimeRange*>(&ranges_ret);
		miqt_exec_callback_QMediaPlayerControl_AvailablePlaybackRangesChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_PlaybackRateChanged(QMediaPlayerControl* self, double rate) {
	self->playbackRateChanged(static_cast<qreal>(rate));
}

void QMediaPlayerControl_connect_PlaybackRateChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(qreal)>(&QMediaPlayerControl::playbackRateChanged), self, [=](qreal rate) {
		qreal rate_ret = rate;
		double sigval1 = static_cast<double>(rate_ret);
		miqt_exec_callback_QMediaPlayerControl_PlaybackRateChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_Error(QMediaPlayerControl* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->error(static_cast<int>(error), errorString_QString);
}

void QMediaPlayerControl_connect_Error(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(int, const QString&)>(&QMediaPlayerControl::error), self, [=](int error, const QString& errorString) {
		int sigval1 = error;
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval2 = errorString_ms;
		miqt_exec_callback_QMediaPlayerControl_Error(slot, sigval1, sigval2);
	});
}

struct miqt_string QMediaPlayerControl_Tr2(const char* s, const char* c) {
	QString _ret = QMediaPlayerControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayerControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaPlayerControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayerControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaPlayerControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayerControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaPlayerControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaPlayerControl_Delete(QMediaPlayerControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaPlayerControl*>( self );
	} else {
		delete self;
	}
}

