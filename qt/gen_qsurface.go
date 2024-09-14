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
	QSurface__SurfaceClass__Window    QSurface__SurfaceClass = 0
	QSurface__SurfaceClass__Offscreen QSurface__SurfaceClass = 1
)

type QSurface__SurfaceType int

const (
	QSurface__SurfaceType__RasterSurface   QSurface__SurfaceType = 0
	QSurface__SurfaceType__OpenGLSurface   QSurface__SurfaceType = 1
	QSurface__SurfaceType__RasterGLSurface QSurface__SurfaceType = 2
	QSurface__SurfaceType__OpenVGSurface   QSurface__SurfaceType = 3
	QSurface__SurfaceType__VulkanSurface   QSurface__SurfaceType = 4
	QSurface__SurfaceType__MetalSurface    QSurface__SurfaceType = 5
)

type QSurface struct {
	h *C.QSurface
}

func (this *QSurface) cPointer() *C.QSurface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSurface(h *C.QSurface) *QSurface {
	if h == nil {
		return nil
	}
	return &QSurface{h: h}
}

func newQSurface_U(h unsafe.Pointer) *QSurface {
	return newQSurface((*C.QSurface)(h))
}

func (this *QSurface) SurfaceClass() QSurface__SurfaceClass {
	_ret := C.QSurface_SurfaceClass(this.h)
	return (QSurface__SurfaceClass)(_ret)
}

func (this *QSurface) Format() *QSurfaceFormat {
	_ret := C.QSurface_Format(this.h)
	_goptr := newQSurfaceFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSurface) SurfaceType() QSurface__SurfaceType {
	_ret := C.QSurface_SurfaceType(this.h)
	return (QSurface__SurfaceType)(_ret)
}

func (this *QSurface) SupportsOpenGL() bool {
	_ret := C.QSurface_SupportsOpenGL(this.h)
	return (bool)(_ret)
}

func (this *QSurface) Size() *QSize {
	_ret := C.QSurface_Size(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSurface) Delete() {
	C.QSurface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSurface) GoGC() {
	runtime.SetFinalizer(this, func(this *QSurface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
