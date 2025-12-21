package designer

/*

#include "gen_abstractoptionspage.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerOptionsPageInterface struct {
	h *C.QDesignerOptionsPageInterface
}

func (this *QDesignerOptionsPageInterface) cPointer() *C.QDesignerOptionsPageInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerOptionsPageInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerOptionsPageInterface constructs the type using only CGO pointers.
func newQDesignerOptionsPageInterface(h *C.QDesignerOptionsPageInterface) *QDesignerOptionsPageInterface {
	if h == nil {
		return nil
	}

	return &QDesignerOptionsPageInterface{h: h}
}

// UnsafeNewQDesignerOptionsPageInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerOptionsPageInterface(h unsafe.Pointer) *QDesignerOptionsPageInterface {
	return newQDesignerOptionsPageInterface((*C.QDesignerOptionsPageInterface)(h))
}

// NewQDesignerOptionsPageInterface constructs a new QDesignerOptionsPageInterface object.
func NewQDesignerOptionsPageInterface() *QDesignerOptionsPageInterface {

	return newQDesignerOptionsPageInterface(C.QDesignerOptionsPageInterface_new())
}

func (this *QDesignerOptionsPageInterface) Name() string {
	var _ms C.struct_miqt_string = C.QDesignerOptionsPageInterface_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerOptionsPageInterface) CreatePage(parent *qt6.QWidget) *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerOptionsPageInterface_createPage(this.h, (*C.QWidget)(parent.UnsafePointer()))))
}

func (this *QDesignerOptionsPageInterface) Apply() {
	C.QDesignerOptionsPageInterface_apply(this.h)
}

func (this *QDesignerOptionsPageInterface) Finish() {
	C.QDesignerOptionsPageInterface_finish(this.h)
}
func (this *QDesignerOptionsPageInterface) OnName(slot func() string) {
	ok := C.QDesignerOptionsPageInterface_override_virtual_name(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerOptionsPageInterface_name
func miqt_exec_callback_QDesignerOptionsPageInterface_name(self *C.QDesignerOptionsPageInterface, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QDesignerOptionsPageInterface) OnCreatePage(slot func(parent *qt6.QWidget) *qt6.QWidget) {
	ok := C.QDesignerOptionsPageInterface_override_virtual_createPage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerOptionsPageInterface_createPage
func miqt_exec_callback_QDesignerOptionsPageInterface_createPage(self *C.QDesignerOptionsPageInterface, cb C.intptr_t, parent *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *qt6.QWidget) *qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(parent))

	virtualReturn := gofunc(slotval1)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}
func (this *QDesignerOptionsPageInterface) OnApply(slot func()) {
	ok := C.QDesignerOptionsPageInterface_override_virtual_apply(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerOptionsPageInterface_apply
func miqt_exec_callback_QDesignerOptionsPageInterface_apply(self *C.QDesignerOptionsPageInterface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QDesignerOptionsPageInterface) OnFinish(slot func()) {
	ok := C.QDesignerOptionsPageInterface_override_virtual_finish(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerOptionsPageInterface_finish
func miqt_exec_callback_QDesignerOptionsPageInterface_finish(self *C.QDesignerOptionsPageInterface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

// Delete this object from C++ memory.
func (this *QDesignerOptionsPageInterface) Delete() {
	C.QDesignerOptionsPageInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerOptionsPageInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerOptionsPageInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
