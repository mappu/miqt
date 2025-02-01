package multimedia

/*

#include "gen_qcamerazoomcontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraZoomControl struct {
	h *C.QCameraZoomControl
	*QMediaControl
}

func (this *QCameraZoomControl) cPointer() *C.QCameraZoomControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraZoomControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraZoomControl constructs the type using only CGO pointers.
func newQCameraZoomControl(h *C.QCameraZoomControl) *QCameraZoomControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraZoomControl_virtbase(h, &outptr_QMediaControl)

	return &QCameraZoomControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraZoomControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraZoomControl(h unsafe.Pointer) *QCameraZoomControl {
	return newQCameraZoomControl((*C.QCameraZoomControl)(h))
}

func (this *QCameraZoomControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraZoomControl_metaObject(this.h)))
}

func (this *QCameraZoomControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraZoomControl_metacast(this.h, param1_Cstring))
}

func QCameraZoomControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraZoomControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraZoomControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraZoomControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraZoomControl) MaximumOpticalZoom() float64 {
	return (float64)(C.QCameraZoomControl_maximumOpticalZoom(this.h))
}

func (this *QCameraZoomControl) MaximumDigitalZoom() float64 {
	return (float64)(C.QCameraZoomControl_maximumDigitalZoom(this.h))
}

func (this *QCameraZoomControl) RequestedOpticalZoom() float64 {
	return (float64)(C.QCameraZoomControl_requestedOpticalZoom(this.h))
}

func (this *QCameraZoomControl) RequestedDigitalZoom() float64 {
	return (float64)(C.QCameraZoomControl_requestedDigitalZoom(this.h))
}

func (this *QCameraZoomControl) CurrentOpticalZoom() float64 {
	return (float64)(C.QCameraZoomControl_currentOpticalZoom(this.h))
}

func (this *QCameraZoomControl) CurrentDigitalZoom() float64 {
	return (float64)(C.QCameraZoomControl_currentDigitalZoom(this.h))
}

func (this *QCameraZoomControl) ZoomTo(optical float64, digital float64) {
	C.QCameraZoomControl_zoomTo(this.h, (C.double)(optical), (C.double)(digital))
}

func (this *QCameraZoomControl) MaximumOpticalZoomChanged(param1 float64) {
	C.QCameraZoomControl_maximumOpticalZoomChanged(this.h, (C.double)(param1))
}
func (this *QCameraZoomControl) OnMaximumOpticalZoomChanged(slot func(param1 float64)) {
	C.QCameraZoomControl_connect_maximumOpticalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraZoomControl_maximumOpticalZoomChanged
func miqt_exec_callback_QCameraZoomControl_maximumOpticalZoomChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func (this *QCameraZoomControl) MaximumDigitalZoomChanged(param1 float64) {
	C.QCameraZoomControl_maximumDigitalZoomChanged(this.h, (C.double)(param1))
}
func (this *QCameraZoomControl) OnMaximumDigitalZoomChanged(slot func(param1 float64)) {
	C.QCameraZoomControl_connect_maximumDigitalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraZoomControl_maximumDigitalZoomChanged
func miqt_exec_callback_QCameraZoomControl_maximumDigitalZoomChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func (this *QCameraZoomControl) RequestedOpticalZoomChanged(opticalZoom float64) {
	C.QCameraZoomControl_requestedOpticalZoomChanged(this.h, (C.double)(opticalZoom))
}
func (this *QCameraZoomControl) OnRequestedOpticalZoomChanged(slot func(opticalZoom float64)) {
	C.QCameraZoomControl_connect_requestedOpticalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraZoomControl_requestedOpticalZoomChanged
func miqt_exec_callback_QCameraZoomControl_requestedOpticalZoomChanged(cb C.intptr_t, opticalZoom C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(opticalZoom float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(opticalZoom)

	gofunc(slotval1)
}

func (this *QCameraZoomControl) RequestedDigitalZoomChanged(digitalZoom float64) {
	C.QCameraZoomControl_requestedDigitalZoomChanged(this.h, (C.double)(digitalZoom))
}
func (this *QCameraZoomControl) OnRequestedDigitalZoomChanged(slot func(digitalZoom float64)) {
	C.QCameraZoomControl_connect_requestedDigitalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraZoomControl_requestedDigitalZoomChanged
func miqt_exec_callback_QCameraZoomControl_requestedDigitalZoomChanged(cb C.intptr_t, digitalZoom C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(digitalZoom float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(digitalZoom)

	gofunc(slotval1)
}

func (this *QCameraZoomControl) CurrentOpticalZoomChanged(opticalZoom float64) {
	C.QCameraZoomControl_currentOpticalZoomChanged(this.h, (C.double)(opticalZoom))
}
func (this *QCameraZoomControl) OnCurrentOpticalZoomChanged(slot func(opticalZoom float64)) {
	C.QCameraZoomControl_connect_currentOpticalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraZoomControl_currentOpticalZoomChanged
func miqt_exec_callback_QCameraZoomControl_currentOpticalZoomChanged(cb C.intptr_t, opticalZoom C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(opticalZoom float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(opticalZoom)

	gofunc(slotval1)
}

func (this *QCameraZoomControl) CurrentDigitalZoomChanged(digitalZoom float64) {
	C.QCameraZoomControl_currentDigitalZoomChanged(this.h, (C.double)(digitalZoom))
}
func (this *QCameraZoomControl) OnCurrentDigitalZoomChanged(slot func(digitalZoom float64)) {
	C.QCameraZoomControl_connect_currentDigitalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraZoomControl_currentDigitalZoomChanged
func miqt_exec_callback_QCameraZoomControl_currentDigitalZoomChanged(cb C.intptr_t, digitalZoom C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(digitalZoom float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(digitalZoom)

	gofunc(slotval1)
}

func QCameraZoomControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraZoomControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraZoomControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraZoomControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraZoomControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraZoomControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraZoomControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraZoomControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraZoomControl) Delete() {
	C.QCameraZoomControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraZoomControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraZoomControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
