package qml

/*

#include "gen_qqmlexpression.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlExpression struct {
	h *C.QQmlExpression
	*qt6.QObject
}

func (this *QQmlExpression) cPointer() *C.QQmlExpression {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlExpression) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlExpression constructs the type using only CGO pointers.
func newQQmlExpression(h *C.QQmlExpression) *QQmlExpression {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QQmlExpression_virtbase(h, &outptr_QObject)

	return &QQmlExpression{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQQmlExpression constructs the type using only unsafe pointers.
func UnsafeNewQQmlExpression(h unsafe.Pointer) *QQmlExpression {
	return newQQmlExpression((*C.QQmlExpression)(h))
}

// NewQQmlExpression constructs a new QQmlExpression object.
func NewQQmlExpression() *QQmlExpression {

	return newQQmlExpression(C.QQmlExpression_new())
}

// NewQQmlExpression2 constructs a new QQmlExpression object.
func NewQQmlExpression2(param1 *QQmlContext, param2 *qt6.QObject, param3 string) *QQmlExpression {
	param3_ms := C.struct_miqt_string{}
	param3_ms.data = C.CString(param3)
	param3_ms.len = C.size_t(len(param3))
	defer C.free(unsafe.Pointer(param3_ms.data))

	return newQQmlExpression(C.QQmlExpression_new2(param1.cPointer(), (*C.QObject)(param2.UnsafePointer()), param3_ms))
}

// NewQQmlExpression3 constructs a new QQmlExpression object.
func NewQQmlExpression3(param1 *QQmlScriptString) *QQmlExpression {

	return newQQmlExpression(C.QQmlExpression_new3(param1.cPointer()))
}

// NewQQmlExpression4 constructs a new QQmlExpression object.
func NewQQmlExpression4(param1 *QQmlContext, param2 *qt6.QObject, param3 string, param4 *qt6.QObject) *QQmlExpression {
	param3_ms := C.struct_miqt_string{}
	param3_ms.data = C.CString(param3)
	param3_ms.len = C.size_t(len(param3))
	defer C.free(unsafe.Pointer(param3_ms.data))

	return newQQmlExpression(C.QQmlExpression_new4(param1.cPointer(), (*C.QObject)(param2.UnsafePointer()), param3_ms, (*C.QObject)(param4.UnsafePointer())))
}

// NewQQmlExpression5 constructs a new QQmlExpression object.
func NewQQmlExpression5(param1 *QQmlScriptString, param2 *QQmlContext) *QQmlExpression {

	return newQQmlExpression(C.QQmlExpression_new5(param1.cPointer(), param2.cPointer()))
}

// NewQQmlExpression6 constructs a new QQmlExpression object.
func NewQQmlExpression6(param1 *QQmlScriptString, param2 *QQmlContext, param3 *qt6.QObject) *QQmlExpression {

	return newQQmlExpression(C.QQmlExpression_new6(param1.cPointer(), param2.cPointer(), (*C.QObject)(param3.UnsafePointer())))
}

// NewQQmlExpression7 constructs a new QQmlExpression object.
func NewQQmlExpression7(param1 *QQmlScriptString, param2 *QQmlContext, param3 *qt6.QObject, param4 *qt6.QObject) *QQmlExpression {

	return newQQmlExpression(C.QQmlExpression_new7(param1.cPointer(), param2.cPointer(), (*C.QObject)(param3.UnsafePointer()), (*C.QObject)(param4.UnsafePointer())))
}

func (this *QQmlExpression) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QQmlExpression_metaObject(this.h)))
}

func (this *QQmlExpression) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QQmlExpression_metacast(this.h, param1_Cstring))
}

func QQmlExpression_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QQmlExpression_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlExpression) Engine() *QQmlEngine {
	return newQQmlEngine(C.QQmlExpression_engine(this.h))
}

func (this *QQmlExpression) Context() *QQmlContext {
	return newQQmlContext(C.QQmlExpression_context(this.h))
}

func (this *QQmlExpression) Expression() string {
	var _ms C.struct_miqt_string = C.QQmlExpression_expression(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlExpression) SetExpression(expression string) {
	expression_ms := C.struct_miqt_string{}
	expression_ms.data = C.CString(expression)
	expression_ms.len = C.size_t(len(expression))
	defer C.free(unsafe.Pointer(expression_ms.data))
	C.QQmlExpression_setExpression(this.h, expression_ms)
}

func (this *QQmlExpression) NotifyOnValueChanged() bool {
	return (bool)(C.QQmlExpression_notifyOnValueChanged(this.h))
}

func (this *QQmlExpression) SetNotifyOnValueChanged(notifyOnValueChanged bool) {
	C.QQmlExpression_setNotifyOnValueChanged(this.h, (C.bool)(notifyOnValueChanged))
}

func (this *QQmlExpression) SourceFile() string {
	var _ms C.struct_miqt_string = C.QQmlExpression_sourceFile(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlExpression) LineNumber() int {
	return (int)(C.QQmlExpression_lineNumber(this.h))
}

func (this *QQmlExpression) ColumnNumber() int {
	return (int)(C.QQmlExpression_columnNumber(this.h))
}

func (this *QQmlExpression) SetSourceLocation(fileName string, line int) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QQmlExpression_setSourceLocation(this.h, fileName_ms, (C.int)(line))
}

func (this *QQmlExpression) ScopeObject() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlExpression_scopeObject(this.h)))
}

func (this *QQmlExpression) HasError() bool {
	return (bool)(C.QQmlExpression_hasError(this.h))
}

func (this *QQmlExpression) ClearError() {
	C.QQmlExpression_clearError(this.h)
}

func (this *QQmlExpression) Error() *QQmlError {
	_goptr := newQQmlError(C.QQmlExpression_error(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlExpression) Evaluate() *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QQmlExpression_evaluate(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlExpression) ValueChanged() {
	C.QQmlExpression_valueChanged(this.h)
}
func (this *QQmlExpression) OnValueChanged(slot func()) {
	C.QQmlExpression_connect_valueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QQmlExpression_valueChanged
func miqt_exec_callback_QQmlExpression_valueChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QQmlExpression_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlExpression_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlExpression_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlExpression_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlExpression) SetSourceLocation2(fileName string, line int, column int) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QQmlExpression_setSourceLocation2(this.h, fileName_ms, (C.int)(line), (C.int)(column))
}

func (this *QQmlExpression) EvaluateWithValueIsUndefined(valueIsUndefined *bool) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QQmlExpression_evaluateWithValueIsUndefined(this.h, (*C.bool)(unsafe.Pointer(valueIsUndefined)))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Sender can only be called from a QQmlExpression that was directly constructed.
func (this *QQmlExpression) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlExpression_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QQmlExpression that was directly constructed.
func (this *QQmlExpression) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlExpression_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QQmlExpression that was directly constructed.
func (this *QQmlExpression) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlExpression_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QQmlExpression that was directly constructed.
func (this *QQmlExpression) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QQmlExpression_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QQmlExpression) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QQmlExpression_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlExpression) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QQmlExpression_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlExpression_event
func miqt_exec_callback_QQmlExpression_event(self *C.QQmlExpression, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlExpression{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QQmlExpression) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QQmlExpression_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlExpression) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QQmlExpression_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlExpression_eventFilter
func miqt_exec_callback_QQmlExpression_eventFilter(self *C.QQmlExpression, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlExpression{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QQmlExpression) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QQmlExpression_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QQmlExpression) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QQmlExpression_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlExpression_timerEvent
func miqt_exec_callback_QQmlExpression_timerEvent(self *C.QQmlExpression, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QQmlExpression{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QQmlExpression) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QQmlExpression_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QQmlExpression) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QQmlExpression_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlExpression_childEvent
func miqt_exec_callback_QQmlExpression_childEvent(self *C.QQmlExpression, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QQmlExpression{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QQmlExpression) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QQmlExpression_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QQmlExpression) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QQmlExpression_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlExpression_customEvent
func miqt_exec_callback_QQmlExpression_customEvent(self *C.QQmlExpression, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QQmlExpression{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QQmlExpression) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlExpression_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlExpression) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlExpression_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlExpression_connectNotify
func miqt_exec_callback_QQmlExpression_connectNotify(self *C.QQmlExpression, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlExpression{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QQmlExpression) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlExpression_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlExpression) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlExpression_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlExpression_disconnectNotify
func miqt_exec_callback_QQmlExpression_disconnectNotify(self *C.QQmlExpression, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlExpression{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlExpression) Delete() {
	C.QQmlExpression_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlExpression) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlExpression) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
