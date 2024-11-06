#include <QAudioDevice>
#include <QAudioFormat>
#include <QAudioSink>
#include <QIODevice>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiosink.h>
#include "gen_qaudiosink.h"
#include "_cgo_export.h"

QAudioSink* QAudioSink_new() {
	return new QAudioSink();
}

QAudioSink* QAudioSink_new2(QAudioDevice* audioDeviceInfo) {
	return new QAudioSink(*audioDeviceInfo);
}

QAudioSink* QAudioSink_new3(QAudioFormat* format) {
	return new QAudioSink(*format);
}

QAudioSink* QAudioSink_new4(QAudioFormat* format, QObject* parent) {
	return new QAudioSink(*format, parent);
}

QAudioSink* QAudioSink_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format) {
	return new QAudioSink(*audioDeviceInfo, *format);
}

QAudioSink* QAudioSink_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent) {
	return new QAudioSink(*audioDeviceInfo, *format, parent);
}

QMetaObject* QAudioSink_MetaObject(const QAudioSink* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioSink_Metacast(QAudioSink* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioSink_Tr(const char* s) {
	QString _ret = QAudioSink::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioSink_IsNull(const QAudioSink* self) {
	return self->isNull();
}

QAudioFormat* QAudioSink_Format(const QAudioSink* self) {
	return new QAudioFormat(self->format());
}

void QAudioSink_Start(QAudioSink* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioSink_Start2(QAudioSink* self) {
	return self->start();
}

void QAudioSink_Stop(QAudioSink* self) {
	self->stop();
}

void QAudioSink_Reset(QAudioSink* self) {
	self->reset();
}

void QAudioSink_Suspend(QAudioSink* self) {
	self->suspend();
}

void QAudioSink_Resume(QAudioSink* self) {
	self->resume();
}

void QAudioSink_SetBufferSize(QAudioSink* self, ptrdiff_t bytes) {
	self->setBufferSize((qsizetype)(bytes));
}

ptrdiff_t QAudioSink_BufferSize(const QAudioSink* self) {
	qsizetype _ret = self->bufferSize();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QAudioSink_BytesFree(const QAudioSink* self) {
	qsizetype _ret = self->bytesFree();
	return static_cast<ptrdiff_t>(_ret);
}

long long QAudioSink_ProcessedUSecs(const QAudioSink* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioSink_ElapsedUSecs(const QAudioSink* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioSink_Error(const QAudioSink* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioSink_State(const QAudioSink* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioSink_SetVolume(QAudioSink* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioSink_Volume(const QAudioSink* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

void QAudioSink_StateChanged(QAudioSink* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioSink_connect_StateChanged(QAudioSink* self, intptr_t slot) {
	QAudioSink::connect(self, static_cast<void (QAudioSink::*)(QAudio::State)>(&QAudioSink::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioSink_StateChanged(slot, sigval1);
	});
}

struct miqt_string QAudioSink_Tr2(const char* s, const char* c) {
	QString _ret = QAudioSink::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSink_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioSink::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioSink_Delete(QAudioSink* self) {
	delete self;
}

