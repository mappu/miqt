package qt

/*

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
	return newQMetaObject_U(unsafe.Pointer(C.QOffscreenSurface_MetaObject(this.h)))
}

func (this *QOffscreenSurface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QOffscreenSurface_Metacast(this.h, param1_Cstring)
}

func QOffscreenSurface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QOffscreenSurface_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QOffscreenSurface_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QOffscreenSurface_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QOffscreenSurface) SurfaceType() QSurface__SurfaceType {
	return (QSurface__SurfaceType)(C.QOffscreenSurface_SurfaceType(this.h))
}

func (this *QOffscreenSurface) Create() {
	C.QOffscreenSurface_Create(this.h)
}

func (this *QOffscreenSurface) Destroy() {
	C.QOffscreenSurface_Destroy(this.h)
}

func (this *QOffscreenSurface) IsValid() bool {
	return (bool)(C.QOffscreenSurface_IsValid(this.h))
}

func (this *QOffscreenSurface) SetFormat(format *QSurfaceFormat) {
	C.QOffscreenSurface_SetFormat(this.h, format.cPointer())
}

func (this *QOffscreenSurface) Format() *QSurfaceFormat {
	_ret := C.QOffscreenSurface_Format(this.h)
	_goptr := newQSurfaceFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOffscreenSurface) RequestedFormat() *QSurfaceFormat {
	_ret := C.QOffscreenSurface_RequestedFormat(this.h)
	_goptr := newQSurfaceFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOffscreenSurface) Size() *QSize {
	_ret := C.QOffscreenSurface_Size(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOffscreenSurface) Screen() *QScreen {
	return newQScreen_U(unsafe.Pointer(C.QOffscreenSurface_Screen(this.h)))
}

func (this *QOffscreenSurface) SetScreen(screen *QScreen) {
	C.QOffscreenSurface_SetScreen(this.h, screen.cPointer())
}

func (this *QOffscreenSurface) NativeHandle() unsafe.Pointer {
	return C.QOffscreenSurface_NativeHandle(this.h)
}

func (this *QOffscreenSurface) SetNativeHandle(handle unsafe.Pointer) {
	C.QOffscreenSurface_SetNativeHandle(this.h, handle)
}

func (this *QOffscreenSurface) ScreenChanged(screen *QScreen) {
	C.QOffscreenSurface_ScreenChanged(this.h, screen.cPointer())
}
func (this *QOffscreenSurface) OnScreenChanged(slot func(screen *QScreen)) {
	C.QOffscreenSurface_connect_ScreenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QOffscreenSurface_ScreenChanged
func miqt_exec_callback_QOffscreenSurface_ScreenChanged(cb C.intptr_t, screen *C.QScreen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScreen_U(unsafe.Pointer(screen))

	gofunc(slotval1)
}

func QOffscreenSurface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QOffscreenSurface_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QOffscreenSurface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QOffscreenSurface_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QOffscreenSurface_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QOffscreenSurface_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QOffscreenSurface_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QOffscreenSurface_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QOffscreenSurface) Delete() {
	C.QOffscreenSurface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QOffscreenSurface) GoGC() {
	runtime.SetFinalizer(this, func(this *QOffscreenSurface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
