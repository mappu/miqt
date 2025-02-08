#include <QIODevice>
#include <QMediaContent>
#include <QMediaControl>
#include <QMediaPlayerControl>
#include <QMediaTimeRange>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediaplayercontrol.h>
#include "gen_qmediaplayercontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaPlayerControl_mediaChanged(intptr_t, QMediaContent*);
void miqt_exec_callback_QMediaPlayerControl_durationChanged(intptr_t, long long);
void miqt_exec_callback_QMediaPlayerControl_positionChanged(intptr_t, long long);
void miqt_exec_callback_QMediaPlayerControl_stateChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayerControl_mediaStatusChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayerControl_volumeChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayerControl_mutedChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayerControl_audioAvailableChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayerControl_videoAvailableChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayerControl_bufferStatusChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayerControl_seekableChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayerControl_availablePlaybackRangesChanged(intptr_t, QMediaTimeRange*);
void miqt_exec_callback_QMediaPlayerControl_playbackRateChanged(intptr_t, double);
void miqt_exec_callback_QMediaPlayerControl_error(intptr_t, int, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

void QMediaPlayerControl_virtbase(QMediaPlayerControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QMediaPlayerControl_metaObject(const QMediaPlayerControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaPlayerControl_metacast(QMediaPlayerControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaPlayerControl_tr(const char* s) {
	QString _ret = QMediaPlayerControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayerControl_trUtf8(const char* s) {
	QString _ret = QMediaPlayerControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMediaPlayerControl_state(const QMediaPlayerControl* self) {
	QMediaPlayer::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QMediaPlayerControl_mediaStatus(const QMediaPlayerControl* self) {
	QMediaPlayer::MediaStatus _ret = self->mediaStatus();
	return static_cast<int>(_ret);
}

long long QMediaPlayerControl_duration(const QMediaPlayerControl* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

long long QMediaPlayerControl_position(const QMediaPlayerControl* self) {
	qint64 _ret = self->position();
	return static_cast<long long>(_ret);
}

void QMediaPlayerControl_setPosition(QMediaPlayerControl* self, long long position) {
	self->setPosition(static_cast<qint64>(position));
}

int QMediaPlayerControl_volume(const QMediaPlayerControl* self) {
	return self->volume();
}

void QMediaPlayerControl_setVolume(QMediaPlayerControl* self, int volume) {
	self->setVolume(static_cast<int>(volume));
}

bool QMediaPlayerControl_isMuted(const QMediaPlayerControl* self) {
	return self->isMuted();
}

void QMediaPlayerControl_setMuted(QMediaPlayerControl* self, bool mute) {
	self->setMuted(mute);
}

int QMediaPlayerControl_bufferStatus(const QMediaPlayerControl* self) {
	return self->bufferStatus();
}

bool QMediaPlayerControl_isAudioAvailable(const QMediaPlayerControl* self) {
	return self->isAudioAvailable();
}

bool QMediaPlayerControl_isVideoAvailable(const QMediaPlayerControl* self) {
	return self->isVideoAvailable();
}

bool QMediaPlayerControl_isSeekable(const QMediaPlayerControl* self) {
	return self->isSeekable();
}

QMediaTimeRange* QMediaPlayerControl_availablePlaybackRanges(const QMediaPlayerControl* self) {
	return new QMediaTimeRange(self->availablePlaybackRanges());
}

double QMediaPlayerControl_playbackRate(const QMediaPlayerControl* self) {
	qreal _ret = self->playbackRate();
	return static_cast<double>(_ret);
}

void QMediaPlayerControl_setPlaybackRate(QMediaPlayerControl* self, double rate) {
	self->setPlaybackRate(static_cast<qreal>(rate));
}

QMediaContent* QMediaPlayerControl_media(const QMediaPlayerControl* self) {
	return new QMediaContent(self->media());
}

QIODevice* QMediaPlayerControl_mediaStream(const QMediaPlayerControl* self) {
	return (QIODevice*) self->mediaStream();
}

void QMediaPlayerControl_setMedia(QMediaPlayerControl* self, QMediaContent* media, QIODevice* stream) {
	self->setMedia(*media, stream);
}

void QMediaPlayerControl_play(QMediaPlayerControl* self) {
	self->play();
}

void QMediaPlayerControl_pause(QMediaPlayerControl* self) {
	self->pause();
}

void QMediaPlayerControl_stop(QMediaPlayerControl* self) {
	self->stop();
}

void QMediaPlayerControl_mediaChanged(QMediaPlayerControl* self, QMediaContent* content) {
	self->mediaChanged(*content);
}

void QMediaPlayerControl_connect_mediaChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(const QMediaContent&)>(&QMediaPlayerControl::mediaChanged), self, [=](const QMediaContent& content) {
		const QMediaContent& content_ret = content;
		// Cast returned reference into pointer
		QMediaContent* sigval1 = const_cast<QMediaContent*>(&content_ret);
		miqt_exec_callback_QMediaPlayerControl_mediaChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_durationChanged(QMediaPlayerControl* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QMediaPlayerControl_connect_durationChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(qint64)>(&QMediaPlayerControl::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QMediaPlayerControl_durationChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_positionChanged(QMediaPlayerControl* self, long long position) {
	self->positionChanged(static_cast<qint64>(position));
}

void QMediaPlayerControl_connect_positionChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(qint64)>(&QMediaPlayerControl::positionChanged), self, [=](qint64 position) {
		qint64 position_ret = position;
		long long sigval1 = static_cast<long long>(position_ret);
		miqt_exec_callback_QMediaPlayerControl_positionChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_stateChanged(QMediaPlayerControl* self, int newState) {
	self->stateChanged(static_cast<QMediaPlayer::State>(newState));
}

void QMediaPlayerControl_connect_stateChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(QMediaPlayer::State)>(&QMediaPlayerControl::stateChanged), self, [=](QMediaPlayer::State newState) {
		QMediaPlayer::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		miqt_exec_callback_QMediaPlayerControl_stateChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_mediaStatusChanged(QMediaPlayerControl* self, int status) {
	self->mediaStatusChanged(static_cast<QMediaPlayer::MediaStatus>(status));
}

void QMediaPlayerControl_connect_mediaStatusChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(QMediaPlayer::MediaStatus)>(&QMediaPlayerControl::mediaStatusChanged), self, [=](QMediaPlayer::MediaStatus status) {
		QMediaPlayer::MediaStatus status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		miqt_exec_callback_QMediaPlayerControl_mediaStatusChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_volumeChanged(QMediaPlayerControl* self, int volume) {
	self->volumeChanged(static_cast<int>(volume));
}

void QMediaPlayerControl_connect_volumeChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(int)>(&QMediaPlayerControl::volumeChanged), self, [=](int volume) {
		int sigval1 = volume;
		miqt_exec_callback_QMediaPlayerControl_volumeChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_mutedChanged(QMediaPlayerControl* self, bool mute) {
	self->mutedChanged(mute);
}

void QMediaPlayerControl_connect_mutedChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(bool)>(&QMediaPlayerControl::mutedChanged), self, [=](bool mute) {
		bool sigval1 = mute;
		miqt_exec_callback_QMediaPlayerControl_mutedChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_audioAvailableChanged(QMediaPlayerControl* self, bool audioAvailable) {
	self->audioAvailableChanged(audioAvailable);
}

void QMediaPlayerControl_connect_audioAvailableChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(bool)>(&QMediaPlayerControl::audioAvailableChanged), self, [=](bool audioAvailable) {
		bool sigval1 = audioAvailable;
		miqt_exec_callback_QMediaPlayerControl_audioAvailableChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_videoAvailableChanged(QMediaPlayerControl* self, bool videoAvailable) {
	self->videoAvailableChanged(videoAvailable);
}

void QMediaPlayerControl_connect_videoAvailableChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(bool)>(&QMediaPlayerControl::videoAvailableChanged), self, [=](bool videoAvailable) {
		bool sigval1 = videoAvailable;
		miqt_exec_callback_QMediaPlayerControl_videoAvailableChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_bufferStatusChanged(QMediaPlayerControl* self, int percentFilled) {
	self->bufferStatusChanged(static_cast<int>(percentFilled));
}

void QMediaPlayerControl_connect_bufferStatusChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(int)>(&QMediaPlayerControl::bufferStatusChanged), self, [=](int percentFilled) {
		int sigval1 = percentFilled;
		miqt_exec_callback_QMediaPlayerControl_bufferStatusChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_seekableChanged(QMediaPlayerControl* self, bool seekable) {
	self->seekableChanged(seekable);
}

void QMediaPlayerControl_connect_seekableChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(bool)>(&QMediaPlayerControl::seekableChanged), self, [=](bool seekable) {
		bool sigval1 = seekable;
		miqt_exec_callback_QMediaPlayerControl_seekableChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_availablePlaybackRangesChanged(QMediaPlayerControl* self, QMediaTimeRange* ranges) {
	self->availablePlaybackRangesChanged(*ranges);
}

void QMediaPlayerControl_connect_availablePlaybackRangesChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(const QMediaTimeRange&)>(&QMediaPlayerControl::availablePlaybackRangesChanged), self, [=](const QMediaTimeRange& ranges) {
		const QMediaTimeRange& ranges_ret = ranges;
		// Cast returned reference into pointer
		QMediaTimeRange* sigval1 = const_cast<QMediaTimeRange*>(&ranges_ret);
		miqt_exec_callback_QMediaPlayerControl_availablePlaybackRangesChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_playbackRateChanged(QMediaPlayerControl* self, double rate) {
	self->playbackRateChanged(static_cast<qreal>(rate));
}

void QMediaPlayerControl_connect_playbackRateChanged(QMediaPlayerControl* self, intptr_t slot) {
	QMediaPlayerControl::connect(self, static_cast<void (QMediaPlayerControl::*)(qreal)>(&QMediaPlayerControl::playbackRateChanged), self, [=](qreal rate) {
		qreal rate_ret = rate;
		double sigval1 = static_cast<double>(rate_ret);
		miqt_exec_callback_QMediaPlayerControl_playbackRateChanged(slot, sigval1);
	});
}

void QMediaPlayerControl_error(QMediaPlayerControl* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->error(static_cast<int>(error), errorString_QString);
}

void QMediaPlayerControl_connect_error(QMediaPlayerControl* self, intptr_t slot) {
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
		miqt_exec_callback_QMediaPlayerControl_error(slot, sigval1, sigval2);
	});
}

struct miqt_string QMediaPlayerControl_tr2(const char* s, const char* c) {
	QString _ret = QMediaPlayerControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayerControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaPlayerControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayerControl_trUtf82(const char* s, const char* c) {
	QString _ret = QMediaPlayerControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayerControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaPlayerControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaPlayerControl_delete(QMediaPlayerControl* self) {
	delete self;
}

