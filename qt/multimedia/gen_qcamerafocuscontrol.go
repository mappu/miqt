package multimedia

/*

#include "gen_qcamerafocuscontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraFocusControl struct {
	h  *C.QCameraFocusControl
	gc *[1]unsafe.Pointer
	*QMediaControl
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QCameraFocusControl) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QMediaControl.miqtSetGC(gc)
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
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraFocusControl_metaObject(this.h)))
}

func (this *QCameraFocusControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraFocusControl_metacast(this.h, param1_Cstring))
}

func QCameraFocusControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocusControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocusControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocusControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraFocusControl) FocusMode() QCameraFocus__FocusMode {
	return (QCameraFocus__FocusMode)(C.QCameraFocusControl_focusMode(this.h))
}

func (this *QCameraFocusControl) SetFocusMode(mode QCameraFocus__FocusMode) {
	C.QCameraFocusControl_setFocusMode(this.h, (C.int)(mode))
}

func (this *QCameraFocusControl) IsFocusModeSupported(mode QCameraFocus__FocusMode) bool {
	return (bool)(C.QCameraFocusControl_isFocusModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraFocusControl) FocusPointMode() QCameraFocus__FocusPointMode {
	return (QCameraFocus__FocusPointMode)(C.QCameraFocusControl_focusPointMode(this.h))
}

func (this *QCameraFocusControl) SetFocusPointMode(mode QCameraFocus__FocusPointMode) {
	C.QCameraFocusControl_setFocusPointMode(this.h, (C.int)(mode))
}

func (this *QCameraFocusControl) IsFocusPointModeSupported(mode QCameraFocus__FocusPointMode) bool {
	return (bool)(C.QCameraFocusControl_isFocusPointModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraFocusControl) CustomFocusPoint() qt.QPointF {
	return libmiqt.ValueCast[qt.QPointF](C.QCameraFocusControl_customFocusPoint(this.h))
}

func (this *QCameraFocusControl) SetCustomFocusPoint(point qt.QPointF) {
	C.QCameraFocusControl_setCustomFocusPoint(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](point))
}

func (this *QCameraFocusControl) FocusZones() []QCameraFocusZone {
	var _ma C.struct_miqt_array = C.QCameraFocusControl_focusZones(this.h)
	_ret := make([]QCameraFocusZone, int(_ma.len))
	_outCast := unsafe.Slice((**C.QCameraFocusZone)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraFocusZone(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCameraFocusControl) FocusModeChanged(mode QCameraFocus__FocusMode) {
	C.QCameraFocusControl_focusModeChanged(this.h, (C.int)(mode))
}
func (this *QCameraFocusControl) OnFocusModeChanged(slot func(mode QCameraFocus__FocusMode)) {
	C.QCameraFocusControl_connect_focusModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocusControl_focusModeChanged
func miqt_exec_callback_QCameraFocusControl_focusModeChanged(cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode QCameraFocus__FocusMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCameraFocus__FocusMode)(mode)

	gofunc(slotval1)
}

func (this *QCameraFocusControl) FocusPointModeChanged(mode QCameraFocus__FocusPointMode) {
	C.QCameraFocusControl_focusPointModeChanged(this.h, (C.int)(mode))
}
func (this *QCameraFocusControl) OnFocusPointModeChanged(slot func(mode QCameraFocus__FocusPointMode)) {
	C.QCameraFocusControl_connect_focusPointModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocusControl_focusPointModeChanged
func miqt_exec_callback_QCameraFocusControl_focusPointModeChanged(cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode QCameraFocus__FocusPointMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCameraFocus__FocusPointMode)(mode)

	gofunc(slotval1)
}

func (this *QCameraFocusControl) CustomFocusPointChanged(point qt.QPointF) {
	C.QCameraFocusControl_customFocusPointChanged(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](point))
}
func (this *QCameraFocusControl) OnCustomFocusPointChanged(slot func(point qt.QPointF)) {
	C.QCameraFocusControl_connect_customFocusPointChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocusControl_customFocusPointChanged
func miqt_exec_callback_QCameraFocusControl_customFocusPointChanged(cb C.intptr_t, point C.struct_miqt_qpointf) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point qt.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QPointF](point)

	gofunc(slotval1)
}

func (this *QCameraFocusControl) FocusZonesChanged() {
	C.QCameraFocusControl_focusZonesChanged(this.h)
}
func (this *QCameraFocusControl) OnFocusZonesChanged(slot func()) {
	C.QCameraFocusControl_connect_focusZonesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocusControl_focusZonesChanged
func miqt_exec_callback_QCameraFocusControl_focusZonesChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QCameraFocusControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocusControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocusControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocusControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocusControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocusControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocusControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraFocusControl) Delete() {
	C.QCameraFocusControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
// This is a QObject class, so this is unsupported: the bindings do not
// keep it alive during calls into C++, and its parent may delete it.
func (this *QCameraFocusControl) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QCameraFocusControl_delete((*C.QCameraFocusControl)(gc[0]))
	})
	this.miqtSetGC(gc)
}
