package multimedia

/*

#include "gen_qabstractvideofilter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVideoFilterRunnable__RunFlag int

const (
	QVideoFilterRunnable__LastInChain QVideoFilterRunnable__RunFlag = 1
)

type QVideoFilterRunnable struct {
	h          *C.QVideoFilterRunnable
	isSubclass bool
}

func (this *QVideoFilterRunnable) cPointer() *C.QVideoFilterRunnable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoFilterRunnable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoFilterRunnable constructs the type using only CGO pointers.
func newQVideoFilterRunnable(h *C.QVideoFilterRunnable) *QVideoFilterRunnable {
	if h == nil {
		return nil
	}
	return &QVideoFilterRunnable{h: h}
}

// UnsafeNewQVideoFilterRunnable constructs the type using only unsafe pointers.
func UnsafeNewQVideoFilterRunnable(h unsafe.Pointer) *QVideoFilterRunnable {
	if h == nil {
		return nil
	}

	return &QVideoFilterRunnable{h: (*C.QVideoFilterRunnable)(h)}
}

func (this *QVideoFilterRunnable) Run(input *QVideoFrame, surfaceFormat *QVideoSurfaceFormat, flags QVideoFilterRunnable__RunFlag) *QVideoFrame {
	_ret := C.QVideoFilterRunnable_Run(this.h, input.cPointer(), surfaceFormat.cPointer(), (C.int)(flags))
	_goptr := newQVideoFrame(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFilterRunnable) OperatorAssign(param1 *QVideoFilterRunnable) {
	C.QVideoFilterRunnable_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QVideoFilterRunnable) Delete() {
	C.QVideoFilterRunnable_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoFilterRunnable) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoFilterRunnable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractVideoFilter struct {
	h          *C.QAbstractVideoFilter
	isSubclass bool
	*qt.QObject
}

func (this *QAbstractVideoFilter) cPointer() *C.QAbstractVideoFilter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractVideoFilter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractVideoFilter constructs the type using only CGO pointers.
func newQAbstractVideoFilter(h *C.QAbstractVideoFilter, h_QObject *C.QObject) *QAbstractVideoFilter {
	if h == nil {
		return nil
	}
	return &QAbstractVideoFilter{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQAbstractVideoFilter constructs the type using only unsafe pointers.
func UnsafeNewQAbstractVideoFilter(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAbstractVideoFilter {
	if h == nil {
		return nil
	}

	return &QAbstractVideoFilter{h: (*C.QAbstractVideoFilter)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

func (this *QAbstractVideoFilter) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractVideoFilter_MetaObject(this.h)))
}

func (this *QAbstractVideoFilter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractVideoFilter_Metacast(this.h, param1_Cstring))
}

func QAbstractVideoFilter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoFilter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractVideoFilter) IsActive() bool {
	return (bool)(C.QAbstractVideoFilter_IsActive(this.h))
}

func (this *QAbstractVideoFilter) SetActive(v bool) {
	C.QAbstractVideoFilter_SetActive(this.h, (C.bool)(v))
}

func (this *QAbstractVideoFilter) CreateFilterRunnable() *QVideoFilterRunnable {
	return UnsafeNewQVideoFilterRunnable(unsafe.Pointer(C.QAbstractVideoFilter_CreateFilterRunnable(this.h)))
}

func (this *QAbstractVideoFilter) ActiveChanged() {
	C.QAbstractVideoFilter_ActiveChanged(this.h)
}
func (this *QAbstractVideoFilter) OnActiveChanged(slot func()) {
	C.QAbstractVideoFilter_connect_ActiveChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoFilter_ActiveChanged
func miqt_exec_callback_QAbstractVideoFilter_ActiveChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAbstractVideoFilter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoFilter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoFilter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoFilter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractVideoFilter) Delete() {
	C.QAbstractVideoFilter_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractVideoFilter) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractVideoFilter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
