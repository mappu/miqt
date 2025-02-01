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
	h *C.QAudioSource
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
func newQAudioSource(h *C.QAudioSource) *QAudioSource {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAudioSource_virtbase(h, &outptr_QObject)

	return &QAudioSource{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAudioSource constructs the type using only unsafe pointers.
func UnsafeNewQAudioSource(h unsafe.Pointer) *QAudioSource {
	return newQAudioSource((*C.QAudioSource)(h))
}

// NewQAudioSource constructs a new QAudioSource object.
func NewQAudioSource() *QAudioSource {

	return newQAudioSource(C.QAudioSource_new())
}

// NewQAudioSource2 constructs a new QAudioSource object.
func NewQAudioSource2(audioDeviceInfo *QAudioDevice) *QAudioSource {

	return newQAudioSource(C.QAudioSource_new2(audioDeviceInfo.cPointer()))
}

// NewQAudioSource3 constructs a new QAudioSource object.
func NewQAudioSource3(format *QAudioFormat) *QAudioSource {

	return newQAudioSource(C.QAudioSource_new3(format.cPointer()))
}

// NewQAudioSource4 constructs a new QAudioSource object.
func NewQAudioSource4(format *QAudioFormat, parent *qt6.QObject) *QAudioSource {

	return newQAudioSource(C.QAudioSource_new4(format.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

// NewQAudioSource5 constructs a new QAudioSource object.
func NewQAudioSource5(audioDeviceInfo *QAudioDevice, format *QAudioFormat) *QAudioSource {

	return newQAudioSource(C.QAudioSource_new5(audioDeviceInfo.cPointer(), format.cPointer()))
}

// NewQAudioSource6 constructs a new QAudioSource object.
func NewQAudioSource6(audioDeviceInfo *QAudioDevice, format *QAudioFormat, parent *qt6.QObject) *QAudioSource {

	return newQAudioSource(C.QAudioSource_new6(audioDeviceInfo.cPointer(), format.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QAudioSource) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioSource_metaObject(this.h)))
}

func (this *QAudioSource) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioSource_metacast(this.h, param1_Cstring))
}

func QAudioSource_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSource_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioSource) IsNull() bool {
	return (bool)(C.QAudioSource_isNull(this.h))
}

func (this *QAudioSource) Format() *QAudioFormat {
	_goptr := newQAudioFormat(C.QAudioSource_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioSource) Start(device *qt6.QIODevice) {
	C.QAudioSource_start(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAudioSource) Start2() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QAudioSource_start2(this.h)))
}

func (this *QAudioSource) Stop() {
	C.QAudioSource_stop(this.h)
}

func (this *QAudioSource) Reset() {
	C.QAudioSource_reset(this.h)
}

func (this *QAudioSource) Suspend() {
	C.QAudioSource_suspend(this.h)
}

func (this *QAudioSource) Resume() {
	C.QAudioSource_resume(this.h)
}

func (this *QAudioSource) SetBufferSize(bytes int64) {
	C.QAudioSource_setBufferSize(this.h, (C.ptrdiff_t)(bytes))
}

func (this *QAudioSource) BufferSize() int64 {
	return (int64)(C.QAudioSource_bufferSize(this.h))
}

func (this *QAudioSource) BytesAvailable() int64 {
	return (int64)(C.QAudioSource_bytesAvailable(this.h))
}

func (this *QAudioSource) SetVolume(volume float64) {
	C.QAudioSource_setVolume(this.h, (C.double)(volume))
}

func (this *QAudioSource) Volume() float64 {
	return (float64)(C.QAudioSource_volume(this.h))
}

func (this *QAudioSource) ProcessedUSecs() int64 {
	return (int64)(C.QAudioSource_processedUSecs(this.h))
}

func (this *QAudioSource) ElapsedUSecs() int64 {
	return (int64)(C.QAudioSource_elapsedUSecs(this.h))
}

func (this *QAudioSource) Error() QAudio__Error {
	return (QAudio__Error)(C.QAudioSource_error(this.h))
}

func (this *QAudioSource) State() QAudio__State {
	return (QAudio__State)(C.QAudioSource_state(this.h))
}

func (this *QAudioSource) StateChanged(state QAudio__State) {
	C.QAudioSource_stateChanged(this.h, (C.int)(state))
}
func (this *QAudioSource) OnStateChanged(slot func(state QAudio__State)) {
	C.QAudioSource_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSource_stateChanged
func miqt_exec_callback_QAudioSource_stateChanged(cb C.intptr_t, state C.int) {
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
	var _ms C.struct_miqt_string = C.QAudioSource_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSource_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSource_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioSource) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAudioSource_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioSource) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QAudioSource_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSource_event
func miqt_exec_callback_QAudioSource_event(self *C.QAudioSource, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QAudioSource_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioSource) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QAudioSource_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSource_eventFilter
func miqt_exec_callback_QAudioSource_eventFilter(self *C.QAudioSource, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QAudioSource_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioSource) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QAudioSource_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSource_timerEvent
func miqt_exec_callback_QAudioSource_timerEvent(self *C.QAudioSource, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAudioSource{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioSource) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAudioSource_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioSource) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QAudioSource_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSource_childEvent
func miqt_exec_callback_QAudioSource_childEvent(self *C.QAudioSource, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAudioSource{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioSource) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAudioSource_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioSource) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QAudioSource_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSource_customEvent
func miqt_exec_callback_QAudioSource_customEvent(self *C.QAudioSource, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioSource{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioSource) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioSource_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioSource) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioSource_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSource_connectNotify
func miqt_exec_callback_QAudioSource_connectNotify(self *C.QAudioSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioSource{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioSource) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioSource_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioSource) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioSource_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSource_disconnectNotify
func miqt_exec_callback_QAudioSource_disconnectNotify(self *C.QAudioSource, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QAudioSource_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioSource) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioSource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
