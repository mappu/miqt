package webchannel

/*

#include "gen_qqmlwebchannel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlWebChannel struct {
	h *C.QQmlWebChannel
	*QWebChannel
}

func (this *QQmlWebChannel) cPointer() *C.QQmlWebChannel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlWebChannel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlWebChannel constructs the type using only CGO pointers.
func newQQmlWebChannel(h *C.QQmlWebChannel) *QQmlWebChannel {
	if h == nil {
		return nil
	}
	var outptr_QWebChannel *C.QWebChannel = nil
	C.QQmlWebChannel_virtbase(h, &outptr_QWebChannel)

	return &QQmlWebChannel{h: h,
		QWebChannel: newQWebChannel(outptr_QWebChannel)}
}

// UnsafeNewQQmlWebChannel constructs the type using only unsafe pointers.
func UnsafeNewQQmlWebChannel(h unsafe.Pointer) *QQmlWebChannel {
	return newQQmlWebChannel((*C.QQmlWebChannel)(h))
}

// NewQQmlWebChannel constructs a new QQmlWebChannel object.
func NewQQmlWebChannel() *QQmlWebChannel {

	return newQQmlWebChannel(C.QQmlWebChannel_new())
}

// NewQQmlWebChannel2 constructs a new QQmlWebChannel object.
func NewQQmlWebChannel2(parent *qt6.QObject) *QQmlWebChannel {

	return newQQmlWebChannel(C.QQmlWebChannel_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QQmlWebChannel) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QQmlWebChannel_metaObject(this.h)))
}

func (this *QQmlWebChannel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QQmlWebChannel_metacast(this.h, param1_Cstring))
}

func QQmlWebChannel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QQmlWebChannel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlWebChannel) RegisterObjects(objects map[string]qt6.QVariant) {
	objects_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(objects))))
	defer C.free(unsafe.Pointer(objects_Keys_CArray))
	objects_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(objects))))
	defer C.free(unsafe.Pointer(objects_Values_CArray))
	objects_ctr := 0
	for objects_k, objects_v := range objects {
		objects_k_ms := C.struct_miqt_string{}
		objects_k_ms.data = C.CString(objects_k)
		objects_k_ms.len = C.size_t(len(objects_k))
		defer C.free(unsafe.Pointer(objects_k_ms.data))
		objects_Keys_CArray[objects_ctr] = objects_k_ms
		objects_Values_CArray[objects_ctr] = (*C.QVariant)(objects_v.UnsafePointer())
		objects_ctr++
	}
	objects_mm := C.struct_miqt_map{
		len:    C.size_t(len(objects)),
		keys:   unsafe.Pointer(objects_Keys_CArray),
		values: unsafe.Pointer(objects_Values_CArray),
	}
	C.QQmlWebChannel_registerObjects(this.h, objects_mm)
}

func (this *QQmlWebChannel) ConnectTo(transport *qt6.QObject) {
	C.QQmlWebChannel_connectTo(this.h, (*C.QObject)(transport.UnsafePointer()))
}

func (this *QQmlWebChannel) DisconnectFrom(transport *qt6.QObject) {
	C.QQmlWebChannel_disconnectFrom(this.h, (*C.QObject)(transport.UnsafePointer()))
}

func QQmlWebChannel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlWebChannel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlWebChannel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlWebChannel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QQmlWebChannel that was directly constructed.
func (this *QQmlWebChannel) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlWebChannel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QQmlWebChannel that was directly constructed.
func (this *QQmlWebChannel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlWebChannel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QQmlWebChannel that was directly constructed.
func (this *QQmlWebChannel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlWebChannel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QQmlWebChannel that was directly constructed.
func (this *QQmlWebChannel) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QQmlWebChannel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QQmlWebChannel) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QQmlWebChannel_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlWebChannel) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QQmlWebChannel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlWebChannel_event
func miqt_exec_callback_QQmlWebChannel_event(self *C.QQmlWebChannel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlWebChannel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QQmlWebChannel) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QQmlWebChannel_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlWebChannel) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QQmlWebChannel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlWebChannel_eventFilter
func miqt_exec_callback_QQmlWebChannel_eventFilter(self *C.QQmlWebChannel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlWebChannel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QQmlWebChannel) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QQmlWebChannel_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QQmlWebChannel) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QQmlWebChannel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlWebChannel_timerEvent
func miqt_exec_callback_QQmlWebChannel_timerEvent(self *C.QQmlWebChannel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QQmlWebChannel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QQmlWebChannel) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QQmlWebChannel_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QQmlWebChannel) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QQmlWebChannel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlWebChannel_childEvent
func miqt_exec_callback_QQmlWebChannel_childEvent(self *C.QQmlWebChannel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QQmlWebChannel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QQmlWebChannel) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QQmlWebChannel_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QQmlWebChannel) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QQmlWebChannel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlWebChannel_customEvent
func miqt_exec_callback_QQmlWebChannel_customEvent(self *C.QQmlWebChannel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QQmlWebChannel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QQmlWebChannel) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlWebChannel_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlWebChannel) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlWebChannel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlWebChannel_connectNotify
func miqt_exec_callback_QQmlWebChannel_connectNotify(self *C.QQmlWebChannel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlWebChannel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QQmlWebChannel) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlWebChannel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlWebChannel) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlWebChannel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlWebChannel_disconnectNotify
func miqt_exec_callback_QQmlWebChannel_disconnectNotify(self *C.QQmlWebChannel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlWebChannel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlWebChannel) Delete() {
	C.QQmlWebChannel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlWebChannel) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlWebChannel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
