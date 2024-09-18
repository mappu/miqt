package qt

/*

#include "gen_qpaintdevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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
	return (int)(C.QPaintDevice_DevType(this.h))
}

func (this *QPaintDevice) PaintingActive() bool {
	return (bool)(C.QPaintDevice_PaintingActive(this.h))
}

func (this *QPaintDevice) PaintEngine() *QPaintEngine {
	return newQPaintEngine_U(unsafe.Pointer(C.QPaintDevice_PaintEngine(this.h)))
}

func (this *QPaintDevice) Width() int {
	return (int)(C.QPaintDevice_Width(this.h))
}

func (this *QPaintDevice) Height() int {
	return (int)(C.QPaintDevice_Height(this.h))
}

func (this *QPaintDevice) WidthMM() int {
	return (int)(C.QPaintDevice_WidthMM(this.h))
}

func (this *QPaintDevice) HeightMM() int {
	return (int)(C.QPaintDevice_HeightMM(this.h))
}

func (this *QPaintDevice) LogicalDpiX() int {
	return (int)(C.QPaintDevice_LogicalDpiX(this.h))
}

func (this *QPaintDevice) LogicalDpiY() int {
	return (int)(C.QPaintDevice_LogicalDpiY(this.h))
}

func (this *QPaintDevice) PhysicalDpiX() int {
	return (int)(C.QPaintDevice_PhysicalDpiX(this.h))
}

func (this *QPaintDevice) PhysicalDpiY() int {
	return (int)(C.QPaintDevice_PhysicalDpiY(this.h))
}

func (this *QPaintDevice) DevicePixelRatio() int {
	return (int)(C.QPaintDevice_DevicePixelRatio(this.h))
}

func (this *QPaintDevice) DevicePixelRatioF() float64 {
	return (float64)(C.QPaintDevice_DevicePixelRatioF(this.h))
}

func (this *QPaintDevice) ColorCount() int {
	return (int)(C.QPaintDevice_ColorCount(this.h))
}

func (this *QPaintDevice) Depth() int {
	return (int)(C.QPaintDevice_Depth(this.h))
}

func QPaintDevice_DevicePixelRatioFScale() float64 {
	return (float64)(C.QPaintDevice_DevicePixelRatioFScale())
}

// Delete this object from C++ memory.
func (this *QPaintDevice) Delete() {
	C.QPaintDevice_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPaintDevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QPaintDevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
