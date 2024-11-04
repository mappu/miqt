#include <QAudioBuffer>
#include <QAudioDecoder>
#include <QAudioFormat>
#include <QIODevice>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qaudiodecoder.h>
#include "gen_qaudiodecoder.h"
#include "_cgo_export.h"

QAudioDecoder* QAudioDecoder_new() {
	return new QAudioDecoder();
}

QAudioDecoder* QAudioDecoder_new2(QObject* parent) {
	return new QAudioDecoder(parent);
}

QMetaObject* QAudioDecoder_MetaObject(const QAudioDecoder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioDecoder_Metacast(QAudioDecoder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioDecoder_Tr(const char* s) {
	QString _ret = QAudioDecoder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioDecoder_IsSupported(const QAudioDecoder* self) {
	return self->isSupported();
}

bool QAudioDecoder_IsDecoding(const QAudioDecoder* self) {
	return self->isDecoding();
}

QUrl* QAudioDecoder_Source(const QAudioDecoder* self) {
	return new QUrl(self->source());
}

void QAudioDecoder_SetSource(QAudioDecoder* self, QUrl* fileName) {
	self->setSource(*fileName);
}

QIODevice* QAudioDecoder_SourceDevice(const QAudioDecoder* self) {
	return self->sourceDevice();
}

void QAudioDecoder_SetSourceDevice(QAudioDecoder* self, QIODevice* device) {
	self->setSourceDevice(device);
}

QAudioFormat* QAudioDecoder_AudioFormat(const QAudioDecoder* self) {
	return new QAudioFormat(self->audioFormat());
}

void QAudioDecoder_SetAudioFormat(QAudioDecoder* self, QAudioFormat* format) {
	self->setAudioFormat(*format);
}

int QAudioDecoder_Error(const QAudioDecoder* self) {
	QAudioDecoder::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QAudioDecoder_ErrorString(const QAudioDecoder* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioBuffer* QAudioDecoder_Read(const QAudioDecoder* self) {
	return new QAudioBuffer(self->read());
}

bool QAudioDecoder_BufferAvailable(const QAudioDecoder* self) {
	return self->bufferAvailable();
}

long long QAudioDecoder_Position(const QAudioDecoder* self) {
	qint64 _ret = self->position();
	return static_cast<long long>(_ret);
}

long long QAudioDecoder_Duration(const QAudioDecoder* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

void QAudioDecoder_Start(QAudioDecoder* self) {
	self->start();
}

void QAudioDecoder_Stop(QAudioDecoder* self) {
	self->stop();
}

void QAudioDecoder_BufferAvailableChanged(QAudioDecoder* self, bool param1) {
	self->bufferAvailableChanged(param1);
}

void QAudioDecoder_connect_BufferAvailableChanged(QAudioDecoder* self, intptr_t slot) {
	QAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(bool)>(&QAudioDecoder::bufferAvailableChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QAudioDecoder_BufferAvailableChanged(slot, sigval1);
	});
}

void QAudioDecoder_BufferReady(QAudioDecoder* self) {
	self->bufferReady();
}

void QAudioDecoder_connect_BufferReady(QAudioDecoder* self, intptr_t slot) {
	QAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::bufferReady), self, [=]() {
		miqt_exec_callback_QAudioDecoder_BufferReady(slot);
	});
}

void QAudioDecoder_Finished(QAudioDecoder* self) {
	self->finished();
}

void QAudioDecoder_connect_Finished(QAudioDecoder* self, intptr_t slot) {
	QAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::finished), self, [=]() {
		miqt_exec_callback_QAudioDecoder_Finished(slot);
	});
}

void QAudioDecoder_IsDecodingChanged(QAudioDecoder* self, bool param1) {
	self->isDecodingChanged(param1);
}

void QAudioDecoder_connect_IsDecodingChanged(QAudioDecoder* self, intptr_t slot) {
	QAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(bool)>(&QAudioDecoder::isDecodingChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QAudioDecoder_IsDecodingChanged(slot, sigval1);
	});
}

void QAudioDecoder_FormatChanged(QAudioDecoder* self, QAudioFormat* format) {
	self->formatChanged(*format);
}

void QAudioDecoder_connect_FormatChanged(QAudioDecoder* self, intptr_t slot) {
	QAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(const QAudioFormat&)>(&QAudioDecoder::formatChanged), self, [=](const QAudioFormat& format) {
		const QAudioFormat& format_ret = format;
		// Cast returned reference into pointer
		QAudioFormat* sigval1 = const_cast<QAudioFormat*>(&format_ret);
		miqt_exec_callback_QAudioDecoder_FormatChanged(slot, sigval1);
	});
}

void QAudioDecoder_ErrorWithError(QAudioDecoder* self, int error) {
	self->error(static_cast<QAudioDecoder::Error>(error));
}

void QAudioDecoder_connect_ErrorWithError(QAudioDecoder* self, intptr_t slot) {
	QAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(QAudioDecoder::Error)>(&QAudioDecoder::error), self, [=](QAudioDecoder::Error error) {
		QAudioDecoder::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QAudioDecoder_ErrorWithError(slot, sigval1);
	});
}

void QAudioDecoder_SourceChanged(QAudioDecoder* self) {
	self->sourceChanged();
}

void QAudioDecoder_connect_SourceChanged(QAudioDecoder* self, intptr_t slot) {
	QAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::sourceChanged), self, [=]() {
		miqt_exec_callback_QAudioDecoder_SourceChanged(slot);
	});
}

void QAudioDecoder_PositionChanged(QAudioDecoder* self, long long position) {
	self->positionChanged(static_cast<qint64>(position));
}

void QAudioDecoder_connect_PositionChanged(QAudioDecoder* self, intptr_t slot) {
	QAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(qint64)>(&QAudioDecoder::positionChanged), self, [=](qint64 position) {
		qint64 position_ret = position;
		long long sigval1 = static_cast<long long>(position_ret);
		miqt_exec_callback_QAudioDecoder_PositionChanged(slot, sigval1);
	});
}

void QAudioDecoder_DurationChanged(QAudioDecoder* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QAudioDecoder_connect_DurationChanged(QAudioDecoder* self, intptr_t slot) {
	QAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(qint64)>(&QAudioDecoder::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QAudioDecoder_DurationChanged(slot, sigval1);
	});
}

struct miqt_string QAudioDecoder_Tr2(const char* s, const char* c) {
	QString _ret = QAudioDecoder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioDecoder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioDecoder_Delete(QAudioDecoder* self) {
	delete self;
}

