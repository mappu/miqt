package multimedia

/*

#include "gen_qcameracontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraControl__PropertyChangeType int

const (
	QCameraControl__CaptureMode           QCameraControl__PropertyChangeType = 1
	QCameraControl__ImageEncodingSettings QCameraControl__PropertyChangeType = 2
	QCameraControl__VideoEncodingSettings QCameraControl__PropertyChangeType = 3
	QCameraControl__Viewfinder            QCameraControl__PropertyChangeType = 4
	QCameraControl__ViewfinderSettings    QCameraControl__PropertyChangeType = 5
)

type QCameraControl struct {
	h *C.QCameraControl
	*QMediaControl
}

func (this *QCameraControl) cPointer() *C.QCameraControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraControl constructs the type using only CGO pointers.
func newQCameraControl(h *C.QCameraControl) *QCameraControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraControl_virtbase(h, &outptr_QMediaControl)

	return &QCameraControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraControl(h unsafe.Pointer) *QCameraControl {
	return newQCameraControl((*C.QCameraControl)(h))
}

func (this *QCameraControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraControl_metaObject(this.h)))
}

func (this *QCameraControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraControl_metacast(this.h, param1_Cstring))
}

func QCameraControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraControl) State() QCamera__State {
	return (QCamera__State)(C.QCameraControl_state(this.h))
}

func (this *QCameraControl) SetState(state QCamera__State) {
	C.QCameraControl_setState(this.h, (C.int)(state))
}

func (this *QCameraControl) Status() QCamera__Status {
	return (QCamera__Status)(C.QCameraControl_status(this.h))
}

func (this *QCameraControl) CaptureMode() QCamera__CaptureMode {
	return (QCamera__CaptureMode)(C.QCameraControl_captureMode(this.h))
}

func (this *QCameraControl) SetCaptureMode(captureMode QCamera__CaptureMode) {
	C.QCameraControl_setCaptureMode(this.h, (C.int)(captureMode))
}

func (this *QCameraControl) IsCaptureModeSupported(mode QCamera__CaptureMode) bool {
	return (bool)(C.QCameraControl_isCaptureModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraControl) CanChangeProperty(changeType QCameraControl__PropertyChangeType, status QCamera__Status) bool {
	return (bool)(C.QCameraControl_canChangeProperty(this.h, (C.int)(changeType), (C.int)(status)))
}

func (this *QCameraControl) StateChanged(param1 QCamera__State) {
	C.QCameraControl_stateChanged(this.h, (C.int)(param1))
}
func (this *QCameraControl) OnStateChanged(slot func(param1 QCamera__State)) {
	C.QCameraControl_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraControl_stateChanged
func miqt_exec_callback_QCameraControl_stateChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QCamera__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__State)(param1)

	gofunc(slotval1)
}

func (this *QCameraControl) StatusChanged(param1 QCamera__Status) {
	C.QCameraControl_statusChanged(this.h, (C.int)(param1))
}
func (this *QCameraControl) OnStatusChanged(slot func(param1 QCamera__Status)) {
	C.QCameraControl_connect_statusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraControl_statusChanged
func miqt_exec_callback_QCameraControl_statusChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QCamera__Status))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__Status)(param1)

	gofunc(slotval1)
}

func (this *QCameraControl) Error(error int, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QCameraControl_error(this.h, (C.int)(error), errorString_ms)
}
func (this *QCameraControl) OnError(slot func(error int, errorString string)) {
	C.QCameraControl_connect_error(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraControl_error
func miqt_exec_callback_QCameraControl_error(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error int, errorString string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(error)

	var errorString_ms C.struct_miqt_string = errorString
	errorString_ret := C.GoStringN(errorString_ms.data, C.int(int64(errorString_ms.len)))
	C.free(unsafe.Pointer(errorString_ms.data))
	slotval2 := errorString_ret

	gofunc(slotval1, slotval2)
}

func (this *QCameraControl) CaptureModeChanged(mode QCamera__CaptureMode) {
	C.QCameraControl_captureModeChanged(this.h, (C.int)(mode))
}
func (this *QCameraControl) OnCaptureModeChanged(slot func(mode QCamera__CaptureMode)) {
	C.QCameraControl_connect_captureModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraControl_captureModeChanged
func miqt_exec_callback_QCameraControl_captureModeChanged(cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode QCamera__CaptureMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__CaptureMode)(mode)

	gofunc(slotval1)
}

func QCameraControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraControl) Delete() {
	C.QCameraControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
