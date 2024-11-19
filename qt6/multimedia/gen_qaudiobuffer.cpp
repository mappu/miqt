#include <QAudioBuffer>
#include <QAudioFormat>
#include <QByteArray>
#include <qaudiobuffer.h>
#include "gen_qaudiobuffer.h"
#include "_cgo_export.h"

void QAudioBuffer_new(QAudioBuffer** outptr_QAudioBuffer) {
	QAudioBuffer* ret = new QAudioBuffer();
	*outptr_QAudioBuffer = ret;
}

void QAudioBuffer_new2(QAudioBuffer* other, QAudioBuffer** outptr_QAudioBuffer) {
	QAudioBuffer* ret = new QAudioBuffer(*other);
	*outptr_QAudioBuffer = ret;
}

void QAudioBuffer_new3(struct miqt_string data, QAudioFormat* format, QAudioBuffer** outptr_QAudioBuffer) {
	QByteArray data_QByteArray(data.data, data.len);
	QAudioBuffer* ret = new QAudioBuffer(data_QByteArray, *format);
	*outptr_QAudioBuffer = ret;
}

void QAudioBuffer_new4(int numFrames, QAudioFormat* format, QAudioBuffer** outptr_QAudioBuffer) {
	QAudioBuffer* ret = new QAudioBuffer(static_cast<int>(numFrames), *format);
	*outptr_QAudioBuffer = ret;
}

void QAudioBuffer_new5(struct miqt_string data, QAudioFormat* format, long long startTime, QAudioBuffer** outptr_QAudioBuffer) {
	QByteArray data_QByteArray(data.data, data.len);
	QAudioBuffer* ret = new QAudioBuffer(data_QByteArray, *format, static_cast<qint64>(startTime));
	*outptr_QAudioBuffer = ret;
}

void QAudioBuffer_new6(int numFrames, QAudioFormat* format, long long startTime, QAudioBuffer** outptr_QAudioBuffer) {
	QAudioBuffer* ret = new QAudioBuffer(static_cast<int>(numFrames), *format, static_cast<qint64>(startTime));
	*outptr_QAudioBuffer = ret;
}

void QAudioBuffer_OperatorAssign(QAudioBuffer* self, QAudioBuffer* other) {
	self->operator=(*other);
}

void QAudioBuffer_Swap(QAudioBuffer* self, QAudioBuffer* other) {
	self->swap(*other);
}

bool QAudioBuffer_IsValid(const QAudioBuffer* self) {
	return self->isValid();
}

void QAudioBuffer_Detach(QAudioBuffer* self) {
	self->detach();
}

QAudioFormat* QAudioBuffer_Format(const QAudioBuffer* self) {
	return new QAudioFormat(self->format());
}

ptrdiff_t QAudioBuffer_FrameCount(const QAudioBuffer* self) {
	qsizetype _ret = self->frameCount();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QAudioBuffer_SampleCount(const QAudioBuffer* self) {
	qsizetype _ret = self->sampleCount();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QAudioBuffer_ByteCount(const QAudioBuffer* self) {
	qsizetype _ret = self->byteCount();
	return static_cast<ptrdiff_t>(_ret);
}

long long QAudioBuffer_Duration(const QAudioBuffer* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

long long QAudioBuffer_StartTime(const QAudioBuffer* self) {
	qint64 _ret = self->startTime();
	return static_cast<long long>(_ret);
}

void QAudioBuffer_Delete(QAudioBuffer* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAudioBuffer*>( self );
	} else {
		delete self;
	}
}

