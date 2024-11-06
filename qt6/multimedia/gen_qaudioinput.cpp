#include <QAudioDevice>
#include <QAudioInput>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudioinput.h>
#include "gen_qaudioinput.h"
#include "_cgo_export.h"

QAudioInput* QAudioInput_new() {
	return new QAudioInput();
}

QAudioInput* QAudioInput_new2(QAudioDevice* deviceInfo) {
	return new QAudioInput(*deviceInfo);
}

QAudioInput* QAudioInput_new3(QObject* parent) {
	return new QAudioInput(parent);
}

QAudioInput* QAudioInput_new4(QAudioDevice* deviceInfo, QObject* parent) {
	return new QAudioInput(*deviceInfo, parent);
}

QMetaObject* QAudioInput_MetaObject(const QAudioInput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioInput_Metacast(QAudioInput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioInput_Tr(const char* s) {
	QString _ret = QAudioInput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioDevice* QAudioInput_Device(const QAudioInput* self) {
	return new QAudioDevice(self->device());
}

float QAudioInput_Volume(const QAudioInput* self) {
	return self->volume();
}

bool QAudioInput_IsMuted(const QAudioInput* self) {
	return self->isMuted();
}

void QAudioInput_SetDevice(QAudioInput* self, QAudioDevice* device) {
	self->setDevice(*device);
}

void QAudioInput_SetVolume(QAudioInput* self, float volume) {
	self->setVolume(static_cast<float>(volume));
}

void QAudioInput_SetMuted(QAudioInput* self, bool muted) {
	self->setMuted(muted);
}

void QAudioInput_DeviceChanged(QAudioInput* self) {
	self->deviceChanged();
}

void QAudioInput_connect_DeviceChanged(QAudioInput* self, intptr_t slot) {
	QAudioInput::connect(self, static_cast<void (QAudioInput::*)()>(&QAudioInput::deviceChanged), self, [=]() {
		miqt_exec_callback_QAudioInput_DeviceChanged(slot);
	});
}

void QAudioInput_VolumeChanged(QAudioInput* self, float volume) {
	self->volumeChanged(static_cast<float>(volume));
}

void QAudioInput_connect_VolumeChanged(QAudioInput* self, intptr_t slot) {
	QAudioInput::connect(self, static_cast<void (QAudioInput::*)(float)>(&QAudioInput::volumeChanged), self, [=](float volume) {
		float sigval1 = volume;
		miqt_exec_callback_QAudioInput_VolumeChanged(slot, sigval1);
	});
}

void QAudioInput_MutedChanged(QAudioInput* self, bool muted) {
	self->mutedChanged(muted);
}

void QAudioInput_connect_MutedChanged(QAudioInput* self, intptr_t slot) {
	QAudioInput::connect(self, static_cast<void (QAudioInput::*)(bool)>(&QAudioInput::mutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QAudioInput_MutedChanged(slot, sigval1);
	});
}

struct miqt_string QAudioInput_Tr2(const char* s, const char* c) {
	QString _ret = QAudioInput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioInput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioInput_Delete(QAudioInput* self) {
	delete self;
}

