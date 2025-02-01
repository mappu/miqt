package script

/*

#include "gen_qscriptcontext.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScriptContext__ExecutionState int

const (
	QScriptContext__NormalState    QScriptContext__ExecutionState = 0
	QScriptContext__ExceptionState QScriptContext__ExecutionState = 1
)

type QScriptContext__Error int

const (
	QScriptContext__UnknownError   QScriptContext__Error = 0
	QScriptContext__ReferenceError QScriptContext__Error = 1
	QScriptContext__SyntaxError    QScriptContext__Error = 2
	QScriptContext__TypeError      QScriptContext__Error = 3
	QScriptContext__RangeError     QScriptContext__Error = 4
	QScriptContext__URIError       QScriptContext__Error = 5
)

type QScriptContext struct {
	h *C.QScriptContext
}

func (this *QScriptContext) cPointer() *C.QScriptContext {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptContext) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptContext constructs the type using only CGO pointers.
func newQScriptContext(h *C.QScriptContext) *QScriptContext {
	if h == nil {
		return nil
	}

	return &QScriptContext{h: h}
}

// UnsafeNewQScriptContext constructs the type using only unsafe pointers.
func UnsafeNewQScriptContext(h unsafe.Pointer) *QScriptContext {
	return newQScriptContext((*C.QScriptContext)(h))
}

func (this *QScriptContext) ParentContext() *QScriptContext {
	return newQScriptContext(C.QScriptContext_parentContext(this.h))
}

func (this *QScriptContext) Engine() *QScriptEngine {
	return newQScriptEngine(C.QScriptContext_engine(this.h))
}

func (this *QScriptContext) State() QScriptContext__ExecutionState {
	return (QScriptContext__ExecutionState)(C.QScriptContext_state(this.h))
}

func (this *QScriptContext) Callee() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptContext_callee(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptContext) ArgumentCount() int {
	return (int)(C.QScriptContext_argumentCount(this.h))
}

func (this *QScriptContext) Argument(index int) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptContext_argument(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptContext) ArgumentsObject() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptContext_argumentsObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptContext) ScopeChain() []QScriptValue {
	var _ma C.struct_miqt_array = C.QScriptContext_scopeChain(this.h)
	_ret := make([]QScriptValue, int(_ma.len))
	_outCast := (*[0xffff]*C.QScriptValue)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQScriptValue(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QScriptContext) PushScope(object *QScriptValue) {
	C.QScriptContext_pushScope(this.h, object.cPointer())
}

func (this *QScriptContext) PopScope() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptContext_popScope(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptContext) ReturnValue() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptContext_returnValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptContext) SetReturnValue(result *QScriptValue) {
	C.QScriptContext_setReturnValue(this.h, result.cPointer())
}

func (this *QScriptContext) ActivationObject() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptContext_activationObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptContext) SetActivationObject(activation *QScriptValue) {
	C.QScriptContext_setActivationObject(this.h, activation.cPointer())
}

func (this *QScriptContext) ThisObject() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptContext_thisObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptContext) SetThisObject(thisObject *QScriptValue) {
	C.QScriptContext_setThisObject(this.h, thisObject.cPointer())
}

func (this *QScriptContext) IsCalledAsConstructor() bool {
	return (bool)(C.QScriptContext_isCalledAsConstructor(this.h))
}

func (this *QScriptContext) ThrowValue(value *QScriptValue) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptContext_throwValue(this.h, value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptContext) ThrowError(error QScriptContext__Error, text string) *QScriptValue {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQScriptValue(C.QScriptContext_throwError(this.h, (C.int)(error), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptContext) ThrowErrorWithText(text string) *QScriptValue {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQScriptValue(C.QScriptContext_throwErrorWithText(this.h, text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptContext) Backtrace() []string {
	var _ma C.struct_miqt_array = C.QScriptContext_backtrace(this.h)
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

func (this *QScriptContext) ToString() string {
	var _ms C.struct_miqt_string = C.QScriptContext_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QScriptContext) Delete() {
	C.QScriptContext_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptContext) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptContext) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
