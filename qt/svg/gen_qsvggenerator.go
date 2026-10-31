package svg

/*

#include "gen_qsvggenerator.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSvgGenerator struct {
	h  *C.QSvgGenerator
	gc *[1]unsafe.Pointer
	*qt.QPaintDevice
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSvgGenerator) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QSvgGenerator) cPointer() *C.QSvgGenerator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSvgGenerator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSvgGenerator constructs the type using only CGO pointers.
func newQSvgGenerator(h *C.QSvgGenerator) *QSvgGenerator {
	if h == nil {
		return nil
	}
	var outptr_QPaintDevice *C.QPaintDevice = nil
	C.QSvgGenerator_virtbase(h, &outptr_QPaintDevice)

	return &QSvgGenerator{h: h,
		QPaintDevice: qt.UnsafeNewQPaintDevice(unsafe.Pointer(outptr_QPaintDevice))}
}

// UnsafeNewQSvgGenerator constructs the type using only unsafe pointers.
func UnsafeNewQSvgGenerator(h unsafe.Pointer) *QSvgGenerator {
	return newQSvgGenerator((*C.QSvgGenerator)(h))
}

// NewQSvgGenerator constructs a new QSvgGenerator object.
func NewQSvgGenerator() *QSvgGenerator {

	return newQSvgGenerator(C.QSvgGenerator_new())
}

func (this *QSvgGenerator) Title() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSvgGenerator_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgGenerator) SetTitle(title string) {
	defer runtime.KeepAlive(this)
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QSvgGenerator_setTitle(this.h, title_ms)
}

func (this *QSvgGenerator) Description() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSvgGenerator_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgGenerator) SetDescription(description string) {
	defer runtime.KeepAlive(this)
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QSvgGenerator_setDescription(this.h, description_ms)
}

func (this *QSvgGenerator) Size() qt.QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QSize](C.QSvgGenerator_size(this.h))
}

func (this *QSvgGenerator) SetSize(size qt.QSize) {
	defer runtime.KeepAlive(this)
	C.QSvgGenerator_setSize(this.h, libmiqt.ValueCast[C.struct_miqt_qsize](size))
}

func (this *QSvgGenerator) ViewBox() qt.QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRect](C.QSvgGenerator_viewBox(this.h))
}

func (this *QSvgGenerator) ViewBoxF() qt.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRectF](C.QSvgGenerator_viewBoxF(this.h))
}

func (this *QSvgGenerator) SetViewBox(viewBox qt.QRect) {
	defer runtime.KeepAlive(this)
	C.QSvgGenerator_setViewBox(this.h, libmiqt.ValueCast[C.struct_miqt_qrect](viewBox))
}

func (this *QSvgGenerator) SetViewBoxWithViewBox(viewBox qt.QRectF) {
	defer runtime.KeepAlive(this)
	C.QSvgGenerator_setViewBoxWithViewBox(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](viewBox))
}

func (this *QSvgGenerator) FileName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSvgGenerator_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgGenerator) SetFileName(fileName string) {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QSvgGenerator_setFileName(this.h, fileName_ms)
}

func (this *QSvgGenerator) OutputDevice() *qt.QIODevice {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QSvgGenerator_outputDevice(this.h)))
}

func (this *QSvgGenerator) SetOutputDevice(outputDevice *qt.QIODevice) {
	defer runtime.KeepAlive(this)
	C.QSvgGenerator_setOutputDevice(this.h, (*C.QIODevice)(outputDevice.UnsafePointer()))
}

func (this *QSvgGenerator) SetResolution(dpi int) {
	defer runtime.KeepAlive(this)
	C.QSvgGenerator_setResolution(this.h, (C.int)(dpi))
}

func (this *QSvgGenerator) Resolution() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSvgGenerator_resolution(this.h))
}

func (this *QSvgGenerator) callVirtualBase_PaintEngine() *qt.QPaintEngine {
	defer runtime.KeepAlive(this)

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QSvgGenerator_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QSvgGenerator) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QSvgGenerator_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgGenerator_paintEngine
func miqt_exec_callback_QSvgGenerator_paintEngine(self *C.QSvgGenerator, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSvgGenerator{h: self}).callVirtualBase_PaintEngine)
	defer runtime.KeepAlive(virtualReturn)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QSvgGenerator) callVirtualBase_Metric(metric qt.QPaintDevice__PaintDeviceMetric) int {
	defer runtime.KeepAlive(this)

	return (int)(C.QSvgGenerator_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(metric)))

}
func (this *QSvgGenerator) OnMetric(slot func(super func(metric qt.QPaintDevice__PaintDeviceMetric) int, metric qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSvgGenerator_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgGenerator_metric
func miqt_exec_callback_QSvgGenerator_metric(self *C.QSvgGenerator, cb C.intptr_t, metric C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(metric qt.QPaintDevice__PaintDeviceMetric) int, metric qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(metric)

	virtualReturn := gofunc((&QSvgGenerator{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSvgGenerator) callVirtualBase_DevType() int {
	defer runtime.KeepAlive(this)

	return (int)(C.QSvgGenerator_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QSvgGenerator) OnDevType(slot func(super func() int) int) {
	ok := C.QSvgGenerator_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgGenerator_devType
func miqt_exec_callback_QSvgGenerator_devType(self *C.QSvgGenerator, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSvgGenerator{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSvgGenerator) callVirtualBase_InitPainter(painter *qt.QPainter) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(painter)

	C.QSvgGenerator_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QSvgGenerator) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QSvgGenerator_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgGenerator_initPainter
func miqt_exec_callback_QSvgGenerator_initPainter(self *C.QSvgGenerator, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QSvgGenerator{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSvgGenerator) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {
	defer runtime.KeepAlive(this)

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QSvgGenerator_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QSvgGenerator) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QSvgGenerator_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgGenerator_redirected
func miqt_exec_callback_QSvgGenerator_redirected(self *C.QSvgGenerator, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QSvgGenerator{h: self}).callVirtualBase_Redirected, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QSvgGenerator) callVirtualBase_SharedPainter() *qt.QPainter {
	defer runtime.KeepAlive(this)

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QSvgGenerator_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QSvgGenerator) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QSvgGenerator_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgGenerator_sharedPainter
func miqt_exec_callback_QSvgGenerator_sharedPainter(self *C.QSvgGenerator, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSvgGenerator{h: self}).callVirtualBase_SharedPainter)
	defer runtime.KeepAlive(virtualReturn)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QSvgGenerator) Delete() {
	C.QSvgGenerator_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSvgGenerator) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSvgGenerator_delete((*C.QSvgGenerator)(gc[0]))
	})
	this.miqtSetGC(gc)
}
