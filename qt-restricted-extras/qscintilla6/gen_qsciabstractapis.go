package qscintilla6

/*

#include "gen_qsciabstractapis.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciAbstractAPIs struct {
	h          *C.QsciAbstractAPIs
	isSubclass bool
	*qt6.QObject
}

func (this *QsciAbstractAPIs) cPointer() *C.QsciAbstractAPIs {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciAbstractAPIs) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciAbstractAPIs constructs the type using only CGO pointers.
func newQsciAbstractAPIs(h *C.QsciAbstractAPIs) *QsciAbstractAPIs {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QsciAbstractAPIs_virtbase(h, &outptr_QObject)

	return &QsciAbstractAPIs{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQsciAbstractAPIs constructs the type using only unsafe pointers.
func UnsafeNewQsciAbstractAPIs(h unsafe.Pointer) *QsciAbstractAPIs {
	return newQsciAbstractAPIs((*C.QsciAbstractAPIs)(h))
}

// NewQsciAbstractAPIs constructs a new QsciAbstractAPIs object.
func NewQsciAbstractAPIs(lexer *QsciLexer) *QsciAbstractAPIs {

	ret := newQsciAbstractAPIs(C.QsciAbstractAPIs_new(lexer.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QsciAbstractAPIs) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciAbstractAPIs_MetaObject(this.h)))
}

func (this *QsciAbstractAPIs) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciAbstractAPIs_Metacast(this.h, param1_Cstring))
}

func QsciAbstractAPIs_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciAbstractAPIs_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciAbstractAPIs) Lexer() *QsciLexer {
	return newQsciLexer(C.QsciAbstractAPIs_Lexer(this.h))
}

func (this *QsciAbstractAPIs) UpdateAutoCompletionList(context []string, list []string) {
	context_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(context))))
	defer C.free(unsafe.Pointer(context_CArray))
	for i := range context {
		context_i_ms := C.struct_miqt_string{}
		context_i_ms.data = C.CString(context[i])
		context_i_ms.len = C.size_t(len(context[i]))
		defer C.free(unsafe.Pointer(context_i_ms.data))
		context_CArray[i] = context_i_ms
	}
	context_ma := C.struct_miqt_array{len: C.size_t(len(context)), data: unsafe.Pointer(context_CArray)}
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
	C.QsciAbstractAPIs_UpdateAutoCompletionList(this.h, context_ma, list_ma)
}

func (this *QsciAbstractAPIs) AutoCompletionSelected(selection string) {
	selection_ms := C.struct_miqt_string{}
	selection_ms.data = C.CString(selection)
	selection_ms.len = C.size_t(len(selection))
	defer C.free(unsafe.Pointer(selection_ms.data))
	C.QsciAbstractAPIs_AutoCompletionSelected(this.h, selection_ms)
}

func (this *QsciAbstractAPIs) CallTips(context []string, commas int, style QsciScintilla__CallTipsStyle, shifts []int) []string {
	context_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(context))))
	defer C.free(unsafe.Pointer(context_CArray))
	for i := range context {
		context_i_ms := C.struct_miqt_string{}
		context_i_ms.data = C.CString(context[i])
		context_i_ms.len = C.size_t(len(context[i]))
		defer C.free(unsafe.Pointer(context_i_ms.data))
		context_CArray[i] = context_i_ms
	}
	context_ma := C.struct_miqt_array{len: C.size_t(len(context)), data: unsafe.Pointer(context_CArray)}
	shifts_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(shifts))))
	defer C.free(unsafe.Pointer(shifts_CArray))
	for i := range shifts {
		shifts_CArray[i] = (C.int)(shifts[i])
	}
	shifts_ma := C.struct_miqt_array{len: C.size_t(len(shifts)), data: unsafe.Pointer(shifts_CArray)}
	var _ma C.struct_miqt_array = C.QsciAbstractAPIs_CallTips(this.h, context_ma, (C.int)(commas), (C.int)(style), shifts_ma)
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

func QsciAbstractAPIs_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAbstractAPIs_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAbstractAPIs_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAbstractAPIs_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QsciAbstractAPIs) OnUpdateAutoCompletionList(slot func(context []string, list []string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciAbstractAPIs_override_virtual_UpdateAutoCompletionList(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAbstractAPIs_UpdateAutoCompletionList
func miqt_exec_callback_QsciAbstractAPIs_UpdateAutoCompletionList(self *C.QsciAbstractAPIs, cb C.intptr_t, context C.struct_miqt_array, list C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(context []string, list []string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var context_ma C.struct_miqt_array = context
	context_ret := make([]string, int(context_ma.len))
	context_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(context_ma.data)) // hey ya
	for i := 0; i < int(context_ma.len); i++ {
		var context_lv_ms C.struct_miqt_string = context_outCast[i]
		context_lv_ret := C.GoStringN(context_lv_ms.data, C.int(int64(context_lv_ms.len)))
		C.free(unsafe.Pointer(context_lv_ms.data))
		context_ret[i] = context_lv_ret
	}
	slotval1 := context_ret

	var list_ma C.struct_miqt_array = list
	list_ret := make([]string, int(list_ma.len))
	list_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(list_ma.data)) // hey ya
	for i := 0; i < int(list_ma.len); i++ {
		var list_lv_ms C.struct_miqt_string = list_outCast[i]
		list_lv_ret := C.GoStringN(list_lv_ms.data, C.int(int64(list_lv_ms.len)))
		C.free(unsafe.Pointer(list_lv_ms.data))
		list_ret[i] = list_lv_ret
	}
	slotval2 := list_ret

	gofunc(slotval1, slotval2)

}

func (this *QsciAbstractAPIs) callVirtualBase_AutoCompletionSelected(selection string) {
	selection_ms := C.struct_miqt_string{}
	selection_ms.data = C.CString(selection)
	selection_ms.len = C.size_t(len(selection))
	defer C.free(unsafe.Pointer(selection_ms.data))

	C.QsciAbstractAPIs_virtualbase_AutoCompletionSelected(unsafe.Pointer(this.h), selection_ms)

}
func (this *QsciAbstractAPIs) OnAutoCompletionSelected(slot func(super func(selection string), selection string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciAbstractAPIs_override_virtual_AutoCompletionSelected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAbstractAPIs_AutoCompletionSelected
func miqt_exec_callback_QsciAbstractAPIs_AutoCompletionSelected(self *C.QsciAbstractAPIs, cb C.intptr_t, selection C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection string), selection string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var selection_ms C.struct_miqt_string = selection
	selection_ret := C.GoStringN(selection_ms.data, C.int(int64(selection_ms.len)))
	C.free(unsafe.Pointer(selection_ms.data))
	slotval1 := selection_ret

	gofunc((&QsciAbstractAPIs{h: self}).callVirtualBase_AutoCompletionSelected, slotval1)

}
func (this *QsciAbstractAPIs) OnCallTips(slot func(context []string, commas int, style QsciScintilla__CallTipsStyle, shifts []int) []string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciAbstractAPIs_override_virtual_CallTips(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAbstractAPIs_CallTips
func miqt_exec_callback_QsciAbstractAPIs_CallTips(self *C.QsciAbstractAPIs, cb C.intptr_t, context C.struct_miqt_array, commas C.int, style C.int, shifts C.struct_miqt_array) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(context []string, commas int, style QsciScintilla__CallTipsStyle, shifts []int) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var context_ma C.struct_miqt_array = context
	context_ret := make([]string, int(context_ma.len))
	context_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(context_ma.data)) // hey ya
	for i := 0; i < int(context_ma.len); i++ {
		var context_lv_ms C.struct_miqt_string = context_outCast[i]
		context_lv_ret := C.GoStringN(context_lv_ms.data, C.int(int64(context_lv_ms.len)))
		C.free(unsafe.Pointer(context_lv_ms.data))
		context_ret[i] = context_lv_ret
	}
	slotval1 := context_ret

	slotval2 := (int)(commas)

	slotval3 := (QsciScintilla__CallTipsStyle)(style)

	var shifts_ma C.struct_miqt_array = shifts
	shifts_ret := make([]int, int(shifts_ma.len))
	shifts_outCast := (*[0xffff]C.int)(unsafe.Pointer(shifts_ma.data)) // hey ya
	for i := 0; i < int(shifts_ma.len); i++ {
		shifts_ret[i] = (int)(shifts_outCast[i])
	}
	slotval4 := shifts_ret

	virtualReturn := gofunc(slotval1, slotval2, slotval3, slotval4)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QsciAbstractAPIs) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QsciAbstractAPIs_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciAbstractAPIs) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciAbstractAPIs_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAbstractAPIs_Event
func miqt_exec_callback_QsciAbstractAPIs_Event(self *C.QsciAbstractAPIs, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciAbstractAPIs{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciAbstractAPIs) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QsciAbstractAPIs_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciAbstractAPIs) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciAbstractAPIs_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAbstractAPIs_EventFilter
func miqt_exec_callback_QsciAbstractAPIs_EventFilter(self *C.QsciAbstractAPIs, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciAbstractAPIs{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciAbstractAPIs) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QsciAbstractAPIs_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciAbstractAPIs) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciAbstractAPIs_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAbstractAPIs_TimerEvent
func miqt_exec_callback_QsciAbstractAPIs_TimerEvent(self *C.QsciAbstractAPIs, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciAbstractAPIs{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciAbstractAPIs) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QsciAbstractAPIs_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciAbstractAPIs) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciAbstractAPIs_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAbstractAPIs_ChildEvent
func miqt_exec_callback_QsciAbstractAPIs_ChildEvent(self *C.QsciAbstractAPIs, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciAbstractAPIs{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciAbstractAPIs) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QsciAbstractAPIs_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciAbstractAPIs) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciAbstractAPIs_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAbstractAPIs_CustomEvent
func miqt_exec_callback_QsciAbstractAPIs_CustomEvent(self *C.QsciAbstractAPIs, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciAbstractAPIs{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciAbstractAPIs) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QsciAbstractAPIs_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciAbstractAPIs) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciAbstractAPIs_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAbstractAPIs_ConnectNotify
func miqt_exec_callback_QsciAbstractAPIs_ConnectNotify(self *C.QsciAbstractAPIs, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciAbstractAPIs{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciAbstractAPIs) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QsciAbstractAPIs_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciAbstractAPIs) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciAbstractAPIs_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAbstractAPIs_DisconnectNotify
func miqt_exec_callback_QsciAbstractAPIs_DisconnectNotify(self *C.QsciAbstractAPIs, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciAbstractAPIs{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciAbstractAPIs) Delete() {
	C.QsciAbstractAPIs_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciAbstractAPIs) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciAbstractAPIs) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
