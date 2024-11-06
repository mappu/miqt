#include <QAudioDevice>
#include <QAudioOutput>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiooutput.h>
#include "gen_qaudiooutput.h"
#include "_cgo_export.h"

QAudioOutput* QAudioOutput_new() {
	return new QAudioOutput();
}

QAudioOutput* QAudioOutput_new2(QAudioDevice* device) {
	return new QAudioOutput(*device);
}

QAudioOutput* QAudioOutput_new3(QObject* parent) {
	return new QAudioOutput(parent);
}

QAudioOutput* QAudioOutput_new4(QAudioDevice* device, QObject* parent) {
	return new QAudioOutput(*device, parent);
}

QMetaObject* QAudioOutput_MetaObject(const QAudioOutput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioOutput_Metacast(QAudioOutput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioOutput_Tr(const char* s) {
	QString _ret = QAudioOutput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioDevice* QAudioOutput_Device(const QAudioOutput* self) {
	return new QAudioDevice(self->device());
}

float QAudioOutput_Volume(const QAudioOutput* self) {
	return self->volume();
}

bool QAudioOutput_IsMuted(const QAudioOutput* self) {
	return self->isMuted();
}

void QAudioOutput_SetDevice(QAudioOutput* self, QAudioDevice* device) {
	self->setDevice(*device);
}

void QAudioOutput_SetVolume(QAudioOutput* self, float volume) {
	self->setVolume(static_cast<float>(volume));
}

void QAudioOutput_SetMuted(QAudioOutput* self, bool muted) {
	self->setMuted(muted);
}

void QAudioOutput_DeviceChanged(QAudioOutput* self) {
	self->deviceChanged();
}

void QAudioOutput_connect_DeviceChanged(QAudioOutput* self, intptr_t slot) {
	QAudioOutput::connect(self, static_cast<void (QAudioOutput::*)()>(&QAudioOutput::deviceChanged), self, [=]() {
		miqt_exec_callback_QAudioOutput_DeviceChanged(slot);
	});
}

void QAudioOutput_VolumeChanged(QAudioOutput* self, float volume) {
	self->volumeChanged(static_cast<float>(volume));
}

void QAudioOutput_connect_VolumeChanged(QAudioOutput* self, intptr_t slot) {
	QAudioOutput::connect(self, static_cast<void (QAudioOutput::*)(float)>(&QAudioOutput::volumeChanged), self, [=](float volume) {
		float sigval1 = volume;
		miqt_exec_callback_QAudioOutput_VolumeChanged(slot, sigval1);
	});
}

void QAudioOutput_MutedChanged(QAudioOutput* self, bool muted) {
	self->mutedChanged(muted);
}

void QAudioOutput_connect_MutedChanged(QAudioOutput* self, intptr_t slot) {
	QAudioOutput::connect(self, static_cast<void (QAudioOutput::*)(bool)>(&QAudioOutput::mutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QAudioOutput_MutedChanged(slot, sigval1);
	});
}

struct miqt_string QAudioOutput_Tr2(const char* s, const char* c) {
	QString _ret = QAudioOutput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioOutput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioOutput_Delete(QAudioOutput* self) {
	delete self;
}

