package multimedia

/*

#include "gen_qvideorenderercontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QVideoRendererControl struct {
	h  *C.QVideoRendererControl
	gc *[1]unsafe.Pointer
	*QMediaControl
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QVideoRendererControl) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QMediaControl.miqtSetGC(gc)
}

func (this *QVideoRendererControl) cPointer() *C.QVideoRendererControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoRendererControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoRendererControl constructs the type using only CGO pointers.
func newQVideoRendererControl(h *C.QVideoRendererControl) *QVideoRendererControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QVideoRendererControl_virtbase(h, &outptr_QMediaControl)

	return &QVideoRendererControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQVideoRendererControl constructs the type using only unsafe pointers.
func UnsafeNewQVideoRendererControl(h unsafe.Pointer) *QVideoRendererControl {
	return newQVideoRendererControl((*C.QVideoRendererControl)(h))
}

func (this *QVideoRendererControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoRendererControl_metaObject(this.h)))
}

func (this *QVideoRendererControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVideoRendererControl_metacast(this.h, param1_Cstring))
}

func QVideoRendererControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoRendererControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoRendererControl) Surface() *QAbstractVideoSurface {
	return newQAbstractVideoSurface(C.QVideoRendererControl_surface(this.h))
}

func (this *QVideoRendererControl) SetSurface(surface *QAbstractVideoSurface) {
	C.QVideoRendererControl_setSurface(this.h, surface.cPointer())
}

func QVideoRendererControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoRendererControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoRendererControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoRendererControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QVideoRendererControl) Delete() {
	C.QVideoRendererControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
// This is a QObject class, so this is unsupported: the bindings do not
// keep it alive during calls into C++, and its parent may delete it.
func (this *QVideoRendererControl) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QVideoRendererControl_delete((*C.QVideoRendererControl)(gc[0]))
	})
	this.miqtSetGC(gc)
}
