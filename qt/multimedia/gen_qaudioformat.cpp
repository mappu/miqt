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

void QAudioFormat_OperatorAssign(QAudioFormat* self, QAudioFormat* other) {
	self->operator=(*other);
}

bool QAudioFormat_OperatorEqual(const QAudioFormat* self, QAudioFormat* other) {
	return (*self == *other);
}

bool QAudioFormat_OperatorNotEqual(const QAudioFormat* self, QAudioFormat* other) {
	return (*self != *other);
}

bool QAudioFormat_IsValid(const QAudioFormat* self) {
	return self->isValid();
}

void QAudioFormat_SetSampleRate(QAudioFormat* self, int sampleRate) {
	self->setSampleRate(static_cast<int>(sampleRate));
}

int QAudioFormat_SampleRate(const QAudioFormat* self) {
	return self->sampleRate();
}

void QAudioFormat_SetChannelCount(QAudioFormat* self, int channelCount) {
	self->setChannelCount(static_cast<int>(channelCount));
}

int QAudioFormat_ChannelCount(const QAudioFormat* self) {
	return self->channelCount();
}

void QAudioFormat_SetSampleSize(QAudioFormat* self, int sampleSize) {
	self->setSampleSize(static_cast<int>(sampleSize));
}

int QAudioFormat_SampleSize(const QAudioFormat* self) {
	return self->sampleSize();
}

void QAudioFormat_SetCodec(QAudioFormat* self, struct miqt_string codec) {
	QString codec_QString = QString::fromUtf8(codec.data, codec.len);
	self->setCodec(codec_QString);
}

struct miqt_string QAudioFormat_Codec(const QAudioFormat* self) {
	QString _ret = self->codec();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioFormat_SetByteOrder(QAudioFormat* self, int byteOrder) {
	self->setByteOrder(static_cast<QAudioFormat::Endian>(byteOrder));
}

int QAudioFormat_ByteOrder(const QAudioFormat* self) {
	QAudioFormat::Endian _ret = self->byteOrder();
	return static_cast<int>(_ret);
}

void QAudioFormat_SetSampleType(QAudioFormat* self, int sampleType) {
	self->setSampleType(static_cast<QAudioFormat::SampleType>(sampleType));
}

int QAudioFormat_SampleType(const QAudioFormat* self) {
	QAudioFormat::SampleType _ret = self->sampleType();
	return static_cast<int>(_ret);
}

int QAudioFormat_BytesForDuration(const QAudioFormat* self, long long duration) {
	qint32 _ret = self->bytesForDuration(static_cast<qint64>(duration));
	return static_cast<int>(_ret);
}

long long QAudioFormat_DurationForBytes(const QAudioFormat* self, int byteCount) {
	qint64 _ret = self->durationForBytes(static_cast<qint32>(byteCount));
	return static_cast<long long>(_ret);
}

int QAudioFormat_BytesForFrames(const QAudioFormat* self, int frameCount) {
	qint32 _ret = self->bytesForFrames(static_cast<qint32>(frameCount));
	return static_cast<int>(_ret);
}

int QAudioFormat_FramesForBytes(const QAudioFormat* self, int byteCount) {
	qint32 _ret = self->framesForBytes(static_cast<qint32>(byteCount));
	return static_cast<int>(_ret);
}

int QAudioFormat_FramesForDuration(const QAudioFormat* self, long long duration) {
	qint32 _ret = self->framesForDuration(static_cast<qint64>(duration));
	return static_cast<int>(_ret);
}

long long QAudioFormat_DurationForFrames(const QAudioFormat* self, int frameCount) {
	qint64 _ret = self->durationForFrames(static_cast<qint32>(frameCount));
	return static_cast<long long>(_ret);
}

int QAudioFormat_BytesPerFrame(const QAudioFormat* self) {
	return self->bytesPerFrame();
}

void QAudioFormat_Delete(QAudioFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAudioFormat*>( self );
	} else {
		delete self;
	}
}

