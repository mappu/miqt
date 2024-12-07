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
	h          *C.QBitmap
	isSubclass bool
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
func newQBitmap(h *C.QBitmap, h_QPixmap *C.QPixmap, h_QPaintDevice *C.QPaintDevice) *QBitmap {
	if h == nil {
		return nil
	}
	return &QBitmap{h: h,
		QPixmap: newQPixmap(h_QPixmap, h_QPaintDevice)}
}

// UnsafeNewQBitmap constructs the type using only unsafe pointers.
func UnsafeNewQBitmap(h unsafe.Pointer, h_QPixmap unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QBitmap {
	if h == nil {
		return nil
	}

	return &QBitmap{h: (*C.QBitmap)(h),
		QPixmap: UnsafeNewQPixmap(h_QPixmap, h_QPaintDevice)}
}

// NewQBitmap constructs a new QBitmap object.
func NewQBitmap() *QBitmap {
	var outptr_QBitmap *C.QBitmap = nil
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QBitmap_new(&outptr_QBitmap, &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQBitmap(outptr_QBitmap, outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQBitmap2 constructs a new QBitmap object.
func NewQBitmap2(param1 *QPixmap) *QBitmap {
	var outptr_QBitmap *C.QBitmap = nil
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QBitmap_new2(param1.cPointer(), &outptr_QBitmap, &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQBitmap(outptr_QBitmap, outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQBitmap3 constructs a new QBitmap object.
func NewQBitmap3(w int, h int) *QBitmap {
	var outptr_QBitmap *C.QBitmap = nil
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QBitmap_new3((C.int)(w), (C.int)(h), &outptr_QBitmap, &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQBitmap(outptr_QBitmap, outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQBitmap4 constructs a new QBitmap object.
func NewQBitmap4(param1 *QSize) *QBitmap {
	var outptr_QBitmap *C.QBitmap = nil
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QBitmap_new4(param1.cPointer(), &outptr_QBitmap, &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQBitmap(outptr_QBitmap, outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQBitmap5 constructs a new QBitmap object.
func NewQBitmap5(fileName string) *QBitmap {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var outptr_QBitmap *C.QBitmap = nil
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QBitmap_new5(fileName_ms, &outptr_QBitmap, &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQBitmap(outptr_QBitmap, outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQBitmap6 constructs a new QBitmap object.
func NewQBitmap6(param1 *QBitmap) *QBitmap {
	var outptr_QBitmap *C.QBitmap = nil
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QBitmap_new6(param1.cPointer(), &outptr_QBitmap, &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQBitmap(outptr_QBitmap, outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQBitmap7 constructs a new QBitmap object.
func NewQBitmap7(fileName string, format string) *QBitmap {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	var outptr_QBitmap *C.QBitmap = nil
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QBitmap_new7(fileName_ms, format_Cstring, &outptr_QBitmap, &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQBitmap(outptr_QBitmap, outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QBitmap) OperatorAssign(param1 *QPixmap) {
	C.QBitmap_OperatorAssign(this.h, param1.cPointer())
}

func (this *QBitmap) Swap(other *QBitmap) {
	C.QBitmap_Swap(this.h, other.cPointer())
}

func (this *QBitmap) Clear() {
	C.QBitmap_Clear(this.h)
}

func QBitmap_FromImage(image *QImage) *QBitmap {
	_ret := C.QBitmap_FromImage(image.cPointer())
	_goptr := newQBitmap(_ret, nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QBitmap_FromData(size *QSize, bits *byte) *QBitmap {
	_ret := C.QBitmap_FromData(size.cPointer(), (*C.uchar)(unsafe.Pointer(bits)))
	_goptr := newQBitmap(_ret, nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QBitmap_FromPixmap(pixmap *QPixmap) *QBitmap {
	_ret := C.QBitmap_FromPixmap(pixmap.cPointer())
	_goptr := newQBitmap(_ret, nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitmap) Transformed(matrix *QTransform) *QBitmap {
	_ret := C.QBitmap_Transformed(this.h, matrix.cPointer())
	_goptr := newQBitmap(_ret, nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitmap) OperatorAssignWithQBitmap(param1 *QBitmap) {
	C.QBitmap_OperatorAssignWithQBitmap(this.h, param1.cPointer())
}

func QBitmap_FromImage2(image *QImage, flags ImageConversionFlag) *QBitmap {
	_ret := C.QBitmap_FromImage2(image.cPointer(), (C.int)(flags))
	_goptr := newQBitmap(_ret, nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QBitmap_FromData3(size *QSize, bits *byte, monoFormat QImage__Format) *QBitmap {
	_ret := C.QBitmap_FromData3(size.cPointer(), (*C.uchar)(unsafe.Pointer(bits)), (C.int)(monoFormat))
	_goptr := newQBitmap(_ret, nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitmap) callVirtualBase_DevType() int {

	return (int)(C.QBitmap_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QBitmap) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QBitmap_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBitmap_DevType
func miqt_exec_callback_QBitmap_DevType(self *C.QBitmap, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBitmap{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QBitmap) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QBitmap_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QBitmap) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QBitmap_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBitmap_PaintEngine
func miqt_exec_callback_QBitmap_PaintEngine(self *C.QBitmap, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBitmap{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QBitmap) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QBitmap_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QBitmap) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QBitmap_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBitmap_Metric
func miqt_exec_callback_QBitmap_Metric(self *C.QBitmap, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QBitmap{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QBitmap) Delete() {
	C.QBitmap_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBitmap) GoGC() {
	runtime.SetFinalizer(this, func(this *QBitmap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
