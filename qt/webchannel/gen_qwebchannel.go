package webchannel

/*

#include "gen_qwebchannel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebChannel struct {
	h          *C.QWebChannel
	isSubclass bool
	*qt.QObject
}

func (this *QWebChannel) cPointer() *C.QWebChannel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebChannel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebChannel constructs the type using only CGO pointers.
func newQWebChannel(h *C.QWebChannel, h_QObject *C.QObject) *QWebChannel {
	if h == nil {
		return nil
	}
	return &QWebChannel{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQWebChannel constructs the type using only unsafe pointers.
func UnsafeNewQWebChannel(h unsafe.Pointer, h_QObject unsafe.Pointer) *QWebChannel {
	if h == nil {
		return nil
	}

	return &QWebChannel{h: (*C.QWebChannel)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

// NewQWebChannel constructs a new QWebChannel object.
func NewQWebChannel() *QWebChannel {
	var outptr_QWebChannel *C.QWebChannel = nil
	var outptr_QObject *C.QObject = nil

	C.QWebChannel_new(&outptr_QWebChannel, &outptr_QObject)
	ret := newQWebChannel(outptr_QWebChannel, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQWebChannel2 constructs a new QWebChannel object.
func NewQWebChannel2(parent *qt.QObject) *QWebChannel {
	var outptr_QWebChannel *C.QWebChannel = nil
	var outptr_QObject *C.QObject = nil

	C.QWebChannel_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QWebChannel, &outptr_QObject)
	ret := newQWebChannel(outptr_QWebChannel, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QWebChannel) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebChannel_MetaObject(this.h)))
}

func (this *QWebChannel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebChannel_Metacast(this.h, param1_Cstring))
}

func QWebChannel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebChannel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebChannel) RegisterObjects(objects map[string]*qt.QObject) {
	objects_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(objects))))
	defer C.free(unsafe.Pointer(objects_Keys_CArray))
	objects_Values_CArray := (*[0xffff]*C.QObject)(C.malloc(C.size_t(8 * len(objects))))
	defer C.free(unsafe.Pointer(objects_Values_CArray))
	objects_ctr := 0
	for objects_k, objects_v := range objects {
		objects_k_ms := C.struct_miqt_string{}
		objects_k_ms.data = C.CString(objects_k)
		objects_k_ms.len = C.size_t(len(objects_k))
		defer C.free(unsafe.Pointer(objects_k_ms.data))
		objects_Keys_CArray[objects_ctr] = objects_k_ms
		objects_Values_CArray[objects_ctr] = (*C.QObject)(objects_v.UnsafePointer())
		objects_ctr++
	}
	objects_mm := C.struct_miqt_map{
		len:    C.size_t(len(objects)),
		keys:   unsafe.Pointer(objects_Keys_CArray),
		values: unsafe.Pointer(objects_Values_CArray),
	}
	C.QWebChannel_RegisterObjects(this.h, objects_mm)
}

func (this *QWebChannel) RegisteredObjects() map[string]*qt.QObject {
	var _mm C.struct_miqt_map = C.QWebChannel_RegisteredObjects(this.h)
	_ret := make(map[string]*qt.QObject, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QObject)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _hashkey_ms C.struct_miqt_string = _Keys[i]
		_hashkey_ret := C.GoStringN(_hashkey_ms.data, C.int(int64(_hashkey_ms.len)))
		C.free(unsafe.Pointer(_hashkey_ms.data))
		_entry_Key := _hashkey_ret
		_entry_Value := qt.UnsafeNewQObject(unsafe.Pointer(_Values[i]))
		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QWebChannel) RegisterObject(id string, object *qt.QObject) {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	C.QWebChannel_RegisterObject(this.h, id_ms, (*C.QObject)(object.UnsafePointer()))
}

func (this *QWebChannel) DeregisterObject(object *qt.QObject) {
	C.QWebChannel_DeregisterObject(this.h, (*C.QObject)(object.UnsafePointer()))
}

func (this *QWebChannel) BlockUpdates() bool {
	return (bool)(C.QWebChannel_BlockUpdates(this.h))
}

func (this *QWebChannel) SetBlockUpdates(block bool) {
	C.QWebChannel_SetBlockUpdates(this.h, (C.bool)(block))
}

func (this *QWebChannel) BlockUpdatesChanged(block bool) {
	C.QWebChannel_BlockUpdatesChanged(this.h, (C.bool)(block))
}
func (this *QWebChannel) OnBlockUpdatesChanged(slot func(block bool)) {
	C.QWebChannel_connect_BlockUpdatesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebChannel_BlockUpdatesChanged
func miqt_exec_callback_QWebChannel_BlockUpdatesChanged(cb C.intptr_t, block C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(block bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(block)

	gofunc(slotval1)
}

func (this *QWebChannel) ConnectTo(transport *QWebChannelAbstractTransport) {
	C.QWebChannel_ConnectTo(this.h, transport.cPointer())
}

func (this *QWebChannel) DisconnectFrom(transport *QWebChannelAbstractTransport) {
	C.QWebChannel_DisconnectFrom(this.h, transport.cPointer())
}

func QWebChannel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebChannel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebChannel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebChannel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebChannel) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QWebChannel_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebChannel) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	C.QWebChannel_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebChannel_Event
func miqt_exec_callback_QWebChannel_Event(self *C.QWebChannel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebChannel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebChannel) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QWebChannel_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebChannel) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	C.QWebChannel_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebChannel_EventFilter
func miqt_exec_callback_QWebChannel_EventFilter(self *C.QWebChannel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebChannel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebChannel) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QWebChannel_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebChannel) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	C.QWebChannel_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebChannel_TimerEvent
func miqt_exec_callback_QWebChannel_TimerEvent(self *C.QWebChannel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QWebChannel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebChannel) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QWebChannel_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebChannel) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	C.QWebChannel_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebChannel_ChildEvent
func miqt_exec_callback_QWebChannel_ChildEvent(self *C.QWebChannel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QWebChannel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebChannel) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QWebChannel_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebChannel) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	C.QWebChannel_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebChannel_CustomEvent
func miqt_exec_callback_QWebChannel_CustomEvent(self *C.QWebChannel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebChannel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebChannel) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QWebChannel_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebChannel) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QWebChannel_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebChannel_ConnectNotify
func miqt_exec_callback_QWebChannel_ConnectNotify(self *C.QWebChannel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebChannel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebChannel) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QWebChannel_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebChannel) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QWebChannel_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebChannel_DisconnectNotify
func miqt_exec_callback_QWebChannel_DisconnectNotify(self *C.QWebChannel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebChannel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebChannel) Delete() {
	C.QWebChannel_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebChannel) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebChannel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
