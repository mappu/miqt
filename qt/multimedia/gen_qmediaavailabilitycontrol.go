package multimedia

/*

#include "gen_qmediaavailabilitycontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaAvailabilityControl struct {
	h          *C.QMediaAvailabilityControl
	isSubclass bool
	*QMediaControl
}

func (this *QMediaAvailabilityControl) cPointer() *C.QMediaAvailabilityControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaAvailabilityControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaAvailabilityControl constructs the type using only CGO pointers.
func newQMediaAvailabilityControl(h *C.QMediaAvailabilityControl, h_QMediaControl *C.QMediaControl, h_QObject *C.QObject) *QMediaAvailabilityControl {
	if h == nil {
		return nil
	}
	return &QMediaAvailabilityControl{h: h,
		QMediaControl: newQMediaControl(h_QMediaControl, h_QObject)}
}

// UnsafeNewQMediaAvailabilityControl constructs the type using only unsafe pointers.
func UnsafeNewQMediaAvailabilityControl(h unsafe.Pointer, h_QMediaControl unsafe.Pointer, h_QObject unsafe.Pointer) *QMediaAvailabilityControl {
	if h == nil {
		return nil
	}

	return &QMediaAvailabilityControl{h: (*C.QMediaAvailabilityControl)(h),
		QMediaControl: UnsafeNewQMediaControl(h_QMediaControl, h_QObject)}
}

func (this *QMediaAvailabilityControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaAvailabilityControl_MetaObject(this.h)))
}

func (this *QMediaAvailabilityControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaAvailabilityControl_Metacast(this.h, param1_Cstring))
}

func QMediaAvailabilityControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaAvailabilityControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaAvailabilityControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaAvailabilityControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaAvailabilityControl) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QMediaAvailabilityControl_Availability(this.h))
}

func (this *QMediaAvailabilityControl) AvailabilityChanged(availability QMultimedia__AvailabilityStatus) {
	C.QMediaAvailabilityControl_AvailabilityChanged(this.h, (C.int)(availability))
}
func (this *QMediaAvailabilityControl) OnAvailabilityChanged(slot func(availability QMultimedia__AvailabilityStatus)) {
	C.QMediaAvailabilityControl_connect_AvailabilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaAvailabilityControl_AvailabilityChanged
func miqt_exec_callback_QMediaAvailabilityControl_AvailabilityChanged(cb C.intptr_t, availability C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(availability QMultimedia__AvailabilityStatus))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMultimedia__AvailabilityStatus)(availability)

	gofunc(slotval1)
}

func QMediaAvailabilityControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaAvailabilityControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaAvailabilityControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaAvailabilityControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaAvailabilityControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaAvailabilityControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaAvailabilityControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaAvailabilityControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaAvailabilityControl) Delete() {
	C.QMediaAvailabilityControl_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaAvailabilityControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaAvailabilityControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
