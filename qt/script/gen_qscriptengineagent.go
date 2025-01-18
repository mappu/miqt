package script

/*

#include "gen_qscriptengineagent.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScriptEngineAgent__Extension int

const (
	QScriptEngineAgent__DebuggerInvocationRequest QScriptEngineAgent__Extension = 0
)

type QScriptEngineAgent struct {
	h          *C.QScriptEngineAgent
	isSubclass bool
}

func (this *QScriptEngineAgent) cPointer() *C.QScriptEngineAgent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptEngineAgent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptEngineAgent constructs the type using only CGO pointers.
func newQScriptEngineAgent(h *C.QScriptEngineAgent) *QScriptEngineAgent {
	if h == nil {
		return nil
	}

	return &QScriptEngineAgent{h: h}
}

// UnsafeNewQScriptEngineAgent constructs the type using only unsafe pointers.
func UnsafeNewQScriptEngineAgent(h unsafe.Pointer) *QScriptEngineAgent {
	return newQScriptEngineAgent((*C.QScriptEngineAgent)(h))
}

// NewQScriptEngineAgent constructs a new QScriptEngineAgent object.
func NewQScriptEngineAgent(engine *QScriptEngine) *QScriptEngineAgent {

	ret := newQScriptEngineAgent(C.QScriptEngineAgent_new(engine.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QScriptEngineAgent) ScriptLoad(id int64, program string, fileName string, baseLineNumber int) {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QScriptEngineAgent_ScriptLoad(this.h, (C.longlong)(id), program_ms, fileName_ms, (C.int)(baseLineNumber))
}

func (this *QScriptEngineAgent) ScriptUnload(id int64) {
	C.QScriptEngineAgent_ScriptUnload(this.h, (C.longlong)(id))
}

func (this *QScriptEngineAgent) ContextPush() {
	C.QScriptEngineAgent_ContextPush(this.h)
}

func (this *QScriptEngineAgent) ContextPop() {
	C.QScriptEngineAgent_ContextPop(this.h)
}

func (this *QScriptEngineAgent) FunctionEntry(scriptId int64) {
	C.QScriptEngineAgent_FunctionEntry(this.h, (C.longlong)(scriptId))
}

func (this *QScriptEngineAgent) FunctionExit(scriptId int64, returnValue *QScriptValue) {
	C.QScriptEngineAgent_FunctionExit(this.h, (C.longlong)(scriptId), returnValue.cPointer())
}

func (this *QScriptEngineAgent) PositionChange(scriptId int64, lineNumber int, columnNumber int) {
	C.QScriptEngineAgent_PositionChange(this.h, (C.longlong)(scriptId), (C.int)(lineNumber), (C.int)(columnNumber))
}

func (this *QScriptEngineAgent) ExceptionThrow(scriptId int64, exception *QScriptValue, hasHandler bool) {
	C.QScriptEngineAgent_ExceptionThrow(this.h, (C.longlong)(scriptId), exception.cPointer(), (C.bool)(hasHandler))
}

func (this *QScriptEngineAgent) ExceptionCatch(scriptId int64, exception *QScriptValue) {
	C.QScriptEngineAgent_ExceptionCatch(this.h, (C.longlong)(scriptId), exception.cPointer())
}

func (this *QScriptEngineAgent) SupportsExtension(extension QScriptEngineAgent__Extension) bool {
	return (bool)(C.QScriptEngineAgent_SupportsExtension(this.h, (C.int)(extension)))
}

func (this *QScriptEngineAgent) Extension(extension QScriptEngineAgent__Extension, argument *qt.QVariant) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QScriptEngineAgent_Extension(this.h, (C.int)(extension), (*C.QVariant)(argument.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngineAgent) Engine() *QScriptEngine {
	return newQScriptEngine(C.QScriptEngineAgent_Engine(this.h))
}

func (this *QScriptEngineAgent) callVirtualBase_ScriptLoad(id int64, program string, fileName string, baseLineNumber int) {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	C.QScriptEngineAgent_virtualbase_ScriptLoad(unsafe.Pointer(this.h), (C.longlong)(id), program_ms, fileName_ms, (C.int)(baseLineNumber))

}
func (this *QScriptEngineAgent) OnScriptLoad(slot func(super func(id int64, program string, fileName string, baseLineNumber int), id int64, program string, fileName string, baseLineNumber int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptEngineAgent_override_virtual_ScriptLoad(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngineAgent_ScriptLoad
func miqt_exec_callback_QScriptEngineAgent_ScriptLoad(self *C.QScriptEngineAgent, cb C.intptr_t, id C.longlong, program C.struct_miqt_string, fileName C.struct_miqt_string, baseLineNumber C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(id int64, program string, fileName string, baseLineNumber int), id int64, program string, fileName string, baseLineNumber int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(id)

	var program_ms C.struct_miqt_string = program
	program_ret := C.GoStringN(program_ms.data, C.int(int64(program_ms.len)))
	C.free(unsafe.Pointer(program_ms.data))
	slotval2 := program_ret
	var fileName_ms C.struct_miqt_string = fileName
	fileName_ret := C.GoStringN(fileName_ms.data, C.int(int64(fileName_ms.len)))
	C.free(unsafe.Pointer(fileName_ms.data))
	slotval3 := fileName_ret
	slotval4 := (int)(baseLineNumber)

	gofunc((&QScriptEngineAgent{h: self}).callVirtualBase_ScriptLoad, slotval1, slotval2, slotval3, slotval4)

}

func (this *QScriptEngineAgent) callVirtualBase_ScriptUnload(id int64) {

	C.QScriptEngineAgent_virtualbase_ScriptUnload(unsafe.Pointer(this.h), (C.longlong)(id))

}
func (this *QScriptEngineAgent) OnScriptUnload(slot func(super func(id int64), id int64)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptEngineAgent_override_virtual_ScriptUnload(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngineAgent_ScriptUnload
func miqt_exec_callback_QScriptEngineAgent_ScriptUnload(self *C.QScriptEngineAgent, cb C.intptr_t, id C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(id int64), id int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(id)

	gofunc((&QScriptEngineAgent{h: self}).callVirtualBase_ScriptUnload, slotval1)

}

func (this *QScriptEngineAgent) callVirtualBase_ContextPush() {

	C.QScriptEngineAgent_virtualbase_ContextPush(unsafe.Pointer(this.h))

}
func (this *QScriptEngineAgent) OnContextPush(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptEngineAgent_override_virtual_ContextPush(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngineAgent_ContextPush
func miqt_exec_callback_QScriptEngineAgent_ContextPush(self *C.QScriptEngineAgent, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QScriptEngineAgent{h: self}).callVirtualBase_ContextPush)

}

func (this *QScriptEngineAgent) callVirtualBase_ContextPop() {

	C.QScriptEngineAgent_virtualbase_ContextPop(unsafe.Pointer(this.h))

}
func (this *QScriptEngineAgent) OnContextPop(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptEngineAgent_override_virtual_ContextPop(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngineAgent_ContextPop
func miqt_exec_callback_QScriptEngineAgent_ContextPop(self *C.QScriptEngineAgent, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QScriptEngineAgent{h: self}).callVirtualBase_ContextPop)

}

func (this *QScriptEngineAgent) callVirtualBase_FunctionEntry(scriptId int64) {

	C.QScriptEngineAgent_virtualbase_FunctionEntry(unsafe.Pointer(this.h), (C.longlong)(scriptId))

}
func (this *QScriptEngineAgent) OnFunctionEntry(slot func(super func(scriptId int64), scriptId int64)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptEngineAgent_override_virtual_FunctionEntry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngineAgent_FunctionEntry
func miqt_exec_callback_QScriptEngineAgent_FunctionEntry(self *C.QScriptEngineAgent, cb C.intptr_t, scriptId C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(scriptId int64), scriptId int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(scriptId)

	gofunc((&QScriptEngineAgent{h: self}).callVirtualBase_FunctionEntry, slotval1)

}

func (this *QScriptEngineAgent) callVirtualBase_FunctionExit(scriptId int64, returnValue *QScriptValue) {

	C.QScriptEngineAgent_virtualbase_FunctionExit(unsafe.Pointer(this.h), (C.longlong)(scriptId), returnValue.cPointer())

}
func (this *QScriptEngineAgent) OnFunctionExit(slot func(super func(scriptId int64, returnValue *QScriptValue), scriptId int64, returnValue *QScriptValue)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptEngineAgent_override_virtual_FunctionExit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngineAgent_FunctionExit
func miqt_exec_callback_QScriptEngineAgent_FunctionExit(self *C.QScriptEngineAgent, cb C.intptr_t, scriptId C.longlong, returnValue *C.QScriptValue) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(scriptId int64, returnValue *QScriptValue), scriptId int64, returnValue *QScriptValue))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(scriptId)

	slotval2 := newQScriptValue(returnValue)

	gofunc((&QScriptEngineAgent{h: self}).callVirtualBase_FunctionExit, slotval1, slotval2)

}

func (this *QScriptEngineAgent) callVirtualBase_PositionChange(scriptId int64, lineNumber int, columnNumber int) {

	C.QScriptEngineAgent_virtualbase_PositionChange(unsafe.Pointer(this.h), (C.longlong)(scriptId), (C.int)(lineNumber), (C.int)(columnNumber))

}
func (this *QScriptEngineAgent) OnPositionChange(slot func(super func(scriptId int64, lineNumber int, columnNumber int), scriptId int64, lineNumber int, columnNumber int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptEngineAgent_override_virtual_PositionChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngineAgent_PositionChange
func miqt_exec_callback_QScriptEngineAgent_PositionChange(self *C.QScriptEngineAgent, cb C.intptr_t, scriptId C.longlong, lineNumber C.int, columnNumber C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(scriptId int64, lineNumber int, columnNumber int), scriptId int64, lineNumber int, columnNumber int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(scriptId)

	slotval2 := (int)(lineNumber)

	slotval3 := (int)(columnNumber)

	gofunc((&QScriptEngineAgent{h: self}).callVirtualBase_PositionChange, slotval1, slotval2, slotval3)

}

func (this *QScriptEngineAgent) callVirtualBase_ExceptionThrow(scriptId int64, exception *QScriptValue, hasHandler bool) {

	C.QScriptEngineAgent_virtualbase_ExceptionThrow(unsafe.Pointer(this.h), (C.longlong)(scriptId), exception.cPointer(), (C.bool)(hasHandler))

}
func (this *QScriptEngineAgent) OnExceptionThrow(slot func(super func(scriptId int64, exception *QScriptValue, hasHandler bool), scriptId int64, exception *QScriptValue, hasHandler bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptEngineAgent_override_virtual_ExceptionThrow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngineAgent_ExceptionThrow
func miqt_exec_callback_QScriptEngineAgent_ExceptionThrow(self *C.QScriptEngineAgent, cb C.intptr_t, scriptId C.longlong, exception *C.QScriptValue, hasHandler C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(scriptId int64, exception *QScriptValue, hasHandler bool), scriptId int64, exception *QScriptValue, hasHandler bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(scriptId)

	slotval2 := newQScriptValue(exception)

	slotval3 := (bool)(hasHandler)

	gofunc((&QScriptEngineAgent{h: self}).callVirtualBase_ExceptionThrow, slotval1, slotval2, slotval3)

}

func (this *QScriptEngineAgent) callVirtualBase_ExceptionCatch(scriptId int64, exception *QScriptValue) {

	C.QScriptEngineAgent_virtualbase_ExceptionCatch(unsafe.Pointer(this.h), (C.longlong)(scriptId), exception.cPointer())

}
func (this *QScriptEngineAgent) OnExceptionCatch(slot func(super func(scriptId int64, exception *QScriptValue), scriptId int64, exception *QScriptValue)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptEngineAgent_override_virtual_ExceptionCatch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngineAgent_ExceptionCatch
func miqt_exec_callback_QScriptEngineAgent_ExceptionCatch(self *C.QScriptEngineAgent, cb C.intptr_t, scriptId C.longlong, exception *C.QScriptValue) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(scriptId int64, exception *QScriptValue), scriptId int64, exception *QScriptValue))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(scriptId)

	slotval2 := newQScriptValue(exception)

	gofunc((&QScriptEngineAgent{h: self}).callVirtualBase_ExceptionCatch, slotval1, slotval2)

}

func (this *QScriptEngineAgent) callVirtualBase_SupportsExtension(extension QScriptEngineAgent__Extension) bool {

	return (bool)(C.QScriptEngineAgent_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QScriptEngineAgent) OnSupportsExtension(slot func(super func(extension QScriptEngineAgent__Extension) bool, extension QScriptEngineAgent__Extension) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptEngineAgent_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngineAgent_SupportsExtension
func miqt_exec_callback_QScriptEngineAgent_SupportsExtension(self *C.QScriptEngineAgent, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QScriptEngineAgent__Extension) bool, extension QScriptEngineAgent__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QScriptEngineAgent__Extension)(extension)

	virtualReturn := gofunc((&QScriptEngineAgent{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScriptEngineAgent) callVirtualBase_Extension(extension QScriptEngineAgent__Extension, argument *qt.QVariant) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QScriptEngineAgent_virtualbase_Extension(unsafe.Pointer(this.h), (C.int)(extension), (*C.QVariant)(argument.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScriptEngineAgent) OnExtension(slot func(super func(extension QScriptEngineAgent__Extension, argument *qt.QVariant) *qt.QVariant, extension QScriptEngineAgent__Extension, argument *qt.QVariant) *qt.QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptEngineAgent_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngineAgent_Extension
func miqt_exec_callback_QScriptEngineAgent_Extension(self *C.QScriptEngineAgent, cb C.intptr_t, extension C.int, argument *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QScriptEngineAgent__Extension, argument *qt.QVariant) *qt.QVariant, extension QScriptEngineAgent__Extension, argument *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QScriptEngineAgent__Extension)(extension)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(argument))

	virtualReturn := gofunc((&QScriptEngineAgent{h: self}).callVirtualBase_Extension, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QScriptEngineAgent) Delete() {
	C.QScriptEngineAgent_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptEngineAgent) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptEngineAgent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
