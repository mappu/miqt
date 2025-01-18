package multimedia

/*

#include "gen_qmediadevices.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaDevices struct {
	h *C.QMediaDevices
	*qt6.QObject
}

func (this *QMediaDevices) cPointer() *C.QMediaDevices {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaDevices) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaDevices constructs the type using only CGO pointers.
func newQMediaDevices(h *C.QMediaDevices) *QMediaDevices {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QMediaDevices_virtbase(h, &outptr_QObject)

	return &QMediaDevices{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQMediaDevices constructs the type using only unsafe pointers.
func UnsafeNewQMediaDevices(h unsafe.Pointer) *QMediaDevices {
	return newQMediaDevices((*C.QMediaDevices)(h))
}

// NewQMediaDevices constructs a new QMediaDevices object.
func NewQMediaDevices() *QMediaDevices {

	return newQMediaDevices(C.QMediaDevices_new())
}

// NewQMediaDevices2 constructs a new QMediaDevices object.
func NewQMediaDevices2(parent *qt6.QObject) *QMediaDevices {

	return newQMediaDevices(C.QMediaDevices_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QMediaDevices) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaDevices_MetaObject(this.h)))
}

func (this *QMediaDevices) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaDevices_Metacast(this.h, param1_Cstring))
}

func QMediaDevices_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaDevices_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaDevices_AudioInputs() []QAudioDevice {
	var _ma C.struct_miqt_array = C.QMediaDevices_AudioInputs()
	_ret := make([]QAudioDevice, int(_ma.len))
	_outCast := (*[0xffff]*C.QAudioDevice)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQAudioDevice(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QMediaDevices_AudioOutputs() []QAudioDevice {
	var _ma C.struct_miqt_array = C.QMediaDevices_AudioOutputs()
	_ret := make([]QAudioDevice, int(_ma.len))
	_outCast := (*[0xffff]*C.QAudioDevice)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQAudioDevice(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QMediaDevices_VideoInputs() []QCameraDevice {
	var _ma C.struct_miqt_array = C.QMediaDevices_VideoInputs()
	_ret := make([]QCameraDevice, int(_ma.len))
	_outCast := (*[0xffff]*C.QCameraDevice)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraDevice(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QMediaDevices_DefaultAudioInput() *QAudioDevice {
	_goptr := newQAudioDevice(C.QMediaDevices_DefaultAudioInput())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QMediaDevices_DefaultAudioOutput() *QAudioDevice {
	_goptr := newQAudioDevice(C.QMediaDevices_DefaultAudioOutput())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QMediaDevices_DefaultVideoInput() *QCameraDevice {
	_goptr := newQCameraDevice(C.QMediaDevices_DefaultVideoInput())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaDevices) AudioInputsChanged() {
	C.QMediaDevices_AudioInputsChanged(this.h)
}
func (this *QMediaDevices) OnAudioInputsChanged(slot func()) {
	C.QMediaDevices_connect_AudioInputsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaDevices_AudioInputsChanged
func miqt_exec_callback_QMediaDevices_AudioInputsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaDevices) AudioOutputsChanged() {
	C.QMediaDevices_AudioOutputsChanged(this.h)
}
func (this *QMediaDevices) OnAudioOutputsChanged(slot func()) {
	C.QMediaDevices_connect_AudioOutputsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaDevices_AudioOutputsChanged
func miqt_exec_callback_QMediaDevices_AudioOutputsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaDevices) VideoInputsChanged() {
	C.QMediaDevices_VideoInputsChanged(this.h)
}
func (this *QMediaDevices) OnVideoInputsChanged(slot func()) {
	C.QMediaDevices_connect_VideoInputsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaDevices_VideoInputsChanged
func miqt_exec_callback_QMediaDevices_VideoInputsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QMediaDevices_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaDevices_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaDevices_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaDevices_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaDevices) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QMediaDevices_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaDevices) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QMediaDevices_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaDevices_Event
func miqt_exec_callback_QMediaDevices_Event(self *C.QMediaDevices, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMediaDevices{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMediaDevices) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QMediaDevices_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaDevices) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QMediaDevices_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaDevices_EventFilter
func miqt_exec_callback_QMediaDevices_EventFilter(self *C.QMediaDevices, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMediaDevices{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMediaDevices) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QMediaDevices_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QMediaDevices) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QMediaDevices_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaDevices_TimerEvent
func miqt_exec_callback_QMediaDevices_TimerEvent(self *C.QMediaDevices, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QMediaDevices{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMediaDevices) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QMediaDevices_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QMediaDevices) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QMediaDevices_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaDevices_ChildEvent
func miqt_exec_callback_QMediaDevices_ChildEvent(self *C.QMediaDevices, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QMediaDevices{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMediaDevices) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QMediaDevices_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QMediaDevices) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QMediaDevices_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaDevices_CustomEvent
func miqt_exec_callback_QMediaDevices_CustomEvent(self *C.QMediaDevices, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QMediaDevices{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMediaDevices) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QMediaDevices_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaDevices) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMediaDevices_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaDevices_ConnectNotify
func miqt_exec_callback_QMediaDevices_ConnectNotify(self *C.QMediaDevices, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMediaDevices{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMediaDevices) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QMediaDevices_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaDevices) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMediaDevices_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaDevices_DisconnectNotify
func miqt_exec_callback_QMediaDevices_DisconnectNotify(self *C.QMediaDevices, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMediaDevices{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMediaDevices) Delete() {
	C.QMediaDevices_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaDevices) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaDevices) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
