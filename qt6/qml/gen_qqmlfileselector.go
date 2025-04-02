package qml

/*

#include "gen_qqmlfileselector.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlFileSelector struct {
	h *C.QQmlFileSelector
	*qt6.QObject
}

func (this *QQmlFileSelector) cPointer() *C.QQmlFileSelector {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlFileSelector) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlFileSelector constructs the type using only CGO pointers.
func newQQmlFileSelector(h *C.QQmlFileSelector) *QQmlFileSelector {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QQmlFileSelector_virtbase(h, &outptr_QObject)

	return &QQmlFileSelector{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQQmlFileSelector constructs the type using only unsafe pointers.
func UnsafeNewQQmlFileSelector(h unsafe.Pointer) *QQmlFileSelector {
	return newQQmlFileSelector((*C.QQmlFileSelector)(h))
}

// NewQQmlFileSelector constructs a new QQmlFileSelector object.
func NewQQmlFileSelector(engine *QQmlEngine) *QQmlFileSelector {

	return newQQmlFileSelector(C.QQmlFileSelector_new(engine.cPointer()))
}

// NewQQmlFileSelector2 constructs a new QQmlFileSelector object.
func NewQQmlFileSelector2(engine *QQmlEngine, parent *qt6.QObject) *QQmlFileSelector {

	return newQQmlFileSelector(C.QQmlFileSelector_new2(engine.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QQmlFileSelector) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QQmlFileSelector_metaObject(this.h)))
}

func (this *QQmlFileSelector) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QQmlFileSelector_metacast(this.h, param1_Cstring))
}

func QQmlFileSelector_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QQmlFileSelector_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlFileSelector) Selector() *qt6.QFileSelector {
	return qt6.UnsafeNewQFileSelector(unsafe.Pointer(C.QQmlFileSelector_selector(this.h)))
}

func (this *QQmlFileSelector) SetSelector(selector *qt6.QFileSelector) {
	C.QQmlFileSelector_setSelector(this.h, (*C.QFileSelector)(selector.UnsafePointer()))
}

func (this *QQmlFileSelector) SetExtraSelectors(strings []string) {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}
	C.QQmlFileSelector_setExtraSelectors(this.h, strings_ma)
}

func QQmlFileSelector_Get(param1 *QQmlEngine) *QQmlFileSelector {
	return newQQmlFileSelector(C.QQmlFileSelector_get(param1.cPointer()))
}

func QQmlFileSelector_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlFileSelector_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlFileSelector_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlFileSelector_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QQmlFileSelector that was directly constructed.
func (this *QQmlFileSelector) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlFileSelector_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QQmlFileSelector that was directly constructed.
func (this *QQmlFileSelector) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlFileSelector_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QQmlFileSelector that was directly constructed.
func (this *QQmlFileSelector) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlFileSelector_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QQmlFileSelector that was directly constructed.
func (this *QQmlFileSelector) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QQmlFileSelector_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QQmlFileSelector) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QQmlFileSelector_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlFileSelector) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QQmlFileSelector_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlFileSelector_event
func miqt_exec_callback_QQmlFileSelector_event(self *C.QQmlFileSelector, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlFileSelector{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QQmlFileSelector) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QQmlFileSelector_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlFileSelector) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QQmlFileSelector_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlFileSelector_eventFilter
func miqt_exec_callback_QQmlFileSelector_eventFilter(self *C.QQmlFileSelector, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlFileSelector{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QQmlFileSelector) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QQmlFileSelector_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QQmlFileSelector) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QQmlFileSelector_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlFileSelector_timerEvent
func miqt_exec_callback_QQmlFileSelector_timerEvent(self *C.QQmlFileSelector, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QQmlFileSelector{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QQmlFileSelector) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QQmlFileSelector_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QQmlFileSelector) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QQmlFileSelector_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlFileSelector_childEvent
func miqt_exec_callback_QQmlFileSelector_childEvent(self *C.QQmlFileSelector, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QQmlFileSelector{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QQmlFileSelector) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QQmlFileSelector_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QQmlFileSelector) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QQmlFileSelector_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlFileSelector_customEvent
func miqt_exec_callback_QQmlFileSelector_customEvent(self *C.QQmlFileSelector, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QQmlFileSelector{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QQmlFileSelector) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlFileSelector_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlFileSelector) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlFileSelector_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlFileSelector_connectNotify
func miqt_exec_callback_QQmlFileSelector_connectNotify(self *C.QQmlFileSelector, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlFileSelector{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QQmlFileSelector) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlFileSelector_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlFileSelector) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlFileSelector_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlFileSelector_disconnectNotify
func miqt_exec_callback_QQmlFileSelector_disconnectNotify(self *C.QQmlFileSelector, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlFileSelector{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlFileSelector) Delete() {
	C.QQmlFileSelector_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlFileSelector) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlFileSelector) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
