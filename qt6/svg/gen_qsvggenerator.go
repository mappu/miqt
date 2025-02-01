package svg

/*

#include "gen_qsvggenerator.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSvgGenerator struct {
	h *C.QSvgGenerator
	*qt6.QPaintDevice
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
		QPaintDevice: qt6.UnsafeNewQPaintDevice(unsafe.Pointer(outptr_QPaintDevice))}
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
	var _ms C.struct_miqt_string = C.QSvgGenerator_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgGenerator) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QSvgGenerator_setTitle(this.h, title_ms)
}

func (this *QSvgGenerator) Description() string {
	var _ms C.struct_miqt_string = C.QSvgGenerator_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgGenerator) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QSvgGenerator_setDescription(this.h, description_ms)
}

func (this *QSvgGenerator) Size() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QSvgGenerator_size(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgGenerator) SetSize(size *qt6.QSize) {
	C.QSvgGenerator_setSize(this.h, (*C.QSize)(size.UnsafePointer()))
}

func (this *QSvgGenerator) ViewBox() *qt6.QRect {
	_goptr := qt6.UnsafeNewQRect(unsafe.Pointer(C.QSvgGenerator_viewBox(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgGenerator) ViewBoxF() *qt6.QRectF {
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QSvgGenerator_viewBoxF(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgGenerator) SetViewBox(viewBox *qt6.QRect) {
	C.QSvgGenerator_setViewBox(this.h, (*C.QRect)(viewBox.UnsafePointer()))
}

func (this *QSvgGenerator) SetViewBoxWithViewBox(viewBox *qt6.QRectF) {
	C.QSvgGenerator_setViewBoxWithViewBox(this.h, (*C.QRectF)(viewBox.UnsafePointer()))
}

func (this *QSvgGenerator) FileName() string {
	var _ms C.struct_miqt_string = C.QSvgGenerator_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgGenerator) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QSvgGenerator_setFileName(this.h, fileName_ms)
}

func (this *QSvgGenerator) OutputDevice() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QSvgGenerator_outputDevice(this.h)))
}

func (this *QSvgGenerator) SetOutputDevice(outputDevice *qt6.QIODevice) {
	C.QSvgGenerator_setOutputDevice(this.h, (*C.QIODevice)(outputDevice.UnsafePointer()))
}

func (this *QSvgGenerator) SetResolution(dpi int) {
	C.QSvgGenerator_setResolution(this.h, (C.int)(dpi))
}

func (this *QSvgGenerator) Resolution() int {
	return (int)(C.QSvgGenerator_resolution(this.h))
}

func (this *QSvgGenerator) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QSvgGenerator_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QSvgGenerator) OnpaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QSvgGenerator_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgGenerator_paintEngine
func miqt_exec_callback_QSvgGenerator_paintEngine(self *C.QSvgGenerator, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSvgGenerator{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QSvgGenerator) callVirtualBase_Metric(metric qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSvgGenerator_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(metric)))

}
func (this *QSvgGenerator) Onmetric(slot func(super func(metric qt6.QPaintDevice__PaintDeviceMetric) int, metric qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSvgGenerator_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgGenerator_metric
func miqt_exec_callback_QSvgGenerator_metric(self *C.QSvgGenerator, cb C.intptr_t, metric C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(metric qt6.QPaintDevice__PaintDeviceMetric) int, metric qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(metric)

	virtualReturn := gofunc((&QSvgGenerator{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSvgGenerator) callVirtualBase_DevType() int {

	return (int)(C.QSvgGenerator_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QSvgGenerator) OndevType(slot func(super func() int) int) {
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

func (this *QSvgGenerator) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QSvgGenerator_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QSvgGenerator) OninitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QSvgGenerator_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgGenerator_initPainter
func miqt_exec_callback_QSvgGenerator_initPainter(self *C.QSvgGenerator, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QSvgGenerator{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSvgGenerator) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QSvgGenerator_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QSvgGenerator) Onredirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QSvgGenerator_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgGenerator_redirected
func miqt_exec_callback_QSvgGenerator_redirected(self *C.QSvgGenerator, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QSvgGenerator{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QSvgGenerator) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QSvgGenerator_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QSvgGenerator) OnsharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QSvgGenerator_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgGenerator_sharedPainter
func miqt_exec_callback_QSvgGenerator_sharedPainter(self *C.QSvgGenerator, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSvgGenerator{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QSvgGenerator) Delete() {
	C.QSvgGenerator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSvgGenerator) GoGC() {
	runtime.SetFinalizer(this, func(this *QSvgGenerator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
