#include <QAudioDeviceInfo>
#include <QAudioFormat>
#include <QAudioOutput>
#include <QIODevice>
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

QAudioOutput* QAudioOutput_new2(QAudioDeviceInfo* audioDeviceInfo) {
	return new QAudioOutput(*audioDeviceInfo);
}

QAudioOutput* QAudioOutput_new3(QAudioFormat* format) {
	return new QAudioOutput(*format);
}

QAudioOutput* QAudioOutput_new4(QAudioFormat* format, QObject* parent) {
	return new QAudioOutput(*format, parent);
}

QAudioOutput* QAudioOutput_new5(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format) {
	return new QAudioOutput(*audioDeviceInfo, *format);
}

QAudioOutput* QAudioOutput_new6(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format, QObject* parent) {
	return new QAudioOutput(*audioDeviceInfo, *format, parent);
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

struct miqt_string QAudioOutput_TrUtf8(const char* s) {
	QString _ret = QAudioOutput::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QAudioOutput_Format(const QAudioOutput* self) {
	return new QAudioFormat(self->format());
}

void QAudioOutput_Start(QAudioOutput* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioOutput_Start2(QAudioOutput* self) {
	return self->start();
}

void QAudioOutput_Stop(QAudioOutput* self) {
	self->stop();
}

void QAudioOutput_Reset(QAudioOutput* self) {
	self->reset();
}

void QAudioOutput_Suspend(QAudioOutput* self) {
	self->suspend();
}

void QAudioOutput_Resume(QAudioOutput* self) {
	self->resume();
}

void QAudioOutput_SetBufferSize(QAudioOutput* self, int bytes) {
	self->setBufferSize(static_cast<int>(bytes));
}

int QAudioOutput_BufferSize(const QAudioOutput* self) {
	return self->bufferSize();
}

int QAudioOutput_BytesFree(const QAudioOutput* self) {
	return self->bytesFree();
}

int QAudioOutput_PeriodSize(const QAudioOutput* self) {
	return self->periodSize();
}

void QAudioOutput_SetNotifyInterval(QAudioOutput* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

int QAudioOutput_NotifyInterval(const QAudioOutput* self) {
	return self->notifyInterval();
}

long long QAudioOutput_ProcessedUSecs(const QAudioOutput* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioOutput_ElapsedUSecs(const QAudioOutput* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioOutput_Error(const QAudioOutput* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioOutput_State(const QAudioOutput* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioOutput_SetVolume(QAudioOutput* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioOutput_Volume(const QAudioOutput* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

struct miqt_string QAudioOutput_Category(const QAudioOutput* self) {
	QString _ret = self->category();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioOutput_SetCategory(QAudioOutput* self, struct miqt_string category) {
	QString category_QString = QString::fromUtf8(category.data, category.len);
	self->setCategory(category_QString);
}

void QAudioOutput_StateChanged(QAudioOutput* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioOutput_connect_StateChanged(QAudioOutput* self, intptr_t slot) {
	QAudioOutput::connect(self, static_cast<void (QAudioOutput::*)(QAudio::State)>(&QAudioOutput::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioOutput_StateChanged(slot, sigval1);
	});
}

void QAudioOutput_Notify(QAudioOutput* self) {
	self->notify();
}

void QAudioOutput_connect_Notify(QAudioOutput* self, intptr_t slot) {
	QAudioOutput::connect(self, static_cast<void (QAudioOutput::*)()>(&QAudioOutput::notify), self, [=]() {
		miqt_exec_callback_QAudioOutput_Notify(slot);
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

struct miqt_string QAudioOutput_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioOutput::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioOutput::trUtf8(s, c, static_cast<int>(n));
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

