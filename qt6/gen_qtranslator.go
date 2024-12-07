package qt6

/*

#include "gen_qtranslator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTranslator struct {
	h          *C.QTranslator
	isSubclass bool
	*QObject
}

func (this *QTranslator) cPointer() *C.QTranslator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTranslator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTranslator constructs the type using only CGO pointers.
func newQTranslator(h *C.QTranslator, h_QObject *C.QObject) *QTranslator {
	if h == nil {
		return nil
	}
	return &QTranslator{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQTranslator constructs the type using only unsafe pointers.
func UnsafeNewQTranslator(h unsafe.Pointer, h_QObject unsafe.Pointer) *QTranslator {
	if h == nil {
		return nil
	}

	return &QTranslator{h: (*C.QTranslator)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQTranslator constructs a new QTranslator object.
func NewQTranslator() *QTranslator {
	var outptr_QTranslator *C.QTranslator = nil
	var outptr_QObject *C.QObject = nil

	C.QTranslator_new(&outptr_QTranslator, &outptr_QObject)
	ret := newQTranslator(outptr_QTranslator, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQTranslator2 constructs a new QTranslator object.
func NewQTranslator2(parent *QObject) *QTranslator {
	var outptr_QTranslator *C.QTranslator = nil
	var outptr_QObject *C.QObject = nil

	C.QTranslator_new2(parent.cPointer(), &outptr_QTranslator, &outptr_QObject)
	ret := newQTranslator(outptr_QTranslator, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QTranslator) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTranslator_MetaObject(this.h)))
}

func (this *QTranslator) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTranslator_Metacast(this.h, param1_Cstring))
}

func QTranslator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTranslator_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTranslator) Translate(context string, sourceText string, disambiguation string, n int) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QTranslator_Translate(this.h, context_Cstring, sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTranslator) IsEmpty() bool {
	return (bool)(C.QTranslator_IsEmpty(this.h))
}

func (this *QTranslator) Language() string {
	var _ms C.struct_miqt_string = C.QTranslator_Language(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTranslator) FilePath() string {
	var _ms C.struct_miqt_string = C.QTranslator_FilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTranslator) Load(filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QTranslator_Load(this.h, filename_ms))
}

func (this *QTranslator) Load2(locale *QLocale, filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QTranslator_Load2(this.h, locale.cPointer(), filename_ms))
}

func (this *QTranslator) Load3(data *byte, lenVal int) bool {
	return (bool)(C.QTranslator_Load3(this.h, (*C.uchar)(unsafe.Pointer(data)), (C.int)(lenVal)))
}

func QTranslator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTranslator_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTranslator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTranslator_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTranslator) Load22(filename string, directory string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	return (bool)(C.QTranslator_Load22(this.h, filename_ms, directory_ms))
}

func (this *QTranslator) Load32(filename string, directory string, search_delimiters string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	search_delimiters_ms := C.struct_miqt_string{}
	search_delimiters_ms.data = C.CString(search_delimiters)
	search_delimiters_ms.len = C.size_t(len(search_delimiters))
	defer C.free(unsafe.Pointer(search_delimiters_ms.data))
	return (bool)(C.QTranslator_Load32(this.h, filename_ms, directory_ms, search_delimiters_ms))
}

func (this *QTranslator) Load4(filename string, directory string, search_delimiters string, suffix string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	search_delimiters_ms := C.struct_miqt_string{}
	search_delimiters_ms.data = C.CString(search_delimiters)
	search_delimiters_ms.len = C.size_t(len(search_delimiters))
	defer C.free(unsafe.Pointer(search_delimiters_ms.data))
	suffix_ms := C.struct_miqt_string{}
	suffix_ms.data = C.CString(suffix)
	suffix_ms.len = C.size_t(len(suffix))
	defer C.free(unsafe.Pointer(suffix_ms.data))
	return (bool)(C.QTranslator_Load4(this.h, filename_ms, directory_ms, search_delimiters_ms, suffix_ms))
}

func (this *QTranslator) Load33(locale *QLocale, filename string, prefix string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	return (bool)(C.QTranslator_Load33(this.h, locale.cPointer(), filename_ms, prefix_ms))
}

func (this *QTranslator) Load42(locale *QLocale, filename string, prefix string, directory string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	return (bool)(C.QTranslator_Load42(this.h, locale.cPointer(), filename_ms, prefix_ms, directory_ms))
}

func (this *QTranslator) Load5(locale *QLocale, filename string, prefix string, directory string, suffix string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	suffix_ms := C.struct_miqt_string{}
	suffix_ms.data = C.CString(suffix)
	suffix_ms.len = C.size_t(len(suffix))
	defer C.free(unsafe.Pointer(suffix_ms.data))
	return (bool)(C.QTranslator_Load5(this.h, locale.cPointer(), filename_ms, prefix_ms, directory_ms, suffix_ms))
}

func (this *QTranslator) Load34(data *byte, lenVal int, directory string) bool {
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	return (bool)(C.QTranslator_Load34(this.h, (*C.uchar)(unsafe.Pointer(data)), (C.int)(lenVal), directory_ms))
}

func (this *QTranslator) callVirtualBase_Translate(context string, sourceText string, disambiguation string, n int) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))

	var _ms C.struct_miqt_string = C.QTranslator_virtualbase_Translate(unsafe.Pointer(this.h), context_Cstring, sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QTranslator) OnTranslate(slot func(super func(context string, sourceText string, disambiguation string, n int) string, context string, sourceText string, disambiguation string, n int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTranslator_override_virtual_Translate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTranslator_Translate
func miqt_exec_callback_QTranslator_Translate(self *C.QTranslator, cb C.intptr_t, context *C.const_char, sourceText *C.const_char, disambiguation *C.const_char, n C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(context string, sourceText string, disambiguation string, n int) string, context string, sourceText string, disambiguation string, n int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	context_ret := context
	slotval1 := C.GoString(context_ret)

	sourceText_ret := sourceText
	slotval2 := C.GoString(sourceText_ret)

	disambiguation_ret := disambiguation
	slotval3 := C.GoString(disambiguation_ret)

	slotval4 := (int)(n)

	virtualReturn := gofunc((&QTranslator{h: self}).callVirtualBase_Translate, slotval1, slotval2, slotval3, slotval4)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QTranslator) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QTranslator_virtualbase_IsEmpty(unsafe.Pointer(this.h)))

}
func (this *QTranslator) OnIsEmpty(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTranslator_override_virtual_IsEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTranslator_IsEmpty
func miqt_exec_callback_QTranslator_IsEmpty(self *C.QTranslator, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTranslator{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QTranslator) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTranslator_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTranslator) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTranslator_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTranslator_Event
func miqt_exec_callback_QTranslator_Event(self *C.QTranslator, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTranslator{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTranslator) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTranslator_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTranslator) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTranslator_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTranslator_EventFilter
func miqt_exec_callback_QTranslator_EventFilter(self *C.QTranslator, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTranslator{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTranslator) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTranslator_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTranslator) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTranslator_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTranslator_TimerEvent
func miqt_exec_callback_QTranslator_TimerEvent(self *C.QTranslator, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QTranslator{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTranslator) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTranslator_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTranslator) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTranslator_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTranslator_ChildEvent
func miqt_exec_callback_QTranslator_ChildEvent(self *C.QTranslator, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QTranslator{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTranslator) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTranslator_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTranslator) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTranslator_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTranslator_CustomEvent
func miqt_exec_callback_QTranslator_CustomEvent(self *C.QTranslator, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QTranslator{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTranslator) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTranslator_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTranslator) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTranslator_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTranslator_ConnectNotify
func miqt_exec_callback_QTranslator_ConnectNotify(self *C.QTranslator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTranslator{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTranslator) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTranslator_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTranslator) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTranslator_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTranslator_DisconnectNotify
func miqt_exec_callback_QTranslator_DisconnectNotify(self *C.QTranslator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTranslator{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTranslator) Delete() {
	C.QTranslator_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTranslator) GoGC() {
	runtime.SetFinalizer(this, func(this *QTranslator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
