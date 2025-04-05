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
	C.QAbstractVideoBuffer_release(this.h)
}

func (this *QAbstractVideoBuffer) HandleType() QAbstractVideoBuffer__HandleType {
	return (QAbstractVideoBuffer__HandleType)(C.QAbstractVideoBuffer_handleType(this.h))
}

func (this *QAbstractVideoBuffer) MapMode() QAbstractVideoBuffer__MapMode {
	return (QAbstractVideoBuffer__MapMode)(C.QAbstractVideoBuffer_mapMode(this.h))
}

func (this *QAbstractVideoBuffer) Map(mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte {
	return (*byte)(unsafe.Pointer(C.QAbstractVideoBuffer_map(this.h, (C.int)(mode), (*C.int)(unsafe.Pointer(numBytes)), (*C.int)(unsafe.Pointer(bytesPerLine)))))
}

func (this *QAbstractVideoBuffer) Unmap() {
	C.QAbstractVideoBuffer_unmap(this.h)
}

func (this *QAbstractVideoBuffer) Handle() *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QAbstractVideoBuffer_handle(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractVideoBuffer) callVirtualBase_Release() {

	C.QAbstractVideoBuffer_virtualbase_release(unsafe.Pointer(this.h))

}
func (this *QAbstractVideoBuffer) OnRelease(slot func(super func())) {
	ok := C.QAbstractVideoBuffer_override_virtual_release(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoBuffer_release
func miqt_exec_callback_QAbstractVideoBuffer_release(self *C.QAbstractVideoBuffer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractVideoBuffer{h: self}).callVirtualBase_Release)

}
func (this *QAbstractVideoBuffer) OnMapMode(slot func() QAbstractVideoBuffer__MapMode) {
	ok := C.QAbstractVideoBuffer_override_virtual_mapMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoBuffer_mapMode
func miqt_exec_callback_QAbstractVideoBuffer_mapMode(self *C.QAbstractVideoBuffer, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QAbstractVideoBuffer__MapMode)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QAbstractVideoBuffer) OnMap(slot func(mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte) {
	ok := C.QAbstractVideoBuffer_override_virtual_map(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoBuffer_map
func miqt_exec_callback_QAbstractVideoBuffer_map(self *C.QAbstractVideoBuffer, cb C.intptr_t, mode C.int, numBytes *C.int, bytesPerLine *C.int) *C.uchar {
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
	ok := C.QAbstractVideoBuffer_override_virtual_unmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoBuffer_unmap
func miqt_exec_callback_QAbstractVideoBuffer_unmap(self *C.QAbstractVideoBuffer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

func (this *QAbstractVideoBuffer) callVirtualBase_Handle() *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QAbstractVideoBuffer_virtualbase_handle(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractVideoBuffer) OnHandle(slot func(super func() *qt.QVariant) *qt.QVariant) {
	ok := C.QAbstractVideoBuffer_override_virtual_handle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoBuffer_handle
func miqt_exec_callback_QAbstractVideoBuffer_handle(self *C.QAbstractVideoBuffer, cb C.intptr_t) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractVideoBuffer{h: self}).callVirtualBase_Handle)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QAbstractVideoBuffer) Delete() {
	C.QAbstractVideoBuffer_delete(this.h)
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

func (this *QAbstractPlanarVideoBuffer) Map(mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte {
	return (*byte)(unsafe.Pointer(C.QAbstractPlanarVideoBuffer_map(this.h, (C.int)(mode), (*C.int)(unsafe.Pointer(numBytes)), (*C.int)(unsafe.Pointer(bytesPerLine)))))
}

// Delete this object from C++ memory.
func (this *QAbstractPlanarVideoBuffer) Delete() {
	C.QAbstractPlanarVideoBuffer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractPlanarVideoBuffer) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractPlanarVideoBuffer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
