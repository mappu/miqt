package designer

/*

#include "gen_abstractformeditorplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerFormEditorPluginInterface struct {
	h *C.QDesignerFormEditorPluginInterface
}

func (this *QDesignerFormEditorPluginInterface) cPointer() *C.QDesignerFormEditorPluginInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerFormEditorPluginInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerFormEditorPluginInterface constructs the type using only CGO pointers.
func newQDesignerFormEditorPluginInterface(h *C.QDesignerFormEditorPluginInterface) *QDesignerFormEditorPluginInterface {
	if h == nil {
		return nil
	}

	return &QDesignerFormEditorPluginInterface{h: h}
}

// UnsafeNewQDesignerFormEditorPluginInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerFormEditorPluginInterface(h unsafe.Pointer) *QDesignerFormEditorPluginInterface {
	return newQDesignerFormEditorPluginInterface((*C.QDesignerFormEditorPluginInterface)(h))
}

// NewQDesignerFormEditorPluginInterface constructs a new QDesignerFormEditorPluginInterface object.
func NewQDesignerFormEditorPluginInterface() *QDesignerFormEditorPluginInterface {

	return newQDesignerFormEditorPluginInterface(C.QDesignerFormEditorPluginInterface_new())
}

func (this *QDesignerFormEditorPluginInterface) IsInitialized() bool {
	return (bool)(C.QDesignerFormEditorPluginInterface_isInitialized(this.h))
}

func (this *QDesignerFormEditorPluginInterface) Initialize(core *QDesignerFormEditorInterface) {
	C.QDesignerFormEditorPluginInterface_initialize(this.h, core.cPointer())
}

func (this *QDesignerFormEditorPluginInterface) Action() *qt6.QAction {
	return qt6.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormEditorPluginInterface_action(this.h)))
}

func (this *QDesignerFormEditorPluginInterface) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerFormEditorPluginInterface_core(this.h))
}
func (this *QDesignerFormEditorPluginInterface) OnIsInitialized(slot func() bool) {
	ok := C.QDesignerFormEditorPluginInterface_override_virtual_isInitialized(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormEditorPluginInterface_isInitialized
func miqt_exec_callback_QDesignerFormEditorPluginInterface_isInitialized(self *C.QDesignerFormEditorPluginInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerFormEditorPluginInterface) OnInitialize(slot func(core *QDesignerFormEditorInterface)) {
	ok := C.QDesignerFormEditorPluginInterface_override_virtual_initialize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormEditorPluginInterface_initialize
func miqt_exec_callback_QDesignerFormEditorPluginInterface_initialize(self *C.QDesignerFormEditorPluginInterface, cb C.intptr_t, core *C.QDesignerFormEditorInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(core *QDesignerFormEditorInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormEditorInterface(core)

	gofunc(slotval1)

}
func (this *QDesignerFormEditorPluginInterface) OnAction(slot func() *qt6.QAction) {
	ok := C.QDesignerFormEditorPluginInterface_override_virtual_action(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormEditorPluginInterface_action
func miqt_exec_callback_QDesignerFormEditorPluginInterface_action(self *C.QDesignerFormEditorPluginInterface, cb C.intptr_t) *C.QAction {
	gofunc, ok := cgo.Handle(cb).Value().(func() *qt6.QAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (*C.QAction)(virtualReturn.UnsafePointer())

}
func (this *QDesignerFormEditorPluginInterface) OnCore(slot func() *QDesignerFormEditorInterface) {
	ok := C.QDesignerFormEditorPluginInterface_override_virtual_core(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormEditorPluginInterface_core
func miqt_exec_callback_QDesignerFormEditorPluginInterface_core(self *C.QDesignerFormEditorPluginInterface, cb C.intptr_t) *C.QDesignerFormEditorInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QDesignerFormEditorInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QDesignerFormEditorPluginInterface) Delete() {
	C.QDesignerFormEditorPluginInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerFormEditorPluginInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerFormEditorPluginInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
