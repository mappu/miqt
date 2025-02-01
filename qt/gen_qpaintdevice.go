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
	QPaintDevice__PdmWidth                  QPaintDevice__PaintDeviceMetric = 1
	QPaintDevice__PdmHeight                 QPaintDevice__PaintDeviceMetric = 2
	QPaintDevice__PdmWidthMM                QPaintDevice__PaintDeviceMetric = 3
	QPaintDevice__PdmHeightMM               QPaintDevice__PaintDeviceMetric = 4
	QPaintDevice__PdmNumColors              QPaintDevice__PaintDeviceMetric = 5
	QPaintDevice__PdmDepth                  QPaintDevice__PaintDeviceMetric = 6
	QPaintDevice__PdmDpiX                   QPaintDevice__PaintDeviceMetric = 7
	QPaintDevice__PdmDpiY                   QPaintDevice__PaintDeviceMetric = 8
	QPaintDevice__PdmPhysicalDpiX           QPaintDevice__PaintDeviceMetric = 9
	QPaintDevice__PdmPhysicalDpiY           QPaintDevice__PaintDeviceMetric = 10
	QPaintDevice__PdmDevicePixelRatio       QPaintDevice__PaintDeviceMetric = 11
	QPaintDevice__PdmDevicePixelRatioScaled QPaintDevice__PaintDeviceMetric = 12
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

func (this *QPaintDevice) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPaintDevice constructs the type using only CGO pointers.
func newQPaintDevice(h *C.QPaintDevice) *QPaintDevice {
	if h == nil {
		return nil
	}

	return &QPaintDevice{h: h}
}

// UnsafeNewQPaintDevice constructs the type using only unsafe pointers.
func UnsafeNewQPaintDevice(h unsafe.Pointer) *QPaintDevice {
	return newQPaintDevice((*C.QPaintDevice)(h))
}

func (this *QPaintDevice) DevType() int {
	return (int)(C.QPaintDevice_devType(this.h))
}

func (this *QPaintDevice) PaintingActive() bool {
	return (bool)(C.QPaintDevice_paintingActive(this.h))
}

func (this *QPaintDevice) PaintEngine() *QPaintEngine {
	return newQPaintEngine(C.QPaintDevice_paintEngine(this.h))
}

func (this *QPaintDevice) Width() int {
	return (int)(C.QPaintDevice_width(this.h))
}

func (this *QPaintDevice) Height() int {
	return (int)(C.QPaintDevice_height(this.h))
}

func (this *QPaintDevice) WidthMM() int {
	return (int)(C.QPaintDevice_widthMM(this.h))
}

func (this *QPaintDevice) HeightMM() int {
	return (int)(C.QPaintDevice_heightMM(this.h))
}

func (this *QPaintDevice) LogicalDpiX() int {
	return (int)(C.QPaintDevice_logicalDpiX(this.h))
}

func (this *QPaintDevice) LogicalDpiY() int {
	return (int)(C.QPaintDevice_logicalDpiY(this.h))
}

func (this *QPaintDevice) PhysicalDpiX() int {
	return (int)(C.QPaintDevice_physicalDpiX(this.h))
}

func (this *QPaintDevice) PhysicalDpiY() int {
	return (int)(C.QPaintDevice_physicalDpiY(this.h))
}

func (this *QPaintDevice) DevicePixelRatio() int {
	return (int)(C.QPaintDevice_devicePixelRatio(this.h))
}

func (this *QPaintDevice) DevicePixelRatioF() float64 {
	return (float64)(C.QPaintDevice_devicePixelRatioF(this.h))
}

func (this *QPaintDevice) ColorCount() int {
	return (int)(C.QPaintDevice_colorCount(this.h))
}

func (this *QPaintDevice) Depth() int {
	return (int)(C.QPaintDevice_depth(this.h))
}

func QPaintDevice_DevicePixelRatioFScale() float64 {
	return (float64)(C.QPaintDevice_devicePixelRatioFScale())
}

// Delete this object from C++ memory.
func (this *QPaintDevice) Delete() {
	C.QPaintDevice_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPaintDevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QPaintDevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
