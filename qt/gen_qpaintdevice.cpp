#include <QPaintDevice>
#include <QPaintEngine>
#include "qpaintdevice.h"

#include "gen_qpaintdevice.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

int QPaintDevice_DevType(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->devType();
}

bool QPaintDevice_PaintingActive(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->paintingActive();
}

QPaintEngine* QPaintDevice_PaintEngine(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->paintEngine();
}

int QPaintDevice_Width(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->width();
}

int QPaintDevice_Height(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->height();
}

int QPaintDevice_WidthMM(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->widthMM();
}

int QPaintDevice_HeightMM(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->heightMM();
}

int QPaintDevice_LogicalDpiX(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->logicalDpiX();
}

int QPaintDevice_LogicalDpiY(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->logicalDpiY();
}

int QPaintDevice_PhysicalDpiX(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->physicalDpiX();
}

int QPaintDevice_PhysicalDpiY(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->physicalDpiY();
}

int QPaintDevice_DevicePixelRatio(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->devicePixelRatio();
}

double QPaintDevice_DevicePixelRatioF(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->devicePixelRatioF();
}

int QPaintDevice_ColorCount(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->colorCount();
}

int QPaintDevice_Depth(QPaintDevice* self) {
	return const_cast<const QPaintDevice*>(self)->depth();
}

double QPaintDevice_DevicePixelRatioFScale() {
	return QPaintDevice::devicePixelRatioFScale();
}

void QPaintDevice_Delete(QPaintDevice* self) {
	delete self;
}

