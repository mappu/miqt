package designer

/*

#include "gen_container.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QDesignerContainerExtension struct {
	h *C.QDesignerContainerExtension
}

func (this *QDesignerContainerExtension) cPointer() *C.QDesignerContainerExtension {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerContainerExtension) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerContainerExtension constructs the type using only CGO pointers.
func newQDesignerContainerExtension(h *C.QDesignerContainerExtension) *QDesignerContainerExtension {
	if h == nil {
		return nil
	}

	return &QDesignerContainerExtension{h: h}
}

// UnsafeNewQDesignerContainerExtension constructs the type using only unsafe pointers.
func UnsafeNewQDesignerContainerExtension(h unsafe.Pointer) *QDesignerContainerExtension {
	return newQDesignerContainerExtension((*C.QDesignerContainerExtension)(h))
}

func (this *QDesignerContainerExtension) Count() int {
	return (int)(C.QDesignerContainerExtension_count(this.h))
}

func (this *QDesignerContainerExtension) Widget(index int) *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerContainerExtension_widget(this.h, (C.int)(index))))
}

func (this *QDesignerContainerExtension) CurrentIndex() int {
	return (int)(C.QDesignerContainerExtension_currentIndex(this.h))
}

func (this *QDesignerContainerExtension) SetCurrentIndex(index int) {
	C.QDesignerContainerExtension_setCurrentIndex(this.h, (C.int)(index))
}

func (this *QDesignerContainerExtension) AddWidget(widget *qt.QWidget) {
	C.QDesignerContainerExtension_addWidget(this.h, (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QDesignerContainerExtension) InsertWidget(index int, widget *qt.QWidget) {
	C.QDesignerContainerExtension_insertWidget(this.h, (C.int)(index), (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QDesignerContainerExtension) Remove(index int) {
	C.QDesignerContainerExtension_remove(this.h, (C.int)(index))
}

func (this *QDesignerContainerExtension) CanAddWidget() bool {
	return (bool)(C.QDesignerContainerExtension_canAddWidget(this.h))
}

func (this *QDesignerContainerExtension) CanRemove(index int) bool {
	return (bool)(C.QDesignerContainerExtension_canRemove(this.h, (C.int)(index)))
}

func (this *QDesignerContainerExtension) OperatorAssign(param1 *QDesignerContainerExtension) {
	C.QDesignerContainerExtension_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerContainerExtension) Delete() {
	C.QDesignerContainerExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerContainerExtension) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerContainerExtension) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
