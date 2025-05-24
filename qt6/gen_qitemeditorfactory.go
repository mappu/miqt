package qt6

/*

#include "gen_qitemeditorfactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QItemEditorCreatorBase struct {
	h *C.QItemEditorCreatorBase
}

func (this *QItemEditorCreatorBase) cPointer() *C.QItemEditorCreatorBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QItemEditorCreatorBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQItemEditorCreatorBase constructs the type using only CGO pointers.
func newQItemEditorCreatorBase(h *C.QItemEditorCreatorBase) *QItemEditorCreatorBase {
	if h == nil {
		return nil
	}

	return &QItemEditorCreatorBase{h: h}
}

// UnsafeNewQItemEditorCreatorBase constructs the type using only unsafe pointers.
func UnsafeNewQItemEditorCreatorBase(h unsafe.Pointer) *QItemEditorCreatorBase {
	return newQItemEditorCreatorBase((*C.QItemEditorCreatorBase)(h))
}

func (this *QItemEditorCreatorBase) CreateWidget(parent *QWidget) *QWidget {
	return newQWidget(C.QItemEditorCreatorBase_createWidget(this.h, parent.cPointer()))
}

func (this *QItemEditorCreatorBase) ValuePropertyName() []byte {
	var _bytearray C.struct_miqt_string = C.QItemEditorCreatorBase_valuePropertyName(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QItemEditorCreatorBase) OperatorAssign(param1 *QItemEditorCreatorBase) {
	C.QItemEditorCreatorBase_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QItemEditorCreatorBase) Delete() {
	C.QItemEditorCreatorBase_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QItemEditorCreatorBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QItemEditorCreatorBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QItemEditorFactory struct {
	h *C.QItemEditorFactory
}

func (this *QItemEditorFactory) cPointer() *C.QItemEditorFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QItemEditorFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQItemEditorFactory constructs the type using only CGO pointers.
func newQItemEditorFactory(h *C.QItemEditorFactory) *QItemEditorFactory {
	if h == nil {
		return nil
	}

	return &QItemEditorFactory{h: h}
}

// UnsafeNewQItemEditorFactory constructs the type using only unsafe pointers.
func UnsafeNewQItemEditorFactory(h unsafe.Pointer) *QItemEditorFactory {
	return newQItemEditorFactory((*C.QItemEditorFactory)(h))
}

// NewQItemEditorFactory constructs a new QItemEditorFactory object.
func NewQItemEditorFactory() *QItemEditorFactory {

	return newQItemEditorFactory(C.QItemEditorFactory_new())
}

// NewQItemEditorFactory2 constructs a new QItemEditorFactory object.
func NewQItemEditorFactory2(param1 *QItemEditorFactory) *QItemEditorFactory {

	return newQItemEditorFactory(C.QItemEditorFactory_new2(param1.cPointer()))
}

func (this *QItemEditorFactory) CreateEditor(userType int, parent *QWidget) *QWidget {
	return newQWidget(C.QItemEditorFactory_createEditor(this.h, (C.int)(userType), parent.cPointer()))
}

func (this *QItemEditorFactory) ValuePropertyName(userType int) []byte {
	var _bytearray C.struct_miqt_string = C.QItemEditorFactory_valuePropertyName(this.h, (C.int)(userType))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QItemEditorFactory) RegisterEditor(userType int, creator *QItemEditorCreatorBase) {
	C.QItemEditorFactory_registerEditor(this.h, (C.int)(userType), creator.cPointer())
}

func QItemEditorFactory_DefaultFactory() *QItemEditorFactory {
	return newQItemEditorFactory(C.QItemEditorFactory_defaultFactory())
}

func QItemEditorFactory_SetDefaultFactory(factory *QItemEditorFactory) {
	C.QItemEditorFactory_setDefaultFactory(factory.cPointer())
}

func (this *QItemEditorFactory) OperatorAssign(param1 *QItemEditorFactory) {
	C.QItemEditorFactory_operatorAssign(this.h, param1.cPointer())
}

func (this *QItemEditorFactory) callVirtualBase_CreateEditor(userType int, parent *QWidget) *QWidget {

	return newQWidget(C.QItemEditorFactory_virtualbase_createEditor(unsafe.Pointer(this.h), (C.int)(userType), parent.cPointer()))

}
func (this *QItemEditorFactory) OnCreateEditor(slot func(super func(userType int, parent *QWidget) *QWidget, userType int, parent *QWidget) *QWidget) {
	ok := C.QItemEditorFactory_override_virtual_createEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemEditorFactory_createEditor
func miqt_exec_callback_QItemEditorFactory_createEditor(self *C.QItemEditorFactory, cb C.intptr_t, userType C.int, parent *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(userType int, parent *QWidget) *QWidget, userType int, parent *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(userType)

	slotval2 := newQWidget(parent)

	virtualReturn := gofunc((&QItemEditorFactory{h: self}).callVirtualBase_CreateEditor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QItemEditorFactory) callVirtualBase_ValuePropertyName(userType int) []byte {

	var _bytearray C.struct_miqt_string = C.QItemEditorFactory_virtualbase_valuePropertyName(unsafe.Pointer(this.h), (C.int)(userType))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}
func (this *QItemEditorFactory) OnValuePropertyName(slot func(super func(userType int) []byte, userType int) []byte) {
	ok := C.QItemEditorFactory_override_virtual_valuePropertyName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QItemEditorFactory_valuePropertyName
func miqt_exec_callback_QItemEditorFactory_valuePropertyName(self *C.QItemEditorFactory, cb C.intptr_t, userType C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(userType int) []byte, userType int) []byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(userType)

	virtualReturn := gofunc((&QItemEditorFactory{h: self}).callVirtualBase_ValuePropertyName, slotval1)
	virtualReturn_alias := C.struct_miqt_string{}
	if len(virtualReturn) > 0 {
		virtualReturn_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn[0]))
	} else {
		virtualReturn_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	virtualReturn_alias.len = C.size_t(len(virtualReturn))

	return virtualReturn_alias

}

// Delete this object from C++ memory.
func (this *QItemEditorFactory) Delete() {
	C.QItemEditorFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QItemEditorFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QItemEditorFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
