#include <QAudioDevice>
#include <QAudioFormat>
#include <QAudioSource>
#include <QIODevice>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiosource.h>
#include "gen_qaudiosource.h"
#include "_cgo_export.h"

QAudioSource* QAudioSource_new() {
	return new QAudioSource();
}

QAudioSource* QAudioSource_new2(QAudioDevice* audioDeviceInfo) {
	return new QAudioSource(*audioDeviceInfo);
}

QAudioSource* QAudioSource_new3(QAudioFormat* format) {
	return new QAudioSource(*format);
}

QAudioSource* QAudioSource_new4(QAudioFormat* format, QObject* parent) {
	return new QAudioSource(*format, parent);
}

QAudioSource* QAudioSource_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format) {
	return new QAudioSource(*audioDeviceInfo, *format);
}

QAudioSource* QAudioSource_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent) {
	return new QAudioSource(*audioDeviceInfo, *format, parent);
}

QMetaObject* QAudioSource_MetaObject(const QAudioSource* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioSource_Metacast(QAudioSource* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioSource_Tr(const char* s) {
	QString _ret = QAudioSource::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioSource_IsNull(const QAudioSource* self) {
	return self->isNull();
}

QAudioFormat* QAudioSource_Format(const QAudioSource* self) {
	return new QAudioFormat(self->format());
}

void QAudioSource_Start(QAudioSource* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioSource_Start2(QAudioSource* self) {
	return self->start();
}

void QAudioSource_Stop(QAudioSource* self) {
	self->stop();
}

void QAudioSource_Reset(QAudioSource* self) {
	self->reset();
}

void QAudioSource_Suspend(QAudioSource* self) {
	self->suspend();
}

void QAudioSource_Resume(QAudioSource* self) {
	self->resume();
}

void QAudioSource_SetBufferSize(QAudioSource* self, ptrdiff_t bytes) {
	self->setBufferSize((qsizetype)(bytes));
}

ptrdiff_t QAudioSource_BufferSize(const QAudioSource* self) {
	qsizetype _ret = self->bufferSize();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QAudioSource_BytesAvailable(const QAudioSource* self) {
	qsizetype _ret = self->bytesAvailable();
	return static_cast<ptrdiff_t>(_ret);
}

void QAudioSource_SetVolume(QAudioSource* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioSource_Volume(const QAudioSource* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

long long QAudioSource_ProcessedUSecs(const QAudioSource* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioSource_ElapsedUSecs(const QAudioSource* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioSource_Error(const QAudioSource* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioSource_State(const QAudioSource* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioSource_StateChanged(QAudioSource* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioSource_connect_StateChanged(QAudioSource* self, intptr_t slot) {
	QAudioSource::connect(self, static_cast<void (QAudioSource::*)(QAudio::State)>(&QAudioSource::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioSource_StateChanged(slot, sigval1);
	});
}

struct miqt_string QAudioSource_Tr2(const char* s, const char* c) {
	QString _ret = QAudioSource::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSource_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioSource::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioSource_Delete(QAudioSource* self) {
	delete self;
}

