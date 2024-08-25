#include "gen_qpaintdevice.h"
#include "qpaintdevice.h"

#include <QPaintDevice>
#include <QPaintEngine>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

int QPaintDevice_DevType(QPaintDevice* self) {
	return self->devType();
}

bool QPaintDevice_PaintingActive(QPaintDevice* self) {
	return self->paintingActive();
}

QPaintEngine* QPaintDevice_PaintEngine(QPaintDevice* self) {
	return self->paintEngine();
}

int QPaintDevice_Width(QPaintDevice* self) {
	return self->width();
}

int QPaintDevice_Height(QPaintDevice* self) {
	return self->height();
}

int QPaintDevice_WidthMM(QPaintDevice* self) {
	return self->widthMM();
}

int QPaintDevice_HeightMM(QPaintDevice* self) {
	return self->heightMM();
}

int QPaintDevice_LogicalDpiX(QPaintDevice* self) {
	return self->logicalDpiX();
}

int QPaintDevice_LogicalDpiY(QPaintDevice* self) {
	return self->logicalDpiY();
}

int QPaintDevice_PhysicalDpiX(QPaintDevice* self) {
	return self->physicalDpiX();
}

int QPaintDevice_PhysicalDpiY(QPaintDevice* self) {
	return self->physicalDpiY();
}

int QPaintDevice_DevicePixelRatio(QPaintDevice* self) {
	return self->devicePixelRatio();
}

double QPaintDevice_DevicePixelRatioF(QPaintDevice* self) {
	return self->devicePixelRatioF();
}

int QPaintDevice_ColorCount(QPaintDevice* self) {
	return self->colorCount();
}

int QPaintDevice_Depth(QPaintDevice* self) {
	return self->depth();
}

double QPaintDevice_DevicePixelRatioFScale() {
	return QPaintDevice::devicePixelRatioFScale();
}

void QPaintDevice_Delete(QPaintDevice* self) {
	delete self;
}

