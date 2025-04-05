package qml

/*

#include "gen_qqmlpropertymap.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlPropertyMap struct {
	h *C.QQmlPropertyMap
	*qt6.QObject
}

func (this *QQmlPropertyMap) cPointer() *C.QQmlPropertyMap {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlPropertyMap) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlPropertyMap constructs the type using only CGO pointers.
func newQQmlPropertyMap(h *C.QQmlPropertyMap) *QQmlPropertyMap {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QQmlPropertyMap_virtbase(h, &outptr_QObject)

	return &QQmlPropertyMap{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQQmlPropertyMap constructs the type using only unsafe pointers.
func UnsafeNewQQmlPropertyMap(h unsafe.Pointer) *QQmlPropertyMap {
	return newQQmlPropertyMap((*C.QQmlPropertyMap)(h))
}

// NewQQmlPropertyMap constructs a new QQmlPropertyMap object.
func NewQQmlPropertyMap() *QQmlPropertyMap {

	return newQQmlPropertyMap(C.QQmlPropertyMap_new())
}

// NewQQmlPropertyMap2 constructs a new QQmlPropertyMap object.
func NewQQmlPropertyMap2(parent *qt6.QObject) *QQmlPropertyMap {

	return newQQmlPropertyMap(C.QQmlPropertyMap_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QQmlPropertyMap) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QQmlPropertyMap_metaObject(this.h)))
}

func (this *QQmlPropertyMap) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QQmlPropertyMap_metacast(this.h, param1_Cstring))
}

func QQmlPropertyMap_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QQmlPropertyMap_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlPropertyMap) Value(key string) *qt6.QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QQmlPropertyMap_value(this.h, key_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlPropertyMap) Insert(key string, value *qt6.QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QQmlPropertyMap_insert(this.h, key_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QQmlPropertyMap) InsertWithValues(values map[string]qt6.QVariant) {
	values_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(values))))
	defer C.free(unsafe.Pointer(values_Keys_CArray))
	values_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(values))))
	defer C.free(unsafe.Pointer(values_Values_CArray))
	values_ctr := 0
	for values_k, values_v := range values {
		values_k_ms := C.struct_miqt_string{}
		values_k_ms.data = C.CString(values_k)
		values_k_ms.len = C.size_t(len(values_k))
		defer C.free(unsafe.Pointer(values_k_ms.data))
		values_Keys_CArray[values_ctr] = values_k_ms
		values_Values_CArray[values_ctr] = (*C.QVariant)(values_v.UnsafePointer())
		values_ctr++
	}
	values_mm := C.struct_miqt_map{
		len:    C.size_t(len(values)),
		keys:   unsafe.Pointer(values_Keys_CArray),
		values: unsafe.Pointer(values_Values_CArray),
	}
	C.QQmlPropertyMap_insertWithValues(this.h, values_mm)
}

func (this *QQmlPropertyMap) Clear(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QQmlPropertyMap_clear(this.h, key_ms)
}

func (this *QQmlPropertyMap) Freeze() {
	C.QQmlPropertyMap_freeze(this.h)
}

func (this *QQmlPropertyMap) Keys() []string {
	var _ma C.struct_miqt_array = C.QQmlPropertyMap_keys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QQmlPropertyMap) Count() int {
	return (int)(C.QQmlPropertyMap_count(this.h))
}

func (this *QQmlPropertyMap) Size() int {
	return (int)(C.QQmlPropertyMap_size(this.h))
}

func (this *QQmlPropertyMap) IsEmpty() bool {
	return (bool)(C.QQmlPropertyMap_isEmpty(this.h))
}

func (this *QQmlPropertyMap) Contains(key string) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QQmlPropertyMap_contains(this.h, key_ms))
}

func (this *QQmlPropertyMap) OperatorSubscript(key string) *qt6.QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return qt6.UnsafeNewQVariant(unsafe.Pointer(C.QQmlPropertyMap_operatorSubscript(this.h, key_ms)))
}

func (this *QQmlPropertyMap) OperatorSubscriptWithKey(key string) *qt6.QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QQmlPropertyMap_operatorSubscriptWithKey(this.h, key_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlPropertyMap) ValueChanged(key string, value *qt6.QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QQmlPropertyMap_valueChanged(this.h, key_ms, (*C.QVariant)(value.UnsafePointer()))
}
func (this *QQmlPropertyMap) OnValueChanged(slot func(key string, value *qt6.QVariant)) {
	C.QQmlPropertyMap_connect_valueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QQmlPropertyMap_valueChanged
func miqt_exec_callback_QQmlPropertyMap_valueChanged(cb C.intptr_t, key C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(key string, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2)
}

func QQmlPropertyMap_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlPropertyMap_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlPropertyMap_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlPropertyMap_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QQmlPropertyMap that was directly constructed.
func (this *QQmlPropertyMap) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlPropertyMap_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QQmlPropertyMap that was directly constructed.
func (this *QQmlPropertyMap) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlPropertyMap_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QQmlPropertyMap that was directly constructed.
func (this *QQmlPropertyMap) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlPropertyMap_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QQmlPropertyMap that was directly constructed.
func (this *QQmlPropertyMap) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QQmlPropertyMap_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QQmlPropertyMap) callVirtualBase_UpdateValue(key string, input *qt6.QVariant) *qt6.QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QQmlPropertyMap_virtualbase_updateValue(unsafe.Pointer(this.h), key_ms, (*C.QVariant)(input.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QQmlPropertyMap) OnUpdateValue(slot func(super func(key string, input *qt6.QVariant) *qt6.QVariant, key string, input *qt6.QVariant) *qt6.QVariant) {
	ok := C.QQmlPropertyMap_override_virtual_updateValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlPropertyMap_updateValue
func miqt_exec_callback_QQmlPropertyMap_updateValue(self *C.QQmlPropertyMap, cb C.intptr_t, key C.struct_miqt_string, input *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(key string, input *qt6.QVariant) *qt6.QVariant, key string, input *qt6.QVariant) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(input))

	virtualReturn := gofunc((&QQmlPropertyMap{h: self}).callVirtualBase_UpdateValue, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QQmlPropertyMap) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QQmlPropertyMap_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlPropertyMap) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QQmlPropertyMap_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlPropertyMap_event
func miqt_exec_callback_QQmlPropertyMap_event(self *C.QQmlPropertyMap, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlPropertyMap{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QQmlPropertyMap) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QQmlPropertyMap_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlPropertyMap) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QQmlPropertyMap_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlPropertyMap_eventFilter
func miqt_exec_callback_QQmlPropertyMap_eventFilter(self *C.QQmlPropertyMap, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlPropertyMap{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QQmlPropertyMap) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QQmlPropertyMap_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QQmlPropertyMap) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QQmlPropertyMap_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlPropertyMap_timerEvent
func miqt_exec_callback_QQmlPropertyMap_timerEvent(self *C.QQmlPropertyMap, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QQmlPropertyMap{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QQmlPropertyMap) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QQmlPropertyMap_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QQmlPropertyMap) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QQmlPropertyMap_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlPropertyMap_childEvent
func miqt_exec_callback_QQmlPropertyMap_childEvent(self *C.QQmlPropertyMap, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QQmlPropertyMap{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QQmlPropertyMap) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QQmlPropertyMap_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QQmlPropertyMap) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QQmlPropertyMap_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlPropertyMap_customEvent
func miqt_exec_callback_QQmlPropertyMap_customEvent(self *C.QQmlPropertyMap, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QQmlPropertyMap{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QQmlPropertyMap) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlPropertyMap_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlPropertyMap) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlPropertyMap_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlPropertyMap_connectNotify
func miqt_exec_callback_QQmlPropertyMap_connectNotify(self *C.QQmlPropertyMap, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlPropertyMap{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QQmlPropertyMap) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlPropertyMap_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlPropertyMap) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlPropertyMap_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlPropertyMap_disconnectNotify
func miqt_exec_callback_QQmlPropertyMap_disconnectNotify(self *C.QQmlPropertyMap, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlPropertyMap{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlPropertyMap) Delete() {
	C.QQmlPropertyMap_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlPropertyMap) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlPropertyMap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
