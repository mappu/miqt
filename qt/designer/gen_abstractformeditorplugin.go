package designer

/*

#include "gen_abstractformeditorplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QDesignerFormEditorPluginInterface struct {
	h  *C.QDesignerFormEditorPluginInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDesignerFormEditorPluginInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

func (this *QDesignerFormEditorPluginInterface) IsInitialized() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDesignerFormEditorPluginInterface_isInitialized(this.h))
}

func (this *QDesignerFormEditorPluginInterface) Initialize(core *QDesignerFormEditorInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(core)
	C.QDesignerFormEditorPluginInterface_initialize(this.h, core.cPointer())
}

func (this *QDesignerFormEditorPluginInterface) Action() *qt.QAction {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormEditorPluginInterface_action(this.h)))
}

func (this *QDesignerFormEditorPluginInterface) Core() *QDesignerFormEditorInterface {
	defer runtime.KeepAlive(this)
	return newQDesignerFormEditorInterface(C.QDesignerFormEditorPluginInterface_core(this.h))
}

func (this *QDesignerFormEditorPluginInterface) OperatorAssign(param1 *QDesignerFormEditorPluginInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QDesignerFormEditorPluginInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerFormEditorPluginInterface) Delete() {
	C.QDesignerFormEditorPluginInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDesignerFormEditorPluginInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDesignerFormEditorPluginInterface_delete((*C.QDesignerFormEditorPluginInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}
