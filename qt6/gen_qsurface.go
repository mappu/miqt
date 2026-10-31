package qt6

/*

#include "gen_qsurface.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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
	QSurface__Direct3DSurface QSurface__SurfaceType = 6
)

type QSurface struct {
	h  *C.QSurface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSurface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQSurface((*C.QSurface)(h))
}

func (this *QSurface) SurfaceClass() QSurface__SurfaceClass {
	defer runtime.KeepAlive(this)
	return (QSurface__SurfaceClass)(C.QSurface_surfaceClass(this.h))
}

func (this *QSurface) Format() *QSurfaceFormat {
	defer runtime.KeepAlive(this)
	_goptr := newQSurfaceFormat(C.QSurface_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSurface) SurfaceType() QSurface__SurfaceType {
	defer runtime.KeepAlive(this)
	return (QSurface__SurfaceType)(C.QSurface_surfaceType(this.h))
}

func (this *QSurface) SupportsOpenGL() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSurface_supportsOpenGL(this.h))
}

func (this *QSurface) Size() QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QSize](C.QSurface_size(this.h))
}

func (this *QSurface) OperatorAssign(param1 *QSurface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QSurface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QSurface) Delete() {
	C.QSurface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSurface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSurface_delete((*C.QSurface)(gc[0]))
	})
	this.miqtSetGC(gc)
}
