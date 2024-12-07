package multimedia

/*

#include "gen_qaudioinput.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioInput struct {
	h          *C.QAudioInput
	isSubclass bool
	*qt.QObject
}

func (this *QAudioInput) cPointer() *C.QAudioInput {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioInput) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioInput constructs the type using only CGO pointers.
func newQAudioInput(h *C.QAudioInput, h_QObject *C.QObject) *QAudioInput {
	if h == nil {
		return nil
	}
	return &QAudioInput{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQAudioInput constructs the type using only unsafe pointers.
func UnsafeNewQAudioInput(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAudioInput {
	if h == nil {
		return nil
	}

	return &QAudioInput{h: (*C.QAudioInput)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

// NewQAudioInput constructs a new QAudioInput object.
func NewQAudioInput() *QAudioInput {
	var outptr_QAudioInput *C.QAudioInput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioInput_new(&outptr_QAudioInput, &outptr_QObject)
	ret := newQAudioInput(outptr_QAudioInput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioInput2 constructs a new QAudioInput object.
func NewQAudioInput2(audioDeviceInfo *QAudioDeviceInfo) *QAudioInput {
	var outptr_QAudioInput *C.QAudioInput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioInput_new2(audioDeviceInfo.cPointer(), &outptr_QAudioInput, &outptr_QObject)
	ret := newQAudioInput(outptr_QAudioInput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioInput3 constructs a new QAudioInput object.
func NewQAudioInput3(format *QAudioFormat) *QAudioInput {
	var outptr_QAudioInput *C.QAudioInput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioInput_new3(format.cPointer(), &outptr_QAudioInput, &outptr_QObject)
	ret := newQAudioInput(outptr_QAudioInput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioInput4 constructs a new QAudioInput object.
func NewQAudioInput4(format *QAudioFormat, parent *qt.QObject) *QAudioInput {
	var outptr_QAudioInput *C.QAudioInput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioInput_new4(format.cPointer(), (*C.QObject)(parent.UnsafePointer()), &outptr_QAudioInput, &outptr_QObject)
	ret := newQAudioInput(outptr_QAudioInput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioInput5 constructs a new QAudioInput object.
func NewQAudioInput5(audioDeviceInfo *QAudioDeviceInfo, format *QAudioFormat) *QAudioInput {
	var outptr_QAudioInput *C.QAudioInput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioInput_new5(audioDeviceInfo.cPointer(), format.cPointer(), &outptr_QAudioInput, &outptr_QObject)
	ret := newQAudioInput(outptr_QAudioInput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioInput6 constructs a new QAudioInput object.
func NewQAudioInput6(audioDeviceInfo *QAudioDeviceInfo, format *QAudioFormat, parent *qt.QObject) *QAudioInput {
	var outptr_QAudioInput *C.QAudioInput = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioInput_new6(audioDeviceInfo.cPointer(), format.cPointer(), (*C.QObject)(parent.UnsafePointer()), &outptr_QAudioInput, &outptr_QObject)
	ret := newQAudioInput(outptr_QAudioInput, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAudioInput) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioInput_MetaObject(this.h)))
}

func (this *QAudioInput) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioInput_Metacast(this.h, param1_Cstring))
}

func QAudioInput_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioInput_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioInput_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioInput_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioInput) Format() *QAudioFormat {
	_goptr := newQAudioFormat(C.QAudioInput_Format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioInput) Start(device *qt.QIODevice) {
	C.QAudioInput_Start(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAudioInput) Start2() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QAudioInput_Start2(this.h)), nil)
}

func (this *QAudioInput) Stop() {
	C.QAudioInput_Stop(this.h)
}

func (this *QAudioInput) Reset() {
	C.QAudioInput_Reset(this.h)
}

func (this *QAudioInput) Suspend() {
	C.QAudioInput_Suspend(this.h)
}

func (this *QAudioInput) Resume() {
	C.QAudioInput_Resume(this.h)
}

func (this *QAudioInput) SetBufferSize(bytes int) {
	C.QAudioInput_SetBufferSize(this.h, (C.int)(bytes))
}

func (this *QAudioInput) BufferSize() int {
	return (int)(C.QAudioInput_BufferSize(this.h))
}

func (this *QAudioInput) BytesReady() int {
	return (int)(C.QAudioInput_BytesReady(this.h))
}

func (this *QAudioInput) PeriodSize() int {
	return (int)(C.QAudioInput_PeriodSize(this.h))
}

func (this *QAudioInput) SetNotifyInterval(milliSeconds int) {
	C.QAudioInput_SetNotifyInterval(this.h, (C.int)(milliSeconds))
}

func (this *QAudioInput) NotifyInterval() int {
	return (int)(C.QAudioInput_NotifyInterval(this.h))
}

func (this *QAudioInput) SetVolume(volume float64) {
	C.QAudioInput_SetVolume(this.h, (C.double)(volume))
}

func (this *QAudioInput) Volume() float64 {
	return (float64)(C.QAudioInput_Volume(this.h))
}

func (this *QAudioInput) ProcessedUSecs() int64 {
	return (int64)(C.QAudioInput_ProcessedUSecs(this.h))
}

func (this *QAudioInput) ElapsedUSecs() int64 {
	return (int64)(C.QAudioInput_ElapsedUSecs(this.h))
}

func (this *QAudioInput) Error() QAudio__Error {
	return (QAudio__Error)(C.QAudioInput_Error(this.h))
}

func (this *QAudioInput) State() QAudio__State {
	return (QAudio__State)(C.QAudioInput_State(this.h))
}

func (this *QAudioInput) StateChanged(state QAudio__State) {
	C.QAudioInput_StateChanged(this.h, (C.int)(state))
}
func (this *QAudioInput) OnStateChanged(slot func(state QAudio__State)) {
	C.QAudioInput_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_StateChanged
func miqt_exec_callback_QAudioInput_StateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QAudio__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudio__State)(state)

	gofunc(slotval1)
}

func (this *QAudioInput) Notify() {
	C.QAudioInput_Notify(this.h)
}
func (this *QAudioInput) OnNotify(slot func()) {
	C.QAudioInput_connect_Notify(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_Notify
func miqt_exec_callback_QAudioInput_Notify(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAudioInput_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioInput_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioInput_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioInput_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioInput_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioInput_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioInput_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioInput_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioInput) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QAudioInput_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioInput) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioInput_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_Event
func miqt_exec_callback_QAudioInput_Event(self *C.QAudioInput, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioInput{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioInput) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QAudioInput_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioInput) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioInput_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_EventFilter
func miqt_exec_callback_QAudioInput_EventFilter(self *C.QAudioInput, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioInput{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioInput) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QAudioInput_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioInput) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioInput_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_TimerEvent
func miqt_exec_callback_QAudioInput_TimerEvent(self *C.QAudioInput, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioInput{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioInput) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QAudioInput_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioInput) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioInput_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_ChildEvent
func miqt_exec_callback_QAudioInput_ChildEvent(self *C.QAudioInput, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioInput{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioInput) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QAudioInput_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioInput) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioInput_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_CustomEvent
func miqt_exec_callback_QAudioInput_CustomEvent(self *C.QAudioInput, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioInput{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioInput) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QAudioInput_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioInput) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioInput_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_ConnectNotify
func miqt_exec_callback_QAudioInput_ConnectNotify(self *C.QAudioInput, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioInput{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioInput) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QAudioInput_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioInput) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioInput_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioInput_DisconnectNotify
func miqt_exec_callback_QAudioInput_DisconnectNotify(self *C.QAudioInput, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioInput{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioInput) Delete() {
	C.QAudioInput_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioInput) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioInput) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
