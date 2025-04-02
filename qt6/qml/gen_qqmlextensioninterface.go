package qml

/*

#include "gen_qqmlextensioninterface.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlTypesExtensionInterface struct {
	h *C.QQmlTypesExtensionInterface
}

func (this *QQmlTypesExtensionInterface) cPointer() *C.QQmlTypesExtensionInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlTypesExtensionInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlTypesExtensionInterface constructs the type using only CGO pointers.
func newQQmlTypesExtensionInterface(h *C.QQmlTypesExtensionInterface) *QQmlTypesExtensionInterface {
	if h == nil {
		return nil
	}

	return &QQmlTypesExtensionInterface{h: h}
}

// UnsafeNewQQmlTypesExtensionInterface constructs the type using only unsafe pointers.
func UnsafeNewQQmlTypesExtensionInterface(h unsafe.Pointer) *QQmlTypesExtensionInterface {
	return newQQmlTypesExtensionInterface((*C.QQmlTypesExtensionInterface)(h))
}

// NewQQmlTypesExtensionInterface constructs a new QQmlTypesExtensionInterface object.
func NewQQmlTypesExtensionInterface(param1 *QQmlTypesExtensionInterface) *QQmlTypesExtensionInterface {

	return newQQmlTypesExtensionInterface(C.QQmlTypesExtensionInterface_new(param1.cPointer()))
}

func (this *QQmlTypesExtensionInterface) RegisterTypes(uri string) {
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	C.QQmlTypesExtensionInterface_registerTypes(this.h, uri_Cstring)
}

func (this *QQmlTypesExtensionInterface) OperatorAssign(param1 *QQmlTypesExtensionInterface) {
	C.QQmlTypesExtensionInterface_operatorAssign(this.h, param1.cPointer())
}
func (this *QQmlTypesExtensionInterface) OnRegisterTypes(slot func(uri string)) {
	ok := C.QQmlTypesExtensionInterface_override_virtual_registerTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlTypesExtensionInterface_registerTypes
func miqt_exec_callback_QQmlTypesExtensionInterface_registerTypes(self *C.QQmlTypesExtensionInterface, cb C.intptr_t, uri *C.const_char) {
	gofunc, ok := cgo.Handle(cb).Value().(func(uri string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	uri_ret := uri
	slotval1 := C.GoString(uri_ret)

	gofunc(slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlTypesExtensionInterface) Delete() {
	C.QQmlTypesExtensionInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlTypesExtensionInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlTypesExtensionInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QQmlExtensionInterface struct {
	h *C.QQmlExtensionInterface
	*QQmlTypesExtensionInterface
}

func (this *QQmlExtensionInterface) cPointer() *C.QQmlExtensionInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlExtensionInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlExtensionInterface constructs the type using only CGO pointers.
func newQQmlExtensionInterface(h *C.QQmlExtensionInterface) *QQmlExtensionInterface {
	if h == nil {
		return nil
	}
	var outptr_QQmlTypesExtensionInterface *C.QQmlTypesExtensionInterface = nil
	C.QQmlExtensionInterface_virtbase(h, &outptr_QQmlTypesExtensionInterface)

	return &QQmlExtensionInterface{h: h,
		QQmlTypesExtensionInterface: newQQmlTypesExtensionInterface(outptr_QQmlTypesExtensionInterface)}
}

// UnsafeNewQQmlExtensionInterface constructs the type using only unsafe pointers.
func UnsafeNewQQmlExtensionInterface(h unsafe.Pointer) *QQmlExtensionInterface {
	return newQQmlExtensionInterface((*C.QQmlExtensionInterface)(h))
}

// NewQQmlExtensionInterface constructs a new QQmlExtensionInterface object.
func NewQQmlExtensionInterface(param1 *QQmlExtensionInterface) *QQmlExtensionInterface {

	return newQQmlExtensionInterface(C.QQmlExtensionInterface_new(param1.cPointer()))
}

func (this *QQmlExtensionInterface) InitializeEngine(engine *QQmlEngine, uri string) {
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	C.QQmlExtensionInterface_initializeEngine(this.h, engine.cPointer(), uri_Cstring)
}

func (this *QQmlExtensionInterface) OperatorAssign(param1 *QQmlExtensionInterface) {
	C.QQmlExtensionInterface_operatorAssign(this.h, param1.cPointer())
}
func (this *QQmlExtensionInterface) OnInitializeEngine(slot func(engine *QQmlEngine, uri string)) {
	ok := C.QQmlExtensionInterface_override_virtual_initializeEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlExtensionInterface_initializeEngine
func miqt_exec_callback_QQmlExtensionInterface_initializeEngine(self *C.QQmlExtensionInterface, cb C.intptr_t, engine *C.QQmlEngine, uri *C.const_char) {
	gofunc, ok := cgo.Handle(cb).Value().(func(engine *QQmlEngine, uri string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQQmlEngine(engine)

	uri_ret := uri
	slotval2 := C.GoString(uri_ret)

	gofunc(slotval1, slotval2)

}
func (this *QQmlExtensionInterface) OnRegisterTypes(slot func(uri string)) {
	ok := C.QQmlExtensionInterface_override_virtual_registerTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlExtensionInterface_registerTypes
func miqt_exec_callback_QQmlExtensionInterface_registerTypes(self *C.QQmlExtensionInterface, cb C.intptr_t, uri *C.const_char) {
	gofunc, ok := cgo.Handle(cb).Value().(func(uri string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	uri_ret := uri
	slotval1 := C.GoString(uri_ret)

	gofunc(slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlExtensionInterface) Delete() {
	C.QQmlExtensionInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlExtensionInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlExtensionInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QQmlEngineExtensionInterface struct {
	h *C.QQmlEngineExtensionInterface
}

func (this *QQmlEngineExtensionInterface) cPointer() *C.QQmlEngineExtensionInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlEngineExtensionInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlEngineExtensionInterface constructs the type using only CGO pointers.
func newQQmlEngineExtensionInterface(h *C.QQmlEngineExtensionInterface) *QQmlEngineExtensionInterface {
	if h == nil {
		return nil
	}

	return &QQmlEngineExtensionInterface{h: h}
}

// UnsafeNewQQmlEngineExtensionInterface constructs the type using only unsafe pointers.
func UnsafeNewQQmlEngineExtensionInterface(h unsafe.Pointer) *QQmlEngineExtensionInterface {
	return newQQmlEngineExtensionInterface((*C.QQmlEngineExtensionInterface)(h))
}

func (this *QQmlEngineExtensionInterface) InitializeEngine(engine *QQmlEngine, uri string) {
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	C.QQmlEngineExtensionInterface_initializeEngine(this.h, engine.cPointer(), uri_Cstring)
}

func (this *QQmlEngineExtensionInterface) OperatorAssign(param1 *QQmlEngineExtensionInterface) {
	C.QQmlEngineExtensionInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QQmlEngineExtensionInterface) Delete() {
	C.QQmlEngineExtensionInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlEngineExtensionInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlEngineExtensionInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
