package multimedia

/*

#include "gen_qcameralockscontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraLocksControl struct {
	h          *C.QCameraLocksControl
	isSubclass bool
	*QMediaControl
}

func (this *QCameraLocksControl) cPointer() *C.QCameraLocksControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraLocksControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraLocksControl constructs the type using only CGO pointers.
func newQCameraLocksControl(h *C.QCameraLocksControl) *QCameraLocksControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraLocksControl_virtbase(h, &outptr_QMediaControl)

	return &QCameraLocksControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraLocksControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraLocksControl(h unsafe.Pointer) *QCameraLocksControl {
	return newQCameraLocksControl((*C.QCameraLocksControl)(h))
}

func (this *QCameraLocksControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraLocksControl_MetaObject(this.h)))
}

func (this *QCameraLocksControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraLocksControl_Metacast(this.h, param1_Cstring))
}

func QCameraLocksControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraLocksControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraLocksControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraLocksControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraLocksControl) SupportedLocks() QCamera__LockType {
	return (QCamera__LockType)(C.QCameraLocksControl_SupportedLocks(this.h))
}

func (this *QCameraLocksControl) LockStatus(lock QCamera__LockType) QCamera__LockStatus {
	return (QCamera__LockStatus)(C.QCameraLocksControl_LockStatus(this.h, (C.int)(lock)))
}

func (this *QCameraLocksControl) SearchAndLock(locks QCamera__LockType) {
	C.QCameraLocksControl_SearchAndLock(this.h, (C.int)(locks))
}

func (this *QCameraLocksControl) Unlock(locks QCamera__LockType) {
	C.QCameraLocksControl_Unlock(this.h, (C.int)(locks))
}

func (this *QCameraLocksControl) LockStatusChanged(typeVal QCamera__LockType, status QCamera__LockStatus, reason QCamera__LockChangeReason) {
	C.QCameraLocksControl_LockStatusChanged(this.h, (C.int)(typeVal), (C.int)(status), (C.int)(reason))
}
func (this *QCameraLocksControl) OnLockStatusChanged(slot func(typeVal QCamera__LockType, status QCamera__LockStatus, reason QCamera__LockChangeReason)) {
	C.QCameraLocksControl_connect_LockStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraLocksControl_LockStatusChanged
func miqt_exec_callback_QCameraLocksControl_LockStatusChanged(cb C.intptr_t, typeVal C.int, status C.int, reason C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(typeVal QCamera__LockType, status QCamera__LockStatus, reason QCamera__LockChangeReason))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__LockType)(typeVal)

	slotval2 := (QCamera__LockStatus)(status)

	slotval3 := (QCamera__LockChangeReason)(reason)

	gofunc(slotval1, slotval2, slotval3)
}

func QCameraLocksControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraLocksControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraLocksControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraLocksControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraLocksControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraLocksControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraLocksControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraLocksControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraLocksControl) Delete() {
	C.QCameraLocksControl_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraLocksControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraLocksControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
