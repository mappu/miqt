#include <QCameraViewfinderSettings>
#include <QSize>
#include <qcameraviewfindersettings.h>
#include "gen_qcameraviewfindersettings.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCameraViewfinderSettings* QCameraViewfinderSettings_new() {
	return new QCameraViewfinderSettings();
}

QCameraViewfinderSettings* QCameraViewfinderSettings_new2(QCameraViewfinderSettings* other) {
	return new QCameraViewfinderSettings(*other);
}

void QCameraViewfinderSettings_operatorAssign(QCameraViewfinderSettings* self, QCameraViewfinderSettings* other) {
	self->operator=(*other);
}

void QCameraViewfinderSettings_swap(QCameraViewfinderSettings* self, QCameraViewfinderSettings* other) {
	self->swap(*other);
}

bool QCameraViewfinderSettings_isNull(const QCameraViewfinderSettings* self) {
	return self->isNull();
}

QSize* QCameraViewfinderSettings_resolution(const QCameraViewfinderSettings* self) {
	return new QSize(self->resolution());
}

void QCameraViewfinderSettings_setResolution(QCameraViewfinderSettings* self, QSize* resolution) {
	self->setResolution(*resolution);
}

void QCameraViewfinderSettings_setResolution2(QCameraViewfinderSettings* self, int width, int height) {
	self->setResolution(static_cast<int>(width), static_cast<int>(height));
}

double QCameraViewfinderSettings_minimumFrameRate(const QCameraViewfinderSettings* self) {
	qreal _ret = self->minimumFrameRate();
	return static_cast<double>(_ret);
}

void QCameraViewfinderSettings_setMinimumFrameRate(QCameraViewfinderSettings* self, double rate) {
	self->setMinimumFrameRate(static_cast<qreal>(rate));
}

double QCameraViewfinderSettings_maximumFrameRate(const QCameraViewfinderSettings* self) {
	qreal _ret = self->maximumFrameRate();
	return static_cast<double>(_ret);
}

void QCameraViewfinderSettings_setMaximumFrameRate(QCameraViewfinderSettings* self, double rate) {
	self->setMaximumFrameRate(static_cast<qreal>(rate));
}

int QCameraViewfinderSettings_pixelFormat(const QCameraViewfinderSettings* self) {
	QVideoFrame::PixelFormat _ret = self->pixelFormat();
	return static_cast<int>(_ret);
}

void QCameraViewfinderSettings_setPixelFormat(QCameraViewfinderSettings* self, int format) {
	self->setPixelFormat(static_cast<QVideoFrame::PixelFormat>(format));
}

QSize* QCameraViewfinderSettings_pixelAspectRatio(const QCameraViewfinderSettings* self) {
	return new QSize(self->pixelAspectRatio());
}

void QCameraViewfinderSettings_setPixelAspectRatio(QCameraViewfinderSettings* self, QSize* ratio) {
	self->setPixelAspectRatio(*ratio);
}

void QCameraViewfinderSettings_setPixelAspectRatio2(QCameraViewfinderSettings* self, int horizontal, int vertical) {
	self->setPixelAspectRatio(static_cast<int>(horizontal), static_cast<int>(vertical));
}

void QCameraViewfinderSettings_delete(QCameraViewfinderSettings* self) {
	delete self;
}

