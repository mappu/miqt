#include <QAbstractVideoSurface>
#include <QGraphicsVideoItem>
#include <QIODevice>
#include <QList>
#include <QMediaContent>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QMetaObject>
#include <QNetworkConfiguration>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoWidget>
#include <qmediaplayer.h>
#include "gen_qmediaplayer.h"
#include "_cgo_export.h"

QMediaPlayer* QMediaPlayer_new() {
	return new QMediaPlayer();
}

QMediaPlayer* QMediaPlayer_new2(QObject* parent) {
	return new QMediaPlayer(parent);
}

QMediaPlayer* QMediaPlayer_new3(QObject* parent, int flags) {
	return new QMediaPlayer(parent, static_cast<QMediaPlayer::Flags>(flags));
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

struct miqt_string QMediaPlayer_TrUtf8(const char* s) {
	QString _ret = QMediaPlayer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMediaPlayer_HasSupport(struct miqt_string mimeType) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	QMultimedia::SupportEstimate _ret = QMediaPlayer::hasSupport(mimeType_QString);
	return static_cast<int>(_ret);
}

struct miqt_array /* of struct miqt_string */  QMediaPlayer_SupportedMimeTypes() {
	QStringList _ret = QMediaPlayer::supportedMimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QMediaPlayer_SetVideoOutput(QMediaPlayer* self, QVideoWidget* videoOutput) {
	self->setVideoOutput(videoOutput);
}

void QMediaPlayer_SetVideoOutputWithVideoOutput(QMediaPlayer* self, QGraphicsVideoItem* videoOutput) {
	self->setVideoOutput(videoOutput);
}

void QMediaPlayer_SetVideoOutputWithSurface(QMediaPlayer* self, QAbstractVideoSurface* surface) {
	self->setVideoOutput(surface);
}

void QMediaPlayer_SetVideoOutputWithSurfaces(QMediaPlayer* self, struct miqt_array /* of QAbstractVideoSurface* */  surfaces) {
	QVector<QAbstractVideoSurface *> surfaces_QList;
	surfaces_QList.reserve(surfaces.len);
	QAbstractVideoSurface** surfaces_arr = static_cast<QAbstractVideoSurface**>(surfaces.data);
	for(size_t i = 0; i < surfaces.len; ++i) {
		surfaces_QList.push_back(surfaces_arr[i]);
	}
	self->setVideoOutput(surfaces_QList);
}

QMediaContent* QMediaPlayer_Media(const QMediaPlayer* self) {
	return new QMediaContent(self->media());
}

QIODevice* QMediaPlayer_MediaStream(const QMediaPlayer* self) {
	return (QIODevice*) self->mediaStream();
}

QMediaPlaylist* QMediaPlayer_Playlist(const QMediaPlayer* self) {
	return self->playlist();
}

QMediaContent* QMediaPlayer_CurrentMedia(const QMediaPlayer* self) {
	return new QMediaContent(self->currentMedia());
}

int QMediaPlayer_State(const QMediaPlayer* self) {
	QMediaPlayer::State _ret = self->state();
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

int QMediaPlayer_Volume(const QMediaPlayer* self) {
	return self->volume();
}

bool QMediaPlayer_IsMuted(const QMediaPlayer* self) {
	return self->isMuted();
}

bool QMediaPlayer_IsAudioAvailable(const QMediaPlayer* self) {
	return self->isAudioAvailable();
}

bool QMediaPlayer_IsVideoAvailable(const QMediaPlayer* self) {
	return self->isVideoAvailable();
}

int QMediaPlayer_BufferStatus(const QMediaPlayer* self) {
	return self->bufferStatus();
}

bool QMediaPlayer_IsSeekable(const QMediaPlayer* self) {
	return self->isSeekable();
}

double QMediaPlayer_PlaybackRate(const QMediaPlayer* self) {
	qreal _ret = self->playbackRate();
	return static_cast<double>(_ret);
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

QNetworkConfiguration* QMediaPlayer_CurrentNetworkConfiguration(const QMediaPlayer* self) {
	return new QNetworkConfiguration(self->currentNetworkConfiguration());
}

int QMediaPlayer_Availability(const QMediaPlayer* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

int QMediaPlayer_AudioRole(const QMediaPlayer* self) {
	QAudio::Role _ret = self->audioRole();
	return static_cast<int>(_ret);
}

void QMediaPlayer_SetAudioRole(QMediaPlayer* self, int audioRole) {
	self->setAudioRole(static_cast<QAudio::Role>(audioRole));
}

struct miqt_array /* of int */  QMediaPlayer_SupportedAudioRoles(const QMediaPlayer* self) {
	QList<QAudio::Role> _ret = self->supportedAudioRoles();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QAudio::Role _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QMediaPlayer_CustomAudioRole(const QMediaPlayer* self) {
	QString _ret = self->customAudioRole();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaPlayer_SetCustomAudioRole(QMediaPlayer* self, struct miqt_string audioRole) {
	QString audioRole_QString = QString::fromUtf8(audioRole.data, audioRole.len);
	self->setCustomAudioRole(audioRole_QString);
}

struct miqt_array /* of struct miqt_string */  QMediaPlayer_SupportedCustomAudioRoles(const QMediaPlayer* self) {
	QStringList _ret = self->supportedCustomAudioRoles();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
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

void QMediaPlayer_SetVolume(QMediaPlayer* self, int volume) {
	self->setVolume(static_cast<int>(volume));
}

void QMediaPlayer_SetMuted(QMediaPlayer* self, bool muted) {
	self->setMuted(muted);
}

void QMediaPlayer_SetPlaybackRate(QMediaPlayer* self, double rate) {
	self->setPlaybackRate(static_cast<qreal>(rate));
}

void QMediaPlayer_SetMedia(QMediaPlayer* self, QMediaContent* media) {
	self->setMedia(*media);
}

void QMediaPlayer_SetPlaylist(QMediaPlayer* self, QMediaPlaylist* playlist) {
	self->setPlaylist(playlist);
}

void QMediaPlayer_SetNetworkConfigurations(QMediaPlayer* self, struct miqt_array /* of QNetworkConfiguration* */  configurations) {
	QList<QNetworkConfiguration> configurations_QList;
	configurations_QList.reserve(configurations.len);
	QNetworkConfiguration** configurations_arr = static_cast<QNetworkConfiguration**>(configurations.data);
	for(size_t i = 0; i < configurations.len; ++i) {
		configurations_QList.push_back(*(configurations_arr[i]));
	}
	self->setNetworkConfigurations(configurations_QList);
}

void QMediaPlayer_MediaChanged(QMediaPlayer* self, QMediaContent* media) {
	self->mediaChanged(*media);
}

void QMediaPlayer_connect_MediaChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(const QMediaContent&)>(&QMediaPlayer::mediaChanged), self, [=](const QMediaContent& media) {
		const QMediaContent& media_ret = media;
		// Cast returned reference into pointer
		QMediaContent* sigval1 = const_cast<QMediaContent*>(&media_ret);
		miqt_exec_callback_QMediaPlayer_MediaChanged(slot, sigval1);
	});
}

void QMediaPlayer_CurrentMediaChanged(QMediaPlayer* self, QMediaContent* media) {
	self->currentMediaChanged(*media);
}

void QMediaPlayer_connect_CurrentMediaChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(const QMediaContent&)>(&QMediaPlayer::currentMediaChanged), self, [=](const QMediaContent& media) {
		const QMediaContent& media_ret = media;
		// Cast returned reference into pointer
		QMediaContent* sigval1 = const_cast<QMediaContent*>(&media_ret);
		miqt_exec_callback_QMediaPlayer_CurrentMediaChanged(slot, sigval1);
	});
}

void QMediaPlayer_StateChanged(QMediaPlayer* self, int newState) {
	self->stateChanged(static_cast<QMediaPlayer::State>(newState));
}

void QMediaPlayer_connect_StateChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::State)>(&QMediaPlayer::stateChanged), self, [=](QMediaPlayer::State newState) {
		QMediaPlayer::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		miqt_exec_callback_QMediaPlayer_StateChanged(slot, sigval1);
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

void QMediaPlayer_VolumeChanged(QMediaPlayer* self, int volume) {
	self->volumeChanged(static_cast<int>(volume));
}

void QMediaPlayer_connect_VolumeChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(int)>(&QMediaPlayer::volumeChanged), self, [=](int volume) {
		int sigval1 = volume;
		miqt_exec_callback_QMediaPlayer_VolumeChanged(slot, sigval1);
	});
}

void QMediaPlayer_MutedChanged(QMediaPlayer* self, bool muted) {
	self->mutedChanged(muted);
}

void QMediaPlayer_connect_MutedChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::mutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QMediaPlayer_MutedChanged(slot, sigval1);
	});
}

void QMediaPlayer_AudioAvailableChanged(QMediaPlayer* self, bool available) {
	self->audioAvailableChanged(available);
}

void QMediaPlayer_connect_AudioAvailableChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::audioAvailableChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QMediaPlayer_AudioAvailableChanged(slot, sigval1);
	});
}

void QMediaPlayer_VideoAvailableChanged(QMediaPlayer* self, bool videoAvailable) {
	self->videoAvailableChanged(videoAvailable);
}

void QMediaPlayer_connect_VideoAvailableChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::videoAvailableChanged), self, [=](bool videoAvailable) {
		bool sigval1 = videoAvailable;
		miqt_exec_callback_QMediaPlayer_VideoAvailableChanged(slot, sigval1);
	});
}

void QMediaPlayer_BufferStatusChanged(QMediaPlayer* self, int percentFilled) {
	self->bufferStatusChanged(static_cast<int>(percentFilled));
}

void QMediaPlayer_connect_BufferStatusChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(int)>(&QMediaPlayer::bufferStatusChanged), self, [=](int percentFilled) {
		int sigval1 = percentFilled;
		miqt_exec_callback_QMediaPlayer_BufferStatusChanged(slot, sigval1);
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

void QMediaPlayer_AudioRoleChanged(QMediaPlayer* self, int role) {
	self->audioRoleChanged(static_cast<QAudio::Role>(role));
}

void QMediaPlayer_connect_AudioRoleChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QAudio::Role)>(&QMediaPlayer::audioRoleChanged), self, [=](QAudio::Role role) {
		QAudio::Role role_ret = role;
		int sigval1 = static_cast<int>(role_ret);
		miqt_exec_callback_QMediaPlayer_AudioRoleChanged(slot, sigval1);
	});
}

void QMediaPlayer_CustomAudioRoleChanged(QMediaPlayer* self, struct miqt_string role) {
	QString role_QString = QString::fromUtf8(role.data, role.len);
	self->customAudioRoleChanged(role_QString);
}

void QMediaPlayer_connect_CustomAudioRoleChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(const QString&)>(&QMediaPlayer::customAudioRoleChanged), self, [=](const QString& role) {
		const QString role_ret = role;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray role_b = role_ret.toUtf8();
		struct miqt_string role_ms;
		role_ms.len = role_b.length();
		role_ms.data = static_cast<char*>(malloc(role_ms.len));
		memcpy(role_ms.data, role_b.data(), role_ms.len);
		struct miqt_string sigval1 = role_ms;
		miqt_exec_callback_QMediaPlayer_CustomAudioRoleChanged(slot, sigval1);
	});
}

void QMediaPlayer_ErrorWithError(QMediaPlayer* self, int error) {
	self->error(static_cast<QMediaPlayer::Error>(error));
}

void QMediaPlayer_connect_ErrorWithError(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::Error)>(&QMediaPlayer::error), self, [=](QMediaPlayer::Error error) {
		QMediaPlayer::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QMediaPlayer_ErrorWithError(slot, sigval1);
	});
}

void QMediaPlayer_NetworkConfigurationChanged(QMediaPlayer* self, QNetworkConfiguration* configuration) {
	self->networkConfigurationChanged(*configuration);
}

void QMediaPlayer_connect_NetworkConfigurationChanged(QMediaPlayer* self, intptr_t slot) {
	QMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(const QNetworkConfiguration&)>(&QMediaPlayer::networkConfigurationChanged), self, [=](const QNetworkConfiguration& configuration) {
		const QNetworkConfiguration& configuration_ret = configuration;
		// Cast returned reference into pointer
		QNetworkConfiguration* sigval1 = const_cast<QNetworkConfiguration*>(&configuration_ret);
		miqt_exec_callback_QMediaPlayer_NetworkConfigurationChanged(slot, sigval1);
	});
}

bool QMediaPlayer_Bind(QMediaPlayer* self, QObject* param1) {
	return self->bind(param1);
}

void QMediaPlayer_Unbind(QMediaPlayer* self, QObject* param1) {
	self->unbind(param1);
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

struct miqt_string QMediaPlayer_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaPlayer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayer_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaPlayer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMediaPlayer_HasSupport2(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	QStringList codecs_QList;
	codecs_QList.reserve(codecs.len);
	struct miqt_string* codecs_arr = static_cast<struct miqt_string*>(codecs.data);
	for(size_t i = 0; i < codecs.len; ++i) {
		QString codecs_arr_i_QString = QString::fromUtf8(codecs_arr[i].data, codecs_arr[i].len);
		codecs_QList.push_back(codecs_arr_i_QString);
	}
	QMultimedia::SupportEstimate _ret = QMediaPlayer::hasSupport(mimeType_QString, codecs_QList);
	return static_cast<int>(_ret);
}

int QMediaPlayer_HasSupport3(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs, int flags) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	QStringList codecs_QList;
	codecs_QList.reserve(codecs.len);
	struct miqt_string* codecs_arr = static_cast<struct miqt_string*>(codecs.data);
	for(size_t i = 0; i < codecs.len; ++i) {
		QString codecs_arr_i_QString = QString::fromUtf8(codecs_arr[i].data, codecs_arr[i].len);
		codecs_QList.push_back(codecs_arr_i_QString);
	}
	QMultimedia::SupportEstimate _ret = QMediaPlayer::hasSupport(mimeType_QString, codecs_QList, static_cast<QMediaPlayer::Flags>(flags));
	return static_cast<int>(_ret);
}

struct miqt_array /* of struct miqt_string */  QMediaPlayer_SupportedMimeTypes1(int flags) {
	QStringList _ret = QMediaPlayer::supportedMimeTypes(static_cast<QMediaPlayer::Flags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QMediaPlayer_SetMedia2(QMediaPlayer* self, QMediaContent* media, QIODevice* stream) {
	self->setMedia(*media, stream);
}

void QMediaPlayer_Delete(QMediaPlayer* self) {
	delete self;
}

