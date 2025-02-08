package qt

/*

#include "gen_qfileselector.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFileSelector struct {
	h *C.QFileSelector
	*QObject
}

func (this *QFileSelector) cPointer() *C.QFileSelector {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFileSelector) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFileSelector constructs the type using only CGO pointers.
func newQFileSelector(h *C.QFileSelector) *QFileSelector {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QFileSelector_virtbase(h, &outptr_QObject)

	return &QFileSelector{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQFileSelector constructs the type using only unsafe pointers.
func UnsafeNewQFileSelector(h unsafe.Pointer) *QFileSelector {
	return newQFileSelector((*C.QFileSelector)(h))
}

// NewQFileSelector constructs a new QFileSelector object.
func NewQFileSelector() *QFileSelector {

	return newQFileSelector(C.QFileSelector_new())
}

// NewQFileSelector2 constructs a new QFileSelector object.
func NewQFileSelector2(parent *QObject) *QFileSelector {

	return newQFileSelector(C.QFileSelector_new2(parent.cPointer()))
}

func (this *QFileSelector) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFileSelector_metaObject(this.h))
}

func (this *QFileSelector) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFileSelector_metacast(this.h, param1_Cstring))
}

func QFileSelector_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFileSelector_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileSelector_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFileSelector_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileSelector) Select(filePath string) string {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	var _ms C.struct_miqt_string = C.QFileSelector_select(this.h, filePath_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileSelector) SelectWithFilePath(filePath *QUrl) *QUrl {
	_goptr := newQUrl(C.QFileSelector_selectWithFilePath(this.h, filePath.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSelector) ExtraSelectors() []string {
	var _ma C.struct_miqt_array = C.QFileSelector_extraSelectors(this.h)
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

func (this *QFileSelector) SetExtraSelectors(list []string) {
	list_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_i_ms := C.struct_miqt_string{}
		list_i_ms.data = C.CString(list[i])
		list_i_ms.len = C.size_t(len(list[i]))
		defer C.free(unsafe.Pointer(list_i_ms.data))
		list_CArray[i] = list_i_ms
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	C.QFileSelector_setExtraSelectors(this.h, list_ma)
}

func (this *QFileSelector) AllSelectors() []string {
	var _ma C.struct_miqt_array = C.QFileSelector_allSelectors(this.h)
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

func QFileSelector_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileSelector_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileSelector_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileSelector_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileSelector_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileSelector_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileSelector_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileSelector_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QFileSelector that was directly constructed.
func (this *QFileSelector) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QFileSelector_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QFileSelector that was directly constructed.
func (this *QFileSelector) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFileSelector_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QFileSelector that was directly constructed.
func (this *QFileSelector) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFileSelector_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QFileSelector that was directly constructed.
func (this *QFileSelector) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFileSelector_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QFileSelector) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QFileSelector_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QFileSelector) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QFileSelector_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSelector_event
func miqt_exec_callback_QFileSelector_event(self *C.QFileSelector, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QFileSelector{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFileSelector) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QFileSelector_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QFileSelector) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QFileSelector_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSelector_eventFilter
func miqt_exec_callback_QFileSelector_eventFilter(self *C.QFileSelector, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QFileSelector{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QFileSelector) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QFileSelector_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileSelector) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFileSelector_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSelector_timerEvent
func miqt_exec_callback_QFileSelector_timerEvent(self *C.QFileSelector, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFileSelector{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFileSelector) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFileSelector_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileSelector) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFileSelector_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSelector_childEvent
func miqt_exec_callback_QFileSelector_childEvent(self *C.QFileSelector, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFileSelector{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFileSelector) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFileSelector_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileSelector) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFileSelector_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSelector_customEvent
func miqt_exec_callback_QFileSelector_customEvent(self *C.QFileSelector, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFileSelector{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFileSelector) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFileSelector_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFileSelector) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFileSelector_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSelector_connectNotify
func miqt_exec_callback_QFileSelector_connectNotify(self *C.QFileSelector, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFileSelector{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFileSelector) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFileSelector_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFileSelector) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFileSelector_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSelector_disconnectNotify
func miqt_exec_callback_QFileSelector_disconnectNotify(self *C.QFileSelector, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFileSelector{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QFileSelector) Delete() {
	C.QFileSelector_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileSelector) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileSelector) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
