#include <QAudioBuffer>
#include <QAudioDecoderControl>
#include <QAudioFormat>
#include <QIODevice>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiodecodercontrol.h>
#include "gen_qaudiodecodercontrol.h"
#include "_cgo_export.h"

QMetaObject* QAudioDecoderControl_MetaObject(const QAudioDecoderControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioDecoderControl_Metacast(QAudioDecoderControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioDecoderControl_Tr(const char* s) {
	QString _ret = QAudioDecoderControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoderControl_TrUtf8(const char* s) {
	QString _ret = QAudioDecoderControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAudioDecoderControl_State(const QAudioDecoderControl* self) {
	QAudioDecoder::State _ret = self->state();
	return static_cast<int>(_ret);
}

struct miqt_string QAudioDecoderControl_SourceFilename(const QAudioDecoderControl* self) {
	QString _ret = self->sourceFilename();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioDecoderControl_SetSourceFilename(QAudioDecoderControl* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setSourceFilename(fileName_QString);
}

QIODevice* QAudioDecoderControl_SourceDevice(const QAudioDecoderControl* self) {
	return self->sourceDevice();
}

void QAudioDecoderControl_SetSourceDevice(QAudioDecoderControl* self, QIODevice* device) {
	self->setSourceDevice(device);
}

void QAudioDecoderControl_Start(QAudioDecoderControl* self) {
	self->start();
}

void QAudioDecoderControl_Stop(QAudioDecoderControl* self) {
	self->stop();
}

QAudioFormat* QAudioDecoderControl_AudioFormat(const QAudioDecoderControl* self) {
	return new QAudioFormat(self->audioFormat());
}

void QAudioDecoderControl_SetAudioFormat(QAudioDecoderControl* self, QAudioFormat* format) {
	self->setAudioFormat(*format);
}

QAudioBuffer* QAudioDecoderControl_Read(QAudioDecoderControl* self) {
	return new QAudioBuffer(self->read());
}

bool QAudioDecoderControl_BufferAvailable(const QAudioDecoderControl* self) {
	return self->bufferAvailable();
}

long long QAudioDecoderControl_Position(const QAudioDecoderControl* self) {
	qint64 _ret = self->position();
	return static_cast<long long>(_ret);
}

long long QAudioDecoderControl_Duration(const QAudioDecoderControl* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

void QAudioDecoderControl_StateChanged(QAudioDecoderControl* self, int newState) {
	self->stateChanged(static_cast<QAudioDecoder::State>(newState));
}

void QAudioDecoderControl_connect_StateChanged(QAudioDecoderControl* self, intptr_t slot) {
	QAudioDecoderControl::connect(self, static_cast<void (QAudioDecoderControl::*)(QAudioDecoder::State)>(&QAudioDecoderControl::stateChanged), self, [=](QAudioDecoder::State newState) {
		QAudioDecoder::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		miqt_exec_callback_QAudioDecoderControl_StateChanged(slot, sigval1);
	});
}

void QAudioDecoderControl_FormatChanged(QAudioDecoderControl* self, QAudioFormat* format) {
	self->formatChanged(*format);
}

void QAudioDecoderControl_connect_FormatChanged(QAudioDecoderControl* self, intptr_t slot) {
	QAudioDecoderControl::connect(self, static_cast<void (QAudioDecoderControl::*)(const QAudioFormat&)>(&QAudioDecoderControl::formatChanged), self, [=](const QAudioFormat& format) {
		const QAudioFormat& format_ret = format;
		// Cast returned reference into pointer
		QAudioFormat* sigval1 = const_cast<QAudioFormat*>(&format_ret);
		miqt_exec_callback_QAudioDecoderControl_FormatChanged(slot, sigval1);
	});
}

void QAudioDecoderControl_SourceChanged(QAudioDecoderControl* self) {
	self->sourceChanged();
}

void QAudioDecoderControl_connect_SourceChanged(QAudioDecoderControl* self, intptr_t slot) {
	QAudioDecoderControl::connect(self, static_cast<void (QAudioDecoderControl::*)()>(&QAudioDecoderControl::sourceChanged), self, [=]() {
		miqt_exec_callback_QAudioDecoderControl_SourceChanged(slot);
	});
}

void QAudioDecoderControl_Error(QAudioDecoderControl* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->error(static_cast<int>(error), errorString_QString);
}

void QAudioDecoderControl_connect_Error(QAudioDecoderControl* self, intptr_t slot) {
	QAudioDecoderControl::connect(self, static_cast<void (QAudioDecoderControl::*)(int, const QString&)>(&QAudioDecoderControl::error), self, [=](int error, const QString& errorString) {
		int sigval1 = error;
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval2 = errorString_ms;
		miqt_exec_callback_QAudioDecoderControl_Error(slot, sigval1, sigval2);
	});
}

void QAudioDecoderControl_BufferReady(QAudioDecoderControl* self) {
	self->bufferReady();
}

void QAudioDecoderControl_connect_BufferReady(QAudioDecoderControl* self, intptr_t slot) {
	QAudioDecoderControl::connect(self, static_cast<void (QAudioDecoderControl::*)()>(&QAudioDecoderControl::bufferReady), self, [=]() {
		miqt_exec_callback_QAudioDecoderControl_BufferReady(slot);
	});
}

void QAudioDecoderControl_BufferAvailableChanged(QAudioDecoderControl* self, bool available) {
	self->bufferAvailableChanged(available);
}

void QAudioDecoderControl_connect_BufferAvailableChanged(QAudioDecoderControl* self, intptr_t slot) {
	QAudioDecoderControl::connect(self, static_cast<void (QAudioDecoderControl::*)(bool)>(&QAudioDecoderControl::bufferAvailableChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QAudioDecoderControl_BufferAvailableChanged(slot, sigval1);
	});
}

void QAudioDecoderControl_Finished(QAudioDecoderControl* self) {
	self->finished();
}

void QAudioDecoderControl_connect_Finished(QAudioDecoderControl* self, intptr_t slot) {
	QAudioDecoderControl::connect(self, static_cast<void (QAudioDecoderControl::*)()>(&QAudioDecoderControl::finished), self, [=]() {
		miqt_exec_callback_QAudioDecoderControl_Finished(slot);
	});
}

void QAudioDecoderControl_PositionChanged(QAudioDecoderControl* self, long long position) {
	self->positionChanged(static_cast<qint64>(position));
}

void QAudioDecoderControl_connect_PositionChanged(QAudioDecoderControl* self, intptr_t slot) {
	QAudioDecoderControl::connect(self, static_cast<void (QAudioDecoderControl::*)(qint64)>(&QAudioDecoderControl::positionChanged), self, [=](qint64 position) {
		qint64 position_ret = position;
		long long sigval1 = static_cast<long long>(position_ret);
		miqt_exec_callback_QAudioDecoderControl_PositionChanged(slot, sigval1);
	});
}

void QAudioDecoderControl_DurationChanged(QAudioDecoderControl* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QAudioDecoderControl_connect_DurationChanged(QAudioDecoderControl* self, intptr_t slot) {
	QAudioDecoderControl::connect(self, static_cast<void (QAudioDecoderControl::*)(qint64)>(&QAudioDecoderControl::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QAudioDecoderControl_DurationChanged(slot, sigval1);
	});
}

struct miqt_string QAudioDecoderControl_Tr2(const char* s, const char* c) {
	QString _ret = QAudioDecoderControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoderControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioDecoderControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoderControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioDecoderControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoderControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioDecoderControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioDecoderControl_Delete(QAudioDecoderControl* self) {
	delete self;
}

