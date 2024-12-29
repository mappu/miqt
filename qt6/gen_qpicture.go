package qt6

/*

#include "gen_qpicture.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPicture struct {
	h          *C.QPicture
	isSubclass bool
	*QPaintDevice
}

func (this *QPicture) cPointer() *C.QPicture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPicture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPicture constructs the type using only CGO pointers.
func newQPicture(h *C.QPicture) *QPicture {
	if h == nil {
		return nil
	}
	var outptr_QPaintDevice *C.QPaintDevice = nil
	C.QPicture_virtbase(h, &outptr_QPaintDevice)

	return &QPicture{h: h,
		QPaintDevice: newQPaintDevice(outptr_QPaintDevice)}
}

// UnsafeNewQPicture constructs the type using only unsafe pointers.
func UnsafeNewQPicture(h unsafe.Pointer) *QPicture {
	return newQPicture((*C.QPicture)(h))
}

// NewQPicture constructs a new QPicture object.
func NewQPicture() *QPicture {

	ret := newQPicture(C.QPicture_new())
	ret.isSubclass = true
	return ret
}

// NewQPicture2 constructs a new QPicture object.
func NewQPicture2(param1 *QPicture) *QPicture {

	ret := newQPicture(C.QPicture_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQPicture3 constructs a new QPicture object.
func NewQPicture3(formatVersion int) *QPicture {

	ret := newQPicture(C.QPicture_new3((C.int)(formatVersion)))
	ret.isSubclass = true
	return ret
}

func (this *QPicture) IsNull() bool {
	return (bool)(C.QPicture_IsNull(this.h))
}

func (this *QPicture) DevType() int {
	return (int)(C.QPicture_DevType(this.h))
}

func (this *QPicture) Size() uint {
	return (uint)(C.QPicture_Size(this.h))
}

func (this *QPicture) Data() string {
	_ret := C.QPicture_Data(this.h)
	return C.GoString(_ret)
}

func (this *QPicture) SetData(data string, size uint) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QPicture_SetData(this.h, data_Cstring, (C.uint)(size))
}

func (this *QPicture) Play(p *QPainter) bool {
	return (bool)(C.QPicture_Play(this.h, p.cPointer()))
}

func (this *QPicture) Load(dev *QIODevice) bool {
	return (bool)(C.QPicture_Load(this.h, dev.cPointer()))
}

func (this *QPicture) LoadWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPicture_LoadWithFileName(this.h, fileName_ms))
}

func (this *QPicture) Save(dev *QIODevice) bool {
	return (bool)(C.QPicture_Save(this.h, dev.cPointer()))
}

func (this *QPicture) SaveWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPicture_SaveWithFileName(this.h, fileName_ms))
}

func (this *QPicture) BoundingRect() *QRect {
	_goptr := newQRect(C.QPicture_BoundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPicture) SetBoundingRect(r *QRect) {
	C.QPicture_SetBoundingRect(this.h, r.cPointer())
}

func (this *QPicture) OperatorAssign(p *QPicture) {
	C.QPicture_OperatorAssign(this.h, p.cPointer())
}

func (this *QPicture) Swap(other *QPicture) {
	C.QPicture_Swap(this.h, other.cPointer())
}

func (this *QPicture) Detach() {
	C.QPicture_Detach(this.h)
}

func (this *QPicture) IsDetached() bool {
	return (bool)(C.QPicture_IsDetached(this.h))
}

func (this *QPicture) PaintEngine() *QPaintEngine {
	return newQPaintEngine(C.QPicture_PaintEngine(this.h))
}

func (this *QPicture) callVirtualBase_DevType() int {

	return (int)(C.QPicture_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QPicture) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_DevType
func miqt_exec_callback_QPicture_DevType(self *C.QPicture, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPicture{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPicture) callVirtualBase_SetData(data string, size uint) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	C.QPicture_virtualbase_SetData(unsafe.Pointer(this.h), data_Cstring, (C.uint)(size))

}
func (this *QPicture) OnSetData(slot func(super func(data string, size uint), data string, size uint)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_SetData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_SetData
func miqt_exec_callback_QPicture_SetData(self *C.QPicture, cb C.intptr_t, data *C.const_char, size C.uint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, size uint), data string, size uint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (uint)(size)

	gofunc((&QPicture{h: self}).callVirtualBase_SetData, slotval1, slotval2)

}

func (this *QPicture) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QPicture_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QPicture) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_PaintEngine
func miqt_exec_callback_QPicture_PaintEngine(self *C.QPicture, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPicture{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QPicture) callVirtualBase_Metric(m QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPicture_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(m)))

}
func (this *QPicture) OnMetric(slot func(super func(m QPaintDevice__PaintDeviceMetric) int, m QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_Metric
func miqt_exec_callback_QPicture_Metric(self *C.QPicture, cb C.intptr_t, m C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(m QPaintDevice__PaintDeviceMetric) int, m QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(m)

	virtualReturn := gofunc((&QPicture{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPicture) callVirtualBase_InitPainter(painter *QPainter) {

	C.QPicture_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QPicture) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_InitPainter
func miqt_exec_callback_QPicture_InitPainter(self *C.QPicture, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QPicture{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPicture) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QPicture_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QPicture) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_Redirected
func miqt_exec_callback_QPicture_Redirected(self *C.QPicture, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QPicture{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QPicture) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QPicture_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QPicture) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_SharedPainter
func miqt_exec_callback_QPicture_SharedPainter(self *C.QPicture, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPicture{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QPicture) Delete() {
	C.QPicture_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPicture) GoGC() {
	runtime.SetFinalizer(this, func(this *QPicture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
