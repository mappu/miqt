package script

/*

#include "gen_qscriptextensioninterface.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScriptExtensionInterface struct {
	h *C.QScriptExtensionInterface
	*qt.QFactoryInterface
}

func (this *QScriptExtensionInterface) cPointer() *C.QScriptExtensionInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptExtensionInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptExtensionInterface constructs the type using only CGO pointers.
func newQScriptExtensionInterface(h *C.QScriptExtensionInterface) *QScriptExtensionInterface {
	if h == nil {
		return nil
	}
	var outptr_QFactoryInterface *C.QFactoryInterface = nil
	C.QScriptExtensionInterface_virtbase(h, &outptr_QFactoryInterface)

	return &QScriptExtensionInterface{h: h,
		QFactoryInterface: qt.UnsafeNewQFactoryInterface(unsafe.Pointer(outptr_QFactoryInterface))}
}

// UnsafeNewQScriptExtensionInterface constructs the type using only unsafe pointers.
func UnsafeNewQScriptExtensionInterface(h unsafe.Pointer) *QScriptExtensionInterface {
	return newQScriptExtensionInterface((*C.QScriptExtensionInterface)(h))
}

// NewQScriptExtensionInterface constructs a new QScriptExtensionInterface object.
func NewQScriptExtensionInterface(param1 *QScriptExtensionInterface) *QScriptExtensionInterface {

	return newQScriptExtensionInterface(C.QScriptExtensionInterface_new(param1.cPointer()))
}

func (this *QScriptExtensionInterface) Initialize(key string, engine *QScriptEngine) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QScriptExtensionInterface_initialize(this.h, key_ms, engine.cPointer())
}

func (this *QScriptExtensionInterface) OperatorAssign(param1 *QScriptExtensionInterface) {
	C.QScriptExtensionInterface_operatorAssign(this.h, param1.cPointer())
}
func (this *QScriptExtensionInterface) OnInitialize(slot func(key string, engine *QScriptEngine)) {
	ok := C.QScriptExtensionInterface_override_virtual_initialize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptExtensionInterface_initialize
func miqt_exec_callback_QScriptExtensionInterface_initialize(self *C.QScriptExtensionInterface, cb C.intptr_t, key C.struct_miqt_string, engine *C.QScriptEngine) {
	gofunc, ok := cgo.Handle(cb).Value().(func(key string, engine *QScriptEngine))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret
	slotval2 := newQScriptEngine(engine)

	gofunc(slotval1, slotval2)

}
func (this *QScriptExtensionInterface) OnKeys(slot func() []string) {
	ok := C.QScriptExtensionInterface_override_virtual_keys(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptExtensionInterface_keys
func miqt_exec_callback_QScriptExtensionInterface_keys(self *C.QScriptExtensionInterface, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func() []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
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

// Delete this object from C++ memory.
func (this *QScriptExtensionInterface) Delete() {
	C.QScriptExtensionInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptExtensionInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptExtensionInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
