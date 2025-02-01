#include <QAudioFormat>
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

QAudioFormat* QAudioFormat_new2(QAudioFormat* param1) {
	return new QAudioFormat(*param1);
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

void QAudioFormat_setChannelConfig(QAudioFormat* self, uint32_t config) {
	self->setChannelConfig(static_cast<QAudioFormat::ChannelConfig>(config));
}

uint32_t QAudioFormat_channelConfig(const QAudioFormat* self) {
	QAudioFormat::ChannelConfig _ret = self->channelConfig();
	return static_cast<uint32_t>(_ret);
}

void QAudioFormat_setChannelCount(QAudioFormat* self, int channelCount) {
	self->setChannelCount(static_cast<int>(channelCount));
}

int QAudioFormat_channelCount(const QAudioFormat* self) {
	return self->channelCount();
}

int QAudioFormat_channelOffset(const QAudioFormat* self, int channel) {
	return self->channelOffset(static_cast<QAudioFormat::AudioChannelPosition>(channel));
}

void QAudioFormat_setSampleFormat(QAudioFormat* self, uint16_t f) {
	self->setSampleFormat(static_cast<QAudioFormat::SampleFormat>(f));
}

uint16_t QAudioFormat_sampleFormat(const QAudioFormat* self) {
	QAudioFormat::SampleFormat _ret = self->sampleFormat();
	return static_cast<uint16_t>(_ret);
}

int QAudioFormat_bytesForDuration(const QAudioFormat* self, long long microseconds) {
	qint32 _ret = self->bytesForDuration(static_cast<qint64>(microseconds));
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

int QAudioFormat_framesForDuration(const QAudioFormat* self, long long microseconds) {
	qint32 _ret = self->framesForDuration(static_cast<qint64>(microseconds));
	return static_cast<int>(_ret);
}

long long QAudioFormat_durationForFrames(const QAudioFormat* self, int frameCount) {
	qint64 _ret = self->durationForFrames(static_cast<qint32>(frameCount));
	return static_cast<long long>(_ret);
}

int QAudioFormat_bytesPerFrame(const QAudioFormat* self) {
	return self->bytesPerFrame();
}

int QAudioFormat_bytesPerSample(const QAudioFormat* self) {
	return self->bytesPerSample();
}

float QAudioFormat_normalizedSampleValue(const QAudioFormat* self, const void* sample) {
	return self->normalizedSampleValue(sample);
}

uint32_t QAudioFormat_defaultChannelConfigForChannelCount(int channelCount) {
	QAudioFormat::ChannelConfig _ret = QAudioFormat::defaultChannelConfigForChannelCount(static_cast<int>(channelCount));
	return static_cast<uint32_t>(_ret);
}

void QAudioFormat_delete(QAudioFormat* self) {
	delete self;
}

