#include <QPaintDevice>
#include <QPaintEngine>
#include <qpaintdevice.h>
#include "gen_qpaintdevice.h"
#include "_cgo_export.h"

int QPaintDevice_DevType(const QPaintDevice* self) {
	return self->devType();
}

bool QPaintDevice_PaintingActive(const QPaintDevice* self) {
	return self->paintingActive();
}

QPaintEngine* QPaintDevice_PaintEngine(const QPaintDevice* self) {
	return self->paintEngine();
}

int QPaintDevice_Width(const QPaintDevice* self) {
	return self->width();
}

int QPaintDevice_Height(const QPaintDevice* self) {
	return self->height();
}

int QPaintDevice_WidthMM(const QPaintDevice* self) {
	return self->widthMM();
}

int QPaintDevice_HeightMM(const QPaintDevice* self) {
	return self->heightMM();
}

int QPaintDevice_LogicalDpiX(const QPaintDevice* self) {
	return self->logicalDpiX();
}

int QPaintDevice_LogicalDpiY(const QPaintDevice* self) {
	return self->logicalDpiY();
}

int QPaintDevice_PhysicalDpiX(const QPaintDevice* self) {
	return self->physicalDpiX();
}

int QPaintDevice_PhysicalDpiY(const QPaintDevice* self) {
	return self->physicalDpiY();
}

double QPaintDevice_DevicePixelRatio(const QPaintDevice* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

double QPaintDevice_DevicePixelRatioF(const QPaintDevice* self) {
	qreal _ret = self->devicePixelRatioF();
	return static_cast<double>(_ret);
}

int QPaintDevice_ColorCount(const QPaintDevice* self) {
	return self->colorCount();
}

int QPaintDevice_Depth(const QPaintDevice* self) {
	return self->depth();
}

double QPaintDevice_DevicePixelRatioFScale() {
	qreal _ret = QPaintDevice::devicePixelRatioFScale();
	return static_cast<double>(_ret);
}

void QPaintDevice_Delete(QPaintDevice* self) {
	delete self;
}

