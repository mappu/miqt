package qt

/*

#include "gen_qvalidator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QValidator__State int

const (
	QValidator__Invalid      QValidator__State = 0
	QValidator__Intermediate QValidator__State = 1
	QValidator__Acceptable   QValidator__State = 2
)

type QDoubleValidator__Notation int

const (
	QDoubleValidator__StandardNotation   QDoubleValidator__Notation = 0
	QDoubleValidator__ScientificNotation QDoubleValidator__Notation = 1
)

type QValidator struct {
	h *C.QValidator
	*QObject
}

func (this *QValidator) cPointer() *C.QValidator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QValidator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQValidator constructs the type using only CGO pointers.
func newQValidator(h *C.QValidator) *QValidator {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QValidator_virtbase(h, &outptr_QObject)

	return &QValidator{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQValidator constructs the type using only unsafe pointers.
func UnsafeNewQValidator(h unsafe.Pointer) *QValidator {
	return newQValidator((*C.QValidator)(h))
}

// NewQValidator constructs a new QValidator object.
func NewQValidator() *QValidator {

	return newQValidator(C.QValidator_new())
}

// NewQValidator2 constructs a new QValidator object.
func NewQValidator2(parent *QObject) *QValidator {

	return newQValidator(C.QValidator_new2(parent.cPointer()))
}

func (this *QValidator) MetaObject() *QMetaObject {
	return newQMetaObject(C.QValidator_metaObject(this.h))
}

func (this *QValidator) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QValidator_metacast(this.h, param1_Cstring))
}

func QValidator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QValidator_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QValidator_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QValidator_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QValidator) SetLocale(locale *QLocale) {
	C.QValidator_setLocale(this.h, locale.cPointer())
}

func (this *QValidator) Locale() *QLocale {
	_goptr := newQLocale(C.QValidator_locale(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QValidator) Validate(param1 string, param2 *int) QValidator__State {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (QValidator__State)(C.QValidator_validate(this.h, param1_ms, (*C.int)(unsafe.Pointer(param2))))
}

func (this *QValidator) Fixup(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QValidator_fixup(this.h, param1_ms)
}

func (this *QValidator) Changed() {
	C.QValidator_changed(this.h)
}
func (this *QValidator) OnChanged(slot func()) {
	C.QValidator_connect_changed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QValidator_changed
func miqt_exec_callback_QValidator_changed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QValidator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QValidator_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QValidator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QValidator_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QValidator_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QValidator_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QValidator_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QValidator_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QValidator that was directly constructed.
func (this *QValidator) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QValidator_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QValidator that was directly constructed.
func (this *QValidator) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QValidator_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QValidator that was directly constructed.
func (this *QValidator) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QValidator_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QValidator that was directly constructed.
func (this *QValidator) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QValidator_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QValidator) OnValidate(slot func(param1 string, param2 *int) QValidator__State) {
	ok := C.QValidator_override_virtual_validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValidator_validate
func miqt_exec_callback_QValidator_validate(self *C.QValidator, cb C.intptr_t, param1 C.struct_miqt_string, param2 *C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string, param2 *int) QValidator__State)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret
	slotval2 := (*int)(unsafe.Pointer(param2))

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QValidator) callVirtualBase_Fixup(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	C.QValidator_virtualbase_fixup(unsafe.Pointer(this.h), param1_ms)

}
func (this *QValidator) OnFixup(slot func(super func(param1 string), param1 string)) {
	ok := C.QValidator_override_virtual_fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValidator_fixup
func miqt_exec_callback_QValidator_fixup(self *C.QValidator, cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string), param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc((&QValidator{h: self}).callVirtualBase_Fixup, slotval1)

}

func (this *QValidator) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QValidator_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QValidator) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QValidator_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValidator_event
func miqt_exec_callback_QValidator_event(self *C.QValidator, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QValidator{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QValidator) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QValidator_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QValidator) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QValidator_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValidator_eventFilter
func miqt_exec_callback_QValidator_eventFilter(self *C.QValidator, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QValidator{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QValidator) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QValidator_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QValidator) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QValidator_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValidator_timerEvent
func miqt_exec_callback_QValidator_timerEvent(self *C.QValidator, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QValidator{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QValidator) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QValidator_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QValidator) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QValidator_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValidator_childEvent
func miqt_exec_callback_QValidator_childEvent(self *C.QValidator, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QValidator{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QValidator) callVirtualBase_CustomEvent(event *QEvent) {

	C.QValidator_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QValidator) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QValidator_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValidator_customEvent
func miqt_exec_callback_QValidator_customEvent(self *C.QValidator, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QValidator{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QValidator) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QValidator_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QValidator) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QValidator_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValidator_connectNotify
func miqt_exec_callback_QValidator_connectNotify(self *C.QValidator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QValidator{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QValidator) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QValidator_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QValidator) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QValidator_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QValidator_disconnectNotify
func miqt_exec_callback_QValidator_disconnectNotify(self *C.QValidator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QValidator{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QValidator) Delete() {
	C.QValidator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QValidator) GoGC() {
	runtime.SetFinalizer(this, func(this *QValidator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QIntValidator struct {
	h *C.QIntValidator
	*QValidator
}

func (this *QIntValidator) cPointer() *C.QIntValidator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QIntValidator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQIntValidator constructs the type using only CGO pointers.
func newQIntValidator(h *C.QIntValidator) *QIntValidator {
	if h == nil {
		return nil
	}
	var outptr_QValidator *C.QValidator = nil
	C.QIntValidator_virtbase(h, &outptr_QValidator)

	return &QIntValidator{h: h,
		QValidator: newQValidator(outptr_QValidator)}
}

// UnsafeNewQIntValidator constructs the type using only unsafe pointers.
func UnsafeNewQIntValidator(h unsafe.Pointer) *QIntValidator {
	return newQIntValidator((*C.QIntValidator)(h))
}

// NewQIntValidator constructs a new QIntValidator object.
func NewQIntValidator() *QIntValidator {

	return newQIntValidator(C.QIntValidator_new())
}

// NewQIntValidator2 constructs a new QIntValidator object.
func NewQIntValidator2(bottom int, top int) *QIntValidator {

	return newQIntValidator(C.QIntValidator_new2((C.int)(bottom), (C.int)(top)))
}

// NewQIntValidator3 constructs a new QIntValidator object.
func NewQIntValidator3(parent *QObject) *QIntValidator {

	return newQIntValidator(C.QIntValidator_new3(parent.cPointer()))
}

// NewQIntValidator4 constructs a new QIntValidator object.
func NewQIntValidator4(bottom int, top int, parent *QObject) *QIntValidator {

	return newQIntValidator(C.QIntValidator_new4((C.int)(bottom), (C.int)(top), parent.cPointer()))
}

func (this *QIntValidator) MetaObject() *QMetaObject {
	return newQMetaObject(C.QIntValidator_metaObject(this.h))
}

func (this *QIntValidator) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QIntValidator_metacast(this.h, param1_Cstring))
}

func QIntValidator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QIntValidator_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIntValidator_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QIntValidator_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIntValidator) Validate(param1 string, param2 *int) QValidator__State {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (QValidator__State)(C.QIntValidator_validate(this.h, param1_ms, (*C.int)(unsafe.Pointer(param2))))
}

func (this *QIntValidator) Fixup(input string) {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	C.QIntValidator_fixup(this.h, input_ms)
}

func (this *QIntValidator) SetBottom(bottom int) {
	C.QIntValidator_setBottom(this.h, (C.int)(bottom))
}

func (this *QIntValidator) SetTop(top int) {
	C.QIntValidator_setTop(this.h, (C.int)(top))
}

func (this *QIntValidator) SetRange(bottom int, top int) {
	C.QIntValidator_setRange(this.h, (C.int)(bottom), (C.int)(top))
}

func (this *QIntValidator) Bottom() int {
	return (int)(C.QIntValidator_bottom(this.h))
}

func (this *QIntValidator) Top() int {
	return (int)(C.QIntValidator_top(this.h))
}

func (this *QIntValidator) BottomChanged(bottom int) {
	C.QIntValidator_bottomChanged(this.h, (C.int)(bottom))
}
func (this *QIntValidator) OnBottomChanged(slot func(bottom int)) {
	C.QIntValidator_connect_bottomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIntValidator_bottomChanged
func miqt_exec_callback_QIntValidator_bottomChanged(cb C.intptr_t, bottom C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(bottom int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(bottom)

	gofunc(slotval1)
}

func (this *QIntValidator) TopChanged(top int) {
	C.QIntValidator_topChanged(this.h, (C.int)(top))
}
func (this *QIntValidator) OnTopChanged(slot func(top int)) {
	C.QIntValidator_connect_topChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIntValidator_topChanged
func miqt_exec_callback_QIntValidator_topChanged(cb C.intptr_t, top C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(top int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(top)

	gofunc(slotval1)
}

func QIntValidator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIntValidator_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIntValidator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIntValidator_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIntValidator_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIntValidator_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIntValidator_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIntValidator_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QIntValidator that was directly constructed.
func (this *QIntValidator) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QIntValidator_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QIntValidator that was directly constructed.
func (this *QIntValidator) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QIntValidator_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QIntValidator that was directly constructed.
func (this *QIntValidator) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QIntValidator_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QIntValidator that was directly constructed.
func (this *QIntValidator) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QIntValidator_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QIntValidator) callVirtualBase_Validate(param1 string, param2 *int) QValidator__State {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	return (QValidator__State)(C.QIntValidator_virtualbase_validate(unsafe.Pointer(this.h), param1_ms, (*C.int)(unsafe.Pointer(param2))))

}
func (this *QIntValidator) OnValidate(slot func(super func(param1 string, param2 *int) QValidator__State, param1 string, param2 *int) QValidator__State) {
	ok := C.QIntValidator_override_virtual_validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIntValidator_validate
func miqt_exec_callback_QIntValidator_validate(self *C.QIntValidator, cb C.intptr_t, param1 C.struct_miqt_string, param2 *C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string, param2 *int) QValidator__State, param1 string, param2 *int) QValidator__State)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret
	slotval2 := (*int)(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QIntValidator{h: self}).callVirtualBase_Validate, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QIntValidator) callVirtualBase_Fixup(input string) {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	C.QIntValidator_virtualbase_fixup(unsafe.Pointer(this.h), input_ms)

}
func (this *QIntValidator) OnFixup(slot func(super func(input string), input string)) {
	ok := C.QIntValidator_override_virtual_fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIntValidator_fixup
func miqt_exec_callback_QIntValidator_fixup(self *C.QIntValidator, cb C.intptr_t, input C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string), input string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret

	gofunc((&QIntValidator{h: self}).callVirtualBase_Fixup, slotval1)

}

func (this *QIntValidator) callVirtualBase_SetRange(bottom int, top int) {

	C.QIntValidator_virtualbase_setRange(unsafe.Pointer(this.h), (C.int)(bottom), (C.int)(top))

}
func (this *QIntValidator) OnSetRange(slot func(super func(bottom int, top int), bottom int, top int)) {
	ok := C.QIntValidator_override_virtual_setRange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIntValidator_setRange
func miqt_exec_callback_QIntValidator_setRange(self *C.QIntValidator, cb C.intptr_t, bottom C.int, top C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(bottom int, top int), bottom int, top int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(bottom)

	slotval2 := (int)(top)

	gofunc((&QIntValidator{h: self}).callVirtualBase_SetRange, slotval1, slotval2)

}

func (this *QIntValidator) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QIntValidator_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QIntValidator) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QIntValidator_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIntValidator_event
func miqt_exec_callback_QIntValidator_event(self *C.QIntValidator, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QIntValidator{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QIntValidator) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QIntValidator_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QIntValidator) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QIntValidator_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIntValidator_eventFilter
func miqt_exec_callback_QIntValidator_eventFilter(self *C.QIntValidator, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QIntValidator{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QIntValidator) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QIntValidator_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIntValidator) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QIntValidator_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIntValidator_timerEvent
func miqt_exec_callback_QIntValidator_timerEvent(self *C.QIntValidator, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QIntValidator{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QIntValidator) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QIntValidator_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIntValidator) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QIntValidator_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIntValidator_childEvent
func miqt_exec_callback_QIntValidator_childEvent(self *C.QIntValidator, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QIntValidator{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QIntValidator) callVirtualBase_CustomEvent(event *QEvent) {

	C.QIntValidator_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIntValidator) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QIntValidator_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIntValidator_customEvent
func miqt_exec_callback_QIntValidator_customEvent(self *C.QIntValidator, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QIntValidator{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QIntValidator) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QIntValidator_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QIntValidator) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QIntValidator_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIntValidator_connectNotify
func miqt_exec_callback_QIntValidator_connectNotify(self *C.QIntValidator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QIntValidator{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QIntValidator) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QIntValidator_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QIntValidator) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QIntValidator_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIntValidator_disconnectNotify
func miqt_exec_callback_QIntValidator_disconnectNotify(self *C.QIntValidator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QIntValidator{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QIntValidator) Delete() {
	C.QIntValidator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIntValidator) GoGC() {
	runtime.SetFinalizer(this, func(this *QIntValidator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDoubleValidator struct {
	h *C.QDoubleValidator
	*QValidator
}

func (this *QDoubleValidator) cPointer() *C.QDoubleValidator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDoubleValidator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDoubleValidator constructs the type using only CGO pointers.
func newQDoubleValidator(h *C.QDoubleValidator) *QDoubleValidator {
	if h == nil {
		return nil
	}
	var outptr_QValidator *C.QValidator = nil
	C.QDoubleValidator_virtbase(h, &outptr_QValidator)

	return &QDoubleValidator{h: h,
		QValidator: newQValidator(outptr_QValidator)}
}

// UnsafeNewQDoubleValidator constructs the type using only unsafe pointers.
func UnsafeNewQDoubleValidator(h unsafe.Pointer) *QDoubleValidator {
	return newQDoubleValidator((*C.QDoubleValidator)(h))
}

// NewQDoubleValidator constructs a new QDoubleValidator object.
func NewQDoubleValidator() *QDoubleValidator {

	return newQDoubleValidator(C.QDoubleValidator_new())
}

// NewQDoubleValidator2 constructs a new QDoubleValidator object.
func NewQDoubleValidator2(bottom float64, top float64, decimals int) *QDoubleValidator {

	return newQDoubleValidator(C.QDoubleValidator_new2((C.double)(bottom), (C.double)(top), (C.int)(decimals)))
}

// NewQDoubleValidator3 constructs a new QDoubleValidator object.
func NewQDoubleValidator3(parent *QObject) *QDoubleValidator {

	return newQDoubleValidator(C.QDoubleValidator_new3(parent.cPointer()))
}

// NewQDoubleValidator4 constructs a new QDoubleValidator object.
func NewQDoubleValidator4(bottom float64, top float64, decimals int, parent *QObject) *QDoubleValidator {

	return newQDoubleValidator(C.QDoubleValidator_new4((C.double)(bottom), (C.double)(top), (C.int)(decimals), parent.cPointer()))
}

func (this *QDoubleValidator) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDoubleValidator_metaObject(this.h))
}

func (this *QDoubleValidator) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDoubleValidator_metacast(this.h, param1_Cstring))
}

func QDoubleValidator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleValidator_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleValidator_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleValidator_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleValidator) Validate(param1 string, param2 *int) QValidator__State {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (QValidator__State)(C.QDoubleValidator_validate(this.h, param1_ms, (*C.int)(unsafe.Pointer(param2))))
}

func (this *QDoubleValidator) SetRange(bottom float64, top float64, decimals int) {
	C.QDoubleValidator_setRange(this.h, (C.double)(bottom), (C.double)(top), (C.int)(decimals))
}

func (this *QDoubleValidator) SetBottom(bottom float64) {
	C.QDoubleValidator_setBottom(this.h, (C.double)(bottom))
}

func (this *QDoubleValidator) SetTop(top float64) {
	C.QDoubleValidator_setTop(this.h, (C.double)(top))
}

func (this *QDoubleValidator) SetDecimals(decimals int) {
	C.QDoubleValidator_setDecimals(this.h, (C.int)(decimals))
}

func (this *QDoubleValidator) SetNotation(notation QDoubleValidator__Notation) {
	C.QDoubleValidator_setNotation(this.h, (C.int)(notation))
}

func (this *QDoubleValidator) Bottom() float64 {
	return (float64)(C.QDoubleValidator_bottom(this.h))
}

func (this *QDoubleValidator) Top() float64 {
	return (float64)(C.QDoubleValidator_top(this.h))
}

func (this *QDoubleValidator) Decimals() int {
	return (int)(C.QDoubleValidator_decimals(this.h))
}

func (this *QDoubleValidator) Notation() QDoubleValidator__Notation {
	return (QDoubleValidator__Notation)(C.QDoubleValidator_notation(this.h))
}

func (this *QDoubleValidator) BottomChanged(bottom float64) {
	C.QDoubleValidator_bottomChanged(this.h, (C.double)(bottom))
}
func (this *QDoubleValidator) OnBottomChanged(slot func(bottom float64)) {
	C.QDoubleValidator_connect_bottomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleValidator_bottomChanged
func miqt_exec_callback_QDoubleValidator_bottomChanged(cb C.intptr_t, bottom C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(bottom float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(bottom)

	gofunc(slotval1)
}

func (this *QDoubleValidator) TopChanged(top float64) {
	C.QDoubleValidator_topChanged(this.h, (C.double)(top))
}
func (this *QDoubleValidator) OnTopChanged(slot func(top float64)) {
	C.QDoubleValidator_connect_topChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleValidator_topChanged
func miqt_exec_callback_QDoubleValidator_topChanged(cb C.intptr_t, top C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(top float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(top)

	gofunc(slotval1)
}

func (this *QDoubleValidator) DecimalsChanged(decimals int) {
	C.QDoubleValidator_decimalsChanged(this.h, (C.int)(decimals))
}
func (this *QDoubleValidator) OnDecimalsChanged(slot func(decimals int)) {
	C.QDoubleValidator_connect_decimalsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleValidator_decimalsChanged
func miqt_exec_callback_QDoubleValidator_decimalsChanged(cb C.intptr_t, decimals C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(decimals int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(decimals)

	gofunc(slotval1)
}

func (this *QDoubleValidator) NotationChanged(notation QDoubleValidator__Notation) {
	C.QDoubleValidator_notationChanged(this.h, (C.int)(notation))
}
func (this *QDoubleValidator) OnNotationChanged(slot func(notation QDoubleValidator__Notation)) {
	C.QDoubleValidator_connect_notationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleValidator_notationChanged
func miqt_exec_callback_QDoubleValidator_notationChanged(cb C.intptr_t, notation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(notation QDoubleValidator__Notation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDoubleValidator__Notation)(notation)

	gofunc(slotval1)
}

func QDoubleValidator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleValidator_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleValidator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleValidator_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleValidator_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleValidator_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleValidator_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleValidator_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QDoubleValidator that was directly constructed.
func (this *QDoubleValidator) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QDoubleValidator_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDoubleValidator that was directly constructed.
func (this *QDoubleValidator) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDoubleValidator_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDoubleValidator that was directly constructed.
func (this *QDoubleValidator) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDoubleValidator_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDoubleValidator that was directly constructed.
func (this *QDoubleValidator) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDoubleValidator_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDoubleValidator) callVirtualBase_Validate(param1 string, param2 *int) QValidator__State {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	return (QValidator__State)(C.QDoubleValidator_virtualbase_validate(unsafe.Pointer(this.h), param1_ms, (*C.int)(unsafe.Pointer(param2))))

}
func (this *QDoubleValidator) OnValidate(slot func(super func(param1 string, param2 *int) QValidator__State, param1 string, param2 *int) QValidator__State) {
	ok := C.QDoubleValidator_override_virtual_validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleValidator_validate
func miqt_exec_callback_QDoubleValidator_validate(self *C.QDoubleValidator, cb C.intptr_t, param1 C.struct_miqt_string, param2 *C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string, param2 *int) QValidator__State, param1 string, param2 *int) QValidator__State)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret
	slotval2 := (*int)(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QDoubleValidator{h: self}).callVirtualBase_Validate, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QDoubleValidator) callVirtualBase_SetRange(bottom float64, top float64, decimals int) {

	C.QDoubleValidator_virtualbase_setRange(unsafe.Pointer(this.h), (C.double)(bottom), (C.double)(top), (C.int)(decimals))

}
func (this *QDoubleValidator) OnSetRange(slot func(super func(bottom float64, top float64, decimals int), bottom float64, top float64, decimals int)) {
	ok := C.QDoubleValidator_override_virtual_setRange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleValidator_setRange
func miqt_exec_callback_QDoubleValidator_setRange(self *C.QDoubleValidator, cb C.intptr_t, bottom C.double, top C.double, decimals C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(bottom float64, top float64, decimals int), bottom float64, top float64, decimals int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(bottom)

	slotval2 := (float64)(top)

	slotval3 := (int)(decimals)

	gofunc((&QDoubleValidator{h: self}).callVirtualBase_SetRange, slotval1, slotval2, slotval3)

}

func (this *QDoubleValidator) callVirtualBase_Fixup(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	C.QDoubleValidator_virtualbase_fixup(unsafe.Pointer(this.h), param1_ms)

}
func (this *QDoubleValidator) OnFixup(slot func(super func(param1 string), param1 string)) {
	ok := C.QDoubleValidator_override_virtual_fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleValidator_fixup
func miqt_exec_callback_QDoubleValidator_fixup(self *C.QDoubleValidator, cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string), param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc((&QDoubleValidator{h: self}).callVirtualBase_Fixup, slotval1)

}

func (this *QDoubleValidator) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDoubleValidator_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDoubleValidator) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDoubleValidator_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleValidator_event
func miqt_exec_callback_QDoubleValidator_event(self *C.QDoubleValidator, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDoubleValidator{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDoubleValidator) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QDoubleValidator_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDoubleValidator) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDoubleValidator_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleValidator_eventFilter
func miqt_exec_callback_QDoubleValidator_eventFilter(self *C.QDoubleValidator, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QDoubleValidator{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDoubleValidator) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDoubleValidator_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleValidator) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDoubleValidator_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleValidator_timerEvent
func miqt_exec_callback_QDoubleValidator_timerEvent(self *C.QDoubleValidator, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDoubleValidator{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDoubleValidator) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDoubleValidator_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleValidator) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDoubleValidator_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleValidator_childEvent
func miqt_exec_callback_QDoubleValidator_childEvent(self *C.QDoubleValidator, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDoubleValidator{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDoubleValidator) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDoubleValidator_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDoubleValidator) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDoubleValidator_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleValidator_customEvent
func miqt_exec_callback_QDoubleValidator_customEvent(self *C.QDoubleValidator, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDoubleValidator{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDoubleValidator) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDoubleValidator_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDoubleValidator) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDoubleValidator_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleValidator_connectNotify
func miqt_exec_callback_QDoubleValidator_connectNotify(self *C.QDoubleValidator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDoubleValidator{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDoubleValidator) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDoubleValidator_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDoubleValidator) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDoubleValidator_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDoubleValidator_disconnectNotify
func miqt_exec_callback_QDoubleValidator_disconnectNotify(self *C.QDoubleValidator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDoubleValidator{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDoubleValidator) Delete() {
	C.QDoubleValidator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDoubleValidator) GoGC() {
	runtime.SetFinalizer(this, func(this *QDoubleValidator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QRegExpValidator struct {
	h *C.QRegExpValidator
	*QValidator
}

func (this *QRegExpValidator) cPointer() *C.QRegExpValidator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRegExpValidator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRegExpValidator constructs the type using only CGO pointers.
func newQRegExpValidator(h *C.QRegExpValidator) *QRegExpValidator {
	if h == nil {
		return nil
	}
	var outptr_QValidator *C.QValidator = nil
	C.QRegExpValidator_virtbase(h, &outptr_QValidator)

	return &QRegExpValidator{h: h,
		QValidator: newQValidator(outptr_QValidator)}
}

// UnsafeNewQRegExpValidator constructs the type using only unsafe pointers.
func UnsafeNewQRegExpValidator(h unsafe.Pointer) *QRegExpValidator {
	return newQRegExpValidator((*C.QRegExpValidator)(h))
}

// NewQRegExpValidator constructs a new QRegExpValidator object.
func NewQRegExpValidator() *QRegExpValidator {

	return newQRegExpValidator(C.QRegExpValidator_new())
}

// NewQRegExpValidator2 constructs a new QRegExpValidator object.
func NewQRegExpValidator2(rx *QRegExp) *QRegExpValidator {

	return newQRegExpValidator(C.QRegExpValidator_new2(rx.cPointer()))
}

// NewQRegExpValidator3 constructs a new QRegExpValidator object.
func NewQRegExpValidator3(parent *QObject) *QRegExpValidator {

	return newQRegExpValidator(C.QRegExpValidator_new3(parent.cPointer()))
}

// NewQRegExpValidator4 constructs a new QRegExpValidator object.
func NewQRegExpValidator4(rx *QRegExp, parent *QObject) *QRegExpValidator {

	return newQRegExpValidator(C.QRegExpValidator_new4(rx.cPointer(), parent.cPointer()))
}

func (this *QRegExpValidator) MetaObject() *QMetaObject {
	return newQMetaObject(C.QRegExpValidator_metaObject(this.h))
}

func (this *QRegExpValidator) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRegExpValidator_metacast(this.h, param1_Cstring))
}

func QRegExpValidator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRegExpValidator_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegExpValidator_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRegExpValidator_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegExpValidator) Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	return (QValidator__State)(C.QRegExpValidator_validate(this.h, input_ms, (*C.int)(unsafe.Pointer(pos))))
}

func (this *QRegExpValidator) SetRegExp(rx *QRegExp) {
	C.QRegExpValidator_setRegExp(this.h, rx.cPointer())
}

func (this *QRegExpValidator) RegExp() *QRegExp {
	return newQRegExp(C.QRegExpValidator_regExp(this.h))
}

func (this *QRegExpValidator) RegExpChanged(regExp *QRegExp) {
	C.QRegExpValidator_regExpChanged(this.h, regExp.cPointer())
}
func (this *QRegExpValidator) OnRegExpChanged(slot func(regExp *QRegExp)) {
	C.QRegExpValidator_connect_regExpChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRegExpValidator_regExpChanged
func miqt_exec_callback_QRegExpValidator_regExpChanged(cb C.intptr_t, regExp *C.QRegExp) {
	gofunc, ok := cgo.Handle(cb).Value().(func(regExp *QRegExp))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRegExp(regExp)

	gofunc(slotval1)
}

func QRegExpValidator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRegExpValidator_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegExpValidator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRegExpValidator_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegExpValidator_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRegExpValidator_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegExpValidator_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRegExpValidator_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QRegExpValidator that was directly constructed.
func (this *QRegExpValidator) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QRegExpValidator_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QRegExpValidator that was directly constructed.
func (this *QRegExpValidator) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QRegExpValidator_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QRegExpValidator that was directly constructed.
func (this *QRegExpValidator) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QRegExpValidator_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QRegExpValidator that was directly constructed.
func (this *QRegExpValidator) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QRegExpValidator_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QRegExpValidator) callVirtualBase_Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	return (QValidator__State)(C.QRegExpValidator_virtualbase_validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QRegExpValidator) OnValidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	ok := C.QRegExpValidator_override_virtual_validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegExpValidator_validate
func miqt_exec_callback_QRegExpValidator_validate(self *C.QRegExpValidator, cb C.intptr_t, input C.struct_miqt_string, pos *C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret
	slotval2 := (*int)(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QRegExpValidator{h: self}).callVirtualBase_Validate, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QRegExpValidator) callVirtualBase_Fixup(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	C.QRegExpValidator_virtualbase_fixup(unsafe.Pointer(this.h), param1_ms)

}
func (this *QRegExpValidator) OnFixup(slot func(super func(param1 string), param1 string)) {
	ok := C.QRegExpValidator_override_virtual_fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegExpValidator_fixup
func miqt_exec_callback_QRegExpValidator_fixup(self *C.QRegExpValidator, cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string), param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc((&QRegExpValidator{h: self}).callVirtualBase_Fixup, slotval1)

}

func (this *QRegExpValidator) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QRegExpValidator_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QRegExpValidator) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QRegExpValidator_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegExpValidator_event
func miqt_exec_callback_QRegExpValidator_event(self *C.QRegExpValidator, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QRegExpValidator{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRegExpValidator) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QRegExpValidator_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QRegExpValidator) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QRegExpValidator_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegExpValidator_eventFilter
func miqt_exec_callback_QRegExpValidator_eventFilter(self *C.QRegExpValidator, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QRegExpValidator{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QRegExpValidator) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QRegExpValidator_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRegExpValidator) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QRegExpValidator_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegExpValidator_timerEvent
func miqt_exec_callback_QRegExpValidator_timerEvent(self *C.QRegExpValidator, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QRegExpValidator{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QRegExpValidator) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QRegExpValidator_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRegExpValidator) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QRegExpValidator_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegExpValidator_childEvent
func miqt_exec_callback_QRegExpValidator_childEvent(self *C.QRegExpValidator, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QRegExpValidator{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QRegExpValidator) callVirtualBase_CustomEvent(event *QEvent) {

	C.QRegExpValidator_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRegExpValidator) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRegExpValidator_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegExpValidator_customEvent
func miqt_exec_callback_QRegExpValidator_customEvent(self *C.QRegExpValidator, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRegExpValidator{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QRegExpValidator) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QRegExpValidator_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRegExpValidator) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRegExpValidator_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegExpValidator_connectNotify
func miqt_exec_callback_QRegExpValidator_connectNotify(self *C.QRegExpValidator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRegExpValidator{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QRegExpValidator) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QRegExpValidator_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRegExpValidator) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRegExpValidator_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegExpValidator_disconnectNotify
func miqt_exec_callback_QRegExpValidator_disconnectNotify(self *C.QRegExpValidator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRegExpValidator{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QRegExpValidator) Delete() {
	C.QRegExpValidator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRegExpValidator) GoGC() {
	runtime.SetFinalizer(this, func(this *QRegExpValidator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QRegularExpressionValidator struct {
	h *C.QRegularExpressionValidator
	*QValidator
}

func (this *QRegularExpressionValidator) cPointer() *C.QRegularExpressionValidator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRegularExpressionValidator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRegularExpressionValidator constructs the type using only CGO pointers.
func newQRegularExpressionValidator(h *C.QRegularExpressionValidator) *QRegularExpressionValidator {
	if h == nil {
		return nil
	}
	var outptr_QValidator *C.QValidator = nil
	C.QRegularExpressionValidator_virtbase(h, &outptr_QValidator)

	return &QRegularExpressionValidator{h: h,
		QValidator: newQValidator(outptr_QValidator)}
}

// UnsafeNewQRegularExpressionValidator constructs the type using only unsafe pointers.
func UnsafeNewQRegularExpressionValidator(h unsafe.Pointer) *QRegularExpressionValidator {
	return newQRegularExpressionValidator((*C.QRegularExpressionValidator)(h))
}

// NewQRegularExpressionValidator constructs a new QRegularExpressionValidator object.
func NewQRegularExpressionValidator() *QRegularExpressionValidator {

	return newQRegularExpressionValidator(C.QRegularExpressionValidator_new())
}

// NewQRegularExpressionValidator2 constructs a new QRegularExpressionValidator object.
func NewQRegularExpressionValidator2(re *QRegularExpression) *QRegularExpressionValidator {

	return newQRegularExpressionValidator(C.QRegularExpressionValidator_new2(re.cPointer()))
}

// NewQRegularExpressionValidator3 constructs a new QRegularExpressionValidator object.
func NewQRegularExpressionValidator3(parent *QObject) *QRegularExpressionValidator {

	return newQRegularExpressionValidator(C.QRegularExpressionValidator_new3(parent.cPointer()))
}

// NewQRegularExpressionValidator4 constructs a new QRegularExpressionValidator object.
func NewQRegularExpressionValidator4(re *QRegularExpression, parent *QObject) *QRegularExpressionValidator {

	return newQRegularExpressionValidator(C.QRegularExpressionValidator_new4(re.cPointer(), parent.cPointer()))
}

func (this *QRegularExpressionValidator) MetaObject() *QMetaObject {
	return newQMetaObject(C.QRegularExpressionValidator_metaObject(this.h))
}

func (this *QRegularExpressionValidator) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRegularExpressionValidator_metacast(this.h, param1_Cstring))
}

func QRegularExpressionValidator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRegularExpressionValidator_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegularExpressionValidator_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRegularExpressionValidator_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegularExpressionValidator) Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	return (QValidator__State)(C.QRegularExpressionValidator_validate(this.h, input_ms, (*C.int)(unsafe.Pointer(pos))))
}

func (this *QRegularExpressionValidator) RegularExpression() *QRegularExpression {
	_goptr := newQRegularExpression(C.QRegularExpressionValidator_regularExpression(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpressionValidator) SetRegularExpression(re *QRegularExpression) {
	C.QRegularExpressionValidator_setRegularExpression(this.h, re.cPointer())
}

func (this *QRegularExpressionValidator) RegularExpressionChanged(re *QRegularExpression) {
	C.QRegularExpressionValidator_regularExpressionChanged(this.h, re.cPointer())
}
func (this *QRegularExpressionValidator) OnRegularExpressionChanged(slot func(re *QRegularExpression)) {
	C.QRegularExpressionValidator_connect_regularExpressionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRegularExpressionValidator_regularExpressionChanged
func miqt_exec_callback_QRegularExpressionValidator_regularExpressionChanged(cb C.intptr_t, re *C.QRegularExpression) {
	gofunc, ok := cgo.Handle(cb).Value().(func(re *QRegularExpression))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRegularExpression(re)

	gofunc(slotval1)
}

func QRegularExpressionValidator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRegularExpressionValidator_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegularExpressionValidator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRegularExpressionValidator_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegularExpressionValidator_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRegularExpressionValidator_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegularExpressionValidator_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRegularExpressionValidator_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QRegularExpressionValidator that was directly constructed.
func (this *QRegularExpressionValidator) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QRegularExpressionValidator_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QRegularExpressionValidator that was directly constructed.
func (this *QRegularExpressionValidator) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QRegularExpressionValidator_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QRegularExpressionValidator that was directly constructed.
func (this *QRegularExpressionValidator) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QRegularExpressionValidator_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QRegularExpressionValidator that was directly constructed.
func (this *QRegularExpressionValidator) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QRegularExpressionValidator_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QRegularExpressionValidator) callVirtualBase_Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))

	return (QValidator__State)(C.QRegularExpressionValidator_virtualbase_validate(unsafe.Pointer(this.h), input_ms, (*C.int)(unsafe.Pointer(pos))))

}
func (this *QRegularExpressionValidator) OnValidate(slot func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State) {
	ok := C.QRegularExpressionValidator_override_virtual_validate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegularExpressionValidator_validate
func miqt_exec_callback_QRegularExpressionValidator_validate(self *C.QRegularExpressionValidator, cb C.intptr_t, input C.struct_miqt_string, pos *C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(input string, pos *int) QValidator__State, input string, pos *int) QValidator__State)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var input_ms C.struct_miqt_string = input
	input_ret := C.GoStringN(input_ms.data, C.int(int64(input_ms.len)))
	C.free(unsafe.Pointer(input_ms.data))
	slotval1 := input_ret
	slotval2 := (*int)(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QRegularExpressionValidator{h: self}).callVirtualBase_Validate, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QRegularExpressionValidator) callVirtualBase_Fixup(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	C.QRegularExpressionValidator_virtualbase_fixup(unsafe.Pointer(this.h), param1_ms)

}
func (this *QRegularExpressionValidator) OnFixup(slot func(super func(param1 string), param1 string)) {
	ok := C.QRegularExpressionValidator_override_virtual_fixup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegularExpressionValidator_fixup
func miqt_exec_callback_QRegularExpressionValidator_fixup(self *C.QRegularExpressionValidator, cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string), param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc((&QRegularExpressionValidator{h: self}).callVirtualBase_Fixup, slotval1)

}

func (this *QRegularExpressionValidator) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QRegularExpressionValidator_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QRegularExpressionValidator) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QRegularExpressionValidator_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegularExpressionValidator_event
func miqt_exec_callback_QRegularExpressionValidator_event(self *C.QRegularExpressionValidator, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QRegularExpressionValidator{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRegularExpressionValidator) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QRegularExpressionValidator_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QRegularExpressionValidator) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QRegularExpressionValidator_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegularExpressionValidator_eventFilter
func miqt_exec_callback_QRegularExpressionValidator_eventFilter(self *C.QRegularExpressionValidator, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QRegularExpressionValidator{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QRegularExpressionValidator) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QRegularExpressionValidator_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRegularExpressionValidator) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QRegularExpressionValidator_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegularExpressionValidator_timerEvent
func miqt_exec_callback_QRegularExpressionValidator_timerEvent(self *C.QRegularExpressionValidator, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QRegularExpressionValidator{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QRegularExpressionValidator) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QRegularExpressionValidator_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRegularExpressionValidator) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QRegularExpressionValidator_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegularExpressionValidator_childEvent
func miqt_exec_callback_QRegularExpressionValidator_childEvent(self *C.QRegularExpressionValidator, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QRegularExpressionValidator{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QRegularExpressionValidator) callVirtualBase_CustomEvent(event *QEvent) {

	C.QRegularExpressionValidator_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRegularExpressionValidator) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRegularExpressionValidator_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegularExpressionValidator_customEvent
func miqt_exec_callback_QRegularExpressionValidator_customEvent(self *C.QRegularExpressionValidator, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRegularExpressionValidator{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QRegularExpressionValidator) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QRegularExpressionValidator_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRegularExpressionValidator) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRegularExpressionValidator_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegularExpressionValidator_connectNotify
func miqt_exec_callback_QRegularExpressionValidator_connectNotify(self *C.QRegularExpressionValidator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRegularExpressionValidator{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QRegularExpressionValidator) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QRegularExpressionValidator_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRegularExpressionValidator) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRegularExpressionValidator_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRegularExpressionValidator_disconnectNotify
func miqt_exec_callback_QRegularExpressionValidator_disconnectNotify(self *C.QRegularExpressionValidator, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRegularExpressionValidator{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QRegularExpressionValidator) Delete() {
	C.QRegularExpressionValidator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRegularExpressionValidator) GoGC() {
	runtime.SetFinalizer(this, func(this *QRegularExpressionValidator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
