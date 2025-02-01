#include <QAudioFormat>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudioformat.h>
#include "gen_qaudioformat.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QAudioFormat* QAudioFormat_new() {
	return new QAudioFormat();
}

QAudioFormat* QAudioFormat_new2(QAudioFormat* other) {
	return new QAudioFormat(*other);
}

void QAudioFormat_operatorAssign(QAudioFormat* self, QAudioFormat* other) {
	self->operator=(*other);
}

bool QAudioFormat_operatorEqual(const QAudioFormat* self, QAudioFormat* other) {
	return (*self == *other);
}

bool QAudioFormat_operatorNotEqual(const QAudioFormat* self, QAudioFormat* other) {
	return (*self != *other);
}

bool QAudioFormat_isValid(const QAudioFormat* self) {
	return self->isValid();
}

void QAudioFormat_setSampleRate(QAudioFormat* self, int sampleRate) {
	self->setSampleRate(static_cast<int>(sampleRate));
}

int QAudioFormat_sampleRate(const QAudioFormat* self) {
	return self->sampleRate();
}

void QAudioFormat_setChannelCount(QAudioFormat* self, int channelCount) {
	self->setChannelCount(static_cast<int>(channelCount));
}

int QAudioFormat_channelCount(const QAudioFormat* self) {
	return self->channelCount();
}

void QAudioFormat_setSampleSize(QAudioFormat* self, int sampleSize) {
	self->setSampleSize(static_cast<int>(sampleSize));
}

int QAudioFormat_sampleSize(const QAudioFormat* self) {
	return self->sampleSize();
}

void QAudioFormat_setCodec(QAudioFormat* self, struct miqt_string codec) {
	QString codec_QString = QString::fromUtf8(codec.data, codec.len);
	self->setCodec(codec_QString);
}

struct miqt_string QAudioFormat_codec(const QAudioFormat* self) {
	QString _ret = self->codec();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioFormat_setByteOrder(QAudioFormat* self, int byteOrder) {
	self->setByteOrder(static_cast<QAudioFormat::Endian>(byteOrder));
}

int QAudioFormat_byteOrder(const QAudioFormat* self) {
	QAudioFormat::Endian _ret = self->byteOrder();
	return static_cast<int>(_ret);
}

void QAudioFormat_setSampleType(QAudioFormat* self, int sampleType) {
	self->setSampleType(static_cast<QAudioFormat::SampleType>(sampleType));
}

int QAudioFormat_sampleType(const QAudioFormat* self) {
	QAudioFormat::SampleType _ret = self->sampleType();
	return static_cast<int>(_ret);
}

int QAudioFormat_bytesForDuration(const QAudioFormat* self, long long duration) {
	qint32 _ret = self->bytesForDuration(static_cast<qint64>(duration));
	return static_cast<int>(_ret);
}

long long QAudioFormat_durationForBytes(const QAudioFormat* self, int byteCount) {
	qint64 _ret = self->durationForBytes(static_cast<qint32>(byteCount));
	return static_cast<long long>(_ret);
}

int QAudioFormat_bytesForFrames(const QAudioFormat* self, int frameCount) {
	qint32 _ret = self->bytesForFrames(static_cast<qint32>(frameCount));
	return static_cast<int>(_ret);
}

int QAudioFormat_framesForBytes(const QAudioFormat* self, int byteCount) {
	qint32 _ret = self->framesForBytes(static_cast<qint32>(byteCount));
	return static_cast<int>(_ret);
}

int QAudioFormat_framesForDuration(const QAudioFormat* self, long long duration) {
	qint32 _ret = self->framesForDuration(static_cast<qint64>(duration));
	return static_cast<int>(_ret);
}

long long QAudioFormat_durationForFrames(const QAudioFormat* self, int frameCount) {
	qint64 _ret = self->durationForFrames(static_cast<qint32>(frameCount));
	return static_cast<long long>(_ret);
}

int QAudioFormat_bytesPerFrame(const QAudioFormat* self) {
	return self->bytesPerFrame();
}

void QAudioFormat_delete(QAudioFormat* self) {
	delete self;
}

