package multimedia

/*

#include "gen_qaudiosource.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioSource struct {
	h          *C.QAudioSource
	isSubclass bool
	*qt6.QObject
}

func (this *QAudioSource) cPointer() *C.QAudioSource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioSource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioSource constructs the type using only CGO pointers.
func newQAudioSource(h *C.QAudioSource, h_QObject *C.QObject) *QAudioSource {
	if h == nil {
		return nil
	}
	return &QAudioSource{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQAudioSource constructs the type using only unsafe pointers.
func UnsafeNewQAudioSource(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAudioSource {
	if h == nil {
		return nil
	}

	return &QAudioSource{h: (*C.QAudioSource)(h),
		QObject: qt6.UnsafeNewQObject(h_QObject)}
}

// NewQAudioSource constructs a new QAudioSource object.
func NewQAudioSource() *QAudioSource {
	var outptr_QAudioSource *C.QAudioSource = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioSource_new(&outptr_QAudioSource, &outptr_QObject)
	ret := newQAudioSource(outptr_QAudioSource, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioSource2 constructs a new QAudioSource object.
func NewQAudioSource2(audioDeviceInfo *QAudioDevice) *QAudioSource {
	var outptr_QAudioSource *C.QAudioSource = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioSource_new2(audioDeviceInfo.cPointer(), &outptr_QAudioSource, &outptr_QObject)
	ret := newQAudioSource(outptr_QAudioSource, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioSource3 constructs a new QAudioSource object.
func NewQAudioSource3(format *QAudioFormat) *QAudioSource {
	var outptr_QAudioSource *C.QAudioSource = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioSource_new3(format.cPointer(), &outptr_QAudioSource, &outptr_QObject)
	ret := newQAudioSource(outptr_QAudioSource, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioSource4 constructs a new QAudioSource object.
func NewQAudioSource4(format *QAudioFormat, parent *qt6.QObject) *QAudioSource {
	var outptr_QAudioSource *C.QAudioSource = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioSource_new4(format.cPointer(), (*C.QObject)(parent.UnsafePointer()), &outptr_QAudioSource, &outptr_QObject)
	ret := newQAudioSource(outptr_QAudioSource, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioSource5 constructs a new QAudioSource object.
func NewQAudioSource5(audioDeviceInfo *QAudioDevice, format *QAudioFormat) *QAudioSource {
	var outptr_QAudioSource *C.QAudioSource = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioSource_new5(audioDeviceInfo.cPointer(), format.cPointer(), &outptr_QAudioSource, &outptr_QObject)
	ret := newQAudioSource(outptr_QAudioSource, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioSource6 constructs a new QAudioSource object.
func NewQAudioSource6(audioDeviceInfo *QAudioDevice, format *QAudioFormat, parent *qt6.QObject) *QAudioSource {
	var outptr_QAudioSource *C.QAudioSource = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioSource_new6(audioDeviceInfo.cPointer(), format.cPointer(), (*C.QObject)(parent.UnsafePointer()), &outptr_QAudioSource, &outptr_QObject)
	ret := newQAudioSource(outptr_QAudioSource, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAudioSource) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioSource_MetaObject(this.h)))
}

func (this *QAudioSource) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioSource_Metacast(this.h, param1_Cstring))
}

func QAudioSource_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSource_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioSource) IsNull() bool {
	return (bool)(C.QAudioSource_IsNull(this.h))
}

func (this *QAudioSource) Format() *QAudioFormat {
	_goptr := newQAudioFormat(C.QAudioSource_Format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioSource) Start(device *qt6.QIODevice) {
	C.QAudioSource_Start(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAudioSource) Start2() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QAudioSource_Start2(this.h)), nil, nil)
}

func (this *QAudioSource) Stop() {
	C.QAudioSource_Stop(this.h)
}

func (this *QAudioSource) Reset() {
	C.QAudioSource_Reset(this.h)
}

func (this *QAudioSource) Suspend() {
	C.QAudioSource_Suspend(this.h)
}

func (this *QAudioSource) Resume() {
	C.QAudioSource_Resume(this.h)
}

func (this *QAudioSource) SetBufferSize(bytes int64) {
	C.QAudioSource_SetBufferSize(this.h, (C.ptrdiff_t)(bytes))
}

func (this *QAudioSource) BufferSize() int64 {
	return (int64)(C.QAudioSource_BufferSize(this.h))
}

func (this *QAudioSource) BytesAvailable() int64 {
	return (int64)(C.QAudioSource_BytesAvailable(this.h))
}

func (this *QAudioSource) SetVolume(volume float64) {
	C.QAudioSource_SetVolume(this.h, (C.double)(volume))
}

func (this *QAudioSource) Volume() float64 {
	return (float64)(C.QAudioSource_Volume(this.h))
}

func (this *QAudioSource) ProcessedUSecs() int64 {
	return (int64)(C.QAudioSource_ProcessedUSecs(this.h))
}

func (this *QAudioSource) ElapsedUSecs() int64 {
	return (int64)(C.QAudioSource_ElapsedUSecs(this.h))
}

func (this *QAudioSource) Error() QAudio__Error {
	return (QAudio__Error)(C.QAudioSource_Error(this.h))
}

func (this *QAudioSource) State() QAudio__State {
	return (QAudio__State)(C.QAudioSource_State(this.h))
}

func (this *QAudioSource) StateChanged(state QAudio__State) {
	C.QAudioSource_StateChanged(this.h, (C.int)(state))
}
func (this *QAudioSource) OnStateChanged(slot func(state QAudio__State)) {
	C.QAudioSource_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSource_StateChanged
func miqt_exec_callback_QAudioSource_StateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QAudio__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudio__State)(state)

	gofunc(slotval1)
}

func QAudioSource_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSource_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSource_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSource_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioSource) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAudioSource_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioSource) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioSource_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSource_Event
func miqt_exec_callback_QAudioSource_Event(self *C.QAudioSource, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioSource{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioSource) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QAudioSource_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioSource) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioSource_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSource_EventFilter
func miqt_exec_callback_QAudioSource_EventFilter(self *C.QAudioSource, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioSource{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioSource) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QAudioSource_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioSource) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioSource_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSource_TimerEvent
func miqt_exec_callback_QAudioSource_TimerEvent(self *C.QAudioSource, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioSource{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioSource) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAudioSource_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioSource) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioSource_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSource_ChildEvent
func miqt_exec_callback_QAudioSource_ChildEvent(self *C.QAudioSource, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioSource{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioSource) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAudioSource_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioSource) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioSource_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSource_CustomEvent
func miqt_exec_callback_QAudioSource_CustomEvent(self *C.QAudioSource, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioSource{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioSource) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioSource_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioSource) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioSource_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSource_ConnectNotify
func miqt_exec_callback_QAudioSource_ConnectNotify(self *C.QAudioSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioSource{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioSource) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioSource_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioSource) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioSource_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSource_DisconnectNotify
func miqt_exec_callback_QAudioSource_DisconnectNotify(self *C.QAudioSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioSource{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioSource) Delete() {
	C.QAudioSource_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioSource) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioSource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
