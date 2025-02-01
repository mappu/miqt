package multimedia

/*

#include "gen_qaudiosink.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioSink struct {
	h *C.QAudioSink
	*qt6.QObject
}

func (this *QAudioSink) cPointer() *C.QAudioSink {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioSink) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioSink constructs the type using only CGO pointers.
func newQAudioSink(h *C.QAudioSink) *QAudioSink {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAudioSink_virtbase(h, &outptr_QObject)

	return &QAudioSink{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAudioSink constructs the type using only unsafe pointers.
func UnsafeNewQAudioSink(h unsafe.Pointer) *QAudioSink {
	return newQAudioSink((*C.QAudioSink)(h))
}

// NewQAudioSink constructs a new QAudioSink object.
func NewQAudioSink() *QAudioSink {

	return newQAudioSink(C.QAudioSink_new())
}

// NewQAudioSink2 constructs a new QAudioSink object.
func NewQAudioSink2(audioDeviceInfo *QAudioDevice) *QAudioSink {

	return newQAudioSink(C.QAudioSink_new2(audioDeviceInfo.cPointer()))
}

// NewQAudioSink3 constructs a new QAudioSink object.
func NewQAudioSink3(format *QAudioFormat) *QAudioSink {

	return newQAudioSink(C.QAudioSink_new3(format.cPointer()))
}

// NewQAudioSink4 constructs a new QAudioSink object.
func NewQAudioSink4(format *QAudioFormat, parent *qt6.QObject) *QAudioSink {

	return newQAudioSink(C.QAudioSink_new4(format.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

// NewQAudioSink5 constructs a new QAudioSink object.
func NewQAudioSink5(audioDeviceInfo *QAudioDevice, format *QAudioFormat) *QAudioSink {

	return newQAudioSink(C.QAudioSink_new5(audioDeviceInfo.cPointer(), format.cPointer()))
}

// NewQAudioSink6 constructs a new QAudioSink object.
func NewQAudioSink6(audioDeviceInfo *QAudioDevice, format *QAudioFormat, parent *qt6.QObject) *QAudioSink {

	return newQAudioSink(C.QAudioSink_new6(audioDeviceInfo.cPointer(), format.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QAudioSink) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioSink_metaObject(this.h)))
}

func (this *QAudioSink) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioSink_metacast(this.h, param1_Cstring))
}

func QAudioSink_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSink_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioSink) IsNull() bool {
	return (bool)(C.QAudioSink_isNull(this.h))
}

func (this *QAudioSink) Format() *QAudioFormat {
	_goptr := newQAudioFormat(C.QAudioSink_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioSink) Start(device *qt6.QIODevice) {
	C.QAudioSink_start(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAudioSink) Start2() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QAudioSink_start2(this.h)))
}

func (this *QAudioSink) Stop() {
	C.QAudioSink_stop(this.h)
}

func (this *QAudioSink) Reset() {
	C.QAudioSink_reset(this.h)
}

func (this *QAudioSink) Suspend() {
	C.QAudioSink_suspend(this.h)
}

func (this *QAudioSink) Resume() {
	C.QAudioSink_resume(this.h)
}

func (this *QAudioSink) SetBufferSize(bytes int64) {
	C.QAudioSink_setBufferSize(this.h, (C.ptrdiff_t)(bytes))
}

func (this *QAudioSink) BufferSize() int64 {
	return (int64)(C.QAudioSink_bufferSize(this.h))
}

func (this *QAudioSink) BytesFree() int64 {
	return (int64)(C.QAudioSink_bytesFree(this.h))
}

func (this *QAudioSink) ProcessedUSecs() int64 {
	return (int64)(C.QAudioSink_processedUSecs(this.h))
}

func (this *QAudioSink) ElapsedUSecs() int64 {
	return (int64)(C.QAudioSink_elapsedUSecs(this.h))
}

func (this *QAudioSink) Error() QAudio__Error {
	return (QAudio__Error)(C.QAudioSink_error(this.h))
}

func (this *QAudioSink) State() QAudio__State {
	return (QAudio__State)(C.QAudioSink_state(this.h))
}

func (this *QAudioSink) SetVolume(volume float64) {
	C.QAudioSink_setVolume(this.h, (C.double)(volume))
}

func (this *QAudioSink) Volume() float64 {
	return (float64)(C.QAudioSink_volume(this.h))
}

func (this *QAudioSink) StateChanged(state QAudio__State) {
	C.QAudioSink_stateChanged(this.h, (C.int)(state))
}
func (this *QAudioSink) OnStateChanged(slot func(state QAudio__State)) {
	C.QAudioSink_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSink_stateChanged
func miqt_exec_callback_QAudioSink_stateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QAudio__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudio__State)(state)

	gofunc(slotval1)
}

func QAudioSink_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSink_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSink_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSink_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioSink) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAudioSink_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioSink) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QAudioSink_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSink_event
func miqt_exec_callback_QAudioSink_event(self *C.QAudioSink, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioSink{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioSink) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QAudioSink_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioSink) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QAudioSink_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSink_eventFilter
func miqt_exec_callback_QAudioSink_eventFilter(self *C.QAudioSink, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioSink{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioSink) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QAudioSink_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioSink) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QAudioSink_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSink_timerEvent
func miqt_exec_callback_QAudioSink_timerEvent(self *C.QAudioSink, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAudioSink{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioSink) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAudioSink_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioSink) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QAudioSink_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSink_childEvent
func miqt_exec_callback_QAudioSink_childEvent(self *C.QAudioSink, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAudioSink{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioSink) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAudioSink_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioSink) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QAudioSink_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSink_customEvent
func miqt_exec_callback_QAudioSink_customEvent(self *C.QAudioSink, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioSink{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioSink) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioSink_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioSink) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioSink_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSink_connectNotify
func miqt_exec_callback_QAudioSink_connectNotify(self *C.QAudioSink, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioSink{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioSink) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioSink_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioSink) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioSink_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSink_disconnectNotify
func miqt_exec_callback_QAudioSink_disconnectNotify(self *C.QAudioSink, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioSink{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioSink) Delete() {
	C.QAudioSink_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioSink) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioSink) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
