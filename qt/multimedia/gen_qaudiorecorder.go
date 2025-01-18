package multimedia

/*

#include "gen_qaudiorecorder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioRecorder struct {
	h          *C.QAudioRecorder
	isSubclass bool
	*QMediaRecorder
}

func (this *QAudioRecorder) cPointer() *C.QAudioRecorder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioRecorder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioRecorder constructs the type using only CGO pointers.
func newQAudioRecorder(h *C.QAudioRecorder) *QAudioRecorder {
	if h == nil {
		return nil
	}
	var outptr_QMediaRecorder *C.QMediaRecorder = nil
	C.QAudioRecorder_virtbase(h, &outptr_QMediaRecorder)

	return &QAudioRecorder{h: h,
		QMediaRecorder: newQMediaRecorder(outptr_QMediaRecorder)}
}

// UnsafeNewQAudioRecorder constructs the type using only unsafe pointers.
func UnsafeNewQAudioRecorder(h unsafe.Pointer) *QAudioRecorder {
	return newQAudioRecorder((*C.QAudioRecorder)(h))
}

// NewQAudioRecorder constructs a new QAudioRecorder object.
func NewQAudioRecorder() *QAudioRecorder {

	ret := newQAudioRecorder(C.QAudioRecorder_new())
	ret.isSubclass = true
	return ret
}

// NewQAudioRecorder2 constructs a new QAudioRecorder object.
func NewQAudioRecorder2(parent *qt.QObject) *QAudioRecorder {

	ret := newQAudioRecorder(C.QAudioRecorder_new2((*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

func (this *QAudioRecorder) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioRecorder_MetaObject(this.h)))
}

func (this *QAudioRecorder) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioRecorder_Metacast(this.h, param1_Cstring))
}

func QAudioRecorder_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRecorder_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioRecorder_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRecorder_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioRecorder) AudioInputs() []string {
	var _ma C.struct_miqt_array = C.QAudioRecorder_AudioInputs(this.h)
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

func (this *QAudioRecorder) DefaultAudioInput() string {
	var _ms C.struct_miqt_string = C.QAudioRecorder_DefaultAudioInput(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioRecorder) AudioInputDescription(name string) string {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ms C.struct_miqt_string = C.QAudioRecorder_AudioInputDescription(this.h, name_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioRecorder) AudioInput() string {
	var _ms C.struct_miqt_string = C.QAudioRecorder_AudioInput(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioRecorder) SetAudioInput(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QAudioRecorder_SetAudioInput(this.h, name_ms)
}

func (this *QAudioRecorder) AudioInputChanged(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QAudioRecorder_AudioInputChanged(this.h, name_ms)
}
func (this *QAudioRecorder) OnAudioInputChanged(slot func(name string)) {
	C.QAudioRecorder_connect_AudioInputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRecorder_AudioInputChanged
func miqt_exec_callback_QAudioRecorder_AudioInputChanged(cb C.intptr_t, name C.struct_miqt_string) {
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

func (this *QAudioRecorder) AvailableAudioInputsChanged() {
	C.QAudioRecorder_AvailableAudioInputsChanged(this.h)
}
func (this *QAudioRecorder) OnAvailableAudioInputsChanged(slot func()) {
	C.QAudioRecorder_connect_AvailableAudioInputsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRecorder_AvailableAudioInputsChanged
func miqt_exec_callback_QAudioRecorder_AvailableAudioInputsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAudioRecorder_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRecorder_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioRecorder_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRecorder_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioRecorder_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRecorder_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioRecorder_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioRecorder_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioRecorder) callVirtualBase_MediaObject() *QMediaObject {

	return newQMediaObject(C.QAudioRecorder_virtualbase_MediaObject(unsafe.Pointer(this.h)))

}
func (this *QAudioRecorder) OnMediaObject(slot func(super func() *QMediaObject) *QMediaObject) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioRecorder_override_virtual_MediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRecorder_MediaObject
func miqt_exec_callback_QAudioRecorder_MediaObject(self *C.QAudioRecorder, cb C.intptr_t) *C.QMediaObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaObject) *QMediaObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAudioRecorder{h: self}).callVirtualBase_MediaObject)

	return virtualReturn.cPointer()

}

func (this *QAudioRecorder) callVirtualBase_SetMediaObject(object *QMediaObject) bool {

	return (bool)(C.QAudioRecorder_virtualbase_SetMediaObject(unsafe.Pointer(this.h), object.cPointer()))

}
func (this *QAudioRecorder) OnSetMediaObject(slot func(super func(object *QMediaObject) bool, object *QMediaObject) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioRecorder_override_virtual_SetMediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioRecorder_SetMediaObject
func miqt_exec_callback_QAudioRecorder_SetMediaObject(self *C.QAudioRecorder, cb C.intptr_t, object *C.QMediaObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QMediaObject) bool, object *QMediaObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMediaObject(object)

	virtualReturn := gofunc((&QAudioRecorder{h: self}).callVirtualBase_SetMediaObject, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QAudioRecorder) Delete() {
	C.QAudioRecorder_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioRecorder) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioRecorder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
