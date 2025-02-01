#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <qpaintdevice.h>
#include "gen_qpaintdevice.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QPaintDevice_devType(const QPaintDevice* self) {
	return self->devType();
}

bool QPaintDevice_paintingActive(const QPaintDevice* self) {
	return self->paintingActive();
}

QPaintEngine* QPaintDevice_paintEngine(const QPaintDevice* self) {
	return self->paintEngine();
}

int QPaintDevice_width(const QPaintDevice* self) {
	return self->width();
}

int QPaintDevice_height(const QPaintDevice* self) {
	return self->height();
}

int QPaintDevice_widthMM(const QPaintDevice* self) {
	return self->widthMM();
}

int QPaintDevice_heightMM(const QPaintDevice* self) {
	return self->heightMM();
}

int QPaintDevice_logicalDpiX(const QPaintDevice* self) {
	return self->logicalDpiX();
}

int QPaintDevice_logicalDpiY(const QPaintDevice* self) {
	return self->logicalDpiY();
}

int QPaintDevice_physicalDpiX(const QPaintDevice* self) {
	return self->physicalDpiX();
}

int QPaintDevice_physicalDpiY(const QPaintDevice* self) {
	return self->physicalDpiY();
}

double QPaintDevice_devicePixelRatio(const QPaintDevice* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

double QPaintDevice_devicePixelRatioF(const QPaintDevice* self) {
	qreal _ret = self->devicePixelRatioF();
	return static_cast<double>(_ret);
}

int QPaintDevice_colorCount(const QPaintDevice* self) {
	return self->colorCount();
}

int QPaintDevice_depth(const QPaintDevice* self) {
	return self->depth();
}

double QPaintDevice_devicePixelRatioFScale() {
	qreal _ret = QPaintDevice::devicePixelRatioFScale();
	return static_cast<double>(_ret);
}

void QPaintDevice_delete(QPaintDevice* self) {
	delete self;
}

