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
	h  *C.QDesignerTaskMenuExtension
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDesignerTaskMenuExtension) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerTaskMenuExtension_preferredEditAction(this.h)))
}

func (this *QDesignerTaskMenuExtension) TaskActions() []*qt.QAction {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QDesignerTaskMenuExtension_taskActions(this.h)
	_ret := make([]*qt.QAction, int(_ma.len))
	_outCast := unsafe.Slice((**C.QAction)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQAction(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QDesignerTaskMenuExtension) OperatorAssign(param1 *QDesignerTaskMenuExtension) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QDesignerTaskMenuExtension_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerTaskMenuExtension) Delete() {
	C.QDesignerTaskMenuExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDesignerTaskMenuExtension) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDesignerTaskMenuExtension_delete((*C.QDesignerTaskMenuExtension)(gc[0]))
	})
	this.miqtSetGC(gc)
}
