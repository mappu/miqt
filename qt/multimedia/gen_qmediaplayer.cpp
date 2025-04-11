#include <QAbstractVideoSurface>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QGraphicsVideoItem>
#include <QIODevice>
#include <QList>
#include <QMediaContent>
#include <QMediaObject>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QMediaService>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkConfiguration>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVector>
#include <QVideoWidget>
#include <qmediaplayer.h>
#include "gen_qmediaplayer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaPlayer_mediaChanged(intptr_t, QMediaContent*);
void miqt_exec_callback_QMediaPlayer_currentMediaChanged(intptr_t, QMediaContent*);
void miqt_exec_callback_QMediaPlayer_stateChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayer_mediaStatusChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayer_durationChanged(intptr_t, long long);
void miqt_exec_callback_QMediaPlayer_positionChanged(intptr_t, long long);
void miqt_exec_callback_QMediaPlayer_volumeChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayer_mutedChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayer_audioAvailableChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayer_videoAvailableChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayer_bufferStatusChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayer_seekableChanged(intptr_t, bool);
void miqt_exec_callback_QMediaPlayer_playbackRateChanged(intptr_t, double);
void miqt_exec_callback_QMediaPlayer_audioRoleChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlayer_customAudioRoleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QMediaPlayer_errorWithError(intptr_t, int);
void miqt_exec_callback_QMediaPlayer_networkConfigurationChanged(intptr_t, QNetworkConfiguration*);
int miqt_exec_callback_QMediaPlayer_availability(const QMediaPlayer*, intptr_t);
bool miqt_exec_callback_QMediaPlayer_bind(QMediaPlayer*, intptr_t, QObject*);
void miqt_exec_callback_QMediaPlayer_unbind(QMediaPlayer*, intptr_t, QObject*);
bool miqt_exec_callback_QMediaPlayer_isAvailable(const QMediaPlayer*, intptr_t);
QMediaService* miqt_exec_callback_QMediaPlayer_service(const QMediaPlayer*, intptr_t);
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
	MiqtVirtualQMediaPlayer(QObject* parent, QMediaPlayer::Flags flags): QMediaPlayer(parent, flags) {};

	virtual ~MiqtVirtualQMediaPlayer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__availability = 0;

	// Subclass to allow providing a Go implementation
	virtual QMultimedia::AvailabilityStatus availability() const override {
		if (handle__availability == 0) {
			return QMediaPlayer::availability();
		}
		

		int callback_return_value = miqt_exec_callback_QMediaPlayer_availability(this, handle__availability);

		return static_cast<QMultimedia::AvailabilityStatus>(callback_return_value);
	}

	friend int QMediaPlayer_virtualbase_availability(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bind = 0;

	// Subclass to allow providing a Go implementation
	virtual bool bind(QObject* param1) override {
		if (handle__bind == 0) {
			return QMediaPlayer::bind(param1);
		}
		
		QObject* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QMediaPlayer_bind(this, handle__bind, sigval1);

		return callback_return_value;
	}

	friend bool QMediaPlayer_virtualbase_bind(void* self, QObject* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unbind = 0;

	// Subclass to allow providing a Go implementation
	virtual void unbind(QObject* param1) override {
		if (handle__unbind == 0) {
			QMediaPlayer::unbind(param1);
			return;
		}
		
		QObject* sigval1 = param1;

		miqt_exec_callback_QMediaPlayer_unbind(this, handle__unbind, sigval1);

		
	}

	friend void QMediaPlayer_virtualbase_unbind(void* self, QObject* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isAvailable() const override {
		if (handle__isAvailable == 0) {
			return QMediaPlayer::isAvailable();
		}
		

		bool callback_return_value = miqt_exec_callback_QMediaPlayer_isAvailable(this, handle__isAvailable);

		return callback_return_value;
	}

	friend bool QMediaPlayer_virtualbase_isAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__service = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaService* service() const override {
		if (handle__service == 0) {
			return QMediaPlayer::service();
		}
		

		QMediaService* callback_return_value = miqt_exec_callback_QMediaPlayer_service(this, handle__service);

		return callback_return_value;
	}

	friend QMediaService* QMediaPlayer_virtualbase_service(const void* self);

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

	friend bool QMediaPlayer_virtualbase_event(void* self, QEvent* event);

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

	friend bool QMediaPlayer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

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

	friend void QMediaPlayer_virtualbase_timerEvent(void* self, QTimerEvent* event);

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

	friend void QMediaPlayer_virtualbase_childEvent(void* self, QChildEvent* event);

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

	friend void QMediaPlayer_virtualbase_customEvent(void* self, QEvent* event);

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

	friend void QMediaPlayer_virtualbase_connectNotify(void* self, QMetaMethod* signal);

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

	friend void QMediaPlayer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QMediaPlayer_protectedbase_addPropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
	friend void QMediaPlayer_protectedbase_removePropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
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

QMediaPlayer* QMediaPlayer_new3(QObject* parent, int flags) {
	return new MiqtVirtualQMediaPlayer(parent, static_cast<QMediaPlayer::Flags>(flags));
}

void QMediaPlayer_virtbase(QMediaPlayer* src, QMediaObject** outptr_QMediaObject) {
	*outptr_QMediaObject = static_cast<QMediaObject*>(src);
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

struct miqt_string QMediaPlayer_trUtf8(const char* s) {
	QString _ret = QMediaPlayer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMediaPlayer_hasSupport(struct miqt_string mimeType) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	QMultimedia::SupportEstimate _ret = QMediaPlayer::hasSupport(mimeType_QString);
	return static_cast<int>(_ret);
}

struct miqt_array /* of struct miqt_string */  QMediaPlayer_supportedMimeTypes() {
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

void QMediaPlayer_setVideoOutput(QMediaPlayer* self, QVideoWidget* videoOutput) {
	self->setVideoOutput(videoOutput);
}

void QMediaPlayer_setVideoOutputWithVideoOutput(QMediaPlayer* self, QGraphicsVideoItem* videoOutput) {
	self->setVideoOutput(videoOutput);
}

void QMediaPlayer_setVideoOutputWithSurface(QMediaPlayer* self, QAbstractVideoSurface* surface) {
	self->setVideoOutput(surface);
}

void QMediaPlayer_setVideoOutputWithSurfaces(QMediaPlayer* self, struct miqt_array /* of QAbstractVideoSurface* */  surfaces) {
	QVector<QAbstractVideoSurface *> surfaces_QList;
	surfaces_QList.reserve(surfaces.len);
	QAbstractVideoSurface** surfaces_arr = static_cast<QAbstractVideoSurface**>(surfaces.data);
	for(size_t i = 0; i < surfaces.len; ++i) {
		surfaces_QList.push_back(surfaces_arr[i]);
	}
	self->setVideoOutput(surfaces_QList);
}

QMediaContent* QMediaPlayer_media(const QMediaPlayer* self) {
	return new QMediaContent(self->media());
}

QIODevice* QMediaPlayer_mediaStream(const QMediaPlayer* self) {
	return (QIODevice*) self->mediaStream();
}

QMediaPlaylist* QMediaPlayer_playlist(const QMediaPlayer* self) {
	return self->playlist();
}

QMediaContent* QMediaPlayer_currentMedia(const QMediaPlayer* self) {
	return new QMediaContent(self->currentMedia());
}

int QMediaPlayer_state(const QMediaPlayer* self) {
	QMediaPlayer::State _ret = self->state();
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

int QMediaPlayer_volume(const QMediaPlayer* self) {
	return self->volume();
}

bool QMediaPlayer_isMuted(const QMediaPlayer* self) {
	return self->isMuted();
}

bool QMediaPlayer_isAudioAvailable(const QMediaPlayer* self) {
	return self->isAudioAvailable();
}

bool QMediaPlayer_isVideoAvailable(const QMediaPlayer* self) {
	return self->isVideoAvailable();
}

int QMediaPlayer_bufferStatus(const QMediaPlayer* self) {
	return self->bufferStatus();
}

bool QMediaPlayer_isSeekable(const QMediaPlayer* self) {
	return self->isSeekable();
}

double QMediaPlayer_playbackRate(const QMediaPlayer* self) {
	qreal _ret = self->playbackRate();
	return static_cast<double>(_ret);
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

QNetworkConfiguration* QMediaPlayer_currentNetworkConfiguration(const QMediaPlayer* self) {
	return new QNetworkConfiguration(self->currentNetworkConfiguration());
}

int QMediaPlayer_availability(const QMediaPlayer* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

int QMediaPlayer_audioRole(const QMediaPlayer* self) {
	QAudio::Role _ret = self->audioRole();
	return static_cast<int>(_ret);
}

void QMediaPlayer_setAudioRole(QMediaPlayer* self, int audioRole) {
	self->setAudioRole(static_cast<QAudio::Role>(audioRole));
}

struct miqt_array /* of int */  QMediaPlayer_supportedAudioRoles(const QMediaPlayer* self) {
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

struct miqt_string QMediaPlayer_customAudioRole(const QMediaPlayer* self) {
	QString _ret = self->customAudioRole();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaPlayer_setCustomAudioRole(QMediaPlayer* self, struct miqt_string audioRole) {
	QString audioRole_QString = QString::fromUtf8(audioRole.data, audioRole.len);
	self->setCustomAudioRole(audioRole_QString);
}

struct miqt_array /* of struct miqt_string */  QMediaPlayer_supportedCustomAudioRoles(const QMediaPlayer* self) {
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

void QMediaPlayer_setVolume(QMediaPlayer* self, int volume) {
	self->setVolume(static_cast<int>(volume));
}

void QMediaPlayer_setMuted(QMediaPlayer* self, bool muted) {
	self->setMuted(muted);
}

void QMediaPlayer_setPlaybackRate(QMediaPlayer* self, double rate) {
	self->setPlaybackRate(static_cast<qreal>(rate));
}

void QMediaPlayer_setMedia(QMediaPlayer* self, QMediaContent* media) {
	self->setMedia(*media);
}

void QMediaPlayer_setPlaylist(QMediaPlayer* self, QMediaPlaylist* playlist) {
	self->setPlaylist(playlist);
}

void QMediaPlayer_setNetworkConfigurations(QMediaPlayer* self, struct miqt_array /* of QNetworkConfiguration* */  configurations) {
	QList<QNetworkConfiguration> configurations_QList;
	configurations_QList.reserve(configurations.len);
	QNetworkConfiguration** configurations_arr = static_cast<QNetworkConfiguration**>(configurations.data);
	for(size_t i = 0; i < configurations.len; ++i) {
		configurations_QList.push_back(*(configurations_arr[i]));
	}
	self->setNetworkConfigurations(configurations_QList);
}

void QMediaPlayer_mediaChanged(QMediaPlayer* self, QMediaContent* media) {
	self->mediaChanged(*media);
}

void QMediaPlayer_connect_mediaChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(const QMediaContent&)>(&QMediaPlayer::mediaChanged), self, [=](const QMediaContent& media) {
		const QMediaContent& media_ret = media;
		// Cast returned reference into pointer
		QMediaContent* sigval1 = const_cast<QMediaContent*>(&media_ret);
		miqt_exec_callback_QMediaPlayer_mediaChanged(slot, sigval1);
	});
}

void QMediaPlayer_currentMediaChanged(QMediaPlayer* self, QMediaContent* media) {
	self->currentMediaChanged(*media);
}

void QMediaPlayer_connect_currentMediaChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(const QMediaContent&)>(&QMediaPlayer::currentMediaChanged), self, [=](const QMediaContent& media) {
		const QMediaContent& media_ret = media;
		// Cast returned reference into pointer
		QMediaContent* sigval1 = const_cast<QMediaContent*>(&media_ret);
		miqt_exec_callback_QMediaPlayer_currentMediaChanged(slot, sigval1);
	});
}

void QMediaPlayer_stateChanged(QMediaPlayer* self, int newState) {
	self->stateChanged(static_cast<QMediaPlayer::State>(newState));
}

void QMediaPlayer_connect_stateChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::State)>(&QMediaPlayer::stateChanged), self, [=](QMediaPlayer::State newState) {
		QMediaPlayer::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		miqt_exec_callback_QMediaPlayer_stateChanged(slot, sigval1);
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

void QMediaPlayer_volumeChanged(QMediaPlayer* self, int volume) {
	self->volumeChanged(static_cast<int>(volume));
}

void QMediaPlayer_connect_volumeChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(int)>(&QMediaPlayer::volumeChanged), self, [=](int volume) {
		int sigval1 = volume;
		miqt_exec_callback_QMediaPlayer_volumeChanged(slot, sigval1);
	});
}

void QMediaPlayer_mutedChanged(QMediaPlayer* self, bool muted) {
	self->mutedChanged(muted);
}

void QMediaPlayer_connect_mutedChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::mutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QMediaPlayer_mutedChanged(slot, sigval1);
	});
}

void QMediaPlayer_audioAvailableChanged(QMediaPlayer* self, bool available) {
	self->audioAvailableChanged(available);
}

void QMediaPlayer_connect_audioAvailableChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::audioAvailableChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QMediaPlayer_audioAvailableChanged(slot, sigval1);
	});
}

void QMediaPlayer_videoAvailableChanged(QMediaPlayer* self, bool videoAvailable) {
	self->videoAvailableChanged(videoAvailable);
}

void QMediaPlayer_connect_videoAvailableChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(bool)>(&QMediaPlayer::videoAvailableChanged), self, [=](bool videoAvailable) {
		bool sigval1 = videoAvailable;
		miqt_exec_callback_QMediaPlayer_videoAvailableChanged(slot, sigval1);
	});
}

void QMediaPlayer_bufferStatusChanged(QMediaPlayer* self, int percentFilled) {
	self->bufferStatusChanged(static_cast<int>(percentFilled));
}

void QMediaPlayer_connect_bufferStatusChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(int)>(&QMediaPlayer::bufferStatusChanged), self, [=](int percentFilled) {
		int sigval1 = percentFilled;
		miqt_exec_callback_QMediaPlayer_bufferStatusChanged(slot, sigval1);
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

void QMediaPlayer_audioRoleChanged(QMediaPlayer* self, int role) {
	self->audioRoleChanged(static_cast<QAudio::Role>(role));
}

void QMediaPlayer_connect_audioRoleChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QAudio::Role)>(&QMediaPlayer::audioRoleChanged), self, [=](QAudio::Role role) {
		QAudio::Role role_ret = role;
		int sigval1 = static_cast<int>(role_ret);
		miqt_exec_callback_QMediaPlayer_audioRoleChanged(slot, sigval1);
	});
}

void QMediaPlayer_customAudioRoleChanged(QMediaPlayer* self, struct miqt_string role) {
	QString role_QString = QString::fromUtf8(role.data, role.len);
	self->customAudioRoleChanged(role_QString);
}

void QMediaPlayer_connect_customAudioRoleChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(const QString&)>(&QMediaPlayer::customAudioRoleChanged), self, [=](const QString& role) {
		const QString role_ret = role;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray role_b = role_ret.toUtf8();
		struct miqt_string role_ms;
		role_ms.len = role_b.length();
		role_ms.data = static_cast<char*>(malloc(role_ms.len));
		memcpy(role_ms.data, role_b.data(), role_ms.len);
		struct miqt_string sigval1 = role_ms;
		miqt_exec_callback_QMediaPlayer_customAudioRoleChanged(slot, sigval1);
	});
}

void QMediaPlayer_errorWithError(QMediaPlayer* self, int error) {
	self->error(static_cast<QMediaPlayer::Error>(error));
}

void QMediaPlayer_connect_errorWithError(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(QMediaPlayer::Error)>(&QMediaPlayer::error), self, [=](QMediaPlayer::Error error) {
		QMediaPlayer::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QMediaPlayer_errorWithError(slot, sigval1);
	});
}

void QMediaPlayer_networkConfigurationChanged(QMediaPlayer* self, QNetworkConfiguration* configuration) {
	self->networkConfigurationChanged(*configuration);
}

void QMediaPlayer_connect_networkConfigurationChanged(QMediaPlayer* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer::connect(self, static_cast<void (QMediaPlayer::*)(const QNetworkConfiguration&)>(&QMediaPlayer::networkConfigurationChanged), self, [=](const QNetworkConfiguration& configuration) {
		const QNetworkConfiguration& configuration_ret = configuration;
		// Cast returned reference into pointer
		QNetworkConfiguration* sigval1 = const_cast<QNetworkConfiguration*>(&configuration_ret);
		miqt_exec_callback_QMediaPlayer_networkConfigurationChanged(slot, sigval1);
	});
}

bool QMediaPlayer_bind(QMediaPlayer* self, QObject* param1) {
	return self->bind(param1);
}

void QMediaPlayer_unbind(QMediaPlayer* self, QObject* param1) {
	self->unbind(param1);
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

struct miqt_string QMediaPlayer_trUtf82(const char* s, const char* c) {
	QString _ret = QMediaPlayer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlayer_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaPlayer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMediaPlayer_hasSupport2(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs) {
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

int QMediaPlayer_hasSupport3(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs, int flags) {
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

struct miqt_array /* of struct miqt_string */  QMediaPlayer_supportedMimeTypesWithFlags(int flags) {
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

void QMediaPlayer_setMedia2(QMediaPlayer* self, QMediaContent* media, QIODevice* stream) {
	self->setMedia(*media, stream);
}

bool QMediaPlayer_override_virtual_availability(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__availability = slot;
	return true;
}

int QMediaPlayer_virtualbase_availability(const void* self) {

	QMultimedia::AvailabilityStatus _ret = ( (const MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::availability();
	return static_cast<int>(_ret);

}

bool QMediaPlayer_override_virtual_bind(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bind = slot;
	return true;
}

bool QMediaPlayer_virtualbase_bind(void* self, QObject* param1) {

	return ( (MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::bind(param1);

}

bool QMediaPlayer_override_virtual_unbind(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__unbind = slot;
	return true;
}

void QMediaPlayer_virtualbase_unbind(void* self, QObject* param1) {

	( (MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::unbind(param1);

}

bool QMediaPlayer_override_virtual_isAvailable(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isAvailable = slot;
	return true;
}

bool QMediaPlayer_virtualbase_isAvailable(const void* self) {

	return ( (const MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::isAvailable();

}

bool QMediaPlayer_override_virtual_service(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__service = slot;
	return true;
}

QMediaService* QMediaPlayer_virtualbase_service(const void* self) {

	return ( (const MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::service();

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

	return ( (MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::event(event);

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

	return ( (MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::eventFilter(watched, event);

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

	( (MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::timerEvent(event);

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

	( (MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::childEvent(event);

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

	( (MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::customEvent(event);

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

	( (MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::connectNotify(*signal);

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

	( (MiqtVirtualQMediaPlayer*)(self) )->QMediaPlayer::disconnectNotify(*signal);

}

void QMediaPlayer_protectedbase_addPropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QByteArray name_QByteArray(name.data, name.len);

	self_cast->addPropertyWatch(name_QByteArray);

}

void QMediaPlayer_protectedbase_removePropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name) {
	MiqtVirtualQMediaPlayer* self_cast = dynamic_cast<MiqtVirtualQMediaPlayer*>( (QMediaPlayer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QByteArray name_QByteArray(name.data, name.len);

	self_cast->removePropertyWatch(name_QByteArray);

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

