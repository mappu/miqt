package designer

/*

#include "gen_abstractformwindowcursor.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerFormWindowCursorInterface__MoveOperation int

const (
	QDesignerFormWindowCursorInterface__NoMove QDesignerFormWindowCursorInterface__MoveOperation = 0
	QDesignerFormWindowCursorInterface__Start  QDesignerFormWindowCursorInterface__MoveOperation = 1
	QDesignerFormWindowCursorInterface__End    QDesignerFormWindowCursorInterface__MoveOperation = 2
	QDesignerFormWindowCursorInterface__Next   QDesignerFormWindowCursorInterface__MoveOperation = 3
	QDesignerFormWindowCursorInterface__Prev   QDesignerFormWindowCursorInterface__MoveOperation = 4
	QDesignerFormWindowCursorInterface__Left   QDesignerFormWindowCursorInterface__MoveOperation = 5
	QDesignerFormWindowCursorInterface__Right  QDesignerFormWindowCursorInterface__MoveOperation = 6
	QDesignerFormWindowCursorInterface__Up     QDesignerFormWindowCursorInterface__MoveOperation = 7
	QDesignerFormWindowCursorInterface__Down   QDesignerFormWindowCursorInterface__MoveOperation = 8
)

type QDesignerFormWindowCursorInterface__MoveMode int

const (
	QDesignerFormWindowCursorInterface__MoveAnchor QDesignerFormWindowCursorInterface__MoveMode = 0
	QDesignerFormWindowCursorInterface__KeepAnchor QDesignerFormWindowCursorInterface__MoveMode = 1
)

type QDesignerFormWindowCursorInterface struct {
	h *C.QDesignerFormWindowCursorInterface
}

func (this *QDesignerFormWindowCursorInterface) cPointer() *C.QDesignerFormWindowCursorInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerFormWindowCursorInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerFormWindowCursorInterface constructs the type using only CGO pointers.
func newQDesignerFormWindowCursorInterface(h *C.QDesignerFormWindowCursorInterface) *QDesignerFormWindowCursorInterface {
	if h == nil {
		return nil
	}

	return &QDesignerFormWindowCursorInterface{h: h}
}

// UnsafeNewQDesignerFormWindowCursorInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerFormWindowCursorInterface(h unsafe.Pointer) *QDesignerFormWindowCursorInterface {
	return newQDesignerFormWindowCursorInterface((*C.QDesignerFormWindowCursorInterface)(h))
}

// NewQDesignerFormWindowCursorInterface constructs a new QDesignerFormWindowCursorInterface object.
func NewQDesignerFormWindowCursorInterface() *QDesignerFormWindowCursorInterface {

	return newQDesignerFormWindowCursorInterface(C.QDesignerFormWindowCursorInterface_new())
}

func (this *QDesignerFormWindowCursorInterface) FormWindow() *QDesignerFormWindowInterface {
	return newQDesignerFormWindowInterface(C.QDesignerFormWindowCursorInterface_formWindow(this.h))
}

func (this *QDesignerFormWindowCursorInterface) MovePosition(op QDesignerFormWindowCursorInterface__MoveOperation, mode QDesignerFormWindowCursorInterface__MoveMode) bool {
	return (bool)(C.QDesignerFormWindowCursorInterface_movePosition(this.h, (C.int)(op), (C.int)(mode)))
}

func (this *QDesignerFormWindowCursorInterface) Position() int {
	return (int)(C.QDesignerFormWindowCursorInterface_position(this.h))
}

func (this *QDesignerFormWindowCursorInterface) SetPosition(pos int, mode QDesignerFormWindowCursorInterface__MoveMode) {
	C.QDesignerFormWindowCursorInterface_setPosition(this.h, (C.int)(pos), (C.int)(mode))
}

func (this *QDesignerFormWindowCursorInterface) Current() *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerFormWindowCursorInterface_current(this.h)))
}

func (this *QDesignerFormWindowCursorInterface) WidgetCount() int {
	return (int)(C.QDesignerFormWindowCursorInterface_widgetCount(this.h))
}

func (this *QDesignerFormWindowCursorInterface) Widget(index int) *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerFormWindowCursorInterface_widget(this.h, (C.int)(index))))
}

func (this *QDesignerFormWindowCursorInterface) HasSelection() bool {
	return (bool)(C.QDesignerFormWindowCursorInterface_hasSelection(this.h))
}

func (this *QDesignerFormWindowCursorInterface) SelectedWidgetCount() int {
	return (int)(C.QDesignerFormWindowCursorInterface_selectedWidgetCount(this.h))
}

func (this *QDesignerFormWindowCursorInterface) SelectedWidget(index int) *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerFormWindowCursorInterface_selectedWidget(this.h, (C.int)(index))))
}

func (this *QDesignerFormWindowCursorInterface) SetProperty(name string, value *qt6.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerFormWindowCursorInterface_setProperty(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerFormWindowCursorInterface) SetWidgetProperty(widget *qt6.QWidget, name string, value *qt6.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerFormWindowCursorInterface_setWidgetProperty(this.h, (*C.QWidget)(widget.UnsafePointer()), name_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerFormWindowCursorInterface) ResetWidgetProperty(widget *qt6.QWidget, name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerFormWindowCursorInterface_resetWidgetProperty(this.h, (*C.QWidget)(widget.UnsafePointer()), name_ms)
}

func (this *QDesignerFormWindowCursorInterface) IsWidgetSelected(widget *qt6.QWidget) bool {
	return (bool)(C.QDesignerFormWindowCursorInterface_isWidgetSelected(this.h, (*C.QWidget)(widget.UnsafePointer())))
}
func (this *QDesignerFormWindowCursorInterface) OnFormWindow(slot func() *QDesignerFormWindowInterface) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_formWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_formWindow
func miqt_exec_callback_QDesignerFormWindowCursorInterface_formWindow(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t) *C.QDesignerFormWindowInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QDesignerFormWindowInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QDesignerFormWindowCursorInterface) OnMovePosition(slot func(op QDesignerFormWindowCursorInterface__MoveOperation, mode QDesignerFormWindowCursorInterface__MoveMode) bool) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_movePosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_movePosition
func miqt_exec_callback_QDesignerFormWindowCursorInterface_movePosition(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t, op C.int, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(op QDesignerFormWindowCursorInterface__MoveOperation, mode QDesignerFormWindowCursorInterface__MoveMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDesignerFormWindowCursorInterface__MoveOperation)(op)

	slotval2 := (QDesignerFormWindowCursorInterface__MoveMode)(mode)

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerFormWindowCursorInterface) OnPosition(slot func() int) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_position(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_position
func miqt_exec_callback_QDesignerFormWindowCursorInterface_position(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerFormWindowCursorInterface) OnSetPosition(slot func(pos int, mode QDesignerFormWindowCursorInterface__MoveMode)) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_setPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_setPosition
func miqt_exec_callback_QDesignerFormWindowCursorInterface_setPosition(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t, pos C.int, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos int, mode QDesignerFormWindowCursorInterface__MoveMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(pos)

	slotval2 := (QDesignerFormWindowCursorInterface__MoveMode)(mode)

	gofunc(slotval1, slotval2)

}
func (this *QDesignerFormWindowCursorInterface) OnCurrent(slot func() *qt6.QWidget) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_current(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_current
func miqt_exec_callback_QDesignerFormWindowCursorInterface_current(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func() *qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}
func (this *QDesignerFormWindowCursorInterface) OnWidgetCount(slot func() int) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_widgetCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_widgetCount
func miqt_exec_callback_QDesignerFormWindowCursorInterface_widgetCount(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerFormWindowCursorInterface) OnWidget(slot func(index int) *qt6.QWidget) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_widget
func miqt_exec_callback_QDesignerFormWindowCursorInterface_widget(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t, index C.int) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) *qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}
func (this *QDesignerFormWindowCursorInterface) OnHasSelection(slot func() bool) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_hasSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_hasSelection
func miqt_exec_callback_QDesignerFormWindowCursorInterface_hasSelection(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerFormWindowCursorInterface) OnSelectedWidgetCount(slot func() int) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_selectedWidgetCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_selectedWidgetCount
func miqt_exec_callback_QDesignerFormWindowCursorInterface_selectedWidgetCount(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerFormWindowCursorInterface) OnSelectedWidget(slot func(index int) *qt6.QWidget) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_selectedWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_selectedWidget
func miqt_exec_callback_QDesignerFormWindowCursorInterface_selectedWidget(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t, index C.int) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) *qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}
func (this *QDesignerFormWindowCursorInterface) OnSetProperty(slot func(name string, value *qt6.QVariant)) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_setProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_setProperty
func miqt_exec_callback_QDesignerFormWindowCursorInterface_setProperty(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2)

}
func (this *QDesignerFormWindowCursorInterface) OnSetWidgetProperty(slot func(widget *qt6.QWidget, name string, value *qt6.QVariant)) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_setWidgetProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_setWidgetProperty
func miqt_exec_callback_QDesignerFormWindowCursorInterface_setWidgetProperty(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t, widget *C.QWidget, name C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt6.QWidget, name string, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval2 := name_ret
	slotval3 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2, slotval3)

}
func (this *QDesignerFormWindowCursorInterface) OnResetWidgetProperty(slot func(widget *qt6.QWidget, name string)) {
	ok := C.QDesignerFormWindowCursorInterface_override_virtual_resetWidgetProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowCursorInterface_resetWidgetProperty
func miqt_exec_callback_QDesignerFormWindowCursorInterface_resetWidgetProperty(self *C.QDesignerFormWindowCursorInterface, cb C.intptr_t, widget *C.QWidget, name C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt6.QWidget, name string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval2 := name_ret

	gofunc(slotval1, slotval2)

}

// Delete this object from C++ memory.
func (this *QDesignerFormWindowCursorInterface) Delete() {
	C.QDesignerFormWindowCursorInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerFormWindowCursorInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerFormWindowCursorInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
