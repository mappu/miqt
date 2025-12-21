package designer

/*

#include "gen_abstractdnditem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QDesignerDnDItemInterface__DropType int

const (
	QDesignerDnDItemInterface__MoveDrop QDesignerDnDItemInterface__DropType = 0
	QDesignerDnDItemInterface__CopyDrop QDesignerDnDItemInterface__DropType = 1
)

type QDesignerDnDItemInterface struct {
	h *C.QDesignerDnDItemInterface
}

func (this *QDesignerDnDItemInterface) cPointer() *C.QDesignerDnDItemInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerDnDItemInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerDnDItemInterface constructs the type using only CGO pointers.
func newQDesignerDnDItemInterface(h *C.QDesignerDnDItemInterface) *QDesignerDnDItemInterface {
	if h == nil {
		return nil
	}

	return &QDesignerDnDItemInterface{h: h}
}

// UnsafeNewQDesignerDnDItemInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerDnDItemInterface(h unsafe.Pointer) *QDesignerDnDItemInterface {
	return newQDesignerDnDItemInterface((*C.QDesignerDnDItemInterface)(h))
}

func (this *QDesignerDnDItemInterface) Widget() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerDnDItemInterface_widget(this.h)))
}

func (this *QDesignerDnDItemInterface) Decoration() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerDnDItemInterface_decoration(this.h)))
}

func (this *QDesignerDnDItemInterface) HotSpot() *qt.QPoint {
	_goptr := qt.UnsafeNewQPoint(unsafe.Pointer(C.QDesignerDnDItemInterface_hotSpot(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerDnDItemInterface) Type() QDesignerDnDItemInterface__DropType {
	return (QDesignerDnDItemInterface__DropType)(C.QDesignerDnDItemInterface_type(this.h))
}

func (this *QDesignerDnDItemInterface) Source() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerDnDItemInterface_source(this.h)))
}

func (this *QDesignerDnDItemInterface) OperatorAssign(param1 *QDesignerDnDItemInterface) {
	C.QDesignerDnDItemInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerDnDItemInterface) Delete() {
	C.QDesignerDnDItemInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerDnDItemInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerDnDItemInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
