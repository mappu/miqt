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
	h  *C.QSound
	gc *[1]unsafe.Pointer
	*qt.QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSound) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
func newQSound(h *C.QSound) *QSound {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QSound_virtbase(h, &outptr_QObject)

	return &QSound{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQSound constructs the type using only unsafe pointers.
func UnsafeNewQSound(h unsafe.Pointer) *QSound {
	return newQSound((*C.QSound)(h))
}

// NewQSound constructs a new QSound object.
func NewQSound(filename string) *QSound {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))

	return newQSound(C.QSound_new(filename_ms))
}

// NewQSound2 constructs a new QSound object.
func NewQSound2(filename string, parent *qt.QObject) *QSound {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))

	return newQSound(C.QSound_new2(filename_ms, (*C.QObject)(parent.UnsafePointer())))
}

func (this *QSound) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QSound_metaObject(this.h)))
}

func (this *QSound) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSound_metacast(this.h, param1_Cstring))
}

func QSound_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSound_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSound_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSound_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSound_Play(filename string) {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	C.QSound_play(filename_ms)
}

func (this *QSound) Loops() int {
	return (int)(C.QSound_loops(this.h))
}

func (this *QSound) LoopsRemaining() int {
	return (int)(C.QSound_loopsRemaining(this.h))
}

func (this *QSound) SetLoops(loops int) {
	C.QSound_setLoops(this.h, (C.int)(loops))
}

func (this *QSound) FileName() string {
	var _ms C.struct_miqt_string = C.QSound_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSound) IsFinished() bool {
	return (bool)(C.QSound_isFinished(this.h))
}

func (this *QSound) Play2() {
	C.QSound_play2(this.h)
}

func (this *QSound) Stop() {
	C.QSound_stop(this.h)
}

func QSound_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSound_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSound_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSound_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSound_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSound_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSound_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSound_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QSound that was directly constructed.
func (this *QSound) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QSound_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSound that was directly constructed.
func (this *QSound) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSound_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSound that was directly constructed.
func (this *QSound) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSound_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSound that was directly constructed.
func (this *QSound) IsSignalConnected(signal *qt.QMetaMethod) bool {
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSound_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSound) callVirtualBase_Event(event *qt.QEvent) bool {
	defer runtime.KeepAlive(event)

	return (bool)(C.QSound_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSound) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QSound_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSound_event
func miqt_exec_callback_QSound_event(self *C.QSound, cb C.intptr_t, event *C.QEvent) C.bool {
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
	defer runtime.KeepAlive(event)

	return (bool)(C.QSound_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSound) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QSound_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSound_eventFilter
func miqt_exec_callback_QSound_eventFilter(self *C.QSound, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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
	defer runtime.KeepAlive(event)

	C.QSound_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSound) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QSound_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSound_timerEvent
func miqt_exec_callback_QSound_timerEvent(self *C.QSound, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSound{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSound) callVirtualBase_ChildEvent(event *qt.QChildEvent) {
	defer runtime.KeepAlive(event)

	C.QSound_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSound) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QSound_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSound_childEvent
func miqt_exec_callback_QSound_childEvent(self *C.QSound, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSound{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSound) callVirtualBase_CustomEvent(event *qt.QEvent) {
	defer runtime.KeepAlive(event)

	C.QSound_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSound) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QSound_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSound_customEvent
func miqt_exec_callback_QSound_customEvent(self *C.QSound, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSound{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSound) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {
	defer runtime.KeepAlive(signal)

	C.QSound_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSound) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSound_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSound_connectNotify
func miqt_exec_callback_QSound_connectNotify(self *C.QSound, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSound{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSound) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {
	defer runtime.KeepAlive(signal)

	C.QSound_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSound) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSound_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSound_disconnectNotify
func miqt_exec_callback_QSound_disconnectNotify(self *C.QSound, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QSound_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
// This is a QObject class, so this is unsupported: the bindings do not
// keep it alive during calls into C++, and its parent may delete it.
func (this *QSound) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSound_delete((*C.QSound)(gc[0]))
	})
	this.miqtSetGC(gc)
}
