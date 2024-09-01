package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsurface.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

func (this *QSurface) SurfaceClass() uintptr {
	ret := C.QSurface_SurfaceClass(this.h)
	return (uintptr)(ret)
}

func (this *QSurface) Format() *QSurfaceFormat {
	ret := C.QSurface_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSurfaceFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSurfaceFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSurface) SurfaceType() uintptr {
	ret := C.QSurface_SurfaceType(this.h)
	return (uintptr)(ret)
}

func (this *QSurface) SupportsOpenGL() bool {
	ret := C.QSurface_SupportsOpenGL(this.h)
	return (bool)(ret)
}

func (this *QSurface) Size() *QSize {
	ret := C.QSurface_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSurface) Delete() {
	C.QSurface_Delete(this.h)
}
