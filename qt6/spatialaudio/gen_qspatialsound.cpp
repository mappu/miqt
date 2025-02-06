#include <QAudioEngine>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuaternion>
#include <QSpatialSound>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVector3D>
#include <qspatialsound.h>
#include "gen_qspatialsound.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSpatialSound_sourceChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_loopsChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_autoPlayChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_positionChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_rotationChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_volumeChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_distanceModelChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_sizeChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_distanceCutoffChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_manualAttenuationChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_occlusionIntensityChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_directivityChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_directivityOrderChanged(intptr_t);
void miqt_exec_callback_QSpatialSound_nearFieldGainChanged(intptr_t);
bool miqt_exec_callback_QSpatialSound_event(QSpatialSound*, intptr_t, QEvent*);
bool miqt_exec_callback_QSpatialSound_eventFilter(QSpatialSound*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSpatialSound_timerEvent(QSpatialSound*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSpatialSound_childEvent(QSpatialSound*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSpatialSound_customEvent(QSpatialSound*, intptr_t, QEvent*);
void miqt_exec_callback_QSpatialSound_connectNotify(QSpatialSound*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSpatialSound_disconnectNotify(QSpatialSound*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSpatialSound final : public QSpatialSound {
public:

	MiqtVirtualQSpatialSound(QAudioEngine* engine): QSpatialSound(engine) {};

	virtual ~MiqtVirtualQSpatialSound() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSpatialSound::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSpatialSound_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSpatialSound::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSpatialSound::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSpatialSound_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSpatialSound::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSpatialSound::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSpatialSound_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSpatialSound::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSpatialSound::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSpatialSound_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSpatialSound::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSpatialSound::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSpatialSound_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSpatialSound::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSpatialSound::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSpatialSound_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSpatialSound::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSpatialSound::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSpatialSound_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSpatialSound::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QSpatialSound_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSpatialSound_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSpatialSound_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSpatialSound_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSpatialSound* QSpatialSound_new(QAudioEngine* engine) {
	return new MiqtVirtualQSpatialSound(engine);
}

void QSpatialSound_virtbase(QSpatialSound* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSpatialSound_metaObject(const QSpatialSound* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSpatialSound_metacast(QSpatialSound* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSpatialSound_tr(const char* s) {
	QString _ret = QSpatialSound::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSpatialSound_setSource(QSpatialSound* self, QUrl* url) {
	self->setSource(*url);
}

QUrl* QSpatialSound_source(const QSpatialSound* self) {
	return new QUrl(self->source());
}

int QSpatialSound_loops(const QSpatialSound* self) {
	return self->loops();
}

void QSpatialSound_setLoops(QSpatialSound* self, int loops) {
	self->setLoops(static_cast<int>(loops));
}

bool QSpatialSound_autoPlay(const QSpatialSound* self) {
	return self->autoPlay();
}

void QSpatialSound_setAutoPlay(QSpatialSound* self, bool autoPlay) {
	self->setAutoPlay(autoPlay);
}

void QSpatialSound_setPosition(QSpatialSound* self, QVector3D* pos) {
	self->setPosition(*pos);
}

QVector3D* QSpatialSound_position(const QSpatialSound* self) {
	return new QVector3D(self->position());
}

void QSpatialSound_setRotation(QSpatialSound* self, QQuaternion* q) {
	self->setRotation(*q);
}

QQuaternion* QSpatialSound_rotation(const QSpatialSound* self) {
	return new QQuaternion(self->rotation());
}

void QSpatialSound_setVolume(QSpatialSound* self, float volume) {
	self->setVolume(static_cast<float>(volume));
}

float QSpatialSound_volume(const QSpatialSound* self) {
	return self->volume();
}

void QSpatialSound_setDistanceModel(QSpatialSound* self, int model) {
	self->setDistanceModel(static_cast<QSpatialSound::DistanceModel>(model));
}

int QSpatialSound_distanceModel(const QSpatialSound* self) {
	QSpatialSound::DistanceModel _ret = self->distanceModel();
	return static_cast<int>(_ret);
}

void QSpatialSound_setSize(QSpatialSound* self, float size) {
	self->setSize(static_cast<float>(size));
}

float QSpatialSound_size(const QSpatialSound* self) {
	return self->size();
}

void QSpatialSound_setDistanceCutoff(QSpatialSound* self, float cutoff) {
	self->setDistanceCutoff(static_cast<float>(cutoff));
}

float QSpatialSound_distanceCutoff(const QSpatialSound* self) {
	return self->distanceCutoff();
}

void QSpatialSound_setManualAttenuation(QSpatialSound* self, float attenuation) {
	self->setManualAttenuation(static_cast<float>(attenuation));
}

float QSpatialSound_manualAttenuation(const QSpatialSound* self) {
	return self->manualAttenuation();
}

void QSpatialSound_setOcclusionIntensity(QSpatialSound* self, float occlusion) {
	self->setOcclusionIntensity(static_cast<float>(occlusion));
}

float QSpatialSound_occlusionIntensity(const QSpatialSound* self) {
	return self->occlusionIntensity();
}

void QSpatialSound_setDirectivity(QSpatialSound* self, float alpha) {
	self->setDirectivity(static_cast<float>(alpha));
}

float QSpatialSound_directivity(const QSpatialSound* self) {
	return self->directivity();
}

void QSpatialSound_setDirectivityOrder(QSpatialSound* self, float alpha) {
	self->setDirectivityOrder(static_cast<float>(alpha));
}

float QSpatialSound_directivityOrder(const QSpatialSound* self) {
	return self->directivityOrder();
}

void QSpatialSound_setNearFieldGain(QSpatialSound* self, float gain) {
	self->setNearFieldGain(static_cast<float>(gain));
}

float QSpatialSound_nearFieldGain(const QSpatialSound* self) {
	return self->nearFieldGain();
}

QAudioEngine* QSpatialSound_engine(const QSpatialSound* self) {
	return self->engine();
}

void QSpatialSound_sourceChanged(QSpatialSound* self) {
	self->sourceChanged();
}

void QSpatialSound_connect_sourceChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::sourceChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_sourceChanged(slot);
	});
}

void QSpatialSound_loopsChanged(QSpatialSound* self) {
	self->loopsChanged();
}

void QSpatialSound_connect_loopsChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::loopsChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_loopsChanged(slot);
	});
}

void QSpatialSound_autoPlayChanged(QSpatialSound* self) {
	self->autoPlayChanged();
}

void QSpatialSound_connect_autoPlayChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::autoPlayChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_autoPlayChanged(slot);
	});
}

void QSpatialSound_positionChanged(QSpatialSound* self) {
	self->positionChanged();
}

void QSpatialSound_connect_positionChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::positionChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_positionChanged(slot);
	});
}

void QSpatialSound_rotationChanged(QSpatialSound* self) {
	self->rotationChanged();
}

void QSpatialSound_connect_rotationChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::rotationChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_rotationChanged(slot);
	});
}

void QSpatialSound_volumeChanged(QSpatialSound* self) {
	self->volumeChanged();
}

void QSpatialSound_connect_volumeChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::volumeChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_volumeChanged(slot);
	});
}

void QSpatialSound_distanceModelChanged(QSpatialSound* self) {
	self->distanceModelChanged();
}

void QSpatialSound_connect_distanceModelChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::distanceModelChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_distanceModelChanged(slot);
	});
}

void QSpatialSound_sizeChanged(QSpatialSound* self) {
	self->sizeChanged();
}

void QSpatialSound_connect_sizeChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::sizeChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_sizeChanged(slot);
	});
}

void QSpatialSound_distanceCutoffChanged(QSpatialSound* self) {
	self->distanceCutoffChanged();
}

void QSpatialSound_connect_distanceCutoffChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::distanceCutoffChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_distanceCutoffChanged(slot);
	});
}

void QSpatialSound_manualAttenuationChanged(QSpatialSound* self) {
	self->manualAttenuationChanged();
}

void QSpatialSound_connect_manualAttenuationChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::manualAttenuationChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_manualAttenuationChanged(slot);
	});
}

void QSpatialSound_occlusionIntensityChanged(QSpatialSound* self) {
	self->occlusionIntensityChanged();
}

void QSpatialSound_connect_occlusionIntensityChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::occlusionIntensityChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_occlusionIntensityChanged(slot);
	});
}

void QSpatialSound_directivityChanged(QSpatialSound* self) {
	self->directivityChanged();
}

void QSpatialSound_connect_directivityChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::directivityChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_directivityChanged(slot);
	});
}

void QSpatialSound_directivityOrderChanged(QSpatialSound* self) {
	self->directivityOrderChanged();
}

void QSpatialSound_connect_directivityOrderChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::directivityOrderChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_directivityOrderChanged(slot);
	});
}

void QSpatialSound_nearFieldGainChanged(QSpatialSound* self) {
	self->nearFieldGainChanged();
}

void QSpatialSound_connect_nearFieldGainChanged(QSpatialSound* self, intptr_t slot) {
	MiqtVirtualQSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::nearFieldGainChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_nearFieldGainChanged(slot);
	});
}

void QSpatialSound_play(QSpatialSound* self) {
	self->play();
}

void QSpatialSound_pause(QSpatialSound* self) {
	self->pause();
}

void QSpatialSound_stop(QSpatialSound* self) {
	self->stop();
}

struct miqt_string QSpatialSound_tr2(const char* s, const char* c) {
	QString _ret = QSpatialSound::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSpatialSound_tr3(const char* s, const char* c, int n) {
	QString _ret = QSpatialSound::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSpatialSound_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSpatialSound* self_cast = dynamic_cast<MiqtVirtualQSpatialSound*>( (QSpatialSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSpatialSound_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSpatialSound*)(self) )->virtualbase_event(event);
}

bool QSpatialSound_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSpatialSound* self_cast = dynamic_cast<MiqtVirtualQSpatialSound*>( (QSpatialSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSpatialSound_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSpatialSound*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSpatialSound_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpatialSound* self_cast = dynamic_cast<MiqtVirtualQSpatialSound*>( (QSpatialSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSpatialSound_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSpatialSound*)(self) )->virtualbase_timerEvent(event);
}

bool QSpatialSound_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpatialSound* self_cast = dynamic_cast<MiqtVirtualQSpatialSound*>( (QSpatialSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSpatialSound_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSpatialSound*)(self) )->virtualbase_childEvent(event);
}

bool QSpatialSound_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSpatialSound* self_cast = dynamic_cast<MiqtVirtualQSpatialSound*>( (QSpatialSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSpatialSound_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSpatialSound*)(self) )->virtualbase_customEvent(event);
}

bool QSpatialSound_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSpatialSound* self_cast = dynamic_cast<MiqtVirtualQSpatialSound*>( (QSpatialSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSpatialSound_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSpatialSound*)(self) )->virtualbase_connectNotify(signal);
}

bool QSpatialSound_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSpatialSound* self_cast = dynamic_cast<MiqtVirtualQSpatialSound*>( (QSpatialSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSpatialSound_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSpatialSound*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QSpatialSound_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSpatialSound* self_cast = dynamic_cast<MiqtVirtualQSpatialSound*>( (QSpatialSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSpatialSound_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSpatialSound* self_cast = dynamic_cast<MiqtVirtualQSpatialSound*>( (QSpatialSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSpatialSound_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSpatialSound* self_cast = dynamic_cast<MiqtVirtualQSpatialSound*>( (QSpatialSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSpatialSound_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSpatialSound* self_cast = dynamic_cast<MiqtVirtualQSpatialSound*>( (QSpatialSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSpatialSound_delete(QSpatialSound* self) {
	delete self;
}

