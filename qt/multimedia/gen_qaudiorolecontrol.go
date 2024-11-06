package multimedia

/*

#include "gen_qaudiorolecontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioRoleControl struct {
	h *C.QAudioRoleControl
	*QMediaControl
}

func (this *QAudioRoleControl) cPointer() *C.QAudioRoleControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioRoleControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAudioRoleControl(h *C.QAudioRoleControl) *QAudioRoleControl {
	if h == nil {
		return nil
	}
	return &QAudioRoleControl{h: h, QMediaControl: UnsafeNewQMediaControl(unsafe.Pointer(h))}
}

func UnsafeNewQAudioRoleControl(h unsafe.Pointer) *QAudioRoleControl {
	return newQAudioRoleControl((*C.QAudioRoleControl)(h))
}

func (this *QAudioRoleControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioRoleControl_MetaObject(this.h)))
}

func (this *QAudioRoleControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioRoleControl_Metacast(this.h, param1_Cstring))
}

func QAudioRoleControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRoleControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioRoleControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRoleControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioRoleControl) AudioRole() QAudio__Role {
	return (QAudio__Role)(C.QAudioRoleControl_AudioRole(this.h))
}

func (this *QAudioRoleControl) SetAudioRole(role QAudio__Role) {
	C.QAudioRoleControl_SetAudioRole(this.h, (C.int)(role))
}

func (this *QAudioRoleControl) SupportedAudioRoles() []QAudio__Role {
	var _ma C.struct_miqt_array = C.QAudioRoleControl_SupportedAudioRoles(this.h)
	_ret := make([]QAudio__Role, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QAudio__Role)(_outCast[i])
	}
	return _ret
}

func (this *QAudioRoleControl) AudioRoleChanged(role QAudio__Role) {
	C.QAudioRoleControl_AudioRoleChanged(this.h, (C.int)(role))
}
func (this *QAudioRoleControl) OnAudioRoleChanged(slot func(role QAudio__Role)) {
	C.QAudioRoleControl_connect_AudioRoleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRoleControl_AudioRoleChanged
func miqt_exec_callback_QAudioRoleControl_AudioRoleChanged(cb C.intptr_t, role C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(role QAudio__Role))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudio__Role)(role)

	gofunc(slotval1)
}

func QAudioRoleControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRoleControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioRoleControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRoleControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioRoleControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRoleControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioRoleControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRoleControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAudioRoleControl) Delete() {
	C.QAudioRoleControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioRoleControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioRoleControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
