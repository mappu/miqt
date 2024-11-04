package multimedia

/*

#include "gen_qaudiooutputselectorcontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioOutputSelectorControl struct {
	h *C.QAudioOutputSelectorControl
	*QMediaControl
}

func (this *QAudioOutputSelectorControl) cPointer() *C.QAudioOutputSelectorControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioOutputSelectorControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAudioOutputSelectorControl(h *C.QAudioOutputSelectorControl) *QAudioOutputSelectorControl {
	if h == nil {
		return nil
	}
	return &QAudioOutputSelectorControl{h: h, QMediaControl: UnsafeNewQMediaControl(unsafe.Pointer(h))}
}

func UnsafeNewQAudioOutputSelectorControl(h unsafe.Pointer) *QAudioOutputSelectorControl {
	return newQAudioOutputSelectorControl((*C.QAudioOutputSelectorControl)(h))
}

func (this *QAudioOutputSelectorControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioOutputSelectorControl_MetaObject(this.h)))
}

func (this *QAudioOutputSelectorControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioOutputSelectorControl_Metacast(this.h, param1_Cstring))
}

func QAudioOutputSelectorControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutputSelectorControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioOutputSelectorControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutputSelectorControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioOutputSelectorControl) AvailableOutputs() []string {
	var _ma C.struct_miqt_array = C.QAudioOutputSelectorControl_AvailableOutputs(this.h)
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

func (this *QAudioOutputSelectorControl) OutputDescription(name string) string {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ms C.struct_miqt_string = C.QAudioOutputSelectorControl_OutputDescription(this.h, name_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioOutputSelectorControl) DefaultOutput() string {
	var _ms C.struct_miqt_string = C.QAudioOutputSelectorControl_DefaultOutput(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioOutputSelectorControl) ActiveOutput() string {
	var _ms C.struct_miqt_string = C.QAudioOutputSelectorControl_ActiveOutput(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioOutputSelectorControl) SetActiveOutput(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QAudioOutputSelectorControl_SetActiveOutput(this.h, name_ms)
}

func (this *QAudioOutputSelectorControl) ActiveOutputChanged(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QAudioOutputSelectorControl_ActiveOutputChanged(this.h, name_ms)
}
func (this *QAudioOutputSelectorControl) OnActiveOutputChanged(slot func(name string)) {
	C.QAudioOutputSelectorControl_connect_ActiveOutputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutputSelectorControl_ActiveOutputChanged
func miqt_exec_callback_QAudioOutputSelectorControl_ActiveOutputChanged(cb C.intptr_t, name C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	gofunc(slotval1)
}

func (this *QAudioOutputSelectorControl) AvailableOutputsChanged() {
	C.QAudioOutputSelectorControl_AvailableOutputsChanged(this.h)
}
func (this *QAudioOutputSelectorControl) OnAvailableOutputsChanged(slot func()) {
	C.QAudioOutputSelectorControl_connect_AvailableOutputsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutputSelectorControl_AvailableOutputsChanged
func miqt_exec_callback_QAudioOutputSelectorControl_AvailableOutputsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAudioOutputSelectorControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutputSelectorControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioOutputSelectorControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutputSelectorControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioOutputSelectorControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutputSelectorControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioOutputSelectorControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutputSelectorControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAudioOutputSelectorControl) Delete() {
	C.QAudioOutputSelectorControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioOutputSelectorControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioOutputSelectorControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
