package multimedia

/*

#include "gen_qcamerafocuscontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraFocusControl struct {
	h          *C.QCameraFocusControl
	isSubclass bool
	*QMediaControl
}

func (this *QCameraFocusControl) cPointer() *C.QCameraFocusControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraFocusControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraFocusControl constructs the type using only CGO pointers.
func newQCameraFocusControl(h *C.QCameraFocusControl) *QCameraFocusControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraFocusControl_virtbase(h, &outptr_QMediaControl)

	return &QCameraFocusControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraFocusControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraFocusControl(h unsafe.Pointer) *QCameraFocusControl {
	return newQCameraFocusControl((*C.QCameraFocusControl)(h))
}

func (this *QCameraFocusControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraFocusControl_MetaObject(this.h)))
}

func (this *QCameraFocusControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraFocusControl_Metacast(this.h, param1_Cstring))
}

func QCameraFocusControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocusControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocusControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocusControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraFocusControl) FocusMode() QCameraFocus__FocusMode {
	return (QCameraFocus__FocusMode)(C.QCameraFocusControl_FocusMode(this.h))
}

func (this *QCameraFocusControl) SetFocusMode(mode QCameraFocus__FocusMode) {
	C.QCameraFocusControl_SetFocusMode(this.h, (C.int)(mode))
}

func (this *QCameraFocusControl) IsFocusModeSupported(mode QCameraFocus__FocusMode) bool {
	return (bool)(C.QCameraFocusControl_IsFocusModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraFocusControl) FocusPointMode() QCameraFocus__FocusPointMode {
	return (QCameraFocus__FocusPointMode)(C.QCameraFocusControl_FocusPointMode(this.h))
}

func (this *QCameraFocusControl) SetFocusPointMode(mode QCameraFocus__FocusPointMode) {
	C.QCameraFocusControl_SetFocusPointMode(this.h, (C.int)(mode))
}

func (this *QCameraFocusControl) IsFocusPointModeSupported(mode QCameraFocus__FocusPointMode) bool {
	return (bool)(C.QCameraFocusControl_IsFocusPointModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraFocusControl) CustomFocusPoint() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QCameraFocusControl_CustomFocusPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraFocusControl) SetCustomFocusPoint(point *qt.QPointF) {
	C.QCameraFocusControl_SetCustomFocusPoint(this.h, (*C.QPointF)(point.UnsafePointer()))
}

func (this *QCameraFocusControl) FocusZones() []QCameraFocusZone {
	var _ma C.struct_miqt_array = C.QCameraFocusControl_FocusZones(this.h)
	_ret := make([]QCameraFocusZone, int(_ma.len))
	_outCast := (*[0xffff]*C.QCameraFocusZone)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraFocusZone(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCameraFocusControl) FocusModeChanged(mode QCameraFocus__FocusMode) {
	C.QCameraFocusControl_FocusModeChanged(this.h, (C.int)(mode))
}
func (this *QCameraFocusControl) OnFocusModeChanged(slot func(mode QCameraFocus__FocusMode)) {
	C.QCameraFocusControl_connect_FocusModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocusControl_FocusModeChanged
func miqt_exec_callback_QCameraFocusControl_FocusModeChanged(cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode QCameraFocus__FocusMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCameraFocus__FocusMode)(mode)

	gofunc(slotval1)
}

func (this *QCameraFocusControl) FocusPointModeChanged(mode QCameraFocus__FocusPointMode) {
	C.QCameraFocusControl_FocusPointModeChanged(this.h, (C.int)(mode))
}
func (this *QCameraFocusControl) OnFocusPointModeChanged(slot func(mode QCameraFocus__FocusPointMode)) {
	C.QCameraFocusControl_connect_FocusPointModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocusControl_FocusPointModeChanged
func miqt_exec_callback_QCameraFocusControl_FocusPointModeChanged(cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode QCameraFocus__FocusPointMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCameraFocus__FocusPointMode)(mode)

	gofunc(slotval1)
}

func (this *QCameraFocusControl) CustomFocusPointChanged(point *qt.QPointF) {
	C.QCameraFocusControl_CustomFocusPointChanged(this.h, (*C.QPointF)(point.UnsafePointer()))
}
func (this *QCameraFocusControl) OnCustomFocusPointChanged(slot func(point *qt.QPointF)) {
	C.QCameraFocusControl_connect_CustomFocusPointChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocusControl_CustomFocusPointChanged
func miqt_exec_callback_QCameraFocusControl_CustomFocusPointChanged(cb C.intptr_t, point *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *qt.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(point))

	gofunc(slotval1)
}

func (this *QCameraFocusControl) FocusZonesChanged() {
	C.QCameraFocusControl_FocusZonesChanged(this.h)
}
func (this *QCameraFocusControl) OnFocusZonesChanged(slot func()) {
	C.QCameraFocusControl_connect_FocusZonesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocusControl_FocusZonesChanged
func miqt_exec_callback_QCameraFocusControl_FocusZonesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QCameraFocusControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocusControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocusControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocusControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocusControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocusControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocusControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocusControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraFocusControl) Delete() {
	C.QCameraFocusControl_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraFocusControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraFocusControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
