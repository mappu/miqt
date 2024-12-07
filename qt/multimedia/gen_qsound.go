package multimedia

/*

#include "gen_qsound.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSound__Loop int

const (
	QSound__Infinite QSound__Loop = -1
)

type QSound struct {
	h          *C.QSound
	isSubclass bool
	*qt.QObject
}

func (this *QSound) cPointer() *C.QSound {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSound) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSound constructs the type using only CGO pointers.
func newQSound(h *C.QSound, h_QObject *C.QObject) *QSound {
	if h == nil {
		return nil
	}
	return &QSound{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQSound constructs the type using only unsafe pointers.
func UnsafeNewQSound(h unsafe.Pointer, h_QObject unsafe.Pointer) *QSound {
	if h == nil {
		return nil
	}

	return &QSound{h: (*C.QSound)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

// NewQSound constructs a new QSound object.
func NewQSound(filename string) *QSound {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	var outptr_QSound *C.QSound = nil
	var outptr_QObject *C.QObject = nil

	C.QSound_new(filename_ms, &outptr_QSound, &outptr_QObject)
	ret := newQSound(outptr_QSound, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSound2 constructs a new QSound object.
func NewQSound2(filename string, parent *qt.QObject) *QSound {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	var outptr_QSound *C.QSound = nil
	var outptr_QObject *C.QObject = nil

	C.QSound_new2(filename_ms, (*C.QObject)(parent.UnsafePointer()), &outptr_QSound, &outptr_QObject)
	ret := newQSound(outptr_QSound, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QSound) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QSound_MetaObject(this.h)))
}

func (this *QSound) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSound_Metacast(this.h, param1_Cstring))
}

func QSound_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSound_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSound_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSound_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSound_Play(filename string) {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	C.QSound_Play(filename_ms)
}

func (this *QSound) Loops() int {
	return (int)(C.QSound_Loops(this.h))
}

func (this *QSound) LoopsRemaining() int {
	return (int)(C.QSound_LoopsRemaining(this.h))
}

func (this *QSound) SetLoops(loops int) {
	C.QSound_SetLoops(this.h, (C.int)(loops))
}

func (this *QSound) FileName() string {
	var _ms C.struct_miqt_string = C.QSound_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSound) IsFinished() bool {
	return (bool)(C.QSound_IsFinished(this.h))
}

func (this *QSound) Play2() {
	C.QSound_Play2(this.h)
}

func (this *QSound) Stop() {
	C.QSound_Stop(this.h)
}

func QSound_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSound_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSound_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSound_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSound_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSound_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSound_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSound_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSound) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QSound_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSound) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSound_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSound_Event
func miqt_exec_callback_QSound_Event(self *C.QSound, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSound{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSound) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QSound_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSound) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSound_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSound_EventFilter
func miqt_exec_callback_QSound_EventFilter(self *C.QSound, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSound{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSound) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QSound_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSound) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSound_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSound_TimerEvent
func miqt_exec_callback_QSound_TimerEvent(self *C.QSound, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QSound{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSound) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QSound_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSound) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSound_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSound_ChildEvent
func miqt_exec_callback_QSound_ChildEvent(self *C.QSound, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QSound{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSound) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QSound_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSound) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSound_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSound_CustomEvent
func miqt_exec_callback_QSound_CustomEvent(self *C.QSound, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSound{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSound) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QSound_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSound) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSound_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSound_ConnectNotify
func miqt_exec_callback_QSound_ConnectNotify(self *C.QSound, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSound{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSound) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QSound_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSound) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSound_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSound_DisconnectNotify
func miqt_exec_callback_QSound_DisconnectNotify(self *C.QSound, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSound{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSound) Delete() {
	C.QSound_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSound) GoGC() {
	runtime.SetFinalizer(this, func(this *QSound) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
