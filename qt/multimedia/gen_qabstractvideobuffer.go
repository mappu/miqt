package multimedia

/*

#include "gen_qabstractvideobuffer.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractVideoBuffer__HandleType int

const (
	QAbstractVideoBuffer__NoHandle                 QAbstractVideoBuffer__HandleType = 0
	QAbstractVideoBuffer__GLTextureHandle          QAbstractVideoBuffer__HandleType = 1
	QAbstractVideoBuffer__XvShmImageHandle         QAbstractVideoBuffer__HandleType = 2
	QAbstractVideoBuffer__CoreImageHandle          QAbstractVideoBuffer__HandleType = 3
	QAbstractVideoBuffer__QPixmapHandle            QAbstractVideoBuffer__HandleType = 4
	QAbstractVideoBuffer__EGLImageHandle           QAbstractVideoBuffer__HandleType = 5
	QAbstractVideoBuffer__GLTextureRectangleHandle QAbstractVideoBuffer__HandleType = 6
	QAbstractVideoBuffer__UserHandle               QAbstractVideoBuffer__HandleType = 1000
)

type QAbstractVideoBuffer__MapMode int

const (
	QAbstractVideoBuffer__NotMapped QAbstractVideoBuffer__MapMode = 0
	QAbstractVideoBuffer__ReadOnly  QAbstractVideoBuffer__MapMode = 1
	QAbstractVideoBuffer__WriteOnly QAbstractVideoBuffer__MapMode = 2
	QAbstractVideoBuffer__ReadWrite QAbstractVideoBuffer__MapMode = 3
)

type QAbstractVideoBuffer struct {
	h *C.QAbstractVideoBuffer
}

func (this *QAbstractVideoBuffer) cPointer() *C.QAbstractVideoBuffer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractVideoBuffer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractVideoBuffer constructs the type using only CGO pointers.
func newQAbstractVideoBuffer(h *C.QAbstractVideoBuffer) *QAbstractVideoBuffer {
	if h == nil {
		return nil
	}

	return &QAbstractVideoBuffer{h: h}
}

// UnsafeNewQAbstractVideoBuffer constructs the type using only unsafe pointers.
func UnsafeNewQAbstractVideoBuffer(h unsafe.Pointer) *QAbstractVideoBuffer {
	return newQAbstractVideoBuffer((*C.QAbstractVideoBuffer)(h))
}

// NewQAbstractVideoBuffer constructs a new QAbstractVideoBuffer object.
func NewQAbstractVideoBuffer(typeVal QAbstractVideoBuffer__HandleType) *QAbstractVideoBuffer {

	return newQAbstractVideoBuffer(C.QAbstractVideoBuffer_new((C.int)(typeVal)))
}

func (this *QAbstractVideoBuffer) Release() {
	C.QAbstractVideoBuffer_Release(this.h)
}

func (this *QAbstractVideoBuffer) HandleType() QAbstractVideoBuffer__HandleType {
	return (QAbstractVideoBuffer__HandleType)(C.QAbstractVideoBuffer_HandleType(this.h))
}

func (this *QAbstractVideoBuffer) MapMode() QAbstractVideoBuffer__MapMode {
	return (QAbstractVideoBuffer__MapMode)(C.QAbstractVideoBuffer_MapMode(this.h))
}

func (this *QAbstractVideoBuffer) Map(mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte {
	return (*byte)(unsafe.Pointer(C.QAbstractVideoBuffer_Map(this.h, (C.int)(mode), (*C.int)(unsafe.Pointer(numBytes)), (*C.int)(unsafe.Pointer(bytesPerLine)))))
}

func (this *QAbstractVideoBuffer) Unmap() {
	C.QAbstractVideoBuffer_Unmap(this.h)
}

func (this *QAbstractVideoBuffer) Handle() *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QAbstractVideoBuffer_Handle(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractVideoBuffer) callVirtualBase_Release() {

	C.QAbstractVideoBuffer_virtualbase_Release(unsafe.Pointer(this.h))

}
func (this *QAbstractVideoBuffer) OnRelease(slot func(super func())) {
	ok := C.QAbstractVideoBuffer_override_virtual_Release(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoBuffer_Release
func miqt_exec_callback_QAbstractVideoBuffer_Release(self *C.QAbstractVideoBuffer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractVideoBuffer{h: self}).callVirtualBase_Release)

}
func (this *QAbstractVideoBuffer) OnMapMode(slot func() QAbstractVideoBuffer__MapMode) {
	ok := C.QAbstractVideoBuffer_override_virtual_MapMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoBuffer_MapMode
func miqt_exec_callback_QAbstractVideoBuffer_MapMode(self *C.QAbstractVideoBuffer, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QAbstractVideoBuffer__MapMode)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QAbstractVideoBuffer) OnMap(slot func(mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte) {
	ok := C.QAbstractVideoBuffer_override_virtual_Map(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoBuffer_Map
func miqt_exec_callback_QAbstractVideoBuffer_Map(self *C.QAbstractVideoBuffer, cb C.intptr_t, mode C.int, numBytes *C.int, bytesPerLine *C.int) *C.uchar {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractVideoBuffer__MapMode)(mode)

	slotval2 := (*int)(unsafe.Pointer(numBytes))

	slotval3 := (*int)(unsafe.Pointer(bytesPerLine))

	virtualReturn := gofunc(slotval1, slotval2, slotval3)

	return (*C.uchar)(unsafe.Pointer(virtualReturn))

}
func (this *QAbstractVideoBuffer) OnUnmap(slot func()) {
	ok := C.QAbstractVideoBuffer_override_virtual_Unmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoBuffer_Unmap
func miqt_exec_callback_QAbstractVideoBuffer_Unmap(self *C.QAbstractVideoBuffer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

func (this *QAbstractVideoBuffer) callVirtualBase_Handle() *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QAbstractVideoBuffer_virtualbase_Handle(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractVideoBuffer) OnHandle(slot func(super func() *qt.QVariant) *qt.QVariant) {
	ok := C.QAbstractVideoBuffer_override_virtual_Handle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoBuffer_Handle
func miqt_exec_callback_QAbstractVideoBuffer_Handle(self *C.QAbstractVideoBuffer, cb C.intptr_t) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractVideoBuffer{h: self}).callVirtualBase_Handle)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QAbstractVideoBuffer) Delete() {
	C.QAbstractVideoBuffer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractVideoBuffer) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractVideoBuffer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractPlanarVideoBuffer struct {
	h *C.QAbstractPlanarVideoBuffer
	*QAbstractVideoBuffer
}

func (this *QAbstractPlanarVideoBuffer) cPointer() *C.QAbstractPlanarVideoBuffer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractPlanarVideoBuffer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractPlanarVideoBuffer constructs the type using only CGO pointers.
func newQAbstractPlanarVideoBuffer(h *C.QAbstractPlanarVideoBuffer) *QAbstractPlanarVideoBuffer {
	if h == nil {
		return nil
	}
	var outptr_QAbstractVideoBuffer *C.QAbstractVideoBuffer = nil
	C.QAbstractPlanarVideoBuffer_virtbase(h, &outptr_QAbstractVideoBuffer)

	return &QAbstractPlanarVideoBuffer{h: h,
		QAbstractVideoBuffer: newQAbstractVideoBuffer(outptr_QAbstractVideoBuffer)}
}

// UnsafeNewQAbstractPlanarVideoBuffer constructs the type using only unsafe pointers.
func UnsafeNewQAbstractPlanarVideoBuffer(h unsafe.Pointer) *QAbstractPlanarVideoBuffer {
	return newQAbstractPlanarVideoBuffer((*C.QAbstractPlanarVideoBuffer)(h))
}

// NewQAbstractPlanarVideoBuffer constructs a new QAbstractPlanarVideoBuffer object.
func NewQAbstractPlanarVideoBuffer(typeVal QAbstractVideoBuffer__HandleType) *QAbstractPlanarVideoBuffer {

	return newQAbstractPlanarVideoBuffer(C.QAbstractPlanarVideoBuffer_new((C.int)(typeVal)))
}

func (this *QAbstractPlanarVideoBuffer) Map(mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte {
	return (*byte)(unsafe.Pointer(C.QAbstractPlanarVideoBuffer_Map(this.h, (C.int)(mode), (*C.int)(unsafe.Pointer(numBytes)), (*C.int)(unsafe.Pointer(bytesPerLine)))))
}

func (this *QAbstractPlanarVideoBuffer) callVirtualBase_Map(mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte {

	return (*byte)(unsafe.Pointer(C.QAbstractPlanarVideoBuffer_virtualbase_Map(unsafe.Pointer(this.h), (C.int)(mode), (*C.int)(unsafe.Pointer(numBytes)), (*C.int)(unsafe.Pointer(bytesPerLine)))))

}
func (this *QAbstractPlanarVideoBuffer) OnMap(slot func(super func(mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte, mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte) {
	ok := C.QAbstractPlanarVideoBuffer_override_virtual_Map(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPlanarVideoBuffer_Map
func miqt_exec_callback_QAbstractPlanarVideoBuffer_Map(self *C.QAbstractPlanarVideoBuffer, cb C.intptr_t, mode C.int, numBytes *C.int, bytesPerLine *C.int) *C.uchar {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte, mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractVideoBuffer__MapMode)(mode)

	slotval2 := (*int)(unsafe.Pointer(numBytes))

	slotval3 := (*int)(unsafe.Pointer(bytesPerLine))

	virtualReturn := gofunc((&QAbstractPlanarVideoBuffer{h: self}).callVirtualBase_Map, slotval1, slotval2, slotval3)

	return (*C.uchar)(unsafe.Pointer(virtualReturn))

}

func (this *QAbstractPlanarVideoBuffer) callVirtualBase_Release() {

	C.QAbstractPlanarVideoBuffer_virtualbase_Release(unsafe.Pointer(this.h))

}
func (this *QAbstractPlanarVideoBuffer) OnRelease(slot func(super func())) {
	ok := C.QAbstractPlanarVideoBuffer_override_virtual_Release(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPlanarVideoBuffer_Release
func miqt_exec_callback_QAbstractPlanarVideoBuffer_Release(self *C.QAbstractPlanarVideoBuffer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractPlanarVideoBuffer{h: self}).callVirtualBase_Release)

}
func (this *QAbstractPlanarVideoBuffer) OnMapMode(slot func() QAbstractVideoBuffer__MapMode) {
	ok := C.QAbstractPlanarVideoBuffer_override_virtual_MapMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPlanarVideoBuffer_MapMode
func miqt_exec_callback_QAbstractPlanarVideoBuffer_MapMode(self *C.QAbstractPlanarVideoBuffer, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QAbstractVideoBuffer__MapMode)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QAbstractPlanarVideoBuffer) OnUnmap(slot func()) {
	ok := C.QAbstractPlanarVideoBuffer_override_virtual_Unmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPlanarVideoBuffer_Unmap
func miqt_exec_callback_QAbstractPlanarVideoBuffer_Unmap(self *C.QAbstractPlanarVideoBuffer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

func (this *QAbstractPlanarVideoBuffer) callVirtualBase_Handle() *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QAbstractPlanarVideoBuffer_virtualbase_Handle(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractPlanarVideoBuffer) OnHandle(slot func(super func() *qt.QVariant) *qt.QVariant) {
	ok := C.QAbstractPlanarVideoBuffer_override_virtual_Handle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractPlanarVideoBuffer_Handle
func miqt_exec_callback_QAbstractPlanarVideoBuffer_Handle(self *C.QAbstractPlanarVideoBuffer, cb C.intptr_t) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractPlanarVideoBuffer{h: self}).callVirtualBase_Handle)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QAbstractPlanarVideoBuffer) Delete() {
	C.QAbstractPlanarVideoBuffer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractPlanarVideoBuffer) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractPlanarVideoBuffer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
