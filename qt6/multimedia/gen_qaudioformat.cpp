#include <QAudioFormat>
#include <qaudioformat.h>
#include "gen_qaudioformat.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QAudioFormat* QAudioFormat_new() {
	return new QAudioFormat();
}

QAudioFormat* QAudioFormat_new2(QAudioFormat* param1) {
	return new QAudioFormat(*param1);
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

void QAudioFormat_SetChannelConfig(QAudioFormat* self, uint32_t config) {
	self->setChannelConfig(static_cast<QAudioFormat::ChannelConfig>(config));
}

uint32_t QAudioFormat_ChannelConfig(const QAudioFormat* self) {
	QAudioFormat::ChannelConfig _ret = self->channelConfig();
	return static_cast<uint32_t>(_ret);
}

void QAudioFormat_SetChannelCount(QAudioFormat* self, int channelCount) {
	self->setChannelCount(static_cast<int>(channelCount));
}

int QAudioFormat_ChannelCount(const QAudioFormat* self) {
	return self->channelCount();
}

int QAudioFormat_ChannelOffset(const QAudioFormat* self, int channel) {
	return self->channelOffset(static_cast<QAudioFormat::AudioChannelPosition>(channel));
}

void QAudioFormat_SetSampleFormat(QAudioFormat* self, uint16_t f) {
	self->setSampleFormat(static_cast<QAudioFormat::SampleFormat>(f));
}

uint16_t QAudioFormat_SampleFormat(const QAudioFormat* self) {
	QAudioFormat::SampleFormat _ret = self->sampleFormat();
	return static_cast<uint16_t>(_ret);
}

int QAudioFormat_BytesForDuration(const QAudioFormat* self, long long microseconds) {
	qint32 _ret = self->bytesForDuration(static_cast<qint64>(microseconds));
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

int QAudioFormat_FramesForDuration(const QAudioFormat* self, long long microseconds) {
	qint32 _ret = self->framesForDuration(static_cast<qint64>(microseconds));
	return static_cast<int>(_ret);
}

long long QAudioFormat_DurationForFrames(const QAudioFormat* self, int frameCount) {
	qint64 _ret = self->durationForFrames(static_cast<qint32>(frameCount));
	return static_cast<long long>(_ret);
}

int QAudioFormat_BytesPerFrame(const QAudioFormat* self) {
	return self->bytesPerFrame();
}

int QAudioFormat_BytesPerSample(const QAudioFormat* self) {
	return self->bytesPerSample();
}

float QAudioFormat_NormalizedSampleValue(const QAudioFormat* self, const void* sample) {
	return self->normalizedSampleValue(sample);
}

uint32_t QAudioFormat_DefaultChannelConfigForChannelCount(int channelCount) {
	QAudioFormat::ChannelConfig _ret = QAudioFormat::defaultChannelConfigForChannelCount(static_cast<int>(channelCount));
	return static_cast<uint32_t>(_ret);
}

void QAudioFormat_Delete(QAudioFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAudioFormat*>( self );
	} else {
		delete self;
	}
}

