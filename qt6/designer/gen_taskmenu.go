package designer

/*

#include "gen_taskmenu.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerTaskMenuExtension struct {
	h *C.QDesignerTaskMenuExtension
}

func (this *QDesignerTaskMenuExtension) cPointer() *C.QDesignerTaskMenuExtension {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerTaskMenuExtension) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerTaskMenuExtension constructs the type using only CGO pointers.
func newQDesignerTaskMenuExtension(h *C.QDesignerTaskMenuExtension) *QDesignerTaskMenuExtension {
	if h == nil {
		return nil
	}

	return &QDesignerTaskMenuExtension{h: h}
}

// UnsafeNewQDesignerTaskMenuExtension constructs the type using only unsafe pointers.
func UnsafeNewQDesignerTaskMenuExtension(h unsafe.Pointer) *QDesignerTaskMenuExtension {
	return newQDesignerTaskMenuExtension((*C.QDesignerTaskMenuExtension)(h))
}

// NewQDesignerTaskMenuExtension constructs a new QDesignerTaskMenuExtension object.
func NewQDesignerTaskMenuExtension() *QDesignerTaskMenuExtension {

	return newQDesignerTaskMenuExtension(C.QDesignerTaskMenuExtension_new())
}

func (this *QDesignerTaskMenuExtension) PreferredEditAction() *qt6.QAction {
	return qt6.UnsafeNewQAction(unsafe.Pointer(C.QDesignerTaskMenuExtension_preferredEditAction(this.h)))
}

func (this *QDesignerTaskMenuExtension) TaskActions() []*qt6.QAction {
	var _ma C.struct_miqt_array = C.QDesignerTaskMenuExtension_taskActions(this.h)
	_ret := make([]*qt6.QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt6.UnsafeNewQAction(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QDesignerTaskMenuExtension) callVirtualBase_PreferredEditAction() *qt6.QAction {

	return qt6.UnsafeNewQAction(unsafe.Pointer(C.QDesignerTaskMenuExtension_virtualbase_preferredEditAction(unsafe.Pointer(this.h))))

}
func (this *QDesignerTaskMenuExtension) OnPreferredEditAction(slot func(super func() *qt6.QAction) *qt6.QAction) {
	ok := C.QDesignerTaskMenuExtension_override_virtual_preferredEditAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerTaskMenuExtension_preferredEditAction
func miqt_exec_callback_QDesignerTaskMenuExtension_preferredEditAction(self *C.QDesignerTaskMenuExtension, cb C.intptr_t) *C.QAction {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QAction) *qt6.QAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerTaskMenuExtension{h: self}).callVirtualBase_PreferredEditAction)

	return (*C.QAction)(virtualReturn.UnsafePointer())

}
func (this *QDesignerTaskMenuExtension) OnTaskActions(slot func() []*qt6.QAction) {
	ok := C.QDesignerTaskMenuExtension_override_virtual_taskActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerTaskMenuExtension_taskActions
func miqt_exec_callback_QDesignerTaskMenuExtension_taskActions(self *C.QDesignerTaskMenuExtension, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func() []*qt6.QAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QAction)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QDesignerTaskMenuExtension) Delete() {
	C.QDesignerTaskMenuExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerTaskMenuExtension) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerTaskMenuExtension) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
