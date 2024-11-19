package multimedia

/*

#include "gen_qcustomaudiorolecontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCustomAudioRoleControl struct {
	h          *C.QCustomAudioRoleControl
	isSubclass bool
	*QMediaControl
}

func (this *QCustomAudioRoleControl) cPointer() *C.QCustomAudioRoleControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCustomAudioRoleControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCustomAudioRoleControl constructs the type using only CGO pointers.
func newQCustomAudioRoleControl(h *C.QCustomAudioRoleControl, h_QMediaControl *C.QMediaControl, h_QObject *C.QObject) *QCustomAudioRoleControl {
	if h == nil {
		return nil
	}
	return &QCustomAudioRoleControl{h: h,
		QMediaControl: newQMediaControl(h_QMediaControl, h_QObject)}
}

// UnsafeNewQCustomAudioRoleControl constructs the type using only unsafe pointers.
func UnsafeNewQCustomAudioRoleControl(h unsafe.Pointer, h_QMediaControl unsafe.Pointer, h_QObject unsafe.Pointer) *QCustomAudioRoleControl {
	if h == nil {
		return nil
	}

	return &QCustomAudioRoleControl{h: (*C.QCustomAudioRoleControl)(h),
		QMediaControl: UnsafeNewQMediaControl(h_QMediaControl, h_QObject)}
}

func (this *QCustomAudioRoleControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCustomAudioRoleControl_MetaObject(this.h)))
}

func (this *QCustomAudioRoleControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCustomAudioRoleControl_Metacast(this.h, param1_Cstring))
}

func QCustomAudioRoleControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCustomAudioRoleControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCustomAudioRoleControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCustomAudioRoleControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCustomAudioRoleControl) CustomAudioRole() string {
	var _ms C.struct_miqt_string = C.QCustomAudioRoleControl_CustomAudioRole(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCustomAudioRoleControl) SetCustomAudioRole(role string) {
	role_ms := C.struct_miqt_string{}
	role_ms.data = C.CString(role)
	role_ms.len = C.size_t(len(role))
	defer C.free(unsafe.Pointer(role_ms.data))
	C.QCustomAudioRoleControl_SetCustomAudioRole(this.h, role_ms)
}

func (this *QCustomAudioRoleControl) SupportedCustomAudioRoles() []string {
	var _ma C.struct_miqt_array = C.QCustomAudioRoleControl_SupportedCustomAudioRoles(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QCustomAudioRoleControl) CustomAudioRoleChanged(role string) {
	role_ms := C.struct_miqt_string{}
	role_ms.data = C.CString(role)
	role_ms.len = C.size_t(len(role))
	defer C.free(unsafe.Pointer(role_ms.data))
	C.QCustomAudioRoleControl_CustomAudioRoleChanged(this.h, role_ms)
}
func (this *QCustomAudioRoleControl) OnCustomAudioRoleChanged(slot func(role string)) {
	C.QCustomAudioRoleControl_connect_CustomAudioRoleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCustomAudioRoleControl_CustomAudioRoleChanged
func miqt_exec_callback_QCustomAudioRoleControl_CustomAudioRoleChanged(cb C.intptr_t, role C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(role string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var role_ms C.struct_miqt_string = role
	role_ret := C.GoStringN(role_ms.data, C.int(int64(role_ms.len)))
	C.free(unsafe.Pointer(role_ms.data))
	slotval1 := role_ret

	gofunc(slotval1)
}

func QCustomAudioRoleControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCustomAudioRoleControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCustomAudioRoleControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCustomAudioRoleControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCustomAudioRoleControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCustomAudioRoleControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCustomAudioRoleControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCustomAudioRoleControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCustomAudioRoleControl) Delete() {
	C.QCustomAudioRoleControl_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCustomAudioRoleControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCustomAudioRoleControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
