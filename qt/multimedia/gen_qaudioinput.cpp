#include <QAudioDeviceInfo>
#include <QAudioFormat>
#include <QAudioInput>
#include <QIODevice>
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

QAudioInput* QAudioInput_new2(QAudioDeviceInfo* audioDeviceInfo) {
	return new QAudioInput(*audioDeviceInfo);
}

QAudioInput* QAudioInput_new3(QAudioFormat* format) {
	return new QAudioInput(*format);
}

QAudioInput* QAudioInput_new4(QAudioFormat* format, QObject* parent) {
	return new QAudioInput(*format, parent);
}

QAudioInput* QAudioInput_new5(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format) {
	return new QAudioInput(*audioDeviceInfo, *format);
}

QAudioInput* QAudioInput_new6(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format, QObject* parent) {
	return new QAudioInput(*audioDeviceInfo, *format, parent);
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

struct miqt_string QAudioInput_TrUtf8(const char* s) {
	QString _ret = QAudioInput::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QAudioInput_Format(const QAudioInput* self) {
	return new QAudioFormat(self->format());
}

void QAudioInput_Start(QAudioInput* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioInput_Start2(QAudioInput* self) {
	return self->start();
}

void QAudioInput_Stop(QAudioInput* self) {
	self->stop();
}

void QAudioInput_Reset(QAudioInput* self) {
	self->reset();
}

void QAudioInput_Suspend(QAudioInput* self) {
	self->suspend();
}

void QAudioInput_Resume(QAudioInput* self) {
	self->resume();
}

void QAudioInput_SetBufferSize(QAudioInput* self, int bytes) {
	self->setBufferSize(static_cast<int>(bytes));
}

int QAudioInput_BufferSize(const QAudioInput* self) {
	return self->bufferSize();
}

int QAudioInput_BytesReady(const QAudioInput* self) {
	return self->bytesReady();
}

int QAudioInput_PeriodSize(const QAudioInput* self) {
	return self->periodSize();
}

void QAudioInput_SetNotifyInterval(QAudioInput* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

int QAudioInput_NotifyInterval(const QAudioInput* self) {
	return self->notifyInterval();
}

void QAudioInput_SetVolume(QAudioInput* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioInput_Volume(const QAudioInput* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

long long QAudioInput_ProcessedUSecs(const QAudioInput* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioInput_ElapsedUSecs(const QAudioInput* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioInput_Error(const QAudioInput* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioInput_State(const QAudioInput* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioInput_StateChanged(QAudioInput* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioInput_connect_StateChanged(QAudioInput* self, intptr_t slot) {
	QAudioInput::connect(self, static_cast<void (QAudioInput::*)(QAudio::State)>(&QAudioInput::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioInput_StateChanged(slot, sigval1);
	});
}

void QAudioInput_Notify(QAudioInput* self) {
	self->notify();
}

void QAudioInput_connect_Notify(QAudioInput* self, intptr_t slot) {
	QAudioInput::connect(self, static_cast<void (QAudioInput::*)()>(&QAudioInput::notify), self, [=]() {
		miqt_exec_callback_QAudioInput_Notify(slot);
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

struct miqt_string QAudioInput_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioInput::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioInput::trUtf8(s, c, static_cast<int>(n));
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

