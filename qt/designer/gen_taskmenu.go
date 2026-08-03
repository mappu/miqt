package designer

/*

#include "gen_taskmenu.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
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

func (this *QDesignerTaskMenuExtension) PreferredEditAction() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerTaskMenuExtension_preferredEditAction(this.h)))
}

func (this *QDesignerTaskMenuExtension) TaskActions() []*qt.QAction {
	var _ma C.struct_miqt_array = C.QDesignerTaskMenuExtension_taskActions(this.h)
	_ret := make([]*qt.QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQAction(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QDesignerTaskMenuExtension) OperatorAssign(param1 *QDesignerTaskMenuExtension) {
	C.QDesignerTaskMenuExtension_operatorAssign(this.h, param1.cPointer())
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
