package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qoffscreensurface.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QOffscreenSurface struct {
	h *C.QOffscreenSurface
	*QObject
	*QSurface
}

func (this *QOffscreenSurface) cPointer() *C.QOffscreenSurface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQOffscreenSurface(h *C.QOffscreenSurface) *QOffscreenSurface {
	if h == nil {
		return nil
	}
	return &QOffscreenSurface{h: h, QObject: newQObject_U(unsafe.Pointer(h)), QSurface: newQSurface_U(unsafe.Pointer(h))}
}

func newQOffscreenSurface_U(h unsafe.Pointer) *QOffscreenSurface {
	return newQOffscreenSurface((*C.QOffscreenSurface)(h))
}

// NewQOffscreenSurface constructs a new QOffscreenSurface object.
func NewQOffscreenSurface(screen *QScreen, parent *QObject) *QOffscreenSurface {
	ret := C.QOffscreenSurface_new(screen.cPointer(), parent.cPointer())
	return newQOffscreenSurface(ret)
}

// NewQOffscreenSurface2 constructs a new QOffscreenSurface object.
func NewQOffscreenSurface2() *QOffscreenSurface {
	ret := C.QOffscreenSurface_new2()
	return newQOffscreenSurface(ret)
}

// NewQOffscreenSurface3 constructs a new QOffscreenSurface object.
func NewQOffscreenSurface3(screen *QScreen) *QOffscreenSurface {
	ret := C.QOffscreenSurface_new3(screen.cPointer())
	return newQOffscreenSurface(ret)
}

func (this *QOffscreenSurface) MetaObject() *QMetaObject {
	ret := C.QOffscreenSurface_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QOffscreenSurface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QOffscreenSurface_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QOffscreenSurface_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QOffscreenSurface_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QOffscreenSurface) SurfaceType() uintptr {
	ret := C.QOffscreenSurface_SurfaceType(this.h)
	return (uintptr)(ret)
}

func (this *QOffscreenSurface) Create() {
	C.QOffscreenSurface_Create(this.h)
}

func (this *QOffscreenSurface) Destroy() {
	C.QOffscreenSurface_Destroy(this.h)
}

func (this *QOffscreenSurface) IsValid() bool {
	ret := C.QOffscreenSurface_IsValid(this.h)
	return (bool)(ret)
}

func (this *QOffscreenSurface) SetFormat(format *QSurfaceFormat) {
	C.QOffscreenSurface_SetFormat(this.h, format.cPointer())
}

func (this *QOffscreenSurface) Format() *QSurfaceFormat {
	ret := C.QOffscreenSurface_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSurfaceFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSurfaceFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QOffscreenSurface) RequestedFormat() *QSurfaceFormat {
	ret := C.QOffscreenSurface_RequestedFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSurfaceFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSurfaceFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QOffscreenSurface) Size() *QSize {
	ret := C.QOffscreenSurface_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QOffscreenSurface) Screen() *QScreen {
	ret := C.QOffscreenSurface_Screen(this.h)
	return newQScreen_U(unsafe.Pointer(ret))
}

func (this *QOffscreenSurface) SetScreen(screen *QScreen) {
	C.QOffscreenSurface_SetScreen(this.h, screen.cPointer())
}

func (this *QOffscreenSurface) ScreenChanged(screen *QScreen) {
	C.QOffscreenSurface_ScreenChanged(this.h, screen.cPointer())
}

func (this *QOffscreenSurface) OnScreenChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QOffscreenSurface_connect_ScreenChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QOffscreenSurface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QOffscreenSurface_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QOffscreenSurface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QOffscreenSurface_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QOffscreenSurface_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QOffscreenSurface_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QOffscreenSurface_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QOffscreenSurface_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QOffscreenSurface) Delete() {
	C.QOffscreenSurface_Delete(this.h)
}
