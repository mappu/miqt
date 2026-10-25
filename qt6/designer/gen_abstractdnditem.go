package designer

/*

#include "gen_abstractdnditem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QDesignerDnDItemInterface__DropType int

const (
	QDesignerDnDItemInterface__MoveDrop QDesignerDnDItemInterface__DropType = 0
	QDesignerDnDItemInterface__CopyDrop QDesignerDnDItemInterface__DropType = 1
)

type QDesignerDnDItemInterface struct {
	h  *C.QDesignerDnDItemInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDesignerDnDItemInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

func (this *QDesignerDnDItemInterface) Widget() *qt6.QWidget {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerDnDItemInterface_widget(this.h)))
}

func (this *QDesignerDnDItemInterface) Decoration() *qt6.QWidget {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerDnDItemInterface_decoration(this.h)))
}

func (this *QDesignerDnDItemInterface) HotSpot() *qt6.QPoint {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQPoint(unsafe.Pointer(C.QDesignerDnDItemInterface_hotSpot(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerDnDItemInterface) Type() QDesignerDnDItemInterface__DropType {
	defer runtime.KeepAlive(this)
	return (QDesignerDnDItemInterface__DropType)(C.QDesignerDnDItemInterface_type(this.h))
}

func (this *QDesignerDnDItemInterface) Source() *qt6.QWidget {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerDnDItemInterface_source(this.h)))
}

// Delete this object from C++ memory.
func (this *QDesignerDnDItemInterface) Delete() {
	C.QDesignerDnDItemInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDesignerDnDItemInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDesignerDnDItemInterface_delete((*C.QDesignerDnDItemInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}
