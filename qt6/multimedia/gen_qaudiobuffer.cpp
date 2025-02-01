#include <QAudioBuffer>
#include <QAudioFormat>
#include <QByteArray>
#include <qaudiobuffer.h>
#include "gen_qaudiobuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QAudioBuffer* QAudioBuffer_new() {
	return new QAudioBuffer();
}

QAudioBuffer* QAudioBuffer_new2(QAudioBuffer* other) {
	return new QAudioBuffer(*other);
}

QAudioBuffer* QAudioBuffer_new3(struct miqt_string data, QAudioFormat* format) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QAudioBuffer(data_QByteArray, *format);
}

QAudioBuffer* QAudioBuffer_new4(int numFrames, QAudioFormat* format) {
	return new QAudioBuffer(static_cast<int>(numFrames), *format);
}

QAudioBuffer* QAudioBuffer_new5(struct miqt_string data, QAudioFormat* format, long long startTime) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QAudioBuffer(data_QByteArray, *format, static_cast<qint64>(startTime));
}

QAudioBuffer* QAudioBuffer_new6(int numFrames, QAudioFormat* format, long long startTime) {
	return new QAudioBuffer(static_cast<int>(numFrames), *format, static_cast<qint64>(startTime));
}

void QAudioBuffer_operatorAssign(QAudioBuffer* self, QAudioBuffer* other) {
	self->operator=(*other);
}

void QAudioBuffer_swap(QAudioBuffer* self, QAudioBuffer* other) {
	self->swap(*other);
}

bool QAudioBuffer_isValid(const QAudioBuffer* self) {
	return self->isValid();
}

void QAudioBuffer_detach(QAudioBuffer* self) {
	self->detach();
}

QAudioFormat* QAudioBuffer_format(const QAudioBuffer* self) {
	return new QAudioFormat(self->format());
}

ptrdiff_t QAudioBuffer_frameCount(const QAudioBuffer* self) {
	qsizetype _ret = self->frameCount();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QAudioBuffer_sampleCount(const QAudioBuffer* self) {
	qsizetype _ret = self->sampleCount();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QAudioBuffer_byteCount(const QAudioBuffer* self) {
	qsizetype _ret = self->byteCount();
	return static_cast<ptrdiff_t>(_ret);
}

long long QAudioBuffer_duration(const QAudioBuffer* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

long long QAudioBuffer_startTime(const QAudioBuffer* self) {
	qint64 _ret = self->startTime();
	return static_cast<long long>(_ret);
}

void QAudioBuffer_delete(QAudioBuffer* self) {
	delete self;
}

