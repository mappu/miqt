package designer

/*

#include "gen_dynamicpropertysheet.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerDynamicPropertySheetExtension struct {
	h *C.QDesignerDynamicPropertySheetExtension
}

func (this *QDesignerDynamicPropertySheetExtension) cPointer() *C.QDesignerDynamicPropertySheetExtension {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerDynamicPropertySheetExtension) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerDynamicPropertySheetExtension constructs the type using only CGO pointers.
func newQDesignerDynamicPropertySheetExtension(h *C.QDesignerDynamicPropertySheetExtension) *QDesignerDynamicPropertySheetExtension {
	if h == nil {
		return nil
	}

	return &QDesignerDynamicPropertySheetExtension{h: h}
}

// UnsafeNewQDesignerDynamicPropertySheetExtension constructs the type using only unsafe pointers.
func UnsafeNewQDesignerDynamicPropertySheetExtension(h unsafe.Pointer) *QDesignerDynamicPropertySheetExtension {
	return newQDesignerDynamicPropertySheetExtension((*C.QDesignerDynamicPropertySheetExtension)(h))
}

// NewQDesignerDynamicPropertySheetExtension constructs a new QDesignerDynamicPropertySheetExtension object.
func NewQDesignerDynamicPropertySheetExtension() *QDesignerDynamicPropertySheetExtension {

	return newQDesignerDynamicPropertySheetExtension(C.QDesignerDynamicPropertySheetExtension_new())
}

func (this *QDesignerDynamicPropertySheetExtension) DynamicPropertiesAllowed() bool {
	return (bool)(C.QDesignerDynamicPropertySheetExtension_dynamicPropertiesAllowed(this.h))
}

func (this *QDesignerDynamicPropertySheetExtension) AddDynamicProperty(propertyName string, value *qt6.QVariant) int {
	propertyName_ms := C.struct_miqt_string{}
	propertyName_ms.data = C.CString(propertyName)
	propertyName_ms.len = C.size_t(len(propertyName))
	defer C.free(unsafe.Pointer(propertyName_ms.data))
	return (int)(C.QDesignerDynamicPropertySheetExtension_addDynamicProperty(this.h, propertyName_ms, (*C.QVariant)(value.UnsafePointer())))
}

func (this *QDesignerDynamicPropertySheetExtension) RemoveDynamicProperty(index int) bool {
	return (bool)(C.QDesignerDynamicPropertySheetExtension_removeDynamicProperty(this.h, (C.int)(index)))
}

func (this *QDesignerDynamicPropertySheetExtension) IsDynamicProperty(index int) bool {
	return (bool)(C.QDesignerDynamicPropertySheetExtension_isDynamicProperty(this.h, (C.int)(index)))
}

func (this *QDesignerDynamicPropertySheetExtension) CanAddDynamicProperty(propertyName string) bool {
	propertyName_ms := C.struct_miqt_string{}
	propertyName_ms.data = C.CString(propertyName)
	propertyName_ms.len = C.size_t(len(propertyName))
	defer C.free(unsafe.Pointer(propertyName_ms.data))
	return (bool)(C.QDesignerDynamicPropertySheetExtension_canAddDynamicProperty(this.h, propertyName_ms))
}
func (this *QDesignerDynamicPropertySheetExtension) OnDynamicPropertiesAllowed(slot func() bool) {
	ok := C.QDesignerDynamicPropertySheetExtension_override_virtual_dynamicPropertiesAllowed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerDynamicPropertySheetExtension_dynamicPropertiesAllowed
func miqt_exec_callback_QDesignerDynamicPropertySheetExtension_dynamicPropertiesAllowed(self *C.QDesignerDynamicPropertySheetExtension, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerDynamicPropertySheetExtension) OnAddDynamicProperty(slot func(propertyName string, value *qt6.QVariant) int) {
	ok := C.QDesignerDynamicPropertySheetExtension_override_virtual_addDynamicProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerDynamicPropertySheetExtension_addDynamicProperty
func miqt_exec_callback_QDesignerDynamicPropertySheetExtension_addDynamicProperty(self *C.QDesignerDynamicPropertySheetExtension, cb C.intptr_t, propertyName C.struct_miqt_string, value *C.QVariant) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(propertyName string, value *qt6.QVariant) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var propertyName_ms C.struct_miqt_string = propertyName
	propertyName_ret := C.GoStringN(propertyName_ms.data, C.int(int64(propertyName_ms.len)))
	C.free(unsafe.Pointer(propertyName_ms.data))
	slotval1 := propertyName_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.int)(virtualReturn)

}
func (this *QDesignerDynamicPropertySheetExtension) OnRemoveDynamicProperty(slot func(index int) bool) {
	ok := C.QDesignerDynamicPropertySheetExtension_override_virtual_removeDynamicProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerDynamicPropertySheetExtension_removeDynamicProperty
func miqt_exec_callback_QDesignerDynamicPropertySheetExtension_removeDynamicProperty(self *C.QDesignerDynamicPropertySheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerDynamicPropertySheetExtension) OnIsDynamicProperty(slot func(index int) bool) {
	ok := C.QDesignerDynamicPropertySheetExtension_override_virtual_isDynamicProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerDynamicPropertySheetExtension_isDynamicProperty
func miqt_exec_callback_QDesignerDynamicPropertySheetExtension_isDynamicProperty(self *C.QDesignerDynamicPropertySheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerDynamicPropertySheetExtension) OnCanAddDynamicProperty(slot func(propertyName string) bool) {
	ok := C.QDesignerDynamicPropertySheetExtension_override_virtual_canAddDynamicProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerDynamicPropertySheetExtension_canAddDynamicProperty
func miqt_exec_callback_QDesignerDynamicPropertySheetExtension_canAddDynamicProperty(self *C.QDesignerDynamicPropertySheetExtension, cb C.intptr_t, propertyName C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(propertyName string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var propertyName_ms C.struct_miqt_string = propertyName
	propertyName_ret := C.GoStringN(propertyName_ms.data, C.int(int64(propertyName_ms.len)))
	C.free(unsafe.Pointer(propertyName_ms.data))
	slotval1 := propertyName_ret

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QDesignerDynamicPropertySheetExtension) Delete() {
	C.QDesignerDynamicPropertySheetExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerDynamicPropertySheetExtension) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerDynamicPropertySheetExtension) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
