package multimedia

/*

#include "gen_qabstractvideosurface.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractVideoSurface__Error int

const (
	QAbstractVideoSurface__NoError                QAbstractVideoSurface__Error = 0
	QAbstractVideoSurface__UnsupportedFormatError QAbstractVideoSurface__Error = 1
	QAbstractVideoSurface__IncorrectFormatError   QAbstractVideoSurface__Error = 2
	QAbstractVideoSurface__StoppedError           QAbstractVideoSurface__Error = 3
	QAbstractVideoSurface__ResourceError          QAbstractVideoSurface__Error = 4
)

type QAbstractVideoSurface struct {
	h *C.QAbstractVideoSurface
	*qt.QObject
}

func (this *QAbstractVideoSurface) cPointer() *C.QAbstractVideoSurface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractVideoSurface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAbstractVideoSurface(h *C.QAbstractVideoSurface) *QAbstractVideoSurface {
	if h == nil {
		return nil
	}
	return &QAbstractVideoSurface{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAbstractVideoSurface(h unsafe.Pointer) *QAbstractVideoSurface {
	return newQAbstractVideoSurface((*C.QAbstractVideoSurface)(h))
}

func (this *QAbstractVideoSurface) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractVideoSurface_MetaObject(this.h)))
}

func (this *QAbstractVideoSurface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractVideoSurface_Metacast(this.h, param1_Cstring))
}

func QAbstractVideoSurface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractVideoSurface) SupportedPixelFormats() []QVideoFrame__PixelFormat {
	var _ma C.struct_miqt_array = C.QAbstractVideoSurface_SupportedPixelFormats(this.h)
	_ret := make([]QVideoFrame__PixelFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QVideoFrame__PixelFormat)(_outCast[i])
	}
	return _ret
}

func (this *QAbstractVideoSurface) IsFormatSupported(format *QVideoSurfaceFormat) bool {
	return (bool)(C.QAbstractVideoSurface_IsFormatSupported(this.h, format.cPointer()))
}

func (this *QAbstractVideoSurface) NearestFormat(format *QVideoSurfaceFormat) *QVideoSurfaceFormat {
	_ret := C.QAbstractVideoSurface_NearestFormat(this.h, format.cPointer())
	_goptr := newQVideoSurfaceFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractVideoSurface) SurfaceFormat() *QVideoSurfaceFormat {
	_ret := C.QAbstractVideoSurface_SurfaceFormat(this.h)
	_goptr := newQVideoSurfaceFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractVideoSurface) NativeResolution() *qt.QSize {
	_ret := C.QAbstractVideoSurface_NativeResolution(this.h)
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractVideoSurface) Start(format *QVideoSurfaceFormat) bool {
	return (bool)(C.QAbstractVideoSurface_Start(this.h, format.cPointer()))
}

func (this *QAbstractVideoSurface) Stop() {
	C.QAbstractVideoSurface_Stop(this.h)
}

func (this *QAbstractVideoSurface) IsActive() bool {
	return (bool)(C.QAbstractVideoSurface_IsActive(this.h))
}

func (this *QAbstractVideoSurface) Present(frame *QVideoFrame) bool {
	return (bool)(C.QAbstractVideoSurface_Present(this.h, frame.cPointer()))
}

func (this *QAbstractVideoSurface) Error() QAbstractVideoSurface__Error {
	return (QAbstractVideoSurface__Error)(C.QAbstractVideoSurface_Error(this.h))
}

func (this *QAbstractVideoSurface) ActiveChanged(active bool) {
	C.QAbstractVideoSurface_ActiveChanged(this.h, (C.bool)(active))
}
func (this *QAbstractVideoSurface) OnActiveChanged(slot func(active bool)) {
	C.QAbstractVideoSurface_connect_ActiveChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_ActiveChanged
func miqt_exec_callback_QAbstractVideoSurface_ActiveChanged(cb C.intptr_t, active C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(active bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(active)

	gofunc(slotval1)
}

func (this *QAbstractVideoSurface) SurfaceFormatChanged(format *QVideoSurfaceFormat) {
	C.QAbstractVideoSurface_SurfaceFormatChanged(this.h, format.cPointer())
}
func (this *QAbstractVideoSurface) OnSurfaceFormatChanged(slot func(format *QVideoSurfaceFormat)) {
	C.QAbstractVideoSurface_connect_SurfaceFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_SurfaceFormatChanged
func miqt_exec_callback_QAbstractVideoSurface_SurfaceFormatChanged(cb C.intptr_t, format *C.QVideoSurfaceFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format *QVideoSurfaceFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVideoSurfaceFormat(unsafe.Pointer(format))

	gofunc(slotval1)
}

func (this *QAbstractVideoSurface) SupportedFormatsChanged() {
	C.QAbstractVideoSurface_SupportedFormatsChanged(this.h)
}
func (this *QAbstractVideoSurface) OnSupportedFormatsChanged(slot func()) {
	C.QAbstractVideoSurface_connect_SupportedFormatsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_SupportedFormatsChanged
func miqt_exec_callback_QAbstractVideoSurface_SupportedFormatsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractVideoSurface) NativeResolutionChanged(resolution *qt.QSize) {
	C.QAbstractVideoSurface_NativeResolutionChanged(this.h, (*C.QSize)(resolution.UnsafePointer()))
}
func (this *QAbstractVideoSurface) OnNativeResolutionChanged(slot func(resolution *qt.QSize)) {
	C.QAbstractVideoSurface_connect_NativeResolutionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_NativeResolutionChanged
func miqt_exec_callback_QAbstractVideoSurface_NativeResolutionChanged(cb C.intptr_t, resolution *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(resolution *qt.QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSize(unsafe.Pointer(resolution))

	gofunc(slotval1)
}

func QAbstractVideoSurface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractVideoSurface) SupportedPixelFormats1(typeVal QAbstractVideoBuffer__HandleType) []QVideoFrame__PixelFormat {
	var _ma C.struct_miqt_array = C.QAbstractVideoSurface_SupportedPixelFormats1(this.h, (C.int)(typeVal))
	_ret := make([]QVideoFrame__PixelFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QVideoFrame__PixelFormat)(_outCast[i])
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractVideoSurface) Delete() {
	C.QAbstractVideoSurface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractVideoSurface) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractVideoSurface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
