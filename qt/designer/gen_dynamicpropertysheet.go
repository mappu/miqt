package designer

/*

#include "gen_dynamicpropertysheet.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
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

func (this *QDesignerDynamicPropertySheetExtension) DynamicPropertiesAllowed() bool {
	return (bool)(C.QDesignerDynamicPropertySheetExtension_dynamicPropertiesAllowed(this.h))
}

func (this *QDesignerDynamicPropertySheetExtension) AddDynamicProperty(propertyName string, value *qt.QVariant) int {
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

func (this *QDesignerDynamicPropertySheetExtension) OperatorAssign(param1 *QDesignerDynamicPropertySheetExtension) {
	C.QDesignerDynamicPropertySheetExtension_operatorAssign(this.h, param1.cPointer())
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
