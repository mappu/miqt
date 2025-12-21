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

func (this *QDesignerFormEditorPluginInterface) IsInitialized() bool {
	return (bool)(C.QDesignerFormEditorPluginInterface_isInitialized(this.h))
}

func (this *QDesignerFormEditorPluginInterface) Initialize(core *QDesignerFormEditorInterface) {
	C.QDesignerFormEditorPluginInterface_initialize(this.h, core.cPointer())
}

func (this *QDesignerFormEditorPluginInterface) Action() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormEditorPluginInterface_action(this.h)))
}

func (this *QDesignerFormEditorPluginInterface) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerFormEditorPluginInterface_core(this.h))
}

func (this *QDesignerFormEditorPluginInterface) OperatorAssign(param1 *QDesignerFormEditorPluginInterface) {
	C.QDesignerFormEditorPluginInterface_operatorAssign(this.h, param1.cPointer())
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
