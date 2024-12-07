package qt6

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
	h          *C.QFileSelector
	isSubclass bool
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
func newQFileSelector(h *C.QFileSelector, h_QObject *C.QObject) *QFileSelector {
	if h == nil {
		return nil
	}
	return &QFileSelector{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQFileSelector constructs the type using only unsafe pointers.
func UnsafeNewQFileSelector(h unsafe.Pointer, h_QObject unsafe.Pointer) *QFileSelector {
	if h == nil {
		return nil
	}

	return &QFileSelector{h: (*C.QFileSelector)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQFileSelector constructs a new QFileSelector object.
func NewQFileSelector() *QFileSelector {
	var outptr_QFileSelector *C.QFileSelector = nil
	var outptr_QObject *C.QObject = nil

	C.QFileSelector_new(&outptr_QFileSelector, &outptr_QObject)
	ret := newQFileSelector(outptr_QFileSelector, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQFileSelector2 constructs a new QFileSelector object.
func NewQFileSelector2(parent *QObject) *QFileSelector {
	var outptr_QFileSelector *C.QFileSelector = nil
	var outptr_QObject *C.QObject = nil

	C.QFileSelector_new2(parent.cPointer(), &outptr_QFileSelector, &outptr_QObject)
	ret := newQFileSelector(outptr_QFileSelector, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QFileSelector) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QFileSelector_MetaObject(this.h)))
}

func (this *QFileSelector) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFileSelector_Metacast(this.h, param1_Cstring))
}

func QFileSelector_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFileSelector_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileSelector) Select(filePath string) string {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	var _ms C.struct_miqt_string = C.QFileSelector_Select(this.h, filePath_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileSelector) SelectWithFilePath(filePath *QUrl) *QUrl {
	_ret := C.QFileSelector_SelectWithFilePath(this.h, filePath.cPointer())
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSelector) ExtraSelectors() []string {
	var _ma C.struct_miqt_array = C.QFileSelector_ExtraSelectors(this.h)
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
	C.QFileSelector_SetExtraSelectors(this.h, list_ma)
}

func (this *QFileSelector) AllSelectors() []string {
	var _ma C.struct_miqt_array = C.QFileSelector_AllSelectors(this.h)
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
	var _ms C.struct_miqt_string = C.QFileSelector_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileSelector_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileSelector_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileSelector) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QFileSelector_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QFileSelector) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileSelector_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSelector_Event
func miqt_exec_callback_QFileSelector_Event(self *C.QFileSelector, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QFileSelector{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFileSelector) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QFileSelector_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QFileSelector) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileSelector_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSelector_EventFilter
func miqt_exec_callback_QFileSelector_EventFilter(self *C.QFileSelector, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QFileSelector{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QFileSelector) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QFileSelector_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileSelector) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileSelector_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSelector_TimerEvent
func miqt_exec_callback_QFileSelector_TimerEvent(self *C.QFileSelector, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QFileSelector{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFileSelector) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFileSelector_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileSelector) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileSelector_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSelector_ChildEvent
func miqt_exec_callback_QFileSelector_ChildEvent(self *C.QFileSelector, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QFileSelector{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFileSelector) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFileSelector_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileSelector) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileSelector_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSelector_CustomEvent
func miqt_exec_callback_QFileSelector_CustomEvent(self *C.QFileSelector, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QFileSelector{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFileSelector) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFileSelector_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFileSelector) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileSelector_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSelector_ConnectNotify
func miqt_exec_callback_QFileSelector_ConnectNotify(self *C.QFileSelector, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QFileSelector{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFileSelector) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFileSelector_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFileSelector) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileSelector_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSelector_DisconnectNotify
func miqt_exec_callback_QFileSelector_DisconnectNotify(self *C.QFileSelector, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QFileSelector{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QFileSelector) Delete() {
	C.QFileSelector_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileSelector) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileSelector) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
