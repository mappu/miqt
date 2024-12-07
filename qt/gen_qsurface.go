package qt

/*

#include "gen_qsurface.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSurface__SurfaceClass int

const (
	QSurface__Window    QSurface__SurfaceClass = 0
	QSurface__Offscreen QSurface__SurfaceClass = 1
)

type QSurface__SurfaceType int

const (
	QSurface__RasterSurface   QSurface__SurfaceType = 0
	QSurface__OpenGLSurface   QSurface__SurfaceType = 1
	QSurface__RasterGLSurface QSurface__SurfaceType = 2
	QSurface__OpenVGSurface   QSurface__SurfaceType = 3
	QSurface__VulkanSurface   QSurface__SurfaceType = 4
	QSurface__MetalSurface    QSurface__SurfaceType = 5
)

type QSurface struct {
	h          *C.QSurface
	isSubclass bool
}

func (this *QSurface) cPointer() *C.QSurface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSurface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSurface constructs the type using only CGO pointers.
func newQSurface(h *C.QSurface) *QSurface {
	if h == nil {
		return nil
	}
	return &QSurface{h: h}
}

// UnsafeNewQSurface constructs the type using only unsafe pointers.
func UnsafeNewQSurface(h unsafe.Pointer) *QSurface {
	if h == nil {
		return nil
	}

	return &QSurface{h: (*C.QSurface)(h)}
}

func (this *QSurface) SurfaceClass() QSurface__SurfaceClass {
	return (QSurface__SurfaceClass)(C.QSurface_SurfaceClass(this.h))
}

func (this *QSurface) Format() *QSurfaceFormat {
	_goptr := newQSurfaceFormat(C.QSurface_Format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSurface) SurfaceType() QSurface__SurfaceType {
	return (QSurface__SurfaceType)(C.QSurface_SurfaceType(this.h))
}

func (this *QSurface) SupportsOpenGL() bool {
	return (bool)(C.QSurface_SupportsOpenGL(this.h))
}

func (this *QSurface) Size() *QSize {
	_goptr := newQSize(C.QSurface_Size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSurface) Delete() {
	C.QSurface_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSurface) GoGC() {
	runtime.SetFinalizer(this, func(this *QSurface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
