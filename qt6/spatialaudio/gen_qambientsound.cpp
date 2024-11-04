#include <QAmbientSound>
#include <QAudioEngine>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qambientsound.h>
#include "gen_qambientsound.h"
#include "_cgo_export.h"

QAmbientSound* QAmbientSound_new(QAudioEngine* engine) {
	return new QAmbientSound(engine);
}

QMetaObject* QAmbientSound_MetaObject(const QAmbientSound* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAmbientSound_Metacast(QAmbientSound* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAmbientSound_Tr(const char* s) {
	QString _ret = QAmbientSound::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAmbientSound_SetSource(QAmbientSound* self, QUrl* url) {
	self->setSource(*url);
}

QUrl* QAmbientSound_Source(const QAmbientSound* self) {
	return new QUrl(self->source());
}

int QAmbientSound_Loops(const QAmbientSound* self) {
	return self->loops();
}

void QAmbientSound_SetLoops(QAmbientSound* self, int loops) {
	self->setLoops(static_cast<int>(loops));
}

bool QAmbientSound_AutoPlay(const QAmbientSound* self) {
	return self->autoPlay();
}

void QAmbientSound_SetAutoPlay(QAmbientSound* self, bool autoPlay) {
	self->setAutoPlay(autoPlay);
}

void QAmbientSound_SetVolume(QAmbientSound* self, float volume) {
	self->setVolume(static_cast<float>(volume));
}

float QAmbientSound_Volume(const QAmbientSound* self) {
	return self->volume();
}

QAudioEngine* QAmbientSound_Engine(const QAmbientSound* self) {
	return self->engine();
}

void QAmbientSound_SourceChanged(QAmbientSound* self) {
	self->sourceChanged();
}

void QAmbientSound_connect_SourceChanged(QAmbientSound* self, intptr_t slot) {
	QAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::sourceChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_SourceChanged(slot);
	});
}

void QAmbientSound_LoopsChanged(QAmbientSound* self) {
	self->loopsChanged();
}

void QAmbientSound_connect_LoopsChanged(QAmbientSound* self, intptr_t slot) {
	QAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::loopsChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_LoopsChanged(slot);
	});
}

void QAmbientSound_AutoPlayChanged(QAmbientSound* self) {
	self->autoPlayChanged();
}

void QAmbientSound_connect_AutoPlayChanged(QAmbientSound* self, intptr_t slot) {
	QAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::autoPlayChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_AutoPlayChanged(slot);
	});
}

void QAmbientSound_VolumeChanged(QAmbientSound* self) {
	self->volumeChanged();
}

void QAmbientSound_connect_VolumeChanged(QAmbientSound* self, intptr_t slot) {
	QAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::volumeChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_VolumeChanged(slot);
	});
}

void QAmbientSound_Play(QAmbientSound* self) {
	self->play();
}

void QAmbientSound_Pause(QAmbientSound* self) {
	self->pause();
}

void QAmbientSound_Stop(QAmbientSound* self) {
	self->stop();
}

struct miqt_string QAmbientSound_Tr2(const char* s, const char* c) {
	QString _ret = QAmbientSound::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAmbientSound_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAmbientSound::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAmbientSound_Delete(QAmbientSound* self) {
	delete self;
}

