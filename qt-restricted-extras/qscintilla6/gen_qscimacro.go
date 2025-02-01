package qscintilla6

/*

#include "gen_qscimacro.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciMacro struct {
	h *C.QsciMacro
	*qt6.QObject
}

func (this *QsciMacro) cPointer() *C.QsciMacro {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciMacro) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciMacro constructs the type using only CGO pointers.
func newQsciMacro(h *C.QsciMacro) *QsciMacro {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QsciMacro_virtbase(h, &outptr_QObject)

	return &QsciMacro{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQsciMacro constructs the type using only unsafe pointers.
func UnsafeNewQsciMacro(h unsafe.Pointer) *QsciMacro {
	return newQsciMacro((*C.QsciMacro)(h))
}

// NewQsciMacro constructs a new QsciMacro object.
func NewQsciMacro(parent *QsciScintilla) *QsciMacro {

	return newQsciMacro(C.QsciMacro_new(parent.cPointer()))
}

// NewQsciMacro2 constructs a new QsciMacro object.
func NewQsciMacro2(asc string, parent *QsciScintilla) *QsciMacro {
	asc_ms := C.struct_miqt_string{}
	asc_ms.data = C.CString(asc)
	asc_ms.len = C.size_t(len(asc))
	defer C.free(unsafe.Pointer(asc_ms.data))

	return newQsciMacro(C.QsciMacro_new2(asc_ms, parent.cPointer()))
}

func (this *QsciMacro) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciMacro_metaObject(this.h)))
}

func (this *QsciMacro) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciMacro_metacast(this.h, param1_Cstring))
}

func QsciMacro_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciMacro_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciMacro) Clear() {
	C.QsciMacro_clear(this.h)
}

func (this *QsciMacro) Load(asc string) bool {
	asc_ms := C.struct_miqt_string{}
	asc_ms.data = C.CString(asc)
	asc_ms.len = C.size_t(len(asc))
	defer C.free(unsafe.Pointer(asc_ms.data))
	return (bool)(C.QsciMacro_load(this.h, asc_ms))
}

func (this *QsciMacro) Save() string {
	var _ms C.struct_miqt_string = C.QsciMacro_save(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciMacro) Play() {
	C.QsciMacro_play(this.h)
}

func (this *QsciMacro) StartRecording() {
	C.QsciMacro_startRecording(this.h)
}

func (this *QsciMacro) EndRecording() {
	C.QsciMacro_endRecording(this.h)
}

func QsciMacro_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciMacro_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciMacro_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciMacro_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciMacro) callVirtualBase_Play() {

	C.QsciMacro_virtualbase_play(unsafe.Pointer(this.h))

}
func (this *QsciMacro) OnPlay(slot func(super func())) {
	ok := C.QsciMacro_override_virtual_play(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciMacro_play
func miqt_exec_callback_QsciMacro_play(self *C.QsciMacro, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciMacro{h: self}).callVirtualBase_Play)

}

func (this *QsciMacro) callVirtualBase_StartRecording() {

	C.QsciMacro_virtualbase_startRecording(unsafe.Pointer(this.h))

}
func (this *QsciMacro) OnStartRecording(slot func(super func())) {
	ok := C.QsciMacro_override_virtual_startRecording(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciMacro_startRecording
func miqt_exec_callback_QsciMacro_startRecording(self *C.QsciMacro, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciMacro{h: self}).callVirtualBase_StartRecording)

}

func (this *QsciMacro) callVirtualBase_EndRecording() {

	C.QsciMacro_virtualbase_endRecording(unsafe.Pointer(this.h))

}
func (this *QsciMacro) OnEndRecording(slot func(super func())) {
	ok := C.QsciMacro_override_virtual_endRecording(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciMacro_endRecording
func miqt_exec_callback_QsciMacro_endRecording(self *C.QsciMacro, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciMacro{h: self}).callVirtualBase_EndRecording)

}

func (this *QsciMacro) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QsciMacro_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciMacro) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QsciMacro_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciMacro_event
func miqt_exec_callback_QsciMacro_event(self *C.QsciMacro, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciMacro{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciMacro) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QsciMacro_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciMacro) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QsciMacro_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciMacro_eventFilter
func miqt_exec_callback_QsciMacro_eventFilter(self *C.QsciMacro, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciMacro{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciMacro) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QsciMacro_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciMacro) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QsciMacro_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciMacro_timerEvent
func miqt_exec_callback_QsciMacro_timerEvent(self *C.QsciMacro, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciMacro{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciMacro) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QsciMacro_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciMacro) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QsciMacro_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciMacro_childEvent
func miqt_exec_callback_QsciMacro_childEvent(self *C.QsciMacro, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciMacro{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciMacro) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QsciMacro_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciMacro) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QsciMacro_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciMacro_customEvent
func miqt_exec_callback_QsciMacro_customEvent(self *C.QsciMacro, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciMacro{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciMacro) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QsciMacro_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciMacro) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciMacro_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciMacro_connectNotify
func miqt_exec_callback_QsciMacro_connectNotify(self *C.QsciMacro, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciMacro{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciMacro) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QsciMacro_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciMacro) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciMacro_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciMacro_disconnectNotify
func miqt_exec_callback_QsciMacro_disconnectNotify(self *C.QsciMacro, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciMacro{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciMacro) Delete() {
	C.QsciMacro_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciMacro) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciMacro) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
