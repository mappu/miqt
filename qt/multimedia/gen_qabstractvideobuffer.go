package multimedia

/*

#include "gen_qabstractvideobuffer.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
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

func newQAbstractVideoBuffer(h *C.QAbstractVideoBuffer) *QAbstractVideoBuffer {
	if h == nil {
		return nil
	}
	return &QAbstractVideoBuffer{h: h}
}

func UnsafeNewQAbstractVideoBuffer(h unsafe.Pointer) *QAbstractVideoBuffer {
	return newQAbstractVideoBuffer((*C.QAbstractVideoBuffer)(h))
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
	return (*byte)(C.QAbstractVideoBuffer_Map(this.h, (C.int)(mode), (*C.int)(unsafe.Pointer(numBytes)), (*C.int)(unsafe.Pointer(bytesPerLine))))
}

func (this *QAbstractVideoBuffer) Unmap() {
	C.QAbstractVideoBuffer_Unmap(this.h)
}

func (this *QAbstractVideoBuffer) Handle() *qt.QVariant {
	_ret := C.QAbstractVideoBuffer_Handle(this.h)
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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

func newQAbstractPlanarVideoBuffer(h *C.QAbstractPlanarVideoBuffer) *QAbstractPlanarVideoBuffer {
	if h == nil {
		return nil
	}
	return &QAbstractPlanarVideoBuffer{h: h, QAbstractVideoBuffer: UnsafeNewQAbstractVideoBuffer(unsafe.Pointer(h))}
}

func UnsafeNewQAbstractPlanarVideoBuffer(h unsafe.Pointer) *QAbstractPlanarVideoBuffer {
	return newQAbstractPlanarVideoBuffer((*C.QAbstractPlanarVideoBuffer)(h))
}

func (this *QAbstractPlanarVideoBuffer) Map(mode QAbstractVideoBuffer__MapMode, numBytes *int, bytesPerLine *int) *byte {
	return (*byte)(C.QAbstractPlanarVideoBuffer_Map(this.h, (C.int)(mode), (*C.int)(unsafe.Pointer(numBytes)), (*C.int)(unsafe.Pointer(bytesPerLine))))
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
