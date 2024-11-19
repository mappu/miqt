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

bool QAudioBuffer_IsValid(const QAudioBuffer* self) {
	return self->isValid();
}

QAudioFormat* QAudioBuffer_Format(const QAudioBuffer* self) {
	return new QAudioFormat(self->format());
}

int QAudioBuffer_FrameCount(const QAudioBuffer* self) {
	return self->frameCount();
}

int QAudioBuffer_SampleCount(const QAudioBuffer* self) {
	return self->sampleCount();
}

int QAudioBuffer_ByteCount(const QAudioBuffer* self) {
	return self->byteCount();
}

long long QAudioBuffer_Duration(const QAudioBuffer* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

long long QAudioBuffer_StartTime(const QAudioBuffer* self) {
	qint64 _ret = self->startTime();
	return static_cast<long long>(_ret);
}

const void* QAudioBuffer_ConstData(const QAudioBuffer* self) {
	return (const void*) self->constData();
}

const void* QAudioBuffer_Data(const QAudioBuffer* self) {
	return (const void*) self->data();
}

void* QAudioBuffer_Data2(QAudioBuffer* self) {
	return self->data();
}

void QAudioBuffer_Delete(QAudioBuffer* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAudioBuffer*>( self );
	} else {
		delete self;
	}
}

