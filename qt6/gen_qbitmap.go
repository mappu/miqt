package qt6

/*

#include "gen_qbitmap.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QBitmap struct {
	h *C.QBitmap
	*QPixmap
}

func (this *QBitmap) cPointer() *C.QBitmap {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBitmap) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBitmap constructs the type using only CGO pointers.
func newQBitmap(h *C.QBitmap) *QBitmap {
	if h == nil {
		return nil
	}
	var outptr_QPixmap *C.QPixmap = nil
	C.QBitmap_virtbase(h, &outptr_QPixmap)

	return &QBitmap{h: h,
		QPixmap: newQPixmap(outptr_QPixmap)}
}

// UnsafeNewQBitmap constructs the type using only unsafe pointers.
func UnsafeNewQBitmap(h unsafe.Pointer) *QBitmap {
	return newQBitmap((*C.QBitmap)(h))
}

// NewQBitmap constructs a new QBitmap object.
func NewQBitmap() *QBitmap {

	return newQBitmap(C.QBitmap_new())
}

// NewQBitmap2 constructs a new QBitmap object.
func NewQBitmap2(param1 *QPixmap) *QBitmap {

	return newQBitmap(C.QBitmap_new2(param1.cPointer()))
}

// NewQBitmap3 constructs a new QBitmap object.
func NewQBitmap3(w int, h int) *QBitmap {

	return newQBitmap(C.QBitmap_new3((C.int)(w), (C.int)(h)))
}

// NewQBitmap4 constructs a new QBitmap object.
func NewQBitmap4(param1 *QSize) *QBitmap {

	return newQBitmap(C.QBitmap_new4(param1.cPointer()))
}

// NewQBitmap5 constructs a new QBitmap object.
func NewQBitmap5(fileName string) *QBitmap {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQBitmap(C.QBitmap_new5(fileName_ms))
}

// NewQBitmap6 constructs a new QBitmap object.
func NewQBitmap6(param1 *QBitmap) *QBitmap {

	return newQBitmap(C.QBitmap_new6(param1.cPointer()))
}

// NewQBitmap7 constructs a new QBitmap object.
func NewQBitmap7(fileName string, format string) *QBitmap {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))

	return newQBitmap(C.QBitmap_new7(fileName_ms, format_Cstring))
}

func (this *QBitmap) OperatorAssign(param1 *QPixmap) {
	C.QBitmap_operatorAssign(this.h, param1.cPointer())
}

func (this *QBitmap) Swap(other *QBitmap) {
	C.QBitmap_swap(this.h, other.cPointer())
}

func (this *QBitmap) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QBitmap_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitmap) Clear() {
	C.QBitmap_clear(this.h)
}

func QBitmap_FromImage(image *QImage) *QBitmap {
	_goptr := newQBitmap(C.QBitmap_fromImage(image.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QBitmap_FromData(size *QSize, bits *byte) *QBitmap {
	_goptr := newQBitmap(C.QBitmap_fromData(size.cPointer(), (*C.uchar)(unsafe.Pointer(bits))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QBitmap_FromPixmap(pixmap *QPixmap) *QBitmap {
	_goptr := newQBitmap(C.QBitmap_fromPixmap(pixmap.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitmap) Transformed(matrix *QTransform) *QBitmap {
	_goptr := newQBitmap(C.QBitmap_transformed(this.h, matrix.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitmap) OperatorAssignWithQBitmap(param1 *QBitmap) {
	C.QBitmap_operatorAssignWithQBitmap(this.h, param1.cPointer())
}

func QBitmap_FromImage2(image *QImage, flags ImageConversionFlag) *QBitmap {
	_goptr := newQBitmap(C.QBitmap_fromImage2(image.cPointer(), (C.int)(flags)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QBitmap_FromData2(size *QSize, bits *byte, monoFormat QImage__Format) *QBitmap {
	_goptr := newQBitmap(C.QBitmap_fromData2(size.cPointer(), (*C.uchar)(unsafe.Pointer(bits)), (C.int)(monoFormat)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitmap) callVirtualBase_DevType() int {

	return (int)(C.QBitmap_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QBitmap) OnDevType(slot func(super func() int) int) {
	ok := C.QBitmap_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBitmap_devType
func miqt_exec_callback_QBitmap_devType(self *C.QBitmap, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBitmap{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QBitmap) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QBitmap_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QBitmap) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QBitmap_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBitmap_paintEngine
func miqt_exec_callback_QBitmap_paintEngine(self *C.QBitmap, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBitmap{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QBitmap) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QBitmap_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QBitmap) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QBitmap_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBitmap_metric
func miqt_exec_callback_QBitmap_metric(self *C.QBitmap, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QBitmap{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QBitmap) callVirtualBase_InitPainter(painter *QPainter) {

	C.QBitmap_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QBitmap) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QBitmap_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBitmap_initPainter
func miqt_exec_callback_QBitmap_initPainter(self *C.QBitmap, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QBitmap{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QBitmap) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QBitmap_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QBitmap) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QBitmap_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBitmap_redirected
func miqt_exec_callback_QBitmap_redirected(self *C.QBitmap, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QBitmap{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QBitmap) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QBitmap_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QBitmap) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QBitmap_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBitmap_sharedPainter
func miqt_exec_callback_QBitmap_sharedPainter(self *C.QBitmap, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBitmap{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QBitmap) Delete() {
	C.QBitmap_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBitmap) GoGC() {
	runtime.SetFinalizer(this, func(this *QBitmap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
