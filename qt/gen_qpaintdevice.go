package qt

/*

#include "gen_qpaintdevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QPaintDevice__PaintDeviceMetric int

const (
	QPaintDevice__PaintDeviceMetric__PdmWidth                  QPaintDevice__PaintDeviceMetric = 1
	QPaintDevice__PaintDeviceMetric__PdmHeight                 QPaintDevice__PaintDeviceMetric = 2
	QPaintDevice__PaintDeviceMetric__PdmWidthMM                QPaintDevice__PaintDeviceMetric = 3
	QPaintDevice__PaintDeviceMetric__PdmHeightMM               QPaintDevice__PaintDeviceMetric = 4
	QPaintDevice__PaintDeviceMetric__PdmNumColors              QPaintDevice__PaintDeviceMetric = 5
	QPaintDevice__PaintDeviceMetric__PdmDepth                  QPaintDevice__PaintDeviceMetric = 6
	QPaintDevice__PaintDeviceMetric__PdmDpiX                   QPaintDevice__PaintDeviceMetric = 7
	QPaintDevice__PaintDeviceMetric__PdmDpiY                   QPaintDevice__PaintDeviceMetric = 8
	QPaintDevice__PaintDeviceMetric__PdmPhysicalDpiX           QPaintDevice__PaintDeviceMetric = 9
	QPaintDevice__PaintDeviceMetric__PdmPhysicalDpiY           QPaintDevice__PaintDeviceMetric = 10
	QPaintDevice__PaintDeviceMetric__PdmDevicePixelRatio       QPaintDevice__PaintDeviceMetric = 11
	QPaintDevice__PaintDeviceMetric__PdmDevicePixelRatioScaled QPaintDevice__PaintDeviceMetric = 12
)

type QPaintDevice struct {
	h *C.QPaintDevice
}

func (this *QPaintDevice) cPointer() *C.QPaintDevice {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPaintDevice(h *C.QPaintDevice) *QPaintDevice {
	if h == nil {
		return nil
	}
	return &QPaintDevice{h: h}
}

func newQPaintDevice_U(h unsafe.Pointer) *QPaintDevice {
	return newQPaintDevice((*C.QPaintDevice)(h))
}

func (this *QPaintDevice) DevType() int {
	ret := C.QPaintDevice_DevType(this.h)
	return (int)(ret)
}

func (this *QPaintDevice) PaintingActive() bool {
	ret := C.QPaintDevice_PaintingActive(this.h)
	return (bool)(ret)
}

func (this *QPaintDevice) PaintEngine() *QPaintEngine {
	ret := C.QPaintDevice_PaintEngine(this.h)
	return newQPaintEngine_U(unsafe.Pointer(ret))
}

func (this *QPaintDevice) Width() int {
	ret := C.QPaintDevice_Width(this.h)
	return (int)(ret)
}

func (this *QPaintDevice) Height() int {
	ret := C.QPaintDevice_Height(this.h)
	return (int)(ret)
}

func (this *QPaintDevice) WidthMM() int {
	ret := C.QPaintDevice_WidthMM(this.h)
	return (int)(ret)
}

func (this *QPaintDevice) HeightMM() int {
	ret := C.QPaintDevice_HeightMM(this.h)
	return (int)(ret)
}

func (this *QPaintDevice) LogicalDpiX() int {
	ret := C.QPaintDevice_LogicalDpiX(this.h)
	return (int)(ret)
}

func (this *QPaintDevice) LogicalDpiY() int {
	ret := C.QPaintDevice_LogicalDpiY(this.h)
	return (int)(ret)
}

func (this *QPaintDevice) PhysicalDpiX() int {
	ret := C.QPaintDevice_PhysicalDpiX(this.h)
	return (int)(ret)
}

func (this *QPaintDevice) PhysicalDpiY() int {
	ret := C.QPaintDevice_PhysicalDpiY(this.h)
	return (int)(ret)
}

func (this *QPaintDevice) DevicePixelRatio() int {
	ret := C.QPaintDevice_DevicePixelRatio(this.h)
	return (int)(ret)
}

func (this *QPaintDevice) DevicePixelRatioF() float64 {
	ret := C.QPaintDevice_DevicePixelRatioF(this.h)
	return (float64)(ret)
}

func (this *QPaintDevice) ColorCount() int {
	ret := C.QPaintDevice_ColorCount(this.h)
	return (int)(ret)
}

func (this *QPaintDevice) Depth() int {
	ret := C.QPaintDevice_Depth(this.h)
	return (int)(ret)
}

func QPaintDevice_DevicePixelRatioFScale() float64 {
	ret := C.QPaintDevice_DevicePixelRatioFScale()
	return (float64)(ret)
}

func (this *QPaintDevice) Delete() {
	C.QPaintDevice_Delete(this.h)
}
