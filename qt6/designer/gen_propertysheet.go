package designer

/*

#include "gen_propertysheet.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerPropertySheetExtension struct {
	h *C.QDesignerPropertySheetExtension
}

func (this *QDesignerPropertySheetExtension) cPointer() *C.QDesignerPropertySheetExtension {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerPropertySheetExtension) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerPropertySheetExtension constructs the type using only CGO pointers.
func newQDesignerPropertySheetExtension(h *C.QDesignerPropertySheetExtension) *QDesignerPropertySheetExtension {
	if h == nil {
		return nil
	}

	return &QDesignerPropertySheetExtension{h: h}
}

// UnsafeNewQDesignerPropertySheetExtension constructs the type using only unsafe pointers.
func UnsafeNewQDesignerPropertySheetExtension(h unsafe.Pointer) *QDesignerPropertySheetExtension {
	return newQDesignerPropertySheetExtension((*C.QDesignerPropertySheetExtension)(h))
}

// NewQDesignerPropertySheetExtension constructs a new QDesignerPropertySheetExtension object.
func NewQDesignerPropertySheetExtension() *QDesignerPropertySheetExtension {

	return newQDesignerPropertySheetExtension(C.QDesignerPropertySheetExtension_new())
}

func (this *QDesignerPropertySheetExtension) Count() int {
	return (int)(C.QDesignerPropertySheetExtension_count(this.h))
}

func (this *QDesignerPropertySheetExtension) IndexOf(name string) int {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (int)(C.QDesignerPropertySheetExtension_indexOf(this.h, name_ms))
}

func (this *QDesignerPropertySheetExtension) PropertyName(index int) string {
	var _ms C.struct_miqt_string = C.QDesignerPropertySheetExtension_propertyName(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerPropertySheetExtension) PropertyGroup(index int) string {
	var _ms C.struct_miqt_string = C.QDesignerPropertySheetExtension_propertyGroup(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerPropertySheetExtension) SetPropertyGroup(index int, group string) {
	group_ms := C.struct_miqt_string{}
	group_ms.data = C.CString(group)
	group_ms.len = C.size_t(len(group))
	defer C.free(unsafe.Pointer(group_ms.data))
	C.QDesignerPropertySheetExtension_setPropertyGroup(this.h, (C.int)(index), group_ms)
}

func (this *QDesignerPropertySheetExtension) HasReset(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_hasReset(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) Reset(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_reset(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) IsVisible(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_isVisible(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) SetVisible(index int, b bool) {
	C.QDesignerPropertySheetExtension_setVisible(this.h, (C.int)(index), (C.bool)(b))
}

func (this *QDesignerPropertySheetExtension) IsAttribute(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_isAttribute(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) SetAttribute(index int, b bool) {
	C.QDesignerPropertySheetExtension_setAttribute(this.h, (C.int)(index), (C.bool)(b))
}

func (this *QDesignerPropertySheetExtension) Property(index int) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QDesignerPropertySheetExtension_property(this.h, (C.int)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerPropertySheetExtension) SetProperty(index int, value *qt6.QVariant) {
	C.QDesignerPropertySheetExtension_setProperty(this.h, (C.int)(index), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerPropertySheetExtension) IsChanged(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_isChanged(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) SetChanged(index int, changed bool) {
	C.QDesignerPropertySheetExtension_setChanged(this.h, (C.int)(index), (C.bool)(changed))
}

func (this *QDesignerPropertySheetExtension) IsEnabled(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_isEnabled(this.h, (C.int)(index)))
}
func (this *QDesignerPropertySheetExtension) OnCount(slot func() int) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_count
func miqt_exec_callback_QDesignerPropertySheetExtension_count(self *C.QDesignerPropertySheetExtension, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerPropertySheetExtension) OnIndexOf(slot func(name string) int) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_indexOf
func miqt_exec_callback_QDesignerPropertySheetExtension_indexOf(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, name C.struct_miqt_string) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}
func (this *QDesignerPropertySheetExtension) OnPropertyName(slot func(index int) string) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_propertyName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_propertyName
func miqt_exec_callback_QDesignerPropertySheetExtension_propertyName(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QDesignerPropertySheetExtension) OnPropertyGroup(slot func(index int) string) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_propertyGroup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_propertyGroup
func miqt_exec_callback_QDesignerPropertySheetExtension_propertyGroup(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QDesignerPropertySheetExtension) OnSetPropertyGroup(slot func(index int, group string)) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_setPropertyGroup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_setPropertyGroup
func miqt_exec_callback_QDesignerPropertySheetExtension_setPropertyGroup(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int, group C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, group string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	var group_ms C.struct_miqt_string = group
	group_ret := C.GoStringN(group_ms.data, C.int(int64(group_ms.len)))
	C.free(unsafe.Pointer(group_ms.data))
	slotval2 := group_ret

	gofunc(slotval1, slotval2)

}
func (this *QDesignerPropertySheetExtension) OnHasReset(slot func(index int) bool) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_hasReset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_hasReset
func miqt_exec_callback_QDesignerPropertySheetExtension_hasReset(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerPropertySheetExtension) OnReset(slot func(index int) bool) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_reset
func miqt_exec_callback_QDesignerPropertySheetExtension_reset(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerPropertySheetExtension) OnIsVisible(slot func(index int) bool) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_isVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_isVisible
func miqt_exec_callback_QDesignerPropertySheetExtension_isVisible(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerPropertySheetExtension) OnSetVisible(slot func(index int, b bool)) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_setVisible
func miqt_exec_callback_QDesignerPropertySheetExtension_setVisible(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := (bool)(b)

	gofunc(slotval1, slotval2)

}
func (this *QDesignerPropertySheetExtension) OnIsAttribute(slot func(index int) bool) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_isAttribute(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_isAttribute
func miqt_exec_callback_QDesignerPropertySheetExtension_isAttribute(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerPropertySheetExtension) OnSetAttribute(slot func(index int, b bool)) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_setAttribute(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_setAttribute
func miqt_exec_callback_QDesignerPropertySheetExtension_setAttribute(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := (bool)(b)

	gofunc(slotval1, slotval2)

}
func (this *QDesignerPropertySheetExtension) OnProperty(slot func(index int) *qt6.QVariant) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_property(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_property
func miqt_exec_callback_QDesignerPropertySheetExtension_property(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}
func (this *QDesignerPropertySheetExtension) OnSetProperty(slot func(index int, value *qt6.QVariant)) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_setProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_setProperty
func miqt_exec_callback_QDesignerPropertySheetExtension_setProperty(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2)

}
func (this *QDesignerPropertySheetExtension) OnIsChanged(slot func(index int) bool) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_isChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_isChanged
func miqt_exec_callback_QDesignerPropertySheetExtension_isChanged(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerPropertySheetExtension) OnSetChanged(slot func(index int, changed bool)) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_setChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_setChanged
func miqt_exec_callback_QDesignerPropertySheetExtension_setChanged(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int, changed C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, changed bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := (bool)(changed)

	gofunc(slotval1, slotval2)

}
func (this *QDesignerPropertySheetExtension) OnIsEnabled(slot func(index int) bool) {
	ok := C.QDesignerPropertySheetExtension_override_virtual_isEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertySheetExtension_isEnabled
func miqt_exec_callback_QDesignerPropertySheetExtension_isEnabled(self *C.QDesignerPropertySheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QDesignerPropertySheetExtension) Delete() {
	C.QDesignerPropertySheetExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerPropertySheetExtension) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerPropertySheetExtension) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
