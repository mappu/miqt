package designer

/*

#include "gen_container.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
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

// NewQDesignerContainerExtension constructs a new QDesignerContainerExtension object.
func NewQDesignerContainerExtension() *QDesignerContainerExtension {

	return newQDesignerContainerExtension(C.QDesignerContainerExtension_new())
}

func (this *QDesignerContainerExtension) Count() int {
	return (int)(C.QDesignerContainerExtension_count(this.h))
}

func (this *QDesignerContainerExtension) Widget(index int) *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerContainerExtension_widget(this.h, (C.int)(index))))
}

func (this *QDesignerContainerExtension) CurrentIndex() int {
	return (int)(C.QDesignerContainerExtension_currentIndex(this.h))
}

func (this *QDesignerContainerExtension) SetCurrentIndex(index int) {
	C.QDesignerContainerExtension_setCurrentIndex(this.h, (C.int)(index))
}

func (this *QDesignerContainerExtension) CanAddWidget() bool {
	return (bool)(C.QDesignerContainerExtension_canAddWidget(this.h))
}

func (this *QDesignerContainerExtension) AddWidget(widget *qt6.QWidget) {
	C.QDesignerContainerExtension_addWidget(this.h, (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QDesignerContainerExtension) InsertWidget(index int, widget *qt6.QWidget) {
	C.QDesignerContainerExtension_insertWidget(this.h, (C.int)(index), (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QDesignerContainerExtension) CanRemove(index int) bool {
	return (bool)(C.QDesignerContainerExtension_canRemove(this.h, (C.int)(index)))
}

func (this *QDesignerContainerExtension) Remove(index int) {
	C.QDesignerContainerExtension_remove(this.h, (C.int)(index))
}
func (this *QDesignerContainerExtension) OnCount(slot func() int) {
	ok := C.QDesignerContainerExtension_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerContainerExtension_count
func miqt_exec_callback_QDesignerContainerExtension_count(self *C.QDesignerContainerExtension, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerContainerExtension) OnWidget(slot func(index int) *qt6.QWidget) {
	ok := C.QDesignerContainerExtension_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerContainerExtension_widget
func miqt_exec_callback_QDesignerContainerExtension_widget(self *C.QDesignerContainerExtension, cb C.intptr_t, index C.int) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) *qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}
func (this *QDesignerContainerExtension) OnCurrentIndex(slot func() int) {
	ok := C.QDesignerContainerExtension_override_virtual_currentIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerContainerExtension_currentIndex
func miqt_exec_callback_QDesignerContainerExtension_currentIndex(self *C.QDesignerContainerExtension, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerContainerExtension) OnSetCurrentIndex(slot func(index int)) {
	ok := C.QDesignerContainerExtension_override_virtual_setCurrentIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerContainerExtension_setCurrentIndex
func miqt_exec_callback_QDesignerContainerExtension_setCurrentIndex(self *C.QDesignerContainerExtension, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)

}
func (this *QDesignerContainerExtension) OnCanAddWidget(slot func() bool) {
	ok := C.QDesignerContainerExtension_override_virtual_canAddWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerContainerExtension_canAddWidget
func miqt_exec_callback_QDesignerContainerExtension_canAddWidget(self *C.QDesignerContainerExtension, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerContainerExtension) OnAddWidget(slot func(widget *qt6.QWidget)) {
	ok := C.QDesignerContainerExtension_override_virtual_addWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerContainerExtension_addWidget
func miqt_exec_callback_QDesignerContainerExtension_addWidget(self *C.QDesignerContainerExtension, cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc(slotval1)

}
func (this *QDesignerContainerExtension) OnInsertWidget(slot func(index int, widget *qt6.QWidget)) {
	ok := C.QDesignerContainerExtension_override_virtual_insertWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerContainerExtension_insertWidget
func miqt_exec_callback_QDesignerContainerExtension_insertWidget(self *C.QDesignerContainerExtension, cb C.intptr_t, index C.int, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc(slotval1, slotval2)

}
func (this *QDesignerContainerExtension) OnCanRemove(slot func(index int) bool) {
	ok := C.QDesignerContainerExtension_override_virtual_canRemove(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerContainerExtension_canRemove
func miqt_exec_callback_QDesignerContainerExtension_canRemove(self *C.QDesignerContainerExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerContainerExtension) OnRemove(slot func(index int)) {
	ok := C.QDesignerContainerExtension_override_virtual_remove(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerContainerExtension_remove
func miqt_exec_callback_QDesignerContainerExtension_remove(self *C.QDesignerContainerExtension, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)

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
