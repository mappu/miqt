#include <QAudioFormat>
#include <QIODevice>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWaveDecoder>
#include <qwavedecoder.h>
#include "gen_qwavedecoder.h"
#include "_cgo_export.h"

QWaveDecoder* QWaveDecoder_new(QIODevice* device) {
	return new QWaveDecoder(device);
}

QWaveDecoder* QWaveDecoder_new2(QIODevice* device, QAudioFormat* format) {
	return new QWaveDecoder(device, *format);
}

QWaveDecoder* QWaveDecoder_new3(QIODevice* device, QObject* parent) {
	return new QWaveDecoder(device, parent);
}

QWaveDecoder* QWaveDecoder_new4(QIODevice* device, QAudioFormat* format, QObject* parent) {
	return new QWaveDecoder(device, *format, parent);
}

QMetaObject* QWaveDecoder_MetaObject(const QWaveDecoder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWaveDecoder_Metacast(QWaveDecoder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWaveDecoder_Tr(const char* s) {
	QString _ret = QWaveDecoder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QWaveDecoder_AudioFormat(const QWaveDecoder* self) {
	return new QAudioFormat(self->audioFormat());
}

QIODevice* QWaveDecoder_GetDevice(QWaveDecoder* self) {
	return self->getDevice();
}

int QWaveDecoder_Duration(const QWaveDecoder* self) {
	return self->duration();
}

long long QWaveDecoder_HeaderLength() {
	qint64 _ret = QWaveDecoder::headerLength();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_Open(QWaveDecoder* self, int mode) {
	return self->open(static_cast<QIODevice::OpenMode>(mode));
}

void QWaveDecoder_Close(QWaveDecoder* self) {
	self->close();
}

bool QWaveDecoder_Seek(QWaveDecoder* self, long long pos) {
	return self->seek(static_cast<qint64>(pos));
}

long long QWaveDecoder_Pos(const QWaveDecoder* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

void QWaveDecoder_SetIODevice(QWaveDecoder* self, QIODevice* device) {
	self->setIODevice(device);
}

long long QWaveDecoder_Size(const QWaveDecoder* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_IsSequential(const QWaveDecoder* self) {
	return self->isSequential();
}

long long QWaveDecoder_BytesAvailable(const QWaveDecoder* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

void QWaveDecoder_FormatKnown(QWaveDecoder* self) {
	self->formatKnown();
}

void QWaveDecoder_connect_FormatKnown(QWaveDecoder* self, intptr_t slot) {
	QWaveDecoder::connect(self, static_cast<void (QWaveDecoder::*)()>(&QWaveDecoder::formatKnown), self, [=]() {
		miqt_exec_callback_QWaveDecoder_FormatKnown(slot);
	});
}

void QWaveDecoder_ParsingError(QWaveDecoder* self) {
	self->parsingError();
}

void QWaveDecoder_connect_ParsingError(QWaveDecoder* self, intptr_t slot) {
	QWaveDecoder::connect(self, static_cast<void (QWaveDecoder::*)()>(&QWaveDecoder::parsingError), self, [=]() {
		miqt_exec_callback_QWaveDecoder_ParsingError(slot);
	});
}

struct miqt_string QWaveDecoder_Tr2(const char* s, const char* c) {
	QString _ret = QWaveDecoder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWaveDecoder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWaveDecoder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWaveDecoder_Delete(QWaveDecoder* self) {
	delete self;
}

