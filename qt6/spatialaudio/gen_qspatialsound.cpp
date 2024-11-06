#include <QAudioEngine>
#include <QMetaObject>
#include <QQuaternion>
#include <QSpatialSound>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVector3D>
#include <qspatialsound.h>
#include "gen_qspatialsound.h"
#include "_cgo_export.h"

QSpatialSound* QSpatialSound_new(QAudioEngine* engine) {
	return new QSpatialSound(engine);
}

QMetaObject* QSpatialSound_MetaObject(const QSpatialSound* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSpatialSound_Metacast(QSpatialSound* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSpatialSound_Tr(const char* s) {
	QString _ret = QSpatialSound::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSpatialSound_SetSource(QSpatialSound* self, QUrl* url) {
	self->setSource(*url);
}

QUrl* QSpatialSound_Source(const QSpatialSound* self) {
	return new QUrl(self->source());
}

int QSpatialSound_Loops(const QSpatialSound* self) {
	return self->loops();
}

void QSpatialSound_SetLoops(QSpatialSound* self, int loops) {
	self->setLoops(static_cast<int>(loops));
}

bool QSpatialSound_AutoPlay(const QSpatialSound* self) {
	return self->autoPlay();
}

void QSpatialSound_SetAutoPlay(QSpatialSound* self, bool autoPlay) {
	self->setAutoPlay(autoPlay);
}

void QSpatialSound_SetPosition(QSpatialSound* self, QVector3D* pos) {
	self->setPosition(*pos);
}

QVector3D* QSpatialSound_Position(const QSpatialSound* self) {
	return new QVector3D(self->position());
}

void QSpatialSound_SetRotation(QSpatialSound* self, QQuaternion* q) {
	self->setRotation(*q);
}

QQuaternion* QSpatialSound_Rotation(const QSpatialSound* self) {
	return new QQuaternion(self->rotation());
}

void QSpatialSound_SetVolume(QSpatialSound* self, float volume) {
	self->setVolume(static_cast<float>(volume));
}

float QSpatialSound_Volume(const QSpatialSound* self) {
	return self->volume();
}

void QSpatialSound_SetDistanceModel(QSpatialSound* self, int model) {
	self->setDistanceModel(static_cast<QSpatialSound::DistanceModel>(model));
}

int QSpatialSound_DistanceModel(const QSpatialSound* self) {
	QSpatialSound::DistanceModel _ret = self->distanceModel();
	return static_cast<int>(_ret);
}

void QSpatialSound_SetSize(QSpatialSound* self, float size) {
	self->setSize(static_cast<float>(size));
}

float QSpatialSound_Size(const QSpatialSound* self) {
	return self->size();
}

void QSpatialSound_SetDistanceCutoff(QSpatialSound* self, float cutoff) {
	self->setDistanceCutoff(static_cast<float>(cutoff));
}

float QSpatialSound_DistanceCutoff(const QSpatialSound* self) {
	return self->distanceCutoff();
}

void QSpatialSound_SetManualAttenuation(QSpatialSound* self, float attenuation) {
	self->setManualAttenuation(static_cast<float>(attenuation));
}

float QSpatialSound_ManualAttenuation(const QSpatialSound* self) {
	return self->manualAttenuation();
}

void QSpatialSound_SetOcclusionIntensity(QSpatialSound* self, float occlusion) {
	self->setOcclusionIntensity(static_cast<float>(occlusion));
}

float QSpatialSound_OcclusionIntensity(const QSpatialSound* self) {
	return self->occlusionIntensity();
}

void QSpatialSound_SetDirectivity(QSpatialSound* self, float alpha) {
	self->setDirectivity(static_cast<float>(alpha));
}

float QSpatialSound_Directivity(const QSpatialSound* self) {
	return self->directivity();
}

void QSpatialSound_SetDirectivityOrder(QSpatialSound* self, float alpha) {
	self->setDirectivityOrder(static_cast<float>(alpha));
}

float QSpatialSound_DirectivityOrder(const QSpatialSound* self) {
	return self->directivityOrder();
}

void QSpatialSound_SetNearFieldGain(QSpatialSound* self, float gain) {
	self->setNearFieldGain(static_cast<float>(gain));
}

float QSpatialSound_NearFieldGain(const QSpatialSound* self) {
	return self->nearFieldGain();
}

QAudioEngine* QSpatialSound_Engine(const QSpatialSound* self) {
	return self->engine();
}

void QSpatialSound_SourceChanged(QSpatialSound* self) {
	self->sourceChanged();
}

void QSpatialSound_connect_SourceChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::sourceChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_SourceChanged(slot);
	});
}

void QSpatialSound_LoopsChanged(QSpatialSound* self) {
	self->loopsChanged();
}

void QSpatialSound_connect_LoopsChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::loopsChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_LoopsChanged(slot);
	});
}

void QSpatialSound_AutoPlayChanged(QSpatialSound* self) {
	self->autoPlayChanged();
}

void QSpatialSound_connect_AutoPlayChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::autoPlayChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_AutoPlayChanged(slot);
	});
}

void QSpatialSound_PositionChanged(QSpatialSound* self) {
	self->positionChanged();
}

void QSpatialSound_connect_PositionChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::positionChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_PositionChanged(slot);
	});
}

void QSpatialSound_RotationChanged(QSpatialSound* self) {
	self->rotationChanged();
}

void QSpatialSound_connect_RotationChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::rotationChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_RotationChanged(slot);
	});
}

void QSpatialSound_VolumeChanged(QSpatialSound* self) {
	self->volumeChanged();
}

void QSpatialSound_connect_VolumeChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::volumeChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_VolumeChanged(slot);
	});
}

void QSpatialSound_DistanceModelChanged(QSpatialSound* self) {
	self->distanceModelChanged();
}

void QSpatialSound_connect_DistanceModelChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::distanceModelChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_DistanceModelChanged(slot);
	});
}

void QSpatialSound_SizeChanged(QSpatialSound* self) {
	self->sizeChanged();
}

void QSpatialSound_connect_SizeChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::sizeChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_SizeChanged(slot);
	});
}

void QSpatialSound_DistanceCutoffChanged(QSpatialSound* self) {
	self->distanceCutoffChanged();
}

void QSpatialSound_connect_DistanceCutoffChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::distanceCutoffChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_DistanceCutoffChanged(slot);
	});
}

void QSpatialSound_ManualAttenuationChanged(QSpatialSound* self) {
	self->manualAttenuationChanged();
}

void QSpatialSound_connect_ManualAttenuationChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::manualAttenuationChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_ManualAttenuationChanged(slot);
	});
}

void QSpatialSound_OcclusionIntensityChanged(QSpatialSound* self) {
	self->occlusionIntensityChanged();
}

void QSpatialSound_connect_OcclusionIntensityChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::occlusionIntensityChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_OcclusionIntensityChanged(slot);
	});
}

void QSpatialSound_DirectivityChanged(QSpatialSound* self) {
	self->directivityChanged();
}

void QSpatialSound_connect_DirectivityChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::directivityChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_DirectivityChanged(slot);
	});
}

void QSpatialSound_DirectivityOrderChanged(QSpatialSound* self) {
	self->directivityOrderChanged();
}

void QSpatialSound_connect_DirectivityOrderChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::directivityOrderChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_DirectivityOrderChanged(slot);
	});
}

void QSpatialSound_NearFieldGainChanged(QSpatialSound* self) {
	self->nearFieldGainChanged();
}

void QSpatialSound_connect_NearFieldGainChanged(QSpatialSound* self, intptr_t slot) {
	QSpatialSound::connect(self, static_cast<void (QSpatialSound::*)()>(&QSpatialSound::nearFieldGainChanged), self, [=]() {
		miqt_exec_callback_QSpatialSound_NearFieldGainChanged(slot);
	});
}

void QSpatialSound_Play(QSpatialSound* self) {
	self->play();
}

void QSpatialSound_Pause(QSpatialSound* self) {
	self->pause();
}

void QSpatialSound_Stop(QSpatialSound* self) {
	self->stop();
}

struct miqt_string QSpatialSound_Tr2(const char* s, const char* c) {
	QString _ret = QSpatialSound::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSpatialSound_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSpatialSound::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSpatialSound_Delete(QSpatialSound* self) {
	delete self;
}

