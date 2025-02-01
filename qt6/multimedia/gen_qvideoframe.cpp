#include <QImage>
#include <QPainter>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoFrame>
#define WORKAROUND_INNER_CLASS_DEFINITION_QVideoFrame__PaintOptions
#include <QVideoFrameFormat>
#include <qvideoframe.h>
#include "gen_qvideoframe.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QVideoFrame* QVideoFrame_new() {
	return new QVideoFrame();
}

QVideoFrame* QVideoFrame_new2(QVideoFrameFormat* format) {
	return new QVideoFrame(*format);
}

QVideoFrame* QVideoFrame_new3(QVideoFrame* other) {
	return new QVideoFrame(*other);
}

void QVideoFrame_swap(QVideoFrame* self, QVideoFrame* other) {
	self->swap(*other);
}

void QVideoFrame_operatorAssign(QVideoFrame* self, QVideoFrame* other) {
	self->operator=(*other);
}

bool QVideoFrame_operatorEqual(const QVideoFrame* self, QVideoFrame* other) {
	return (*self == *other);
}

bool QVideoFrame_operatorNotEqual(const QVideoFrame* self, QVideoFrame* other) {
	return (*self != *other);
}

bool QVideoFrame_isValid(const QVideoFrame* self) {
	return self->isValid();
}

int QVideoFrame_pixelFormat(const QVideoFrame* self) {
	QVideoFrameFormat::PixelFormat _ret = self->pixelFormat();
	return static_cast<int>(_ret);
}

QVideoFrameFormat* QVideoFrame_surfaceFormat(const QVideoFrame* self) {
	return new QVideoFrameFormat(self->surfaceFormat());
}

int QVideoFrame_handleType(const QVideoFrame* self) {
	QVideoFrame::HandleType _ret = self->handleType();
	return static_cast<int>(_ret);
}

QSize* QVideoFrame_size(const QVideoFrame* self) {
	return new QSize(self->size());
}

int QVideoFrame_width(const QVideoFrame* self) {
	return self->width();
}

int QVideoFrame_height(const QVideoFrame* self) {
	return self->height();
}

bool QVideoFrame_isMapped(const QVideoFrame* self) {
	return self->isMapped();
}

bool QVideoFrame_isReadable(const QVideoFrame* self) {
	return self->isReadable();
}

bool QVideoFrame_isWritable(const QVideoFrame* self) {
	return self->isWritable();
}

int QVideoFrame_mapMode(const QVideoFrame* self) {
	QVideoFrame::MapMode _ret = self->mapMode();
	return static_cast<int>(_ret);
}

bool QVideoFrame_map(QVideoFrame* self, int mode) {
	return self->map(static_cast<QVideoFrame::MapMode>(mode));
}

void QVideoFrame_unmap(QVideoFrame* self) {
	self->unmap();
}

int QVideoFrame_bytesPerLine(const QVideoFrame* self, int plane) {
	return self->bytesPerLine(static_cast<int>(plane));
}

unsigned char* QVideoFrame_bits(QVideoFrame* self, int plane) {
	uchar* _ret = self->bits(static_cast<int>(plane));
	return static_cast<unsigned char*>(_ret);
}

const unsigned char* QVideoFrame_bitsWithPlane(const QVideoFrame* self, int plane) {
	const uchar* _ret = self->bits(static_cast<int>(plane));
	return static_cast<const unsigned char*>(_ret);
}

int QVideoFrame_mappedBytes(const QVideoFrame* self, int plane) {
	return self->mappedBytes(static_cast<int>(plane));
}

int QVideoFrame_planeCount(const QVideoFrame* self) {
	return self->planeCount();
}

long long QVideoFrame_startTime(const QVideoFrame* self) {
	qint64 _ret = self->startTime();
	return static_cast<long long>(_ret);
}

void QVideoFrame_setStartTime(QVideoFrame* self, long long time) {
	self->setStartTime(static_cast<qint64>(time));
}

long long QVideoFrame_endTime(const QVideoFrame* self) {
	qint64 _ret = self->endTime();
	return static_cast<long long>(_ret);
}

void QVideoFrame_setEndTime(QVideoFrame* self, long long time) {
	self->setEndTime(static_cast<qint64>(time));
}

void QVideoFrame_setRotationAngle(QVideoFrame* self, int rotationAngle) {
	self->setRotationAngle(static_cast<QVideoFrame::RotationAngle>(rotationAngle));
}

int QVideoFrame_rotationAngle(const QVideoFrame* self) {
	QVideoFrame::RotationAngle _ret = self->rotationAngle();
	return static_cast<int>(_ret);
}

void QVideoFrame_setMirrored(QVideoFrame* self, bool mirrored) {
	self->setMirrored(mirrored);
}

bool QVideoFrame_mirrored(const QVideoFrame* self) {
	return self->mirrored();
}

QImage* QVideoFrame_toImage(const QVideoFrame* self) {
	return new QImage(self->toImage());
}

struct miqt_string QVideoFrame_subtitleText(const QVideoFrame* self) {
	QString _ret = self->subtitleText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoFrame_setSubtitleText(QVideoFrame* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setSubtitleText(text_QString);
}

void QVideoFrame_paint(QVideoFrame* self, QPainter* painter, QRectF* rect, QVideoFrame__PaintOptions* options) {
	self->paint(painter, *rect, *options);
}

void QVideoFrame_delete(QVideoFrame* self) {
	delete self;
}

void QVideoFrame__PaintOptions_delete(QVideoFrame__PaintOptions* self) {
	delete self;
}

